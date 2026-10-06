/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1090606a0; end: 1090606d3; -[SCVideoTranscodingSession dealloc] */

void FUN_1090606a0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112700120;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1090606d4; end: 1090606db; -[SCVideoTranscodingSession startRunningWithCompletionBlock:progressBlock:] */

void FUN_1090606d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2505d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_startRunningWithCompletionBlock__112671b98,param_3,param_4,0);
  return;
}



/* Entry: 1090606dc; end: 10906088b; -[SCVideoTranscodingSession startRunningWithCompletionBlock:progressBlock:statusBlock:] */

void FUN_1090606dc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x1e0) = 0;
  *(undefined8 *)(param_2 + 0x1e8) = 0;
  uVar1 = param_6;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_2 + 0x100) = uVar1;
  _objc_release(uVar4);
  func_0x00010be08440(0,param_2);
  _objc_initWeak(auStack_68,param_2);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10906088c;
  puStack_90 = &UNK_1108fe3b0;
  _objc_copyWeak(auStack_78,auStack_68);
  uStack_70 = param_1;
  _objc_retain(param_4);
  uStack_88 = param_4;
  _objc_retain(param_5);
  ppuVar2 = &puStack_a8;
  uStack_80 = param_5;
  _objc_retainBlock(ppuVar2);
  puVar3 = PTR_PTR_1126dd1d8;
  _objc_alloc(PTR_PTR_1126dd1d8);
  func_0x00010c0351c0();
  func_0x00010c150260(*(undefined8 *)(param_2 + 0x198));
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10906088c; end: 109060a37;  */

void FUN_10906088c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [15];
  char cStack_99;
  undefined8 uStack_98;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be576e0(*(undefined8 *)(param_1 + 0x38),lVar1);
    func_0x00010be08440(0,lVar1);
    func_0x00010be38180(lVar1);
    func_0x00010c24d960(*(undefined8 *)(lVar1 + 0x1a8));
    func_0x00010c0bbb00(*(undefined8 *)(lVar1 + 0x1a8));
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)(lVar1 + 0xf0);
    *(undefined8 *)(lVar1 + 0xf0) = uVar2;
    _objc_release(uVar8);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)(lVar1 + 0xf8);
    *(undefined8 *)(lVar1 + 0xf8) = uVar2;
    _objc_release(uVar8);
    puVar3 = PTR_PTR_1126ba150;
    func_0x00010c22e420();
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    if ((int)puVar3 == 0) {
      lVar5 = lVar1;
      func_0x00010beb1120();
      if ((int)lVar5 != 0) {
        func_0x00010bec1da0(lVar1);
        goto LAB_109060a00;
      }
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(lVar1 + 0x1c0);
      *(undefined **)(lVar1 + 0x1c0) = puVar4;
      _objc_release(uVar2);
      _objc_release(puVar3);
      *(undefined8 *)(lVar1 + 0x138) = 0;
    }
    func_0x00010becea40(lVar1);
  }
LAB_109060a00:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  uStack_98 = 0;
  cStack_99 = '\0';
  lVar7 = *(long *)(lVar1 + 0x1a8);
  _CACurrentMediaTime();
  func_0x00010c24d6a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 != 0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110dad378;
    if (cStack_99 == '\0') {
      ppuVar6 = &PTR____CFConstantStringClassReference_110dad398;
    }
    FUN_109068798(*(undefined8 *)(lVar1 + 400),ppuVar6,
                  &PTR____CFConstantStringClassReference_110f1e0d8,lVar7,1);
    uVar2 = *(undefined8 *)(lVar1 + 0x1a0);
    ppuVar6 = &PTR____CFConstantStringClassReference_110f1e0f8;
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110f1e0f8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _CACurrentMediaTime();
    func_0x00010c0df720(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bb4e0(uVar2);
    _objc_release(puVar4);
    _objc_release(ppuVar6);
  }
  func_0x00010bfec280(*(undefined8 *)(lVar1 + 0x160));
  _objc_initWeak(auStack_a8,lVar1);
  uVar2 = *(undefined8 *)(lVar1 + 0x78);
  _objc_copyWeak(auStack_b0,auStack_a8);
  func_0x00010c0f7fc0(uVar2);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(lVar7);
  return;
}



/* Entry: 109060a38; end: 109060bcb; -[SCVideoTranscodingSession cancelRunning] */

void FUN_109060a38(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [15];
  char cStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  cStack_49 = '\0';
  lVar3 = *(long *)(param_1 + 0x1a8);
  _CACurrentMediaTime();
  func_0x00010c24d6a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
    if (cStack_49 == '\0') {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
    }
    FUN_109068798(*(undefined8 *)(param_1 + 400),ppuVar1,
                  &PTR____CFConstantStringClassReference_110f1e0d8,lVar3,1);
    uVar4 = *(undefined8 *)(param_1 + 0x1a0);
    ppuVar1 = &PTR____CFConstantStringClassReference_110f1e0f8;
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110f1e0f8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _CACurrentMediaTime();
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bb4e0(uVar4);
    _objc_release(puVar2);
    _objc_release(ppuVar1);
  }
  func_0x00010bfec280(*(undefined8 *)(param_1 + 0x160));
  _objc_initWeak(auStack_58,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c0f7fc0(uVar4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar3);
  return;
}



/* Entry: 109060bcc; end: 109060c0b;  */

void FUN_109060bcc(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c12ece0(*(undefined8 *)(param_1 + 0x198),param_2,param_1);
    func_0x00010bddaf80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109060c0c; end: 109060c1b; -[SCVideoTranscodingSession retryCount] */

long FUN_109060c0c(long param_1)

{
  return 4 - *(long *)(param_1 + 0x138);
}



/* Entry: 109060c1c; end: 109060cbf; -[SCVideoTranscodingSession videoEncoderDidCompleteEncoding:] */

void FUN_109060c1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  func_0x00010c0bbb00(*(undefined8 *)(param_1 + 0x1a8),param_2,
                      &PTR____CFConstantStringClassReference_110f1e258);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_109060cc0;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 109060cc0; end: 109060e13;  */

/* WARNING: Possible PIC construction at 0x000109060de8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109060dec) */

void FUN_109060cc0(undefined8 param_1,double param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  
  lVar4 = *(long *)(param_3 + 0x28);
  if (*(long *)(param_3 + 0x20) == *(long *)(lVar4 + 0xe8)) {
    dVar6 = 1.0;
    func_0x00010be08440(lVar4,param_4,4);
    lVar4 = *(long *)(param_3 + 0x28);
    if (*(long *)(lVar4 + 0x1b8) == 1) {
      if (*(long *)(lVar4 + 0x188) != 0) {
        *(undefined8 *)(lVar4 + 0x1b8) = 4;
                    /* WARNING: Could not recover jumptable at 0x00010be3dbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (*(undefined8 *)(param_3 + 0x28),PTR_s__invokeCompletionBlock_11256d098);
        return;
      }
      puVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
      _objc_retainAutoreleasedReturnValue();
      FUN_109053df4();
      dVar7 = ABS(dVar6);
      dVar6 = ABS(dVar6 + 0.0) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar6))) {
        bVar1 = dVar7 < dVar6;
      }
      dVar6 = ABS(param_2);
      dVar7 = ABS(param_2 + 0.0) * 2.220446049250313e-16;
      bVar2 = true;
      if ((!bVar1) && (bVar2 = false, !NAN(dVar6))) {
        bVar2 = dVar6 < 2.2250738585072014e-308;
      }
      bVar1 = true;
      if ((!bVar2) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar7))) {
        bVar1 = dVar6 < dVar7;
      }
      if (!bVar1) {
        *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x1b8) = 4;
        func_0x00010be3dbe0(*(undefined8 *)(param_3 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar3);
        return;
      }
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x1c0);
      *(undefined **)(*(long *)(param_3 + 0x28) + 0x1c0) = puVar3;
      _objc_release(uVar5);
      lVar4 = *(long *)(param_3 + 0x28);
    }
    else {
      *(undefined8 *)(lVar4 + 0x1b8) = 0;
      lVar4 = *(long *)(param_3 + 0x28);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010becea50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar4,PTR_s__transcodingFailureHandler_112591438);
  return;
}



/* Entry: 109060e14; end: 109060ea3; -[SCVideoTranscodingSession videoEncoderDidCancelEncoding:] */

void FUN_109060e14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_109060ea4;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 109060ea4; end: 109060ec7;  */

void FUN_109060ea4(long param_1)

{
  if (*(long *)(param_1 + 0x20) != *(long *)(*(long *)(param_1 + 0x28) + 0xe8)) {
    return;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x1b8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010be3dbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s__invokeCompletionBlock_11256d098);
  return;
}



/* Entry: 109060ec8; end: 10906107f; -[SCVideoTranscodingSession videoEncoder:didFailEncodingWithError:] */

void FUN_109060ec8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x109060f80;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_3;
  lStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 109061080; end: 109061193; -[SCVideoTranscodingSession videoEncoder:didProgressWithPresentationTime:] */

void FUN_109061080(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = *(undefined8 *)(param_1 + 0x1a8);
  uStack_58 = param_4[1];
  uStack_60 = *param_4;
  uStack_50 = param_4[2];
  _CMTimeGetSeconds(&uStack_60);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110f1e118);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbb20(uVar2,param_2,&PTR____CFConstantStringClassReference_110f1e238,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_109061194;
  puStack_90 = &UNK_1108714c0;
  uStack_70 = param_4[1];
  uStack_78 = *param_4;
  uStack_68 = param_4[2];
  uStack_88 = param_3;
  lStack_80 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_a8);
  _objc_release(uStack_88);
  _objc_release(param_3);
  return;
}



/* Entry: 109061194; end: 10906129f;  */

void FUN_109061194(float param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar2 = *(long *)(param_2 + 0x28);
  if (*(long *)(param_2 + 0x20) == *(long *)(lVar2 + 0xe8)) {
    *(long *)(lVar2 + 0x1e0) = *(long *)(lVar2 + 0x1e0) + 1;
    lVar2 = *(long *)(param_2 + 0x28);
    if ((*(long *)(lVar2 + 0xf8) != 0) || (*(long *)(lVar2 + 0x100) != 0)) {
      if (*(long *)(lVar2 + 0x168) == 0) {
        if (*(long *)(lVar2 + 8) == 0) {
          uVar1 = *(undefined8 *)(lVar2 + 0x50);
          func_0x00010bf8b160(uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb2c80();
          dVar6 = (double)param_1;
          _objc_release(uVar1);
        }
        else {
          dVar6 = *(double *)(lVar2 + 0xd8);
        }
      }
      else {
        dVar6 = *(double *)(*(long *)(lVar2 + 0x168) + 8);
      }
      uStack_48 = *(undefined8 *)(param_2 + 0x38);
      dVar5 = *(double *)(param_2 + 0x30);
      uStack_40 = *(undefined8 *)(param_2 + 0x40);
      dStack_50 = dVar5;
      _CMTimeGetSeconds(&dStack_50);
      if (((!NAN(dVar5)) && (0.0 < dVar6)) && (0.0 <= dVar5)) {
        lVar2 = *(long *)(param_2 + 0x28);
        lVar3 = *(long *)(lVar2 + 0xf8);
        if (lVar3 != 0) {
          (**(code **)(lVar3 + 0x10))((float)(dVar5 / dVar6),lVar3);
          lVar2 = *(long *)(param_2 + 0x28);
        }
        fVar4 = (float)NEON_fminnm((float)(dVar5 / dVar6),0x3f800000);
        func_0x00010be08440((double)fVar4,lVar2,param_3,3);
      }
    }
  }
  return;
}



/* Entry: 1090612a0; end: 10906140f; -[SCVideoTranscodingSession _setupVideoTranscodingSession] */

/* WARNING: Removing unreachable block (ram,0x00010906134c) */

long FUN_1090612a0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(param_1 + 0x1b8) = 1;
  lVar1 = param_1;
  func_0x00010beb10a0();
  if ((int)lVar1 == 0) {
    param_1 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0xe0);
    func_0x00010bf66fa0();
    *(long *)(param_1 + 0x120) = lVar1;
    *(bool *)(param_1 + 0x1b0) = lVar1 != 0;
    lVar1 = *(long *)(param_1 + 0xe0);
    func_0x00010bf66fc0();
    _objc_retain(0);
    *(long *)(param_1 + 0x128) = lVar1;
    *(undefined8 *)(param_1 + 0x130) = param_2;
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29aea0();
      func_0x00010c1d0640(puVar2);
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x1c0);
      *(undefined **)(param_1 + 0x1c0) = puVar3;
      _objc_release(uVar4);
      _objc_release(puVar2);
      param_1 = 0;
    }
    else {
      func_0x00010beb1080(param_1);
    }
    _objc_release(0);
  }
  return param_1;
}



/* Entry: 109061410; end: 1090616bf; -[SCVideoTranscodingSession _setupVideoFrameProvider] */

bool FUN_109061410(long param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_1090616c0;
  uStack_50 = 0x1090616d0;
  uStack_48 = 0;
  if (*(long *)(param_1 + 0x168) == 0) {
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 == 0) {
      puVar4 = PTR_PTR_1126dd168;
      _objc_alloc();
      func_0x00010c01c080(*(undefined8 *)(param_1 + 0xd8));
    }
    else {
      FUN_109126a88();
      if ((int)lVar3 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined8 *)(param_1 + 8);
        FUN_10912774c(uVar8);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar4 = PTR_PTR_1126dd170;
      _objc_alloc();
      puVar1 = puStack_68;
      uStack_78 = puStack_68[5];
      func_0x00010c060ca0();
      uVar7 = uStack_78;
      _objc_retain(uStack_78);
      uVar5 = puVar1[5];
      puVar1[5] = uVar7;
      _objc_release(uVar5);
      lVar3 = *(long *)(param_1 + 0x50);
      func_0x00010c26f620();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) {
        lVar3 = *(long *)(param_1 + 0x50);
        func_0x00010c26f620();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 == 0) {
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
        }
        else {
          func_0x00010bdc1120(&uStack_b0,lVar3);
        }
        func_0x00010c214ec0(puVar4);
        _objc_release(lVar3);
      }
      puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
      lVar3 = puStack_68[5];
      if ((puVar4 == (undefined *)0x0) || (lVar3 != 0)) {
        FUN_109053f70();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_1 + 0x1c0);
        *(undefined **)(param_1 + 0x1c0) = puVar6;
        _objc_release(uVar7);
        _objc_release(lVar3);
        _objc_release(uVar8);
        bVar2 = false;
        goto LAB_1090614e0;
      }
      _objc_release(uVar8);
    }
  }
  else {
    puVar4 = PTR_PTR_1126dd1e0;
    _objc_alloc();
    func_0x00010bff42e0();
  }
  uVar8 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(puVar4);
  func_0x00010c0f8240(uVar8);
  bVar2 = *(long *)(param_1 + 0x1c0) == 0;
  _objc_release(puVar4);
