/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107de922c; end: 107de9233; -[SCOperaVideoStall hasVideoStartedPlaying] */

undefined1 FUN_107de922c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Entry: 107de9234; end: 107de923b; -[SCOperaVideoStall exitOnStall] */

undefined1 FUN_107de9234(long param_1)

{
  return *(undefined1 *)(param_1 + 0x29);
}



/* Entry: 107de923c; end: 107de9243; -[SCOperaVideoStall networkSnapshot] */

undefined8 FUN_107de923c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107de9244; end: 107de9273; -[SCOperaVideoStall setNetworkSnapshot:] */

void FUN_107de9244(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107de9274; end: 107de92af; -[SCOperaVideoStall .cxx_destruct] */

void FUN_107de9274(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x40,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 107de92b0; end: 107de9467; -[SCOperaVideoStallTracker initWithPlaybackProgressAtTime:initiallyStalled:timeProvider:bandwidthEstimator:videoIdentifier:operaConfigProvider:] */

undefined1 *
FUN_107de92b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126fb338;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + 0x40) = 0;
    _objc_retain(param_7);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_7;
    _objc_release(uVar4);
    uVar4 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c0d80a0();
    _objc_release(uVar4);
    if ((int)uVar3 != 0) {
      uVar4 = param_8;
      func_0x00010c269d40(param_8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d80c0();
      _objc_release(uVar4);
      puVar2 = PTR_PTR_1126c99f8;
      _objc_alloc();
      func_0x00010bff6940();
      uVar4 = *(undefined8 *)((long)puVar1 + 0x58);
      *(undefined **)((long)puVar1 + 0x58) = puVar2;
      _objc_release(uVar4);
    }
    if (param_4 != 0) {
      func_0x00010bed02a0(param_1,puVar1);
    }
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 107de9468; end: 107de9487; -[SCOperaVideoStallTracker hasExperiencedStalling] */

bool FUN_107de9468(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0(lVar1);
  return lVar1 != 0;
}



/* Entry: 107de9488; end: 107de958f; -[SCOperaVideoStallTracker hasExperiencedMidPlaybackStalling] */

undefined8 FUN_107de9488(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
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
  lVar4 = *(long *)(param_1 + 8);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60(lVar4,param_2,&uStack_110,auStack_c8,0x10);
  uVar5 = 0;
  if (lVar1 != 0) {
    lVar6 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(lVar4);
        }
        lVar2 = *(long *)(lStack_108 + lVar7 * 8);
        func_0x00010c27dd80();
        if (lVar2 == 2 || lVar2 == 4) {
          uVar5 = 1;
          goto LAB_107de9550;
        }
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
    uVar5 = 0;
  }
LAB_107de9550:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar5;
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)(lVar4 + 8);
  func_0x00010c089820(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c06b700();
  _objc_release(uVar3);
  return uVar5;
}



/* Entry: 107de9590; end: 107de95cf; -[SCOperaVideoStallTracker isStalling] */

undefined8 FUN_107de9590(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c089820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06b700();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107de95d0; end: 107de99fb; -[SCOperaVideoStallTracker currentViewParameters] */

void FUN_107de95d0(double param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((param_2[0x30] & 1) == 0) &&
     (puVar19 = *(undefined **)(param_2 + 0x38), puVar19 != (undefined *)0x0)) {
    puVar1 = puVar19;
    _objc_retain();
  }
  else {
    param_2[0x30] = 0;
    puVar1 = param_2;
    func_0x00010be3b0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_2;
    func_0x00010be5ae80();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    puVar3 = PTR_PTR_1126b2348;
    func_0x00010c276c80();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar4 = *(undefined8 *)(param_2 + 8);
    puStack_d0 = puVar3;
    func_0x00010bf529e0(uVar4);
    func_0x00010c0df840(puVar19,param_3,uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b2348;
    puStack_a0 = puVar19;
    func_0x00010c064440();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_c8 = puVar5;
    func_0x00010bf8b160(puVar1);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b2348;
    puStack_98 = puVar6;
    func_0x00010c064460();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_c0 = puVar7;
    func_0x00010c24d640(puVar1);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126b2348;
    puStack_90 = puVar8;
    func_0x00010c276ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_b8 = puVar9;
    func_0x00010becda00(param_2);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126b2348;
    puStack_88 = puVar10;
    func_0x00010c07f740();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar12 = param_2;
    puStack_b0 = puVar11;
    func_0x00010c07f760(param_2);
    func_0x00010c0df6e0(puVar13,param_3,puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126b2348;
    puStack_80 = puVar13;
    func_0x00010c24d6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = param_2;
    puStack_a8 = puVar12;
    func_0x00010be9a860();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_78 = puVar14;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_a0,&puStack_d0,6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72020(puVar16,param_3,puVar15);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar12);
    _objc_release(puVar13);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar19);
    _objc_release(puVar3);
    puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (puVar2 != (undefined *)0x0) {
      func_0x00010bf8b160(puVar2);
      func_0x00010c0df720(puVar19);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b2348;
      func_0x00010c0b51c0(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar16,param_3,puVar19,puVar6);
      _objc_release(puVar6);
      _objc_release(puVar19);
      puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar6 = puVar2;
      func_0x00010bf157a0(puVar2);
      func_0x00010c0df780(puVar19,param_3,puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b2348;
      func_0x00010c0b51a0(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar16,param_3,puVar19,puVar6);
      _objc_release(puVar6);
      _objc_release(puVar19);
    }
    lVar17 = *(long *)(param_2 + 0x58);
    if ((lVar17 != 0) && (func_0x00010c245e20(), lVar17 != 0)) {
      puVar19 = param_2;
      func_0x00010be9a820(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b2348;
      func_0x00010c0d8120(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar16,param_3,puVar19,puVar6);
      _objc_release(puVar6);
      _objc_release(puVar19);
    }
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    *(undefined **)(param_2 + 0x38) = puVar16;
    _objc_retain(puVar16);
    _objc_release(uVar4);
    puVar19 = puVar16;
    func_0x00010bf51e00();
    _objc_release(puVar16);
    _objc_release(puVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
    return;
  }
  ___stack_chk_fail();
  lVar17 = *(long *)(puVar1 + 8);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  if (((param_1 <= 0.1) && ((puVar1[0x49] & 1) != 0)) ||
     ((lVar18 = lVar17, func_0x00010c06b700(), (int)lVar18 != 0 &&
      (lVar18 = lVar17, func_0x00010c27dd80(), lVar18 == 4)))) {
    puVar19 = (undefined *)0x4;
  }
  else {
    puVar19 = puVar1;
    func_0x00010bebf420(param_1,puVar1);
  }
  puVar1[0x49] = 0;
  func_0x00010bed02a0(param_1,puVar1,param_3,puVar19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar17);
  return;
}



/* Entry: 107de99fc; end: 107de9a97; -[SCOperaVideoStallTracker didStallAtTime:] */

void FUN_107de99fc(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + 8);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  if (((param_1 <= 0.1) && ((*(byte *)(param_2 + 0x49) & 1) != 0)) ||
     ((lVar2 = lVar1, func_0x00010c06b700(), (int)lVar2 != 0 &&
      (lVar2 = lVar1, func_0x00010c27dd80(), lVar2 == 4)))) {
    lVar2 = 4;
  }
  else {
    lVar2 = param_2;
    func_0x00010bebf420(param_1,param_2);
  }
  *(undefined1 *)(param_2 + 0x49) = 0;
  func_0x00010bed02a0(param_1,param_2,param_3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107de9a98; end: 107de9aa3; -[SCOperaVideoStallTracker didStartManualSeekAtTime:] */

void FUN_107de9a98(long param_1)

{
  *(undefined1 *)(param_1 + 0x49) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bed02b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__tryAppendingActiveStallAtTime_t_112591a50,3)
  ;
  return;
}



/* Entry: 107de9aa4; end: 107de9aaf; -[SCOperaVideoStallTracker didStartLoopSeek] */

void FUN_107de9aa4(long param_1)

{
  *(undefined1 *)(param_1 + 0x49) = 1;
  return;
}



/* Entry: 107de9ab0; end: 107de9af3; -[SCOperaVideoStallTracker didStartPlaying] */

void FUN_107de9ab0(long param_1)

{
  long lVar1;
  
  *(undefined2 *)(param_1 + 0x48) = 1;
  lVar1 = param_1;
  func_0x00010c07f760();
  if ((int)lVar1 != 0) {
    func_0x00010bdfffe0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be8daf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeTooShortManualSeekStallIf_112581058)
    ;
    return;
  }
  return;
}



/* Entry: 107de9af4; end: 107de9b47; -[SCOperaVideoStallTracker didExit] */

void FUN_107de9af4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (lVar2 = lVar1, func_0x00010c06b700(), (int)lVar2 != 0)) {
    func_0x00010c26b440(lVar1);
    func_0x00010be172a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107de9b48; end: 107de9b53; -[SCOperaVideoStallTracker didReachEndOfPlayback] */

void FUN_107de9b48(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 107de9b54; end: 107de9b87; -[SCOperaVideoStallTracker didFinishPlayback] */

void FUN_107de9b54(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c07f760();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c12cd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_removeLastObject_112628d78);
    return;
  }
  return;
}



/* Entry: 107de9b88; end: 107de9be3; -[SCOperaVideoStallTracker _didResumeFromStall] */

void FUN_107de9b88(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (lVar2 = lVar1, func_0x00010c06b700(), (int)lVar2 != 0)) {
    func_0x00010bfaf680(lVar1);
    func_0x00010be172a0(param_1);
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107de9be4; end: 107de9c4b; -[SCOperaVideoStallTracker _removeTooShortManualSeekStallIfNeeded] */

void FUN_107de9be4(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + 8);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c27dd80();
  if ((lVar2 == 3) && (func_0x00010bf8b160(lVar1), param_1 < 0.3)) {
    func_0x00010c12cd60(*(undefined8 *)(param_2 + 8));
    *(undefined1 *)(param_2 + 0x30) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107de9c4c; end: 107de9ccf; -[SCOperaVideoStallTracker _initialStall] */

void FUN_107de9c4c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bfece40(lVar1,param_2,&PTR___NSConcreteGlobalBlock_110a0d430);
  if (lVar1 != 0x7fffffffffffffff) {
    func_0x00010c0dfd40(*(undefined8 *)(param_1 + 8),param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107de9cd0; end: 107de9ddb; -[SCOperaVideoStallTracker _totalStallDuration] */

double FUN_107de9cd0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined1 auStack_328 [128];
  long lStack_2a8;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar13 = 0.0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar6 = *(long *)(param_1 + 8);
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00010bf52a60(lVar6,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 == 0) {
    dVar15 = 0.0;
  }
  else {
    lVar7 = *plStack_110;
    dVar15 = 0.0;
    do {
      lVar10 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(lVar6);
        }
        func_0x00010bf8b160(*(undefined8 *)(lStack_118 + lVar10 * 8));
        dVar15 = dVar15 + dVar13;
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = lVar6;
      func_0x00010bf52a60(lVar6,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return dVar15;
  }
  ___stack_chk_fail();
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar13 = 0.0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  lVar6 = *(long *)(lVar6 + 8);
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00010bf52a60(lVar6,param_2,&uStack_240,auStack_1f8,0x10);
  if (lVar1 == 0) {
    dVar15 = 0.0;
  }
  else {
    lVar7 = *plStack_230;
    dVar15 = 0.0;
    do {
      lVar10 = 0;
      do {
        if (*plStack_230 != lVar7) {
          _objc_enumerationMutation(lVar6);
        }
        lVar8 = *(long *)(lStack_238 + lVar10 * 8);
        lVar12 = lVar8;
        func_0x00010c27dd80();
        if ((lVar12 == 4 || lVar12 == 2) && (func_0x00010bf8b160(lVar8), dVar15 < dVar13)) {
          func_0x00010bf8b160(lVar8);
          dVar15 = dVar13;
        }
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = lVar6;
      func_0x00010bf52a60(lVar6,param_2,&uStack_240,auStack_1f8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return dVar15;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_370;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar13 = 0.0;
  lStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  plStack_360 = (long *)0x0;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  lVar6 = *(long *)(lVar6 + 8);
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00010bf52a60(lVar6,param_2,&uStack_370,auStack_328,0x10);
  if (lVar1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    lVar10 = *plStack_360;
    dVar15 = 0.0;
    do {
      lVar12 = 0;
      do {
        dVar14 = dVar13;
        if (*plStack_360 != lVar10) {
          _objc_enumerationMutation(lVar6);
          dVar14 = dVar13;
        }
        lVar11 = *(long *)(lStack_368 + lVar12 * 8);
        lVar8 = lVar11;
        func_0x00010c27dd80();
        dVar13 = dVar14;
        if ((lVar8 == 4 || lVar8 == 2) &&
           (func_0x00010bf8b160(lVar11), dVar13 = dVar14, dVar15 < dVar14)) {
          func_0x00010bf8b160(lVar11);
          dVar13 = dVar14;
          _objc_retain(lVar11);
          _objc_release(lVar7);
          lVar7 = lVar11;
          dVar15 = dVar14;
        }
        lVar12 = lVar12 + 1;
      } while (lVar1 != lVar12);
      lVar1 = lVar6;
      puVar5 = &uStack_370;
      func_0x00010bf52a60(lVar6,param_2,&uStack_370,auStack_328,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
    return dVar13;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126d7e98;
  _objc_alloc(PTR_PTR_1126d7e98);
  uVar4 = *(undefined8 *)(lVar6 + 0x20);
  uVar9 = *(undefined8 *)(lVar6 + 0x28);
  func_0x00010bf88900(uVar9);
  uVar3 = *(undefined8 *)(lVar6 + 0x28);
  func_0x00010c0dd920(uVar3);
  func_0x00010c055d20(dVar13,puVar2,param_2,puVar5,uVar4,uVar9,uVar3,*(undefined1 *)(lVar6 + 0x48));
  lVar1 = lVar6;
  func_0x00010bed0280(lVar6,param_2,puVar2);
  if ((int)lVar1 != 0) {
    uVar9 = *(undefined8 *)(lVar6 + 0x58);
    uVar4 = *(undefined8 *)(lVar6 + 8);
    func_0x00010c089820(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2513e0(uVar9,param_2,uVar4);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return dVar13;
}



/* Entry: 107de9ddc; end: 107de9f0f; -[SCOperaVideoStallTracker _longestMidPlaybackStallDuration] */

double FUN_107de9ddc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_208 [128];
  long lStack_188;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar13 = 0.0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar6 = *(long *)(param_1 + 8);
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00010bf52a60(lVar6,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 == 0) {
    dVar15 = 0.0;
  }
  else {
    lVar9 = *plStack_110;
    dVar15 = 0.0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_110 != lVar9) {
          _objc_enumerationMutation(lVar6);
        }
        lVar7 = *(long *)(lStack_118 + lVar11 * 8);
        lVar12 = lVar7;
        func_0x00010c27dd80();
        if ((lVar12 == 4 || lVar12 == 2) && (func_0x00010bf8b160(lVar7), dVar15 < dVar13)) {
          func_0x00010bf8b160(lVar7);
          dVar15 = dVar13;
        }
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      lVar1 = lVar6;
      func_0x00010bf52a60(lVar6,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return dVar15;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_250;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar13 = 0.0;
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  lVar6 = *(long *)(lVar6 + 8);
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00010bf52a60(lVar6,param_2,&uStack_250,auStack_208,0x10);
  if (lVar1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    lVar11 = *plStack_240;
    dVar15 = 0.0;
    do {
      lVar12 = 0;
      do {
        dVar14 = dVar13;
        if (*plStack_240 != lVar11) {
          _objc_enumerationMutation(lVar6);
          dVar14 = dVar13;
        }
        lVar10 = *(long *)(lStack_248 + lVar12 * 8);
        lVar7 = lVar10;
        func_0x00010c27dd80();
        dVar13 = dVar14;
        if ((lVar7 == 4 || lVar7 == 2) &&
           (func_0x00010bf8b160(lVar10), dVar13 = dVar14, dVar15 < dVar14)) {
          func_0x00010bf8b160(lVar10);
          dVar13 = dVar14;
          _objc_retain(lVar10);
          _objc_release(lVar9);
          lVar9 = lVar10;
          dVar15 = dVar14;
        }
        lVar12 = lVar12 + 1;
      } while (lVar1 != lVar12);
      lVar1 = lVar6;
      puVar5 = &uStack_250;
      func_0x00010bf52a60(lVar6,param_2,&uStack_250,auStack_208,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar9);
    return dVar13;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126d7e98;
  _objc_alloc(PTR_PTR_1126d7e98);
  uVar4 = *(undefined8 *)(lVar6 + 0x20);
  uVar8 = *(undefined8 *)(lVar6 + 0x28);
  func_0x00010bf88900(uVar8);
  uVar3 = *(undefined8 *)(lVar6 + 0x28);
  func_0x00010c0dd920(uVar3);
  func_0x00010c055d20(dVar13,puVar2,param_2,puVar5,uVar4,uVar8,uVar3,*(undefined1 *)(lVar6 + 0x48));
  lVar1 = lVar6;
  func_0x00010bed0280(lVar6,param_2,puVar2);
  if ((int)lVar1 != 0) {
    uVar8 = *(undefined8 *)(lVar6 + 0x58);
    uVar4 = *(undefined8 *)(lVar6 + 8);
    func_0x00010c089820(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2513e0(uVar8,param_2,uVar4);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return dVar13;
}



/* Entry: 107de9f10; end: 107dea063; -[SCOperaVideoStallTracker _longestMidPlaybackStall] */

void FUN_107de9f10(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
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
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar13 = 0.0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar7 = *(long *)(param_1 + 8);
  _objc_retain(lVar7);
  lVar1 = lVar7;
  func_0x00010bf52a60(lVar7,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    lVar11 = *plStack_120;
    dVar15 = 0.0;
    do {
      lVar12 = 0;
      do {
        dVar14 = dVar13;
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lVar7);
          dVar14 = dVar13;
        }
        lVar10 = *(long *)(lStack_128 + lVar12 * 8);
        lVar2 = lVar10;
        func_0x00010c27dd80();
        dVar13 = dVar14;
        if ((lVar2 == 4 || lVar2 == 2) &&
           (func_0x00010bf8b160(lVar10), dVar13 = dVar14, dVar15 < dVar14)) {
          func_0x00010bf8b160(lVar10);
          dVar13 = dVar14;
          _objc_retain(lVar10);
          _objc_release(lVar8);
          lVar8 = lVar10;
          dVar15 = dVar14;
        }
        lVar12 = lVar12 + 1;
      } while (lVar1 != lVar12);
      lVar1 = lVar7;
      puVar6 = &uStack_130;
      func_0x00010bf52a60(lVar7,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126d7e98;
  _objc_alloc(PTR_PTR_1126d7e98);
  uVar5 = *(undefined8 *)(lVar7 + 0x20);
  uVar9 = *(undefined8 *)(lVar7 + 0x28);
  func_0x00010bf88900(uVar9);
  uVar4 = *(undefined8 *)(lVar7 + 0x28);
  func_0x00010c0dd920(uVar4);
  func_0x00010c055d20(dVar13,puVar3,param_2,puVar6,uVar5,uVar9,uVar4,*(undefined1 *)(lVar7 + 0x48));
  lVar1 = lVar7;
  func_0x00010bed0280(lVar7,param_2,puVar3);
  if ((int)lVar1 != 0) {
    uVar9 = *(undefined8 *)(lVar7 + 0x58);
    uVar5 = *(undefined8 *)(lVar7 + 8);
    func_0x00010c089820(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2513e0(uVar9,param_2,uVar5);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107dea064; end: 107dea127; -[SCOperaVideoStallTracker _tryAppendingActiveStallAtTime:type:] */

void FUN_107dea064(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126d7e98;
  _objc_alloc(PTR_PTR_1126d7e98);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bf88900(uVar5);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c0dd920(uVar2);
  func_0x00010c055d20(param_1,puVar1,param_3,param_4,uVar4,uVar5,uVar2,
                      *(undefined1 *)(param_2 + 0x48));
  lVar3 = param_2;
  func_0x00010bed0280(param_2,param_3,puVar1);
  if ((int)lVar3 != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x58);
    uVar4 = *(undefined8 *)(param_2 + 8);
    func_0x00010c089820(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2513e0(uVar5,param_3,uVar4);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107dea128; end: 107dea1cb; -[SCOperaVideoStallTracker _beginStallTrace:] */

void FUN_107dea128(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110ebf1d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c98e0;
  func_0x00010bf18180(PTR_PTR_1126c98e0,param_2,puVar1);
  *(undefined **)(param_1 + 0x40) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107dea1cc; end: 107dea283; -[SCOperaVideoStallTracker _finishStallTraceIfNeeded] */

void FUN_107dea1cc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x00010bf94960(PTR_PTR_1126c98e0);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 != 0) {
    func_0x00010c0897c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c089820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cc6e0();
    _objc_release(uVar2);
    _objc_release(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c089820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c256d00(uVar3,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 107dea284; end: 107dea3ab; -[SCOperaVideoStallTracker _tryAppendingActiveStall:] */

undefined8 FUN_107dea284(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bf529e0();
  if (999 < uVar1) {
    uVar4 = 0;
    goto LAB_107dea390;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
LAB_107dea360:
    func_0x00010befa120(*(undefined8 *)(param_1 + 8),param_2,param_3);
    uVar2 = param_3;
    func_0x00010c27dd80(param_3);
    func_0x00010bdd3c20(param_1,param_2,uVar2);
    uVar4 = 1;
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  else {
    uVar2 = uVar1;
    func_0x00010c06b700();
    if ((int)uVar2 == 0) {
      uVar2 = uVar1;
      func_0x00010c06b700();
      if ((((uVar2 & 1) != 0) || (uVar2 = uVar1, func_0x00010c27dd80(), uVar2 != 1)) ||
         (uVar2 = param_3, func_0x00010c27dd80(), uVar2 != 1)) goto LAB_107dea360;
      func_0x00010c1309e0(uVar1);
      uVar2 = uVar1;
      func_0x00010c27dd80(uVar1);
      func_0x00010bdd3c20(param_1,param_2,uVar2);
    }
    else {
      uVar2 = uVar1;
      func_0x00010c27dd80();
      uVar3 = param_3;
      func_0x00010c27dd80();
      if (uVar2 != uVar3) {
        func_0x00010bfaf680(uVar1);
        func_0x00010be172a0(param_1);
        goto LAB_107dea360;
      }
    }
    uVar4 = 0;
  }
  _objc_release(uVar1);
LAB_107dea390:
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 107dea3ac; end: 107dea46b; -[SCOperaVideoStallTracker _stallTypeWithTime:] */

undefined8 FUN_107dea3ac(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  lVar1 = *(long *)(param_2 + 8);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_2 + 8);
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c27dd80();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 2) {
      return 2;
    }
  }
  if ((*(byte *)(param_2 + 0x18) & 1) != 0) {
    return 2;
  }
  dVar4 = ABS(param_1 + *(double *)(param_2 + 0x10)) * 2.220446049250313e-16;
  if (dVar4 <= 2.2250738585072014e-308) {
    dVar4 = 2.2250738585072014e-308;
  }
  if (ABS(*(double *)(param_2 + 0x10) - param_1) < dVar4) {
    return 1;
  }
  return 2;
}



/* Entry: 107dea46c; end: 107dea723; -[SCOperaVideoStallTracker _scaStalls] */

void FUN_107dea46c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 8));
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = *(long *)(param_1 + 8);
  _objc_retain(lVar11);
  lVar3 = lVar11;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar11);
      }
      uVar13 = *(ulong *)(lVar15 * 8);
      puVar4 = PTR_PTR_1126c9b10;
      _objc_opt_new();
      func_0x00010beec860(uVar13);
      func_0x00010c193e80(puVar4);
      func_0x00010c24d640(uVar13);
      func_0x00010c1c53a0(puVar4);
      func_0x00010bf8b160(uVar13);
      func_0x00010c192e60(puVar4);
      uVar5 = uVar13;
      func_0x00010bf88880(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16ef80(puVar4);
      _objc_release(uVar5);
      func_0x00010c27dd80(uVar13);
      func_0x00010c1b4a60(puVar4);
      func_0x00010bfde4a0(uVar13);
      func_0x00010c1c4840(puVar4);
      func_0x00010bf9b920(uVar13);
      func_0x00010c198440(puVar4);
      func_0x00010bf157a0(uVar13);
      func_0x00010c16eee0(puVar4);
      uVar5 = uVar13;
      func_0x00010c27dd80();
      if (uVar5 < 5) {
        func_0x00010c21acc0(puVar4);
      }
      uVar5 = uVar13;
      func_0x00010c0d8040();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar5 != 0) {
        func_0x00010c0d8040();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar13;
        func_0x00010c136340();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        func_0x00010c1cc720(puVar4);
        _objc_release(uVar5);
        _objc_release(uVar13);
      }
      func_0x00010befa120(puVar2);
      _objc_release(puVar4);
      lVar15 = lVar15 + 1;
    } while (lVar3 != lVar15);
    lVar3 = lVar11;
    func_0x00010bf52a60();
  }
  _objc_release(lVar11);
  puVar4 = puVar2;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lVar11 = *(long *)(puVar2 + 8);
    _objc_retain(lVar11);
    lVar3 = lVar11;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar11);
        }
        lVar14 = *(long *)(lVar15 * 8);
        lVar7 = lVar14;
        func_0x00010c0d8040();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar7 != 0) {
          func_0x00010c0d8040();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar14;
          func_0x00010c136340();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar14);
          lVar7 = lVar8;
          func_0x00010bf52a60();
          lVar14 = lRam0000000000000000;
          while (lVar7 != 0) {
            lVar12 = 0;
            do {
              if (lRam0000000000000000 != lVar14) {
                _objc_enumerationMutation(lVar8);
              }
              puVar4 = PTR_PTR_1126c9a70;
              func_0x00010c0d8100(*(undefined8 *)(puVar2 + 0x58));
              func_0x00010c2b4620(puVar4);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar6);
              _objc_release(puVar9);
              _objc_release(puVar4);
              lVar12 = lVar12 + 1;
            } while (lVar7 != lVar12);
            lVar7 = lVar8;
            func_0x00010bf52a60();
          }
          _objc_release(lVar8);
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 != lVar3);
      lVar3 = lVar11;
      func_0x00010bf52a60();
    }
    _objc_release(lVar11);
    puVar4 = puVar6;
    func_0x00010bf51e00();
    _objc_release(puVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
      ___stack_chk_fail();
      _objc_storeStrong(puVar6 + 0x58,0);
      _objc_storeStrong(puVar6 + 0x50,0);
      _objc_storeStrong(puVar6 + 0x38,0);
      _objc_storeStrong(puVar6 + 0x28,0);
      _objc_storeStrong(puVar6 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(puVar6 + 8,0);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107dea724; end: 107dea99f; -[SCOperaVideoStallTracker _scaNetworkSnapshots] */

void FUN_107dea724(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar9 = *(long *)(param_1 + 8);
  _objc_retain(lVar9);
  lVar3 = lVar9;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar9);
      }
      lVar12 = *(long *)(lVar10 * 8);
      lVar4 = lVar12;
      func_0x00010c0d8040();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 != 0) {
        func_0x00010c0d8040();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar12;
        func_0x00010c136340();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar12);
        lVar4 = lVar5;
        func_0x00010bf52a60();
        lVar12 = lRam0000000000000000;
        while (lVar4 != 0) {
          lVar11 = 0;
          do {
            if (lRam0000000000000000 != lVar12) {
              _objc_enumerationMutation(lVar5);
            }
            puVar6 = PTR_PTR_1126c9a70;
            func_0x00010c0d8100(*(undefined8 *)(param_1 + 0x58));
            func_0x00010c2b4620(puVar6);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar2);
            _objc_release(puVar7);
            _objc_release(puVar6);
            lVar11 = lVar11 + 1;
          } while (lVar4 != lVar11);
          lVar4 = lVar5;
          func_0x00010bf52a60();
        }
        _objc_release(lVar5);
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 != lVar3);
    lVar3 = lVar9;
    func_0x00010bf52a60();
  }
  _objc_release(lVar9);
  puVar6 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar2 + 0x58,0);
  _objc_storeStrong(puVar2 + 0x50,0);
  _objc_storeStrong(puVar2 + 0x38,0);
  _objc_storeStrong(puVar2 + 0x28,0);
  _objc_storeStrong(puVar2 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar2 + 8,0);
  return;
}



/* Entry: 107dea9a0; end: 107dea9ff; -[SCOperaVideoStallTracker .cxx_destruct] */

void FUN_107dea9a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107deaa00; end: 107deaa9b; -[SCOperaMediaVariant initWithMediaVariantName:elapsedTimeMs:mediaTimeMs:mediaType:] */

undefined1 *
FUN_107deaa00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fb340;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 107deaa9c; end: 107deaabf; -[SCOperaMediaVariant copyWithZone:] */

undefined8 FUN_107deaa9c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107deaac0; end: 107deab77; -[SCOperaMediaVariant hash] */

undefined8 * FUN_107deaac0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_40 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  lVar6 = *(long *)(param_1 + 0x20);
  lStack_30 = -lVar6;
  if (-1 < lVar6) {
    lStack_30 = lVar6;
  }
  puVar3 = &uStack_48;
  uStack_48 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107deac58:
    puVar7 = (undefined8 *)0x1;
  }
  else {
    puVar7 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107deac64;
    puVar7 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[4] == param_3[4])) {
      dVar9 = ABS((double)puVar3[2] - (double)param_3[2]);
      dVar8 = ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar9) && (bVar1 = false, !NAN(dVar9) && !NAN(dVar8))) {
        bVar1 = dVar9 < dVar8;
      }
      if (bVar1) {
        dVar9 = ABS((double)puVar3[3] - (double)param_3[3]);
        dVar8 = ABS((double)puVar3[3] + (double)param_3[3]) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar9) && (bVar1 = false, !NAN(dVar9) && !NAN(dVar8))) {
          bVar1 = dVar9 < dVar8;
        }
        if (bVar1) {
          puVar7 = (undefined8 *)puVar3[1];
          if (puVar7 != (undefined8 *)param_3[1]) {
            func_0x00010c071ae0();
            goto LAB_107deac64;
          }
          goto LAB_107deac58;
        }
      }
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_107deac64:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 107deab78; end: 107deac7f; -[SCOperaMediaVariant isEqual:] */

long FUN_107deab78(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107deac58:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107deac64;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
        dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (bVar1) {
          lVar4 = *(long *)(param_1 + 8);
          if (lVar4 != *(long *)(param_3 + 8)) {
            func_0x00010c071ae0();
            goto LAB_107deac64;
          }
          goto LAB_107deac58;
        }
      }
    }
    lVar4 = 0;
  }
LAB_107deac64:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 107deac80; end: 107deac87; -[SCOperaMediaVariant mediaVariantName] */

undefined8 FUN_107deac80(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107deac88; end: 107deac8f; -[SCOperaMediaVariant elapsedTimeMs] */

undefined8 FUN_107deac88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107deac90; end: 107deac97; -[SCOperaMediaVariant mediaTimeMs] */

undefined8 FUN_107deac90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107deac98; end: 107deac9f; -[SCOperaMediaVariant mediaType] */

undefined8 FUN_107deac98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107deaca0; end: 107deacab; -[SCOperaMediaVariant .cxx_destruct] */

void FUN_107deaca0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107deacac; end: 107dead57; -[SCWebServerHandler initWithMatchBlock:asyncProcessBlock:] */

undefined1 *
FUN_107deacac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fb348;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107dead58; end: 107dead5f; -[SCWebServerHandler matchBlock] */

undefined8 FUN_107dead58(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107dead60; end: 107dead67; -[SCWebServerHandler asyncProcessBlock] */

undefined8 FUN_107dead60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107dead68; end: 107dead97; -[SCWebServerHandler .cxx_destruct] */

void FUN_107dead68(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107dead98; end: 107dead9b; +[SCWebServer initialize] */

void FUN_107dead98(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (puRam0000000113727fc0 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
    _objc_alloc_init();
    puVar3 = puRam0000000113727fc0;
    puRam0000000113727fc0 = puVar2;
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
    func_0x00010c26fd80(PTR__OBJC_CLASS___NSTimeZone_1126b7518,param_2,
                        &PTR____CFConstantStringClassReference_110ebf658);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c215860(puRam0000000113727fc0,param_2,puVar3);
    _objc_release(puVar3);
    func_0x00010c189b60(puRam0000000113727fc0,param_2,
                        &PTR____CFConstantStringClassReference_110ebf678);
    puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
    _objc_alloc(PTR__OBJC_CLASS___NSLocale_1126af788);
    func_0x00010c026a60();
    func_0x00010c1bf3e0(puRam0000000113727fc0,param_2,puVar3);
    _objc_release(puVar3);
  }
  if (puRam0000000113727fc8 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
    _objc_alloc_init();
    puVar3 = puRam0000000113727fc8;
    puRam0000000113727fc8 = puVar2;
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
    func_0x00010c26fd80(PTR__OBJC_CLASS___NSTimeZone_1126b7518,param_2,
                        &PTR____CFConstantStringClassReference_110ebf658);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c215860(puRam0000000113727fc8,param_2,puVar3);
    _objc_release(puVar3);
    func_0x00010c189b60(puRam0000000113727fc8,param_2,
                        &PTR____CFConstantStringClassReference_110ebf698);
    puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
    _objc_alloc(PTR__OBJC_CLASS___NSLocale_1126af788);
    func_0x00010c026a60();
    func_0x00010c1bf3e0(puRam0000000113727fc8,param_2,puVar3);
    _objc_release(puVar3);
  }
  if (puRam0000000113824750 != (undefined *)0x0) {
    return;
  }
  puVar3 = PTR_PTR_1126ae790;
  _objc_alloc();
  func_0x00010c021520();
  lVar1 = (long)puRam0000000113824750;
  puRam0000000113824750 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107dead9c; end: 107deae9f; -[SCWebServer init] */

undefined1 * FUN_107dead9c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fb350;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release();
    _dispatch_group_create();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x00010c2a2b60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined **)((long)puVar1 + 0x68) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined **)((long)puVar1 + 0x70) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107deaea0; end: 107deaed3; -[SCWebServer dealloc] */

void FUN_107deaea0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fb350;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107deaed4; end: 107deb00b; -[SCWebServer _handleSocketError:error:] */

void FUN_107deaed4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *(undefined8 *)PTR__NSPOSIXErrorDomain_110345598;
  iVar4 = (int)param_3;
  uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  _strerror(param_3);
  func_0x00010c25da80(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_60,&uStack_68,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240(puVar3,param_2,uVar5,(long)iVar4,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (param_4 != (undefined8 *)0x0) {
    _objc_retainAutorelease(puVar3);
    *param_4 = puVar3;
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x68),param_2,puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar3[0x28] = 1;
  return;
}



/* Entry: 107deb00c; end: 107deb017; -[SCWebServer _didConnect] */

void FUN_107deb00c(long param_1)

{
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 107deb018; end: 107deb0a3; -[SCWebServer willStartConnection:] */

void FUN_107deb018(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107deb0a4;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f8240(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107deb0a4; end: 107deb12f;  */

void FUN_107deb0a4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(lVar1 + 0x20);
  if (lVar2 == 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_107deb130;
    puStack_30 = &UNK_110842e18;
    lStack_28 = lVar1;
    func_0x000100162d98("APPSTORE",&puStack_48);
    lVar1 = *(long *)(param_1 + 0x20);
    lVar2 = *(long *)(lVar1 + 0x20);
  }
  *(long *)(lVar1 + 0x20) = lVar2 + 1;
  func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58));
  return;
}



/* Entry: 107deb130; end: 107deb143;  */

void FUN_107deb130(long param_1)

{
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x28) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdfd050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0x20),PTR_s__didConnect_11255cdb0);
  return;
}



/* Entry: 107deb144; end: 107deb14b; -[SCWebServer _didDisconnect] */

void FUN_107deb144(long param_1)

{
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 107deb14c; end: 107deb21b; -[SCWebServer didEndConnection:] */

void FUN_107deb14c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x107deb1a4;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 107deb21c; end: 107deb223;  */

void FUN_107deb21c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfd3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didDisconnect_11255ce90);
  return;
}



/* Entry: 107deb224; end: 107deb2af; -[SCWebServer didUpdateConnectionStatus:] */

void FUN_107deb224(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107deb2b0;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f8240(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107deb2b0; end: 107deb2bb;  */

void FUN_107deb2b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70),PTR_s_next__112614028,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107deb2bc; end: 107deb33b; -[SCWebServer addHandlerWithMatchBlock:asyncProcessBlock:] */

void FUN_107deb2bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d7ea0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c028b40();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c066b00(*(undefined8 *)(param_1 + 0x18),param_2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107deb33c; end: 107deb42b; -[SCWebServer _createListeningSocket:localAddress:length:maxPendingConnections:error:] */

ulong FUN_107deb33c(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = 0x1e;
  if (param_3 == 0) {
    uVar3 = 2;
  }
  uVar1 = (ulong)uVar3;
  _socket(uVar1,1,6);
  if ((int)uVar1 < 1) {
    ___error();
    func_0x00010be309e0(param_1);
  }
  else {
    _setsockopt();
    uVar2 = uVar1;
    _bind(uVar1,param_4,param_5);
    if (((int)uVar2 == 0) && (uVar2 = uVar1, _listen(uVar1,param_6), (int)uVar2 == 0)) {
      return uVar1;
    }
    ___error();
    func_0x00010be309e0(param_1);
    _close(uVar1);
  }
  return 0xffffffff;
}



/* Entry: 107deb42c; end: 107deb51f; -[SCWebServer _createDispatchSourceWithListeningSocket:IPv6:] */

void FUN_107deb42c(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  int iStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  int iStack_58;
  
  _dispatch_group_enter(*(undefined8 *)(param_1 + 0x10));
  uVar2 = 0x21;
  func_0x0001000819a8(0x21,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR___dispatch_source_type_read_11034be30;
  _dispatch_source_create(PTR___dispatch_source_type_read_11034be30,(long)param_3,0,uVar2);
  _objc_release(uVar2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107deb520;
  puStack_68 = &UNK_110868698;
  lStack_60 = param_1;
  iStack_58 = param_3;
  _dispatch_source_set_cancel_handler(puVar3,&puStack_80);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_107deb678;
  puStack_98 = &UNK_110868698;
  lStack_90 = param_1;
  iStack_88 = param_3;
  _dispatch_source_set_event_handler(puVar3,&puStack_b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107deb520; end: 107deb677;  */

undefined ** FUN_107deb520(long param_1)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  undefined **ppuVar4;
  int *piVar5;
  int *piVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *unaff_x26;
  undefined1 auStack_3d0 [8];
  undefined *puStack_3c8;
  undefined **ppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined *puStack_3b0;
  undefined **ppuStack_3a8;
  undefined8 ***pppuStack_3a0;
  code *pcStack_398;
  undefined8 uStack_390;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined1 ***pppuStack_290;
  code *pcStack_288;
  undefined4 uStack_278;
  undefined2 uStack_274;
  ushort uStack_272;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined2 uStack_258;
  ushort uStack_256;
  undefined4 uStack_254;
  undefined8 uStack_250;
  long lStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  int *piStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined **ppuStack_208;
  undefined1 **ppuStack_200;
  code *pcStack_1f8;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined *apuStack_1e0 [16];
  undefined1 auStack_160 [128];
  undefined8 uStack_e0;
  long lStack_d8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_1;
  _objc_autoreleasePoolPush();
  iVar2 = *(int *)(param_1 + 0x28);
  _close();
  if (iVar2 != 0) {
    uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
    ___error();
    puVar14 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    _strerror();
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar20;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x26);
    _objc_release(puVar20);
    func_0x00010c0d9840(uVar15);
    _objc_release(puVar14);
  }
  _objc_autoreleasePoolPop(lVar3);
  ppuVar4 = *(undefined ***)(*(long *)(param_1 + 0x20) + 0x10);
  _dispatch_group_leave();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_107deb678;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar17 = ppuVar4;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_autoreleasePoolPush();
  uStack_1e4 = 0x80;
  piVar5 = (int *)(ulong)*(uint *)(ppuVar4 + 5);
  _accept(piVar5,auStack_160,&uStack_1e4);
  if ((int)piVar5 < 1) {
    puVar16 = *(undefined **)(ppuVar4[4] + 0x68);
    ___error();
    puVar14 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    iVar2 = *piVar5;
    piVar5 = *(int **)PTR__NSPOSIXErrorDomain_110345598;
    puVar18 = (undefined *)(long)iVar2;
    uStack_e0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    _strerror();
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    apuStack_1e0[0] = puVar20;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar19);
    _objc_release(puVar20);
    func_0x00010c0d9840(puVar16);
  }
  else {
    puVar14 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a00();
    _objc_retainAutoreleasedReturnValue();
    uStack_e0 = CONCAT44(uStack_e0._4_4_,0x80);
    piVar6 = piVar5;
    _getsockname(piVar5,apuStack_1e0,&uStack_e0);
    if ((int)piVar6 == 0) {
      puVar18 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64a00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar18 = (undefined *)0x0;
    }
    uStack_1e8 = 1;
    _setsockopt(piVar5,0xffff,0x1022,&uStack_1e8,4);
    puVar20 = *(undefined **)(ppuVar4[4] + 0x30);
    puVar19 = PTR_PTR_1126d7ea8;
    _objc_opt_class();
    _objc_retain();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = puVar19;
    if (puVar20 != (undefined *)0x0) {
      unaff_x26 = puVar20;
    }
    _objc_retain(unaff_x26);
    _objc_release(puVar19);
    _objc_release(puVar20);
    puVar20 = unaff_x26;
    func_0x00010c0d8420();
    _objc_release(unaff_x26);
    puVar16 = puVar20;
    func_0x00010c044ba0();
    _objc_opt_self();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar16);
    _objc_release(puVar18);
  }
  _objc_release(puVar14);
  ppuVar4 = ppuVar17;
  _objc_autoreleasePoolPop();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  pcStack_1f8 = FUN_107deb908;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = (undefined **)ppuVar4[6];
  puStack_240 = unaff_x26;
  puStack_238 = puVar19;
  puStack_230 = puVar20;
  puStack_228 = puVar18;
  piStack_220 = piVar5;
  puStack_218 = puVar16;
  puStack_210 = puVar14;
  ppuStack_208 = ppuVar17;
  ppuStack_200 = &puStack_80;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cce68;
  if (ppuVar7 != (undefined **)0x0) {
    ppuVar17 = ppuVar7;
  }
  _objc_retain(ppuVar17);
  _objc_release(ppuVar7);
  ppuVar7 = ppuVar17;
  func_0x00010c2827c0();
  _objc_release(ppuVar17);
  ppuVar8 = (undefined **)ppuVar4[6];
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = (undefined **)PTR____kCFBooleanTrue_11034ab68;
  if (ppuVar8 != (undefined **)0x0) {
    ppuVar17 = ppuVar8;
  }
  _objc_retain(ppuVar17);
  _objc_release(ppuVar8);
  ppuVar8 = ppuVar17;
  func_0x00010bf1f3c0();
  _objc_release(ppuVar17);
  ppuVar9 = (undefined **)ppuVar4[6];
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cce80;
  if (ppuVar9 != (undefined **)0x0) {
    ppuVar17 = ppuVar9;
  }
  _objc_retain(ppuVar17);
  _objc_release(ppuVar9);
  ppuVar11 = ppuVar17;
  func_0x00010c2827c0();
  _objc_release(ppuVar17);
  uStack_250 = 0;
  uStack_258 = 0x210;
  uVar1 = (ushort)((ulong)ppuVar7 >> 8);
  uStack_256 = uVar1 & 0xff | (ushort)(((uint)ppuVar7 & 0xff00ff) << 8);
  uStack_254 = 0x100007f;
  if ((int)ppuVar8 == 0) {
    uStack_254 = 0;
  }
  ppuVar17 = ppuVar4;
  func_0x00010bdef7a0();
  ppuVar12 = ppuVar17;
  if ((int)ppuVar17 < 1) {
LAB_107debc58:
    ppuVar17 = (undefined **)0x0;
  }
  else {
    ppuVar9 = ppuVar17;
    if (ppuVar7 == (undefined **)0x0) {
      uStack_278 = 0x10;
      _getsockname(ppuVar17,&uStack_274,&uStack_278);
      if ((int)ppuVar17 != 0) {
        ___error();
        func_0x00010be309e0(ppuVar4);
        _close();
        goto LAB_107debc58;
      }
      ppuVar7 = (undefined **)(ulong)((uint)(uStack_272 >> 8) | (uStack_272 & 0xff00ff) << 8);
    }
    else {
      uStack_272 = uVar1 & 0xff | (ushort)(((uint)ppuVar7 & 0xff00ff) << 8);
    }
    uStack_270 = 0;
    uStack_25c = 0;
    uStack_274 = 0x1e1c;
    puVar13 = (undefined8 *)PTR__in6addr_any_11034c490;
    if ((int)ppuVar8 != 0) {
      puVar13 = (undefined8 *)PTR__in6addr_loopback_11034c498;
    }
    uStack_264 = (undefined4)puVar13[1];
    uStack_260 = (undefined4)((ulong)puVar13[1] >> 0x20);
    uStack_26c = (undefined4)*puVar13;
    uStack_268 = (undefined4)((ulong)*puVar13 >> 0x20);
    ppuVar10 = ppuVar4;
    func_0x00010bdef7a0();
    ppuVar17 = (undefined **)(ulong)(0 < (int)ppuVar10);
    if ((int)ppuVar10 < 1) {
      _close();
    }
    else {
      ppuVar11 = (undefined **)ppuVar4[6];
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cce98;
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar8 = ppuVar11;
      }
      _objc_retain(ppuVar8);
      _objc_release(ppuVar11);
      ppuVar11 = ppuVar8;
      func_0x00010c067ec0();
      _objc_release(ppuVar8);
      *(int *)((long)ppuVar4 + 0x7c) = (int)ppuVar11;
      ppuVar11 = (undefined **)ppuVar4[6];
      ppuVar12 = ppuVar4;
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar12;
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar8 = ppuVar11;
      }
      _objc_retain(ppuVar8);
      _objc_release(ppuVar11);
      ppuVar11 = ppuVar8;
      func_0x00010bf51e00();
      _objc_release(ppuVar8);
      puVar20 = ppuVar4[7];
      ppuVar4[7] = (undefined *)ppuVar11;
      _objc_release(puVar20);
      _objc_release(ppuVar12);
      ppuVar8 = ppuVar4;
      func_0x00010bded320();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = ppuVar4[9];
      ppuVar4[9] = (undefined *)ppuVar8;
      _objc_release(puVar20);
      ppuVar8 = ppuVar4;
      func_0x00010bded320();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = ppuVar4[10];
      ppuVar4[10] = (undefined *)ppuVar8;
      _objc_release(puVar20);
      ppuVar4[8] = (undefined *)ppuVar7;
      _dispatch_resume(ppuVar4[9]);
      ppuVar12 = (undefined **)ppuVar4[10];
      _dispatch_resume();
      ppuVar8 = ppuVar10;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  pcStack_288 = FUN_107debcb0;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  puStack_380 = (undefined8 *)0x0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  puVar14 = ppuVar12[0xb];
  ppuStack_2c0 = ppuVar11;
  ppuStack_2b8 = ppuVar8;
  ppuStack_2b0 = ppuVar9;
  ppuStack_2a8 = ppuVar17;
  ppuStack_2a0 = ppuVar7;
  ppuStack_298 = ppuVar4;
  pppuStack_290 = &ppuStack_200;
  _objc_retain(puVar14);
  puVar20 = puVar14;
  func_0x00010bf52a60();
  if (puVar20 != (undefined *)0x0) {
    ppuVar9 = (undefined **)*puStack_380;
    do {
      puVar19 = (undefined *)0x0;
      do {
        if ((undefined **)*puStack_380 != ppuVar9) {
          _objc_enumerationMutation(puVar14);
        }
        func_0x00010bf3dd20(*(undefined8 *)(lStack_388 + (long)puVar19 * 8));
        puVar19 = puVar19 + 1;
      } while (puVar20 != puVar19);
      puVar20 = puVar14;
      func_0x00010bf52a60();
      ppuVar17 = (undefined **)0x0;
    } while (puVar20 != (undefined *)0x0);
  }
  _objc_release(puVar14);
  ppuVar4 = (undefined **)ppuVar12[0xb];
  func_0x00010c12adc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2c8) {
    ___stack_chk_fail();
    pcStack_398 = FUN_107debdac;
    ppuStack_3c0 = ppuVar9;
    ppuStack_3b8 = ppuVar17;
    puStack_3b0 = puVar14;
    ppuStack_3a8 = ppuVar12;
    pppuStack_3a0 = &pppuStack_290;
    _objc_initWeak(&puStack_3c8,ppuVar4);
    puVar20 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    _objc_copyWeak(auStack_3d0,&puStack_3c8);
    func_0x00010c150360(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = ppuVar4[0xc];
    ppuVar4[0xc] = puVar20;
    _objc_release(puVar14);
    _dispatch_source_cancel(ppuVar4[10]);
    _dispatch_source_cancel(ppuVar4[9]);
    ppuVar7 = (undefined **)ppuVar4[6];
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cceb0;
    if (ppuVar7 != (undefined **)0x0) {
      ppuVar17 = ppuVar7;
    }
    _objc_retain(ppuVar17);
    _objc_release(ppuVar7);
    ppuVar7 = ppuVar17;
    func_0x00010c282800(ppuVar17);
    _objc_release(ppuVar17);
    _dispatch_group_wait(ppuVar4[2],ppuVar7);
    puVar20 = ppuVar4[10];
    ppuVar4[10] = (undefined *)0x0;
    _objc_release(puVar20);
    puVar20 = ppuVar4[9];
    ppuVar4[9] = (undefined *)0x0;
    _objc_release(puVar20);
    puVar20 = ppuVar4[7];
    ppuVar4[7] = (undefined *)0x0;
    ppuVar4[8] = (undefined *)0x0;
    _objc_release(puVar20);
    _objc_destroyWeak(auStack_3d0);
    ppuVar4 = &puStack_3c8;
    _objc_destroyWeak(ppuVar4);
    return ppuVar4;
  }
  return ppuVar4;
}



/* Entry: 107deb678; end: 107deb907;  */

undefined ** FUN_107deb678(undefined **param_1)

{
  int iVar1;
  ushort uVar2;
  int *piVar3;
  int *piVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *unaff_x26;
  undefined1 auStack_360 [8];
  undefined *puStack_358;
  undefined **ppuStack_350;
  undefined **ppuStack_348;
  undefined *puStack_340;
  undefined **ppuStack_338;
  undefined1 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_320;
  long lStack_318;
  undefined8 *puStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined1 **ppuStack_220;
  code *pcStack_218;
  undefined4 uStack_208;
  undefined2 uStack_204;
  ushort uStack_202;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined2 uStack_1e8;
  ushort uStack_1e6;
  undefined4 uStack_1e4;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  int *piStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined **ppuStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined *apuStack_170 [16];
  undefined1 auStack_f0 [128];
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar15 = param_1;
  _objc_autoreleasePoolPush();
  uStack_174 = 0x80;
  piVar3 = (int *)(ulong)*(uint *)(param_1 + 5);
  _accept(piVar3,auStack_f0,&uStack_174);
  if ((int)piVar3 < 1) {
    puVar14 = *(undefined **)(param_1[4] + 0x68);
    ___error();
    puVar13 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    iVar1 = *piVar3;
    piVar3 = *(int **)PTR__NSPOSIXErrorDomain_110345598;
    puVar16 = (undefined *)(long)iVar1;
    uStack_70 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    _strerror();
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    apuStack_170[0] = puVar18;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar17);
    _objc_release(puVar18);
    func_0x00010c0d9840(puVar14);
  }
  else {
    puVar13 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a00();
    _objc_retainAutoreleasedReturnValue();
    uStack_70 = CONCAT44(uStack_70._4_4_,0x80);
    piVar4 = piVar3;
    _getsockname(piVar3,apuStack_170,&uStack_70);
    if ((int)piVar4 == 0) {
      puVar16 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64a00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar16 = (undefined *)0x0;
    }
    uStack_178 = 1;
    _setsockopt(piVar3,0xffff,0x1022,&uStack_178,4);
    puVar18 = *(undefined **)(param_1[4] + 0x30);
    puVar17 = PTR_PTR_1126d7ea8;
    _objc_opt_class();
    _objc_retain();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = puVar17;
    if (puVar18 != (undefined *)0x0) {
      unaff_x26 = puVar18;
    }
    _objc_retain(unaff_x26);
    _objc_release(puVar17);
    _objc_release(puVar18);
    puVar18 = unaff_x26;
    func_0x00010c0d8420();
    _objc_release(unaff_x26);
    puVar14 = puVar18;
    func_0x00010c044ba0();
    _objc_opt_self();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar14);
    _objc_release(puVar16);
  }
  _objc_release(puVar13);
  ppuVar11 = ppuVar15;
  _objc_autoreleasePoolPop();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppuVar11;
  }
  ___stack_chk_fail();
  pcStack_188 = FUN_107deb908;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = (undefined **)ppuVar11[6];
  puStack_1d0 = unaff_x26;
  puStack_1c8 = puVar17;
  puStack_1c0 = puVar18;
  puStack_1b8 = puVar16;
  piStack_1b0 = piVar3;
  puStack_1a8 = puVar14;
  puStack_1a0 = puVar13;
  ppuStack_198 = ppuVar15;
  puStack_190 = &stack0xfffffffffffffff0;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cce68;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar15 = ppuVar5;
  }
  _objc_retain(ppuVar15);
  _objc_release(ppuVar5);
  ppuVar5 = ppuVar15;
  func_0x00010c2827c0();
  _objc_release(ppuVar15);
  ppuVar6 = (undefined **)ppuVar11[6];
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = (undefined **)PTR____kCFBooleanTrue_11034ab68;
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar15 = ppuVar6;
  }
  _objc_retain(ppuVar15);
  _objc_release(ppuVar6);
  ppuVar6 = ppuVar15;
  func_0x00010bf1f3c0();
  _objc_release(ppuVar15);
  ppuVar7 = (undefined **)ppuVar11[6];
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cce80;
  if (ppuVar7 != (undefined **)0x0) {
    ppuVar15 = ppuVar7;
  }
  _objc_retain(ppuVar15);
  _objc_release(ppuVar7);
  ppuVar9 = ppuVar15;
  func_0x00010c2827c0();
  _objc_release(ppuVar15);
  uStack_1e0 = 0;
  uStack_1e8 = 0x210;
  uVar2 = (ushort)((ulong)ppuVar5 >> 8);
  uStack_1e6 = uVar2 & 0xff | (ushort)(((uint)ppuVar5 & 0xff00ff) << 8);
  uStack_1e4 = 0x100007f;
  if ((int)ppuVar6 == 0) {
    uStack_1e4 = 0;
  }
  ppuVar15 = ppuVar11;
  func_0x00010bdef7a0();
  ppuVar10 = ppuVar15;
  if ((int)ppuVar15 < 1) {
LAB_107debc58:
    ppuVar15 = (undefined **)0x0;
  }
  else {
    ppuVar7 = ppuVar15;
    if (ppuVar5 == (undefined **)0x0) {
      uStack_208 = 0x10;
      _getsockname(ppuVar15,&uStack_204,&uStack_208);
      if ((int)ppuVar15 != 0) {
        ___error();
        func_0x00010be309e0(ppuVar11);
        _close();
        goto LAB_107debc58;
      }
      ppuVar5 = (undefined **)(ulong)((uint)(uStack_202 >> 8) | (uStack_202 & 0xff00ff) << 8);
    }
    else {
      uStack_202 = uVar2 & 0xff | (ushort)(((uint)ppuVar5 & 0xff00ff) << 8);
    }
    uStack_200 = 0;
    uStack_1ec = 0;
    uStack_204 = 0x1e1c;
    puVar12 = (undefined8 *)PTR__in6addr_any_11034c490;
    if ((int)ppuVar6 != 0) {
      puVar12 = (undefined8 *)PTR__in6addr_loopback_11034c498;
    }
    uStack_1f4 = (undefined4)puVar12[1];
    uStack_1f0 = (undefined4)((ulong)puVar12[1] >> 0x20);
    uStack_1fc = (undefined4)*puVar12;
    uStack_1f8 = (undefined4)((ulong)*puVar12 >> 0x20);
    ppuVar8 = ppuVar11;
    func_0x00010bdef7a0();
    ppuVar15 = (undefined **)(ulong)(0 < (int)ppuVar8);
    if ((int)ppuVar8 < 1) {
      _close();
    }
    else {
      ppuVar9 = (undefined **)ppuVar11[6];
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cce98;
      if (ppuVar9 != (undefined **)0x0) {
        ppuVar6 = ppuVar9;
      }
      _objc_retain(ppuVar6);
      _objc_release(ppuVar9);
      ppuVar9 = ppuVar6;
      func_0x00010c067ec0();
      _objc_release(ppuVar6);
      *(int *)((long)ppuVar11 + 0x7c) = (int)ppuVar9;
      ppuVar9 = (undefined **)ppuVar11[6];
      ppuVar10 = ppuVar11;
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar10;
      if (ppuVar9 != (undefined **)0x0) {
        ppuVar6 = ppuVar9;
      }
      _objc_retain(ppuVar6);
      _objc_release(ppuVar9);
      ppuVar9 = ppuVar6;
      func_0x00010bf51e00();
      _objc_release(ppuVar6);
      puVar18 = ppuVar11[7];
      ppuVar11[7] = (undefined *)ppuVar9;
      _objc_release(puVar18);
      _objc_release(ppuVar10);
      ppuVar6 = ppuVar11;
      func_0x00010bded320();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = ppuVar11[9];
      ppuVar11[9] = (undefined *)ppuVar6;
      _objc_release(puVar18);
      ppuVar6 = ppuVar11;
      func_0x00010bded320();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = ppuVar11[10];
      ppuVar11[10] = (undefined *)ppuVar6;
      _objc_release(puVar18);
      ppuVar11[8] = (undefined *)ppuVar5;
      _dispatch_resume(ppuVar11[9]);
      ppuVar10 = (undefined **)ppuVar11[10];
      _dispatch_resume();
      ppuVar6 = ppuVar8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return ppuVar15;
  }
  ___stack_chk_fail();
  pcStack_218 = FUN_107debcb0;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  puStack_310 = (undefined8 *)0x0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  puVar13 = ppuVar10[0xb];
  ppuStack_250 = ppuVar9;
  ppuStack_248 = ppuVar6;
  ppuStack_240 = ppuVar7;
  ppuStack_238 = ppuVar15;
  ppuStack_230 = ppuVar5;
  ppuStack_228 = ppuVar11;
  ppuStack_220 = &puStack_190;
  _objc_retain(puVar13);
  puVar18 = puVar13;
  func_0x00010bf52a60();
  if (puVar18 != (undefined *)0x0) {
    ppuVar7 = (undefined **)*puStack_310;
    do {
      puVar17 = (undefined *)0x0;
      do {
        if ((undefined **)*puStack_310 != ppuVar7) {
          _objc_enumerationMutation(puVar13);
        }
        func_0x00010bf3dd20(*(undefined8 *)(lStack_318 + (long)puVar17 * 8));
        puVar17 = puVar17 + 1;
      } while (puVar18 != puVar17);
      puVar18 = puVar13;
      func_0x00010bf52a60();
      ppuVar15 = (undefined **)0x0;
    } while (puVar18 != (undefined *)0x0);
  }
  _objc_release(puVar13);
  ppuVar11 = (undefined **)ppuVar10[0xb];
  func_0x00010c12adc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_258) {
    ___stack_chk_fail();
    pcStack_328 = FUN_107debdac;
    ppuStack_350 = ppuVar7;
    ppuStack_348 = ppuVar15;
    puStack_340 = puVar13;
    ppuStack_338 = ppuVar10;
    pppuStack_330 = &ppuStack_220;
    _objc_initWeak(&puStack_358,ppuVar11);
    puVar18 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    _objc_copyWeak(auStack_360,&puStack_358);
    func_0x00010c150360(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = ppuVar11[0xc];
    ppuVar11[0xc] = puVar18;
    _objc_release(puVar13);
    _dispatch_source_cancel(ppuVar11[10]);
    _dispatch_source_cancel(ppuVar11[9]);
    ppuVar5 = (undefined **)ppuVar11[6];
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar15 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cceb0;
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar15 = ppuVar5;
    }
    _objc_retain(ppuVar15);
    _objc_release(ppuVar5);
    ppuVar5 = ppuVar15;
    func_0x00010c282800(ppuVar15);
    _objc_release(ppuVar15);
    _dispatch_group_wait(ppuVar11[2],ppuVar5);
    puVar18 = ppuVar11[10];
    ppuVar11[10] = (undefined *)0x0;
    _objc_release(puVar18);
    puVar18 = ppuVar11[9];
    ppuVar11[9] = (undefined *)0x0;
    _objc_release(puVar18);
    puVar18 = ppuVar11[7];
    ppuVar11[7] = (undefined *)0x0;
    ppuVar11[8] = (undefined *)0x0;
    _objc_release(puVar18);
    _objc_destroyWeak(auStack_360);
    ppuVar15 = &puStack_358;
    _objc_destroyWeak(ppuVar15);
    return ppuVar15;
  }
  return ppuVar11;
}



