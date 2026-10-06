/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107a16ba0; end: 107a16ba3; -[SCStoryManagementActionBarActionHandler didDeleteSnapProStorySnaps:] */

void FUN_107a16ba0(void)

{
  return;
}



/* Entry: 107a16ba4; end: 107a16c37; -[SCStoryManagementActionBarActionHandler _sendSnapWithClientId:] */

void FUN_107a16ba4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf22b60(uVar2,param_2,param_3,uVar3,lVar1,0xb8,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x30),param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107a16c38; end: 107a16c7f; -[SCStoryManagementActionBarActionHandler didCompleteStoryShareScope] */

void FUN_107a16c38(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 107a16c80; end: 107a16c87; -[SCStoryManagementActionBarActionHandler operaEventAnnouncer] */

undefined8 FUN_107a16c80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107a16c88; end: 107a16cb7; -[SCStoryManagementActionBarActionHandler setOperaEventAnnouncer:] */

void FUN_107a16c88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a16cb8; end: 107a16d2b; -[SCStoryManagementActionBarActionHandler .cxx_destruct] */

void FUN_107a16cb8(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a16d2c; end: 107a170d7; -[SCStoryManagementDataSource initWithStoryId:storyType:variant:userSessionUserId:myStoriesDataCoordinator:customStoriesDataFetcher:snapViewerDataCoordinator:snapchatterFetcher:storiesDataCoordinator:plusServices:profileRepostSectionEnabled:] */

undefined8 *
FUN_107a16d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_70 = PTR_PTR_1126f94f8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_3;
    _objc_release(uVar2);
    puVar1[0x16] = param_4;
    puVar1[0x17] = param_5;
    _objc_retain(param_6);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[1];
    puVar1[1] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[2];
    puVar1[2] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[3];
    puVar1[3] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[4];
    puVar1[4] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[5];
    puVar1[5] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[6];
    puVar1[6] = param_12;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 7) = param_13;
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[8];
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21b4a0(puVar1[9]);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[0xb];
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR____NSDictionary0__struct_11034ab58;
    uVar2 = puVar1[0x10];
    puVar1[0x10] = PTR____NSDictionary0__struct_11034ab58;
    _objc_release(uVar2);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,puVar1);
    uVar2 = puVar1[8];
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107a170d8; end: 107a17103;  */

void FUN_107a170d8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea8d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a17104; end: 107a1712b; -[SCStoryManagementDataSource snapDataModelObservable] */

void FUN_107a17104(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a1712c; end: 107a17133; -[SCStoryManagementDataSource storyDisplayNameObservable] */

void FUN_107a1712c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x68),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 107a17134; end: 107a17223; -[SCStoryManagementDataSource indexForClientId:] */

undefined8 FUN_107a17134(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0x7fffffffffffffff;
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = puStack_38[3];
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    _objc_retain(param_3);
    func_0x00010bf97e80(uVar2);
    uVar2 = puStack_38[3];
    _objc_release(param_3);
  }
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 107a17224; end: 107a172af;  */

void FUN_107a17224(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(param_2);
  if ((int)uVar2 != 0) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_3;
    *param_4 = 1;
  }
  return;
}



/* Entry: 107a172b0; end: 107a1730f; -[SCStoryManagementDataSource dataModelForIndex:] */

void FUN_107a172b0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  if (param_3 != 0x7fffffffffffffff) {
    uVar1 = *(ulong *)(param_1 + 0x70);
    func_0x00010bf529e0();
    if (param_3 < uVar1) {
      func_0x00010c0dfd40(*(undefined8 *)(param_1 + 0x70),param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a17310; end: 107a17333; -[SCStoryManagementDataSource _setUp] */

void FUN_107a17310(undefined8 param_1)

{
  func_0x00010bea9140();
                    /* WARNING: Could not recover jumptable at 0x00010bea91f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setUpDisplayNameData_112587e20);
  return;
}



/* Entry: 107a17334; end: 107a178db; -[SCStoryManagementDataSource _setUpDataModelsData] */

void FUN_107a17334(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
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
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0d4c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_107a178dc;
  puStack_90 = &UNK_110864168;
  _objc_copyWeak(auStack_88,auStack_80);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x107a17924;
  puStack_b8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_b0,auStack_80);
  uVar2 = uVar4;
  func_0x00010c25ff80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c241380();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar5);
  puStack_f8 = puVar1;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x107a17950;
  puStack_e0 = &UNK_1108531d0;
  _objc_copyWeak(auStack_d8,auStack_80);
  uVar2 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010bf3d040();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c0e0e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar6);
  puStack_120 = puVar1;
  uStack_118 = 0xc2000000;
  uStack_110 = 0x107a17998;
  puStack_108 = &UNK_1108531d0;
  _objc_copyWeak(auStack_100,auStack_80);
  uVar2 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c27f840(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010c25b4e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar8);
  _objc_release(uVar7);
  puStack_148 = puVar1;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_107a179e0;
  puStack_130 = &UNK_1108634b8;
  _objc_copyWeak(auStack_128,auStack_80);
  uVar2 = uVar6;
  func_0x00010c25ff60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  lVar9 = *(long *)(param_1 + 0x30);
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c25b680();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c252440();
  *(bool *)(param_1 + 0xa0) = lVar13 == 3;
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  uVar14 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c25b680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_150,auStack_80);
  uVar16 = uVar15;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar2);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar14);
  _objc_destroyWeak(auStack_150);
  _objc_destroyWeak(auStack_128);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_100);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_d8);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 107a178dc; end: 107a179df;  */

void FUN_107a178dc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6ab40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a179e0; end: 107a17ab3;  */

void FUN_107a179e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bf0a540(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be6bb20(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a17ab4; end: 107a17c5b; -[SCStoryManagementDataSource _setUpDisplayNameData] */

void FUN_107a17ab4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar6 = *(long *)(param_1 + 0xb0);
  lVar5 = param_1;
  if (lVar6 == 1) {
    func_0x000108f57dfc();
    _objc_retainAutoreleasedReturnValue();
LAB_107a17c0c:
    func_0x00010be68fa0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar5);
    return;
  }
  if (lVar6 == 2) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf62580(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  else if ((lVar6 == 4) && (*(long *)(param_1 + 0xb8) == 2)) {
    func_0x000108f59344();
    _objc_retainAutoreleasedReturnValue();
    goto LAB_107a17c0c;
  }
  return;
}



/* Entry: 107a17c5c; end: 107a17ccb;  */

void FUN_107a17c5c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bf85d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be68fa0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a17ccc; end: 107a17d8f; -[SCStoryManagementDataSource _onPlaybackSequence:] */

void FUN_107a17ccc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  lVar1 = param_3;
  if ((param_3 != 0) && ((*(byte *)(param_1 + 0x38) & 1) != 0)) {
    if (*(long *)(param_1 + 0xb0) == 1) {
      func_0x000107d178f0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if ((*(long *)(param_1 + 0xb0) != 4) || (*(long *)(param_1 + 0xb8) != 2)) goto LAB_107a17d68;
      func_0x000107d17800(param_3,4,2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(param_3);
  }
LAB_107a17d68:
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  *(long *)(param_1 + 0x78) = lVar1;
  _objc_release(uVar2);
  func_0x00010be129e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a17d90; end: 107a17dc7; -[SCStoryManagementDataSource _onSnapIdToSnapViewers:] */

void FUN_107a17d90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be129f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchMissingSnapchattersIfNeces_112562418);
  return;
}



/* Entry: 107a17dc8; end: 107a17dff; -[SCStoryManagementDataSource _onPostingStates:] */

void FUN_107a17dc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed6a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateDataModels_112593430);
  return;
}



/* Entry: 107a17e00; end: 107a17fa7; -[SCStoryManagementDataSource _onStorySummaryInfos:] */

/* WARNING: Possible PIC construction at 0x000107a17f4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107a18428: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107a17f50) */

