/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106a48bb8; end: 106a48bef;  */

void FUN_106a48bb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a48bf0; end: 106a48bf7;  */

void FUN_106a48bf0(void)

{
  return;
}



/* Entry: 106a48bf8; end: 106a48c33; -[SCSingleSnapStoriesPlaybackConfigProvider .cxx_destruct] */

void FUN_106a48bf8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a48c34; end: 106a48d4f; -[SCStoriesDeeplinkPlaybackConfigProvider initWithPlaybackScope:pluginCreator:storiesPlaybackServices:playbackDelegate:playlistGenerator:] */

undefined1 *
FUN_106a48c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f4660;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a48d50; end: 106a48e2f; -[SCStoriesDeeplinkPlaybackConfigProvider sessionContext] */

void FUN_106a48d50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b23f0;
  _objc_alloc(PTR_PTR_1126b23f0);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf21420();
  func_0x000108534aa8();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf21420();
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011ae0(puVar1,param_2,0,uVar3,1,0xffffffffffffffff,0,uVar5,puVar6,0xb0);
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a48e30; end: 106a48f7f; -[SCStoriesDeeplinkPlaybackConfigProvider launchingCandidates] */

void FUN_106a48e30(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf15ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c063e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_50 = lVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_50,1);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = *(long *)(param_1 + 8);
  func_0x00010bf15ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010bf112c0();
  _objc_release(lVar4);
  if (lVar1 != 0) {
    puVar5 = *(undefined **)(param_1 + 0x28);
    func_0x00010c101260();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf529e0();
    if (puVar6 != (undefined *)0x0) {
      _objc_retain(puVar5);
      _objc_release(puVar3);
      puVar3 = puVar5;
    }
    _objc_release(puVar5);
  }
  _objc_alloc(PTR_PTR_1126b23f8);
  func_0x00010c0087a0();
  _objc_release(puVar3);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_alloc(PTR_PTR_1126b2400);
    func_0x00010c018aa0(0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a48f80; end: 106a48fcf; -[SCStoriesDeeplinkPlaybackConfigProvider presentingConfig] */

void FUN_106a48f80(void)

{
  _objc_alloc(PTR_PTR_1126b2400);
  func_0x00010c018aa0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a48fd0; end: 106a4934f; -[SCStoriesDeeplinkPlaybackConfigProvider plugins] */

void FUN_106a48fd0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x2020000000;
  uStack_70 = 0xffffffffffffffff;
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x2020000000;
  uStack_90 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c29d440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0500();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25b040();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21420();
  lVar5 = param_1;
  func_0x00010be8b240();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f1e60();
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252000();
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar8;
  func_0x00010c063e60();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27c4a0();
  uVar10 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0ea1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf4d260();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 8);
  func_0x00010c29d440();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010bfb7ba0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_a8,8);
  __Block_object_dispose(&uStack_88,8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar13);
  return;
}



/* Entry: 106a49350; end: 106a4939f;  */

void FUN_106a49350(void)

{
  return;
}



/* Entry: 106a493a0; end: 106a493a3; -[SCStoriesDeeplinkPlaybackConfigProvider playbackDataProvider] */

void FUN_106a493a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8b250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__remoteStoriesPlaybackDataProvid_112580630);
  return;
}



/* Entry: 106a493a4; end: 106a494bf; -[SCStoriesDeeplinkPlaybackConfigProvider _remoteStoriesPlaybackDataProvider] */