/* Entry: 107deb908; end: 107debcaf; -[SCWebServer _start:] */

undefined * FUN_107deb908(undefined **param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [8];
  undefined **ppuStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined4 uStack_88;
  undefined2 uStack_84;
  ushort uStack_82;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined2 uStack_68;
  ushort uStack_66;
  undefined4 uStack_64;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined **)param_1[6];
  func_0x00010c0dff20(ppuVar2,param_2,&PTR____CFConstantStringClassReference_110ebf298);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cce68;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar5 = ppuVar2;
  }
  _objc_retain(ppuVar5);
  _objc_release(ppuVar2);
  ppuVar2 = ppuVar5;
  func_0x00010c2827c0();
  _objc_release(ppuVar5);
  ppuVar3 = (undefined **)param_1[6];
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = (undefined **)PTR____kCFBooleanTrue_11034ab68;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar5 = ppuVar3;
  }
  _objc_retain(ppuVar5);
  _objc_release(ppuVar3);
  ppuVar3 = ppuVar5;
  func_0x00010bf1f3c0();
  _objc_release(ppuVar5);
  ppuVar4 = (undefined **)param_1[6];
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cce80;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar5 = ppuVar4;
  }
  _objc_retain(ppuVar5);
  _objc_release(ppuVar4);
  ppuVar6 = ppuVar5;
  func_0x00010c2827c0();
  _objc_release(ppuVar5);
  uStack_60 = 0;
  uStack_68 = 0x210;
  uVar1 = (ushort)((ulong)ppuVar2 >> 8);
  uStack_66 = uVar1 & 0xff | (ushort)(((uint)ppuVar2 & 0xff00ff) << 8);
  uStack_64 = 0x100007f;
  if ((int)ppuVar3 == 0) {
    uStack_64 = 0;
  }
  ppuVar5 = param_1;
  func_0x00010bdef7a0();
  ppuVar8 = ppuVar5;
  if ((int)ppuVar5 < 1) {
LAB_107debc58:
    puVar13 = (undefined *)0x0;
  }
  else {
    ppuVar4 = ppuVar5;
    if (ppuVar2 == (undefined **)0x0) {
      uStack_88 = 0x10;
      _getsockname(ppuVar5,&uStack_84,&uStack_88);
      if ((int)ppuVar5 != 0) {
        ___error();
        func_0x00010be309e0(param_1);
        _close();
        goto LAB_107debc58;
      }
      ppuVar2 = (undefined **)(ulong)((uint)(uStack_82 >> 8) | (uStack_82 & 0xff00ff) << 8);
    }
    else {
      uStack_82 = uVar1 & 0xff | (ushort)(((uint)ppuVar2 & 0xff00ff) << 8);
    }
    uStack_80 = 0;
    uStack_6c = 0;
    uStack_84 = 0x1e1c;
    puVar10 = (undefined8 *)PTR__in6addr_any_11034c490;
    if ((int)ppuVar3 != 0) {
      puVar10 = (undefined8 *)PTR__in6addr_loopback_11034c498;
    }
    uStack_74 = (undefined4)puVar10[1];
    uStack_70 = (undefined4)((ulong)puVar10[1] >> 0x20);
    uStack_7c = (undefined4)*puVar10;
    uStack_78 = (undefined4)((ulong)*puVar10 >> 0x20);
    ppuVar5 = param_1;
    func_0x00010bdef7a0();
    puVar13 = (undefined *)(ulong)(0 < (int)ppuVar5);
    if ((int)ppuVar5 < 1) {
      _close();
    }
    else {
      ppuVar6 = (undefined **)param_1[6];
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cce98;
      if (ppuVar6 != (undefined **)0x0) {
        ppuVar3 = ppuVar6;
      }
      _objc_retain(ppuVar3);
      _objc_release(ppuVar6);
      ppuVar6 = ppuVar3;
      func_0x00010c067ec0();
      _objc_release(ppuVar3);
      *(int *)((long)param_1 + 0x7c) = (int)ppuVar6;
      ppuVar6 = (undefined **)param_1[6];
      ppuVar8 = param_1;
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar8;
      if (ppuVar6 != (undefined **)0x0) {
        ppuVar3 = ppuVar6;
      }
      _objc_retain(ppuVar3);
      _objc_release(ppuVar6);
      ppuVar6 = ppuVar3;
      func_0x00010bf51e00();
      _objc_release(ppuVar3);
      puVar7 = param_1[7];
      param_1[7] = (undefined *)ppuVar6;
      _objc_release(puVar7);
      _objc_release(ppuVar8);
      ppuVar3 = param_1;
      func_0x00010bded320();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_1[9];
      param_1[9] = (undefined *)ppuVar3;
      _objc_release(puVar7);
      ppuVar3 = param_1;
      func_0x00010bded320();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_1[10];
      param_1[10] = (undefined *)ppuVar3;
      _objc_release(puVar7);
      param_1[8] = (undefined *)ppuVar2;
      _dispatch_resume(param_1[9]);
      ppuVar8 = (undefined **)param_1[10];
      _dispatch_resume();
      ppuVar3 = ppuVar5;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar13;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_107debcb0;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  puStack_190 = (undefined8 *)0x0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  puVar12 = ppuVar8[0xb];
  ppuStack_d0 = ppuVar6;
  ppuStack_c8 = ppuVar3;
  ppuStack_c0 = ppuVar4;
  puStack_b8 = puVar13;
  ppuStack_b0 = ppuVar2;
  ppuStack_a8 = param_1;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar12);
  puVar7 = puVar12;
  func_0x00010bf52a60();
  if (puVar7 != (undefined *)0x0) {
    ppuVar4 = (undefined **)*puStack_190;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if ((undefined **)*puStack_190 != ppuVar4) {
          _objc_enumerationMutation(puVar12);
        }
        func_0x00010bf3dd20(*(undefined8 *)(lStack_198 + (long)puVar13 * 8));
        puVar13 = puVar13 + 1;
      } while (puVar7 != puVar13);
      puVar7 = puVar12;
      func_0x00010bf52a60();
      puVar13 = (undefined *)0x0;
    } while (puVar7 != (undefined *)0x0);
  }
  _objc_release(puVar12);
  puVar7 = ppuVar8[0xb];
  func_0x00010c12adc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
    ___stack_chk_fail();
    pcStack_1a8 = FUN_107debdac;
    ppuStack_1d0 = ppuVar4;
    puStack_1c8 = puVar13;
    puStack_1c0 = puVar12;
    ppuStack_1b8 = ppuVar8;
    ppuStack_1b0 = &puStack_a0;
    _objc_initWeak(auStack_1d8,puVar7);
    puVar13 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    _objc_copyWeak(auStack_1e0,auStack_1d8);
    func_0x00010c150360(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(puVar7 + 0x60);
    *(undefined **)(puVar7 + 0x60) = puVar13;
    _objc_release(uVar11);
    _dispatch_source_cancel(*(undefined8 *)(puVar7 + 0x50));
    _dispatch_source_cancel(*(undefined8 *)(puVar7 + 0x48));
    ppuVar2 = *(undefined ***)(puVar7 + 0x30);
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cceb0;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar5 = ppuVar2;
    }
    _objc_retain(ppuVar5);
    _objc_release(ppuVar2);
    ppuVar2 = ppuVar5;
    func_0x00010c282800(ppuVar5);
    _objc_release(ppuVar5);
    _dispatch_group_wait(*(undefined8 *)(puVar7 + 0x10),ppuVar2);
    uVar11 = *(undefined8 *)(puVar7 + 0x50);
    *(undefined8 *)(puVar7 + 0x50) = 0;
    _objc_release(uVar11);
    uVar11 = *(undefined8 *)(puVar7 + 0x48);
    *(undefined8 *)(puVar7 + 0x48) = 0;
    _objc_release(uVar11);
    uVar11 = *(undefined8 *)(puVar7 + 0x38);
    *(undefined8 *)(puVar7 + 0x38) = 0;
    *(undefined8 *)(puVar7 + 0x40) = 0;
    _objc_release(uVar11);
    _objc_destroyWeak(auStack_1e0);
    puVar9 = auStack_1d8;
    _objc_destroyWeak(puVar9);
    return puVar9;
  }
  return puVar7;
}