LAB_1090614e0:
  _objc_release(puVar4);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  return bVar2;
}



/* Entry: 1090616c0; end: 1090616d7;  */

void FUN_1090616c0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1090616d8; end: 109061853;  */

ulong FUN_1090616d8(double param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  byte bVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  byte bVar12;
  long lVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *(long *)(param_2 + 0x20);
  uVar10 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar10);
  uVar1 = *(undefined8 *)(lVar13 + 0xe0);
  *(undefined8 *)(lVar13 + 0xe0) = uVar10;
  _objc_release(uVar1);
  uVar2 = *(ulong *)(*(long *)(param_2 + 0x20) + 0xe0);
  lVar13 = *(long *)(*(long *)(param_2 + 0x30) + 8);
  uVar10 = *(undefined8 *)(lVar13 + 0x28);
  func_0x00010c1093e0();
  _objc_retain(uVar10);
  uVar3 = *(ulong *)(lVar13 + 0x28);
  *(undefined8 *)(lVar13 + 0x28) = uVar10;
  _objc_release();
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((uVar2 & 1) == 0) {
    func_0x00010bf3ec40();
    uVar3 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x30) + 8) + 0x28);
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x1c0);
    *(undefined **)(*(long *)(param_2 + 0x20) + 0x1c0) = puVar5;
    _objc_release(uVar10);
    _objc_release(puVar4);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return uVar3;
  }
  ___stack_chk_fail();
  puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(uVar3 + 0x30);
  func_0x00010c0f5800(uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010bfacbe0();
  _objc_release(uVar10);
  if ((int)puVar4 != 0) {
    lStack_100 = 0;
    func_0x00010c12cc60(puVar5);
    lVar13 = lStack_100;
    _objc_retain(lStack_100);
    if (lVar13 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = 0;
      uVar10 = *(undefined8 *)(uVar3 + 0x1c0);
      *(undefined **)(uVar3 + 0x1c0) = puVar4;
      goto LAB_109061c8c;
    }
  }
  lVar13 = *(long *)(uVar3 + 0x58);
  puVar11 = (undefined8 *)PTR__AVVideoCodecTypeH264_110348128;
  if (((lVar13 == 0) || (*(long *)(lVar13 + 0x30) == 0)) ||
     (puVar11 = (undefined8 *)PTR__AVVideoCodecTypeHEVC_110348130, *(long *)(lVar13 + 0x30) == 1)) {
    uVar10 = *puVar11;
    _objc_retain(uVar10);
    lVar13 = *(long *)(uVar3 + 0x58);
    if (lVar13 != 0) goto LAB_10906197c;
    dVar16 = 0.0;
  }
  else {
    uVar10 = 0;
LAB_10906197c:
    dVar16 = *(double *)(lVar13 + 0x10);
  }
  if (*(long *)(uVar3 + 0x10) != 0) {
    puVar4 = PTR_PTR_1126bc3f0;
    _objc_opt_new();
    puVar6 = puVar4;
    func_0x00010bf70a80();
    _objc_release(puVar4);
    if ((int)puVar6 != 0) {
      uVar1 = *(undefined8 *)(uVar3 + 0x10);
      FUN_109055a88(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6e220(PTR_PTR_1126dd1e8);
      func_0x00010bdd4ba0(uVar3);
      dVar16 = dVar16 * param_1;
      _objc_release(uVar1);
    }
  }
  if (*(long *)(uVar3 + 0x58) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)(uVar3 + 0x58) + 0x28);
  }
  puVar4 = PTR_PTR_1126dd1f0;
  _objc_alloc(PTR_PTR_1126dd1f0);
  lVar13 = *(long *)(uVar3 + 0x58);
  uVar17 = 0;
  if (lVar13 == 0) {
    uVar14 = 0;
    uVar18 = 0;
  }
  else {
    uVar18 = *(undefined8 *)(lVar13 + 0x18);
    uVar14 = *(undefined8 *)(lVar13 + 0x38);
  }
  uVar19 = *(undefined8 *)(uVar3 + 0x40);
  uVar20 = *(undefined8 *)(uVar3 + 0x48);
  _objc_retain(uVar14);
  lVar13 = *(long *)(uVar3 + 0x58);
  if (lVar13 == 0) {
    bVar8 = 0;
    uVar7 = 0;
    bVar12 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lVar13 + 0x20);
    bVar12 = *(byte *)(lVar13 + 0xb);
    bVar8 = *(byte *)(lVar13 + 10);
    uVar17 = *(undefined8 *)(lVar13 + 0x40);
  }
  uStack_128 = *(undefined8 *)(uVar3 + 0x98);
  uStack_130 = *(undefined8 *)(uVar3 + 0x90);
  uStack_118 = *(undefined8 *)(uVar3 + 0xa8);
  uStack_120 = *(undefined8 *)(uVar3 + 0xa0);
  uStack_108 = *(undefined8 *)(uVar3 + 0xb8);
  uStack_110 = *(undefined8 *)(uVar3 + 0xb0);
  FUN_10906757c(uVar19,uVar20,dVar16,uVar18,uVar17,puVar4,uVar10,uVar14,
                *(undefined8 *)(uVar3 + 0xd0),uVar1,uVar7,bVar12 & 1,bVar8 & 1,&uStack_130,
                *(undefined8 *)(uVar3 + 0x178));
  _objc_release(uVar14);
  puVar6 = PTR_PTR_1126dd1f8;
  if (((*(long *)(uVar3 + 0x58) == 0) || (*(char *)(*(long *)(uVar3 + 0x58) + 0xc) != '\x01')) ||
     (*(long *)(uVar3 + 0x188) == 0)) {
    _objc_alloc();
    func_0x00010c034e60();
  }
  else {
    _objc_alloc();
    func_0x00010c035060();
  }
  uVar1 = *(undefined8 *)(uVar3 + 0xe8);
  *(undefined **)(uVar3 + 0xe8) = puVar6;
  _objc_release(uVar1);
  uVar1 = 0;
  _dispatch_semaphore_create();
  if (*(long *)(uVar3 + 0x60) == 0) {
    ppuVar15 = (undefined **)0x0;
  }
  else {
    _objc_initWeak(&uStack_130,uVar3);
    puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_109061cf8;
    puStack_148 = &UNK_110ad6670;
    _objc_copyWeak(auStack_138,&uStack_130);
    _objc_retain(uVar1);
    ppuVar15 = &puStack_160;
    uStack_140 = uVar1;
    _objc_retainBlock(ppuVar15);
    _objc_release(uStack_140);
    _objc_destroyWeak(auStack_138);
    _objc_destroyWeak(&uStack_130);
  }
  uVar2 = *(ulong *)(uVar3 + 0xe8);
  func_0x00010c109340();
  lVar13 = 0;
  _objc_retain(0);
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((uVar2 & 1) == 0) {
    func_0x00010bf3ec40(0);
    lVar9 = lVar13;
    FUN_1090541d8(0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(uVar3 + 0x1c0);
    *(undefined **)(uVar3 + 0x1c0) = puVar6;
    _objc_release(uVar17);
    _objc_release(lVar9);
  }
  else {
    func_0x00010c0bbb00(*(undefined8 *)(uVar3 + 0x1a8));
  }
  _objc_release(ppuVar15);
  _objc_release(uVar1);
  _objc_release(puVar4);
LAB_109061c8c:
  _objc_release(uVar10);
  _objc_release(puVar5);
  _objc_release(lVar13);
  return uVar2;
}



/* Entry: 109061854; end: 109061cf7; -[SCVideoTranscodingSession _setupVideoEncoderWithFirstAudioSampleBuffer:firstVideoFrame:] */

