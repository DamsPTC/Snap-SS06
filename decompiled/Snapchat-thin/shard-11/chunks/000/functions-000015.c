/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108049200; end: 108049373; -[SCCustomStoriesDataMutator joinCustomStoryGroupWithGroupId:email:googleIdToken:msIdToken:completionQueue:completion:] */

void FUN_108049200(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010c085a20(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108049374; end: 1080494cb;  */

void FUN_108049374(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar3 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar3);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar1);
    func_0x00010be2b0a0(lVar3);
    _objc_release(lVar3);
    _objc_release(uVar1);
  }
  else {
    lVar3 = param_3;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    FUN_10803fa58();
    _objc_release(lVar2);
    _objc_release(lVar3);
    iVar4 = (int)lVar5;
    if (iVar4 != 6) {
      if (iVar4 == 0x18) {
        lVar5 = 9;
      }
      else if (iVar4 == 0x13) {
        lVar5 = 8;
      }
      else {
        lVar5 = 1;
      }
    }
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,lVar5);
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1080494cc; end: 1080494df;  */

void FUN_1080494cc(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001080494d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1080494e0; end: 108049627; -[SCCustomStoriesDataMutator _handleJoinCustomStoryGroupWithResponse:completionQueue:completion:] */

void FUN_1080494e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  uint uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  uint uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_4);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfceee0();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_108049628;
  puStack_60 = &UNK_110a18ce0;
  uStack_80 = (uint)((int)uVar1 == 1);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1080496d0;
  puStack_90 = &UNK_110a18d10;
  uStack_88 = param_5;
  uStack_58 = param_3;
  uStack_50 = uVar3;
  uStack_48 = uStack_80;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar2,param_2,&puStack_78,param_4,&puStack_a8);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uStack_88);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar3);
  return;
}



/* Entry: 108049628; end: 1080496cf;  */