/* Entry: 107debcb0; end: 107debdab; -[SCWebServer _stopConnections] */

void FUN_107debcb0(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 unaff_x21;
  long unaff_x22;
  long lVar7;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
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
  lVar6 = *(long *)(param_1 + 0x58);
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    unaff_x22 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != unaff_x22) {
          _objc_enumerationMutation(lVar6);
        }
        func_0x00010bf3dd20(*(undefined8 *)(lStack_108 + lVar7 * 8));
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar6;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(lVar6);
  lVar2 = *(long *)(param_1 + 0x58);
  func_0x00010c12adc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_107debdac;
  lStack_140 = unaff_x22;
  uStack_138 = unaff_x21;
  lStack_130 = lVar6;
  lStack_128 = param_1;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_148,lVar2);
  puVar3 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  _objc_copyWeak(auStack_150,auStack_148);
  func_0x00010c150360(0x4014000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar2 + 0x60);
  *(undefined **)(lVar2 + 0x60) = puVar3;
  _objc_release(uVar5);
  _dispatch_source_cancel(*(undefined8 *)(lVar2 + 0x50));
  _dispatch_source_cancel(*(undefined8 *)(lVar2 + 0x48));
  ppuVar4 = *(undefined ***)(lVar2 + 0x30);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cceb0;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar1 = ppuVar4;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar4);
  ppuVar4 = ppuVar1;
  func_0x00010c282800(ppuVar1);
  _objc_release(ppuVar1);
  _dispatch_group_wait(*(undefined8 *)(lVar2 + 0x10),ppuVar4);
  uVar5 = *(undefined8 *)(lVar2 + 0x50);
  *(undefined8 *)(lVar2 + 0x50) = 0;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(lVar2 + 0x48);
  *(undefined8 *)(lVar2 + 0x48) = 0;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(lVar2 + 0x38);
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_150);
  _objc_destroyWeak(auStack_148);
  return;
}