void FUN_106a493a4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010bfb8c00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c2a60;
  _objc_opt_class(PTR_PTR_1126c2a60);
  uVar5 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 == 0) {
    uVar5 = *(ulong *)(param_1 + 0x18);
    func_0x00010c12a480(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0dad80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066720(uVar2);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf15ee0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf21420();
    func_0x00010c222640(uVar2);
    _objc_release(uVar4);
    _objc_retain(uVar2);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106a494c0; end: 106a4950f; -[SCStoriesDeeplinkPlaybackConfigProvider .cxx_destruct] */

void FUN_106a494c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a49510; end: 106a4a4a7; -[SCContentProductPlaybackEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a49510(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
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
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  undefined *puVar25;
  long lVar26;
  undefined *puVar27;
  double dVar28;
  long lStack_138;
  long lStack_130;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  lVar26 = (long)_DAT_1127564c0;
  lVar1 = param_2 + lVar26;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_2 + _DAT_1127564c4;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010bfcdf20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2 + lVar26;
    _objc_loadWeakRetained(lVar2);
    lVar24 = lVar2;
    func_0x00010c0b3ae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef100();
    dVar28 = param_1;
    _CACurrentMediaTime();
    lVar4 = param_2 + lVar26;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010bf15ee0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf21420();
    func_0x000108534a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ab9c0((double)(long)((dVar28 - param_1) * 1000.0),lVar3);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar24);
    _objc_release(lVar2);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_2 + lVar26;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf15ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010c0644c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar8 = PTR_PTR_1126cfe40;
  _objc_alloc();
  lVar1 = param_2 + lVar26;
  _objc_loadWeakRetained();
  lVar9 = lVar1;
  func_0x00010bf15ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c063e60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2 + lVar26;
  _objc_loadWeakRetained();
  func_0x00010c0ffbc0();
  lVar22 = (long)_DAT_1127564c8;
  lVar4 = param_2 + lVar22;
  _objc_loadWeakRetained();
  lVar11 = lVar4;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2 + _DAT_1127564cc;
  _objc_loadWeakRetained();
  lVar12 = lVar3;
  func_0x00010c29d900();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_2 + _DAT_1127564d0;
  _objc_loadWeakRetained();
  lVar13 = lVar24;
  func_0x00010bf81860();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2 + lVar26;
  _objc_loadWeakRetained();
  lVar14 = lVar5;
  func_0x00010bf15ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf112c0();
  lVar21 = (long)_DAT_1127564d4;
  lVar6 = param_2 + lVar21;
  _objc_loadWeakRetained();
  lVar15 = lVar6;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_2 + lVar22;
  _objc_loadWeakRetained();
  lVar16 = lVar22;
  func_0x00010c08d440();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_2 + _DAT_1127564d8;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01dc20();
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar22);
  _objc_release(lVar15);
  _objc_release(lVar6);
  _objc_release(lVar14);
  _objc_release(lVar5);
  _objc_release(lVar13);
  _objc_release(lVar24);
  _objc_release(lVar12);
  _objc_release(lVar3);
  _objc_release(lVar11);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar1);
  lVar1 = param_2 + lVar26;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0ffbc0();
  _objc_release(lVar1);
  puVar27 = (undefined *)0x0;
  puVar25 = (undefined *)0x0;
  switch(lVar2) {
  case 0:
  case 1:
  case 2:
  case 5:
  case 7:
  case 10:
  case 0xc:
    puVar25 = PTR_PTR_1126cfe48;
    _objc_alloc();
    lVar1 = param_2 + lVar26;
    _objc_loadWeakRetained(lVar1);
    lVar4 = param_2 + _DAT_1127564dc;
    _objc_loadWeakRetained();
    lStack_130 = lVar4;
    func_0x00010c101aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2 + _DAT_1127564e0;
    _objc_loadWeakRetained(lVar2);
    lStack_138 = param_2 + lVar26;
    _objc_loadWeakRetained();
    lVar3 = lStack_138;
    func_0x00010c0ea1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = lVar3;
    func_0x00010c0ff100();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2 + _DAT_1127564e4;
    _objc_loadWeakRetained();
    lVar17 = lVar5;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_2 + _DAT_1127564e8;
    _objc_loadWeakRetained(lVar6);
    lVar21 = lVar6;
    func_0x00010c08d460();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = param_2 + _DAT_1127564ec;
    _objc_loadWeakRetained();
    lVar9 = lVar22;
    func_0x00010c08d840();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c036ee0();
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar6);
    _objc_release(lVar17);
    _objc_release(lVar5);
    break;
  default:
    goto LAB_106a4a0e4;
  case 6:
    puVar25 = PTR_PTR_1126cfe50;
    _objc_alloc();
    lVar1 = param_2 + lVar26;
    _objc_loadWeakRetained(lVar1);
    lVar4 = param_2 + _DAT_1127564dc;
    _objc_loadWeakRetained();
    lStack_130 = lVar4;
    func_0x00010c101aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2 + _DAT_1127564e0;
    _objc_loadWeakRetained(lVar2);
    lStack_138 = param_2 + lVar26;
    _objc_loadWeakRetained();
    lVar3 = lStack_138;
    func_0x00010c0ea1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = lVar3;
    func_0x00010c0ff100();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2 + _DAT_1127564e4;
    _objc_loadWeakRetained();
    lVar22 = lVar5;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = param_2 + lVar21;
    _objc_loadWeakRetained();
    lVar17 = lVar21;
    func_0x00010c258480();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_2 + _DAT_1127564ec;
    _objc_loadWeakRetained();
    lVar9 = lVar6;
    func_0x00010c08d840();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c036f00();
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar6);
    _objc_release(lVar17);
    _objc_release(lVar21);
    _objc_release(lVar22);
    _objc_release(lVar5);
    break;
  case 8:
    puVar25 = PTR_PTR_1126cfe58;
    _objc_alloc();
    lVar1 = param_2 + lVar26;
    _objc_loadWeakRetained(lVar1);
    lVar4 = param_2 + _DAT_1127564dc;
    _objc_loadWeakRetained();
    lStack_130 = lVar4;
    func_0x00010c101aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2 + _DAT_1127564e0;
    _objc_loadWeakRetained(lVar2);
    lStack_138 = param_2 + lVar26;
    _objc_loadWeakRetained(lStack_138);
    lVar3 = lStack_138;
    func_0x00010c0ea1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = lVar3;
    func_0x00010c0ff100();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c036f20();
    break;
  case 9:
    puVar25 = PTR_PTR_1126cfe60;
    _objc_alloc();
    lVar1 = param_2 + lVar26;
    _objc_loadWeakRetained(lVar1);
    lVar4 = param_2 + _DAT_1127564e0;
    _objc_loadWeakRetained();
    lStack_130 = lVar4;
    func_0x00010c12a4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2 + lVar26;
    _objc_loadWeakRetained();
    lStack_138 = lVar2;
    func_0x00010c0ea1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lStack_138;
    func_0x00010c0ff100();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = lVar3;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_2 + _DAT_1127564e4;
    _objc_loadWeakRetained(lVar6);
    lVar5 = param_2 + _DAT_1127564f0;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c036f40();
    goto code_r0x000106a49ea4;
  case 0xb:
    puVar25 = PTR_PTR_1126cfe68;
    _objc_alloc();
    lVar1 = param_2 + lVar26;
    _objc_loadWeakRetained(lVar1);
    lVar4 = param_2 + _DAT_1127564dc;
    _objc_loadWeakRetained();
    lStack_130 = lVar4;
    func_0x00010c101aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2 + _DAT_1127564e0;
    _objc_loadWeakRetained(lVar2);
    lStack_138 = param_2 + lVar26;
    _objc_loadWeakRetained();
    lVar3 = lStack_138;
    func_0x00010c0ea1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = lVar3;
    func_0x00010c0ff100();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_2 + _DAT_1127564e4;
    _objc_loadWeakRetained(lVar6);
    lVar5 = lVar6;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c036ec0();