void FUN_107a17e00(undefined *param_1,undefined1 *param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lStack_428;
  undefined *puStack_410;
  undefined8 uStack_408;
  code *pcStack_400;
  undefined *puStack_3f8;
  undefined1 auStack_3f0 [8];
  undefined1 auStack_3e8 [8];
  undefined8 uStack_3e0;
  long lStack_3d8;
  long *plStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  long lStack_398;
  long *plStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_1a0;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  do {
    if (puVar2 == (undefined *)0x0) {
      _objc_release(param_3);
      func_0x00010bf51e00();
      uVar11 = *(undefined8 *)(param_1 + 0x90);
      *(undefined **)(param_1 + 0x90) = puVar1;
      _objc_release(uVar11);
      param_3 = param_1;
code_r0x00010bed6a20:
                    /* WARNING: Could not recover jumptable at 0x00010bed6a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__updateDataModels_112593430);
      return;
    }
    puVar16 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(param_3);
      }
      ppuVar12 = *(undefined ***)((long)puVar16 * 8);
      ppuVar3 = ppuVar12;
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar3;
      func_0x00010c08fa60();
      _objc_release(ppuVar3);
      if (ppuVar4 == (undefined **)0x0) {
        _objc_release(param_3);
        _objc_release(puVar1);
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
          return;
        }
        ___stack_chk_fail();
        lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar2 = param_3;
        if (*(long *)(param_3 + 0x78) == 0) goto LAB_107a1843c;
        lVar5 = *(long *)(param_3 + 0x80);
        func_0x00010bf529e0();
        if (lVar5 != 0) {
          puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
          _objc_opt_new();
          puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
          uVar11 = *(undefined8 *)(param_3 + 0x98);
          func_0x00010bf002e0(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c225c20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar11);
          uStack_338 = 0;
          uStack_340 = 0;
          uStack_328 = 0;
          uStack_330 = 0;
          lStack_358 = 0;
          uStack_360 = 0;
          uStack_348 = 0;
          plStack_350 = (long *)0x0;
          lVar5 = *(long *)(param_3 + 0x78);
          func_0x00010c25b340();
          _objc_retainAutoreleasedReturnValue();
          lStack_428 = lVar5;
          func_0x00010bf52a60();
          if (lStack_428 != 0) {
            lVar10 = *plStack_350;
            do {
              lVar13 = 0;
              do {
                if (*plStack_350 != lVar10) {
                  _objc_enumerationMutation(lVar5);
                }
                lVar6 = *(long *)(lStack_358 + lVar13 * 8);
                func_0x00010c15f2e0();
                _objc_retainAutoreleasedReturnValue();
                lVar7 = lVar6;
                func_0x00010c08fa60();
                if (lVar7 != 0) {
                  lVar8 = *(long *)(param_3 + 0x80);
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  uStack_378 = 0;
                  uStack_380 = 0;
                  uStack_368 = 0;
                  uStack_370 = 0;
                  lStack_398 = 0;
                  uStack_3a0 = 0;
                  uStack_388 = 0;
                  plStack_390 = (long *)0x0;
                  lVar7 = lVar8;
                  func_0x00010bfb9200();
                  _objc_retainAutoreleasedReturnValue();
                  lVar9 = lVar7;
                  func_0x00010bf52a60();
                  if (lVar9 != 0) {
                    lVar15 = *plStack_390;
                    do {
                      lVar14 = 0;
                      do {
                        if (*plStack_390 != lVar15) {
                          _objc_enumerationMutation(lVar7);
                        }
                        uVar17 = *(undefined8 *)(lStack_398 + lVar14 * 8);
                        uVar11 = uVar17;
                        func_0x00010c2923e0(uVar17);
                        _objc_retainAutoreleasedReturnValue();
                        puVar16 = puVar1;
                        func_0x00010bf4b900();
                        _objc_release(uVar11);
                        if (((ulong)puVar16 & 1) == 0) {
                          func_0x00010c2923e0(uVar17);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010befa120(puVar2);
                          _objc_release(uVar17);
                        }
                        lVar14 = lVar14 + 1;
                      } while (lVar9 != lVar14);
                      lVar9 = lVar7;
                      func_0x00010bf52a60();
                    } while (lVar9 != 0);
                  }
                  _objc_release(lVar7);
                  uStack_3b8 = 0;
                  uStack_3c0 = 0;
                  uStack_3a8 = 0;
                  uStack_3b0 = 0;
                  lStack_3d8 = 0;
                  uStack_3e0 = 0;
                  uStack_3c8 = 0;
                  plStack_3d0 = (long *)0x0;
                  lVar7 = lVar8;
                  func_0x00010c0edf60();
                  _objc_retainAutoreleasedReturnValue();
                  lVar9 = lVar7;
                  func_0x00010bf52a60();
                  if (lVar9 != 0) {
                    lVar15 = *plStack_3d0;
                    do {
                      lVar14 = 0;
                      do {
                        if (*plStack_3d0 != lVar15) {
                          _objc_enumerationMutation(lVar7);
                        }
                        uVar17 = *(undefined8 *)(lStack_3d8 + lVar14 * 8);
                        uVar11 = uVar17;
                        func_0x00010c2923e0(uVar17);
                        _objc_retainAutoreleasedReturnValue();
                        puVar16 = puVar1;
                        func_0x00010bf4b900();
                        _objc_release(uVar11);
                        if (((ulong)puVar16 & 1) == 0) {
                          func_0x00010c2923e0(uVar17);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010befa120(puVar2);
                          _objc_release(uVar17);
                        }
                        lVar14 = lVar14 + 1;
                      } while (lVar9 != lVar14);
                      lVar9 = lVar7;
                      func_0x00010bf52a60();
                    } while (lVar9 != 0);
                  }
                  _objc_release(lVar7);
                  _objc_release(lVar8);
                }
                _objc_release(lVar6);
                lVar13 = lVar13 + 1;
              } while (lVar13 != lStack_428);
              lStack_428 = lVar5;
              func_0x00010bf52a60();
            } while (lStack_428 != 0);
          }
          _objc_release(lVar5);
          puVar16 = puVar2;
          func_0x00010bf529e0();
          if (puVar16 == (undefined *)0x0) goto code_r0x00010bed6a20;
          _objc_initWeak(auStack_3e8,param_3);
          uVar11 = *(undefined8 *)(param_3 + 0x20);
          func_0x00010c269d40(uVar11);
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar2;
          func_0x00010bf00560(puVar2);
          _objc_retainAutoreleasedReturnValue();
          uVar17 = *(undefined8 *)(param_3 + 0x40);
          func_0x00010c11de00(uVar17);
          _objc_retainAutoreleasedReturnValue();
          puStack_410 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_408 = 0xc2000000;
          pcStack_400 = FUN_107a184a4;
          puStack_3f8 = &UNK_1109f5358;
          ppuVar3 = &puStack_410;
          param_2 = auStack_3e8;
          _objc_copyWeak(auStack_3f0,param_2);
          func_0x00010bfaa4c0(uVar11);
          _objc_release(uVar17);
          _objc_release(puVar16);
          _objc_release(uVar11);
          _objc_destroyWeak(auStack_3f0);
          _objc_destroyWeak(auStack_3e8);
          _objc_release(puVar1);
          _objc_release();
LAB_107a1843c:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
            return;
          }
LAB_107a18474:
          ___stack_chk_fail();
          _objc_destroyWeak(ppuVar3 + 4);
          _objc_destroyWeak(auStack_3e8);
          __Unwind_Resume(puVar2);
          _objc_retain(param_2);
          puVar2 = puVar2 + 0x20;
          _objc_loadWeakRetained(puVar2);
          func_0x00010be6b8a0();
          _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_release_11034d2d0)(puVar2);
          return;
        }
        puVar2 = (undefined *)0x0;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a0) goto LAB_107a18474;
        goto code_r0x00010bed6a20;
      }
      func_0x00010c259cc0(ppuVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(ppuVar12);
      puVar16 = puVar16 + 1;
    } while (puVar2 != puVar16);
    puVar2 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107a17fa8; end: 107a184a3; -[SCStoryManagementDataSource _fetchMissingSnapchattersIfNecessary] */

/* WARNING: Possible PIC construction at 0x000107a18428: Changing call to branch */

void FUN_107a17fa8(undefined *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined **unaff_x24;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lStack_2f8;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  code *pcStack_2d0;
  undefined *puStack_2c8;
  undefined1 auStack_2c0 [8];
  undefined1 auStack_2b8 [8];
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_1;
  if (*(long *)(param_1 + 0x78) != 0) {
    lVar1 = *(long *)(param_1 + 0x80);
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      puVar2 = (undefined *)0x0;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto code_r0x00010bed6a20;
      goto LAB_107a18474;
    }
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010bf002e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    lVar1 = *(long *)(param_1 + 0x78);
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    lStack_2f8 = lVar1;
    func_0x00010bf52a60();
    if (lStack_2f8 != 0) {
      lVar10 = *plStack_220;
      do {
        lVar11 = 0;
        do {
          if (*plStack_220 != lVar10) {
            _objc_enumerationMutation(lVar1);
          }
          lVar5 = *(long *)(lStack_228 + lVar11 * 8);
          func_0x00010c15f2e0();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010c08fa60();
          if (lVar6 != 0) {
            lVar7 = *(long *)(param_1 + 0x80);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            uStack_248 = 0;
            uStack_250 = 0;
            uStack_238 = 0;
            uStack_240 = 0;
            lStack_268 = 0;
            uStack_270 = 0;
            uStack_258 = 0;
            plStack_260 = (long *)0x0;
            lVar6 = lVar7;
            func_0x00010bfb9200();
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar6;
            func_0x00010bf52a60();
            if (lVar8 != 0) {
              lVar13 = *plStack_260;
              do {
                lVar12 = 0;
                do {
                  if (*plStack_260 != lVar13) {
                    _objc_enumerationMutation(lVar6);
                  }
                  uVar14 = *(undefined8 *)(lStack_268 + lVar12 * 8);
                  uVar3 = uVar14;
                  func_0x00010c2923e0(uVar14);
                  _objc_retainAutoreleasedReturnValue();
                  puVar9 = puVar4;
                  func_0x00010bf4b900();
                  _objc_release(uVar3);
                  if (((ulong)puVar9 & 1) == 0) {
                    func_0x00010c2923e0(uVar14);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befa120(puVar2);
                    _objc_release(uVar14);
                  }
                  lVar12 = lVar12 + 1;
                } while (lVar8 != lVar12);
                lVar8 = lVar6;
                func_0x00010bf52a60();
              } while (lVar8 != 0);
            }
            _objc_release(lVar6);
            uStack_288 = 0;
            uStack_290 = 0;
            uStack_278 = 0;
            uStack_280 = 0;
            lStack_2a8 = 0;
            uStack_2b0 = 0;
            uStack_298 = 0;
            plStack_2a0 = (long *)0x0;
            lVar6 = lVar7;
            func_0x00010c0edf60();
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar6;
            func_0x00010bf52a60();
            if (lVar8 != 0) {
              lVar13 = *plStack_2a0;
              do {
                lVar12 = 0;
                do {
                  if (*plStack_2a0 != lVar13) {
                    _objc_enumerationMutation(lVar6);
                  }
                  uVar14 = *(undefined8 *)(lStack_2a8 + lVar12 * 8);
                  uVar3 = uVar14;
                  func_0x00010c2923e0(uVar14);
                  _objc_retainAutoreleasedReturnValue();
                  puVar9 = puVar4;
                  func_0x00010bf4b900();
                  _objc_release(uVar3);
                  if (((ulong)puVar9 & 1) == 0) {
                    func_0x00010c2923e0(uVar14);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befa120(puVar2);
                    _objc_release(uVar14);
                  }
                  lVar12 = lVar12 + 1;
                } while (lVar8 != lVar12);
                lVar8 = lVar6;
                func_0x00010bf52a60();
              } while (lVar8 != 0);
            }
            _objc_release(lVar6);
            _objc_release(lVar7);
          }
          _objc_release(lVar5);
          lVar11 = lVar11 + 1;
        } while (lVar11 != lStack_2f8);
        lStack_2f8 = lVar1;
        func_0x00010bf52a60();
      } while (lStack_2f8 != 0);
    }
    _objc_release(lVar1);
    puVar9 = puVar2;
    func_0x00010bf529e0();
    if (puVar9 == (undefined *)0x0) {
code_r0x00010bed6a20:
                    /* WARNING: Could not recover jumptable at 0x00010bed6a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateDataModels_112593430);
      return;
    }
    _objc_initWeak(auStack_2b8,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010bf00560(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c11de00(uVar14);
    _objc_retainAutoreleasedReturnValue();
    puStack_2e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2d8 = 0xc2000000;
    pcStack_2d0 = FUN_107a184a4;
    puStack_2c8 = &UNK_1109f5358;
    unaff_x24 = &puStack_2e0;
    param_2 = auStack_2b8;
    _objc_copyWeak(auStack_2c0,param_2);
    func_0x00010bfaa4c0(uVar3);
    _objc_release(uVar14);
    _objc_release(puVar9);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_2c0);
    _objc_destroyWeak(auStack_2b8);
    _objc_release(puVar4);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
LAB_107a18474:
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x24 + 4);
  _objc_destroyWeak(auStack_2b8);
  __Unwind_Resume(puVar2);
  _objc_retain(param_2);
  puVar2 = puVar2 + 0x20;
  _objc_loadWeakRetained(puVar2);
  func_0x00010be6b8a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107a184a4; end: 107a184eb;  */

void FUN_107a184a4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b8a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a184ec; end: 107a18557; -[SCStoryManagementDataSource _onSnapchattersFetched:] */

void FUN_107a184ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107a18558;
  puStack_30 = &UNK_1109f5388;
  uStack_28 = param_1;
  func_0x00010bf97ce0(param_3,param_2,&puStack_48);
  func_0x00010bed6a20(param_1);
  return;
}



/* Entry: 107a18558; end: 107a18567;  */

void FUN_107a18558(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98),
             PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,param_2);
  return;
}



/* Entry: 107a18568; end: 107a1866f; -[SCStoryManagementDataSource _updateDataModels] */

void FUN_107a18568(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107a18670;
  puStack_50 = &UNK_1108537c0;
  uVar3 = uVar2;
  lStack_48 = param_1;
  func_0x0001006372a4();
  _objc_release(uVar2);
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107a186c0;
  puStack_78 = &UNK_1109f53b8;
  uVar2 = uVar3;
  lStack_70 = param_1;
  func_0x000100504554(uVar3,&puStack_90);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x107a18b04;
  puStack_a8 = &UNK_110841f80;
  uStack_a0 = uVar2;
  lStack_98 = param_1;
  _objc_retain();
  func_0x000100162d98("APPSTORE",&puStack_c0);
  _objc_release(uStack_a0);
  _objc_release(uVar2);
  _objc_release(uVar3);
  return;
}



/* Entry: 107a18670; end: 107a186bf;  */

undefined8 FUN_107a18670(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xc0);
  func_0x00010bf5bbc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(uVar1);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 107a186c0; end: 107a18a4b;  */

void FUN_107a186c0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_2);
  lVar12 = *(long *)(*(long *)(param_1 + 0x20) + 0x88);
  lVar1 = param_2;
  func_0x00010bf3cf60(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar12 != 0) {
    func_0x00010c067fc0();
  }
  lVar1 = param_2;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80);
    lVar2 = param_2;
    func_0x00010c15f2e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  func_0x00010bfb91e0();
  func_0x00010c0edf40();
  func_0x00010bfb8ac0();
  func_0x00010c0edf20();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25ae60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c252440();
  if (lVar5 == 3) {
    func_0x00010c140600();
  }
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar3);
  uVar6 = uVar13;
  func_0x00010bfb9200(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  FUN_107a18a4c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = uVar13;
  func_0x00010c0edf60();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  FUN_107a18a4c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90);
  uVar6 = uVar13;
  func_0x00010bfb9200(uVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar14);
  uVar9 = uVar6;
  func_0x000100504554(uVar6,&PTR___NSConcreteGlobalBlock_1109f5438);
  puVar10 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107a18e20;
  puStack_70 = &UNK_110894890;
  puStack_68 = puVar10;
  _objc_retain();
  uVar11 = uVar14;
  func_0x00010bd869d0(uVar14,&puStack_88,&PTR___NSConcreteGlobalBlock_1109f5458);
  _objc_release(uVar14);
  _objc_release(puStack_68);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar6);
  puVar10 = PTR_PTR_1126d5e88;
  _objc_alloc(PTR_PTR_1126d5e88);
  func_0x00010c047060();
  _objc_release(uVar11);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 107a18a4c; end: 107a18b47;  */