/* Entry: 107debdac; end: 107debf13; -[SCWebServer _stop] */

void FUN_107debdac(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar2 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c150360(0x4014000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar2;
  _objc_release(uVar4);
  _dispatch_source_cancel(*(undefined8 *)(param_1 + 0x50));
  _dispatch_source_cancel(*(undefined8 *)(param_1 + 0x48));
  ppuVar3 = *(undefined ***)(param_1 + 0x30);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cceb0;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar3);
  ppuVar3 = ppuVar1;
  func_0x00010c282800(ppuVar1);
  _objc_release(ppuVar1);
  _dispatch_group_wait(*(undefined8 *)(param_1 + 0x10),ppuVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107debf14; end: 107debf3f;  */

void FUN_107debf14(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec2ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107debf40; end: 107debf4f; -[SCWebServer _didEnterBackground:] */

void FUN_107debf40(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bec2c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stop_11258e4c0);
    return;
  }
  return;
}



/* Entry: 107debf50; end: 107debf63; -[SCWebServer _willEnterForeground:] */

void FUN_107debf50(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bebf4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__start__11258d6d0,0);
  return;
}



/* Entry: 107debf64; end: 107dec1a7; -[SCWebServer startWithOptions:error:] */

ulong FUN_107debf64(ulong param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x60));
  puVar1 = *(undefined **)(param_1 + 0x30);
  if (puVar1 == (undefined *)0x0) {
    if (param_3 == (undefined *)0x0) {
      uVar2 = 0;
      puVar1 = PTR____NSDictionary0__struct_11034ab58;
    }
    else {
      puVar1 = param_3;
      func_0x00010bf51e00();
      uVar2 = *(undefined8 *)(param_1 + 0x30);
    }
    *(undefined **)(param_1 + 0x30) = puVar1;
    _objc_release(uVar2);
    puVar3 = *(undefined **)(param_1 + 0x30);
    func_0x00010c0dff20(puVar3,param_2,&PTR____CFConstantStringClassReference_110ebf318);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR____kCFBooleanTrue_11034ab68;
    if (puVar3 != (undefined *)0x0) {
      puVar1 = puVar3;
    }
    _objc_retain(puVar1);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010bf1f3c0();
    _objc_release(puVar1);
    *(char *)(param_1 + 0x29) = (char)puVar3;
    uVar4 = param_1;
    func_0x00010bebf4a0(param_1,param_2,param_4);
    if ((uVar4 & 1) != 0) {
      if (*(char *)(param_1 + 0x29) == '\x01') {
        puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
        func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa240();
        _objc_release(puVar1);
        puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
        func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa240();
        _objc_release(puVar1);
        puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
        func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa240();
        _objc_release(puVar1);
      }
      param_1 = 1;
      goto LAB_107dec188;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    _objc_release(uVar2);
LAB_107dec184:
    param_1 = 0;
  }
  else {
    func_0x00010c0dff20(puVar1,param_2,&PTR____CFConstantStringClassReference_110ebf3b8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR____kCFBooleanFalse_11034ab60;
    if (puVar1 != (undefined *)0x0) {
      puVar3 = puVar1;
    }
    _objc_retain(puVar3);
    _objc_release(puVar1);
    puVar1 = puVar3;
    func_0x00010bf1f3c0();
    _objc_release(puVar3);
    if (*(long *)(param_1 + 0x48) != 0) {
      if (((int)puVar1 == 0) || (uVar4 = param_1, func_0x00010be41860(), (uVar4 & 1) != 0))
      goto LAB_107dec184;
      func_0x00010bec2c60(param_1);
    }
    func_0x00010bebf4a0(param_1,param_2,param_4);
  }
LAB_107dec188:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 107dec1a8; end: 107dec237; -[SCWebServer _isListeningSocketAlive] */

ulong FUN_107dec1a8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(ulong *)(param_1 + 0x48);
  if ((uVar2 == 0) || (_dispatch_source_get_handle(), (int)uVar2 < 1)) {
    uVar5 = 0;
  }
  else {
    _getsockname();
    uVar5 = (ulong)((int)uVar2 == 0);
    if ((int)uVar2 != 0) {
      ___error();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return uVar5;
  }
  ___stack_chk_fail();
  puVar3 = *(undefined **)(uVar2 + 0x30);
  uVar5 = 0;
  if (puVar3 != (undefined *)0x0) {
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
    if (puVar3 != (undefined *)0x0) {
      puVar1 = puVar3;
    }
    _objc_retain(puVar1);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010bf1f3c0();
    _objc_release(puVar1);
    if ((int)puVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be41870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s__isListeningSocketAlive_11256dfb8);
      return uVar2;
    }
    uVar5 = (ulong)(*(long *)(uVar2 + 0x48) != 0);
  }
  return uVar5;
}



/* Entry: 107dec238; end: 107dec2d3; -[SCWebServer isRunning] */

ulong FUN_107dec238(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar2 = *(undefined **)(param_1 + 0x30);
  uVar3 = 0;
  if (puVar2 != (undefined *)0x0) {
    func_0x00010c0dff20(puVar2,param_2,&PTR____CFConstantStringClassReference_110ebf3b8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
    if (puVar2 != (undefined *)0x0) {
      puVar1 = puVar2;
    }
    _objc_retain(puVar1);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010bf1f3c0();
    _objc_release(puVar1);
    if ((int)puVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be41870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isListeningSocketAlive_11256dfb8);
      return param_1;
    }
    uVar3 = (ulong)(*(long *)(param_1 + 0x48) != 0);
  }
  return uVar3;
}



/* Entry: 107dec2d4; end: 107dec3c7; -[SCWebServer stop] */

void FUN_107dec2d4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    if (*(char *)(param_1 + 0x29) == '\x01') {
      puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d5c0();
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d5c0();
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d5c0();
      _objc_release(puVar1);
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      func_0x00010bec2c60(param_1);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 107dec3c8; end: 107dec3cf; -[SCWebServer handlers] */

undefined8 FUN_107dec3c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107dec3d0; end: 107dec3d7; -[SCWebServer port] */

undefined8 FUN_107dec3d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107dec3d8; end: 107dec3df; -[SCWebServer serverName] */

undefined8 FUN_107dec3d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107dec3e0; end: 107dec3e7; -[SCWebServer webServerErrors] */

undefined8 FUN_107dec3e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107dec3e8; end: 107dec3ef; -[SCWebServer webServerConnectionStatus] */

undefined8 FUN_107dec3e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107dec3f0; end: 107dec3f7; -[SCWebServer authenticationRealm] */

undefined8 FUN_107dec3f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 107dec3f8; end: 107dec3ff; -[SCWebServer authenticationBasicAccounts] */

undefined8 FUN_107dec3f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 107dec400; end: 107dec407; -[SCWebServer authenticationDigestAccounts] */

undefined8 FUN_107dec400(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 107dec408; end: 107dec40f; -[SCWebServer shouldAutomaticallyMapHEADToGET] */

undefined1 FUN_107dec408(long param_1)

{
  return *(undefined1 *)(param_1 + 0x78);
}



/* Entry: 107dec410; end: 107dec417; -[SCWebServer ioQueuePriority] */

undefined4 FUN_107dec410(long param_1)

{
  return *(undefined4 *)(param_1 + 0x7c);
}



/* Entry: 107dec418; end: 107dec4d7; -[SCWebServer .cxx_destruct] */

void FUN_107dec418(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107dec4d8; end: 107dec567; -[SCWebServer serverURL] */

void FUN_107dec4d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (*(long *)(param_1 + 0x48) == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e0cef8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107dec568; end: 107dec7a3; -[SCWebServerConnection _readData:withLength:completionBlock:] */

void FUN_107dec568(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010c06ae80(uVar2);
  uVar2 = uVar2 & 0xffffffff;
  func_0x0001000819a8(uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  uStack_68 = 0x107dec65c;
  puStack_60 = &UNK_110a0d4c8;
  uStack_58 = param_3;
  lStack_50 = param_1;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _dispatch_read(uVar1,param_4,uVar2,&puStack_78);
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107dec7a4; end: 107dec7c7;  */

undefined8
FUN_107dec7a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  func_0x00010bf06a40(*(undefined8 *)(param_1 + 0x20),param_2,param_4,param_5);
  return 1;
}



/* Entry: 107dec7c8; end: 107dec99b; -[SCWebServerConnection _readHeaders:withCompletionBlock:] */

void FUN_107dec7c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x107dec884;
  puStack_50 = &UNK_110866910;
  uStack_48 = param_3;
  uStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be86420(param_1,param_2,param_3,0xffffffffffffffff,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107dec99c; end: 107decb47; -[SCWebServerConnection _readBodyWithRemainingLength:completionBlock:] */

void FUN_107dec99c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  _objc_alloc();
  func_0x00010bffc4a0();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x107deca68;
  puStack_58 = &UNK_1109414c0;
  puStack_50 = puVar1;
  uStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_4);
  _objc_retain(puVar1);
  func_0x00010be86420(param_1,param_2,puVar1,param_3,&puStack_70);
  _objc_release(uStack_40);
  _objc_release(puStack_50);
  _objc_release(param_4);
  _objc_release(puVar1);
  return;
}



/* Entry: 107decb48; end: 107dece2f; -[SCWebServerConnection _readNextBodyChunk:completionBlock:] */

void FUN_107decb48(long param_1,ulong param_2,ulong param_3,long param_4)

{
  char *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  int iVar8;
  ulong uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c08fa60(param_3);
  uVar2 = param_3;
  func_0x00010c11f3e0();
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  do {
    PTR__OBJC_CLASS___NSData_1126ae778 = puVar3;
    if (uVar2 == 0x7fffffffffffffff) {
LAB_107decbb8:
      _objc_retain(param_3);
      _objc_retain(param_4);
      func_0x00010be86420(param_1);
      _objc_release(param_4);
      uVar9 = param_3;
LAB_107decc20:
      _objc_release(uVar9);
LAB_107decde8:
      _objc_release(param_4);
      _objc_release(param_3);
      return;
    }
    func_0x00010bf64a00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_3;
    func_0x00010c11f3e0();
    _objc_release(puVar3);
    uVar4 = param_3;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    uVar5 = uVar2;
    if (uVar9 != 0x7fffffffffffffff) {
      uVar5 = uVar9;
    }
    FUN_107dece30();
    if (uVar4 != 0) {
      if (uVar4 != 0x7fffffffffffffff) {
        uVar9 = param_3;
        func_0x00010c08fa60();
        if (uVar9 < param_2 + uVar2 + uVar4 + 2) goto LAB_107decbb8;
        uVar9 = param_3;
        _objc_retainAutorelease();
        func_0x00010bf25f00();
        pcVar1 = (char *)(uVar9 + uVar2 + param_2 + uVar4);
        if ((*pcVar1 == '\r') && (pcVar1[1] == '\n')) {
          iVar8 = (int)*(undefined8 *)(param_1 + 0x48);
          uVar2 = param_3;
          func_0x00010c25eac0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0f96a0();
          uVar9 = 0;
          _objc_retain(0);
          _objc_release(uVar2);
          if (iVar8 != 0) {
            func_0x00010c130ce0(param_3);
            _objc_release(0);
            goto LAB_107decd90;
          }
          (**(code **)(param_4 + 0x10))(param_4,0);
          goto LAB_107decc20;
        }
      }
      pcVar7 = *(code **)(param_4 + 0x10);
      uVar6 = 0;
LAB_107decde4:
      (*pcVar7)(param_4,uVar6);
      goto LAB_107decde8;
    }
    func_0x00010c08fa60(param_3);
    uVar2 = param_3;
    func_0x00010c11f3e0();
    if (uVar2 != 0x7fffffffffffffff) {
      pcVar7 = *(code **)(param_4 + 0x10);
      uVar6 = 1;
      goto LAB_107decde4;
    }
LAB_107decd90:
    func_0x00010c08fa60(param_3);
    uVar2 = param_3;
    func_0x00010c11f3e0();
    param_2 = uVar5;
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  } while( true );
}



/* Entry: 107dece30; end: 107deceeb;  */

void FUN_107dece30(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  char *pcStack_30;
  long lStack_28;
  char **ppcVar4;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (*(code *)PTR____chkstk_darwin_11034bd40)(param_1,param_1);
  uVar1 = (long)&pcStack_30 - (param_2 + 0x10U & 0xfffffffffffffff0);
  _memmove(uVar1);
  *(undefined1 *)(uVar1 + param_2) = 0;
  pcStack_30 = (char *)0x0;
  ppcVar4 = &pcStack_30;
  _strtol(uVar1,ppcVar4,0x10);
  iVar3 = (int)ppcVar4;
  uVar2 = 0x7fffffffffffffff;
  if ((pcStack_30 != (char *)0x0) &&
     (uVar2 = uVar1, 0x7fffffffffffffff < uVar1 || *pcStack_30 != '\0')) {
    uVar2 = 0x7fffffffffffffff;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be865d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(uVar2 + 0x20),PTR_s__readNextBodyChunk_completionBlo_11257f310,
               *(undefined8 *)(uVar2 + 0x28),*(undefined8 *)(uVar2 + 0x30));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000107decf08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(uVar2 + 0x30) + 0x10))();
  return;
}



/* Entry: 107deceec; end: 107decf0b;  */

void FUN_107deceec(long param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be865d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__readNextBodyChunk_completionBlo_11257f310,
               *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000107decf08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  return;
}



/* Entry: 107decf0c; end: 107ded09f; -[SCWebServerConnection _writeData:withCompletionBlock:] */

void FUN_107decf0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = param_3;
  _objc_retainAutorelease(param_3);
  func_0x00010bf25f00();
  uVar4 = param_3;
  func_0x00010c08fa60(param_3);
  uVar5 = *(ulong *)(param_1 + 8);
  func_0x00010c06ae80(uVar5);
  uVar5 = uVar5 & 0xffffffff;
  func_0x0001000819a8(uVar5,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107ded0a0;
  puStack_70 = &UNK_110842e18;
  _objc_retain(param_3);
  uStack_68 = param_3;
  _dispatch_data_create(uVar3,uVar4,uVar5,&puStack_88);
  _objc_release(uVar5);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar5 = *(ulong *)(param_1 + 8);
  func_0x00010c06ae80(uVar5);
  uVar5 = uVar5 & 0xffffffff;
  func_0x0001000819a8(uVar5,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = puVar2;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_107ded0c0;
  puStack_a8 = &UNK_110a0d4c8;
  lStack_a0 = param_1;
  uStack_98 = param_3;
  uStack_90 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _dispatch_write(uVar1,uVar3,uVar5,&puStack_c0);
  _objc_release(uVar5);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uVar3);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ded0a0; end: 107ded0bf;  */

void FUN_107ded0a0(long param_1)

{
  _objc_opt_self(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 107ded0c0; end: 107ded18b;  */

void FUN_107ded0c0(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = param_2;
  _objc_retain(param_2);
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x20);
  if (param_3 == 0) {
    _objc_retainAutorelease(*(undefined8 *)(param_1 + 0x28));
    func_0x00010bf25f00();
    func_0x00010c08fa60(*(undefined8 *)(param_1 + 0x28));
    func_0x00010bf7ec20(lVar3);
  }
  else {
    uVar4 = *(undefined8 *)(lVar3 + 8);
    puVar2 = PTR_PTR_1126d7eb0;
    func_0x00010bf991a0(PTR_PTR_1126d7eb0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7e0e0(uVar4);
    _objc_release(puVar2);
  }
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_3 == 0);
  _objc_autoreleasePoolPop(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107ded18c; end: 107ded1e7; -[SCWebServerConnection _writeHeadersWithCompletionBlock:] */

void FUN_107ded18c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(param_3);
  _CFHTTPMessageCopySerializedMessage(uVar1);
  func_0x00010beeb8e0(param_1,param_2,uVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdba64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFRelease_11034a768)(uVar1);
  return;
}



/* Entry: 107ded1e8; end: 107ded277; -[SCWebServerConnection _writeBodyWithCompletionBlock:] */

void FUN_107ded1e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107ded278;
  puStack_48 = &UNK_1108be0e8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f8d60(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107ded278; end: 107ded4d3;  */

void FUN_107ded278(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == (undefined *)0x0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
    goto LAB_107ded4b0;
  }
  puVar3 = param_2;
  func_0x00010c08fa60();
  iVar2 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  func_0x00010c294940();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar3 == (undefined *)0x0) {
    if (iVar2 != 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar6);
      func_0x00010beeb8e0(uVar8);
      goto LAB_107ded480;
    }
    lVar7 = *(long *)(param_1 + 0x28);
    pcVar9 = *(code **)(lVar7 + 0x10);
    uVar8 = 1;
LAB_107ded4a4:
    (*pcVar9)(lVar7,uVar8);
  }
  else {
    puVar3 = param_2;
    if (iVar2 != 0) {
      func_0x00010c08fa60();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
      _objc_release(puVar4);
      _strlen();
      puVar3 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
      func_0x00010c08fa60(param_2);
      func_0x00010bf64b80();
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 == (undefined *)0x0) {
        lVar7 = *(long *)(param_1 + 0x28);
        pcVar9 = *(code **)(lVar7 + 0x10);
        uVar8 = 0;
        goto LAB_107ded4a4;
      }
      puVar4 = puVar3;
      _objc_retainAutorelease();
      func_0x00010c0d3c60();
      _memmove();
      puVar1 = (undefined2 *)(puVar4 + (long)puVar5);
      *puVar1 = 0xa0d;
      puVar4 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bf25f00();
      puVar5 = param_2;
      func_0x00010c08fa60(param_2);
      _memmove(puVar1 + 1,puVar4,puVar5);
      puVar4 = param_2;
      func_0x00010c08fa60();
      *(undefined2 *)((long)(puVar1 + 1) + (long)puVar4) = 0xa0d;
      _objc_release(param_2);
    }
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar6);
    func_0x00010beeb8e0(uVar8);
    param_2 = puVar3;
LAB_107ded480:
    _objc_release(uVar6);
  }
  _objc_release(param_2);
LAB_107ded4b0:
  _objc_release(param_3);
  return;
}



/* Entry: 107ded4d4; end: 107ded4fb;  */

void FUN_107ded4d4(long param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010beeb850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__writeBodyWithCompletionBlock__1125987b8,
               *(undefined8 *)(param_1 + 0x28));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000107ded4ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 107ded4fc; end: 107ded503; -[SCWebServerConnection socket] */

undefined4 FUN_107ded4fc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 107ded504; end: 107ded61b; +[SCWebServerConnection initialize] */

void FUN_107ded504(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  if (puRam0000000113727fa0 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc();
    func_0x00010bffa160();
    puVar5 = puRam0000000113727fa0;
    puRam0000000113727fa0 = puVar2;
    _objc_release(puVar5);
  }
  if (puRam0000000113727fa8 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc();
    func_0x00010bffa160();
    puVar5 = puRam0000000113727fa8;
    puRam0000000113727fa8 = puVar2;
    _objc_release(puVar5);
  }
  if (lRam0000000113727fb0 == 0) {
    lVar3 = *(long *)PTR__kCFAllocatorDefault_11034ab78;
    _CFHTTPMessageCreateResponse(lVar3,100,0,*(undefined8 *)PTR__kCFHTTPVersion1_1_11034bad8);
    lVar4 = lVar3;
    _CFHTTPMessageCopySerializedMessage();
    lVar1 = lRam0000000113727fb0;
    lRam0000000113727fb0 = lVar4;
    _objc_release(lVar1);
    _CFRelease(lVar3);
  }
  if (puRam0000000113727fb8 != (undefined *)0x0) {
    return;
  }
  puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_alloc();
  func_0x00010bffa160();
  lVar1 = (long)puRam0000000113727fb8;
  puRam0000000113727fb8 = puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