ulong FUN_109061854(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  byte bVar8;
  long lVar9;
  undefined8 *puVar10;
  byte bVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c0f5800(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bfacbe0();
  _objc_release(uVar2);
  if ((int)puVar3 != 0) {
    lStack_a0 = 0;
    func_0x00010c12cc60(puVar1);
    lVar9 = lStack_a0;
    _objc_retain(lStack_a0);
    if (lVar9 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = 0;
      uVar2 = *(undefined8 *)(param_2 + 0x1c0);
      *(undefined **)(param_2 + 0x1c0) = puVar3;
      goto LAB_109061c8c;
    }
  }
  lVar9 = *(long *)(param_2 + 0x58);
  puVar10 = (undefined8 *)PTR__AVVideoCodecTypeH264_110348128;
  if (((lVar9 == 0) || (*(long *)(lVar9 + 0x30) == 0)) ||
     (puVar10 = (undefined8 *)PTR__AVVideoCodecTypeHEVC_110348130, *(long *)(lVar9 + 0x30) == 1)) {
    uVar2 = *puVar10;
    _objc_retain(uVar2);
    lVar9 = *(long *)(param_2 + 0x58);
    if (lVar9 != 0) goto LAB_10906197c;
    dVar15 = 0.0;
  }
  else {
    uVar2 = 0;
LAB_10906197c:
    dVar15 = *(double *)(lVar9 + 0x10);
  }
  if (*(long *)(param_2 + 0x10) != 0) {
    puVar3 = PTR_PTR_1126bc3f0;
    _objc_opt_new();
    puVar4 = puVar3;
    func_0x00010bf70a80();
    _objc_release(puVar3);
    if ((int)puVar4 != 0) {
      uVar5 = *(undefined8 *)(param_2 + 0x10);
      FUN_109055a88(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6e220(PTR_PTR_1126dd1e8);
      func_0x00010bdd4ba0(param_2);
      dVar15 = dVar15 * param_1;
      _objc_release(uVar5);
    }
  }
  if (*(long *)(param_2 + 0x58) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*(long *)(param_2 + 0x58) + 0x28);
  }
  puVar3 = PTR_PTR_1126dd1f0;
  _objc_alloc(PTR_PTR_1126dd1f0);
  lVar9 = *(long *)(param_2 + 0x58);
  uVar16 = 0;
  if (lVar9 == 0) {
    uVar13 = 0;
    uVar17 = 0;
  }
  else {
    uVar17 = *(undefined8 *)(lVar9 + 0x18);
    uVar13 = *(undefined8 *)(lVar9 + 0x38);
  }
  uVar18 = *(undefined8 *)(param_2 + 0x40);
  uVar19 = *(undefined8 *)(param_2 + 0x48);
  _objc_retain(uVar13);
  lVar9 = *(long *)(param_2 + 0x58);
  if (lVar9 == 0) {
    bVar8 = 0;
    uVar7 = 0;
    bVar11 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lVar9 + 0x20);
    bVar11 = *(byte *)(lVar9 + 0xb);
    bVar8 = *(byte *)(lVar9 + 10);
    uVar16 = *(undefined8 *)(lVar9 + 0x40);
  }
  uStack_c8 = *(undefined8 *)(param_2 + 0x98);
  uStack_d0 = *(undefined8 *)(param_2 + 0x90);
  uStack_b8 = *(undefined8 *)(param_2 + 0xa8);
  uStack_c0 = *(undefined8 *)(param_2 + 0xa0);
  uStack_a8 = *(undefined8 *)(param_2 + 0xb8);
  uStack_b0 = *(undefined8 *)(param_2 + 0xb0);
  FUN_10906757c(uVar18,uVar19,dVar15,uVar17,uVar16,puVar3,uVar2,uVar13,
                *(undefined8 *)(param_2 + 0xd0),uVar5,uVar7,bVar11 & 1,bVar8 & 1,&uStack_d0,
                *(undefined8 *)(param_2 + 0x178));
  _objc_release(uVar13);
  puVar4 = PTR_PTR_1126dd1f8;
  if (((*(long *)(param_2 + 0x58) == 0) || (*(char *)(*(long *)(param_2 + 0x58) + 0xc) != '\x01'))
     || (*(long *)(param_2 + 0x188) == 0)) {
    _objc_alloc();
    func_0x00010c034e60();
  }
  else {
    _objc_alloc();
    func_0x00010c035060();
  }
  uVar5 = *(undefined8 *)(param_2 + 0xe8);
  *(undefined **)(param_2 + 0xe8) = puVar4;
  _objc_release(uVar5);
  uVar5 = 0;
  _dispatch_semaphore_create();
  if (*(long *)(param_2 + 0x60) == 0) {
    ppuVar14 = (undefined **)0x0;
  }
  else {
    _objc_initWeak(&uStack_d0,param_2);
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_109061cf8;
    puStack_e8 = &UNK_110ad6670;
    _objc_copyWeak(auStack_d8,&uStack_d0);
    _objc_retain(uVar5);
    ppuVar14 = &puStack_100;
    uStack_e0 = uVar5;
    _objc_retainBlock(ppuVar14);
    _objc_release(uStack_e0);
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(&uStack_d0);
  }
  uVar12 = *(ulong *)(param_2 + 0xe8);
  func_0x00010c109340();
  lVar9 = 0;
  _objc_retain(0);
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((uVar12 & 1) == 0) {
    func_0x00010bf3ec40(0);
    lVar6 = lVar9;
    FUN_1090541d8(0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_2 + 0x1c0);
    *(undefined **)(param_2 + 0x1c0) = puVar4;
    _objc_release(uVar16);
    _objc_release(lVar6);
  }
  else {
    func_0x00010c0bbb00(*(undefined8 *)(param_2 + 0x1a8));
  }
  _objc_release(ppuVar14);
  _objc_release(uVar5);
  _objc_release(puVar3);
LAB_109061c8c:
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(lVar9);
  return uVar12;
}



/* Entry: 109061cf8; end: 109061fa3;  */

void FUN_109061cf8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *in_x4;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (*(long *)(lVar1 + 8) != 0) {
      dVar7 = *(double *)(lVar1 + 0x18);
      dVar8 = -dVar7;
      if (0.0 <= dVar7) {
        dVar8 = dVar7;
      }
      uStack_88 = in_x4[1];
      uStack_90 = *in_x4;
      uStack_80 = in_x4[2];
      _CMTimeMultiplyByFloat64(&uStack_c0,dVar8,&uStack_90);
      in_x4[1] = puStack_b8;
      *in_x4 = uStack_c0;
      in_x4[2] = uStack_b0;
    }
    puStack_b8 = &uStack_c0;
    uStack_c0 = 0;
    uStack_b0 = 0x3032000000;
    pcStack_a8 = FUN_1090616c0;
    uStack_a0 = 0x1090616d0;
    uStack_98 = 0;
    puVar2 = PTR_PTR_1126bf4d0;
    func_0x00010c22bec0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar5 = *(undefined8 *)(lVar1 + 0x1a8);
    uStack_88 = in_x4[1];
    uStack_90 = *in_x4;
    uStack_80 = in_x4[2];
    _CMTimeGetSeconds(&uStack_90);
    func_0x00010c0f7240();
    func_0x00010c115a00();
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bbb20(uVar5);
    _objc_release(puVar3);
    uVar6 = *(undefined8 *)(lVar1 + 0x60);
    uVar5 = *(undefined8 *)(lVar1 + 0x50);
    func_0x00010c10f760(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uStack_88 = in_x4[1];
    uStack_90 = *in_x4;
    uStack_80 = in_x4[2];
    func_0x00010c114c60(uVar6);
    _objc_release(uVar5);
    _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 0x20),0xffffffffffffffff);
    puVar3 = (undefined *)puStack_b8[5];
    _objc_retain(puVar3);
    _objc_release(uVar4);
    _objc_release(puVar2);
    __Block_object_dispose(&uStack_c0,8);
    _objc_release(uStack_98);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 109061fa4; end: 10906203f;  */

void FUN_109061fa4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x20);
  if ((param_3 == 0) || (*(long *)(lVar2 + 0x1c8) != 0)) {
    if (param_3 == 0) goto LAB_109062010;
  }
  else {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(lVar2 + 0x1c8);
    *(long *)(lVar2 + 0x1c8) = param_3;
    _objc_release(uVar1);
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(long *)(lVar2 + 0x28) = param_3;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x20);
LAB_109062010:
  func_0x00010c0bbb00(*(undefined8 *)(lVar2 + 0x1a8),param_2,
                      &PTR____CFConstantStringClassReference_110f1e218);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109062040; end: 10906207f; -[SCVideoTranscodingSession _startTranscoding] */

void FUN_109062040(long param_1)

{
  func_0x00010c2a1ca0(*(undefined8 *)(param_1 + 0x60));
  func_0x00010c24eae0(*(undefined8 *)(param_1 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x00010c0bbb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1a8),PTR_s_markStage__11260c8d8,
             &PTR____CFConstantStringClassReference_110f1e1d8);
  return;
}



/* Entry: 109062080; end: 1090620bb; -[SCVideoTranscodingSession _cancelTranscoding] */

void FUN_109062080(long param_1)

{
  *(undefined1 *)(param_1 + 0x150) = 1;
  func_0x00010bdda8e0();
  func_0x00010bf2e360(*(undefined8 *)(param_1 + 0xe8));
  func_0x00010bf2ebc0(*(undefined8 *)(param_1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdf8950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__decreaseConcurrentTranscodingCo_11255bbf0);
  return;
}



/* Entry: 1090620bc; end: 109062163; -[SCVideoTranscodingSession _cancelFrameFetching] */

void FUN_1090620bc(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 109062164; end: 10906223f;  */

void FUN_109062164(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 0xe0);
    _objc_retain(lVar2);
    if (lVar2 != 0) {
      if (*(char *)(param_1 + 0x152) == '\x01') {
        uVar1 = 0x19;
        _dispatch_get_global_queue(0x19,0);
        _objc_retainAutoreleasedReturnValue();
        puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_50 = 0xc2000000;
        pcStack_48 = FUN_109062240;
        puStack_40 = &UNK_110842e18;
        _objc_retain(lVar2);
        lStack_38 = lVar2;
        func_0x000107c27d8c(uVar1,&puStack_58);
        _objc_release(uVar1);
        _objc_release(lStack_38);
      }
      else {
        func_0x00010bf2e400(lVar2);
      }
    }
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 109062240; end: 109062247;  */

void FUN_109062240(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2e410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_cancelFetching_1125a92a8);
  return;
}



/* Entry: 109062248; end: 1090623cb; -[SCVideoTranscodingSession _transcodingFailureHandler] */

void FUN_109062248(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar2 = param_1;
  func_0x00010be40240();
  if ((int)lVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126da0e8;
    func_0x00010bf66860();
  }
  if (*(long *)(param_1 + 0x138) == 0 || puVar4 == (undefined *)0x2) {
    *(undefined8 *)(param_1 + 0x1b8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010be3dbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__invokeCompletionBlock_11256d098);
    return;
  }
  *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + -1;
  uVar5 = 0;
  func_0x00010be08440(0,param_1);
  puVar1 = PTR_PTR_1126da0e8;
  if (puVar4 == (undefined *)0x1) {
    func_0x00010be96de0(param_1);
    func_0x00010c13f5a0(puVar1);
    func_0x00010becafe0(param_1);
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0f7fe0(uVar5,uVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be970d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__retryTranscodingIfFails_1125835d0);
  return;
}



/* Entry: 1090623cc; end: 10906241f;  */

void FUN_1090623cc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x150) == '\x01') {
      *(undefined8 *)(param_1 + 0x1b8) = 3;
      func_0x00010be3dbe0(param_1);
    }
    else {
      func_0x00010be970c0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109062420; end: 10906248b; -[SCVideoTranscodingSession _isErrorAwareRetryEnabled] */

void FUN_109062420(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = *(long *)(param_1 + 0x140);
  if (lVar1 == 0) {
    func_0x00010bf1f440(*(undefined8 *)(param_1 + 0x180),param_2,
                        &PTR____CFConstantStringClassReference_110f1dfd8,0,0);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x140);
    *(undefined **)(param_1 + 0x140) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 0x140);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 10906248c; end: 1090624f7; -[SCVideoTranscodingSession _retryBaseDelayMs] */

void FUN_10906248c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = *(long *)(param_1 + 0x148);
  if (lVar1 == 0) {
    func_0x00010c067f00(*(undefined8 *)(param_1 + 0x180),param_2,
                        &PTR____CFConstantStringClassReference_110f1dff8,500,0);
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x148);
    *(undefined **)(param_1 + 0x148) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 0x148);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c067fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_integerValue_1125f7a00);
  return;
}