code_r0x000106a49ea4:
    _objc_release(lVar5);
    _objc_release(lVar6);
    break;
  case 0xd:
    puVar25 = PTR_PTR_1126cfe70;
    _objc_alloc();
    lVar1 = param_2 + lVar26;
    _objc_loadWeakRetained(lVar1);
    lVar4 = param_2 + _DAT_1127564dc;
    _objc_loadWeakRetained();
    lStack_130 = lVar4;
    func_0x00010c101aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2 + _DAT_1127564e0;
    _objc_loadWeakRetained(lVar2);
    lStack_138 = param_2 + lVar26;
    _objc_loadWeakRetained(lStack_138);
    lVar3 = lStack_138;
    func_0x00010c0ea1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = lVar3;
    func_0x00010c0ff100();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c036ea0();
    break;
  case 0xe:
    puVar25 = PTR_PTR_1126cfe78;
    _objc_alloc();
    lVar1 = param_2 + lVar26;
    _objc_loadWeakRetained(lVar1);
    lVar4 = param_2 + _DAT_1127564dc;
    _objc_loadWeakRetained();
    lStack_130 = lVar4;
    func_0x00010c101aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2 + lVar26;
    _objc_loadWeakRetained(lVar2);
    lStack_138 = lVar2;
    func_0x00010c0ea1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lStack_138;
    func_0x00010c0ff100();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c036e60(puVar25,lVar3,lVar1,lStack_130,lVar3);
    goto code_r0x000106a4a0b0;
  case 0xf:
    puVar25 = PTR_PTR_1126cfe80;
    _objc_alloc();
    lVar1 = param_2 + lVar26;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_2 + _DAT_1127564dc;
    _objc_loadWeakRetained(lVar2);
    lVar24 = lVar2;
    func_0x00010c101aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2 + _DAT_1127564e0;
    _objc_loadWeakRetained(lVar4);
    lVar3 = param_2 + _DAT_1127564f4;
    _objc_loadWeakRetained(lVar3);
    lVar5 = lVar3;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c036e80();
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar4);
    _objc_release(lVar24);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar27 = PTR_PTR_1126cfe88;
    _objc_alloc();
    lVar1 = param_2 + lVar26;
    _objc_loadWeakRetained();
    lVar4 = lVar1;
    func_0x00010c0ea1c0();
    _objc_retainAutoreleasedReturnValue();
    lStack_130 = lVar4;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2 + lVar26;
    _objc_loadWeakRetained(lVar2);
    lStack_138 = lVar2;
    func_0x00010c0ea1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lStack_138;
    func_0x00010bf16300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c033f80(puVar27,lVar3,lStack_130,lVar3);
    goto code_r0x000106a4a0b4;
  }
  _objc_release(lVar24);
code_r0x000106a4a0b0:
  puVar27 = (undefined *)0x0;
code_r0x000106a4a0b4:
  _objc_release(lVar3);
  _objc_release(lStack_138);
  _objc_release(lVar2);
  _objc_release(lStack_130);
  _objc_release(lVar4);
  _objc_release(lVar1);
LAB_106a4a0e4:
  puVar19 = PTR_PTR_1126ae720;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106a4a4a8;
  puStack_88 = &UNK_110957a90;
  _objc_retain(puVar25);
  puStack_80 = puVar25;
  func_0x00010bf11fe0(puVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_2 + _DAT_1127564f8);
  puVar20 = PTR_PTR_1126cfe90;
  _objc_alloc(PTR_PTR_1126cfe90);
  func_0x00010c036c80();
  func_0x00010bf9d660(uVar23);
  _objc_release(puVar20);
  lVar1 = param_2 + lVar26;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf15ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf112c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar4 == 1) {
    _objc_copyWeak(auStack_a8,param_2 + _DAT_1127564fc);
    puVar20 = PTR_PTR_1126cfe98;
    _objc_alloc();
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_106a4a4b0;
    puStack_b8 = &UNK_110957ac0;
    _objc_copyWeak(auStack_b0,auStack_a8);
    lVar4 = param_2;
    func_0x00010be6f7c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2 + lVar26;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0ffbc0();
    lVar2 = param_2 + lVar26;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010bf15ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf21420();
    func_0x00010c001520();
    lVar24 = (long)_DAT_112756504;
    uVar23 = *(undefined8 *)(param_2 + lVar24);
    *(undefined **)(param_2 + lVar24) = puVar20;
    _objc_release(uVar23);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar4);
    func_0x00010bf17a60(*(undefined8 *)(param_2 + lVar24));
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_a8);
  }
  puVar20 = PTR_PTR_1126cfea0;
  _objc_alloc();
  lVar1 = param_2 + lVar26;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0ea1c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c0ff100();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_2 + lVar26;
  _objc_loadWeakRetained(lVar26);
  func_0x00010c038be0();
  uVar23 = *(undefined8 *)(param_2 + _DAT_112756508);
  *(undefined **)(param_2 + _DAT_112756508) = puVar20;
  _objc_release(uVar23);
  _objc_release(lVar26);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_a8,param_2);
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_106a4a52c;
  puStack_f0 = &UNK_110848218;
  _objc_copyWeak(auStack_d8,auStack_a8);
  _objc_retain(puVar25);
  puStack_e8 = puVar25;
  _objc_retain(puVar27);
  puStack_e0 = puVar27;
  func_0x0001000d76cc("APPSTORE",&puStack_108);
  _objc_release(puStack_e0);
  _objc_release(puStack_e8);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar19);
  _objc_release(puStack_80);
  _objc_release(puVar8);
  _objc_release(lVar7);
  _objc_release(puVar27);
  _objc_release(puVar25);
  return;
}



/* Entry: 106a4a4a8; end: 106a4a4af;  */

void FUN_106a4a4a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ff0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_playbackDataProvider_11261d648);
  return;
}



/* Entry: 106a4a4b0; end: 106a4a52b;  */