void FUN_107a18a4c(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = param_1;
  func_0x00010bf529e0();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_107a18d24;
    puStack_40 = &UNK_1109f53e8;
    _objc_retain(param_2);
    puVar2 = param_1;
    uStack_38 = param_2;
    func_0x000100504554(param_1,&puStack_58);
    _objc_release(uStack_38);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a18b48; end: 107a18b4f; -[SCStoryManagementDataSource _onDisplayNameUpdate:] */

void FUN_107a18b48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x68),PTR_s_next__112614028);
  return;
}



/* Entry: 107a18b50; end: 107a18ba7; -[SCStoryManagementDataSource _onPlaybackSequenceComplete] */

void FUN_107a18b50(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107a18ba8;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 107a18ba8; end: 107a18be3;  */

void FUN_107a18ba8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x70) = PTR____NSArray0__struct_11034ab48;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 107a18be4; end: 107a18bfb; -[SCStoryManagementDataSource _onShowViewTimestampsUpdated:] */

void FUN_107a18be4(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0xa0) == param_3) {
    return;
  }
  *(char *)(param_1 + 0xa0) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bed6a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateDataModels_112593430);
  return;
}



/* Entry: 107a18bfc; end: 107a18c03; -[SCStoryManagementDataSource storyId] */

undefined8 FUN_107a18bfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 107a18c04; end: 107a18c0b; -[SCStoryManagementDataSource storyType] */