/* Entry: 1090624f8; end: 109062563; -[SCVideoTranscodingSession _statusTickMinIntervalMs] */

void FUN_1090624f8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = *(long *)(param_1 + 0x108);
  if (lVar1 == 0) {
    func_0x00010c067f00(*(undefined8 *)(param_1 + 0x180),param_2,
                        &PTR____CFConstantStringClassReference_110f1e058,500,0);
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x108);
    *(undefined **)(param_1 + 0x108) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 0x108);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c067fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_integerValue_1125f7a00);
  return;
}



/* Entry: 109062564; end: 1090625f3; -[SCVideoTranscodingSession _shouldEmitEncodingTickWithProgress:] */

undefined8 FUN_109062564(double param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = param_1;
  _CACurrentMediaTime();
  dVar4 = *(double *)(param_2 + 0x110);
  if (((dVar4 <= 0.0) ||
      (lVar1 = param_2, func_0x00010bec28e0(), (double)lVar1 <= (dVar3 - dVar4) * 1000.0)) ||
     (0.05 <= ABS(param_1 - *(double *)(param_2 + 0x118)))) {
    *(double *)(param_2 + 0x110) = dVar3;
    *(double *)(param_2 + 0x118) = param_1;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 1090625f4; end: 1090626eb; -[SCVideoTranscodingSession _emitStatusWithPhase:progress:] */

void FUN_1090625f4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 0x100);
  if (lVar3 == 0) {
    return;
  }
  if (param_4 == 3) {
    lVar3 = param_2;
    func_0x00010beb3600(param_1);
    if ((int)lVar3 == 0) {
      return;
    }
    lVar3 = *(long *)(param_2 + 0x100);
  }
  puVar1 = PTR_PTR_1126da000;
  _objc_alloc(PTR_PTR_1126da000);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  func_0x00010c035860(param_1,puVar1);
  (**(code **)(lVar3 + 0x10))(lVar3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1090626ec; end: 10906272b; -[SCVideoTranscodingSession _emitTerminalStatus] */

void FUN_1090626ec(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x1b8);
  if (uVar2 < 3) {
    uVar3 = 0;
    uVar1 = 8;
  }
  else if (uVar2 == 3) {
    uVar3 = 0;
    uVar1 = 9;
  }
  else {
    if (uVar2 != 4) {
      return;
    }
    uVar3 = 0x3ff0000000000000;
    uVar1 = 7;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be08450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar3,param_1,PTR_s__emitStatusWithPhase_progress__11255fab0,uVar1);
  return;
}



/* Entry: 10906272c; end: 109062783; -[SCVideoTranscodingSession _resetFrameProvider] */

void FUN_10906272c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_109062784;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x80),param_2,&puStack_38);
  return;
}



/* Entry: 109062784; end: 109062793;  */

void FUN_109062784(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xe0);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xe0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109062794; end: 1090627c7; -[SCVideoTranscodingSession _captureEncoderFrameCounts] */

void FUN_109062794(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xe8);
  if (lVar1 != 0) {
    func_0x00010c0d4440();
    *(long *)(param_1 + 0x1e8) = *(long *)(param_1 + 0x1e8) + lVar1;
  }
  return;
}



/* Entry: 1090627c8; end: 10906286b; -[SCVideoTranscodingSession _invokeCompletionBlock] */

void FUN_1090627c8(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c296d80(*(undefined8 *)(param_1 + 0x160));
  func_0x00010c255780(*(undefined8 *)(param_1 + 0x1a8));
  func_0x00010bddb620(param_1);
  func_0x00010be084c0(param_1);
  if (*(long *)(param_1 + 0xf0) != 0) {
    (**(code **)(*(long *)(param_1 + 0xf0) + 0x10))();
  }
  func_0x00010bf2ebc0(*(undefined8 *)(param_1 + 0x60));
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  _objc_release(uVar1);
  func_0x00010be92d20(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar1);
  func_0x00010be54100(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdf8950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__decreaseConcurrentTranscodingCo_11255bbf0);
  return;
}



/* Entry: 10906286c; end: 10906299b; -[SCVideoTranscodingSession _logGrapheneConcurrentMetric] */

void FUN_10906286c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar1 = PTR_PTR_1126bf760;
  func_0x00010c22ba80(PTR_PTR_1126bf760);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c0df780(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (*(long *)(param_1 + 0x1c0) == 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110ddea58;
  }
  else {
    func_0x00010bf3ec40();
    func_0x00010c0df780(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  FUN_109068214(*(undefined8 *)(param_1 + 400),puVar3,ppuVar5,puVar1,1);
  _objc_release(puVar1);
  _objc_release(ppuVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10906299c; end: 1090629b3; -[SCVideoTranscodingSession _bitrateMultiplierWithVideoContentComplexity:] */

undefined8 FUN_10906299c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x3ff2666666666666;
  if (param_3 != 1) {
    uVar1 = 0x3ff0000000000000;
  }
  return uVar1;
}



/* Entry: 1090629b4; end: 109062a7f; -[SCVideoTranscodingSession _retryTranscodingIfFails] */

void FUN_1090629b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  func_0x00010be08440(0,param_1,param_2,2);
  uVar1 = *(undefined8 *)(param_1 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0f5800(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfacbe0(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  if ((int)puVar3 != 0) {
    func_0x00010c12cc60(puVar2,param_2,*(undefined8 *)(param_1 + 0x30),0);
  }
  func_0x00010becafe0(param_1);
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  lVar4 = param_1;
  func_0x00010beb1120();
  if ((int)lVar4 == 0) {
    func_0x00010becea40(param_1);
  }
  else {
    func_0x00010bec1da0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 109062a80; end: 109062abf; -[SCVideoTranscodingSession _teardownFailedAttempt] */

void FUN_109062a80(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bddb620();
  func_0x00010bf2e360(*(undefined8 *)(param_1 + 0xe8));
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  _objc_release(uVar1);
  func_0x00010be92d20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf2ebd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_cancelProcessing_1125a9498);
  return;
}



/* Entry: 109062ac0; end: 109062b03; -[SCVideoTranscodingSession _increaseConcurrentTranscodingCount] */

/* WARNING: Possible PIC construction at 0x000109062ae8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109062aec) */

void FUN_109062ac0(void)

{
  func_0x00010c22ba80(PTR_PTR_1126bf760);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bfec290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 109062b04; end: 109062b57; -[SCVideoTranscodingSession _decreaseConcurrentTranscodingCount] */

void FUN_109062b04(long param_1)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x158);
  func_0x00010c296d80();
  if (0 < iVar1) {
    puVar2 = PTR_PTR_1126bf760;
    func_0x00010c22ba80(PTR_PTR_1126bf760);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf67740();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x158),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 109062b58; end: 109062c0f; -[SCVideoTranscodingSession _logQueueTimeWithStartTime:didTimeOut:fixEnabled:] */

void FUN_109062b58(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  
  dVar3 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _CACurrentMediaTime();
  uVar2 = *(undefined8 *)(param_2 + 0x1a0);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb4e0(uVar2);
  _objc_release(puVar1);
  FUN_109068704(dVar3 - param_1,*(undefined8 *)(param_2 + 400),param_4,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 109062c10; end: 109062c17; -[SCVideoTranscodingSession status] */

undefined8 FUN_109062c10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1b8);
}



/* Entry: 109062c18; end: 109062c1f; -[SCVideoTranscodingSession outputHasAudio] */

undefined1 FUN_109062c18(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1b0);
}



/* Entry: 109062c20; end: 109062c27; -[SCVideoTranscodingSession error] */

undefined8 FUN_109062c20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c0);
}



/* Entry: 109062c28; end: 109062c2f; -[SCVideoTranscodingSession imageProcessingError] */

undefined8 FUN_109062c28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c8);
}



/* Entry: 109062c30; end: 109062c37; -[SCVideoTranscodingSession qualityScore] */

undefined8 FUN_109062c30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1d0);
}



/* Entry: 109062c38; end: 109062c3f; -[SCVideoTranscodingSession overrideMaxFrameRate] */

undefined8 FUN_109062c38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1d8);
}



/* Entry: 109062c40; end: 109062c47; -[SCVideoTranscodingSession setOverrideMaxFrameRate:] */

void FUN_109062c40(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1d8) = param_3;
  return;
}



/* Entry: 109062c48; end: 109062c4f; -[SCVideoTranscodingSession frameProcessedCount] */

undefined8 FUN_109062c48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1e0);
}



/* Entry: 109062c50; end: 109062c57; -[SCVideoTranscodingSession muxerAudioProcessedFrameCount] */

undefined8 FUN_109062c50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1e8);
}



/* Entry: 109062c58; end: 109062e1f; -[SCVideoTranscodingSession .cxx_destruct] */

void FUN_109062c58(long param_1)