void FUN_108049628(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  if (iVar1 == 0) {
    func_0x00010c293080(uVar3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10805ad54(param_2,uVar3);
  }
  else {
    func_0x00010c2922a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    FUN_10805a83c(param_2,uVar2,*(undefined8 *)(param_1 + 0x28));
    _objc_release(param_2);
    param_2 = uVar2;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1080496d0; end: 1080496f7;  */

void FUN_1080496d0(long param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
    if (*(int *)(param_1 + 0x28) != 0) {
      uVar1 = 3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001080496f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar1);
  return;
}



/* Entry: 1080496f8; end: 1080497d3; -[SCCustomStoriesDataMutator _revertCustomStoryUpdateWithOriginalCustomStory:completionQueue:completion:] */

void FUN_1080496f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1080497d4;
  puStack_40 = &UNK_11085adb8;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_58,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1080497d4; end: 1080499ff;  */

void FUN_1080497d4(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11ac00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  FUN_1084dc184(param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(uVar2);
  if (lVar4 != 0) {
    puVar5 = PTR_PTR_1126d8f60;
    FUN_108509e24(PTR_PTR_1126d8f60,lVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf85d80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 != (undefined *)0x0) {
      _objc_setProperty_nonatomic_copy(puVar5);
    }
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c1057e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 != (undefined *)0x0) {
      _objc_setProperty_nonatomic_copy(puVar5);
    }
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c29ef80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 != (undefined *)0x0) {
      _objc_setProperty_nonatomic_copy(puVar5);
    }
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0f4aa0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 != (undefined *)0x0) {
      _objc_setProperty_nonatomic_copy(puVar5);
    }
    _objc_release(uVar2);
    uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x20);
    func_0x00010bf608c0();
    if (puVar5 != (undefined *)0x0) {
      puVar5[0x17] = uVar1;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf5a820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 != (undefined *)0x0) {
      _objc_setProperty_nonatomic_copy(puVar5);
    }
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0d02e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 != (undefined *)0x0) {
      _objc_setProperty_nonatomic_copy(puVar5);
    }
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf15880(uVar2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 != (undefined *)0x0) {
      _objc_setProperty_nonatomic_copy(puVar5);
    }
    _objc_release(uVar2);
    func_0x00010c25ed40(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108049a00; end: 108049c5b; -[SCCustomStoriesDataMutator _handleCreatedCustomStoryWithCustomStoryId:metadata:creationSource:numOfSnapchattersSelected:numOfGroupsSelected:sourcePageSessionId:] */

void FUN_108049a00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_x7;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(in_x7);
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x2020000000;
  uStack_70 = 0xffffffffffffffff;
  uVar1 = param_4;
  func_0x00010c27dea0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf5e0();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126c24c0;
  _objc_alloc(PTR_PTR_1126c24c0);
  uVar1 = param_4;
  func_0x00010bf85d80(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010bf11be0(param_4);
  uVar3 = param_4;
  func_0x00010c1057e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  uVar4 = param_4;
  func_0x00010c29ef80(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c01f900(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x00010c0a4080(*(undefined8 *)(param_1 + 0x38));
  func_0x00010bf55a00(*(undefined8 *)(param_1 + 0x60));
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_88,8);
  _objc_release(in_x7);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108049c5c; end: 108049ca7;  */

void FUN_108049c5c(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 2;
  return;
}



/* Entry: 108049ca8; end: 108049ea7; -[SCCustomStoriesDataMutator _removeOrLeaveCustomStoryDidFinishWithPublicationId:leaveType:success:completionQueue:completionBlock:] */

void FUN_108049ca8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  ,long param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined1 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_5 == 0) {
    func_0x00010c1387e0(*(undefined8 *)(param_1 + 0x60));
    if ((param_6 == 0) || (param_7 == 0)) goto LAB_108049e70;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x108049ed0;
    puStack_c8 = &UNK_11084a9b8;
    _objc_retain(param_7);
    uStack_b8 = 0;
    lStack_c0 = param_7;
    func_0x00010007380c(param_6,&puStack_e0);
    lVar4 = lStack_c0;
  }
  else {
    func_0x00010c12bc20();
    lVar2 = *(long *)(param_1 + 0x30);
    func_0x00010c269d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_1084dc184();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    FUN_10853351c(lVar4);
    func_0x00010c0a4c40(*(undefined8 *)(param_1 + 0x38));
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_108049ea8;
    puStack_70 = &UNK_11085adb8;
    _objc_retain(param_3);
    puStack_b0 = puVar1;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x108049eb8;
    puStack_98 = &UNK_110842508;
    uStack_68 = param_3;
    _objc_retain(param_7);
    lStack_90 = param_7;
    func_0x00010c0f8500(uVar5);
    _objc_release(uVar5);
    _objc_release(lStack_90);
    _objc_release(uStack_68);
  }
  _objc_release(lVar4);
LAB_108049e70:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 108049ea8; end: 108049ee3;  */

void FUN_108049ea8(long param_1,undefined ****param_2,undefined ****param_3)

{
  long *plVar1;
  undefined ****ppppuVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined ****ppppuVar8;
  undefined ****ppppuVar9;
  undefined *puVar10;
  undefined ****ppppuVar11;
  undefined ****ppppuVar12;
  undefined ****unaff_x21;
  undefined ****unaff_x22;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined ****ppppuVar13;
  undefined ****unaff_x26;
  undefined *puVar14;
  undefined ****unaff_x27;
  undefined ***unaff_x28;
  undefined *puStack_588;
  undefined *puStack_560;
  undefined4 uStack_554;
  undefined ***pppuStack_550;
  undefined ***pppuStack_548;
  undefined8 uStack_540;
  undefined ***pppuStack_538;
  undefined4 uStack_530;
  undefined4 uStack_520;
  undefined ***pppuStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined **ppuStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  long *plStack_4d8;
  long *plStack_4d0;
  undefined1 uStack_4c1;
  undefined **ppuStack_4c0;
  undefined4 uStack_4b8;
  undefined2 uStack_4a8;
  undefined2 uStack_4a6;
  undefined1 *puStack_488;
  undefined ***pppuStack_480;
  undefined **ppuStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long *plStack_460;
  long *plStack_458;
  undefined **ppuStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined ***pppuStack_418;
  undefined ***pppuStack_410;
  long lStack_408;
  undefined ***pppuStack_3f0;
  undefined ***pppuStack_3e8;
  undefined ***pppuStack_3e0;
  undefined ***pppuStack_3d8;
  undefined ***pppuStack_3d0;
  undefined ***pppuStack_3c8;
  undefined ***pppuStack_3c0;
  undefined ***pppuStack_3b8;
  undefined ***pppuStack_3b0;
  undefined ***pppuStack_3a8;
  undefined1 *puStack_3a0;
  code *pcStack_398;
  undefined ***pppuStack_390;
  undefined ***pppuStack_388;
  undefined ***pppuStack_380;
  undefined ***pppuStack_378;
  undefined ***pppuStack_370;
  undefined **ppuStack_368;
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  long lStack_350;
  undefined ***pppuStack_348;
  undefined ***pppuStack_340;
  undefined4 uStack_334;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined ***pppuStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  undefined1 uStack_2b1;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined1 *puStack_278;
  undefined8 *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  long *plStack_248;
  undefined **ppuStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined ***pppuStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  undefined ***pppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined **ppuStack_198;
  undefined4 uStack_190;
  undefined4 uStack_180;
  undefined ***pppuStack_168;
  undefined4 *puStack_160;
  undefined ***pppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined ***pppuStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined ***pppuStack_d8;
  undefined ***pppuStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  ppppuVar11 = *(undefined *****)(param_1 + 0x20);
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar12 = ppppuVar11;
  _objc_retain();
  _objc_retain(ppppuVar11);
  ppppuVar2 = (undefined ****)0x0;
  pppuStack_378 = (undefined ***)ppppuVar11;
  pppuStack_340 = (undefined ***)param_2;
  if (ppppuVar11 != (undefined ****)0x0) {
    unaff_x23 = &PTR_PTR_1126b4000;
    _objc_opt_class(PTR_PTR_1126b47a0);
    ppppuVar11 = (undefined ****)&ppuStack_2b0;
    if (param_2 == (undefined ****)0x0) {
      pppuStack_210 = (undefined ***)0x0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      uStack_238 = 0;
      ppuStack_240 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_240,param_2);
    }
    ppppuVar2 = &pppuStack_1d0;
    FUN_108507e48();
    pppuVar3 = pppuStack_378;
    uStack_190 = 0xf;
    uStack_180 = 0x100;
    _objc_retain(pppuStack_378);
    pppuStack_168 = pppuVar3;
    ppuStack_198 = &PTR_DAT_110862760;
    pppuStack_158 = (undefined ***)0x0;
    puStack_160 = (undefined4 *)0x0;
    ppuStack_148 = (undefined **)0x0;
    ppuStack_150 = (undefined **)0x0;
    plStack_138 = (long *)0x0;
    uStack_140 = 0;
    plStack_130 = (long *)0x0;
    uStack_f6 = *(undefined2 *)((long)ppppuVar2 + 0x1a);
    uStack_108 = 10;
    uStack_f8 = 0x100;
    ppuStack_110 = &PTR_SUB_110862700;
    uStack_c0 = 0;
    ppuStack_c8 = (undefined **)0x0;
    plStack_b0 = (long *)0x0;
    uStack_b8 = 0;
    plStack_a8 = (long *)0x0;
    ppuStack_2b0 = (undefined **)0x0;
    ppuStack_2a8 = (undefined **)0x0;
    plStack_2a0 = (long *)0x0;
    uStack_330 = (undefined **)((ulong)uStack_330._4_4_ << 0x20);
    ppppuVar12 = (undefined ****)&ppuStack_240;
    param_3 = (undefined ****)&ppuStack_2b0;
    pppuStack_d8 = (undefined ***)ppppuVar2;
    pppuStack_d0 = &ppuStack_198;
    func_0x000107c310cc(ppppuVar12,&ppuStack_110,param_3,&uStack_330);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar2 = ppppuVar12;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    pppuStack_380 = (undefined ***)ppppuVar2;
    _objc_release(ppppuVar12);
    if ((undefined ***)ppuStack_2b0 != (undefined ***)0x0) {
      ppuStack_2a8 = ppuStack_2b0;
      __ZdlPv();
    }
    plVar1 = plStack_a8;
    param_2 = (undefined ****)&ppuStack_c8;
    ppuStack_110 = &PTR_SUB_110862700;
    plStack_a8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_b0;
    plStack_b0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    ppuStack_2b0 = (undefined **)param_2;
    func_0x000107c27dd4(&ppuStack_2b0);
    plVar1 = plStack_130;
    ppuStack_198 = &PTR_DAT_110862760;
    plStack_130 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_138;
    plStack_138 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    ppuStack_2b0 = (undefined **)&ppuStack_150;
    func_0x000107c27dd4(&ppuStack_2b0);
    _objc_release(pppuStack_168);
    func_0x000107c27da8(&uStack_218);
    _objc_release(uStack_228);
    _objc_release(uStack_230);
    ppppuVar2 = (undefined ****)pppuStack_340;
    if ((undefined ****)pppuStack_380 == (undefined ****)0x0) {
      _objc_retain(pppuStack_340);
      unaff_x22 = ppppuVar2;
      ppppuVar12 = (undefined ****)pppuStack_378;
      FUN_1084dc688();
      _objc_retainAutoreleasedReturnValue();
      unaff_x21 = unaff_x22;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x22);
      if (unaff_x21 != (undefined ****)0x0) {
        unaff_x22 = (undefined ****)PTR_PTR_1126d8fe8;
        ppppuVar12 = unaff_x21;
        FUN_10851ceac();
        _objc_retainAutoreleasedReturnValue();
        param_3 = unaff_x22;
        func_0x00010c25ed40(pppuStack_340);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(unaff_x22);
      }
      _objc_release(unaff_x21);
      _objc_release(pppuStack_340);
    }
    else {
      ppppuVar12 = (undefined ****)pppuStack_380;
      func_0x00010c27dd80();
      unaff_x26 = (undefined ****)pppuStack_380;
      unaff_x24 = (undefined **)&ppuStack_198;
      if (ppppuVar12 == (undefined ****)0x7) {
        _objc_retain(pppuStack_378);
        _objc_retain(ppppuVar2);
        _objc_opt_class(PTR_PTR_1126b47a0);
        if (ppppuVar2 == (undefined ****)0x0) {
          pppuStack_210 = (undefined ***)0x0;
          uStack_228 = 0;
          uStack_230 = 0;
          uStack_218 = 0;
          uStack_220 = 0;
          uStack_238 = 0;
          ppuStack_240 = (undefined **)0x0;
        }
        else {
          func_0x00010bfa6be0(&ppuStack_240,ppppuVar2);
        }
        ppppuVar2 = &pppuStack_1d0;
        FUN_108507e48();
        pppuVar3 = pppuStack_378;
        uStack_190 = 0xf;
        uStack_180 = 0x100;
        _objc_retain(pppuStack_378);
        pppuStack_168 = pppuVar3;
        ppuStack_198 = &PTR_DAT_110862760;
        pppuStack_158 = (undefined ***)0x0;
        puStack_160 = (undefined4 *)0x0;
        ppuStack_148 = (undefined **)0x0;
        ppuStack_150 = (undefined **)0x0;
        plStack_138 = (long *)0x0;
        uStack_140 = 0;
        plStack_130 = (long *)0x0;
        uStack_f6 = *(undefined2 *)((long)ppppuVar2 + 0x1a);
        uStack_108 = 10;
        uStack_f8 = 0x100;
        ppuStack_110 = &PTR_SUB_110862700;
        pppuStack_d0 = &ppuStack_198;
        uStack_c0 = 0;
        ppuStack_c8 = (undefined **)0x0;
        plStack_b0 = (long *)0x0;
        uStack_b8 = 0;
        plStack_a8 = (long *)0x0;
        ppuStack_2b0 = (undefined **)0x0;
        ppuStack_2a8 = (undefined **)0x0;
        plStack_2a0 = (long *)0x0;
        uStack_330 = (undefined **)((ulong)uStack_330 & 0xffffffff00000000);
        pppuVar3 = &ppuStack_240;
        pppuStack_d8 = (undefined ***)ppppuVar2;
        func_0x000107c310cc(pppuVar3,&ppuStack_110,&ppuStack_2b0,&uStack_330);
        _objc_retainAutoreleasedReturnValue();
        pppuVar4 = pppuVar3;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        pppuStack_390 = pppuVar4;
        _objc_release(pppuVar3);
        if ((undefined ***)ppuStack_2b0 != (undefined ***)0x0) {
          ppuStack_2a8 = ppuStack_2b0;
          __ZdlPv();
        }
        plVar1 = plStack_a8;
        ppuStack_110 = &PTR_SUB_110862700;
        plStack_a8 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_b0;
        plStack_b0 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        ppuStack_2b0 = (undefined **)&ppuStack_c8;
        func_0x000107c27dd4(&ppuStack_2b0);
        plVar1 = plStack_130;
        ppuStack_198 = &PTR_DAT_110862760;
        plStack_130 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_138;
        plStack_138 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        ppuStack_2b0 = (undefined **)&ppuStack_150;
        func_0x000107c27dd4(&ppuStack_2b0);
        _objc_release(pppuStack_168);
        func_0x000107c27da8(&uStack_218);
        _objc_release(uStack_228);
        _objc_release(uStack_230);
        pppuVar3 = pppuStack_390;
        func_0x00010bfa2680();
        _objc_retainAutoreleasedReturnValue();
        pppuVar4 = pppuVar3;
        func_0x00010bf0a5c0();
        _objc_retainAutoreleasedReturnValue();
        pppuVar5 = pppuVar4;
        func_0x00010c0ecf00();
        _objc_retainAutoreleasedReturnValue();
        pppuStack_388 = pppuVar5;
        _objc_release(pppuVar4);
        _objc_release(pppuVar3);
        _objc_opt_class(PTR_PTR_1126b47a0);
        if ((undefined ****)pppuStack_340 == (undefined ****)0x0) {
          uStack_1a0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          uStack_1a8 = 0;
          uStack_1b0 = 0;
          ppuStack_1c8 = (undefined **)0x0;
          pppuStack_1d0 = (undefined ***)0x0;
        }
        else {
          func_0x00010bfa6be0(&pppuStack_1d0);
        }
        puVar6 = &uStack_334;
        FUN_108507fc0();
        uStack_238 = CONCAT44(uStack_238._4_4_,0xf);
        uStack_228 = CONCAT44(uStack_228._4_4_,0x100);
        unaff_x22 = (undefined ****)&UNK_110a4fda0;
        pppuStack_210 = (undefined ***)0x7;
        ppuStack_240 = &PTR_DAT_110a4fdb0;
        uStack_200 = 0;
        uStack_208 = 0;
        puStack_1f0 = (undefined *)0x0;
        puStack_1f8 = (undefined *)0x0;
        plStack_1e0 = (long *)0x0;
        uStack_1e8 = 0;
        plStack_1d8 = (long *)0x0;
        uStack_190 = 10;
        uStack_180 = CONCAT22(*(undefined2 *)((long)puVar6 + 0x1a),0x100);
        unaff_x23 = (undefined **)&UNK_110a4fd40;
        unaff_x24 = (undefined **)&ppuStack_198;
        ppuStack_198 = &PTR_FUN_110a4fd50;
        pppuStack_158 = &ppuStack_240;
        ppuStack_148 = (undefined **)0x0;
        ppuStack_150 = (undefined **)0x0;
        plStack_138 = (long *)0x0;
        uStack_140 = 0;
        plStack_130 = (long *)0x0;
        puVar7 = &uStack_2b1;
        puStack_160 = puVar6;
        FUN_108508384();
        pppuVar3 = pppuStack_388;
        uStack_328 = CONCAT44(uStack_328._4_4_,0xf);
        uStack_318 = CONCAT44(uStack_318._4_4_,0x100);
        _objc_retain(pppuStack_388);
        pppuStack_300 = pppuVar3;
        uStack_330 = &PTR_DAT_110862760;
        uStack_2f0 = 0;
        uStack_2f8 = 0;
        uStack_2e0 = 0;
        uStack_2e8 = 0;
        plStack_2d0 = (long *)0x0;
        uStack_2d8 = 0;
        plStack_2c8 = (long *)0x0;
        ppuStack_2a8 = (undefined **)CONCAT44(ppuStack_2a8._4_4_,10);
        uStack_298._0_4_ = CONCAT13(puVar7[0x1b],CONCAT12(puVar7[0x1a],0x100));
        ppuStack_2b0 = &PTR_SUB_110862700;
        puStack_270 = &uStack_330;
        pppuStack_d0 = &ppuStack_2b0;
        uStack_260 = 0;
        uStack_268 = 0;
        plStack_250 = (long *)0x0;
        uStack_258 = 0;
        plStack_248 = (long *)0x0;
        uStack_108 = 4;
        uStack_f8 = 0x100;
        uStack_f6 = CONCAT11(uStack_180._3_1_ & puVar7[0x1b],uStack_180._2_1_ | puVar7[0x1a]);
        ppuStack_110 = &PTR_DAT_1108629c8;
        pppuStack_d8 = &ppuStack_198;
        plStack_a8 = (long *)0x0;
        uStack_c0 = 0;
        ppuStack_c8 = (undefined **)0x0;
        plStack_b0 = (long *)0x0;
        uStack_b8 = 0;
        puStack_90 = (undefined8 *)0x0;
        puStack_88 = (undefined8 *)0x0;
        unaff_x26 = (undefined ****)&ppuStack_198;
        uStack_80 = 0;
        uStack_118 = (undefined ****)((ulong)uStack_118._4_4_ << 0x20);
        ppppuVar2 = &pppuStack_1d0;
        ppppuVar12 = (undefined ****)&ppuStack_110;
        puStack_278 = puVar7;
        func_0x000107c310cc(ppppuVar2,ppppuVar12,&puStack_90,&uStack_118);
        _objc_retainAutoreleasedReturnValue();
        ppppuVar13 = ppppuVar2;
        func_0x00010bf0a540();
        _objc_retainAutoreleasedReturnValue();
        pppuStack_370 = (undefined ***)ppppuVar13;
        _objc_release(ppppuVar2);
        if (puStack_90 != (undefined8 *)0x0) {
          puStack_88 = puStack_90;
          __ZdlPv();
        }
        plVar1 = plStack_a8;
        ppuStack_110 = &PTR_DAT_1108629c8;
        plStack_a8 = (long *)0x0;
        unaff_x21 = (undefined ****)&ppuStack_198;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_b0;
        plStack_b0 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if ((undefined ***)ppuStack_c8 != (undefined ***)0x0) {
          __ZdlPv();
        }
        plVar1 = plStack_248;
        ppuStack_2b0 = &PTR_SUB_110862700;
        plStack_248 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_250;
        plStack_250 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        puStack_90 = &uStack_268;
        func_0x000107c27dd4(&puStack_90);
        plVar1 = plStack_2c8;
        uStack_330 = &PTR_DAT_110862760;
        plStack_2c8 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_2d0;
        plStack_2d0 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        puStack_90 = &uStack_2e8;
        func_0x000107c27dd4(&puStack_90);
        _objc_release(pppuStack_300);
        plVar1 = plStack_130;
        ppuStack_198 = &PTR_FUN_110a4fd50;
        plStack_130 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_138;
        plStack_138 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (ppuStack_150 != (undefined **)0x0) {
          ppuStack_148 = ppuStack_150;
          __ZdlPv();
        }
        plVar1 = plStack_1d8;
        ppuStack_240 = &PTR_DAT_110a4fdb0;
        plStack_1d8 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_1e0;
        plStack_1e0 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if ((undefined **)puStack_1f8 != (undefined **)0x0) {
          puStack_1f0 = puStack_1f8;
          __ZdlPv();
        }
        func_0x000107c27da8(&uStack_1a8);
        _objc_release(uStack_1b8);
        _objc_release(uStack_1c0);
        ppppuVar2 = (undefined ****)pppuStack_370;
        ppuStack_2a8 = (undefined **)0x0;
        ppuStack_2b0 = (undefined **)0x0;
        uStack_298 = 0;
        plStack_2a0 = (long *)0x0;
        uStack_288 = 0;
        uStack_290 = 0;
        puStack_278 = (undefined1 *)0x0;
        uStack_280 = 0;
        _objc_retain(pppuStack_370);
        param_3 = (undefined ****)&ppuStack_2b0;
        func_0x00010bf52a60();
        param_2 = (undefined ****)pppuStack_340;
        if (ppppuVar2 != (undefined ****)0x0) {
          lStack_350 = *plStack_2a0;
          unaff_x27 = (undefined ****)&ppuStack_240;
          unaff_x28 = &ppuStack_150;
          ppuStack_368 = &puStack_1f8;
          ppuStack_358 = &PTR_DAT_110862760;
          ppuStack_360 = &PTR_SUB_110862700;
          do {
            ppppuVar13 = (undefined ****)0x0;
            pppuStack_348 = (undefined ***)ppppuVar2;
            do {
              if (*plStack_2a0 != lStack_350) {
                _objc_enumerationMutation(pppuStack_370);
              }
              unaff_x21 = (undefined ****)ppuStack_2a8[(long)ppppuVar13];
              unaff_x26 = (undefined ****)PTR_PTR_1126d8f60;
              FUN_10850a65c(PTR_PTR_1126d8f60,unaff_x21);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c25ed40(param_2);
              _objc_unsafeClaimAutoreleasedReturnValue();
              _objc_opt_class(PTR_PTR_1126d67a0);
              if (param_2 == (undefined ****)0x0) {
                pppuStack_300 = (undefined ***)0x0;
                uStack_318 = 0;
                uStack_320 = 0;
                uStack_308 = 0;
                uStack_310 = 0;
                uStack_328 = 0;
                uStack_330 = (undefined **)0x0;
              }
              else {
                func_0x00010bfa6be0(&uStack_330,param_2);
              }
              puVar6 = (undefined4 *)&uStack_2b1;
              FUN_108507e48();
              ppppuVar12 = unaff_x21;
              func_0x00010c11ac00();
              _objc_retainAutoreleasedReturnValue();
              uStack_238 = CONCAT44(uStack_238._4_4_,0xf);
              uStack_228 = CONCAT44(uStack_228._4_4_,0x100);
              _objc_retain();
              ppuStack_240 = ppuStack_358;
              uStack_200 = 0;
              uStack_208 = 0;
              puStack_1f0 = (undefined *)0x0;
              puStack_1f8 = (undefined *)0x0;
              plStack_1e0 = (long *)0x0;
              uStack_1e8 = 0;
              plStack_1d8 = (long *)0x0;
              uStack_190 = 10;
              uStack_180 = CONCAT22(*(undefined2 *)((long)puVar6 + 0x1a),0x100);
              ppuStack_198 = ppuStack_360;
              ppuStack_148 = (undefined **)0x0;
              ppuStack_150 = (undefined **)0x0;
              plStack_138 = (long *)0x0;
              uStack_140 = 0;
              plStack_130 = (long *)0x0;
              pppuStack_1d0 = (undefined ***)0x0;
              ppuStack_1c8 = (undefined **)0x0;
              uStack_1c0 = 0;
              uStack_334 = 0;
              ppppuVar2 = (undefined ****)&uStack_330;
              pppuStack_210 = (undefined ***)ppppuVar12;
              puStack_160 = puVar6;
              pppuStack_158 = (undefined ***)unaff_x27;
              func_0x000107c310cc(ppppuVar2,&ppuStack_198,&pppuStack_1d0,&uStack_334);
              _objc_retainAutoreleasedReturnValue();
              unaff_x22 = ppppuVar2;
              func_0x00010bfb1920();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppppuVar2);
              if (pppuStack_1d0 != (undefined ***)0x0) {
                ppuStack_1c8 = (undefined **)pppuStack_1d0;
                __ZdlPv();
              }
              plVar1 = plStack_130;
              ppuStack_198 = &PTR_SUB_110862700;
              plStack_130 = (long *)0x0;
              if (plVar1 != (long *)0x0) {
                (**(code **)(*plVar1 + 8))();
              }
              plVar1 = plStack_138;
              plStack_138 = (long *)0x0;
              if (plVar1 != (long *)0x0) {
                (**(code **)(*plVar1 + 8))();
              }
              pppuStack_1d0 = unaff_x28;
              func_0x000107c27dd4(&pppuStack_1d0);
              plVar1 = plStack_1d8;
              ppuStack_240 = &PTR_DAT_110862760;
              plStack_1d8 = (long *)0x0;
              if (plVar1 != (long *)0x0) {
                (**(code **)(*plVar1 + 8))();
              }
              plVar1 = plStack_1e0;
              plStack_1e0 = (long *)0x0;
              if (plVar1 != (long *)0x0) {
                (**(code **)(*plVar1 + 8))();
              }
              pppuStack_1d0 = (undefined ***)ppuStack_368;
              func_0x000107c27dd4(&pppuStack_1d0);
              _objc_release(pppuStack_210);
              _objc_release(ppppuVar12);
              func_0x000107c27da8(&uStack_308);
              _objc_release(uStack_318);
              _objc_release(uStack_320);
              pppuVar3 = pppuStack_340;
              if (unaff_x22 != (undefined ****)0x0) {
                puVar14 = PTR_PTR_1126d6798;
                FUN_10850ef60(PTR_PTR_1126d6798,unaff_x22);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c25ed40(pppuVar3);
                _objc_unsafeClaimAutoreleasedReturnValue();
                _objc_release(puVar14);
              }
              pppuVar3 = pppuStack_340;
              func_0x00010c11ac00();
              _objc_retainAutoreleasedReturnValue();
              unaff_x24 = (undefined **)PTR____NSArray0__struct_11034ab48;
              puStack_90 = (undefined8 *)PTR____NSArray0__struct_11034ab48;
              unaff_x23 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
              uStack_118 = unaff_x21;
              func_0x00010bf72080();
              _objc_retainAutoreleasedReturnValue();
              ppppuVar12 = (undefined ****)0x2;
              FUN_1084ee948(pppuVar3,2,unaff_x23,0,unaff_x24,PTR____NSDictionary0__struct_11034ab58,
                            PTR____NSDictionary0__struct_11034ab58,0);
              _objc_release(unaff_x23);
              _objc_release(unaff_x21);
              _objc_release(unaff_x22);
              _objc_release(unaff_x26);
              param_2 = (undefined ****)pppuStack_340;
              ppppuVar13 = (undefined ****)((long)ppppuVar13 + 1);
            } while ((undefined ****)pppuStack_348 != ppppuVar13);
            param_3 = (undefined ****)&ppuStack_2b0;
            ppppuVar2 = (undefined ****)pppuStack_370;
            func_0x00010bf52a60();
          } while (ppppuVar2 != (undefined ****)0x0);
        }
        _objc_release(pppuStack_370);
        _objc_release(pppuStack_370);
        _objc_release(pppuStack_388);
        _objc_release(pppuStack_390);
        _objc_release(pppuStack_340);
        _objc_release(pppuStack_378);
        ppppuVar2 = ppppuVar11;
      }
      else {
        unaff_x22 = (undefined ****)PTR_PTR_1126d8f60;
        FUN_10850a65c(PTR_PTR_1126d8f60,pppuStack_380);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(ppppuVar2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126d67a0);
        if (ppppuVar2 == (undefined ****)0x0) {
          pppuStack_210 = (undefined ***)0x0;
          uStack_228 = 0;
          uStack_230 = 0;
          uStack_218 = 0;
          uStack_220 = 0;
          uStack_238 = 0;
          ppuStack_240 = (undefined **)0x0;
        }
        else {
          func_0x00010bfa6be0(&ppuStack_240,ppppuVar2);
        }
        ppppuVar2 = &pppuStack_1d0;
        FUN_108507e48();
        func_0x00010c11ac00();
        _objc_retainAutoreleasedReturnValue();
        uStack_190 = 0xf;
        uStack_180 = 0x100;
        _objc_retain();
        ppuStack_198 = &PTR_DAT_110862760;
        pppuStack_158 = (undefined ***)0x0;
        puStack_160 = (undefined4 *)0x0;
        ppuStack_148 = (undefined **)0x0;
        ppuStack_150 = (undefined **)0x0;
        plStack_138 = (long *)0x0;
        uStack_140 = 0;
        plStack_130 = (long *)0x0;
        uStack_f6 = *(undefined2 *)((long)ppppuVar2 + 0x1a);
        uStack_108 = 10;
        uStack_f8 = 0x100;
        ppuStack_110 = &PTR_SUB_110862700;
        pppuStack_d0 = &ppuStack_198;
        uStack_c0 = 0;
        ppuStack_c8 = (undefined **)0x0;
        plStack_b0 = (long *)0x0;
        uStack_b8 = 0;
        plStack_a8 = (long *)0x0;
        ppuStack_2b0 = (undefined **)0x0;
        ppuStack_2a8 = (undefined **)0x0;
        plStack_2a0 = (long *)0x0;
        uStack_330 = (undefined **)((ulong)uStack_330 & 0xffffffff00000000);
        ppppuVar12 = (undefined ****)&ppuStack_240;
        pppuStack_168 = (undefined ***)unaff_x26;
        pppuStack_d8 = (undefined ***)ppppuVar2;
        func_0x000107c310cc(ppppuVar12,&ppuStack_110,&ppuStack_2b0,&uStack_330);
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = (undefined **)ppppuVar12;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppppuVar12);
        if ((undefined ***)ppuStack_2b0 != (undefined ***)0x0) {
          ppuStack_2a8 = ppuStack_2b0;
          __ZdlPv();
        }
        plVar1 = plStack_a8;
        param_2 = (undefined ****)&ppuStack_c8;
        ppuStack_110 = &PTR_SUB_110862700;
        plStack_a8 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_b0;
        plStack_b0 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        ppuStack_2b0 = (undefined **)param_2;
        func_0x000107c27dd4(&ppuStack_2b0);
        plVar1 = plStack_130;
        ppuStack_198 = &PTR_DAT_110862760;
        plStack_130 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_138;
        plStack_138 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        ppuStack_2b0 = (undefined **)&ppuStack_150;
        func_0x000107c27dd4(&ppuStack_2b0);
        _objc_release(pppuStack_168);
        _objc_release(unaff_x26);
        func_0x000107c27da8(&uStack_218);
        _objc_release(uStack_228);
        _objc_release(uStack_230);
        if ((undefined ****)unaff_x23 != (undefined ****)0x0) {
          param_2 = (undefined ****)PTR_PTR_1126d6798;
          FUN_10850ef60(PTR_PTR_1126d6798,unaff_x23);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40(pppuStack_340);
          _objc_unsafeClaimAutoreleasedReturnValue();
          ppppuVar2 = (undefined ****)pppuStack_380;
          func_0x00010c27dd80();
          if (ppppuVar2 == (undefined ****)0x1) {
            ppppuVar2 = (undefined ****)pppuStack_380;
            func_0x00010bf5a820();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = ppppuVar2;
            func_0x00010bf5bbc0();
            _objc_retainAutoreleasedReturnValue();
            ppppuVar12 = unaff_x26;
            func_0x00010c08fa60();
            ppppuVar11 = (undefined ****)(ulong)(ppppuVar12 == (undefined ****)0x0);
            _objc_release(unaff_x26);
            _objc_release(ppppuVar2);
            puVar14 = PTR__OBJC_CLASS___NSSet_1126ae870;
            if (ppppuVar12 != (undefined ****)0x0) {
              ppppuVar2 = (undefined ****)pppuStack_380;
              func_0x00010bf5a820();
              _objc_retainAutoreleasedReturnValue();
              unaff_x27 = ppppuVar2;
              func_0x00010bf5bbc0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c2268e0(puVar14);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(unaff_x27);
              _objc_release(ppppuVar2);
              ppppuVar11 = (undefined ****)pppuStack_340;
              unaff_x26 = (undefined ****)pppuStack_340;
              FUN_1084ea0fc(pppuStack_340,puVar14);
              _objc_retainAutoreleasedReturnValue();
              FUN_1084ee948(ppppuVar11,1,unaff_x26,0,PTR____NSArray0__struct_11034ab48,
                            PTR____NSDictionary0__struct_11034ab58,
                            PTR____NSDictionary0__struct_11034ab58,0);
              _objc_release(unaff_x26);
              _objc_release(puVar14);
            }
          }
          _objc_release(param_2);
        }
        pppuStack_128 = pppuStack_378;
        puStack_120 = PTR____NSArray0__struct_11034ab48;
        unaff_x21 = (undefined ****)PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar12 = (undefined ****)0x2;
        param_3 = unaff_x21;
        FUN_1084ee948(pppuStack_340,2,unaff_x21,0,PTR____NSArray0__struct_11034ab48,
                      PTR____NSDictionary0__struct_11034ab58,PTR____NSDictionary0__struct_11034ab58,
                      0);
        _objc_release(unaff_x21);
        _objc_release(unaff_x23);
        _objc_release(unaff_x22);
        ppppuVar2 = ppppuVar11;
      }
    }
    _objc_release(pppuStack_380);
  }
  _objc_release(pppuStack_378);
  ppppuVar11 = (undefined ****)pppuStack_340;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x26);
  _objc_release(unaff_x21);
  _objc_release(param_2);
  _objc_release(unaff_x23);
  _objc_release(unaff_x22);
  _objc_release(pppuStack_380);
  _objc_release(pppuStack_378);
  _objc_release(pppuStack_340);
  ppppuVar13 = ppppuVar11;
  __Unwind_Resume();
  pcStack_398 = FUN_1084e4338;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_3f0 = unaff_x28;
  pppuStack_3e8 = (undefined ***)unaff_x27;
  pppuStack_3e0 = (undefined ***)unaff_x26;
  pppuStack_3d8 = (undefined ***)ppppuVar11;
  pppuStack_3d0 = (undefined ***)unaff_x24;
  pppuStack_3c8 = (undefined ***)unaff_x23;
  pppuStack_3c0 = (undefined ***)unaff_x22;
  pppuStack_3b8 = (undefined ***)unaff_x21;
  pppuStack_3b0 = (undefined ***)param_2;
  pppuStack_3a8 = (undefined ***)ppppuVar2;
  puStack_3a0 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(ppppuVar12);
  _objc_retain(param_3);
  ppppuVar2 = ppppuVar12;
  func_0x00010c08fa60();
  if (ppppuVar2 == (undefined ****)0x0) goto LAB_1084e49f8;
  ppppuVar2 = param_3;
  func_0x00010bf529e0();
  if (ppppuVar2 == (undefined ****)0x0) goto LAB_1084e49f8;
  _objc_opt_class(PTR_PTR_1126d67a0);
  if (ppppuVar13 == (undefined ****)0x0) {
    uStack_420 = 0;
    uStack_438 = 0;
    uStack_440 = 0;
    uStack_428 = 0;
    uStack_430 = 0;
    uStack_448 = 0;
    ppuStack_450 = (undefined **)0x0;
  }
  else {
    func_0x00010bfa6be0(&ppuStack_450,ppppuVar13);
  }
  unaff_x23 = (undefined **)&pppuStack_538;
  puVar7 = &uStack_4c1;
  FUN_10850e510();
  uStack_530 = 0xf;
  uStack_520 = 0x100;
  _objc_retain(ppppuVar12);
  unaff_x28 = (undefined ***)&UNK_110862750;
  pppuStack_538 = (undefined ***)&PTR_DAT_110862760;
  uStack_4f8 = 0;
  uStack_500 = 0;
  uStack_4e8 = 0;
  ppuStack_4f0 = (undefined **)0x0;
  plStack_4d8 = (long *)0x0;
  uStack_4e0 = 0;
  plStack_4d0 = (long *)0x0;
  uStack_4a6 = *(undefined2 *)(puVar7 + 0x1a);
  uStack_4b8 = 10;
  uStack_4a8 = 0x100;
  unaff_x24 = &PTR_SUB_110862700;
  ppuStack_4c0 = &PTR_SUB_110862700;
  pppuStack_480 = (undefined ***)&pppuStack_538;
  uStack_470 = 0;
  ppuStack_478 = (undefined **)0x0;
  plStack_460 = (long *)0x0;
  uStack_468 = 0;
  plStack_458 = (long *)0x0;
  pppuStack_550 = (undefined ***)0x0;
  pppuStack_548 = (undefined ***)0x0;
  uStack_540 = 0;
  uStack_554 = 0;
  unaff_x22 = (undefined ****)&ppuStack_450;
  pppuStack_508 = (undefined ***)ppppuVar12;
  puStack_488 = puVar7;
  func_0x000107c310cc(unaff_x22,&ppuStack_4c0,&pppuStack_550,&uStack_554);
  _objc_retainAutoreleasedReturnValue();
  if (pppuStack_550 != (undefined ***)0x0) {
    pppuStack_548 = pppuStack_550;
    __ZdlPv();
  }
  plVar1 = plStack_458;
  ppppuVar11 = (undefined ****)&ppuStack_478;
  ppuStack_4c0 = &PTR_SUB_110862700;
  plStack_458 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_460;
  plStack_460 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  pppuStack_550 = (undefined ***)ppppuVar11;
  func_0x000107c27dd4(&pppuStack_550);
  plVar1 = plStack_4d0;
  pppuStack_538 = (undefined ***)&PTR_DAT_110862760;
  plStack_4d0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_4d8;
  plStack_4d8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  pppuStack_550 = &ppuStack_4f0;
  func_0x000107c27dd4(&pppuStack_550);
  _objc_release(pppuStack_508);
  func_0x000107c27da8(&uStack_428);
  _objc_release(uStack_438);
  _objc_release(uStack_440);
  ppppuVar2 = unaff_x22;
  func_0x00010bf529e0();
  if (ppppuVar2 == (undefined ****)0x0) goto LAB_1084e49f0;
  puStack_588 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  unaff_x24 = (undefined **)unaff_x22;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar2 = (undefined ****)unaff_x24;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puStack_588);
  ppppuVar11 = ppppuVar2;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppppuVar2);
  ppppuVar2 = ppppuVar11;
  func_0x00010bf529e0();
  ppppuVar8 = (undefined ****)unaff_x24;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar9 = ppppuVar8;
  func_0x00010bf529e0();
  _objc_release(ppppuVar8);
  puStack_560 = puStack_588;
  if (ppppuVar2 == ppppuVar9) goto LAB_1084e49d0;
  ppppuVar2 = ppppuVar11;
  func_0x00010bf529e0();
  puVar14 = PTR_PTR_1126d6798;
  if (ppppuVar2 == (undefined ****)0x0) {
    FUN_10850ef60(PTR_PTR_1126d6798,unaff_x24);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_10850eb48(PTR_PTR_1126d6798,unaff_x24);
    _objc_retainAutoreleasedReturnValue();
    if (puVar14 == (undefined *)0x0) goto LAB_1084e4a4c;
    _objc_setProperty_nonatomic_copy();
  }
  while( true ) {
    func_0x00010c25ed40(ppppuVar13);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    pppuStack_418 = (undefined ***)ppppuVar12;
    pppuStack_410 = (undefined ***)ppppuVar11;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    FUN_1084ee948(ppppuVar13,2,puVar10,0,PTR____NSArray0__struct_11034ab48,
                  PTR____NSDictionary0__struct_11034ab58,PTR____NSDictionary0__struct_11034ab58,0);
    _objc_release(puVar10);
    _objc_opt_class(PTR_PTR_1126b47a0);
    if (ppppuVar13 == (undefined ****)0x0) {
      uStack_420 = 0;
      uStack_438 = 0;
      uStack_440 = 0;
      uStack_428 = 0;
      uStack_430 = 0;
      uStack_448 = 0;
      ppuStack_450 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_450,ppppuVar13);
    }
    puVar7 = &uStack_4c1;
    FUN_108507e48();
    uStack_530 = 0xf;
    uStack_520 = 0x100;
    _objc_retain(ppppuVar12);
    pppuStack_538 = unaff_x28 + 2;
    unaff_x23[8] = (undefined *)0x0;
    unaff_x23[7] = (undefined *)0x0;
    unaff_x23[10] = (undefined *)0x0;
    unaff_x23[9] = (undefined *)0x0;
    unaff_x23[0xc] = (undefined *)0x0;
    unaff_x23[0xb] = (undefined *)0x0;
    plStack_4d0 = (long *)0x0;
    uStack_4a6 = *(undefined2 *)(puVar7 + 0x1a);
    uStack_4b8 = 10;
    uStack_4a8 = 0x100;
    ppuStack_4c0 = &PTR_SUB_110862700;
    pppuStack_480 = (undefined ***)&pppuStack_538;
    unaff_x23[0x19] = (undefined *)0x0;
    unaff_x23[0x18] = (undefined *)0x0;
    unaff_x23[0x1b] = (undefined *)0x0;
    unaff_x23[0x1a] = (undefined *)0x0;
    plStack_458 = (long *)0x0;
    pppuStack_550 = (undefined ***)0x0;
    pppuStack_548 = (undefined ***)0x0;
    uStack_540 = 0;
    uStack_554 = 0;
    pppuVar3 = &ppuStack_450;
    pppuStack_508 = (undefined ***)ppppuVar12;
    puStack_488 = puVar7;
    func_0x000107c310cc(pppuVar3,&ppuStack_4c0,&pppuStack_550,&uStack_554);
    _objc_retainAutoreleasedReturnValue();
    if (pppuStack_550 != (undefined ***)0x0) {
      pppuStack_548 = pppuStack_550;
      __ZdlPv();
    }
    plVar1 = plStack_458;
    unaff_x23 = (undefined **)&ppuStack_478;
    ppuStack_4c0 = &PTR_SUB_110862700;
    plStack_458 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_460;
    plStack_460 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    pppuStack_550 = (undefined ***)unaff_x23;
    func_0x000107c27dd4(&pppuStack_550);
    plVar1 = plStack_4d0;
    pppuStack_538 = unaff_x28 + 2;
    plStack_4d0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_4d8;
    plStack_4d8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    pppuStack_550 = &ppuStack_4f0;
    func_0x000107c27dd4(&pppuStack_550);
    _objc_release(pppuStack_508);
    func_0x000107c27da8(&uStack_428);
    _objc_release(uStack_438);
    _objc_release(uStack_440);
    unaff_x28 = pppuVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if ((unaff_x28 != (undefined ***)0x0) &&
       (pppuVar4 = unaff_x28, func_0x00010c27dd80(), pppuVar4 == (undefined ***)0x1)) {
      pppuVar4 = unaff_x28;
      func_0x00010bf5a820();
      _objc_retainAutoreleasedReturnValue();
      pppuVar5 = pppuVar4;
      func_0x00010bf5bbc0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = (undefined **)(ulong)(pppuVar5 == (undefined ***)0x0);
      _objc_release();
      _objc_release(pppuVar4);
      puVar10 = PTR__OBJC_CLASS___NSSet_1126ae870;
      if (pppuVar5 != (undefined ***)0x0) {
        pppuVar4 = unaff_x28;
        func_0x00010bf5a820();
        _objc_retainAutoreleasedReturnValue();
        pppuVar5 = pppuVar4;
        func_0x00010bf5bbc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2268e0(puVar10);
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = (undefined **)ppppuVar13;
        FUN_1084ea0fc(ppppuVar13,puVar10);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        _objc_release(pppuVar5);
        _objc_release(pppuVar4);
        FUN_1084ee948(ppppuVar13,1,unaff_x23,0,PTR____NSArray0__struct_11034ab48,
                      PTR____NSDictionary0__struct_11034ab58,PTR____NSDictionary0__struct_11034ab58,
                      0);
        _objc_release(unaff_x23);
      }
    }
    _objc_release(unaff_x28);
    _objc_release(pppuVar3);
    _objc_release(puVar14);