void FUN_106a4a4b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf245c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106a4a52c; end: 106a4ab1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a4a52c(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined *puVar24;
  undefined *puVar25;
  long lVar26;
  double dVar27;
  
  lVar1 = param_2 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + _DAT_11275650c) & 1) == 0)) {
    lVar2 = lVar1 + _DAT_112756510;
    _objc_loadWeakRetained();
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c15fb20();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = (long)_DAT_1127564c0;
    lVar4 = lVar1 + lVar26;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c0ea1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1 + lVar26;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010bf668c0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1 + lVar26;
    _objc_loadWeakRetained();
    lVar10 = lVar9;
    func_0x00010c0ea1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010bf16300();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c08c0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c10fba0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c101e20();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar1 + lVar26;
    _objc_loadWeakRetained();
    lVar16 = lVar15;
    func_0x00010c0ea1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar16;
    func_0x00010bf44d40();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar2;
    func_0x00010bf23940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
    lVar2 = lVar1 + _DAT_112756514;
    _objc_loadWeakRetained();
    lVar4 = lVar2;
    func_0x00010bef2520();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar7;
    func_0x00010bf8f100();
    _objc_release(lVar7);
    _objc_release(lVar4);
    _objc_release(lVar2);
    if ((int)lVar9 != 0) {
      puVar19 = *(undefined **)(param_2 + 0x20);
      func_0x00010c101e20();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar19;
      func_0x00010bfb2040();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar19);
      uVar21 = *(ulong *)(param_2 + 0x20);
      func_0x00010c08c0c0();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = uVar21;
      func_0x00010bfb1100();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar21);
      puVar19 = PTR_PTR_1126b8e08;
      _objc_opt_class(PTR_PTR_1126b8e08);
      uVar23 = uVar22;
      _objc_opt_isKindOfClass(uVar22,puVar19);
      uVar21 = uVar22;
      if ((uVar23 & 1) == 0) {
        uVar21 = 0;
      }
      _objc_retain(uVar21);
      _objc_release(uVar22);
      puVar24 = PTR_PTR_1126cc5d8;
      _objc_alloc(PTR_PTR_1126cc5d8);
      puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar2 = lVar1 + lVar26;
      _objc_loadWeakRetained(lVar2);
      lVar4 = lVar2;
      func_0x00010bf15ee0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25b040();
      func_0x00010c0df780(puVar19);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar1;
      func_0x00010bdf8ec0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar25 = PTR_PTR_1126ae720;
      if (puVar20 == (undefined *)0x0) {
        func_0x00010c04e040(puVar24);
        _objc_release(lVar7);
        _objc_release(puVar19);
        _objc_release(lVar4);
        _objc_release(lVar2);
        func_0x00010c20c580(lVar18);
      }
      else {
        param_1 = 1.60807493534087e-314;
        _objc_retain(puVar20);
        func_0x00010bf11fe0(puVar25);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04e040(puVar24);
        _objc_release(puVar25);
        _objc_release(lVar7);
        _objc_release(puVar19);
        _objc_release(lVar4);
        _objc_release(lVar2);
        func_0x00010c20c580(lVar18);
        _objc_release(puVar24);
        puVar24 = puVar20;
      }
      _objc_release(puVar24);
      _objc_release(uVar21);
      _objc_release(puVar20);
    }
    lVar2 = lVar1 + lVar26;
    _objc_loadWeakRetained();
    lVar4 = lVar2;
    func_0x00010c0b3ae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar4 != 0) {
      lVar2 = lVar1 + _DAT_1127564c4;
      _objc_loadWeakRetained(lVar2);
      lVar7 = lVar2;
      func_0x00010bfcdf20();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1 + lVar26;
      _objc_loadWeakRetained(lVar4);
      lVar9 = lVar4;
      func_0x00010c0b3ae0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef100();
      dVar27 = param_1;
      _CACurrentMediaTime();
      lVar26 = lVar1 + lVar26;
      _objc_loadWeakRetained(lVar26);
      lVar15 = lVar26;
      func_0x00010bf15ee0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar15;
      func_0x00010bf21420();
      func_0x000108534a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ab9c0((double)(long)((dVar27 - param_1) * 1000.0),lVar7);
      _objc_release(lVar5);
      _objc_release(lVar15);
      _objc_release(lVar26);
      _objc_release(lVar9);
      _objc_release(lVar4);
      _objc_release(lVar7);
      _objc_release(lVar2);
    }
    func_0x00010bf9d620(*(undefined8 *)(lVar1 + _DAT_112756518));
    _objc_release(lVar18);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106a4ab1c; end: 106a4ab8b;  */