{
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109062e20; end: 109062e73; +[SCVideoTranscodingSessionScheduler sharedInstance] */

void FUN_109062e20(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137307b0 != -1) {
    func_0x000107c27d9c(0x1137307b0,&PTR___NSConcreteGlobalBlock_110ad66c0);
  }
  uVar1 = uRam00000001137307b8;
  _objc_retain(uRam00000001137307b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109062e74; end: 109062ea3;  */

void FUN_109062e74(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126dd1c8;
  _objc_alloc();
  func_0x00010bfef1e0();
  uVar1 = puRam00000001137307b8;
  puRam00000001137307b8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109062ea4; end: 10906300f; -[SCVideoTranscodingSessionScheduler initPrivate] */

undefined8 * FUN_109062ea4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_112700128;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar2 = PTR_PTR_1126dd200;
    _objc_opt_new();
    uVar5 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c2a2be0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar5);
    _objc_initWeak(auStack_48,puVar1);
    puVar2 = PTR_PTR_1126bf760;
    func_0x00010c22ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0e0460();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    puVar4 = puVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[4];
    puVar1[4] = puVar4;
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return puVar1;
}



/* Entry: 109063010; end: 10906303b;  */

void FUN_109063010(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be97e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10906303c; end: 1090630d3; -[SCVideoTranscodingSessionScheduler scheduleTranscodingTask:forSession:priority:] */

void FUN_10906303c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 8);
  func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x18),param_2,param_3,param_4);
  func_0x00010c0664e0(*(undefined8 *)(param_1 + 0x10),param_2,param_4,param_5);
  _os_unfair_lock_unlock(param_1 + 8);
  func_0x00010be97e80(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1090630d4; end: 10906313b; -[SCVideoTranscodingSessionScheduler removeTranscodingSession:] */

void FUN_1090630d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 8);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
  func_0x00010c12a920(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  _os_unfair_lock_unlock(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10906313c; end: 1090631bb; -[SCVideoTranscodingSessionScheduler _runFirstTaskIfNeeded] */

void FUN_10906313c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _os_unfair_lock_lock(param_1 + 8);
  puVar1 = PTR_PTR_1126bf760;
  func_0x00010c22ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf529e0();
  _objc_release(puVar1);
  if (puVar2 < (undefined *)0x2) {
    func_0x00010be97e60(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 8);
  return;
}



/* Entry: 1090631bc; end: 10906326b; -[SCVideoTranscodingSessionScheduler _runFirstTask] */

void FUN_1090631bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c1037e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010c0dff20(lVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x18),param_2,uVar1);
    lVar3 = lVar2;
    func_0x00010c0f98a0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c27a0e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fc0(lVar3,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10906326c; end: 1090632a7; -[SCVideoTranscodingSessionScheduler .cxx_destruct] */

void FUN_10906326c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1090632a8; end: 109063353; -[SCVideoTranscodingSessionSchedulerQueue init] */

undefined1 * FUN_1090632a8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700130;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSPointerArray_1126c4b90;
    func_0x00010c2a2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSPointerArray_1126c4b90;
    func_0x00010c2a2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSPointerArray_1126c4b90;
    func_0x00010c2a2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109063354; end: 1090633a3; -[SCVideoTranscodingSessionSchedulerQueue insert:withPriority:] */

void FUN_109063354(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  _objc_retain(param_3);
  if (param_4 < 3) {
    func_0x00010befaaa0(*(undefined8 *)(param_1 + param_4 * 8 + 8),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1090633a4; end: 109063413; -[SCVideoTranscodingSessionSchedulerQueue pop] */

void FUN_1090633a4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be17d20(param_1,param_2,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010be17d20(param_1,param_2,*(undefined8 *)(param_1 + 0x10));
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      func_0x00010be17d20(param_1,param_2,*(undefined8 *)(param_1 + 8));
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
    }
  }
  _objc_retain();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 109063414; end: 109063483; -[SCVideoTranscodingSessionSchedulerQueue _firstSessionFromQueue:] */

void FUN_109063414(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010bf431c0(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c102e00(param_3,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12dc20(param_3,param_2,0);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 109063484; end: 1090634e7; -[SCVideoTranscodingSessionSchedulerQueue remove:] */

void FUN_109063484(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be8d3a0(param_1,param_2,param_3,*(undefined8 *)(param_1 + 0x18));
  if (((uVar1 & 1) == 0) &&
     (uVar1 = param_1, func_0x00010be8d3a0(param_1,param_2,param_3,*(undefined8 *)(param_1 + 0x10)),
     (uVar1 & 1) == 0)) {
    func_0x00010be8d3a0(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1090634e8; end: 1090635a3; -[SCVideoTranscodingSessionSchedulerQueue _removeSession:fromQueue:] */

undefined8 FUN_1090634e8(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010bf529e0();
  if (uVar2 != 0) {
    uVar2 = 0;
    do {
      uVar1 = param_4;
      func_0x00010c102e00(param_4,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      if ((uVar1 != 0) && (uVar1 == param_3)) {
        func_0x00010c12dc20(param_4,param_2,uVar2);
        _objc_release(uVar1);
        uVar3 = 1;
        goto LAB_109063580;
      }
      _objc_release(uVar1);
      uVar2 = uVar2 + 1;
      uVar1 = param_4;
      func_0x00010bf529e0();
    } while (uVar2 < uVar1);
  }
  uVar3 = 0;
LAB_109063580:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1090635a4; end: 1090635df; -[SCVideoTranscodingSessionSchedulerQueue .cxx_destruct] */

void FUN_1090635a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090635e0; end: 1090636b7; -[SCVideoTranscodingStallDetector initWithStallThreshold:checkInterval:eventBlock:] */

undefined1 *
FUN_1090635e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_112700138;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar4);
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 1090636b8; end: 1090636db; -[SCVideoTranscodingStallDetector _applicationDidEnterBackground:] */

void FUN_1090636b8(undefined8 param_1)

{
  _CACurrentMediaTime();
                    /* WARNING: Could not recover jumptable at 0x00010c0dba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_noteDidEnterBackgroundAtTime__1126148b8);
  return;
}



/* Entry: 1090636dc; end: 109063713; -[SCVideoTranscodingStallDetector noteDidEnterBackgroundAtTime:] */

void FUN_1090636dc(undefined8 param_1,long param_2)

{
  _os_unfair_lock_lock(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x48) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_2 + 0x20);
  return;
}



/* Entry: 109063714; end: 10906375b; -[SCVideoTranscodingStallDetector dealloc] */

void FUN_109063714(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x28));
  puStack_28 = PTR_PTR_112700138;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10906375c; end: 109063887; -[SCVideoTranscodingStallDetector start] */

void FUN_10906375c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _os_unfair_lock_lock(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) == 0) {
    _objc_initWeak(auStack_48,param_1);
    puVar1 = PTR_PTR_1126ae888;
    _objc_alloc();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = 0x11;
    _dispatch_get_global_queue(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0522e0(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar1;
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _os_unfair_lock_unlock(param_1 + 0x20);
  return;
}



/* Entry: 109063888; end: 1090638bb;  */

void FUN_109063888(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _CACurrentMediaTime();
  func_0x00010bf37f40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090638bc; end: 10906392b; -[SCVideoTranscodingStallDetector stop] */

void FUN_1090638bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _os_unfair_lock_lock(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_retain(uVar2);
  _objc_release(uVar2);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x20);
  func_0x00010c069d00(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10906392c; end: 10906396b; -[SCVideoTranscodingStallDetector markStage:] */

void FUN_10906392c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _CACurrentMediaTime();
  func_0x00010c0bbb40(param_1,param_2,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10906396c; end: 1090639c7; -[SCVideoTranscodingStallDetector markStage:detail:] */

void FUN_10906396c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _CACurrentMediaTime();
  func_0x00010c0bbb40(param_1,param_2,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1090639c8; end: 109063b1b; -[SCVideoTranscodingStallDetector markStage:detail:atTime:] */

void FUN_1090639c8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  double dVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _os_unfair_lock_lock(param_2 + 0x20);
  if (*(char *)(param_2 + 0x58) == '\x01') {
    lVar3 = *(long *)(param_2 + 0x30);
    _objc_retain(lVar3);
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_2 + 0x50);
    dVar7 = param_1 - *(double *)(param_2 + 0x40);
    bVar6 = *(double *)(param_2 + 0x40) < *(double *)(param_2 + 0x48);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  else {
    uVar5 = 0;
    bVar6 = false;
    uVar4 = 0;
    lVar3 = 0;
    dVar7 = 0.0;
  }
  uVar1 = param_4;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_5;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = uVar1;
  _objc_release(uVar2);
  *(double *)(param_2 + 0x40) = param_1;
  *(long *)(param_2 + 0x50) = *(long *)(param_2 + 0x50) + 1;
  _os_unfair_lock_unlock(param_2 + 0x20);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(param_2 + 0x18) + 0x10))
              (dVar7,*(long *)(param_2 + 0x18),1,lVar3,uVar4,uVar5,bVar6);
  }
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 109063b1c; end: 109063bbb; -[SCVideoTranscodingStallDetector stalledStageAtTime:stalledSeconds:didEnterBackgroundInGap:] */

void FUN_109063b1c(double param_1,long param_2,undefined8 param_3,double *param_4,long param_5)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_2 + 0x20);
  if (((*(long *)(param_2 + 0x28) == 0) || (*(long *)(param_2 + 0x50) == 0)) ||
     (param_1 = param_1 - *(double *)(param_2 + 0x40), param_1 < *(double *)(param_2 + 8))) {
    uVar1 = 0;
  }
  else {
    if (param_4 != (double *)0x0) {
      *param_4 = param_1;
    }
    if (param_5 != 0) {
      *(bool *)param_5 = *(double *)(param_2 + 0x40) < *(double *)(param_2 + 0x48);
    }
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    _objc_retain(uVar1);
  }
  _os_unfair_lock_unlock(param_2 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109063bbc; end: 109063c9b; -[SCVideoTranscodingStallDetector checkForStallAtTime:] */

void FUN_109063bbc(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  _os_unfair_lock_lock(param_2 + 0x20);
  lVar3 = *(long *)(param_2 + 0x50);
  if ((lVar3 != 0) && ((*(byte *)(param_2 + 0x58) & 1) == 0)) {
    dVar4 = *(double *)(param_2 + 0x40);
    param_1 = param_1 - dVar4;
    if (*(double *)(param_2 + 8) <= param_1) {
      *(undefined1 *)(param_2 + 0x58) = 1;
      uVar1 = *(undefined8 *)(param_2 + 0x30);
      uVar2 = *(undefined8 *)(param_2 + 0x38);
      dVar5 = *(double *)(param_2 + 0x48);
      _objc_retain(uVar2);
      _objc_retain(uVar1);
      _os_unfair_lock_unlock(param_2 + 0x20);
      (**(code **)(*(long *)(param_2 + 0x18) + 0x10))
                (param_1,*(long *)(param_2 + 0x18),0,uVar1,uVar2,lVar3,dVar4 < dVar5);
      _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_2 + 0x20);
  return;
}



/* Entry: 109063c9c; end: 109063ce3; -[SCVideoTranscodingStallDetector .cxx_destruct] */

void FUN_109063c9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 109063ce4; end: 109063dff; -[SCVideoEncoder initWithPerformer:outputURL:settings:circumstanceEngine:delegate:] */

long FUN_109063ce4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c035040(param_1,param_2,param_3,param_5,param_6,param_7);
  if (param_1 != 0) {
    uVar1 = param_4;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    _objc_release(uVar2);
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 109063e00; end: 109063f1f; -[SCVideoEncoder initWithPerformer:settings:segmentDataOutputBlock:circumstanceEngine:delegate:] */

long FUN_109063e00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c035040(param_1,param_2,param_3,param_4,param_6,param_7);
  if (param_1 != 0) {
    uVar1 = param_5;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x118);
    *(undefined8 *)(param_1 + 0x118) = uVar1;
    _objc_release(uVar2);
    *(undefined8 *)(param_1 + 0x110) = 1;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 109063f20; end: 10906411f; -[SCVideoEncoder initWithPerformer:settings:circumstanceEngine:delegate:] */

undefined1 *
FUN_109063f20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar3 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112700140;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar3 + 8);
    *(undefined8 *)((long)puVar3 + 8) = param_3;
    _objc_release(uVar4);
    _objc_storeWeak((undefined1 *)((long)puVar3 + 0x10),param_6);
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar3 + 0x18);
    *(undefined8 *)((long)puVar3 + 0x18) = param_4;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar3 + 0x28);
    *(undefined8 *)((long)puVar3 + 0x28) = param_5;
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126dd208;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar3 + 0x30);
    *(undefined **)((long)puVar3 + 0x30) = puVar5;
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126b44c8;
    _objc_alloc();
    func_0x00010c030dc0();
    uVar4 = *(undefined8 *)((long)puVar3 + 0x50);
    *(undefined **)((long)puVar3 + 0x50) = puVar5;
    _objc_release(uVar4);
    puVar5 = PTR__kCMTimeInvalid_110348648;
    uVar4 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
    *(undefined8 *)((long)puVar3 + 0xe8) = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
    *(undefined8 *)((long)puVar3 + 0xe0) = uVar4;
    *(undefined8 *)((long)puVar3 + 0xf0) = *(undefined8 *)(puVar5 + 0x10);
    uVar4 = 1;
    _dispatch_semaphore_create();
    uVar6 = *(undefined8 *)((long)puVar3 + 0x100);
    *(undefined8 *)((long)puVar3 + 0x100) = uVar4;
    _objc_release(uVar6);
    uVar1 = (undefined1)*(undefined8 *)((long)puVar3 + 0x28);
    func_0x00010bf1f440();
    *(undefined1 *)((long)puVar3 + 0xc0) = uVar1;
    iVar2 = (int)*(undefined8 *)((long)puVar3 + 0x28);
    func_0x00010c067f00();
    *(double *)((long)puVar3 + 200) = (double)iVar2 / 1000.0;
    *(undefined4 *)((long)puVar3 + 0xd4) = 0;
    *(undefined1 *)((long)puVar3 + 0x128) = 0;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar3;
}



/* Entry: 109064120; end: 10906419b; -[SCVideoEncoder dealloc] */

void FUN_109064120(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c281b20(*(undefined8 *)(param_1 + 0x50));
  func_0x00010bddf760(param_1);
  puStack_28 = PTR_PTR_112700140;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10906419c; end: 109064a37; -[SCVideoEncoder prepareEncodingWithFirstAudioSampleBuffer:firstVideoFrame:videoFrameProcessingBlock:shouldFailEncodingForIPPError:error:] */

long FUN_10906419c(long param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined8 param_5,long param_6,undefined1 param_7,long *param_8)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 auStack_108 [24];
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  lVar2 = param_6;
  func_0x00010bf51e00();
  uVar6 = *(undefined8 *)(param_1 + 0xf8);
  *(long *)(param_1 + 0xf8) = lVar2;
  _objc_release(uVar6);
  *(undefined1 *)(param_1 + 0xc1) = param_7;
  if (param_8 != (long *)0x0) {
    *param_8 = 0;
  }
  if (*(long *)(param_1 + 0x110) == 1) {
    puVar1 = PTR__OBJC_CLASS___AVAssetWriter_1126bf5a8;
    _objc_alloc();
    puVar7 = PTR__OBJC_CLASS___UTType_1126dd210;
    func_0x00010c27e080(PTR__OBJC_CLASS___UTType_1126dd210);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c003d20();
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar1;
    _objc_release(uVar6);
LAB_1090642a8:
    _objc_release(puVar7);
  }
  else if (*(long *)(param_1 + 0x110) == 0) {
    puVar1 = PTR__OBJC_CLASS___AVAssetWriter_1126bf5a8;
    _objc_alloc();
    func_0x00010c057a20();
    puVar7 = *(undefined **)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar1;
    goto LAB_1090642a8;
  }
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar2 = *param_8;
  if (lVar2 == 0) {
    if (param_3 == 0) {
LAB_10906437c:
      lVar2 = param_1;
      func_0x00010bee8c00(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(ulong *)(param_1 + 0x38);
      func_0x00010bf2c4a0();
      if ((uVar3 & 1) != 0) {
        puVar1 = PTR__OBJC_CLASS___AVAssetWriterInput_1126bf5b0;
        func_0x00010bf0ba80();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(param_1 + 0x48);
        *(undefined **)(param_1 + 0x48) = puVar1;
        _objc_release(uVar6);
        lVar8 = *(long *)(param_1 + 0x18);
        if (lVar8 == 0) goto LAB_1090648dc;
        uStack_b8 = *(ulong *)(lVar8 + 0x70);
        uStack_c0 = *(undefined8 *)(lVar8 + 0x68);
        uStack_a8 = *(undefined8 *)(lVar8 + 0x80);
        uStack_b0 = *(undefined8 *)(lVar8 + 0x78);
        uStack_98 = *(undefined8 *)(lVar8 + 0x90);
        uStack_a0 = *(undefined8 *)(lVar8 + 0x88);
        goto LAB_1090643f8;
      }
      if (param_3 != 0) {
        _CFRelease(param_3);
      }
      if (param_4 != (undefined *)0x0) {
        _CFRelease(param_4);
      }
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      goto LAB_109064750;
    }
    lVar2 = param_1;
    func_0x00010bee8be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(ulong *)(param_1 + 0x38);
    func_0x00010bf2c4a0();
    if ((uVar3 & 1) == 0) {
      _CFRelease(param_3);
      if (param_4 != (undefined *)0x0) {
        _CFRelease(param_4);
      }
    }
    else {
      puVar1 = PTR__OBJC_CLASS___AVAssetWriterInput_1126bf5b0;
      func_0x00010bf0ba80();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      *(undefined **)(param_1 + 0x40) = puVar1;
      _objc_release(uVar6);
      uVar3 = *(ulong *)(param_1 + 0x38);
      func_0x00010bf2c460();
      if ((uVar3 & 1) != 0) {
        func_0x00010bef93a0(*(undefined8 *)(param_1 + 0x38));
        _objc_release(lVar2);
        goto LAB_10906437c;
      }
      _CFRelease(param_3);
      if (param_4 != (undefined *)0x0) {
        _CFRelease(param_4);
      }
    }
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
  }
  else {
    FUN_1090541d8();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    param_4 = puVar1;
  }
  *param_8 = (long)puVar7;
  _objc_release(lVar2);
  param_3 = 0;
  while (_objc_release(param_6), *(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
LAB_1090648dc:
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
LAB_1090643f8:
    uStack_e8 = uStack_b8;
    uStack_f0 = uStack_c0;
    uStack_d8 = uStack_a8;
    uStack_e0 = uStack_b0;
    uStack_c8 = uStack_98;
    uStack_d0 = uStack_a0;
    func_0x00010c219960(*(undefined8 *)(param_1 + 0x48));
    uVar3 = *(ulong *)(param_1 + 0x38);
    func_0x00010bf2c460();
    if ((uVar3 & 1) == 0) {
      if (param_3 != 0) {
        _CFRelease(param_3);
      }
      if (param_4 != (undefined *)0x0) {
        _CFRelease(param_4);
      }
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
LAB_109064750:
      param_3 = 0;
      *param_8 = (long)puVar1;
    }
    else {
      func_0x00010bef93a0(*(undefined8 *)(param_1 + 0x38));
      func_0x00010c200aa0(*(undefined8 *)(param_1 + 0x38));
      if (*(long *)(param_1 + 0x18) == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(long *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      _objc_retain(lVar8);
      _objc_release(lVar8);
      if (lVar8 != 0) {
        puVar1 = PTR__OBJC_CLASS___AVMutableMetadataItem_1126d3518;
        func_0x00010c0cc520(PTR__OBJC_CLASS___AVMutableMetadataItem_1126d3518);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b6b40();
        func_0x00010c1b6ce0(puVar1);
        if (*(long *)(param_1 + 0x18) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x40);
        }
        _objc_retain(uVar6);
        uVar4 = uVar6;
        func_0x00010bdc17a0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220160(puVar1);
        _objc_release(uVar4);
        _objc_release(uVar6);
        uVar4 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010c0cc0c0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar4;
        func_0x00010bf09f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c73c0(*(undefined8 *)(param_1 + 0x38));
        _objc_release(uVar6);
        _objc_release(uVar4);
        _objc_release(puVar1);
      }
      if (*(long *)(param_1 + 0x110) == 1) {
        _CMSampleBufferGetOutputPresentationTimeStamp(&uStack_f0,param_4);
        func_0x00010c1d6fe0(*(undefined8 *)(param_1 + 0x38));
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (0.0 < *(double *)(*(long *)(param_1 + 0x18) + 0x58))) {
          _CMTimeMakeWithSeconds(auStack_108,uStack_e8 & 0xffffffff);
          func_0x00010c1e01e0(*(undefined8 *)(param_1 + 0x38));
        }
        func_0x00010c1acce0(*(undefined8 *)(param_1 + 0x38));
        func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x38));
      }
      if (param_6 == 0) {
        puVar1 = param_4;
        _CMSampleBufferGetImageBuffer(param_4);
        puVar7 = puVar1;
        _CVPixelBufferGetWidthOfPlane();
        _CVPixelBufferGetHeightOfPlane(puVar1,0);
        func_0x00010be22d20((double)puVar7,(double)puVar1,param_1);
        puVar1 = PTR_PTR_1126dd218;
        _objc_alloc(PTR_PTR_1126dd218);
        FUN_1090673f0();
        puVar7 = PTR_PTR_1126dd220;
        _objc_alloc();
        func_0x00010bff4680();
      }
      else {
        puVar1 = PTR_PTR_1126dd218;
        _objc_alloc(PTR_PTR_1126dd218);
        FUN_1090673f0();
        puVar7 = PTR_PTR_1126dd220;
        _objc_alloc();
        func_0x00010bff4680();
      }
      uVar6 = *(undefined8 *)(param_1 + 0x58);
      *(undefined **)(param_1 + 0x58) = puVar7;
      _objc_release(uVar6);
      _objc_release(puVar1);
      if (*(long *)(param_1 + 0x18) == 0) {
        param_8 = (long *)0x0;
      }
      else {
        param_8 = *(long **)(*(long *)(param_1 + 0x18) + 0x60);
      }
      _objc_retain(param_8);
      plVar5 = param_8;
      func_0x00010c08fa60();
      _objc_release(param_8);
      if (plVar5 != (long *)0x0) {
        param_8 = (long *)PTR__OBJC_CLASS___AVMutableMetadataItem_1126d3518;
        func_0x00010c0cc520();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b6b40();
        func_0x00010c1b6ce0(param_8);
        if (*(long *)(param_1 + 0x18) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x60);
        }
        _objc_retain(uVar6);
        func_0x00010c220160(param_8);
        _objc_release(uVar6);
        puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
        plStack_88 = param_8;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c73c0(*(undefined8 *)(param_1 + 0x38));
        _objc_release(puVar1);
        _objc_release(param_8);
      }
      *(long *)(param_1 + 0xd8) = param_3;
      param_3 = 1;
      *(undefined **)(param_1 + 0x60) = param_4;
      *(undefined8 *)(param_1 + 0x68) = param_5;
    }
    _objc_release(lVar2);
  }
  return param_3;
}



/* Entry: 109064a38; end: 109065747; -[SCVideoEncoder startEncodingWithVideoTranscodingFrameProvider:frameProviderPerformer:] */

void FUN_109064a38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_250;
  undefined8 uStack_248;
  code *pcStack_240;
  undefined *puStack_238;
  undefined1 auStack_230 [8];
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 *puStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  undefined *puStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  ulong *puStack_d0;
  ulong uStack_c8;
  ulong *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  char *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x60) == 0) {
    lVar3 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar3);
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c299ee0(lVar3);
  }
  else {
    _CMSampleBufferGetOutputPresentationTimeStamp(&uStack_c8);
    *(ulong **)(param_1 + 0x78) = puStack_c0;
    *(ulong *)(param_1 + 0x70) = uStack_c8;
    *(undefined8 *)(param_1 + 0x80) = uStack_b8;
    if ((*(byte *)(param_1 + 0x7c) & 1) == 0) {
      lVar3 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar3);
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c299ee0(lVar3);
    }
    else {
      uVar2 = *(ulong *)(param_1 + 0x38);
      func_0x00010c251d20();
      if ((uVar2 & 1) != 0) {
        *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x78);
        *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x70);
        *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x80);
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c8 = 0;
        pcStack_b0 = FUN_109065748;
        uStack_a8 = 0x10906575c;
        uStack_b8 = 0x4812000000;
        uStack_90 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
        uStack_98 = *(undefined8 *)PTR__kCMTimeZero_110348670;
        uStack_88 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
        pcStack_a0 = "";
        puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_f0 = 0xc2000000;
        pcStack_e8 = FUN_109065760;
        puStack_e0 = &UNK_110a14000;
        puStack_c0 = &uStack_c8;
        _objc_retain(param_3);
        uStack_d8 = param_3;
        puStack_d0 = &uStack_c8;
        func_0x00010c0f8240(param_4);
        puStack_198 = *(undefined8 **)(param_1 + 0x78);
        uStack_1a0 = *(undefined8 *)(param_1 + 0x70);
        uStack_190 = *(undefined8 *)(param_1 + 0x80);
        uStack_108 = puStack_c0[7];
        uStack_110 = puStack_c0[6];
        uStack_100 = puStack_c0[8];
        _CMTimeAdd(&uStack_130,&uStack_1a0,&uStack_110);
        *(undefined8 **)(param_1 + 0xe8) = puStack_128;
        *(undefined8 *)(param_1 + 0xe0) = uStack_130;
        *(undefined8 *)(param_1 + 0xf0) = uStack_120;
        uVar11 = *(undefined8 *)(param_1 + 0x50);
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e0760(uVar11);
        _objc_release(puVar6);
        puStack_128 = *(undefined8 **)(param_1 + 0x78);
        uStack_130 = *(undefined8 *)(param_1 + 0x70);
        uStack_120 = *(undefined8 *)(param_1 + 0x80);
        func_0x00010c2508a0(*(undefined8 *)(param_1 + 0x38));
        uStack_130 = 0;
        uStack_120 = 0x2020000000;
        lVar3 = *(long *)(param_1 + 0x60);
        uStack_118 = lVar3 == 0;
        puStack_128 = &uStack_130;
        if (*(long *)(param_1 + 0xf8) == 0) {
LAB_10906520c:
          lVar4 = 0;
          _dispatch_semaphore_create();
          uVar10 = 0;
          _dispatch_semaphore_create();
          _objc_retain();
          uVar11 = *(undefined8 *)(param_1 + 0x108);
          *(undefined8 *)(param_1 + 0x108) = uVar10;
          _objc_release(uVar11);
          puStack_178 = puVar1;
          uStack_170 = 0xc2000000;
          pcStack_168 = FUN_1090657d0;
          puStack_160 = &UNK_110ad6718;
          _objc_retain(lVar4);
          lStack_158 = lVar4;
          lStack_150 = param_1;
          _objc_retain(param_3);
          uStack_148 = param_3;
          _objc_retain(uVar10);
          puStack_138 = &uStack_130;
          uVar11 = param_4;
          uStack_140 = uVar10;
          func_0x00010c0f7fc0();
          _dispatch_group_create();
          if (*(long *)(param_1 + 0xd8) != 0) {
            _dispatch_group_enter(uVar11);
            puVar1 = PTR_PTR_1126ae790;
            _objc_alloc(PTR_PTR_1126ae790);
            puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c021520(puVar1);
            _objc_release(puVar6);
            uStack_1a0 = 0;
            uStack_190 = 0x2020000000;
            uStack_188 = 0;
            uVar13 = *(undefined8 *)(param_1 + 0x40);
            puVar6 = puVar1;
            puStack_198 = &uStack_1a0;
            func_0x00010c11de00(puVar1);
            _objc_retainAutoreleasedReturnValue();
            puStack_1e0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_1d8 = 0xc2000000;
            pcStack_1d0 = FUN_109065ac0;
            puStack_1c8 = &UNK_1108972d8;
            lStack_1c0 = param_1;
            _objc_retain(param_3);
            uStack_1b8 = param_3;
            puStack_1a8 = &uStack_1a0;
            _objc_retain(uVar11);
            uStack_1b0 = uVar11;
            func_0x00010c135d80(uVar13);
            _objc_release(puVar6);
            _objc_release(uStack_1b0);
            _objc_release(uStack_1b8);
            __Block_object_dispose(&uStack_1a0,8);
            _objc_release(puVar1);
            puVar1 = PTR___NSConcreteStackBlock_11034bd00;
          }
          _dispatch_group_enter(uVar11);
          uVar12 = *(undefined8 *)(param_1 + 0x48);
          uVar13 = *(undefined8 *)(param_1 + 8);
          func_0x00010c11de00(uVar13);
          _objc_retainAutoreleasedReturnValue();
          uStack_220 = 0xc2000000;
          pcStack_218 = FUN_109065b98;
          puStack_210 = &UNK_110ad6718;
          puStack_1e8 = &uStack_130;
          puStack_228 = puVar1;
          lStack_208 = param_1;
          _objc_retain(uVar10);
          uStack_200 = uVar10;
          _objc_retain(uVar11);
          uStack_1f8 = uVar11;
          _objc_retain(lVar4);
          lStack_1f0 = lVar4;
          func_0x00010c135d80(uVar12);
          _objc_release(uVar13);
          _objc_initWeak(&uStack_1a0,param_1);
          uVar13 = *(undefined8 *)(param_1 + 8);
          func_0x00010c11de00(uVar13);
          _objc_retainAutoreleasedReturnValue();
          uStack_248 = 0xc2000000;
          pcStack_240 = FUN_109065d64;
          puStack_238 = &UNK_110876b10;
          puStack_250 = puVar1;
          _objc_copyWeak(auStack_230,&uStack_1a0);
          func_0x000107c27d98(uVar11,uVar13,&puStack_250);
          _objc_release(uVar13);
          _objc_destroyWeak(auStack_230);
          _objc_destroyWeak(&uStack_1a0);
          _objc_release(lStack_1f0);
          _objc_release(uStack_1f8);
          _objc_release(uStack_200);
          _objc_release(uVar11);
          _objc_release(uStack_140);
          _objc_release(uStack_148);
          _objc_release(lStack_158);
          _objc_release(uVar10);
        }
        else {
          _CMSampleBufferGetImageBuffer();
          lVar5 = param_1;
          func_0x00010bdf0ec0();
          *(long *)(param_1 + 0x88) = lVar5;
          lVar4 = *(long *)(param_1 + 0xf8);
          uStack_190 = *(undefined8 *)(param_1 + 0x80);
          puStack_198 = *(undefined8 **)(param_1 + 0x78);
          uStack_1a0 = *(undefined8 *)(param_1 + 0x70);
          (**(code **)(lVar4 + 0x10))(lVar4,lVar3,lVar5,*(undefined8 *)(param_1 + 0x68),&uStack_1a0)
          ;
          _objc_retainAutoreleasedReturnValue();
          if ((*(char *)(param_1 + 0xc1) != '\x01') || (lVar4 == 0)) {
            _objc_release(lVar4);
            goto LAB_10906520c;
          }
          func_0x00010bde2c00(param_1);
          func_0x00010bf2f520(*(undefined8 *)(param_1 + 0x38));
        }
        _objc_release(lVar4);
        __Block_object_dispose(&uStack_130,8);
        _objc_release(uStack_d8);
        __Block_object_dispose(&uStack_c8,8);
        goto LAB_1090651d0;
      }
      lVar3 = *(long *)(param_1 + 0x38);
      func_0x00010bf987e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      FUN_109053f70(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(puVar1);
      _objc_release(lVar5);
      lVar5 = lVar3;
      func_0x00010c292820();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar5);
      if (lVar4 != 0) {
        lVar5 = lVar3;
        func_0x00010c292820();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bf3ec40(lVar4);
        func_0x00010c0df780(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(puVar6);
        lVar5 = lVar4;
        func_0x00010bf87dc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(lVar5);
        _objc_release(lVar4);
      }
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c252d60(*(undefined8 *)(param_1 + 0x38));
      func_0x00010c0df780(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(puVar6);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(puVar6);
      lVar5 = param_1;
      func_0x00010bee8c00();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 != 0) {
        lVar4 = lVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(lVar4);
        lVar4 = lVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(lVar4);
        lVar4 = lVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(lVar4);
      }
      if ((*(long *)(param_1 + 0x110) == 0) && (lVar4 = *(long *)(param_1 + 0x20), lVar4 != 0)) {
        func_0x00010c0f5800();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar4;
        func_0x00010c25ce80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        uStack_c8 = uStack_c8 & 0xffffffffffffff00;
        puVar8 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x00010bf69bc0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010bfacc00();
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(puVar6);
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar11 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c0f5800(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfacbe0(puVar8);
        func_0x00010c0df6e0(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(puVar6);
        _objc_release(uVar11);
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (((uint)puVar9 & (uint)(byte)uStack_c8) == 1) {
          func_0x00010c083da0(puVar8);
          func_0x00010c0df6e0(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1);
          _objc_release(puVar6);
        }
        _objc_release(puVar8);
        _objc_release(lVar7);
      }
      param_1 = param_1 + 0x10;
      _objc_loadWeakRetained(param_1);
      puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
      puVar8 = puVar1;
      func_0x00010bf51e00(puVar1);
      func_0x00010bf99240(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c299ee0(param_1);
      _objc_release(puVar6);
      _objc_release(puVar8);
      _objc_release(param_1);
      _objc_release(lVar5);
    }
  }
  _objc_release(puVar1);
  _objc_release(lVar3);
LAB_1090651d0:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 109065748; end: 10906575f;  */

void FUN_109065748(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}



/* Entry: 109065760; end: 1090657cf;  */

void FUN_109065760(long param_1)

{
  long lVar1;
  undefined8 uStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (func_0x00010bf13580(&uStack_38), (uStack_30 & 0x100000000) != 0)) {
    if (*(long *)(param_1 + 0x20) == 0) {
      uStack_38 = 0;
      uStack_30 = 0;
      uStack_28 = 0;
    }
    else {
      func_0x00010bf13580(&uStack_38);
    }
    lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    *(ulong *)(lVar1 + 0x38) = uStack_30;
    *(undefined8 *)(lVar1 + 0x30) = uStack_38;
    *(undefined8 *)(lVar1 + 0x40) = uStack_28;
  }
  return;
}



/* Entry: 1090657d0; end: 109065abf;  */

void FUN_1090657d0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar4 = param_1;
  while( true ) {
    _objc_autoreleasePoolPush();
    _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
    lVar2 = *(long *)(param_1 + 0x28);
    if (0.0 < *(double *)(lVar2 + 200)) break;
    uStack_48 = *(undefined8 *)(lVar2 + 0x78);
    uStack_50 = *(ulong *)(lVar2 + 0x70);
    uStack_40 = *(undefined8 *)(lVar2 + 0x80);
    func_0x00010be12de0();
    lVar6 = *(long *)(param_1 + 0x28);
    *(long *)(lVar6 + 0x90) = lVar2;
    *(undefined8 *)(lVar6 + 0x98) = param_2;
LAB_109065860:
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x90);
    if (lVar2 != 0) {
      _CMSampleBufferGetOutputPresentationTimeStamp(&uStack_50,lVar2);
      lVar6 = *(long *)(param_1 + 0x28);
      *(undefined8 *)(lVar6 + 0xa8) = uStack_48;
      *(ulong *)(lVar6 + 0xa0) = uStack_50;
      *(undefined8 *)(lVar6 + 0xb0) = uStack_40;
      lVar6 = *(long *)(param_1 + 0x28);
      if (*(long *)(lVar6 + 0x100) != 0) {
        _dispatch_semaphore_wait(*(long *)(lVar6 + 0x100),0xffffffffffffffff);
        lVar6 = *(long *)(param_1 + 0x28);
      }
      if (*(long *)(lVar6 + 0xf8) != 0) {
        lVar3 = *(long *)(lVar6 + 0x38);
        func_0x00010c252d60();
        lVar6 = *(long *)(param_1 + 0x28);
        if (lVar3 == 1) {
          func_0x00010bdf0ec0();
          *(long *)(*(long *)(param_1 + 0x28) + 0xb8) = lVar6;
          _CMSampleBufferGetImageBuffer(lVar2);
          lVar3 = *(long *)(param_1 + 0x28);
          lVar6 = *(long *)(lVar3 + 0xf8);
          uStack_40 = *(undefined8 *)(lVar3 + 0xb0);
          uStack_48 = *(undefined8 *)(lVar3 + 0xa8);
          uStack_50 = *(ulong *)(lVar3 + 0xa0);
          (**(code **)(lVar6 + 0x10))
                    (lVar6,lVar2,*(undefined8 *)(lVar3 + 0xb8),*(undefined8 *)(lVar3 + 0x98),
                     &uStack_50);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = *(long *)(param_1 + 0x28);
          if ((*(char *)(lVar2 + 0xc1) == '\x01') && (lVar6 != 0)) {
            if (*(long *)(lVar2 + 0x100) != 0) {
              _dispatch_semaphore_signal(*(long *)(lVar2 + 0x100));
              lVar2 = *(long *)(param_1 + 0x28);
            }
            func_0x00010bde2c00(lVar2);
            func_0x00010bf2f520(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38));
            _objc_release(lVar6);
            goto LAB_109065a58;
          }
          _objc_release(lVar6);
          lVar6 = *(long *)(param_1 + 0x28);
        }
      }
      if (*(long *)(lVar6 + 0x100) != 0) {
        _dispatch_semaphore_signal();
      }
    }
    param_2 = 0xffffffffffffffff;
    _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 0x38));
    lVar2 = *(long *)(param_1 + 0x28);
    *(undefined8 *)(lVar2 + 0x68) = *(undefined8 *)(lVar2 + 0x98);
    *(undefined8 *)(lVar2 + 0x60) = *(undefined8 *)(lVar2 + 0x90);
    *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x88) =
         *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xb8);
    *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xb8) = 0;
    lVar2 = *(long *)(param_1 + 0x28);
    *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)(lVar2 + 0xa8);
    *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(lVar2 + 0xa0);
    *(undefined8 *)(lVar2 + 0x80) = *(undefined8 *)(lVar2 + 0xb0);
    _objc_autoreleasePoolPop(lVar4);
    lVar4 = *(long *)(param_1 + 0x28);
    if ((((*(long *)(lVar4 + 0x60) == 0) && (*(long *)(lVar4 + 0x88) == 0)) ||
        ((*(byte *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) & 1) != 0)) ||
       (func_0x00010bf937a0(), (int)lVar4 != 0)) goto LAB_109065a60;
  }
  uStack_50 = uStack_50 & 0xffffffffffffff00;
  func_0x00010be12e00();
  lVar6 = *(long *)(param_1 + 0x28);
  *(long *)(lVar6 + 0x90) = lVar2;
  *(undefined8 *)(lVar6 + 0x98) = param_2;
  if ((char)uStack_50 != '\x01') goto LAB_109065860;
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010bddec60();
  if (iVar1 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde2c00(uVar7);
    _objc_release(puVar5);
  }
  func_0x00010bf2f520(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38));
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 0x38),0xffffffffffffffff);
LAB_109065a58:
  _objc_autoreleasePoolPop(lVar4);