undefined8 FUN_107a18c04(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 107a18c0c; end: 107a18c13; -[SCStoryManagementDataSource variant] */

undefined8 FUN_107a18c0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 107a18c14; end: 107a18c1b; -[SCStoryManagementDataSource userId] */

undefined8 FUN_107a18c14(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 107a18c1c; end: 107a18d23; -[SCStoryManagementDataSource .cxx_destruct] */

void FUN_107a18c1c(long param_1)

{
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
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



/* Entry: 107a18d24; end: 107a18e17;  */

void FUN_107a18d24(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126d5e90;
    _objc_alloc(PTR_PTR_1126d5e90);
    func_0x00010c151b40(param_2);
    func_0x00010c14b7c0(param_2);
    uVar1 = param_2;
    func_0x00010c29e5a0(param_2);
    func_0x000100bc47dc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0427a0(puVar3);
    _objc_release(uVar1);
  }
  _objc_release(lVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107a18e18; end: 107a18e1f;  */

void FUN_107a18e18(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 107a18e20; end: 107a18e9f;  */

void FUN_107a18e20(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b900();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    _objc_retain(param_2);
    uVar2 = param_2;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107a18ea0; end: 107a18fa7; -[SCStoryManagementLogger initWithPagingController:dataSource:blizzardLogger:] */

undefined1 *
FUN_107a18ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f9500;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(long *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    lVar4 = param_4;
    func_0x00010c25b720();
    uVar2 = 6;
    if (lVar4 != 2) {
      uVar2 = 0;
    }
    if (lVar4 == 3) {
      uVar2 = 1;
    }
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a18fa8; end: 107a19127; -[SCStoryManagementLogger beginLoggingSession] */

void FUN_107a18fa8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf600e0(*(undefined8 *)(param_1 + 8));
  func_0x00010bf63e40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar1;
  _objc_release(uVar4);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf60100(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0e80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107a19128; end: 107a19187;  */

void FUN_107a19128(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c067fc0(param_2);
  _objc_release(param_2);
  func_0x00010be6a440(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a19188; end: 107a19303; -[SCStoryManagementLogger _onNewSnapIndex:] */

void FUN_107a19188(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  uVar1 = *(ulong *)(param_2 + 0x10);
  func_0x00010bf63e40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_2 + 0x28);
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    _objc_release(lVar2);
  }
  else {
    uVar4 = uVar1;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c23f220(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c0720c0(uVar5,param_3,uVar9);
    _objc_release(uVar9);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    if ((uVar7 & 1) != 0) goto LAB_107a192e0;
  }
  puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new();
  func_0x00010c26f380();
  func_0x00010c0b10c0(*(undefined8 *)(param_2 + 0x18),param_3,*(undefined8 *)(param_2 + 0x20));
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  uVar9 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c29c5c0(uVar9);
  func_0x00010c0b12a0(param_1,uVar6,param_3,uVar9);
  _objc_retain(uVar1);
  uVar9 = *(undefined8 *)(param_2 + 0x28);
  *(ulong *)(param_2 + 0x28) = uVar1;
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(param_2 + 0x30);
  *(undefined **)(param_2 + 0x30) = puVar8;
  _objc_release(uVar9);
LAB_107a192e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a19304; end: 107a19393; -[SCStoryManagementLogger endLoggingSession] */

void FUN_107a19304(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f380();
  func_0x00010c0b10c0(*(undefined8 *)(param_2 + 0x18),param_3,*(undefined8 *)(param_2 + 0x20));
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c29c5c0(uVar2);
  func_0x00010c0b12a0(param_1,uVar3,param_3,uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  _objc_release(uVar2);
  func_0x00010bf86d80(*(undefined8 *)(param_2 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a19394; end: 107a193f3; -[SCStoryManagementLogger .cxx_destruct] */

void FUN_107a19394(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a193f4; end: 107a19443; -[SCStoryManagementFlowLayout initWithCellWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a193f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f9508;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112768028) = param_1;
  }
  return;
}



/* Entry: 107a19444; end: 107a194c3; -[SCStoryManagementFlowLayout targetContentOffsetForProposedContentOffset:withScrollingVelocity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_107a19444(double param_1,double param_2,long param_3)

{
  long lVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  lVar1 = param_3;
  dVar3 = param_2;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befda00();
  _objc_release(lVar1);
  dVar2 = (double)NEON_ucvtf((long)((param_1 + dVar3) / *(double *)(param_3 + _DAT_112768028) + 0.5)
                            );
  auVar4._0_8_ = dVar2 * *(double *)(param_3 + _DAT_112768028) - dVar3;
  auVar4._8_8_ = param_2;
  return auVar4;
}



/* Entry: 107a194c4; end: 107a19717; -[SCStoryManagementFlowLayout prepareLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a194c4(double param_1,double param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  ulong uStack_a0;
  undefined *puStack_98;
  
  puStack_98 = PTR_PTR_1126f9508;
  uStack_a0 = param_3;
  _objc_msgSendSuper2(&uStack_a0,PTR_s_prepareLayout_112620088);
  uVar2 = param_3;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x00010010fab4();
  uVar1 = uVar3;
  if ((int)uVar10 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar11 = (long)_DAT_11276802c;
  uVar9 = *(undefined8 *)(param_3 + lVar11);
  *(undefined **)(param_3 + lVar11) = puVar4;
  _objc_release(uVar9);
  uVar3 = uVar2;
  func_0x00010c0deec0();
  puVar4 = PTR_s_collectionView_layout_sizeForIte_1125adac8;
  if (uVar3 == 0) {
    dVar12 = 0.0;
  }
  else {
    uVar10 = 0;
    dVar15 = *(double *)PTR__CGSizeZero_110347620;
    dVar16 = *(double *)(PTR__CGSizeZero_110347620 + 8);
    dVar12 = 0.0;
    do {
      puVar5 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar1;
      _objc_opt_respondsToSelector(uVar1,puVar4);
      dVar13 = dVar15;
      dVar14 = dVar16;
      if ((uVar6 & 1) != 0) {
        func_0x00010bf40480(uVar1);
        dVar13 = param_1;
        dVar14 = param_2;
      }
      puVar7 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
      func_0x00010c08c8e0(PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1739e0(0,0,dVar13,dVar14);
      param_1 = dVar12;
      _CGRectGetMidX(dVar12,0,dVar13,dVar14);
      param_2 = dVar12;
      _CGRectGetMidY(dVar12,0,dVar13,dVar14);
      func_0x00010c17a6a0(puVar7);
      puVar8 = puVar7;
      func_0x00010bf51e00(puVar7);
      func_0x00010c1d0640(*(undefined8 *)(param_3 + lVar11));
      _objc_release(puVar8);
      dVar12 = dVar12 + dVar13;
      _objc_release(puVar7);
      _objc_release(puVar5);
      uVar10 = uVar10 + 1;
    } while (uVar3 != uVar10);
  }
  lVar11 = (long)_DAT_112768030;
  func_0x00010bf20c00(uVar2);
  _CGRectGetHeight();
  *(double *)(param_3 + lVar11) = dVar12;
  ((double *)(param_3 + lVar11))[1] = param_1;
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 107a19718; end: 107a1972b; -[SCStoryManagementFlowLayout collectionViewContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_107a19718(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112768030);
}



/* Entry: 107a1972c; end: 107a197d3; -[SCStoryManagementFlowLayout layoutAttributesForElementsInRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1972c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276802c);
  func_0x00010bf00d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001006372a4();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107a197d4; end: 107a197ff;  */

void FUN_107a197d4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bfb68e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectIntersectsRect_1103475c8)();
  return;
}



/* Entry: 107a19800; end: 107a1980f; -[SCStoryManagementFlowLayout layoutAttributesForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a19800(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276802c),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 107a19810; end: 107a19823; -[SCStoryManagementFlowLayout .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a19810(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276802c,0);
  return;
}



/* Entry: 107a19824; end: 107a19903; -[SCStoryManagementPagingController initWithSnapCarouselCollectionView:snapViewersCollectionView:dataSource:] */

undefined1 *
FUN_107a19824(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f9510;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x48) = 0x7fffffffffffffff;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a19904; end: 107a19973; -[SCStoryManagementPagingController clientIdForCurrentIndex] */

void FUN_107a19904(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf63e40(uVar3,param_2,*(undefined8 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107a19974; end: 107a19b4b; -[SCStoryManagementPagingController pageToClientId:animated:] */

void FUN_107a19974(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010bfecb20(lVar2,param_2,param_3);
    if (lVar2 != 0x7fffffffffffffff) {
      lVar3 = param_1 + 0x10;
      _objc_loadWeakRetained();
      lVar4 = lVar3;
      func_0x00010c0df2e0();
      _objc_release(lVar3);
      if (lVar4 != 0) {
        lVar3 = param_1 + 0x10;
        _objc_loadWeakRetained();
        lVar4 = lVar3;
        func_0x00010c0deec0();
        _objc_release(lVar3);
        if (lVar2 < lVar4) {
          lVar3 = param_1 + 0x10;
          _objc_loadWeakRetained();
          uVar7 = *(undefined8 *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar3;
          _objc_release(uVar7);
          *(undefined1 *)(param_1 + 0x39) = 1;
          puVar5 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
          func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,lVar2,0);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
          puVar6 = PTR___NSConcreteStackBlock_11034bd00;
          if (param_4 == 0) {
            lVar2 = param_1 + 0x10;
            _objc_loadWeakRetained(lVar2);
            func_0x00010c1525a0();
            _objc_release(lVar2);
            puVar6 = (undefined *)(param_1 + 0x10);
            _objc_loadWeakRetained(puVar6);
            func_0x00010be9c2e0(param_1,param_2,puVar6);
          }
          else {
            puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_78 = 0xc2000000;
            pcStack_70 = FUN_107a19b4c;
            puStack_68 = &UNK_110841f80;
            lStack_60 = param_1;
            _objc_retain(puVar5);
            puStack_a8 = puVar6;
            uStack_a0 = 0xc2000000;
            uStack_98 = 0x107a19b8c;
            puStack_90 = &UNK_110841f20;
            lStack_88 = param_1;
            puStack_58 = puVar5;
            func_0x00010bf03420(0x3fc999999999999a,puVar1,param_2,&puStack_80,&puStack_a8);
            puVar6 = puStack_58;
          }
          _objc_release(puVar6);
          _objc_release(puVar5);
        }
      }
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107a19b4c; end: 107a19bc3;  */

void FUN_107a19b4c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1525a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a19bc4; end: 107a19cd7; -[SCStoryManagementPagingController updateCurrentSnapIndex] */

void FUN_107a19bc4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010bdf7140();
  *(long *)(param_1 + 0x48) = lVar1;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4,param_2,puVar2);
  _objc_release(puVar2);
  lVar1 = param_1;
  func_0x00010bf3cf80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    ppuStack_48 = &PTR____CFConstantStringClassReference_110ddd998;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_40 = lVar1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_40,&ppuStack_48,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7e0(uVar4,param_2,&PTR____CFConstantStringClassReference_110ea9f18,puVar2);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(lVar1 + 0x20);
  _objc_retain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107a19cd8; end: 107a19cff; -[SCStoryManagementPagingController currentSnapIndexObservable] */

void FUN_107a19cd8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a19d00; end: 107a19ea3; -[SCStoryManagementPagingController scrollViewDidScroll:] */

void FUN_107a19d00(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  if (param_6 == *(long *)(param_4 + 0x28)) {
    lVar3 = param_4 + 8;
    _objc_retain(param_6);
    lVar1 = lVar3;
    _objc_loadWeakRetained();
    _objc_release(param_6);
    _objc_release(lVar1);
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(puVar2);
    dVar4 = 84.0;
    if (param_6 == lVar1) {
      _objc_loadWeakRetained(lVar3);
      func_0x00010bf4cdc0();
      dVar5 = dVar4;
      func_0x00010bebc840(param_4);
      dVar5 = (param_3 / 84.0) * (dVar4 + dVar5);
      _objc_release(lVar3);
      lVar3 = param_4 + 0x10;
    }
    else {
      lVar1 = param_4 + 0x10;
      _objc_loadWeakRetained(lVar1);
      func_0x00010bf4cdc0();
      dVar5 = dVar4;
      func_0x00010bebc840(param_4);
      dVar5 = (84.0 / param_3) * dVar4 - dVar5;
      _objc_release(lVar1);
    }
    lVar1 = lVar3;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf4cdc0();
    _objc_loadWeakRetained(lVar3);
    func_0x00010c1822e0(dVar5,param_2);
    _objc_release(lVar3);
    _objc_release(lVar1);
    lVar3 = param_4;
    func_0x00010bdf7160();
    if ((*(char *)(param_4 + 0x38) == '\x01') && (*(long *)(param_4 + 0x30) != lVar3)) {
      *(long *)(param_4 + 0x30) = lVar3;
      puVar2 = PTR_PTR_1126affa8;
      func_0x00010c22bc20(PTR_PTR_1126affa8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f8760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar2);
      return;
    }
  }
  return;
}



/* Entry: 107a19ea4; end: 107a19ee3; -[SCStoryManagementPagingController _snapCarouselContentInsetLeft] */

undefined8 FUN_107a19ea4(undefined8 param_1,undefined8 param_2,long param_3)

{
  param_3 = param_3 + 8;
  _objc_loadWeakRetained(param_3);
  func_0x00010befda00();
  _objc_release(param_3);
  return param_2;
}



/* Entry: 107a19ee4; end: 107a19f9b; -[SCStoryManagementPagingController scrollViewWillBeginDragging:] */

void FUN_107a19ee4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_opt_class(PTR__OBJC_CLASS___UICollectionView_1126afd20);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar5 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(ulong *)(param_1 + 0x28) = uVar5;
  _objc_release(uVar3);
  *(undefined1 *)(param_1 + 0x39) = 1;
  lVar4 = param_1;
  func_0x00010bdf7160();
  *(long *)(param_1 + 0x30) = lVar4;
  *(undefined1 *)(param_1 + 0x38) = 1;
  uVar2 = param_1 + 8U;
  _objc_loadWeakRetained();
  _objc_release();
  uVar5 = param_1 + 0x10;
  if (param_3 != uVar2) {
    uVar5 = param_1 + 8U;
  }
  _objc_loadWeakRetained(uVar5);
  func_0x00010c1f7b20();
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a19f9c; end: 107a19fa7; -[SCStoryManagementPagingController scrollViewDidEndDragging:willDecelerate:] */

void FUN_107a19f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if ((param_4 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be9c2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scrollViewDidEndScrolling__112584a60);
  return;
}



/* Entry: 107a19fa8; end: 107a19fab; -[SCStoryManagementPagingController scrollViewDidEndDecelerating:] */

void FUN_107a19fa8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9c2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scrollViewDidEndScrolling__112584a60);
  return;
}



/* Entry: 107a19fac; end: 107a19faf; -[SCStoryManagementPagingController scrollViewDidEndScrollingAnimation:] */

void FUN_107a19fac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9c2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scrollViewDidEndScrolling__112584a60);
  return;
}



/* Entry: 107a19fb0; end: 107a1a033; -[SCStoryManagementPagingController _scrollViewDidEndScrolling:] */

void FUN_107a19fb0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != *(long *)(param_1 + 0x28)) {
    return;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release();
  *(undefined8 *)(param_1 + 0x30) = 0x7fffffffffffffff;
  *(undefined2 *)(param_1 + 0x38) = 0;
  func_0x00010c284c60(param_1);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1f7b20();
  _objc_release(lVar1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1f7b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a1a034; end: 107a1a0af; -[SCStoryManagementPagingController _currentSnapIndex] */

long FUN_107a1a034(double param_1,undefined8 param_2,double param_3,long param_4)

{
  undefined *puVar1;
  
  param_4 = param_4 + 0x10;
  _objc_loadWeakRetained(param_4);
  func_0x00010bf4cdc0();
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar1);
  _objc_release(param_4);
  return (long)(param_1 / param_3 + 0.5);
}



/* Entry: 107a1a0b0; end: 107a1a13b; -[SCStoryManagementPagingController _currentSnapIndexDuringScrolling] */

ulong FUN_107a1a0b0(double param_1,undefined8 param_2,double param_3,ulong param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  
  lVar1 = param_4 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf4d5e0();
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar3 = (long)(param_1 / param_3) - 1;
  _objc_release(puVar2);
  _objc_release(lVar1);
  func_0x00010bdf7140();
  param_4 = param_4 & ((long)param_4 >> 0x3f ^ 0xffffffffffffffffU);
  if ((long)uVar3 <= (long)param_4) {
    param_4 = uVar3;
  }
  return param_4;
}



/* Entry: 107a1a13c; end: 107a1a143; -[SCStoryManagementPagingController operaEventAnnouncer] */

undefined8 FUN_107a1a13c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107a1a144; end: 107a1a173; -[SCStoryManagementPagingController setOperaEventAnnouncer:] */

void FUN_107a1a144(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a1a174; end: 107a1a17b; -[SCStoryManagementPagingController currentSnapIndex] */

undefined8 FUN_107a1a174(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107a1a17c; end: 107a1a183; -[SCStoryManagementPagingController isCurrentlyPaging] */

undefined1 FUN_107a1a17c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x39);
}



/* Entry: 107a1a184; end: 107a1a1db; -[SCStoryManagementPagingController .cxx_destruct] */

void FUN_107a1a184(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107a1a1dc; end: 107a1a22b;  */

double FUN_107a1a1dc(double param_1)

{
  func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
  return param_1 + 52.0;
}



/* Entry: 107a1a22c; end: 107a1a35f; -[SCStoryManagementView initWithFrame:shouldShowShareButtonByDefault:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107a1a22c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f9518;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c160fc0(puVar1);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276805c) = param_3;
    func_0x00010be39d20(puVar1);
    func_0x00010be394e0(puVar1);
    func_0x00010be3a4c0(puVar1);
    func_0x00010be3a400(puVar1);
    func_0x00010be3a4e0(puVar1);
    func_0x00010be393c0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112768060);
    *(undefined **)((long)puVar1 + (long)_DAT_112768060) = puVar2;
    _objc_release(uVar3);
    _objc_retain(puVar2);
    func_0x00010c178280(puVar2);
    func_0x00010bef9040(puVar1);
    _objc_release(puVar2);
    func_0x00010bed5ac0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107a1a360; end: 107a1a457; -[SCStoryManagementView _updateStoryBoostViewMeasuredHeightIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a1a360(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  
  lVar2 = (long)_DAT_112768064;
  if ((*(long *)(param_2 + lVar2) != 0) &&
     (lVar1 = (long)_DAT_112768068, *(long *)(param_2 + lVar1) != 0)) {
    func_0x00010bf20c00(param_2);
    _CGRectGetWidth();
    param_1 = param_1 + -30.0;
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    if (0.0 < param_1) {
      dVar3 = 1.79769313486232e+308;
      func_0x00010c23d5a0(param_1,*(undefined8 *)(param_2 + lVar2));
      if (dVar3 <= 0.0) {
        dVar3 = *(double *)(PTR__UILayoutFittingCompressedSize_110345d28 + 8);
        func_0x00010c267060(param_1,dVar3,0x447a0000,0x42480000,*(undefined8 *)(param_2 + lVar2));
      }
      dVar4 = (double)(long)dVar3;
      if ((0.0 < dVar4) &&
         (func_0x00010bf49220(*(undefined8 *)(param_2 + lVar1)), 0.5 < ABS(dVar3 - dVar4))) {
        func_0x00010c181140(dVar4,*(undefined8 *)(param_2 + lVar1));
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 107a1a458; end: 107a1a4cb; -[SCStoryManagementView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1a458(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9518;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  lVar1 = param_1;
  func_0x00010bee0e80();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276806c);
    func_0x00010bf408e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069fe0();
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 107a1a4cc; end: 107a1b1cb; -[SCStoryManagementView _updateConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1a4cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
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
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined *puVar34;
  long lVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  double dVar48;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = (long)_DAT_112768070;
  uVar2 = *(undefined8 *)(param_1 + lVar41);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar41);
  uStack_e0 = uVar40;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,lVar43);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar41);
  uStack_d8 = uVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar42 = (long)_DAT_112768074;
  uVar7 = *(undefined8 *)(param_1 + lVar42);
  uStack_d0 = uVar30;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar41);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar7;
  func_0x00010bf493a0(uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar42);
  uStack_c8 = uVar31;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar9;
  func_0x00010bf493a0(uVar9,param_2,lVar35);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar42);
  uStack_c0 = uVar32;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = uVar10;
  func_0x00010bf493a0(uVar10,param_2,lVar45);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar42);
  uStack_b8 = uVar33;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf493a0(uVar11,param_2,lVar42);
  _objc_retainAutoreleasedReturnValue();
  lVar47 = (long)_DAT_112768078;
  uVar13 = *(undefined8 *)(param_1 + lVar47);
  uStack_b0 = uVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf493a0(uVar13,param_2,lVar44);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar47);
  uStack_a8 = uVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar15;
  func_0x00010bf493a0(uVar15,param_2,lVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar47);
  uStack_a0 = uVar17;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010bf49420(0x4066800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar47);
  uStack_98 = uVar19;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar41);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = uVar20;
  func_0x00010bf493c0(0x4020000000000000,uVar20,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  lVar46 = (long)_DAT_11276807c;
  uVar22 = *(undefined8 *)(param_1 + lVar46);
  uStack_90 = uVar36;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar37 = uVar22;
  func_0x00010bf493c0(0x402e000000000000,uVar22,param_2,lVar41);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + lVar46);
  uStack_88 = uVar37;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar38 = uVar23;
  func_0x00010bf493c0(0xc02e000000000000,uVar23,param_2,lVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + lVar46);
  uStack_80 = uVar38;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + lVar47);
  func_0x00010bf1ff80(uVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar39 = uVar25;
  func_0x00010bf493c0(0x4020000000000000,uVar25,param_2,uVar26);
  _objc_retainAutoreleasedReturnValue();
  puVar28 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar39;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_e0,0xe);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,puVar28);
  _objc_release(puVar28);
  _objc_release(uVar39);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar38);
  _objc_release(lVar24);
  _objc_release(uVar23);
  _objc_release(uVar37);
  _objc_release(lVar41);
  _objc_release(uVar22);
  _objc_release(uVar36);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(lVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(lVar44);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(lVar42);
  _objc_release(uVar11);
  _objc_release(uVar33);
  _objc_release(lVar45);
  _objc_release(uVar10);
  _objc_release(uVar32);
  _objc_release(lVar35);
  _objc_release(uVar9);
  _objc_release(uVar31);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar30);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar43);
  _objc_release(uVar3);
  _objc_release(uVar40);
  _objc_release(lVar27);
  _objc_release(uVar2);
  lVar43 = (long)_DAT_112768064;
  lVar27 = *(long *)(param_1 + lVar43);
  if (lVar27 == 0) {
    lVar45 = (long)_DAT_11276806c;
    lVar27 = *(long *)(param_1 + lVar45);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar35 = *(long *)(param_1 + lVar46);
    func_0x00010bf1ff80(lVar35);
    _objc_retainAutoreleasedReturnValue();
    dVar48 = 16.0;
    lVar6 = lVar27;
    func_0x00010bf493c0(0x4030000000000000,lVar27,param_2,lVar35);
    _objc_retainAutoreleasedReturnValue();
    puVar28 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_110 = lVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_110,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1,param_2,puVar28);
  }
  else {
    lVar45 = (long)_DAT_112768068;
    if (*(long *)(param_1 + lVar45) == 0) {
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar27;
      func_0x00010bf49420(0);
      _objc_retainAutoreleasedReturnValue();
      uVar40 = *(undefined8 *)(param_1 + lVar45);
      *(long *)(param_1 + lVar45) = lVar6;
      _objc_release(uVar40);
      _objc_release(lVar27);
      func_0x00010c1e3380(0x4479c000,*(undefined8 *)(param_1 + lVar45));
      lVar27 = *(long *)(param_1 + lVar43);
    }
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar35 = param_1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar27;
    func_0x00010bf493c0(0x402e000000000000,lVar27,param_2,lVar35);
    _objc_retainAutoreleasedReturnValue();
    puVar28 = *(undefined **)(param_1 + lVar43);
    lStack_108 = lVar6;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar42 = param_1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar29 = puVar28;
    func_0x00010bf493c0(0xc02e000000000000,puVar28,param_2,lVar42);
    _objc_retainAutoreleasedReturnValue();
    uVar30 = *(undefined8 *)(param_1 + lVar43);
    puStack_100 = puVar29;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar31 = *(undefined8 *)(param_1 + lVar46);
    func_0x00010bf1ff80(uVar31);
    _objc_retainAutoreleasedReturnValue();
    uVar40 = uVar30;
    func_0x00010bf493c0(0x4030000000000000,uVar30,param_2,uVar31);
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = *(undefined8 *)(param_1 + lVar45);
    lVar45 = (long)_DAT_11276806c;
    uVar32 = *(undefined8 *)(param_1 + lVar45);
    uStack_f8 = uVar40;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = *(undefined8 *)(param_1 + lVar43);
    func_0x00010bf1ff80(uVar33);
    _objc_retainAutoreleasedReturnValue();
    dVar48 = 16.0;
    uVar4 = uVar32;
    func_0x00010bf493c0(0x4030000000000000,uVar32,param_2,uVar33);
    _objc_retainAutoreleasedReturnValue();
    puVar34 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_e8 = uVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_108,5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1,param_2,puVar34);
    _objc_release(puVar34);
    _objc_release(uVar4);
    _objc_release(uVar33);
    _objc_release(uVar32);
    _objc_release(uVar40);
    _objc_release(uVar31);
    _objc_release(uVar30);
    _objc_release(puVar29);
    _objc_release(lVar42);
  }
  _objc_release(puVar28);
  _objc_release(lVar6);
  _objc_release(lVar35);
  _objc_release(lVar27);
  uVar36 = *(undefined8 *)(param_1 + lVar45);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = uVar36;
  func_0x00010bf493a0(uVar36,param_2,lVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar37 = *(undefined8 *)(param_1 + lVar45);
  uStack_160 = uVar40;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar37;
  func_0x00010bf493a0(uVar37,param_2,lVar43);
  _objc_retainAutoreleasedReturnValue();
  uVar38 = *(undefined8 *)(param_1 + lVar45);
  uStack_158 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = (long)_DAT_112768080;
  uVar39 = *(undefined8 *)(param_1 + lVar42);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar38;
  func_0x00010bf493a0(uVar38,param_2,uVar39);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar42);
  uStack_150 = uVar30;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar42);
  uStack_148 = uVar31;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,lVar35);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar42);
  uStack_140 = uVar32;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar45);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar42);
  uStack_138 = uVar33;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14da20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  uVar12 = uVar7;
  func_0x00010bf49420(dVar48 + 67.0);
  _objc_retainAutoreleasedReturnValue();
  lVar44 = (long)_DAT_112768084;
  uVar8 = *(undefined8 *)(param_1 + lVar44);
  uStack_130 = uVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar42);
  func_0x00010c08de00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar8;
  func_0x00010bf493a0(uVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar44);
  uStack_128 = uVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar42);
  func_0x00010c2793a0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar10;
  func_0x00010bf493a0(uVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar44);
  uStack_120 = uVar17;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar42);
  func_0x00010c274200(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar13;
  func_0x00010bf493a0(uVar13,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar28 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_118 = uVar19;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_160,10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,puVar28);
  _objc_release(puVar28);
  _objc_release(uVar19);
  _objc_release(uVar15);
  _objc_release(uVar13);
  _objc_release(uVar17);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar14);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar12);
  _objc_release(uVar7);
  _objc_release(uVar33);
  _objc_release(lVar45);
  _objc_release(uVar5);
  _objc_release(uVar32);
  _objc_release(lVar35);
  _objc_release(uVar3);
  _objc_release(uVar31);
  _objc_release(lVar6);
  _objc_release(uVar2);
  _objc_release(uVar30);
  _objc_release(uVar39);
  _objc_release(uVar38);
  _objc_release(uVar4);
  _objc_release(lVar43);
  _objc_release(uVar37);
  _objc_release(uVar40);
  _objc_release(lVar27);
  _objc_release(uVar36);
  lVar43 = (long)_DAT_112768088;
  lVar27 = *(long *)(param_1 + lVar43);
  func_0x00010bf529e0();
  if (lVar27 != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                        *(undefined8 *)(param_1 + lVar43));
  }
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,puVar1);
  lVar27 = *(long *)(param_1 + lVar43);
  *(undefined **)(param_1 + lVar43) = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126af078;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar40 = *(undefined8 *)(lVar27 + _DAT_112768070);
  *(undefined **)(lVar27 + _DAT_112768070) = puVar1;
  _objc_release(uVar40);
  _objc_retain(puVar1);
  func_0x00010c219b60(puVar1,param_2,0);
  func_0x00010befbb60(lVar27,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a1b1cc; end: 107a1b243; -[SCStoryManagementView _initHeader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1b1cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af078;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar2 = *(undefined8 *)(param_1 + _DAT_112768070);
  *(undefined **)(param_1 + _DAT_112768070) = puVar1;
  _objc_release(uVar2);
  _objc_retain(puVar1);
  func_0x00010c219b60(puVar1,param_2,0);
  func_0x00010befbb60(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a1b244; end: 107a1b433; -[SCStoryManagementView _initBackgroundGradient] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1b244(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b1198;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar2 = *(undefined8 *)(param_1 + _DAT_112768074);
  *(undefined **)(param_1 + _DAT_112768074) = puVar1;
  _objc_release(uVar2);
  _objc_retain(puVar1);
  func_0x00010c219b60(puVar1,param_2,0);
  puVar3 = puVar1;
  func_0x00010bfcd9c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bff00();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_78 = puVar4;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_70 = puVar4;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x28);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar6;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_68 = puVar4;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x28);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar7;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bfcd9c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60();
  _objc_release(puVar4);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  func_0x00010befbb60(param_1,param_2,puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126d5e98;
  _objc_alloc(PTR_PTR_1126d5e98);
  func_0x00010bffd340(0x4055000000000000);
  func_0x00010c1f7ac0();
  puVar4 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar2 = *(undefined8 *)(puVar1 + _DAT_112768078);
  *(undefined **)(puVar1 + _DAT_112768078) = puVar4;
  _objc_release(uVar2);
  _objc_retain(puVar4);
  func_0x00010c219b60(puVar4,param_2,0);
  func_0x00010c16e440(puVar4,param_2,0);
  func_0x00010c2025c0(puVar4,param_2,0);
  func_0x00010c2026e0(puVar4,param_2,0);
  func_0x00010c18a140(*(undefined8 *)PTR__UIScrollViewDecelerationRateFast_110345da8,puVar4);
  func_0x00010c1738c0(puVar4,param_2,1);
  func_0x00010befbb60(puVar1,param_2,puVar4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107a1b434; end: 107a1b527; -[SCStoryManagementView _initSnapCarousel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1b434(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d5e98;
  _objc_alloc(PTR_PTR_1126d5e98);
  func_0x00010bffd340(0x4055000000000000);
  func_0x00010c1f7ac0();
  puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar3 = *(undefined8 *)(param_1 + _DAT_112768078);
  *(undefined **)(param_1 + _DAT_112768078) = puVar2;
  _objc_release(uVar3);
  _objc_retain(puVar2);
  func_0x00010c219b60(puVar2,param_2,0);
  func_0x00010c16e440(puVar2,param_2,0);
  func_0x00010c2025c0(puVar2,param_2,0);
  func_0x00010c2026e0(puVar2,param_2,0);
  func_0x00010c18a140(*(undefined8 *)PTR__UIScrollViewDecelerationRateFast_110345da8,puVar2);
  func_0x00010c1738c0(puVar2,param_2,1);
  func_0x00010befbb60(param_1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a1b528; end: 107a1b677; -[SCStoryManagementView _initSearchTextField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1b528(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar3 = PTR_PTR_1126b3f70;
  lVar1 = param_1;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c153ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26bec0(puVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11276807c);
  *(undefined **)(param_1 + _DAT_11276807c) = puVar3;
  _objc_release(uVar4);
  _objc_retain(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = puVar3;
  func_0x00010c219b60(puVar3,param_2,0);
  func_0x000100805bf8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc9c0(puVar3,param_2,puVar5);
  _objc_release(puVar5);
  func_0x00010c1edbe0(puVar3,param_2,6);
  func_0x00010c16d0c0(puVar3,param_2,1);
  func_0x00010c17c7a0(puVar3,param_2,1);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x2c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cdb80(puVar3,param_2,puVar5);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar3,param_2,puVar5);
  _objc_release(puVar5);
  func_0x00010befbb60(param_1,param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107a1b678; end: 107a1b797; -[SCStoryManagementView _initSnapViewersListCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1b678(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d5e98;
  _objc_alloc(PTR_PTR_1126d5e98);
  func_0x00010bffd340(param_3);
  func_0x00010c1f7ac0();
  puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar3 = *(undefined8 *)(param_4 + _DAT_11276806c);
  *(undefined **)(param_4 + _DAT_11276806c) = puVar2;
  _objc_release(uVar3);
  _objc_retain(puVar2);
  func_0x00010c219b60(puVar2,param_5,0);
  func_0x00010c16e440(puVar2,param_5,0);
  func_0x00010c2025c0(puVar2,param_5,0);
  func_0x00010c2026e0(puVar2,param_5,0);
  func_0x00010c18a140(*(undefined8 *)PTR__UIScrollViewDecelerationRateFast_110345da8,puVar2);
  func_0x00010c1738c0(puVar2,param_5,1);
  func_0x00010befbb60(param_4,param_5,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a1b798; end: 107a1bacb; -[SCStoryManagementView _initActionBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1b798(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar3 = *(undefined8 *)(param_1 + _DAT_112768080);
  *(undefined **)(param_1 + _DAT_112768080) = puVar2;
  _objc_release(uVar3);
  _objc_retain(puVar2);
  func_0x00010c219b60(puVar2);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2);
  _objc_release(puVar4);
  func_0x00010befbb60(param_1);
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126b66b8;
  ppuVar6 = &PTR____CFConstantStringClassReference_110db2cf8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2cf8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beedf00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276808c);
  *(undefined **)(param_1 + _DAT_11276808c) = puVar4;
  _objc_release(uVar3);
  _objc_release(ppuVar6);
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126b66b8;
  ppuVar6 = &PTR____CFConstantStringClassReference_110db18b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db18b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beedf00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112768090);
  *(undefined **)(param_1 + _DAT_112768090) = puVar4;
  _objc_release(uVar3);
  _objc_release(ppuVar6);
  puVar4 = PTR_PTR_1126c3908;
  _objc_alloc();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = *(byte *)(param_1 + _DAT_11276805c);
  if ((bVar1 & 1) == 0) {
    puVar10 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new(PTR__OBJC_CLASS___UIView_1126aec20);
  }
  else {
    puVar10 = (undefined *)0x0;
  }
  func_0x00010bff0820();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112768084);
  *(undefined **)(param_1 + _DAT_112768084) = puVar4;
  _objc_release(uVar3);
  _objc_retain(puVar4);
  if ((bVar1 & 1) == 0) {
    _objc_release(puVar10);
  }
  _objc_release(puVar8);
  func_0x00010c219b60(puVar4);
  func_0x00010c1c1c20(puVar4);
  func_0x00010c18b5e0(puVar4);
  func_0x00010befbb60(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar2 + _DAT_112768094;
  _objc_loadWeakRetained(puVar2);
  func_0x00010bf7d3c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107a1bacc; end: 107a1baff; -[SCStoryManagementView _onSaveTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1bacc(long param_1)

{
  param_1 = param_1 + _DAT_112768094;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7d3c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a1bb00; end: 107a1bb33; -[SCStoryManagementView _onDeleteTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1bb00(long param_1)

{
  param_1 = param_1 + _DAT_112768094;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7c940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a1bb34; end: 107a1bb43; -[SCStoryManagementView _dismissKeyboard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1bb34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13a0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276807c),PTR_s_resignFirstResponder_11262c258);
  return;
}



/* Entry: 107a1bb44; end: 107a1bb53; -[SCStoryManagementView setKeyboardDismissTapGestureEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1bb44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112768060),PTR_s_setEnabled__112642f38);
  return;
}



/* Entry: 107a1bb54; end: 107a1bc1f; -[SCStoryManagementView setSaveButtonEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1bb54(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_3 & 1) == 0) {
    uStack_40 = *(undefined8 *)(param_1 + _DAT_112768090);
    uVar5 = 1;
  }
  else {
    uStack_38 = *(undefined8 *)(param_1 + _DAT_11276808c);
    uStack_30 = *(undefined8 *)(param_1 + _DAT_112768090);
    puVar3 = &uStack_38;
    uVar5 = 2;
  }
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,puVar3,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c161aa0(*(undefined8 *)(param_1 + _DAT_112768084));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  lVar8 = (long)_DAT_112768064;
  puVar6 = *(undefined **)(puVar2 + lVar8);
  _objc_retain(puVar4);
  _objc_retain(puVar6);
  if (puVar4 == puVar6) {
    _objc_release(puVar6);
    puVar2 = puVar4;
  }
  else {
    if (puVar6 == (undefined *)0x0) {
      _objc_release();
    }
    else {
      puVar1 = puVar4;
      func_0x00010c071ae0(puVar4,param_2,puVar6);
      _objc_release(puVar6);
      _objc_release(puVar4);
      if (((ulong)puVar1 & 1) != 0) goto LAB_107a1bd44;
    }
    lVar7 = (long)_DAT_112768068;
    if (*(long *)(puVar2 + lVar7) != 0) {
      func_0x00010c162480(*(long *)(puVar2 + lVar7),param_2,0);
      uVar5 = *(undefined8 *)(puVar2 + lVar7);
      *(undefined8 *)(puVar2 + lVar7) = 0;
      _objc_release(uVar5);
    }
    func_0x00010c12c960(*(undefined8 *)(puVar2 + lVar8));
    _objc_retain(puVar4);
    uVar5 = *(undefined8 *)(puVar2 + lVar8);
    *(undefined **)(puVar2 + lVar8) = puVar4;
    _objc_release(uVar5);
    func_0x00010c219b60(*(undefined8 *)(puVar2 + lVar8),param_2,0);
    if (*(long *)(puVar2 + lVar8) != 0) {
      func_0x00010befbb60(puVar2);
    }
    func_0x00010bed5ac0(puVar2);
    func_0x00010c1cbe20(puVar2);
    func_0x00010bee0e80(puVar2);
    puVar2 = *(undefined **)(puVar2 + _DAT_11276806c);
    func_0x00010bf408e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069fe0();
  }
  _objc_release(puVar2);
LAB_107a1bd44:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107a1bc20; end: 107a1bd5b; -[SCStoryManagementView setStoryBoostView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1bc20(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112768064;
  uVar3 = *(ulong *)(param_1 + lVar5);
  _objc_retain(param_3);
  _objc_retain(uVar3);
  if (param_3 == uVar3) {
    _objc_release(uVar3);
    uVar3 = param_3;
  }
  else {
    if (uVar3 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0(param_3,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_107a1bd44;
    }
    lVar4 = (long)_DAT_112768068;
    if (*(long *)(param_1 + lVar4) != 0) {
      func_0x00010c162480(*(long *)(param_1 + lVar4),param_2,0);
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      *(undefined8 *)(param_1 + lVar4) = 0;
      _objc_release(uVar2);
    }
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar5));
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = param_3;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
    if (*(long *)(param_1 + lVar5) != 0) {
      func_0x00010befbb60(param_1);
    }
    func_0x00010bed5ac0(param_1);
    func_0x00010c1cbe20(param_1);
    func_0x00010bee0e80(param_1);
    uVar3 = *(ulong *)(param_1 + _DAT_11276806c);
    func_0x00010bf408e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069fe0();
  }
  _objc_release(uVar3);
LAB_107a1bd44:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a1bd5c; end: 107a1bd8f; -[SCStoryManagementView didPressSendToWithActionBar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1bd5c(long param_1)

{
  param_1 = param_1 + _DAT_112768094;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7d460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a1bd90; end: 107a1bfb3; -[SCStoryManagementView traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107a1bd90(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126f9518;
  lStack_98 = param_1;
  _objc_msgSendSuper2(&lStack_98,PTR_s_traitCollectionDidChange__11267bf88);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_88 = puVar2;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_80 = puVar2;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_78 = puVar2;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar5;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_112768074);
  func_0x00010bfcd9c0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60();
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_11276807c;
  func_0x00010c1cdb80(*(undefined8 *)(param_1 + lVar8));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar8));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_112768080));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar1 + _DAT_112768070);
}



/* Entry: 107a1bfb4; end: 107a1bfc3; -[SCStoryManagementView header] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a1bfb4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112768070);
}



/* Entry: 107a1bfc4; end: 107a1bfd3; -[SCStoryManagementView snapCarouselCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a1bfc4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112768078);
}



/* Entry: 107a1bfd4; end: 107a1bfe3; -[SCStoryManagementView searchTextField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a1bfd4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276807c);
}



/* Entry: 107a1bfe4; end: 107a1bff3; -[SCStoryManagementView snapViewersCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a1bfe4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276806c);
}


