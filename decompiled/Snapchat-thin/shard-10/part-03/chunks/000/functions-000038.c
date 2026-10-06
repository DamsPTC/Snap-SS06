/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107d9f634; end: 107d9f63b; -[SCStoryExporter backgroundTaskId] */

undefined8 FUN_107d9f634(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 107d9f63c; end: 107d9f643; -[SCStoryExporter setBackgroundTaskId:] */

void FUN_107d9f63c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 107d9f644; end: 107d9f64b; -[SCStoryExporter stories] */

undefined8 FUN_107d9f644(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 107d9f64c; end: 107d9f653; -[SCStoryExporter setStories:] */

void FUN_107d9f64c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107d9f654; end: 107d9f65b; -[SCStoryExporter urls] */

undefined8 FUN_107d9f654(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 107d9f65c; end: 107d9f68b; -[SCStoryExporter setUrls:] */

void FUN_107d9f65c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d9f68c; end: 107d9f693; -[SCStoryExporter exportProgressTimer] */

undefined8 FUN_107d9f68c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 107d9f694; end: 107d9f6c3; -[SCStoryExporter setExportProgressTimer:] */

void FUN_107d9f694(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d9f6c4; end: 107d9f6cb; -[SCStoryExporter exportSession] */

undefined8 FUN_107d9f6c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 107d9f6cc; end: 107d9f6fb; -[SCStoryExporter setExportSession:] */

void FUN_107d9f6cc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107d9f6fc; end: 107d9f703; -[SCStoryExporter processingStarted] */

undefined1 FUN_107d9f6fc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x60);
}



/* Entry: 107d9f704; end: 107d9f70b; -[SCStoryExporter setProcessingStarted:] */

void FUN_107d9f704(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 107d9f70c; end: 107d9f7c7; -[SCStoryExporter .cxx_destruct] */

void FUN_107d9f70c(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d9f7c8; end: 107d9f927;  */

void FUN_107d9f7c8(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  puVar2 = PTR_PTR_1126af180;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126af178;
  func_0x00010c22b900();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e3d898;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e3d898,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110ebd938;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ebd938,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar3);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar1);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar6 = puVar2;
  _objc_retain();
  func_0x0001005c6500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bfad300(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107d9f928; end: 107d9f9cb;  */

void FUN_107d9f928(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  _objc_retain();
  func_0x0001005c6500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110ebd958);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010bfad300(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107d9f9cc; end: 107d9fbe3;  */

void FUN_107d9f9cc(double param_1,double param_2,undefined *param_3,undefined *param_4,ulong param_5
                  ,ulong param_6)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain();
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010c23d0a0(param_3);
  puVar1 = param_4;
  func_0x00010854478c(param_4,0,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  if ((param_5 & 1) == 0) {
    _objc_retain(puVar1);
    puVar4 = puVar1;
  }
  else if (param_6 == 0) {
    func_0x00010c23d0a0(param_3);
    func_0x00010c23d0a0(param_3);
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    if (param_2 <= param_1) {
      param_2 = param_1;
    }
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    if (1728.0 <= param_2) {
      uVar5 = 0x4048000000000000;
    }
    else {
      uVar5 = 0x4044000000000000;
    }
    func_0x00010c12fbe0(uVar5,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    uVar2 = param_6;
    func_0x00010bf39800();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    if ((uVar2 & 1) == 0) {
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf1c920();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bf39860(param_6);
    dVar6 = (double)(long)(param_2 * 0.025 * 0.125);
    dVar7 = dVar6 * 8.0;
    func_0x00010bf39860(param_6);
    dVar6 = dVar6 + dVar7 * -2.0;
    puVar3 = param_3;
    func_0x00010c14e6c0(dVar6,dVar6,0x3ff0000000000000,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    param_3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c12fbe0(dVar7,PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_retain(param_3);
    _objc_release(puVar4);
    puVar4 = param_3;
  }
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107d9fbe4; end: 107d9fdef;  */

void FUN_107d9fbe4(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  
  _objc_retain(param_9);
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x00010853f31c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf58fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x0001080009e8();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c112160();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c29af00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c221d20(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x00010c1a8660(uVar2);
  func_0x00010c1f5d00(uVar2);
  func_0x00010c16bc20(uVar2);
  dVar5 = 0.0;
  if (param_1 != 0.0) {
    if (param_2 == 0.0) {
      dVar5 = INFINITY;
    }
    else {
      dVar5 = param_1 / param_2;
    }
  }
  func_0x00010c222080(dVar5,uVar2);
  if ((param_7 & 1) == 0) {
    func_0x00010c1d75e0(uVar2);
  }
  else {
    uVar1 = param_4;
    func_0x00010854478c(param_1,param_2,0x3ff0000000000000,0x3ff0000000000000,param_4,0,0,param_8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    func_0x00010c1d75e0(uVar2);
    _objc_release(uVar1);
    if ((int)param_8 == 0) goto LAB_107d9fdc4;
    uVar1 = param_9;
    func_0x00010bf39800(param_9);
    param_4 = 2;
    func_0x000109024c04(0x3f9999999999999a,2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c207b40(uVar2);
  }
  _objc_release(param_4);
LAB_107d9fdc4:
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107d9fdf0; end: 107d9fed3;  */

void FUN_107d9fdf0(double param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126d7d30;
  if (((param_3 != 0) && (param_4 != 0)) && (500.0 <= param_1)) {
    _objc_retain(param_4);
    _objc_retain(param_3);
    _objc_opt_new(puVar1);
    func_0x00010c1c58e0();
    _objc_release(param_3);
    func_0x00010c1e8080(puVar1);
    func_0x00010c1b92e0(puVar1);
    lVar2 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    func_0x00010c0b2e60(lVar2);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 107d9fed4; end: 107da032b;  */

undefined ** FUN_107d9fed4(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  long lVar17;
  long lVar18;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar16 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_1);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010bf529e0(param_1);
  func_0x00010c225ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(param_1);
      }
      puVar4 = PTR_PTR_1126af4d0;
      func_0x00010bfa7380();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf52a60();
      lVar17 = lRam0000000000000000;
      while (puVar5 != (undefined *)0x0) {
        puVar15 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar17) {
            _objc_enumerationMutation(puVar4);
          }
          lVar18 = *(long *)((long)puVar15 * 8);
          lVar6 = lVar18;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          if (lVar6 != 0) {
            lVar7 = lVar18;
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar2;
            func_0x00010bf4b900();
            _objc_release(lVar7);
            _objc_release(lVar6);
            if (((ulong)puVar8 & 1) == 0) {
              func_0x00010befa120(ppuVar1);
              func_0x00010c241220(lVar18);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar2);
              _objc_release(lVar18);
            }
          }
          puVar15 = puVar15 + 1;
        } while (puVar5 != puVar15);
        puVar5 = puVar4;
        func_0x00010bf52a60();
      }
      _objc_release(puVar4);
      lVar14 = lVar14 + 1;
    } while (lVar14 != lVar3);
    lVar3 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar12 = ppuVar16;
    _objc_retain();
    _objc_retain(ppuVar16);
    ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_1);
    lVar10 = param_1;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    if (lVar10 != 0) {
      do {
        lVar14 = 0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(param_1);
          }
          lVar17 = *(long *)(lVar14 * 8);
          func_0x00010bfbd100();
          if (lVar17 == 1) {
            ppuVar1 = ppuVar16;
            func_0x00010bfa7340(ppuVar16);
            _objc_retainAutoreleasedReturnValue();
            ppuVar11 = ppuVar1;
            ppuVar12 = &PTR___NSConcreteGlobalBlock_110a0c580;
            func_0x0001006372a4();
            _objc_release(ppuVar1);
            func_0x00010befa160(ppuVar9);
            _objc_release(ppuVar11);
          }
          lVar14 = lVar14 + 1;
        } while (lVar10 != lVar14);
        lVar10 = param_1;
        func_0x00010bf52a60();
      } while (lVar10 != 0);
    }
    _objc_release(param_1);
    ppuVar1 = ppuVar9;
    func_0x00010bf51e00(ppuVar9);
    _objc_release(ppuVar9);
    _objc_release(ppuVar16);
    _objc_release(param_1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
      ___stack_chk_fail();
      _objc_retain();
      if (ppuVar12 == (undefined **)0x0) {
        ppuVar16 = (undefined **)0x1;
      }
      else {
        ppuVar16 = ppuVar12;
        func_0x00010b5fa088();
        if (ppuVar16 == (undefined **)0x270f) {
          ppuVar16 = (undefined **)0x0;
        }
        else {
          ppuVar16 = ppuVar12;
          func_0x00010b5fa5d4(ppuVar12);
        }
      }
      _objc_release(ppuVar12);
      return ppuVar16;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return ppuVar1;
}



/* Entry: 107da032c; end: 107da0333;  */

long FUN_107da032c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain();
  if (param_2 == 0) {
    lVar1 = 1;
  }
  else {
    lVar1 = param_2;
    func_0x00010b5fa088();
    if (lVar1 == 9999) {
      lVar1 = 0;
    }
    else {
      lVar1 = param_2;
      func_0x00010b5fa5d4(param_2);
    }
  }
  _objc_release(param_2);
  return lVar1;
}



/* Entry: 107da0334; end: 107da05cb;  */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x000107da03b4 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined * FUN_107da0334(undefined *param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  puVar9 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar9 != (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      lVar7 = *(long *)((long)puVar8 * 8);
      func_0x00010bfbd100();
      if (lVar7 == 1) {
        func_0x00010befa120(puVar2);
      }
      puVar8 = puVar8 + 1;
    } while (puVar9 != puVar8);
    puVar9 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  puVar9 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_1);
    puVar9 = param_1;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar9 != (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        lVar7 = *(long *)((long)puVar8 * 8);
        func_0x00010bfbd100();
        if (lVar7 == 2) {
          func_0x00010befa120(puVar2);
        }
        puVar8 = puVar8 + 1;
      } while (puVar9 != puVar8);
      puVar9 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release(param_1);
    puVar9 = puVar2;
    func_0x00010bf51e00();
    _objc_release(puVar2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
      ___stack_chk_fail();
      lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain();
      _objc_retain(param_1);
      puVar2 = param_1;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      puVar9 = (undefined *)0x0;
      if (puVar2 != (undefined *)0x0) {
        do {
          puVar9 = (undefined *)0x0;
          do {
            puVar8 = param_2;
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(param_1);
              puVar8 = param_2;
            }
            uVar6 = *(ulong *)((long)puVar9 * 8);
            uVar3 = uVar6;
            func_0x00010bfbd100();
            param_2 = PTR__OBJC_CLASS___PHAsset_1126bd898;
            if (uVar3 == 2) {
              _objc_retain(uVar6);
              _objc_opt_class();
              uVar4 = uVar6;
              _objc_opt_isKindOfClass();
              uVar3 = uVar6;
              if ((uVar4 & 1) == 0) {
                uVar3 = 0;
              }
              _objc_retain(uVar3);
              _objc_release(uVar6);
              uVar6 = uVar3;
              func_0x00010c0c6c20();
              if ((uVar6 == 2) && (uVar6 = uVar3, func_0x000107f70138(), (uVar6 & 1) != 0)) {
                _objc_release(uVar3);
                puVar9 = (undefined *)((long)&lRam0000000000000000 + 1);
                goto LAB_107da0704;
              }
              _objc_release(uVar3);
              puVar8 = param_2;
            }
            param_2 = puVar8;
            puVar9 = puVar9 + 1;
          } while (puVar2 != puVar9);
          puVar2 = param_1;
          func_0x00010bf52a60();
        } while (puVar2 != (undefined *)0x0);
        puVar9 = (undefined *)0x0;
      }
LAB_107da0704:
      _objc_release(param_1);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
        return puVar9;
      }
      ___stack_chk_fail();
      _objc_retain();
      func_0x00010c14cca0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = param_1;
      func_0x00010bfbdda0();
      func_0x00010b5fa33c();
      if ((puVar9 == (undefined *)0x8) &&
         (puVar9 = param_2, func_0x00010bf529e0(), puVar9 == (undefined *)0x0)) {
        puVar9 = param_1;
        func_0x00010bf97200(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar9 = (undefined *)0x0;
      }
      _objc_release(param_2);
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return puVar9;
}



/* Entry: 107da05cc; end: 107da074f;  */

long FUN_107da05cc(long param_1,undefined *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_1);
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  lVar8 = 0;
  if (lVar2 != 0) {
    do {
      lVar8 = 0;
      do {
        puVar5 = param_2;
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
          puVar5 = param_2;
        }
        uVar7 = *(ulong *)(lVar8 * 8);
        uVar3 = uVar7;
        func_0x00010bfbd100();
        param_2 = PTR__OBJC_CLASS___PHAsset_1126bd898;
        if (uVar3 == 2) {
          _objc_retain(uVar7);
          _objc_opt_class();
          uVar4 = uVar7;
          _objc_opt_isKindOfClass();
          uVar3 = uVar7;
          if ((uVar4 & 1) == 0) {
            uVar3 = 0;
          }
          _objc_retain(uVar3);
          _objc_release(uVar7);
          uVar7 = uVar3;
          func_0x00010c0c6c20();
          if ((uVar7 == 2) && (uVar7 = uVar3, func_0x000107f70138(), (uVar7 & 1) != 0)) {
            _objc_release(uVar3);
            lVar8 = 1;
            goto LAB_107da0704;
          }
          _objc_release(uVar3);
          puVar5 = param_2;
        }
        param_2 = puVar5;
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = param_1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    lVar8 = 0;
  }
LAB_107da0704:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    _objc_retain();
    func_0x00010c14cca0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    if ((lVar8 == 8) && (puVar5 = param_2, func_0x00010bf529e0(), puVar5 == (undefined *)0x0)) {
      lVar8 = param_1;
      func_0x00010bf97200(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar8 = 0;
    }
    _objc_release(param_2);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
    return lVar8;
  }
  return lVar8;
}



/* Entry: 107da0750; end: 107da07e7;  */

void FUN_107da0750(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain();
  func_0x00010c14cca0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  if ((lVar1 == 8) && (lVar1 = param_2, func_0x00010bf529e0(), lVar1 == 0)) {
    lVar1 = param_1;
    func_0x00010bf97200(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = 0;
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107da07e8; end: 107da081f;  */

bool FUN_107da07e8(undefined8 param_1,long param_2)

{
  func_0x00010c23ff80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_2 != 0;
}



/* Entry: 107da0820; end: 107da09cb;  */

void FUN_107da0820(undefined8 param_1,double param_2,long param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
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
  
  puVar8 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_4;
  _objc_retain();
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  dVar15 = 0.0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar9 = auStack_e8;
  uVar10 = 0;
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar14 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        lVar11 = *(long *)(lStack_128 + lVar14 * 8);
        lVar3 = lVar11;
        func_0x00010bfbdda0();
        func_0x00010b5fa33c();
        if (lVar3 == 8) {
          puVar4 = PTR_PTR_1126bc808;
          func_0x00010bfa6fc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf97200();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1);
          _objc_release(lVar11);
          _objc_release(puVar4);
        }
        lVar14 = lVar14 + 1;
      } while (lVar2 != lVar14);
      puVar9 = auStack_e8;
      uVar10 = 0;
      lVar2 = param_3;
      puVar8 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar4 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  puVar1 = puVar7;
  func_0x00010b5fa088();
  puVar13 = puVar9 + -3;
  dVar19 = 0.0;
  if (puVar13 < (undefined1 *)0x4) {
    dVar19 = *(double *)(&UNK_10dee6b00 + (long)puVar13 * 8);
  }
  puVar5 = (undefined1 *)puVar8;
  func_0x00010c0ef4a0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar4 = puVar7;
  func_0x00010902339c(puVar7,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if ((uVar10 & 1) == 0) {
    puVar6 = puVar7;
    func_0x00010bf59960(puVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c185360(param_3);
  _objc_release(puVar6);
  puVar6 = puVar7;
  func_0x00010b5fa760();
  if ((dVar19 != 0.0) || (((ulong)puVar6 & 1) == 0)) {
    dVar15 = dVar19;
    func_0x00010c222080(param_3);
  }
  if (dVar19 == 0.0) {
    lVar2 = 8;
    if (puVar9 != (undefined1 *)0x7) {
      lVar2 = 0;
    }
    puVar1 = puVar4;
    func_0x000109024c88(*(undefined8 *)(&UNK_10dee6af0 + lVar2),puVar4,
                        (uint)((undefined1 *)0x6 < puVar9) | 4U >> (ulong)((uint)puVar9 & 0x1f) & 1)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c207b40(param_3);
  }
  else {
    if (((undefined1 *)0x3 < puVar13) && (puVar9 != (undefined1 *)0x0)) goto LAB_107da0b3c;
    puVar6 = puVar4;
    func_0x000109024b54(puVar4,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c207b40(param_3);
    _objc_release(puVar6);
    puVar6 = puVar7;
    func_0x00010b5fa760();
    if (((ulong)puVar6 & 1) != 0) goto LAB_107da0b3c;
    func_0x000109023974(puVar7);
    if (puVar1 + -0xd < (undefined *)0xfffffffffffffffc) {
      dVar16 = dVar15;
      func_0x000109023cdc(puVar7);
      dVar17 = 1.0;
      _hypot(0x3ff0000000000000,dVar19);
      dVar18 = (double)(long)(dVar19 * (dVar16 / dVar17) * 0.125) * 8.0;
      dVar16 = (double)(long)((dVar16 / dVar17) * 0.125) * 8.0;
    }
    else {
      dVar18 = dVar19 * param_2;
      dVar16 = param_2;
      if (dVar15 <= dVar19 * param_2) {
        dVar18 = dVar15;
        dVar16 = dVar15 / dVar19;
      }
    }
    dVar19 = dVar15 / dVar18;
    if (param_2 / dVar16 <= dVar15 / dVar18) {
      dVar19 = param_2 / dVar16;
    }
    puVar1 = PTR_PTR_1126c20c0;
    _objc_alloc(PTR_PTR_1126c20c0);
    func_0x00010c040460(0,dVar19,0,0,dVar15,param_2);
    func_0x00010c186260(param_3);
  }
  _objc_release(puVar1);
LAB_107da0b3c:
  _objc_release(puVar4);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107da09cc; end: 107da0c73;  */

void FUN_107da09cc(double param_1,double param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,ulong param_6,ulong param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = param_4;
  func_0x00010b5fa088();
  uVar6 = param_6 - 3;
  dVar10 = 0.0;
  if (uVar6 < 4) {
    dVar10 = *(double *)(&UNK_10dee6b00 + uVar6 * 8);
  }
  uVar3 = param_5;
  func_0x00010c0ef4a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar4 = param_4;
  func_0x00010902339c(param_4,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if ((param_7 & 1) == 0) {
    puVar5 = param_4;
    func_0x00010bf59960(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c185360(param_3);
  _objc_release(puVar5);
  puVar5 = param_4;
  func_0x00010b5fa760();
  if ((dVar10 != 0.0) || (((ulong)puVar5 & 1) == 0)) {
    param_1 = dVar10;
    func_0x00010c222080(param_3);
  }
  if (dVar10 == 0.0) {
    lVar1 = 8;
    if (param_6 != 7) {
      lVar1 = 0;
    }
    puVar2 = puVar4;
    func_0x000109024c88(*(undefined8 *)(&UNK_10dee6af0 + lVar1),puVar4,
                        (uint)(6 < param_6) | 4U >> (ulong)((uint)param_6 & 0x1f) & 1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c207b40(param_3);
  }
  else {
    if ((3 < uVar6) && (param_6 != 0)) goto LAB_107da0b3c;
    puVar5 = puVar4;
    func_0x000109024b54(puVar4,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c207b40(param_3);
    _objc_release(puVar5);
    puVar5 = param_4;
    func_0x00010b5fa760();
    if (((ulong)puVar5 & 1) != 0) goto LAB_107da0b3c;
    func_0x000109023974(param_4);
    if (puVar2 + -0xd < (undefined *)0xfffffffffffffffc) {
      dVar7 = param_1;
      func_0x000109023cdc(param_4);
      dVar8 = 1.0;
      _hypot(0x3ff0000000000000,dVar10);
      dVar9 = (double)(long)(dVar10 * (dVar7 / dVar8) * 0.125) * 8.0;
      dVar7 = (double)(long)((dVar7 / dVar8) * 0.125) * 8.0;
    }
    else {
      dVar9 = dVar10 * param_2;
      dVar7 = param_2;
      if (param_1 <= dVar10 * param_2) {
        dVar9 = param_1;
        dVar7 = param_1 / dVar10;
      }
    }
    dVar10 = param_1 / dVar9;
    if (param_2 / dVar7 <= param_1 / dVar9) {
      dVar10 = param_2 / dVar7;
    }
    puVar2 = PTR_PTR_1126c20c0;
    _objc_alloc(PTR_PTR_1126c20c0);
    func_0x00010c040460(0,dVar10,0,0,param_1,param_2);
    func_0x00010c186260(param_3);
  }
  _objc_release(puVar2);
LAB_107da0b3c:
  _objc_release(puVar4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107da0c74; end: 107da0f7f;  */

void FUN_107da0c74(double param_1,undefined *param_2,ulong param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  
  dVar3 = param_1;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if ((param_3 & 1) == 0) {
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c23d0a0(param_2);
  if (param_4 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c12fbe0((double)(long)(param_1 * dVar3 * 0.125) * 8.0,
                        PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = param_2;
    func_0x00010bf89880(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107da0f80; end: 107da127f;  */

void FUN_107da0f80(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfd9dc0();
  puVar8 = PTR_PTR_1126bfb98;
  if ((uVar1 & 1) == 0) {
    uVar2 = param_4;
    func_0x00010c0ef4a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b760(puVar8);
    _objc_release(uVar2);
  }
  else {
    puVar8 = (undefined *)0x1;
  }
  uVar2 = param_7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0ef4a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c248ba0(0x404c800000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar4;
  func_0x000107da0d4c(uVar4,param_3,puVar8,7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar3 = param_7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  uVar4 = param_4;
  func_0x00010c0ef4a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c248ba0(0xc04c800000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = uVar5;
  func_0x000107da0d4c(uVar5,param_3,puVar8,7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar5);
  puVar8 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00;
  _objc_alloc_init(PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
  func_0x00010c14e120(uVar2);
  func_0x00010c1f5fe0(puVar8);
  puVar6 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
  func_0x00010c046ac0(param_1,param_2);
  _objc_retain(uVar3);
  _objc_retain(uVar2);
  puVar7 = puVar6;
  func_0x00010bfe91c0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar6);
  _objc_release(puVar8);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107da1280; end: 107da12c7;  */

/* WARNING: Possible PIC construction at 0x000107da12a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107da12a8) */

void FUN_107da1280(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x20),PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 107da12c8; end: 107da1527;  */

undefined ** FUN_107da12c8(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *in_x5;
  undefined *in_x6;
  undefined *in_x7;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *unaff_x28;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_90;
  undefined1 uStack_88;
  
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  puVar12 = *(undefined **)PTR____stack_chk_guard_11034bdc0;
  uVar13 = *(undefined8 *)PTR__kCGImagePropertyHasAlpha_110349d40;
  puVar15 = *(undefined **)PTR__kCGImageDestinationLossyCompressionQuality_110349c80;
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar10;
  _CGImageMetadataCreateMutable();
  puVar2 = param_2;
  func_0x00010bf59960();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bdc17a0();
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)PTR__kCGImageMetadataNamespacePhotoshop_110349c90;
  _CGImageMetadataTagCreate
            (uVar4,*(undefined8 *)PTR__kCGImageMetadataPrefixPhotoshop_110349c98,
             &PTR____CFConstantStringClassReference_110ebd978,1);
  _CGImageMetadataSetTagWithPath(puVar14,0,&PTR____CFConstantStringClassReference_110ebd998,uVar4);
  _CFRelease();
  func_0x0001005c6500();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_2;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar5 = puVar2;
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar6 = uVar4;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad300();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  _CGImageDestinationCreateWithURL();
  uVar9 = param_1;
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  _objc_release(param_1);
  puVar11 = (undefined *)0x0;
  puVar2 = puVar14;
  _CGImageDestinationAddImageAndMetadata(ppuVar8,uVar9);
  _CGImageDestinationFinalize(ppuVar8);
  _CFRelease(ppuVar8);
  _CFRelease(puVar14);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release();
  if (*(undefined **)PTR____stack_chk_guard_11034bdc0 == puVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
    return ppuVar7;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  _objc_retain(puVar11);
  _objc_retain(puVar3);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  _objc_retain(puVar15);
  _objc_retain(puVar1);
  _objc_retain(&PTR__OBJC_CLASS___NSConstantDoubleNumber_1111851d0);
  _objc_retain(puVar12);
  _objc_retain(unaff_x28);
  puStack_100 = PTR_PTR_1126fb0b0;
  ppuVar7 = &puStack_108;
  puStack_108 = puVar10;
  _objc_msgSendSuper2(ppuVar7,PTR_s_init_1125d9248);
  if (ppuVar7 != (undefined **)0x0) {
    uStack_88 = (undefined1)uVar13;
    _objc_retain(puVar2);
    puVar10 = ppuVar7[0x10];
    ppuVar7[0x10] = puVar2;
    _objc_release(puVar10);
    _objc_retain(puVar11);
    puVar10 = ppuVar7[0xf];
    ppuVar7[0xf] = puVar11;
    _objc_release(puVar10);
    _objc_retain(puVar3);
    puVar10 = ppuVar7[6];
    ppuVar7[6] = puVar3;
    _objc_release(puVar10);
    _objc_retain(in_x5);
    puVar10 = ppuVar7[7];
    ppuVar7[7] = in_x5;
    _objc_release(puVar10);
    _objc_retain(in_x6);
    puVar10 = ppuVar7[8];
    ppuVar7[8] = in_x6;
    _objc_release(puVar10);
    _objc_retain(in_x7);
    puVar10 = ppuVar7[0xe];
    ppuVar7[0xe] = in_x7;
    _objc_release(puVar10);
    ppuVar7[0x11] = puStack_90;
    _objc_retain(puVar15);
    puVar10 = ppuVar7[4];
    ppuVar7[4] = puVar15;
    _objc_release(puVar10);
    _objc_retain(puVar1);
    puVar10 = ppuVar7[5];
    ppuVar7[5] = puVar1;
    _objc_release(puVar10);
    _objc_retain(&PTR__OBJC_CLASS___NSConstantDoubleNumber_1111851d0);
    puVar10 = ppuVar7[9];
    ppuVar7[9] = (undefined *)&PTR__OBJC_CLASS___NSConstantDoubleNumber_1111851d0;
    _objc_release(puVar10);
    *(undefined1 *)(ppuVar7 + 0xc) = uStack_88;
    _objc_retain(puVar12);
    puVar10 = ppuVar7[10];
    ppuVar7[10] = puVar12;
    _objc_release(puVar10);
    _objc_retain(unaff_x28);
    puVar10 = ppuVar7[0xb];
    ppuVar7[0xb] = unaff_x28;
    _objc_release(puVar10);
    puVar10 = PTR_PTR_1126ae720;
    _objc_retain(puVar2);
    _objc_retain(puVar11);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = ppuVar7[1];
    ppuVar7[1] = puVar10;
    _objc_release(puVar14);
    puVar10 = PTR_PTR_1126d7cb0;
    _objc_alloc();
    func_0x00010c017120();
    puVar14 = ppuVar7[2];
    ppuVar7[2] = puVar10;
    _objc_release(puVar14);
    _objc_release(puVar11);
    _objc_release(puVar2);
  }
  _objc_release(unaff_x28);
  _objc_release(puVar12);
  _objc_release(&PTR__OBJC_CLASS___NSConstantDoubleNumber_1111851d0);
  _objc_release(puVar1);
  _objc_release(puVar15);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(puVar3);
  _objc_release(puVar11);
  _objc_release(puVar2);
  return ppuVar7;
}



/* Entry: 107da1528; end: 107da1877; -[SCSpectaclesImageActivityItemGenerator initWithGallerySnap:dataObjectContext:cloudFS:encryptedContentManager:cachingMediaManager:userSession:spectaclesCustomExportFormat:uploadToYoutube:spectaclesAuxiliaryContentServices:targetTrajectoryFactory:circumstanceEngine:memoriesCachingMediaHelper:memoriesTranscodingHelper:] */

undefined8 *
FUN_107da1528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_70 = PTR_PTR_1126fb0b0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[6];
    puVar1[6] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[7];
    puVar1[7] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[8];
    puVar1[8] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_8;
    _objc_release(uVar2);
    puVar1[0x11] = param_9;
    _objc_retain(param_12);
    uVar2 = puVar1[4];
    puVar1[4] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[5];
    puVar1[5] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[9];
    puVar1[9] = param_14;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0xc) = param_10;
    _objc_retain(param_15);
    uVar2 = puVar1[10];
    puVar1[10] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_16;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d7cb0;
    _objc_alloc();
    func_0x00010c017120();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107da1878; end: 107da18df;  */

void FUN_107da1878(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126bc7b8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7160(puVar3,param_2,uVar1,0,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107da18e0; end: 107da1a0f; -[SCSpectaclesImageActivityItemGenerator generateItemForActivityType:] */

void FUN_107da18e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c13a8c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107da1a10;
  puStack_60 = &UNK_11084b7a0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(uVar2);
  uStack_58 = uVar2;
  FUN_107f723ec(uVar2,param_1,uVar1,&PTR____CFConstantStringClassReference_110ec9718,&puStack_78);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 107da1a10; end: 107da1a5b;  */

void FUN_107da1a10(long param_1,int param_2)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    func_0x00010be1b400(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107da1a5c; end: 107da1e23; -[SCSpectaclesImageActivityItemGenerator _generateItemWithCloudFile:] */

void FUN_107da1a5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  double dVar8;
  undefined8 uVar9;
  undefined1 auStack_d8 [8];
  undefined1 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  uVar6 = param_3;
  func_0x00010c06cde0();
  if ((int)uVar6 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    _objc_release(0);
    _objc_release(uVar6);
    _objc_release(uVar1);
    uVar3 = *(ulong *)(param_1 + 0x80);
    if (*(long *)(param_1 + 0x88) == 7) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = 0x4093000000000000;
      FUN_107da0f80(0x40a3000000000000,0x4093000000000000,uVar3,uVar1,param_3,
                    *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x50));
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      func_0x00010853f31c();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar1;
      func_0x00010bf58fc0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = uVar6;
      _objc_release(uVar5);
      _objc_release(uVar1);
      uVar2 = *(ulong *)(param_1 + 0x80);
      func_0x00010bfed740();
      dVar8 = 3.0;
      if ((uVar2 & 1) == 0) {
        func_0x00010bf8b160(0x4008000000000000,*(undefined8 *)(param_1 + 0x80));
        dVar8 = (double)SUB84(dVar8,0);
      }
      func_0x00010c1aa220(dVar8,*(undefined8 *)(param_1 + 0x18));
      _objc_initWeak(auStack_78,param_1);
      puVar4 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_107da1e24;
      puStack_88 = &UNK_1108dd2b8;
      _objc_copyWeak(auStack_80,auStack_78);
      func_0x00010c1e4740(*(undefined8 *)(param_1 + 0x18));
      func_0x00010c204760(*(undefined8 *)(param_1 + 0x18));
      func_0x00010c19f460(*(undefined8 *)(param_1 + 0x18));
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c23d0a0(uVar3);
      puStack_c8 = puVar4;
      uStack_c0 = 0xc2000000;
      pcStack_b8 = FUN_107da1e84;
      puStack_b0 = &UNK_110a0bfb8;
      _objc_copyWeak(auStack_a8,auStack_78);
      func_0x00010bfae7c0(dVar8,uVar9,uVar6);
      _objc_destroyWeak(auStack_a8);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
      _objc_release(uVar3);
    }
    else {
      func_0x00010bfd9dc0();
      puVar4 = PTR_PTR_1126bfb98;
      if ((uVar3 & 1) == 0) {
        uVar1 = *(undefined8 *)(param_1 + 8);
        func_0x00010c269d40(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar1;
        func_0x00010c0ef4a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b760();
        uVar7 = SUB81(puVar4,0);
        _objc_release(uVar6);
        _objc_release(uVar1);
      }
      else {
        uVar7 = 1;
      }
      _objc_initWeak(auStack_78,param_1);
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(PTR___dispatch_main_q_11034be20);
      _objc_copyWeak(auStack_d8,auStack_78);
      uStack_d0 = uVar7;
      func_0x00010c134d00(*(undefined8 *)PTR__CGSizeZero_110347620,
                          *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),uVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(uVar6);
      _objc_destroyWeak(auStack_d8);
      _objc_destroyWeak(auStack_78);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107da1e24; end: 107da1e83;  */

void FUN_107da1e24(undefined8 param_1,long param_2)

{
  long lVar1;
  
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x00010bf6b020(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef1720(param_1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107da1e84; end: 107da20bf;  */

void FUN_107da1e84(long param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_4);
  puVar1 = (undefined *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  puVar4 = PTR_PTR_1126d7cb8;
  if (puVar1 != (undefined *)0x0) {
    param_3 = puVar1;
    if (param_2 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99380();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar2 = puVar1;
      func_0x00010bf6b020(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef16e0(puVar2);
      _objc_release(puVar3);
      _objc_release(puVar2);
      param_4 = puVar4;
    }
    else {
      puVar4 = param_2;
      func_0x00010c28f340(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = (undefined *)0x0;
      FUN_107dfadc8();
      _objc_release(puVar4);
      puVar4 = puVar1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_2;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef1700(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar4);
    }
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar6);
  puVar1 = param_2 + 0x20;
  _objc_loadWeakRetained();
  puVar4 = PTR_PTR_1126d7cb8;
  if (puVar1 != (undefined *)0x0) {
    param_3 = puVar1;
    if (puVar6 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99380(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar6);
      puVar6 = puVar1;
      func_0x00010bf6b020(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c0844e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef16e0(puVar6);
      _objc_release(puVar2);
      _objc_release(puVar6);
      _objc_release(puVar4);
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar4 = puVar6;
      func_0x000107da0d4c(puVar6,*(undefined8 *)(puVar1 + 0x80),param_2[0x28],
                          *(undefined8 *)(puVar1 + 0x88));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar6 = puVar4;
      FUN_107da12c8(puVar4,*(undefined8 *)(puVar1 + 0x80));
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar4);
      puVar2 = puVar4;
      if (puVar6 != (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf64ac0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar3 != (undefined *)0x0) {
          puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
          _objc_alloc(PTR__OBJC_CLASS___UIImage_1126aea68);
          func_0x00010c008240();
          _objc_release(puVar4);
        }
        _objc_release(puVar3);
      }
      puVar3 = puVar1;
      func_0x00010bf6b020(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x00010c0844e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef1700(puVar3);
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar6);
      puVar6 = puVar4;
    }
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    if (param_3 == (undefined *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010c136ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(puVar6 + 0x10),PTR_s_requestThumbnailForExporting__11262b4d0);
    return;
  }
  return;
}



/* Entry: 107da20c0; end: 107da234f;  */

void FUN_107da20c0(long param_1,undefined *param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar5 = PTR_PTR_1126d7cb8;
  if (lVar1 != 0) {
    param_3 = lVar1;
    if (param_2 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99380(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      lVar6 = lVar1;
      func_0x00010bf6b020(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar1;
      func_0x00010c0844e0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef16e0(lVar6);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(puVar5);
      param_2 = (undefined *)0x0;
    }
    else {
      puVar5 = param_2;
      func_0x000107da0d4c(param_2,*(undefined8 *)(lVar1 + 0x80),*(undefined1 *)(param_1 + 0x28),
                          *(undefined8 *)(lVar1 + 0x88));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      puVar3 = puVar5;
      FUN_107da12c8(puVar5,*(undefined8 *)(lVar1 + 0x80));
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar5);
      puVar4 = puVar5;
      if (puVar3 != (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf64ac0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar2 != (undefined *)0x0) {
          puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
          _objc_alloc(PTR__OBJC_CLASS___UIImage_1126aea68);
          func_0x00010c008240();
          _objc_release(puVar5);
        }
        _objc_release(puVar2);
      }
      lVar6 = lVar1;
      func_0x00010bf6b020(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar1;
      func_0x00010c0844e0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef1700(lVar6);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(puVar4);
      _objc_release(puVar3);
      param_2 = puVar5;
    }
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    if (param_3 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010c136ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_2 + 0x10),PTR_s_requestThumbnailForExporting__11262b4d0);
    return;
  }
  return;
}



/* Entry: 107da2350; end: 107da235f; -[SCSpectaclesImageActivityItemGenerator generateThumbnailForExport:] */

void FUN_107da2350(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c136ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_requestThumbnailForExporting__11262b4d0);
    return;
  }
  return;
}



/* Entry: 107da2360; end: 107da23a7; -[SCSpectaclesImageActivityItemGenerator estimatedMediaSize] */

undefined8 FUN_107da2360(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107f72990(uVar2,uVar1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107da23a8; end: 107da23af; -[SCSpectaclesImageActivityItemGenerator cancel] */

void FUN_107da23a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2ebd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_cancelProcessing_1125a9498);
  return;
}



/* Entry: 107da23b0; end: 107da23b7; -[SCSpectaclesImageActivityItemGenerator itemId] */

void FUN_107da23b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x80),PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107da23b8; end: 107da23f3; -[SCSpectaclesImageActivityItemGenerator itemDuration] */

long FUN_107da23b8(float param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_2 + 0x80);
  func_0x00010bfed740();
  if ((uVar1 & 1) == 0) {
    func_0x00010bf8b160(*(undefined8 *)(param_2 + 0x80));
    lVar2 = (long)param_1;
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}



/* Entry: 107da23f4; end: 107da23fb; -[SCSpectaclesImageActivityItemGenerator primarySortDate] */

void FUN_107da23f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf59970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_createTimeUtc_1125b4000);
  return;
}



/* Entry: 107da23fc; end: 107da2403; -[SCSpectaclesImageActivityItemGenerator secondarySortDate] */

void FUN_107da23fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf59970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_createTimeUtc_1125b4000);
  return;
}



/* Entry: 107da2404; end: 107da241b; -[SCSpectaclesImageActivityItemGenerator delegate] */

void FUN_107da2404(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107da241c; end: 107da2427; -[SCSpectaclesImageActivityItemGenerator setDelegate:] */

void FUN_107da241c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 107da2428; end: 107da242f; -[SCSpectaclesImageActivityItemGenerator userSession] */

undefined8 FUN_107da2428(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107da2430; end: 107da2437; -[SCSpectaclesImageActivityItemGenerator dataObjectContext] */

undefined8 FUN_107da2430(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 107da2438; end: 107da243f; -[SCSpectaclesImageActivityItemGenerator snap] */

undefined8 FUN_107da2438(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 107da2440; end: 107da2447; -[SCSpectaclesImageActivityItemGenerator spectaclesCustomExportFormat] */

undefined8 FUN_107da2440(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 107da2448; end: 107da244f; -[SCSpectaclesImageActivityItemGenerator uploadToYoutube] */

undefined1 FUN_107da2448(long param_1)

{
  return *(undefined1 *)(param_1 + 0x60);
}



/* Entry: 107da2450; end: 107da2517; -[SCSpectaclesImageActivityItemGenerator .cxx_destruct] */

void FUN_107da2450(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_destroyWeak(param_1 + 0x68);
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



/* Entry: 107da2518; end: 107da26eb; -[SCSpectaclesPreviewImageActivityItemGenerator initWithImage:dataObjectContext:cloudFS:encryptedContentManager:cachingMediaManager:userSession:previewGalleryConfiguration:exportFormat:uploadToYouTube:spectaclesAuxiliaryContentServices:targetTrajectoryFactory:circumstanceEngine:memoriesCachingMediaHelper:memoriesTranscodingHelper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107da2518(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR_PTR_1126fb0b8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithGallerySnap_dataObjectCo_1125e3610,param_9,param_4,
                      param_5,param_6,param_7,param_8,param_10,param_11);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_9);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11276f078;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107da26ec; end: 107da280b; -[SCSpectaclesPreviewImageActivityItemGenerator generateItemForActivityType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107da26ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c248620();
  if (lVar1 == 7) {
    puStack_48 = PTR_PTR_1126fb0b8;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_generateItemForActivityType__1125cd740,param_3);
  }
  else {
    lVar1 = param_1;
    func_0x00010c23f220(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c248620(param_1);
    lVar2 = param_1;
    func_0x00010be78620(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0844e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef1700(lVar1);
    _objc_release(param_1);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107da280c; end: 107da282f; -[SCSpectaclesPreviewImageActivityItemGenerator generateThumbnailForExport:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107da280c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107da2828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + _DAT_11276f078),0);
    return;
  }
  return;
}



/* Entry: 107da2830; end: 107da29df; -[SCSpectaclesPreviewImageActivityItemGenerator _prepareImage:snap:spectaclesExportFormat:] */

void FUN_107da2830(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_6;
  func_0x00010b5fa088();
  if ((lVar1 < 7) || (3 < lVar1 - 9U)) {
    func_0x00010854b598();
    lVar2 = param_6;
    func_0x00010b5fa088();
    lVar1 = 8;
    if (param_7 != 7) {
      lVar1 = 0;
    }
    if (lVar2 != 4) {
      param_1 = param_1 + *(double *)(&UNK_10dee6af0 + lVar1) * 2.0;
      param_2 = param_2 + *(double *)(&UNK_10dee6af0 + lVar1) * 2.0;
    }
    uVar3 = param_5;
    func_0x00010c14e6c0(param_1,param_2,0x3ff0000000000000,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    param_5 = uVar3;
  }
  uVar3 = param_3;
  func_0x00010c23f220(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c248620(param_3);
  uVar5 = param_5;
  func_0x000107da0d4c(param_5,uVar3,1,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(uVar3);
  func_0x00010c23f220(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  FUN_107da12c8(uVar5,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107da29e0; end: 107da29f3; -[SCSpectaclesPreviewImageActivityItemGenerator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107da29e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276f078,0);
  return;
}



/* Entry: 107da29f4; end: 107da2bdf; -[SCSpectaclesPreviewStereoVideoSpawner initWithVideoFilter:dataObjectContext:cloudFS:encryptedContentManager:cachingMediaManager:reverseAudioCache:userSession:performer:spectaclesAuxiliaryContentServices:previewAssetVideoProviderFactory:previewGalleryConfigurationProvider:previewConfiguration:timelineConfiguration:outputUrl:uploadToYouTube:targetTrajectoryFactory:circumstanceEngine:snapVideoFilterScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107da29f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
             undefined4 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined1 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 in_stack_00000058;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(in_stack_00000058);
  puStack_70 = PTR_PTR_1126fb0c0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithUserSession_dataObjectCo_1125f4f98,param_9,param_4,
                      param_5,param_6,param_7,param_8,param_19);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11276f07c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11276f080;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_15;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11276f084;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_16;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11276f088;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_17;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11276f08c;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_18;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11276f090,in_stack_00000058);
    lVar3 = (long)_DAT_11276f094;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_12;
    _objc_release(uVar2);
  }
  _objc_release(in_stack_00000058);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107da2be0; end: 107da2e13; -[SCSpectaclesPreviewStereoVideoSpawner innerGeneratorForSnap:primaryCamera:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107da2be0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar1 = PTR_PTR_1126d7c78;
  _objc_alloc();
  uVar13 = *(undefined8 *)(param_1 + _DAT_11276f07c);
  lVar2 = param_1;
  func_0x00010bf63f40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf3e200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf93a20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf27760();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c13ff40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_11276f080);
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + _DAT_11276f084);
  uVar16 = *(undefined8 *)(param_1 + _DAT_11276f088);
  uVar17 = *(undefined8 *)(param_1 + _DAT_11276f08c);
  uVar15 = *(undefined8 *)(param_1 + _DAT_11276f094);
  lVar9 = param_1;
  func_0x00010c1104c0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c28e960();
  lVar11 = param_1;
  func_0x00010c26a1c0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11276f090;
  _objc_loadWeakRetained();
  func_0x00010c060dc0(puVar1,param_2,uVar13,lVar2,lVar3,lVar4,lVar5,lVar6,lVar7,uVar8,uVar14,uVar16,
                      uVar17,param_4,uVar15,lVar9,7,(char)lVar10);
  _objc_release(param_1);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107da2e14; end: 107da2e9f; -[SCSpectaclesPreviewStereoVideoSpawner .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107da2e14(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276f090);
  _objc_storeStrong(param_1 + _DAT_11276f094,0);
  _objc_storeStrong(param_1 + _DAT_11276f08c,0);
  _objc_storeStrong(param_1 + _DAT_11276f088,0);
  _objc_storeStrong(param_1 + _DAT_11276f084,0);
  _objc_storeStrong(param_1 + _DAT_11276f080,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276f07c,0);
  return;
}



/* Entry: 107da2ea0; end: 107da315f; -[SCSpectaclesPreviewVideoActivityItemGenerator initWithVideoFilter:dataObjectContext:cloudFS:encryptedContentManager:cachingMediaManager:reverseAudioCache:userSession:previewGalleryConfiguration:previewConfiguration:timelineConfiguration:outputUrl:primaryCamera:spectaclesAuxiliaryContentServices:previewAssetVideoProviderFactory:exportFormat:uploadToYouTube:targetTrajectoryFactory:circumstanceEngine:snapVideoFilterScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107da2ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined1 param_19,undefined4 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_23);
  _objc_retain(param_22);
  _objc_retain(param_21);
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR_PTR_1126fb0c8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithGallerySnap_dataObjectCo_1125e3608,param_10,param_4,
                      param_5,param_6,param_7,param_8,param_9,param_18,param_19);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_10);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11276f098;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    uVar2 = param_11;
    func_0x00010c29a1e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276f09c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276f09c) = uVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11276f0a0;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11276f0a4;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_13;
    _objc_release(uVar2);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107da3160; end: 107da39b3; -[SCSpectaclesPreviewVideoActivityItemGenerator generateItemForActivityType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107da3160(double param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined **ppuVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  double dVar20;
  double dVar21;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined1 auStack_218 [8];
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  undefined1 auStack_1f0 [8];
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [136];
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puVar4 = PTR_PTR_1126bc7b8;
  uVar2 = param_3;
  func_0x00010c23f220(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf63f40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar2);
  lVar15 = (long)_DAT_11276f098;
  uVar18 = *(undefined8 *)(param_3 + lVar15);
  uVar2 = param_3;
  func_0x00010c23f220(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c248620(param_3);
  uVar3 = param_3;
  func_0x00010c28e960(param_3);
  FUN_107da09cc(uVar18,uVar2,puVar4,uVar6,uVar3);
  _objc_release(uVar2);
  func_0x00010c1a8660(*(undefined8 *)(param_3 + lVar15));
  func_0x00010c1f5d00(*(undefined8 *)(param_3 + lVar15));
  _objc_initWeak(auStack_120,param_3);
  puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_107da39b4;
  puStack_130 = &UNK_1108dd2b8;
  _objc_copyWeak(auStack_128,auStack_120);
  func_0x00010c1e4740(*(undefined8 *)(param_3 + lVar15));
  uVar2 = param_3;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010b5fa760();
  _objc_release(uVar2);
  if ((uVar6 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010c248620();
    dVar21 = 0.0;
    if (uVar2 - 3 < 4) {
      dVar21 = *(double *)(&UNK_10dee6b20 + (uVar2 - 3) * 8);
    }
    uVar2 = param_3;
    func_0x00010c248620();
    if (((uVar2 - 3 < 4) || (uVar2 == 0)) && (dVar21 != 0.0)) {
      uVar2 = param_3;
      func_0x00010c23f220(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x000109023974();
      _objc_release(uVar2);
      uVar2 = param_3;
      func_0x00010c23f220(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x000109023acc();
      _objc_release(uVar2);
      uVar5 = *(undefined8 *)(param_3 + lVar15);
      func_0x00010c0ef960(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar5;
      func_0x0001085448fc(dVar21);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d75e0(*(undefined8 *)(param_3 + lVar15));
      _objc_release(uVar18);
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_3 + lVar15);
      func_0x00010c29b880(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar5;
      FUN_107db8110(param_1,param_2,dVar21);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c222140(*(undefined8 *)(param_3 + lVar15));
      _objc_release(uVar18);
      _objc_release(uVar5);
    }
  }
  uVar2 = param_3;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010b5fa088();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c248620(param_3);
  iVar1 = (int)(uVar6 - 2) + 2;
  if (10 < uVar6 - 2) {
    iVar1 = 5;
  }
  func_0x00010854b598(iVar1,uVar2);
  uVar6 = *(ulong *)(param_3 + lVar15);
  func_0x00010c249940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c299740();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    uVar3 = param_3;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x000109023c14();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar6);
    if ((int)uVar7 == 0) goto LAB_107da3560;
    uVar6 = param_3;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    FUN_107ff9fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c130740();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c186260(*(undefined8 *)(param_3 + lVar15));
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(uVar6);
LAB_107da3560:
  uVar2 = param_3;
  func_0x00010c248620();
  dVar21 = param_1 * 0.5;
  if (uVar2 != 7) {
    dVar21 = param_1;
  }
  uVar2 = param_3;
  func_0x00010c248620();
  if (uVar2 == 7) {
    puVar8 = PTR_PTR_1126bfb80;
    _objc_alloc();
    uVar2 = param_3;
    func_0x00010c23f220(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c2484a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c1307e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c046fe0();
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_release(uVar2);
    func_0x00010c112d00(param_3);
    puVar9 = puVar8;
    func_0x00010c1245c0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bb2a0(*(undefined8 *)(param_3 + lVar15));
    _objc_release(puVar9);
    _objc_release(puVar8);
  }
  lVar13 = (long)_DAT_11276f0a0;
  if (*(long *)(param_3 + lVar13) == 0) {
    uVar18 = *(undefined8 *)(param_3 + lVar15);
    puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_230 = 0xc2000000;
    uStack_228 = 0x107da3ac0;
    puStack_220 = &UNK_110a0bfb8;
    ppuVar16 = &puStack_238;
    _objc_copyWeak(auStack_218,auStack_120);
    func_0x00010bfae7c0(dVar21,param_2,uVar18);
    _objc_destroyWeak(auStack_218);
  }
  else {
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    uVar18 = *(undefined8 *)(param_3 + (long)_DAT_11276f0a4);
    _objc_retain();
    lStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    plStack_180 = (long *)0x0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    lVar10 = *(long *)(param_3 + lVar13);
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar10;
    func_0x00010bf52a60();
    if (lVar13 != 0) {
      lVar14 = *plStack_180;
      do {
        lVar17 = 0;
        do {
          if (*plStack_180 != lVar14) {
            _objc_enumerationMutation(lVar10);
          }
          lVar19 = *(long *)(lStack_188 + lVar17 * 8);
          lVar11 = lVar19;
          func_0x00010bf0b7e0(lVar19);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar8);
          _objc_release(lVar11);
          puVar12 = PTR__OBJC_CLASS___NSValue_1126afdf8;
          if (lVar19 == 0) {
            uStack_1a8 = 0;
            uStack_1b0 = 0;
            uStack_198 = 0;
            uStack_1a0 = 0;
            uStack_1b8 = 0;
            uStack_1c0 = 0;
          }
          else {
            func_0x00010c09e0e0(&uStack_1c0,lVar19);
          }
          func_0x00010c297240(puVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar9);
          _objc_release(puVar12);
          lVar17 = lVar17 + 1;
        } while (lVar13 != lVar17);
        lVar13 = lVar10;
        func_0x00010bf52a60();
      } while (lVar13 != 0);
    }
    _objc_release(lVar10);
    puVar12 = PTR___NSConcreteStackBlock_11034bd00;
    uVar5 = *(undefined8 *)(param_3 + lVar15);
    puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1e0 = 0xc2000000;
    pcStack_1d8 = FUN_107da3a30;
    puStack_1d0 = &UNK_11085ac18;
    _objc_retain(uVar18);
    puStack_210 = puVar12;
    uStack_208 = 0xc2000000;
    pcStack_200 = FUN_107da3a58;
    puStack_1f8 = &UNK_11095af40;
    ppuVar16 = &puStack_210;
    uStack_1c8 = uVar18;
    _objc_copyWeak(auStack_1f0,auStack_120);
    dVar20 = *(double *)PTR__CGSizeZero_110347620;
    func_0x00010c279e20(dVar20,*(undefined8 *)(PTR__CGSizeZero_110347620 + 8),dVar21,param_2,uVar5);
    _objc_destroyWeak(auStack_1f0);
    _objc_release(uStack_1c8);
    _objc_release(uVar18);
    _objc_release(puVar9);
    _objc_release(puVar8);
    dVar21 = dVar20;
  }
  _objc_destroyWeak(auStack_128);
  _objc_destroyWeak(auStack_120);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar16 + 4);
  _objc_destroyWeak(auStack_128);
  _objc_destroyWeak(auStack_120);
  __Unwind_Resume(param_5);
  lVar15 = param_5 + 0x20;
  _objc_loadWeakRetained(lVar15);
  lVar13 = lVar15;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_5 = param_5 + 0x20;
  _objc_loadWeakRetained(param_5);
  func_0x00010bef1720(dVar21,lVar13);
  _objc_release(param_5);
  _objc_release(lVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar15);
  return;
}



/* Entry: 107da39b4; end: 107da3a2f;  */

void FUN_107da39b4(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010bef1720(param_1,lVar2,param_3,param_2);
  _objc_release(param_2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107da3a30; end: 107da3a57;  */

void FUN_107da3a30(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107da3a58; end: 107da3b47;  */

void FUN_107da3a58(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee8b00();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107da3b48; end: 107da3cff; -[SCSpectaclesPreviewVideoActivityItemGenerator _videoCompletedWithUrl:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107da3b48(undefined *param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126d7cb8;
  if (param_4 == 0) {
    if (param_3 == (undefined *)0x0) goto LAB_107da3cb8;
    puVar2 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = param_1;
    func_0x00010c0844e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010bef1700(puVar2);
  }
  else {
    ppuStack_68 = &PTR____CFConstantStringClassReference_110ec97f8;
    puStack_60 = PTR____kCFBooleanTrue_11034ab68;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    unaff_x23 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = param_1;
    func_0x00010c0844e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010bef16e0(unaff_x23);
    _objc_release(unaff_x24);
  }
  _objc_release(unaff_x23);
  _objc_release(puVar2);
  unaff_x22 = puVar2;
LAB_107da3cb8:
  _objc_release(param_4);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_107da3d00;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = unaff_x24;
  puStack_a8 = unaff_x23;
  puStack_a0 = unaff_x22;
  puStack_98 = param_1;
  lStack_90 = param_4;
  puStack_88 = param_3;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  puVar3 = PTR_PTR_1126d7cb8;
  if (puVar1 != (undefined *)0x0) {
    if (*(long *)(puVar2 + _DAT_11276f09c) == 0) {
      ppuStack_c8 = &PTR____CFConstantStringClassReference_110ec97f8;
      puStack_c0 = PTR____kCFBooleanTrue_11034ab68;
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,0,&puStack_c0,&ppuStack_c8,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99380(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      (**(code **)(puVar1 + 0x10))(puVar1,0,puVar3);
      _objc_release(puVar3);
    }
    else {
      (**(code **)(puVar1 + 0x10))(puVar1,*(long *)(puVar2 + _DAT_11276f09c),0);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return puVar1;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar1 + _DAT_11276f098);
}



/* Entry: 107da3d00; end: 107da3e43; -[SCSpectaclesPreviewVideoActivityItemGenerator generateThumbnailForExport:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107da3d00(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d7cb8;
  if (param_3 != 0) {
    if (*(long *)(param_1 + _DAT_11276f09c) == 0) {
      ppuStack_58 = &PTR____CFConstantStringClassReference_110ec97f8;
      puStack_50 = PTR____kCFBooleanTrue_11034ab68;
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,0,&puStack_50,&ppuStack_58,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99380(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      (**(code **)(param_3 + 0x10))(param_3,0,puVar2);
      _objc_release(puVar2);
    }
    else {
      (**(code **)(param_3 + 0x10))(param_3,*(long *)(param_1 + _DAT_11276f09c),0);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_3;
  }
  ___stack_chk_fail();
  return *(long *)(param_3 + _DAT_11276f098);
}



/* Entry: 107da3e44; end: 107da3e53; -[SCSpectaclesPreviewVideoActivityItemGenerator videoFilter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107da3e44(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f098);
}



/* Entry: 107da3e54; end: 107da3eb3; -[SCSpectaclesPreviewVideoActivityItemGenerator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107da3e54(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276f098,0);
  _objc_storeStrong(param_1 + _DAT_11276f0a4,0);
  _objc_storeStrong(param_1 + _DAT_11276f0a0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276f09c,0);
  return;
}



/* Entry: 107da3eb4; end: 107da4173; -[SCSpectaclesStereoVideoSpawner initWithUserSession:dataObjectContext:cloudFS:encryptedContentManager:cachingMediaManager:reverseAudioCache:uploadToYoutube:performer:spectaclesAuxiliaryContentServices:previewAssetVideoProviderFactory:targetTrajectoryFactory:circumstanceEngine:snapVideoFilterScopeExposer:] */

undefined8 *
FUN_107da3eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

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
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_68 = PTR_PTR_1126fb0d0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 1) = param_9;
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xd,param_16);
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107da4174; end: 107da417b; -[SCSpectaclesStereoVideoSpawner spawnLeftGeneratorForSnap:] */

void FUN_107da4174(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__generatorForSnap_primaryCamera__112564af8,param_3,1);
  return;
}



/* Entry: 107da417c; end: 107da4183; -[SCSpectaclesStereoVideoSpawner spawnRightGeneratorForSnap:] */

void FUN_107da417c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__generatorForSnap_primaryCamera__112564af8,param_3,2);
  return;
}



/* Entry: 107da4184; end: 107da41d7; -[SCSpectaclesStereoVideoSpawner _generatorForSnap:primaryCamera:] */

void FUN_107da4184(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x00010c065520();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d7c10;
  _objc_alloc(PTR_PTR_1126d7c10);
  func_0x00010c017760();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107da41d8; end: 107da42cb; -[SCSpectaclesStereoVideoSpawner innerGeneratorForSnap:primaryCamera:] */

void FUN_107da41d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined *puVar8;
  
  puVar8 = PTR_PTR_1126d7c40;
  _objc_retain(param_3);
  _objc_alloc(puVar8);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = *(undefined1 *)(param_1 + 8);
  param_1 = param_1 + 0x68;
  _objc_loadWeakRetained();
  func_0x00010c0170a0(puVar8,param_2,param_3,uVar6,uVar1,uVar4,uVar2,uVar5,uVar3,7,uVar7);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 107da42cc; end: 107da42d3; -[SCSpectaclesStereoVideoSpawner userSession] */

undefined8 FUN_107da42cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107da42d4; end: 107da42db; -[SCSpectaclesStereoVideoSpawner dataObjectContext] */

undefined8 FUN_107da42d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107da42dc; end: 107da42e3; -[SCSpectaclesStereoVideoSpawner cloudFS] */

undefined8 FUN_107da42dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107da42e4; end: 107da42eb; -[SCSpectaclesStereoVideoSpawner encryptedContentManager] */

undefined8 FUN_107da42e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107da42ec; end: 107da42f3; -[SCSpectaclesStereoVideoSpawner cachingMediaManager] */

undefined8 FUN_107da42ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107da42f4; end: 107da42fb; -[SCSpectaclesStereoVideoSpawner reverseAudioCache] */

undefined8 FUN_107da42f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107da42fc; end: 107da4303; -[SCSpectaclesStereoVideoSpawner uploadToYoutube] */

undefined1 FUN_107da42fc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107da4304; end: 107da430b; -[SCSpectaclesStereoVideoSpawner performer] */

undefined8 FUN_107da4304(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107da430c; end: 107da4313; -[SCSpectaclesStereoVideoSpawner spectaclesAuxiliaryContentServices] */

undefined8 FUN_107da430c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107da4314; end: 107da431b; -[SCSpectaclesStereoVideoSpawner previewAssetVideoProviderFactory] */

undefined8 FUN_107da4314(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107da431c; end: 107da4323; -[SCSpectaclesStereoVideoSpawner targetTrajectoryFactory] */

undefined8 FUN_107da431c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107da4324; end: 107da432b; -[SCSpectaclesStereoVideoSpawner circumstanceEngine] */

undefined8 FUN_107da4324(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107da432c; end: 107da4343; -[SCSpectaclesStereoVideoSpawner snapVideoFilterScopeExposer] */

void FUN_107da432c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107da4344; end: 107da43e7; -[SCSpectaclesStereoVideoSpawner .cxx_destruct] */

void FUN_107da4344(long param_1)

{
  _objc_destroyWeak(param_1 + 0x68);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107da43e8; end: 107da46bf; -[SCSpectaclesVideoActivityItemGenerator initWithGallerySnap:dataObjectContext:cloudFS:encryptedContentManager:cachingMediaManager:reverseAudioCache:userSession:spectaclesCustomExportFormat:uploadToYoutube:primaryCamera:spectaclesAuxiliaryContentServices:previewAssetVideoProviderFactory:targetTrajectoryFactory:circumstanceEngine:snapVideoFilterScopeExposer:] */

undefined8 *
FUN_107da43e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  puStack_70 = PTR_PTR_1126fb0d8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[7];
    puVar1[7] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[8];
    puVar1[8] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[9];
    puVar1[9] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[10];
    puVar1[10] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_9;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 4) = param_11;
    puVar1[0xe] = param_10;
    puVar1[0xf] = param_13;
    _objc_retain(param_14);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_17;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 3,param_18);
    puVar3 = PTR_PTR_1126d7cb0;
    _objc_alloc();
    func_0x00010c017120();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107da46c0; end: 107da46c7; -[SCSpectaclesVideoActivityItemGenerator itemId] */

void FUN_107da46c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107da46c8; end: 107da46cf; -[SCSpectaclesVideoActivityItemGenerator primarySortDate] */

void FUN_107da46c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf59970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_createTimeUtc_1125b4000);
  return;
}



/* Entry: 107da46d0; end: 107da46d7; -[SCSpectaclesVideoActivityItemGenerator secondarySortDate] */

void FUN_107da46d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf59970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_createTimeUtc_1125b4000);
  return;
}



/* Entry: 107da46d8; end: 107da471f; -[SCSpectaclesVideoActivityItemGenerator estimatedMediaSize] */

undefined8 FUN_107da46d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107f72990(uVar2,uVar1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107da4720; end: 107da472f; -[SCSpectaclesVideoActivityItemGenerator generateThumbnailForExport:] */

void FUN_107da4720(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c136ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_requestThumbnailForExporting__11262b4d0);
    return;
  }
  return;
}



/* Entry: 107da4730; end: 107da485f; -[SCSpectaclesVideoActivityItemGenerator generateItemForActivityType:] */

void FUN_107da4730(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c13a8c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107da4860;
  puStack_60 = &UNK_11084b7a0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(uVar2);
  uStack_58 = uVar2;
  FUN_107f723ec(uVar2,param_1,uVar1,&PTR____CFConstantStringClassReference_110ec9738,&puStack_78);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 107da4860; end: 107da489b;  */

void FUN_107da4860(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be1b400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107da489c; end: 107da4baf; -[SCSpectaclesVideoActivityItemGenerator _generateItemWithCloudFile:] */

void FUN_107da489c(double param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  double dVar9;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [16];
  
  uVar2 = param_5;
  _objc_retain();
  func_0x00010853f31c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf58fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b26c0;
  _objc_opt_class(PTR_PTR_1126b26c0);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar2 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  uVar6 = *(undefined8 *)(param_3 + 0x30);
  *(ulong *)(param_3 + 0x30) = uVar2;
  _objc_release(uVar6);
  puVar4 = PTR_PTR_1126bc7b8;
  uVar6 = *(undefined8 *)(param_3 + 0x40);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7160(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  FUN_107da09cc(*(undefined8 *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x38),puVar4,
                *(undefined8 *)(param_3 + 0x70),*(undefined1 *)(param_3 + 0x20));
  lVar7 = *(long *)(param_3 + 0x38);
  func_0x00010b5fa088();
  iVar1 = (int)(lVar7 - 2U) + 2;
  if (10 < lVar7 - 2U) {
    iVar1 = 5;
  }
  func_0x00010854b598(iVar1,*(undefined8 *)(param_3 + 0x70));
  dVar9 = param_1 * 0.5;
  if (*(long *)(param_3 + 0x70) != 7) {
    dVar9 = param_1;
  }
  _objc_initWeak(auStack_90,param_3);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_107da4bb0;
  puStack_a0 = &UNK_1108dd2b8;
  _objc_copyWeak(auStack_98,auStack_90);
  func_0x00010c1e4740(*(undefined8 *)(param_3 + 0x30));
  puVar8 = PTR_PTR_1126cf9c0;
  _objc_alloc(PTR_PTR_1126cf9c0);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  func_0x00010c048b20(dVar9,param_2,puVar8);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_initWeak(auStack_c0,puVar8);
  _objc_copyWeak(auStack_d0,auStack_90);
  _objc_copyWeak(auStack_c8,auStack_c0);
  func_0x00010c17fb20(puVar8);
  param_3 = param_3 + 0x18;
  _objc_loadWeakRetained(param_3);
  func_0x00010bf9d620();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_c0);
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar4);
  _objc_release(param_5);
  return;
}



/* Entry: 107da4bb0; end: 107da4c07;  */

void FUN_107da4bb0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  lVar1 = param_2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1720(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107da4c08; end: 107da4e43;  */

void FUN_107da4c08(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = (undefined *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar2 != 0) {
      puVar3 = puVar1 + 0x18;
      _objc_loadWeakRetained(puVar3);
      param_1 = param_1 + 0x28;
      _objc_loadWeakRetained(param_1);
      func_0x00010c12e1e0(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar3);
    }
    puVar3 = PTR_PTR_1126d7cb8;
    puVar6 = puVar1;
    if (param_4 == 0) {
      if (param_3 == 0) goto LAB_107da4df4;
      puVar3 = puVar1;
      func_0x00010bf6b020(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0844e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef1700(puVar3);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99380(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar4);
      func_0x00010bf6b020(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010c0844e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef16e0(puVar6);
      _objc_release(puVar4);
    }
    _objc_release(puVar6);
    _objc_release(puVar3);
  }
LAB_107da4df4:
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf2ebd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x30),PTR_s_cancelProcessing_1125a9498);
  return;
}