LAB_109065a60:
  lVar4 = *(long *)(param_1 + 0x28);
  if (*(long *)(lVar4 + 0x60) != 0) {
    _CFRelease();
    lVar4 = *(long *)(param_1 + 0x28);
  }
  *(undefined8 *)(lVar4 + 0x60) = 0;
  _CVPixelBufferRelease(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x88));
  *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x88) = 0;
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 109065ac0; end: 109065b97;  */

void FUN_109065ac0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(long *)(*(long *)(param_1 + 0x20) + 0xd8) != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
    func_0x00010c252d60();
    if (lVar1 == 1) {
      func_0x00010bf06fe0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40),param_2,
                          *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd8));
      lVar3 = *(long *)(param_1 + 0x20);
      lVar1 = lVar3;
      func_0x00010c0d4440(lVar3);
      func_0x00010c1ca8e0(lVar3,param_2,lVar1 + 1);
      _CFRelease(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd8));
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf66fa0();
      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd8) = uVar2;
      goto LAB_109065b68;
    }
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar1 + 0xd8) != 0) {
    _CFRelease();
    lVar1 = *(long *)(param_1 + 0x20);
  }
  *(undefined8 *)(lVar1 + 0xd8) = 0;
  func_0x00010c0bb0a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40));
LAB_109065b68:
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x30));
    return;
  }
  return;
}