undefined4 FUN_106a4ab1c(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010010fab4(param_2,PTR_DAT_1126a5580);
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = (undefined4)lVar2;
  }
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106a4ab8c; end: 106a4ac1f; -[SCContentProductPlaybackEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a4ab8c(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  *(undefined1 *)(param_1 + _DAT_11275650c) = 1;
  lVar2 = (long)_DAT_112756518;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puStack_38 = PTR_PTR_1126f4668;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a4ac20; end: 106a4ad97; -[SCContentProductPlaybackEntryPoint _deepLinkId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a4ac20(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106a4ad98;
  uStack_40 = 0x106a4ada8;
  uStack_38 = 0;
  param_1 = param_1 + _DAT_1127564c0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c29d440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0500();
  _objc_release(lVar1);
  _objc_release(param_1);
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106a4ad98; end: 106a4adc7;  */

void FUN_106a4ad98(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106a4adc8; end: 106a4adff;  */

void FUN_106a4adc8(long param_1,undefined8 param_2)

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



/* Entry: 106a4ae00; end: 106a4ae1b;  */

void FUN_106a4ae00(void)

{
  return;
}



/* Entry: 106a4ae1c; end: 106a4af93; -[SCContentProductPlaybackEntryPoint _pageSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a4ae1c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106a4ad98;
  uStack_40 = 0x106a4ada8;
  uStack_38 = 0;
  param_1 = param_1 + _DAT_1127564c0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c29d440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0500();
  _objc_release(lVar1);
  _objc_release(param_1);
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106a4af94; end: 106a4afcb;  */

void FUN_106a4af94(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 in_stack_00000020;
  
  _objc_retain(in_stack_00000020);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = in_stack_00000020;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a4afcc; end: 106a4afff;  */

void FUN_106a4afcc(void)

{
  return;
}



/* Entry: 106a4b000; end: 106a4b13b; -[SCContentProductPlaybackEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a4b000(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112756500,0);
  _objc_storeStrong(param_1 + _DAT_1127564f8,0);
  _objc_storeStrong(param_1 + _DAT_112756518,0);
  _objc_destroyWeak(param_1 + _DAT_1127564d8);
  _objc_destroyWeak(param_1 + _DAT_1127564d4);
  _objc_destroyWeak(param_1 + _DAT_1127564ec);
  _objc_destroyWeak(param_1 + _DAT_1127564fc);
  _objc_destroyWeak(param_1 + _DAT_112756510);
  _objc_destroyWeak(param_1 + _DAT_1127564c4);
  _objc_destroyWeak(param_1 + _DAT_1127564e8);
  _objc_destroyWeak(param_1 + _DAT_1127564d0);
  _objc_destroyWeak(param_1 + _DAT_1127564cc);
  _objc_destroyWeak(param_1 + _DAT_1127564c8);
  _objc_destroyWeak(param_1 + _DAT_1127564e4);
  _objc_destroyWeak(param_1 + _DAT_112756514);
  _objc_destroyWeak(param_1 + _DAT_1127564e0);
  _objc_destroyWeak(param_1 + _DAT_1127564f0);
  _objc_destroyWeak(param_1 + _DAT_1127564dc);
  _objc_destroyWeak(param_1 + _DAT_1127564f4);
  _objc_destroyWeak(param_1 + _DAT_1127564c0);
  _objc_storeStrong(param_1 + _DAT_112756504,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112756508,0);
  return;
}



/* Entry: 106a4b13c; end: 106a4b1ef; -[SCContentProductPlaybackOperaDelegate initWithPresenterDelegate:playbackScope:upnextV2WorkFlow:] */

undefined1 *
FUN_106a4b13c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f4670;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a4b1f0; end: 106a4b2bf; -[SCContentProductPlaybackOperaDelegate operaPresenter:didBeginPlayingPlaylistGroupDataModel:] */

void FUN_106a4b1f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfa8c60();
  _objc_release(lVar1);
  uVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0ffda0(lVar1);
    _objc_release(param_1);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a4b2c0; end: 106a4b38b; -[SCContentProductPlaybackOperaDelegate operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:] */

void FUN_106a4b2c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained(lVar3);
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0ffdc0(lVar3);
    _objc_release(param_1);
    _objc_release(lVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a4b38c; end: 106a4b41f; -[SCContentProductPlaybackOperaDelegate operaPresenterDidCancelDismissing:] */

void FUN_106a4b38c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained(lVar3);
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0ffde0(lVar3);
    _objc_release(param_1);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a4b420; end: 106a4b4b3; -[SCContentProductPlaybackOperaDelegate operaPresenterDidFailToPresent:] */

void FUN_106a4b420(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained(lVar3);
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0ffe00(lVar3);
    _objc_release(param_1);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a4b4b4; end: 106a4b51f; -[SCContentProductPlaybackOperaDelegate operaPresenterDidTearDown:] */

void FUN_106a4b4b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0ffe60(lVar1,param_2,param_3,param_1);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a4b520; end: 106a4b5cb; -[SCContentProductPlaybackOperaDelegate operaPresenterDidFinishDismissing:] */

void FUN_106a4b520(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_loadWeakRetained(param_1 + 8);
  _objc_release();
  _objc_loadWeakRetained(param_1 + 0x10);
  _objc_release();
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained(lVar3);
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0ffe20(lVar3);
    _objc_release(param_1);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a4b5cc; end: 106a4b67f; -[SCContentProductPlaybackOperaDelegate operaPresenterDidFinishPresenting:transitionAnimator:] */

void FUN_106a4b5cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained(lVar3);
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0ffe40(lVar3);
    _objc_release(param_1);
    _objc_release(lVar3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a4b680; end: 106a4b713; -[SCContentProductPlaybackOperaDelegate operaPresenterWillBeginAnimatingToDismiss:] */

void FUN_106a4b680(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained(lVar3);
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0ffea0(lVar3);
    _objc_release(param_1);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a4b714; end: 106a4b7c7; -[SCContentProductPlaybackOperaDelegate operaPresenterWillBeginDismissing:transitionAnimator:] */

void FUN_106a4b714(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained(lVar3);
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0ffec0(lVar3);
    _objc_release(param_1);
    _objc_release(lVar3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a4b7c8; end: 106a4b87b; -[SCContentProductPlaybackOperaDelegate operaPresenterWillBeginPresenting:transitionAnimator:] */

void FUN_106a4b7c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained(lVar3);
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0ffee0(lVar3);
    _objc_release(param_1);
    _objc_release(lVar3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a4b87c; end: 106a4b8ab; -[SCContentProductPlaybackOperaDelegate .cxx_destruct] */

void FUN_106a4b87c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106a4b8ac; end: 106a4b93f; -[SCCollectionViewAutoPlayTransitionAnimator initWithParentViewController:baseView:] */

undefined1 *
FUN_106a4b8ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f4678;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a4b940; end: 106a4bb43; -[SCCollectionViewAutoPlayTransitionAnimator present:] */

void FUN_106a4b940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_5 + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c29c4e0();
  _objc_release(lVar1);
  lVar1 = param_5 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar3 = param_5 + 0x10;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_5 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_5 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1a7f60();
  _objc_release(lVar1);
  lVar1 = param_5 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar3 = param_5 + 0x10;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bef7700(lVar1,param_6,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_5 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5 + 0x10;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar2,param_6,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_5 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar3 = param_5 + 8;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bf77e80(lVar1,param_6,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar1);
  param_5 = param_5 + 0x18;
  _objc_loadWeakRetained(param_5);
  func_0x00010c29c460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106a4bb44; end: 106a4bc1b; -[SCCollectionViewAutoPlayTransitionAnimator dismiss:] */

void FUN_106a4bb44(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c29c400();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c29c4c0();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2a6740();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c12c8e0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c29c440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a4bc1c; end: 106a4bc1f; -[SCCollectionViewAutoPlayTransitionAnimator updateBaseView:baseViewOrientation:topInset:transitionMode:] */

void FUN_106a4bc1c(void)

{
  return;
}



/* Entry: 106a4bc20; end: 106a4bc23; -[SCCollectionViewAutoPlayTransitionAnimator updateTransitionMode:] */

void FUN_106a4bc20(void)

{
  return;
}



/* Entry: 106a4bc24; end: 106a4bc2b; -[SCCollectionViewAutoPlayTransitionAnimator transitionMode] */

undefined8 FUN_106a4bc24(void)

{
  return 0;
}



/* Entry: 106a4bc2c; end: 106a4bc2f; -[SCCollectionViewAutoPlayTransitionAnimator resetGestureIfNecessary] */

void FUN_106a4bc2c(void)

{
  return;
}



/* Entry: 106a4bc30; end: 106a4bc33; -[SCCollectionViewAutoPlayTransitionAnimator enableFadeTransitionInDismissal:fadingViews:] */

void FUN_106a4bc30(void)

{
  return;
}



/* Entry: 106a4bc34; end: 106a4bc37; -[SCCollectionViewAutoPlayTransitionAnimator disableFadeTransitionInDismissal] */

void FUN_106a4bc34(void)

{
  return;
}



/* Entry: 106a4bc38; end: 106a4bc3b; -[SCCollectionViewAutoPlayTransitionAnimator updateDismissalAnimationVolumeControl:] */

void FUN_106a4bc38(void)

{
  return;
}



/* Entry: 106a4bc3c; end: 106a4bc43; -[SCCollectionViewAutoPlayTransitionAnimator dismissalSwipeDirection] */

undefined8 FUN_106a4bc3c(void)

{
  return 0xffffffffffffffff;
}



/* Entry: 106a4bc44; end: 106a4bc5b; -[SCCollectionViewAutoPlayTransitionAnimator parentVC] */

void FUN_106a4bc44(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a4bc5c; end: 106a4bc73; -[SCCollectionViewAutoPlayTransitionAnimator childVC] */

void FUN_106a4bc5c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a4bc74; end: 106a4bc7f; -[SCCollectionViewAutoPlayTransitionAnimator setChildVC:] */

void FUN_106a4bc74(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 106a4bc80; end: 106a4bc97; -[SCCollectionViewAutoPlayTransitionAnimator delegate] */

void FUN_106a4bc80(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a4bc98; end: 106a4bca3; -[SCCollectionViewAutoPlayTransitionAnimator setDelegate:] */

void FUN_106a4bc98(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 106a4bca4; end: 106a4bcaf; -[SCCollectionViewAutoPlayTransitionAnimator baseViewFrame] */

undefined8 FUN_106a4bca4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106a4bcb0; end: 106a4bcbb; -[SCCollectionViewAutoPlayTransitionAnimator setBaseViewFrame:] */

void FUN_106a4bcb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x30) = param_1;
  *(undefined8 *)(param_5 + 0x38) = param_2;
  *(undefined8 *)(param_5 + 0x40) = param_3;
  *(undefined8 *)(param_5 + 0x48) = param_4;
  return;
}



/* Entry: 106a4bcbc; end: 106a4bcd3; -[SCCollectionViewAutoPlayTransitionAnimator baseView] */

void FUN_106a4bcbc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a4bcd4; end: 106a4bcdf; -[SCCollectionViewAutoPlayTransitionAnimator setBaseView:] */

void FUN_106a4bcd4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 106a4bce0; end: 106a4bcf7; -[SCCollectionViewAutoPlayTransitionAnimator volumeController] */

void FUN_106a4bce0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a4bcf8; end: 106a4bd03; -[SCCollectionViewAutoPlayTransitionAnimator setVolumeController:] */

void FUN_106a4bcf8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 106a4bd04; end: 106a4bd43; -[SCCollectionViewAutoPlayTransitionAnimator .cxx_destruct] */

void FUN_106a4bd04(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106a4bd44; end: 106a4bdcb; -[SCContextActionHandlingInitOnStartupCompleteEntryPoint begin] */

void FUN_106a4bd44(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106a4bdcc;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106a4bdcc; end: 106a4be3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a4bdcc(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112756540;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010beee700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c269d40();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a4be40; end: 106a4be5f; -[SCContextActionHandlingInitOnStartupCompleteEntryPoint contextActionHandlingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a4be40(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112756540);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a4be60; end: 106a4be73; -[SCContextActionHandlingInitOnStartupCompleteEntryPoint setContextActionHandlingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a4be60(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112756540,param_3);
  return;
}



/* Entry: 106a4be74; end: 106a4beab; -[SCContextActionHandlingInitOnStartupCompleteEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a4be74(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112756540);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112756544);
  return;
}



/* Entry: 106a4beac; end: 106a4c033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a4beac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
    goto LAB_106a4c014;
  }
  puVar4 = PTR_PTR_1126cfea8;
  _objc_opt_new();
  lVar6 = (long)_DAT_11275654c;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar4;
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11275655c);
  _objc_retain(uVar3);
  uVar2 = uVar3;
  func_0x00010c071800();
  if ((int)uVar2 == 0) {
LAB_106a4bf90:
    _objc_release(uVar3);
  }
  else {
    lVar1 = *(long *)(param_1 + _DAT_11275655c);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar3);
    if (lVar1 == 0) {
      uVar2 = *(undefined8 *)(param_1 + _DAT_11275655c);
      uVar3 = *(undefined8 *)(param_1 + _DAT_112756548);
      uVar5 = *(undefined8 *)(param_1 + lVar6);
      _objc_retain(uVar2);
      func_0x00010bf23720(uVar3,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d620(uVar2,param_2,uVar3);
      _objc_release(uVar2);
      goto LAB_106a4bf90;
    }
  }
  puVar4 = PTR_PTR_1126cfeb0;
  _objc_alloc(PTR_PTR_1126cfeb0);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c127960(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf39940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff0940(puVar4,param_2,uVar2,lVar1);
  _objc_release(lVar1);
  _objc_release(lVar6);
  _objc_release(uVar2);
LAB_106a4c014:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106a4c034; end: 106a4c0f3; -[SCContextActionHandlingServiceProvider end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a4c034(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_11275655c);
  }
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    if (param_1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + _DAT_11275655c);
    }
    func_0x00010c12e1c0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275654c);
  *(undefined8 *)(param_1 + _DAT_11275654c) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112756548);
  *(undefined8 *)(param_1 + _DAT_112756548) = 0;
  _objc_release(uVar2);
  puStack_38 = PTR_PTR_1126f4680;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a4c0f4; end: 106a4c113; -[SCContextActionHandlingServiceProvider circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a4c0f4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112756554);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a4c114; end: 106a4c127; -[SCContextActionHandlingServiceProvider setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a4c114(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112756554,param_3);
  return;
}



/* Entry: 106a4c128; end: 106a4c19b; -[SCContextActionHandlingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a4c128(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275655c,0);
  _objc_destroyWeak(param_1 + _DAT_112756558);
  _objc_destroyWeak(param_1 + _DAT_112756554);
  _objc_destroyWeak(param_1 + _DAT_112756550);
  _objc_storeStrong(param_1 + _DAT_112756548,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275654c,0);
  return;
}



/* Entry: 106a4c19c; end: 106a4c397; -[SCContextActionHandler initWithActionProvidersObservable:paramsObservable:circumstanceEngine:] */

undefined8 *
FUN_106a4c19c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_68 = PTR_PTR_1126f4688;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_alloc_init();
    uVar3 = puVar1[4];
    puVar1[4] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar3);
    _objc_initWeak(auStack_78,puVar1);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_106a4c398;
    puStack_88 = &UNK_110957eb0;
    _objc_copyWeak(auStack_80,auStack_78);
    uVar3 = param_4;
    func_0x00010c25ff60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_copyWeak(auStack_a8,auStack_78);
    uVar3 = param_3;
    func_0x00010c25ff60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106a4c398; end: 106a4c447;  */

void FUN_106a4c398(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_2;
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a4c448; end: 106a4ca83; -[SCContextActionHandler handleAction:source:baseViewController:container:completion:] */

void FUN_106a4c448(long param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  ulong uStack_158;
  long lStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  ulong uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_80,param_1);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106a4ca84;
  puStack_a8 = &UNK_1109389b0;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_3);
  uStack_a0 = param_3;
  _objc_retain(param_4);
  lStack_98 = param_4;
  _objc_retain(param_7);
  ppuVar1 = &puStack_c0;
  uStack_90 = param_7;
  _objc_retainBlock();
  if (*(long *)(param_1 + 0x10) == 0) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110e683f8;
  }
  else {
    if (*(long *)(param_1 + 0x18) != 0) {
      _objc_retain(param_3);
      _objc_retain(param_4);
      func_0x00010beeed20(param_3);
      uVar2 = param_3;
      func_0x00010bfd91c0();
      if (((uVar2 & 1) == 0) && (lVar3 = param_4, func_0x00010bf4eb20(), lVar3 != 7)) {
        uVar2 = param_3;
        func_0x00010beeed20();
        _objc_release(param_4);
        _objc_release(param_3);
        if ((int)uVar2 == 4) goto LAB_106a4c584;
      }
      else {
        _objc_release(param_4);
        _objc_release(param_3);
LAB_106a4c584:
        uVar2 = param_3;
        func_0x00010beeed20();
        if ((int)uVar2 == 4) {
          puVar4 = PTR_PTR_1126b6248;
          _objc_opt_new(PTR_PTR_1126b6248);
          puVar13 = PTR_PTR_1126b5c68;
          func_0x00010c242c40(PTR_PTR_1126b5c68);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c161fe0(puVar4);
          _objc_release(puVar13);
          func_0x00010c1c76a0(param_3);
          _objc_release(puVar4);
        }
        uVar5 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c0b3760(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        func_0x00010c0ccaa0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar2;
        func_0x00010beef1e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar7 = param_3;
        func_0x00010c0ccaa0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf31ca0();
        func_0x00010c14de00(puVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = param_3;
        func_0x00010c0ccaa0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010beee760();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a0480(uVar5);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(puVar4);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar2);
        _objc_release(uVar5);
      }
      lVar3 = param_1;
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beee540();
      _objc_release(lVar3);
      puVar4 = PTR_PTR_1126b2798;
      _objc_alloc_init();
      lVar12 = *(long *)(param_1 + 0x18);
      puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e0 = 0xc2000000;
      uStack_d8 = 0x106a4cc04;
      puStack_d0 = &UNK_110957ee0;
      _objc_retain(param_3);
      uStack_c8 = param_3;
      func_0x00010c0e03a0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar12;
      func_0x00010bf529e0();
      if (lVar3 == 0) {
        (*(code *)ppuVar1[2])(ppuVar1,&PTR____CFConstantStringClassReference_110e68438);
        puVar13 = (undefined *)0x0;
      }
      else {
        lVar3 = lVar12;
        func_0x00010bf04a20();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar3;
        func_0x00010bf545c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        if (lVar10 == 0) {
          (*(code *)ppuVar1[2])(ppuVar1,&PTR____CFConstantStringClassReference_110e68458);
          puVar13 = (undefined *)0x0;
        }
        else {
          func_0x00010bf0bd60(param_1);
          _objc_initWeak(auStack_f0,param_1);
          _objc_initWeak(auStack_f8,lVar10);
          puVar13 = PTR___NSConcreteStackBlock_11034bd00;
          puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_120 = 0xc2000000;
          pcStack_118 = FUN_106a4cc68;
          puStack_110 = &UNK_110854350;
          _objc_copyWeak(auStack_108,auStack_f0);
          _objc_copyWeak(auStack_100,auStack_f8);
          ppuVar11 = &puStack_128;
          _objc_retainBlock();
          func_0x00010bef7480(puVar4);
          _objc_initWeak(auStack_130,param_5);
          puStack_198 = puVar13;
          uStack_190 = 0xc2000000;
          pcStack_188 = FUN_106a4ccbc;
          puStack_180 = &UNK_1108a0630;
          puStack_178 = puVar4;
          _objc_copyWeak(auStack_138,auStack_130);
          _objc_retain(param_6);
          uStack_170 = param_6;
          lStack_168 = param_1;
          lStack_160 = lVar10;
          _objc_retain(param_3);
          uStack_158 = param_3;
          _objc_retain(param_4);
          lStack_150 = param_4;
          ppuStack_148 = ppuVar1;
          ppuStack_140 = ppuVar11;
          func_0x0001000d76cc("APPSTORE",&puStack_198);
          _objc_retain(puVar4);
          _objc_release(lStack_150);
          _objc_release(uStack_158);
          _objc_release(uStack_170);
          _objc_destroyWeak(auStack_138);
          _objc_destroyWeak(auStack_130);
          _objc_release(ppuVar11);
          _objc_destroyWeak(auStack_100);
          _objc_destroyWeak(auStack_108);
          _objc_destroyWeak(auStack_f8);
          _objc_destroyWeak(auStack_f0);
          puVar13 = puVar4;
        }
        _objc_release(lVar10);
      }
      _objc_release(lVar12);
      _objc_release(uStack_c8);
      _objc_release(puVar4);
      goto LAB_106a4c990;
    }
    ppuVar11 = &PTR____CFConstantStringClassReference_110e68418;
  }
  (*(code *)ppuVar1[2])(ppuVar1,ppuVar11);
  puVar13 = (undefined *)0x0;
LAB_106a4c990:
  _objc_release(ppuVar1);
  _objc_release(uStack_90);
  _objc_release(lStack_98);
  _objc_release(uStack_a0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 106a4ca84; end: 106a4cb87;  */

void FUN_106a4ca84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106a4cb88;
  puStack_60 = &UNK_11084cbf0;
  _objc_copyWeak(auStack_38,param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  _objc_retain(param_2);
  uStack_48 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_78);
  _objc_release(uStack_48);
  _objc_release(uStack_40);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106a4cb88; end: 106a4cc67;  */

void FUN_106a4cb88(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar3);
  func_0x00010beee4a0(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000106a4cc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106a4cc68; end: 106a4ccbb;  */

void FUN_106a4cc68(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      func_0x00010bf80f80(lVar1,param_2,param_1);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a4ccbc; end: 106a4cdf7;  */

void FUN_106a4ccbc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar3 = *(ulong *)(param_1 + 0x20);
  func_0x00010c06e0e0();
  if ((uVar3 & 1) == 0) {
    lVar4 = param_1 + 0x60;
    _objc_loadWeakRetained();
    if (lVar4 != 0) {
      lVar6 = *(long *)(param_1 + 0x28);
      if (lVar6 == 0) {
        lVar6 = *(long *)(param_1 + 0x30);
        func_0x00010bf55520(lVar6,param_2,lVar4);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(lVar6);
      }
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_106a4cdf8;
      puStack_68 = &UNK_110957f10;
      uStack_58 = *(undefined8 *)(param_1 + 0x58);
      uStack_60 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c0f80c0(uVar5,param_2,*(undefined8 *)(param_1 + 0x40),lVar4,lVar6,
                          *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10),
                          *(undefined8 *)(param_1 + 0x48),&puStack_80);
      _objc_retainAutoreleasedReturnValue();
      iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
      func_0x00010c06e0e0();
      if (iVar2 == 0) {
        puStack_a8 = puVar1;
        uStack_a0 = 0xc2000000;
        pcStack_98 = FUN_106a4ce54;
        puStack_90 = &UNK_110842e18;
        uStack_88 = uVar5;
        func_0x00010bef7480(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_a8);
      }
      else {
        func_0x00010bf2dba0(uVar5);
      }
      _objc_release(uVar5);
      _objc_release(lVar6);
    }
    _objc_release(lVar4);
  }
  return;
}



/* Entry: 106a4cdf8; end: 106a4ce53;  */

void FUN_106a4cdf8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c09e4e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x000106a4ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 106a4ce54; end: 106a4ceaf;  */

void FUN_106a4ce54(long param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106a4ceb0;
  puStack_20 = &UNK_110842e18;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 106a4ceb0; end: 106a4ceb7;  */

void FUN_106a4ceb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 106a4ceb8; end: 106a4cf07; -[SCContextActionHandler createContainerForViewController:] */

void FUN_106a4ceb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038f40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a4cf08; end: 106a4cf0f; -[SCContextActionHandler associatePerformer:] */

void FUN_106a4cf08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0)
  ;
  return;
}



/* Entry: 106a4cf10; end: 106a4cf17; -[SCContextActionHandler disassociatePerformer:] */

void FUN_106a4cf10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeObject__112628ef8);
  return;
}



/* Entry: 106a4cf18; end: 106a4cf2f; -[SCContextActionHandler delegate] */

void FUN_106a4cf18(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a4cf30; end: 106a4cf3b; -[SCContextActionHandler setDelegate:] */

void FUN_106a4cf30(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 106a4cf3c; end: 106a4cf97; -[SCContextActionHandler .cxx_destruct] */

void FUN_106a4cf3c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a4cf98; end: 106a4d03b; -[SCContextActionHandlingProvider initWithActionProvidersObservable:circumstanceEngine:] */

undefined1 *
FUN_106a4cf98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f4690;
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



/* Entry: 106a4d03c; end: 106a4d097; -[SCContextActionHandlingProvider createActionHandlerWithParamsObservable:] */

void FUN_106a4d03c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cfec0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff0960();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a4d098; end: 106a4d12f; -[SCContextActionHandlingProvider createActionHandlerWithParams:] */

void FUN_106a4d098(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126cfec0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bff0960(puVar1,param_2,uVar3,puVar2,*(undefined8 *)(param_1 + 0x10));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a4d130; end: 106a4d15f; -[SCContextActionHandlingProvider .cxx_destruct] */

void FUN_106a4d130(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a4d160; end: 106a4d16b; +[SCCContextOperaChromeHeaderRenderer componentPath] */

undefined ** FUN_106a4d160(void)

{
  return &PTR____CFConstantStringClassReference_110e68478;
}



/* Entry: 106a4d16c; end: 106a4d19f; -[SCCContextOperaChromeHeaderRenderer initWithViewModel:componentContext:runtime:] */

void FUN_106a4d16c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f4698;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 106a4d1a0; end: 106a4d1ef; -[SCCContextOperaChromeHeaderRenderer setViewModel:] */

void FUN_106a4d1a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a4d1f0; end: 106a4d233; -[SCCContextOperaChromeHeaderRenderer viewModel] */

void FUN_106a4d1f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a4d234; end: 106a4d27f; -[SCCContextOperaChromeHeaderRendererContext initWithShowActionMenuEnabled:showSubscriptionEnabled:] */

void FUN_106a4d234(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f46a0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 106a4d280; end: 106a4d2a7; +[SCCContextOperaChromeHeaderRendererContext valdiMarshallableObjectDescriptor] */

void FUN_106a4d280(undefined8 *param_1)

{
  *param_1 = &PTR_s_showActionMenuEnabled_110957f70;
  param_1[1] = &PTR_s_SCBridgeObservable_1109580d8;
  param_1[2] = &PTR_DAT_110957f40;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106a4d2a8; end: 106a4d2cb;  */

undefined8 FUN_106a4d2a8(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[1],param_2[2],*param_2);
  return 0;
}



/* Entry: 106a4d2cc; end: 106a4d34b;  */

void FUN_106a4d2cc(undefined8 param_1)

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
  pcStack_38 = FUN_106a4d3a8;
  puStack_30 = &UNK_110901640;
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



/* Entry: 106a4d34c; end: 106a4d387; -[SCCContextOperaChromeHeaderRendererViewModel initWithItems:] */

void FUN_106a4d34c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f46a8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}