LAB_1084e49d0:
    _objc_release(ppppuVar11);
    _objc_release(puStack_560);
    _objc_release(unaff_x24);
    _objc_release(puStack_588);
LAB_1084e49f0:
    _objc_release(unaff_x22);
LAB_1084e49f8:
    _objc_release(param_3);
    _objc_release(ppppuVar12);
    _objc_release(ppppuVar13);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) break;
    ___stack_chk_fail();
LAB_1084e4a4c:
    puVar14 = (undefined *)0x0;
  }
  return;
}



/* Entry: 108049ee4; end: 10804a15b; -[SCCustomStoriesDataMutator banParticipantForSharedStory:participantId:completionQueue:completion:failureBlock:] */

void FUN_108049ee4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_108045ba0;
  uStack_80 = 0x108045bb0;
  uStack_78 = 0;
  puStack_98 = &uStack_a0;
  _objc_initWeak(auStack_a8,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_10804a15c;
  puStack_c8 = &UNK_110947e28;
  puStack_b0 = &uStack_a0;
  _objc_retain(param_3);
  uStack_c0 = param_3;
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_b8 = param_4;
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_copyWeak(auStack_e8,auStack_a8);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  func_0x00010c0f8500(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_e8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_destroyWeak(auStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10804a15c; end: 10804a24f;  */

void FUN_10804a15c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  FUN_1084dc184(param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar7;
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  FUN_10805ae98(param_2,uVar1,puVar2);
  _objc_release(param_2);
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_10804a250;
  puStack_60 = puVar2;
  uStack_58 = param_2;
  puStack_50 = &stack0xfffffffffffffff0;
  if (*(long *)(*(long *)(*(long *)(puVar3 + 0x48) + 8) + 0x28) != 0) {
    puVar3 = puVar3 + 0x50;
    _objc_loadWeakRetained(puVar3);
    func_0x00010be9e9a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  lVar5 = *(long *)(puVar3 + 0x20);
  if ((lVar5 != 0) && (lVar6 = *(long *)(puVar3 + 0x38), lVar6 != 0)) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10804a318;
    puStack_70 = &UNK_110849530;
    _objc_retain(lVar6);
    lStack_68 = lVar6;
    func_0x00010007380c(lVar5,&puStack_88);
    _objc_release(lStack_68);
  }
  return;
}



/* Entry: 10804a250; end: 10804a317;  */

void FUN_10804a250(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28) != 0) {
    param_1 = param_1 + 0x50;
    _objc_loadWeakRetained(param_1);
    func_0x00010be9e9a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if ((lVar2 != 0) && (lVar1 = *(long *)(param_1 + 0x38), lVar1 != 0)) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10804a318;
    puStack_30 = &UNK_110849530;
    _objc_retain(lVar1);
    lStack_28 = lVar1;
    func_0x00010007380c(lVar2,&puStack_48);
    _objc_release(lStack_28);
  }
  return;
}



/* Entry: 10804a318; end: 10804a327;  */

void FUN_10804a318(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010804a324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10804a328; end: 10804a59f; -[SCCustomStoriesDataMutator unbanParticipantForSharedStory:participantId:completionQueue:completion:failureBlock:] */

void FUN_10804a328(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_108045ba0;
  uStack_80 = 0x108045bb0;
  uStack_78 = 0;
  puStack_98 = &uStack_a0;
  _objc_initWeak(auStack_a8,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_10804a5a0;
  puStack_c8 = &UNK_110947e28;
  puStack_b0 = &uStack_a0;
  _objc_retain(param_3);
  uStack_c0 = param_3;
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_b8 = param_4;
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_copyWeak(auStack_e8,auStack_a8);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  func_0x00010c0f8500(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_e8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_destroyWeak(auStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10804a5a0; end: 10804a693;  */

void FUN_10804a5a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  FUN_1084dc184(param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar7;
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  FUN_10805b5ec(param_2,uVar1,puVar2);
  _objc_release(param_2);
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_10804a694;
  puStack_60 = puVar2;
  uStack_58 = param_2;
  puStack_50 = &stack0xfffffffffffffff0;
  if (*(long *)(*(long *)(*(long *)(puVar3 + 0x48) + 8) + 0x28) != 0) {
    puVar3 = puVar3 + 0x50;
    _objc_loadWeakRetained(puVar3);
    func_0x00010bea1040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  lVar5 = *(long *)(puVar3 + 0x20);
  if ((lVar5 != 0) && (lVar6 = *(long *)(puVar3 + 0x38), lVar6 != 0)) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10804a75c;
    puStack_70 = &UNK_110849530;
    _objc_retain(lVar6);
    lStack_68 = lVar6;
    func_0x00010007380c(lVar5,&puStack_88);
    _objc_release(lStack_68);
  }
  return;
}



/* Entry: 10804a694; end: 10804a75b;  */

void FUN_10804a694(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28) != 0) {
    param_1 = param_1 + 0x50;
    _objc_loadWeakRetained(param_1);
    func_0x00010bea1040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if ((lVar2 != 0) && (lVar1 = *(long *)(param_1 + 0x38), lVar1 != 0)) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10804a75c;
    puStack_30 = &UNK_110849530;
    _objc_retain(lVar1);
    lStack_28 = lVar1;
    func_0x00010007380c(lVar2,&puStack_48);
    _objc_release(lStack_28);
  }
  return;
}



/* Entry: 10804a75c; end: 10804a76b;  */

void FUN_10804a75c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010804a768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10804a76c; end: 10804a93b; -[SCCustomStoriesDataMutator _sendBanParticipantRequestWithSharedStoryId:originalSharedStory:participantId:completionQueue:completion:failureBlock:] */

void FUN_10804a76c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c298be0(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010bf15760(uVar2);
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10804a93c; end: 10804aa9b;  */

void FUN_10804a93c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  func_0x00010be27ce0(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(lVar1);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  return;
}



/* Entry: 10804aa9c; end: 10804aab3;  */

void FUN_10804aa9c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010804aaac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 10804aab4; end: 10804ab17;  */

void FUN_10804aab4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10804ab18; end: 10804ace7; -[SCCustomStoriesDataMutator _sendUnbanParticipantRequestWithSharedStoryId:originalSharedStory:participantId:completionQueue:completion:failureBlock:] */

void FUN_10804ab18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c298be0(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010c27f420(uVar2);
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10804ace8; end: 10804ae47;  */

void FUN_10804ace8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  func_0x00010be27ce0(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(lVar1);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  return;
}



/* Entry: 10804ae48; end: 10804ae5f;  */

void FUN_10804ae48(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010804ae58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 10804ae60; end: 10804aec3;  */

void FUN_10804ae60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10804aec4; end: 10804b1e3; -[SCCustomStoriesDataMutator _handleCreationResponse:error:metadata:creationSource:numOfSnapchattersSelected:numOfGroupsSelected:sourcePageSessionId:completionQueue:successBlock:failureBlock:] */

void FUN_10804aec4(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  long param_10,undefined8 param_11,long param_12)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined4 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  if ((param_3 == 0) || (param_4 != 0)) {
    lVar2 = param_4;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_10803fa58();
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010c0a5ea0(*(undefined8 *)(param_1 + 0x38));
    if ((param_10 != 0) && (param_12 != 0)) {
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_10804b1e4;
      puStack_90 = &UNK_110890350;
      _objc_retain(param_12);
      lStack_88 = param_12;
      uStack_80 = (int)lVar4;
      func_0x00010007380c(param_10,&puStack_a8);
      _objc_release(lStack_88);
    }
  }
  else {
    _objc_initWeak(auStack_b0,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_10804b218;
    puStack_d0 = &UNK_110864a08;
    _objc_retain(param_3);
    lStack_c8 = param_3;
    _objc_retain(param_5);
    uStack_c0 = param_5;
    lStack_b8 = param_1;
    _objc_retain(param_3);
    _objc_copyWeak(auStack_108,auStack_b0);
    _objc_retain(param_5);
    uStack_100 = param_6;
    uStack_f8 = param_7;
    uStack_f0 = param_8;
    _objc_retain(param_9);
    _objc_retain(param_11);
    _objc_retain(param_12);
    func_0x00010c0f8500(uVar1);
    _objc_release(uVar1);
    _objc_release(param_12);
    _objc_release(param_11);
    _objc_release(param_9);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_108);
    _objc_release(param_3);
    _objc_release(uStack_c0);
    _objc_release(lStack_c8);
    _objc_destroyWeak(auStack_b0);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10804b1e4; end: 10804b217;  */

void FUN_10804b1e4(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  uVar1 = (ulong)*(uint *)(param_1 + 0x28);
  FUN_108054240(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010804b214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(lVar2,0,uVar1);
  return;
}



/* Entry: 10804b218; end: 10804b337;  */

void FUN_10804b218(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x28);
  _objc_retain(param_2);
  func_0x00010c2923e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  FUN_1080548dc(param_2,uVar1,uVar2,uVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10804b338; end: 10804b4c3; -[SCCustomStoriesDataMutator _handleCustomStoryMembershipWithOriginalCustomStory:response:httpResponse:error:completionQueue:successBlock:failureBlock:] */

void FUN_10804b338(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  if ((param_4 == 0) || (param_6 != 0)) {
    _objc_retain(param_7);
    func_0x00010be28fe0(param_1,param_2,param_3,param_6,param_5,param_7,param_9);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(param_7);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10804b4c4;
    puStack_78 = &UNK_110864a38;
    _objc_retain(param_3);
    uStack_70 = param_3;
    _objc_retain(param_4);
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10804b530;
    puStack_a0 = &UNK_110842508;
    lStack_68 = param_4;
    _objc_retain(param_8);
    uStack_98 = param_8;
    func_0x00010c0f8500(uVar2,param_2,&puStack_90,param_7,&puStack_b8);
    _objc_release(param_7);
    _objc_release(uVar2);
    _objc_release(uStack_98);
    _objc_release(lStack_68);
    param_7 = uStack_70;
  }
  _objc_release(param_7);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10804b4c4; end: 10804b52f;  */

void FUN_10804b4c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c11ac00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfcf560(uVar1);
  FUN_1084dd620(param_2,uVar2,uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10804b530; end: 10804b543;  */

void FUN_10804b530(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010804b53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10804b544; end: 10804b6ff; -[SCCustomStoriesDataMutator _handleCustomStoryBlockedUsersExceptionsUpdateWithOriginalCustomStory:updateResponse:httpResponse:error:completionQueue:successBlock:failureBlock:] */

void FUN_10804b544(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6,long param_7,long param_8,long param_9)

{
  long lVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  if ((param_4 == 0) || (param_6 != 0)) {
    lVar1 = param_5;
    func_0x00010c252ee0();
    if (lVar1 != 0x194) {
      func_0x00010be28fe0(param_1);
      goto LAB_10804b6ac;
    }
    if ((param_7 == 0) || (param_9 == 0)) goto LAB_10804b6ac;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10804b700;
    puStack_68 = &UNK_11084aaa8;
    _objc_retain(param_9);
    lStack_58 = param_9;
    _objc_retain(param_3);
    uStack_60 = param_3;
    func_0x00010007380c(param_7,&puStack_80);
    _objc_release(uStack_60);
    lVar1 = lStack_58;
  }
  else {
    if ((param_7 == 0) || (param_8 == 0)) goto LAB_10804b6ac;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10804b744;
    puStack_90 = &UNK_110849530;
    _objc_retain(param_8);
    lStack_88 = param_8;
    func_0x00010007380c(param_7,&puStack_a8);
    lVar1 = lStack_88;
  }
  _objc_release(lVar1);
LAB_10804b6ac:
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10804b700; end: 10804b743;  */

void FUN_10804b700(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c11ac00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10804b744; end: 10804b74f;  */

void FUN_10804b744(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010804b74c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10804b750; end: 10804b9f3; -[SCCustomStoriesDataMutator _handleCustomStoryUpdateWithOriginalCustomStory:updatedPosterIds:numOfSnapchattersSelected:numOfGroupsSelected:updateResponse:httpResponse:error:completionQueue:successBlock:failureBlock:] */

void FUN_10804b750(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,long param_9,long param_10,
                  undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_11);
  if ((param_7 == 0) || (param_9 != 0)) {
    _objc_retain(param_10);
    func_0x00010be28fe0(param_1,param_2,param_3,param_9,param_8,param_10,param_12);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(param_10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10804b9f4;
    puStack_88 = &UNK_110864a38;
    _objc_retain(param_3);
    lStack_80 = param_3;
    _objc_retain(param_7);
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_10804ba60;
    puStack_b0 = &UNK_110842508;
    lStack_78 = param_7;
    _objc_retain(param_11);
    uStack_a8 = param_11;
    func_0x00010c0f8500(uVar5,param_2,&puStack_a0,param_10,&puStack_c8);
    _objc_release(param_10);
    _objc_release(uVar5);
    lVar2 = param_3;
    func_0x00010c27dd80();
    if ((((lVar2 == 6) || (lVar2 = param_3, func_0x00010c27dd80(), lVar2 == 7)) ||
        (lVar2 = param_3, func_0x00010c27dd80(), lVar2 == 10)) &&
       (lVar2 = param_4, func_0x00010bf529e0(), lVar2 != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c2923e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010bf5a820(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bf5bbc0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c0720c0(uVar3,param_2,lVar4);
      _objc_release(lVar4);
      _objc_release(lVar2);
      _objc_release(uVar3);
      lVar2 = param_3;
      func_0x00010c11ac00(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3;
      func_0x00010c1057e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be58920(param_1,param_2,lVar2,uVar5,lVar4,param_4,param_5,param_6);
      _objc_release(lVar4);
      _objc_release(lVar2);
    }
    _objc_release(uStack_a8);
    _objc_release(lStack_78);
    param_10 = lStack_80;
  }
  _objc_release(param_10);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10804b9f4; end: 10804ba5f;  */

void FUN_10804b9f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c11ac00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfcf560(uVar1);
  FUN_1084dd620(param_2,uVar2,uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10804ba60; end: 10804ba73;  */

void FUN_10804ba60(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010804ba6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10804ba74; end: 10804be2b; -[SCCustomStoriesDataMutator _handleErrorWithOriginalCustomStory:error:httpResponse:completionQueue:failureBlock:] */

void FUN_10804ba74(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  func_0x00010c11ac00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_5;
  func_0x00010c252ee0();
  if (lVar2 == 0x194) {
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10804be2c;
    puStack_90 = &UNK_110858070;
    _objc_retain(param_7);
    lStack_80 = param_7;
    _objc_retain(lVar1);
    lStack_88 = lVar1;
    func_0x00010c12bc40(param_1);
    _objc_release(lStack_88);
    lVar2 = lStack_80;
  }
  else {
    lVar2 = param_5;
    func_0x00010c252ee0();
    if (lVar2 == 0x199) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb5000();
      _objc_release(uVar3);
      if ((param_6 == 0) || (param_7 == 0)) goto LAB_10804bd04;
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0xc2000000;
      uStack_c8 = 0x10804be4c;
      puStack_c0 = &UNK_11084aaa8;
      _objc_retain(param_7);
      lStack_b0 = param_7;
      _objc_retain(lVar1);
      lStack_b8 = lVar1;
      func_0x00010007380c(param_6,&puStack_d8);
      _objc_release(lStack_b8);
      lVar2 = lStack_b0;
    }
    else {
      uVar3 = param_4;
      func_0x00010c292820();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      FUN_10803fa58();
      _objc_release(uVar6);
      _objc_release(uVar3);
      uVar3 = uVar4;
      FUN_108054240();
      puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_120 = 0xc2000000;
      pcStack_118 = FUN_10804be60;
      puStack_110 = &UNK_1108b6770;
      lStack_108 = param_1;
      _objc_retain(param_3);
      lStack_100 = param_3;
      _objc_retain(param_6);
      lStack_f8 = param_6;
      _objc_retain(param_7);
      lStack_e8 = param_7;
      _objc_retain(lVar1);
      ppuVar5 = &puStack_128;
      lStack_f0 = lVar1;
      uStack_e0 = uVar3;
      _objc_retainBlock();
      uVar7 = (uint)uVar4;
      if (uVar7 - 4 < 0x1d) {
LAB_10804bcd0:
        (*(code *)ppuVar5[2])(ppuVar5);
      }
      else if ((int)uVar7 < 2) {
        if ((uVar7 < 2) || (uVar7 == 0xfbadbeef)) {
LAB_10804bd90:
          lVar2 = param_5;
          func_0x00010c252ee0();
          if (lVar2 != 400) goto LAB_10804bcd0;
          uVar6 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c269d40(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb5000();
          _objc_release(uVar6);
          if ((param_6 != 0) && (param_7 != 0)) {
            puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_158 = 0xc2000000;
            uStack_150 = 0x10804bf34;
            puStack_148 = &UNK_11085b7b0;
            _objc_retain(param_7);
            lStack_138 = param_7;
            _objc_retain(lVar1);
            lStack_140 = lVar1;
            uStack_130 = uVar3;
            func_0x00010007380c(param_6,&puStack_160);
            _objc_release(lStack_140);
            _objc_release(lStack_138);
          }
        }
      }
      else {
        if (uVar7 == 3) goto LAB_10804bd90;
        if (uVar7 == 2) goto LAB_10804bcd0;
      }
      _objc_release(ppuVar5);
      _objc_release(lStack_f0);
      _objc_release(lStack_e8);
      _objc_release(lStack_f8);
      lVar2 = lStack_100;
    }
  }
  _objc_release(lVar2);
LAB_10804bd04:
  _objc_release(lVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10804be2c; end: 10804be5f;  */

void FUN_10804be2c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010804be44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20),6);
    return;
  }
  return;
}



/* Entry: 10804be60; end: 10804bf13;  */

void FUN_10804be60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10804bf14;
  puStack_60 = &UNK_1108d3770;
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar4;
  _objc_retain(uVar5);
  uStack_48 = *(undefined8 *)(param_1 + 0x48);
  uStack_58 = uVar5;
  func_0x00010be97300(uVar1,param_2,uVar2,uVar3,&puStack_78);
  _objc_release(uStack_58);
  _objc_release(uStack_50);
  return;
}



/* Entry: 10804bf14; end: 10804bf47;  */

void FUN_10804bf14(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010804bf2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))
              (lVar1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30));
    return;
  }
  return;
}



/* Entry: 10804bf48; end: 10804c07f; -[SCCustomStoriesDataMutator _logSharedStoryInviteWithPublicationId:isCreator:originalMembersIds:updatedMembersIds:numOfSnapchattersSelected:numOfGroupsSelected:] */

void FUN_10804bf48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010c0d3c80(param_5);
  lVar1 = param_6;
  func_0x00010c0d3c80();
  _objc_release(param_6);
  func_0x00010c12d500(lVar1,param_2,param_5);
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126d8f68;
    _objc_opt_new(PTR_PTR_1126d8f68);
    func_0x00010c2b6440();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b0500(puVar3,param_2,param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b4a00(puVar3,param_2,param_7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b49e0(puVar3,param_2,param_8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    puVar4 = puVar3;
    func_0x00010bf21f60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0af740(uVar5,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10804c080; end: 10804c12b; -[SCCustomStoriesDataMutator _filterOutNonFriendnapchatterIdsFromCurrentSnapchatterIds:friendSnapchatters:] */

void FUN_10804c080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_110a18da0);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x10804c134;
  puStack_40 = &UNK_110856a28;
  uStack_38 = param_4;
  _objc_retain();
  uVar1 = param_3;
  func_0x0001006372a4(param_3,&puStack_58);
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10804c12c; end: 10804c13f;  */

void FUN_10804c12c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 10804c140; end: 10804c147; -[SCCustomStoriesDataMutator legacyDataMutator] */

undefined8 FUN_10804c140(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10804c148; end: 10804c177; -[SCCustomStoriesDataMutator setLegacyDataMutator:] */

void FUN_10804c148(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10804c178; end: 10804c24f; -[SCCustomStoriesDataMutator .cxx_destruct] */

void FUN_10804c178(long param_1)

{
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



/* Entry: 10804c250; end: 10804c35f;  */

void FUN_10804c250(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_2;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_48,param_1 + 0x28);
    _objc_retain(uVar2);
    func_0x00010bfa9980(lVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10804c360; end: 10804c39b;  */

void FUN_10804c360(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c0ceba0(*(undefined8 *)(lVar1 + 0x98),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10804c39c; end: 10804c47b; -[SCCustomStoriesDataSyncer syncCustomStoriesMetadataIfPossibleWithFullMetadataRefresh:requestSource:] */

void FUN_10804c39c(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 10804c47c; end: 10804c4b3;  */

void FUN_10804c47c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec98e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10804c4b4; end: 10804c577; -[SCCustomStoriesDataSyncer _syncCustomStoriesMetadataIfPossibleWithFullMetadataRefresh:requestSource:] */

void FUN_10804c4b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  FUN_108044d98();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c0a4620(*(undefined8 *)(param_1 + 0x18));
  uVar2 = uVar1;
  func_0x00010bf002e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec9c00(param_1);
  _objc_release(param_4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10804c578; end: 10804c677; -[SCCustomStoriesDataSyncer syncCustomStoriesMetadataWithPublicationIds:requestSource:] */

void FUN_10804c578(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10804c678; end: 10804c6b3;  */

void FUN_10804c678(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec9c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10804c6b4; end: 10804c80b; -[SCCustomStoriesDataSyncer fetchPublicationIdsRemotelyIfMissing:requestSource:completionQueue:completion:] */

void FUN_10804c6b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10804c80c; end: 10804c843;  */

void FUN_10804c80c(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec96e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10804c844; end: 10804caeb; -[SCCustomStoriesDataSyncer _syncAndFetchPublicationIdsIfMissing:requestSource:completionQueue:completion:] */

void FUN_10804c844(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_1084dc8b8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf529e0();
  lVar3 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == lVar3) {
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_10804caec;
    puStack_b8 = &UNK_11084aaa8;
    lStack_a8 = param_6;
    _objc_retain(lVar2);
    lStack_b0 = lVar2;
    _objc_retain(param_6);
    func_0x00010007380c(param_5,&puStack_d0);
    _objc_release(lStack_b0);
    lVar3 = lStack_a8;
    lVar1 = param_6;
  }
  else {
    lVar1 = lVar2;
    func_0x00010bf002e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_retain(param_3);
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1080507e8;
    puStack_88 = &UNK_110856a28;
    puStack_80 = puVar4;
    _objc_retain();
    lVar3 = param_3;
    func_0x0001006372a4(param_3,&puStack_a0);
    _objc_release(param_3);
    _objc_release(puStack_80);
    _objc_release(puVar4);
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c0d3c80();
    _objc_retain(param_5);
    _objc_retain(param_3);
    _objc_retain(lVar3);
    _objc_retain(param_6);
    _objc_retain(lVar1);
    func_0x00010bec9700(param_1);
    _objc_release(lVar3);
    _objc_release(param_3);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(lVar1);
    _objc_release(lVar3);
    lVar3 = param_6;
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10804caec; end: 10804cafb;  */

void FUN_10804caec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010804caf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10804cafc; end: 10804cbaf;  */

void FUN_10804cafc(long param_1,undefined8 param_2)

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
  
  func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10804cbb0;
  puStack_48 = &UNK_11084aaa8;
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar2;
  _objc_retain(uVar3);
  uStack_40 = uVar3;
  func_0x00010007380c(uVar1,&puStack_60);
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x30));
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  return;
}



/* Entry: 10804cbb0; end: 10804cbe7;  */

void FUN_10804cbb0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10804cbe8; end: 10804cd17; -[SCCustomStoriesDataSyncer fetchPublicationIdRemotely:completionQueue:completion:] */

void FUN_10804cbe8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10804cd18; end: 10804cd4f;  */

void FUN_10804cd18(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be13580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10804cd50; end: 10804cebf; -[SCCustomStoriesDataSyncer _fetchPublicationIdRemotely:completionQueue:completion:] */

void FUN_10804cd50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10804cec0;
  puStack_80 = &UNK_110a18df0;
  _objc_retain(param_4);
  uStack_78 = param_4;
  _objc_retain(param_5);
  uStack_68 = param_5;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  ppuVar1 = &puStack_98;
  uStack_70 = param_3;
  _objc_retainBlock(ppuVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa61e0(uVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10804cec0; end: 10804d083;  */

void FUN_10804cec0(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10804d084;
    puStack_50 = &UNK_110849530;
    lVar2 = *(long *)(param_1 + 0x30);
    _objc_retain(lVar2);
    lStack_48 = lVar2;
    func_0x00010007380c(uVar1,&puStack_68);
    lVar2 = lStack_48;
  }
  else {
    lVar2 = param_1 + 0x38;
    _objc_loadWeakRetained();
    if (lVar2 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      uStack_80 = 0x10804d094;
      puStack_78 = &UNK_110849530;
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar3);
      uStack_70 = uVar3;
      func_0x00010007380c(uVar1,&puStack_90);
      _objc_release(uStack_70);
      lVar2 = 0;
    }
    else {
      _objc_copyWeak(auStack_98,param_1 + 0x38);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar3);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar4);
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar1);
      func_0x00010be31660(lVar2);
      _objc_release(uVar1);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_98);
    }
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 10804d084; end: 10804d0a3;  */

void FUN_10804d084(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010804d090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10804d0a4; end: 10804d14f;  */

void FUN_10804d0a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10804d150;
    puStack_40 = &UNK_110849530;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    uStack_38 = uVar2;
    func_0x00010007380c(uVar3,&puStack_58);
    _objc_release(uStack_38);
  }
  else {
    func_0x00010bf62500(lVar1);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10804d150; end: 10804d15f;  */

void FUN_10804d150(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010804d15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10804d160; end: 10804d2d7; -[SCCustomStoriesDataSyncer _handleSuccessGetCustomStoryResponse:completion:] */

void FUN_10804d160(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 uStack_58;
  undefined1 uStack_57;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1270;
  func_0x00010c1342e0(PTR_PTR_1126b1270);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f360(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10804d2d8;
  puStack_70 = &UNK_110a18e20;
  uStack_58 = 0;
  uStack_57 = (undefined1)uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = param_3;
  lStack_60 = param_1;
  _objc_retain(param_3);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = puVar2;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x10804d2f4;
  puStack_98 = &UNK_110842508;
  uStack_90 = param_4;
  _objc_retain(param_4);
  func_0x00010c0f8500(uVar1,param_2,&puStack_88,uVar3,&puStack_b0);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uStack_90);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10804d2d8; end: 10804d307;  */

void FUN_10804d2d8(long param_1,long param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar17 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
  uVar2 = *(undefined1 *)(param_1 + 0x30);
  uVar3 = *(undefined1 *)(param_1 + 0x31);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(lVar1);
  _objc_retain(uVar17);
  lVar7 = lVar1;
  func_0x00010bfceec0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x000108f579f0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  puStack_1f8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  uStack_98 = 0x108055b50;
  uStack_90 = 0x108055b60;
  uStack_88 = 0;
  puStack_1f0 = &uStack_e0;
  uStack_e0 = 0;
  uStack_d0 = 0x3032000000;
  uStack_c8 = 0x108055b50;
  uStack_c0 = 0x108055b60;
  uStack_b8 = 0;
  puStack_1e8 = &uStack_110;
  uStack_110 = 0;
  uStack_100 = 0x3032000000;
  uStack_f8 = 0x108055b50;
  uStack_f0 = 0x108055b60;
  uStack_e8 = 0;
  puStack_1e0 = &uStack_140;
  uStack_140 = 0;
  uStack_130 = 0x3032000000;
  uStack_128 = 0x108055b50;
  uStack_120 = 0x108055b60;
  uStack_118 = 0;
  puStack_1d8 = &uStack_170;
  uStack_170 = 0;
  uStack_160 = 0x3032000000;
  uStack_158 = 0x108055b50;
  uStack_150 = 0x108055b60;
  uStack_148 = 0;
  puStack_1d0 = &uStack_1a0;
  uStack_1a0 = 0;
  uStack_190 = 0x3032000000;
  uStack_188 = 0x108055b50;
  uStack_180 = 0x108055b60;
  uStack_178 = 0;
  puStack_1c8 = &uStack_1c0;
  uStack_1c0 = 0;
  uStack_1b0 = 0x2020000000;
  uStack_1a8 = 0;
  puStack_218 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_210 = 0xc2000000;
  pcStack_208 = FUN_1080587fc;
  puStack_200 = &UNK_110a192c0;
  puStack_1b8 = puStack_1c8;
  puStack_198 = puStack_1d0;
  puStack_168 = puStack_1d8;
  puStack_138 = puStack_1e0;
  puStack_108 = puStack_1e8;
  puStack_d8 = puStack_1f0;
  puStack_a8 = puStack_1f8;
  FUN_108055b68(lVar7,uVar17,&puStack_218);
  lVar8 = lVar7;
  func_0x00010bf626e0();
  FUN_108055b2c();
  lVar10 = param_2;
  FUN_1084dc184(param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  puVar18 = PTR_PTR_1126d8f60;
  if (lVar11 == 0) {
    FUN_108509684(PTR_PTR_1126d8f60,0);
    _objc_retainAutoreleasedReturnValue();
    if (puVar18 == (undefined *)0x0) goto LAB_108058644;
    _objc_setProperty_nonatomic_copy(puVar18);
    bVar5 = true;
  }
  else {
    FUN_108509e24(PTR_PTR_1126d8f60,lVar11);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar11;
    func_0x00010c27dd80();
    bVar5 = lVar10 == 0;
    if (puVar18 == (undefined *)0x0) {
      puVar18 = (undefined *)0x0;
      bVar4 = true;
      goto LAB_108058258;
    }
  }
  bVar4 = false;
  *(long *)(puVar18 + 0x28) = lVar8;
LAB_108058258:
  while( true ) {
    lVar10 = lVar7;
    FUN_108056708();
    if (!bVar4) {
      *(long *)(puVar18 + 0xa0) = lVar10;
    }
    lVar10 = lVar7;
    func_0x00010bf85d80(lVar7);
    _objc_retainAutoreleasedReturnValue();
    if (bVar4) {
      _objc_release(lVar10);
    }
    else {
      _objc_setProperty_nonatomic_copy(puVar18);
      _objc_release(lVar10);
      puVar18[0x15] = 0;
    }
    uVar12 = puStack_198[5];
    func_0x00010bf5bbc0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar17;
    func_0x00010c0720c0();
    if (!bVar4) {
      uVar6 = (undefined1)uVar16;
      if (lVar8 == 6) {
        uVar6 = 1;
      }
      if (lVar8 == 10) {
        uVar6 = 1;
      }
      puVar18[0x16] = uVar6;
    }
    _objc_release(uVar12);
    lVar10 = lVar7;
    func_0x00010bf11c80();
    if (!bVar4) {
      puVar18[0x17] = (char)lVar10;
    }
    lVar10 = lVar7;
    func_0x00010bfcf560();
    if (!bVar4) {
      *(long *)(puVar18 + 0x60) = lVar10;
      _objc_setProperty_nonatomic_copy(puVar18);
      puVar18[0x14] = *(undefined1 *)(puStack_1b8 + 3);
      _objc_setProperty_nonatomic_copy(puVar18);
      _objc_setProperty_nonatomic_copy(puVar18);
      _objc_setProperty_nonatomic_copy(puVar18);
      _objc_setProperty_nonatomic_copy(puVar18);
      _objc_setProperty_nonatomic_copy(puVar18);
    }
    lVar10 = lVar7;
    FUN_1080567b0(lVar7);
    _objc_retainAutoreleasedReturnValue();
    if (!bVar4) {
      _objc_setProperty_nonatomic_copy(puVar18);
    }
    _objc_release(lVar10);
    func_0x00010c25ed40(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    if (bVar5) {
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lStack_80 = lVar9;
      func_0x00010c0df7c0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_78 = puVar13;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = param_2;
      FUN_108054264(param_2,puVar14,uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
      _objc_release(puVar13);
      lVar15 = lVar10;
      func_0x00010bf529e0();
      if (lVar15 != 0) {
        FUN_1084ee948(param_2,2,lVar10,0,PTR____NSArray0__struct_11034ab48,
                      PTR____NSDictionary0__struct_11034ab58,PTR____NSDictionary0__struct_11034ab58,
                      uVar3);
      }
      if (lVar8 == 1) {
        lVar15 = puStack_198[5];
        func_0x00010bf5bbc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar13 = PTR__OBJC_CLASS___NSSet_1126ae870;
        if (lVar15 != 0) {
          uVar16 = puStack_198[5];
          func_0x00010bf5bbc0(uVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2268e0(puVar13);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = param_2;
          FUN_1084ea0fc(param_2,puVar13);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar13);
          _objc_release(uVar16);
          FUN_1084ee948(param_2,1,lVar8,0,PTR____NSArray0__struct_11034ab48,
                        PTR____NSDictionary0__struct_11034ab58,
                        PTR____NSDictionary0__struct_11034ab58,uVar3);
          _objc_release(lVar8);
        }
      }
      _objc_release(lVar10);
    }
    _objc_release(lVar11);
    _objc_release(puVar18);
    __Block_object_dispose(&uStack_1c0,8);
    __Block_object_dispose(&uStack_1a0,8);
    _objc_release(uStack_178);
    __Block_object_dispose(&uStack_170,8);
    _objc_release(uStack_148);
    __Block_object_dispose(&uStack_140,8);
    _objc_release(uStack_118);
    __Block_object_dispose(&uStack_110,8);
    _objc_release(uStack_e8);
    __Block_object_dispose(&uStack_e0,8);
    _objc_release(uStack_b8);
    __Block_object_dispose(&uStack_b0,8);
    _objc_release(uStack_88);
    _objc_release(lVar9);
    _objc_release(lVar7);
    _objc_release(uVar17);
    _objc_release(lVar1);
    _objc_release(param_2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) break;
    ___stack_chk_fail();
LAB_108058644:
    puVar18 = (undefined *)0x0;
    bVar4 = true;
    bVar5 = true;
  }
  return;
}



/* Entry: 10804d308; end: 10804d45f; -[SCCustomStoriesDataSyncer syncAndFetchPublicationIds:requestSource:completionQueue:completion:] */

void FUN_10804d308(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10804d460; end: 10804d49b;  */

void FUN_10804d460(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec9700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10804d49c; end: 10804d5f3; -[SCCustomStoriesDataSyncer forceSyncAndFetchPublicationIds:requestSource:completionQueue:completion:] */

void FUN_10804d49c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10804d5f4; end: 10804d62f;  */

void FUN_10804d5f4(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec9700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10804d630; end: 10804d787; -[SCCustomStoriesDataSyncer _syncAndFetchPublicationIdsOnPerfomer:requestSource:debounceRequest:completionQueue:completion:] */

void FUN_10804d630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010bec9c00(param_1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10804d788; end: 10804d7bf;  */

void FUN_10804d788(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf62520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10804d7c0; end: 10804d9e3; -[SCCustomStoriesDataSyncer _syncPublicationIdsOnPerfomer:requestSource:debounceRequest:completion:] */

void FUN_10804d7c0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  if ((param_5 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010bf51e00();
  }
  else {
    lVar1 = *(long *)(param_1 + 0x58);
    func_0x00010bf65f20();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6,1);
    }
  }
  else {
    lVar2 = lVar1;
    func_0x00010c246d00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_78,param_1);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_10804d9e4;
    puStack_98 = &UNK_11084f3a0;
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(lVar1);
    lStack_90 = lVar1;
    _objc_retain(param_6);
    ppuVar3 = &puStack_b0;
    lStack_88 = param_6;
    _objc_retainBlock();
    _objc_copyWeak(auStack_b8,auStack_78);
    _objc_retain(param_3);
    _objc_retain(ppuVar3);
    func_0x00010bec9900(param_1);
    _objc_release(ppuVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_b8);
    _objc_release(ppuVar3);
    _objc_release(lStack_88);
    _objc_release(lStack_90);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10804d9e4; end: 10804dab7;  */

void FUN_10804d9e4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((int)param_2 != 0) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bdcc660();
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010804da38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 10804dab8; end: 10804db5b; -[SCCustomStoriesDataSyncer _handleSnapchatterDataUpdate] */

void FUN_10804dab8(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010be101a0(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10804db5c; end: 10804dba3;  */

void FUN_10804db5c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed2ee0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10804dba4; end: 10804dcdf; -[SCCustomStoriesDataSyncer _updateBlockedUserIdsForSharedStoryWithPulicationId:blockedUserIdsToNames:shouldRemoveBlockedUserFromViewerList:] */

void FUN_10804dba4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10804dce0;
  puStack_70 = &UNK_110a18ee0;
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_5;
  _objc_retain(param_4);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10804dd30;
  puStack_98 = &UNK_110841f20;
  uStack_90 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar2,param_2,&puStack_88,uVar3,&puStack_b0);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_90);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 10804dce0; end: 10804dd2f;  */

void FUN_10804dce0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  FUN_10805a1e4(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_10805a5a8(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10804dd30; end: 10804dd3b;  */

void FUN_10804dd30(void)

{
  return;
}



/* Entry: 10804dd3c; end: 10804ddb7;  */

void FUN_10804dd3c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = param_2;
    func_0x00010c294420(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    lVar2 = lVar1;
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10804ddb8; end: 10804de8f; -[SCCustomStoriesDataSyncer _updateAllCustomStoryMetaDataWithLatestBlockedUserIdsToNames:] */

void FUN_10804ddb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10804de90; end: 10804dec3;  */

void FUN_10804de90(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed2ec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10804dec4; end: 10804e043; -[SCCustomStoriesDataSyncer _updateAllCustomStoryMetaDataOnPerformerWithLatestBlockedUserIdsToNames:] */

void FUN_10804dec4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x000100447b78();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_retain(lVar3);
  puVar5 = auStack_e8;
  lVar2 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      uVar6 = *(undefined8 *)(lVar7 * 8);
      uVar4 = uVar6;
      func_0x00010c11ac00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80(uVar6);
      func_0x00010bed41a0(param_1);
      _objc_release(uVar4);
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    puVar5 = auStack_e8;
    lVar2 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  func_0x00010c138820(*(undefined8 *)(param_3 + 0x58));
  if (puVar5 != (undefined1 *)0x0) {
    (**(code **)(puVar5 + 0x10))(puVar5,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 10804e044; end: 10804e09b; -[SCCustomStoriesDataSyncer _handleSyncFailureWithPublicationIds:completion:] */

void FUN_10804e044(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_4);
  func_0x00010c138820(*(undefined8 *)(param_1 + 0x58));
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10804e09c; end: 10804e0a3; -[SCCustomStoriesDataSyncer addSyncUpdateListener:] */

void FUN_10804e09c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10804e0a4; end: 10804e0ab; -[SCCustomStoriesDataSyncer removeSyncUpdateListener:] */

void FUN_10804e0a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10804e0ac; end: 10804e0b3; -[SCCustomStoriesDataSyncer _announceSyncedCustomStoriesWithRequestedCustomStoryIds:] */

void FUN_10804e0ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2669b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_syncedCustomStoriesWithRequested_112677490);
  return;
}



/* Entry: 10804e0b4; end: 10804e0bb; -[SCCustomStoriesDataSyncer customStoryMetadataObservableForPublicationId:observationQueue:] */

void FUN_10804e0b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf62590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_customStoryMetadataObservableFor_1125b6308);
  return;
}



/* Entry: 10804e0bc; end: 10804e0c3; -[SCCustomStoriesDataSyncer customStoryMetadataMapObservable] */

void FUN_10804e0bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf62570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_customStoryMetadataMapObservable_1125b6300);
  return;
}



/* Entry: 10804e0c4; end: 10804e0cb; -[SCCustomStoriesDataSyncer pendingCustomStoryMetadataMapObservable] */

void FUN_10804e0c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f7470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_pendingCustomStoryMetadataMapObs_11261b738);
  return;
}



/* Entry: 10804e0cc; end: 10804e16f; -[SCCustomStoriesDataSyncer customStoryPublicGroupMetadataObservableForFriendId:groupId:observationQueue:] */

void FUN_10804e0cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  FUN_1084dec10();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10804e170; end: 10804e1f3; -[SCCustomStoriesDataSyncer friendCustomStoryPublicGroupMetadataMapObservableForFriendUserId:observationQueue:] */

void FUN_10804e170(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  FUN_1084de9d4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10804e1f4; end: 10804e31f; -[SCCustomStoriesDataSyncer customStoryMetadataForPublicationIds:completionQueue:completion:] */

void FUN_10804e1f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010beea540(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10804e320; end: 10804e35f;  */

void FUN_10804e320(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf62520(*(undefined8 *)(lVar1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