/* Entry: 109065b98; end: 109065d63;  */

void FUN_109065b98(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) == '\x01') {
    _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x30));
    return;
  }
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 0x38),0xffffffffffffffff);
  lVar3 = *(long *)(param_1 + 0x20);
  if ((*(long *)(lVar3 + 0x60) != 0) || (*(long *)(lVar3 + 0x88) != 0)) {
    lVar3 = *(long *)(lVar3 + 0x38);
    func_0x00010c252d60();
    if (lVar3 == 1) {
      lVar3 = *(long *)(param_1 + 0x20);
      if (*(long *)(lVar3 + 0x88) == 0) {
        func_0x00010bdcd640();
      }
      else {
        uStack_38 = *(undefined8 *)(lVar3 + 0x78);
        uStack_40 = *(undefined8 *)(lVar3 + 0x70);
        uStack_30 = *(undefined8 *)(lVar3 + 0x80);
        func_0x00010bf06f60(*(undefined8 *)(lVar3 + 0x58));
      }
      lVar3 = *(long *)(param_1 + 0x20) + 0x10;
      _objc_loadWeakRetained(lVar3);
      lVar2 = *(long *)(param_1 + 0x20);
      uStack_38 = *(undefined8 *)(lVar2 + 0x78);
      uStack_40 = *(undefined8 *)(lVar2 + 0x70);
      uStack_30 = *(undefined8 *)(lVar2 + 0x80);
      func_0x00010c299f00();
      _objc_release(lVar3);
      goto LAB_109065cf0;
    }
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = 1;
  func_0x00010c0bb0a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48));
  lVar3 = *(long *)(param_1 + 0x20);
  if (((*(byte *)(lVar3 + 0x7c) & 1) != 0) && ((*(byte *)(lVar3 + 0xec) & 1) != 0)) {
    uStack_38 = *(undefined8 *)(lVar3 + 0xe8);
    uStack_40 = *(undefined8 *)(lVar3 + 0xe0);
    uStack_30 = *(undefined8 *)(lVar3 + 0xf0);
    uStack_58 = *(undefined8 *)(lVar3 + 0x78);
    uStack_60 = *(undefined8 *)(lVar3 + 0x70);
    uStack_50 = *(undefined8 *)(lVar3 + 0x80);
    puVar1 = &uStack_40;
    _CMTimeCompare(puVar1,&uStack_60);
    if (-1 < (int)puVar1) goto LAB_109065cf0;
    lVar3 = *(long *)(param_1 + 0x20);
  }
  *(undefined8 *)(lVar3 + 0xe8) = *(undefined8 *)(lVar3 + 0x78);
  *(undefined8 *)(lVar3 + 0xe0) = *(undefined8 *)(lVar3 + 0x70);
  *(undefined8 *)(lVar3 + 0xf0) = *(undefined8 *)(lVar3 + 0x80);
LAB_109065cf0:
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar3 + 0x60) != 0) {
    _CFRelease();
    lVar3 = *(long *)(param_1 + 0x20);
  }
  *(undefined8 *)(lVar3 + 0x60) = 0;
  _CVPixelBufferRelease(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88));
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88) = 0;
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x28));
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) == '\x01') {
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x30));
  }
  return;
}



/* Entry: 109065d64; end: 109065dab;  */

void FUN_109065d64(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bde2be0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109065dac; end: 109065df3; -[SCVideoEncoder cancelEncoding] */

void FUN_109065dac(long param_1)

{
  if (*(long *)(param_1 + 0x100) != 0) {
    _dispatch_semaphore_wait(*(long *)(param_1 + 0x100),0xffffffffffffffff);
  }
  func_0x00010bf2f520(*(undefined8 *)(param_1 + 0x38));
  if (*(long *)(param_1 + 0x100) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__dispatch_semaphore_signal_11034c130)();
    return;
  }
  return;
}



/* Entry: 109065df4; end: 109065e7f; -[SCVideoEncoder assetWriter:didOutputSegmentData:segmentType:segmentReport:] */

void FUN_109065df4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  
  _objc_retain(param_4);
  if (param_5 == 1) {
    lVar1 = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  else if (param_5 == 2) {
    lVar1 = *(long *)(param_1 + 0x120) + 1;
    *(long *)(param_1 + 0x120) = lVar1;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x120);
  }
  (**(code **)(*(long *)(param_1 + 0x118) + 0x10))(*(long *)(param_1 + 0x118),param_4,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 109065e80; end: 10906606b; -[SCVideoEncoder _completeEncoding] */

void FUN_109065e80(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar2 = *(long *)(param_1 + 0x38);
  func_0x00010c252d60();
  if (lVar2 == 1) {
    if ((*(byte *)(param_1 + 0xec) & 1) == 0) {
      lVar2 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar2);
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010bf987e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      FUN_109053f70();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c299ee0(lVar2);
      _objc_release(puVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
    iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
    func_0x00010bf1f440();
    uStack_58 = *(undefined8 *)(param_1 + 0xe8);
    uStack_60 = *(undefined8 *)(param_1 + 0xe0);
    uStack_50 = *(undefined8 *)(param_1 + 0xf0);
    if (iVar1 != 0) {
      uStack_78 = *(undefined8 *)(param_1 + 0xe8);
      uStack_80 = *(undefined8 *)(param_1 + 0xe0);
      uStack_70 = *(undefined8 *)(param_1 + 0xf0);
      _CMTimeMake(auStack_98,1,*(undefined4 *)(param_1 + 0xe8));
      _CMTimeAdd(&uStack_60,&uStack_80,auStack_98);
    }
    uStack_78 = uStack_58;
    uStack_80 = uStack_60;
    uStack_70 = uStack_50;
    func_0x00010bf95400(*(undefined8 *)(param_1 + 0x38));
    func_0x00010bfaff80(*(undefined8 *)(param_1 + 0x38));
  }
  return;
}



/* Entry: 10906606c; end: 1090660b7;  */

void FUN_10906606c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c299f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


