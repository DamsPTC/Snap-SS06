/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1066cf7b8; end: 1066cf82f; -[SCLensExplorerLensViewModelProvider prefetchForViewModel:] */

void FUN_1066cf7b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010be11a00(param_1,param_2,param_3,0,0);
  func_0x00010be0fc60(param_1,param_2,param_3,0,0);
  lVar1 = param_3;
  func_0x00010bf341e0();
  if (lVar1 != 3) {
    func_0x00010be14ea0(param_1,param_2,param_3,0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066cf830; end: 1066cfa0b; -[SCLensExplorerLensViewModelProvider cancelPrefetchingForViewModel:] */

void FUN_1066cf830(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  func_0x00010c094be0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cd040;
  lVar1 = param_3;
  func_0x00010c0900a0();
  func_0x00010bf0ea20(*(undefined8 *)(param_1 + 0x30),puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  lVar1 = param_3;
  func_0x00010c26e0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar4 != 0) {
    lVar1 = param_3;
    func_0x00010c26e0a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010bfe5b40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar4 != 0) {
    lVar1 = param_3;
    func_0x00010bfe5b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar1);
  }
  puVar5 = puVar2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar5 != (undefined *)0x0) {
    puVar5 = puVar2;
    func_0x00010beec820(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3,param_2,puVar5);
    _objc_release(puVar5);
  }
  uVar6 = *(undefined8 *)(param_1 + 8);
  puVar5 = puVar3;
  func_0x00010bf51e00(puVar3);
  func_0x00010bf2e8c0(uVar6,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066cfa0c; end: 1066cfaf3; -[SCLensExplorerLensViewModelProvider _cancelAnimationFetchingForLensItem:] */

void FUN_1066cfa0c(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010bf039a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bfe8fa0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c0ba200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  ppuVar2 = param_3;
  func_0x00010c2810a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
  ppuVar4 = ppuVar3;
  func_0x00010c174bc0(ppuVar3,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  func_0x00010bf2e8c0(*(undefined8 *)(param_1 + 8),param_2,ppuVar4);
  _objc_release(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar3);
  return;
}



/* Entry: 1066cfaf4; end: 1066cfafb;  */

void FUN_1066cfaf4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010beec830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_absoluteString_112598bb0);
  return;
}



/* Entry: 1066cfafc; end: 1066cfd9b; -[SCLensExplorerLensViewModelProvider _fetchAnimationForViewModel:observer:] */

void FUN_1066cfafc(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c094be0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf039a0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    uVar8 = uVar1;
    func_0x00010bf039a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    func_0x00010bfe8fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf529e0();
    _objc_release(uVar3);
    _objc_release(uVar8);
    _objc_release(uVar2);
    if (1 < uVar4) {
      uVar2 = param_3;
      func_0x00010c1112a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar2;
      FUN_1066cfd9c();
      if ((int)uVar8 == 0) {
        uVar8 = 0;
      }
      else {
        uVar3 = param_3;
        func_0x00010c1112a0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bfe9920();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar4;
        func_0x00010bf529e0();
        _objc_release(uVar4);
        _objc_release(uVar3);
      }
      _objc_release(uVar2);
      uVar2 = uVar1;
      func_0x00010bf039a0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfe8fa0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf529e0();
      _objc_release(uVar3);
      _objc_release(uVar2);
      if (uVar8 < uVar4) {
        _objc_initWeak(auStack_58,param_4);
        uVar7 = *(undefined8 *)(param_1 + 8);
        func_0x00010c111c40(param_3);
        func_0x00010c092aa0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_60,auStack_58);
        _objc_retain(param_3);
        _objc_retain(uVar1);
        uVar5 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c0b6bc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c297260(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar7);
        _objc_release(uVar1);
        _objc_release(param_3);
        _objc_destroyWeak(auStack_60);
        _objc_destroyWeak(auStack_58);
      }
    }
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1066cfd9c; end: 1066cfe0f;  */

uint FUN_1066cfd9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  uVar3 = 0;
  if (param_1 != 0) {
    _objc_retain(param_1);
    func_0x00010c0ddbe0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c071ae0(param_1,param_2,puVar1);
    _objc_release(param_1);
    uVar3 = (uint)lVar2 ^ 1;
    _objc_release(puVar1);
  }
  return uVar3;
}



/* Entry: 1066cfe10; end: 1066d0053;  */

void FUN_1066cfe10(double param_1,long param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  _objc_retain(param_3);
  lVar1 = param_2 + 0x30;
  _objc_loadWeakRetained();
  if ((param_3 == 0) || (lVar1 == 0)) goto LAB_1066d002c;
  uVar2 = param_3;
  func_0x00010bfe9920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  if ((param_4 != 0) || (uVar3 < 2)) goto LAB_1066d002c;
  uVar2 = param_3;
  func_0x00010bfe9920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0d3c80();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c1112a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  FUN_1066cfd9c();
  if ((int)uVar8 == 0) {
LAB_1066cff44:
    _objc_release(uVar5);
  }
  else {
    lVar6 = *(long *)(param_2 + 0x20);
    func_0x00010c1112a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bfe9920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar6);
    _objc_release(uVar5);
    if (lVar7 == 0) {
      uVar5 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c1112a0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066b00(uVar4);
      goto LAB_1066cff44;
    }
  }
  uVar2 = uVar4;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  if (1 < uVar3) {
    uVar8 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010bf039a0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb6d40();
    uVar3 = uVar2;
    func_0x00010bf529e0(uVar2);
    _objc_release(uVar8);
    puVar10 = PTR__OBJC_CLASS___UIImage_1126aea68;
    uVar9 = uVar2;
    func_0x00010bf51e00(uVar2);
    func_0x00010bf036a0(param_1 * (double)uVar3,puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    puVar11 = PTR_PTR_1126ccc18;
    func_0x00010bf34360(PTR_PTR_1126ccc18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(lVar1);
    _objc_release(puVar11);
    _objc_release(puVar10);
  }
  _objc_release(uVar2);
  _objc_release(uVar4);
LAB_1066d002c:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066d0054; end: 1066d011f;  */

void FUN_1066d0054(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  if (uVar1 != 0) {
    uVar4 = param_2;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c071ae0();
    _objc_release(puVar2);
    _objc_release(uVar4);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      uVar4 = param_2;
      func_0x00010bfe6ac0(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar4 = 0;
    }
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1066d0120; end: 1066d01af;  */

bool FUN_1066d0120(double param_1,double param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  bool bVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c071ae0();
  if (((uVar2 & 1) != 0) || (func_0x00010c23d0a0(param_4), param_1 <= 0.0)) {
    bVar3 = false;
  }
  else {
    func_0x00010c23d0a0(param_4);
    bVar3 = 0.0 < param_2;
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  return bVar3;
}



/* Entry: 1066d01b0; end: 1066d042f; -[SCLensExplorerLensViewModelProvider _fetchIconForViewModel:observer:completion:] */

void FUN_1066d01b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9
                  )

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1066d0430;
  puStack_80 = &UNK_110934d38;
  _objc_retain(param_9);
  ppuVar1 = &puStack_98;
  uStack_78 = param_9;
  _objc_retainBlock();
  lVar2 = param_7;
  func_0x00010c094be0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bfe5b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 == 0) {
    pcVar6 = (code *)ppuVar1[2];
    lVar5 = 0;
  }
  else {
    lVar5 = param_7;
    func_0x00010bfe5680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 == 0) {
      _objc_initWeak(auStack_a0,param_8);
      uVar7 = *(undefined8 *)(param_5 + 8);
      lVar5 = lVar2;
      func_0x00010bfe5b40(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe5620(param_7);
      func_0x00010c093000(param_3,param_4,uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_a8,auStack_a0);
      _objc_retain(ppuVar1);
      _objc_retain(param_7);
      uVar3 = *(undefined8 *)(param_5 + 0x10);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0b6bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(uVar7);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar7);
      _objc_release(lVar5);
      _objc_release(param_7);
      _objc_release(ppuVar1);
      _objc_destroyWeak(auStack_a8);
      _objc_destroyWeak(auStack_a0);
      goto LAB_1066d03b4;
    }
    pcVar6 = (code *)ppuVar1[2];
    lVar5 = param_7;
  }
  (*pcVar6)(ppuVar1,lVar5);
LAB_1066d03b4:
  _objc_release(lVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_78);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return;
}



/* Entry: 1066d0430; end: 1066d0443;  */

void FUN_1066d0430(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001066d043c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1066d0444; end: 1066d051b;  */

void FUN_1066d0444(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126ccc18;
  if (lVar1 != 0) {
    if ((param_2 == 0) || (param_3 != 0)) {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
                (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
    }
    else {
      lVar2 = param_2;
      func_0x00010bfe6ac0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf34340(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      func_0x00010c0d9840(lVar1);
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar3);
      _objc_release(puVar3);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066d051c; end: 1066d068f; -[SCLensExplorerLensViewModelProvider _fetchThumbnailForViewModel:observer:completion:] */

void FUN_1066d051c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1066d0690;
  puStack_60 = &UNK_110934d38;
  _objc_retain(param_5);
  ppuVar1 = &puStack_78;
  uStack_58 = param_5;
  _objc_retainBlock();
  uVar2 = param_3;
  func_0x00010c1112a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_1066cfd9c();
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    func_0x00010becbbe0(param_1);
    lVar4 = param_1;
    func_0x00010becbb00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf529e0();
    if (lVar5 == 0) {
      (*(code *)ppuVar1[2])(ppuVar1,0);
    }
    else {
      func_0x00010be112e0(param_1);
    }
    _objc_release(lVar4);
  }
  else {
    (*(code *)ppuVar1[2])(ppuVar1,param_3);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1066d0690; end: 1066d06a3;  */

void FUN_1066d0690(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001066d069c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1066d06a4; end: 1066d095b; -[SCLensExplorerLensViewModelProvider _fetchFirstValidThumbnailForViewModel:imageType:thumbnailURLs:candidateIndex:observer:completion:] */

void FUN_1066d06a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1066d095c;
  puStack_88 = &UNK_110934d38;
  _objc_retain(param_8);
  ppuVar1 = &puStack_a0;
  uStack_80 = param_8;
  _objc_retainBlock();
  uVar2 = param_5;
  func_0x00010bf529e0();
  if (param_6 < uVar2) {
    uVar2 = param_5;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_a8,param_1);
    _objc_initWeak(auStack_b0,param_7);
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c111c40(param_3);
    func_0x00010c093000(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_d0,auStack_a8);
    _objc_copyWeak(auStack_c8,auStack_b0);
    _objc_retain(param_3);
    uStack_c0 = param_4;
    _objc_retain(param_5);
    uStack_b8 = param_6;
    _objc_retain(param_8);
    _objc_retain(ppuVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0b6bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(ppuVar1);
    _objc_release(param_8);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_c8);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_a8);
    _objc_release(uVar2);
  }
  else {
    (*(code *)ppuVar1[2])(ppuVar1,param_3);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_80);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1066d095c; end: 1066d096f;  */

void FUN_1066d095c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001066d0968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1066d0970; end: 1066d0a67;  */

void FUN_1066d0970(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_1 + 0x48;
    _objc_loadWeakRetained();
    if (lVar2 != 0) {
      if ((param_2 == 0) || (param_3 != 0)) {
        func_0x00010be112e0(lVar1);
      }
      else {
        lVar3 = param_2;
        func_0x00010bfe6ac0(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126ccc18;
        func_0x00010bf34360(PTR_PTR_1126ccc18);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(lVar2);
        (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),puVar4);
        _objc_release(puVar4);
        _objc_release(lVar3);
      }
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066d0a68; end: 1066d0acb;  */

void FUN_1066d0a68(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),7);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
  _objc_copyWeak(param_1 + 0x40,param_2 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x48,param_2 + 0x48);
  return;
}



/* Entry: 1066d0acc; end: 1066d0b27; -[SCLensExplorerLensViewModelProvider _thumbnailImageTypeForViewModel:] */

undefined8 FUN_1066d0acc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf341e0();
  if (lVar1 == 1) {
    uVar2 = 2;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf341e0();
    uVar2 = 1;
    if (lVar1 == 4) {
      uVar2 = 2;
    }
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1066d0b28; end: 1066d0c63; -[SCLensExplorerLensViewModelProvider _thumbnailCandidateURLsForViewModel:] */

void FUN_1066d0b28(undefined *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 **ppuVar5;
  undefined1 *puStack_50;
  long lStack_48;
  
  ppuVar5 = &puStack_50;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c094be0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010bf341e0();
  if ((puVar2 == (undefined1 *)0x1) ||
     (puVar2 = param_3, func_0x00010bf341e0(), puVar2 == (undefined1 *)0x4)) {
    puVar3 = puVar1;
    func_0x00010becbae0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = puVar1;
    func_0x00010bfe5b40();
    _objc_retainAutoreleasedReturnValue();
    param_1 = PTR____NSArray0__struct_11034ab48;
    if (puVar2 != (undefined1 *)0x0) {
      puVar3 = puVar1;
      func_0x00010bfe5b40();
      _objc_retainAutoreleasedReturnValue();
      param_1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_50 = puVar3;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = (undefined1 *)ppuVar5;
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_retain(puVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar1 = puVar3;
    func_0x00010c26e0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar1 != (undefined1 *)0x0) {
      puVar1 = puVar3;
      func_0x00010c26e0a0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4,param_2,puVar1);
      _objc_release(puVar1);
    }
    func_0x00010be1c520(param_3,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    if (param_3 != (undefined1 *)0x0) {
      puVar1 = puVar3;
      func_0x00010c26e0a0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_3;
      func_0x00010c071ae0(param_3,param_2,puVar1);
      _objc_release(puVar1);
      if (((ulong)puVar2 & 1) == 0) {
        func_0x00010befa120(puVar4,param_2,param_3);
      }
    }
    param_1 = puVar4;
    func_0x00010bf51e00(puVar4);
    _objc_release(param_3);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1066d0c64; end: 1066d0d6f; -[SCLensExplorerLensViewModelProvider _thumbnailCandidateURLsForLensItem:] */

void FUN_1066d0c64(ulong param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar2 = param_3;
  func_0x00010c26e0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c26e0a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  func_0x00010be1c520(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    lVar2 = param_3;
    func_0x00010c26e0a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c071ae0(param_1,param_2,lVar2);
    _objc_release(lVar2);
    if ((uVar3 & 1) == 0) {
      func_0x00010befa120(puVar1,param_2,param_1);
    }
  }
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1066d0d70; end: 1066d0e53; -[SCLensExplorerLensViewModelProvider _generatedThumbnailURLForLensItem:] */

void FUN_1066d0d70(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf039a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c54a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820(puVar4,param_2,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1066d0e54; end: 1066d106f; -[SCLensExplorerLensViewModelProvider _fetchAttributionIconForViewModel:observer:completion:] */

void FUN_1066d0e54(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c094be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cd040;
  func_0x00010c0900a0();
  func_0x00010bf0ea20(*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    lVar3 = param_3;
    func_0x00010bf0e9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      _objc_initWeak(auStack_68,param_4);
      uVar6 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf0ea00(param_3);
      func_0x00010c093000(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(param_5);
      _objc_retain(param_3);
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0b6bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar6);
      _objc_release(param_3);
      _objc_release(param_5);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
      goto LAB_1066d1004;
    }
  }
  if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_5,param_3);
  }
LAB_1066d1004:
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1066d1070; end: 1066d1153;  */

void FUN_1066d1070(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126ccc18;
  if (lVar1 != 0) {
    if ((param_2 == 0) || (param_3 != 0)) {
      lVar3 = *(long *)(param_1 + 0x28);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x10))(lVar3,*(undefined8 *)(param_1 + 0x20));
      }
    }
    else {
      lVar3 = param_2;
      func_0x00010bfe6ac0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf34300(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      func_0x00010c0d9840(lVar1);
      lVar3 = *(long *)(param_1 + 0x28);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x10))(lVar3,puVar2);
      }
      _objc_release(puVar2);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066d1154; end: 1066d119b; -[SCLensExplorerLensViewModelProvider .cxx_destruct] */

void FUN_1066d1154(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066d119c; end: 1066d1257; -[SCLensExplorerSelectionTracker initWithExternalSelectionTrigger:performerProvider:] */

long FUN_1066d119c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_4;
    _objc_release(uVar2);
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
    _objc_release(uVar2);
    func_0x00010bec89a0(param_1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1066d1258; end: 1066d136f; -[SCLensExplorerSelectionTracker _subsctibeOnExternalUpdates] */

void FUN_1066d1258(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0b6bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0ec0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1066d1370; end: 1066d13d3;  */

void FUN_1066d1370(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    _objc_release(uVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066d13d4; end: 1066d144f; -[SCLensExplorerSelectionTracker setSelectedItemIdentifier:] */

void FUN_1066d13d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c0ec800(PTR_PTR_1126ae750,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 8),param_2,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066d1450; end: 1066d14ef; -[SCLensExplorerSelectionTracker selectedItemIdentifierObservable] */

undefined * FUN_1066d1450(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = PTR_PTR_1126ae6b8;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = *(undefined8 *)(param_1 + 8);
  uStack_30 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_38,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cab40(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar1 + 0x28);
}



/* Entry: 1066d14f0; end: 1066d14f7; -[SCLensExplorerSelectionTracker selectedItemIdentifier] */

undefined8 FUN_1066d14f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1066d14f8; end: 1066d154b; -[SCLensExplorerSelectionTracker .cxx_destruct] */

void FUN_1066d14f8(long param_1)

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



/* Entry: 1066d154c; end: 1066d154f; -[SCLensExplorerNullSelectionTracker setSelectedItemIdentifier:] */

void FUN_1066d154c(void)

{
  return;
}



/* Entry: 1066d1550; end: 1066d1557; -[SCLensExplorerNullSelectionTracker selectedItemIdentifier] */

undefined8 FUN_1066d1550(void)

{
  return 0;
}



/* Entry: 1066d1558; end: 1066d15b3; -[SCLensExplorerNullSelectionTracker selectedItemIdentifierObservable] */

void FUN_1066d1558(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae6b8;
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066d15b4; end: 1066d1657; -[SCLensExplorerFavoritesOnboardingCellManager initWithActionHandler:lensExplorerAssetsProvider:] */

undefined1 *
FUN_1066d15b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f27c0;
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



/* Entry: 1066d1658; end: 1066d1663; -[SCLensExplorerFavoritesOnboardingCellManager reuseIdentifier] */

undefined ** FUN_1066d1658(void)

{
  return &PTR____CFConstantStringClassReference_110e596f8;
}



/* Entry: 1066d1664; end: 1066d16e3; -[SCLensExplorerFavoritesOnboardingCellManager identifierToCellClassMap] */

void FUN_1066d1664(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126cd048;
  _objc_opt_class();
  ppuVar6 = &puStack_20;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar6);
  puVar2 = PTR_PTR_1126cd048;
  _objc_opt_class(PTR_PTR_1126cd048);
  ppuVar4 = ppuVar6;
  _objc_opt_isKindOfClass(ppuVar6,puVar2);
  ppuVar1 = ppuVar6;
  if (((ulong)ppuVar4 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  func_0x00010c161980(ppuVar1);
  uVar5 = *(undefined8 *)(puVar3 + 0x10);
  func_0x00010bfa1540(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e700(ppuVar1);
  _objc_release(ppuVar1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar6);
  return;
}



/* Entry: 1066d16e4; end: 1066d177b; -[SCLensExplorerFavoritesOnboardingCellManager configureCollectionViewCell:] */

void FUN_1066d16e4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cd048;
  _objc_opt_class(PTR_PTR_1126cd048);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c161980(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfa1540(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e700(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066d177c; end: 1066d17ab; -[SCLensExplorerFavoritesOnboardingCellManager .cxx_destruct] */

void FUN_1066d177c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066d17ac; end: 1066d181f; -[SCLensExplorerFavoritesOnboardingSettings initWithUserSettings:] */

undefined1 * FUN_1066d17ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f27c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066d1820; end: 1066d183b; -[SCLensExplorerFavoritesOnboardingSettings onboardingCompleted] */

uint FUN_1066d1820(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2337e0(uVar1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 1066d183c; end: 1066d1843; -[SCLensExplorerFavoritesOnboardingSettings completeOnboarding] */

void FUN_1066d183c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_completeFavoritesOnboarding_1125ae7f8);
  return;
}



/* Entry: 1066d1844; end: 1066d184f; -[SCLensExplorerFavoritesOnboardingSettings .cxx_destruct] */

void FUN_1066d1844(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066d1850; end: 1066d18fb; -[SCLensExplorerFavoritesPageOnboardingCellManager initWithAssetsProvider:performerProvider:styleOverride:] */

undefined1 *
FUN_1066d1850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f27d0;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066d18fc; end: 1066d1907; -[SCLensExplorerFavoritesPageOnboardingCellManager reuseIdentifier] */

undefined ** FUN_1066d18fc(void)

{
  return &PTR____CFConstantStringClassReference_110e59718;
}



/* Entry: 1066d1908; end: 1066d1987; -[SCLensExplorerFavoritesPageOnboardingCellManager identifierToCellClassMap] */

void FUN_1066d1908(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126cd050;
  _objc_opt_class();
  ppuVar4 = &puStack_20;
  puStack_20 = puVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar4);
  puVar2 = PTR_PTR_1126cd050;
  _objc_opt_class(PTR_PTR_1126cd050);
  ppuVar3 = ppuVar4;
  _objc_opt_isKindOfClass(ppuVar4,puVar2);
  ppuVar1 = ppuVar4;
  if (((ulong)ppuVar3 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  func_0x00010c16ab40(ppuVar1);
  func_0x00010c1daa00(ppuVar1);
  func_0x00010c28a7c0(ppuVar1);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
  return;
}



/* Entry: 1066d1988; end: 1066d1a0f; -[SCLensExplorerFavoritesPageOnboardingCellManager configureCollectionViewCell:] */

void FUN_1066d1988(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cd050;
  _objc_opt_class(PTR_PTR_1126cd050);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c16ab40(uVar1);
  func_0x00010c1daa00(uVar1);
  func_0x00010c28a7c0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066d1a10; end: 1066d1a3f; -[SCLensExplorerFavoritesPageOnboardingCellManager .cxx_destruct] */

void FUN_1066d1a10(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066d1a40; end: 1066d1a47; -[SCLensExplorerNullOnboardingSettings onboardingCompleted] */

undefined8 FUN_1066d1a40(void)

{
  return 0;
}



/* Entry: 1066d1a48; end: 1066d1a4b; -[SCLensExplorerNullOnboardingSettings completeOnboarding] */

void FUN_1066d1a48(void)

{
  return;
}



/* Entry: 1066d1a4c; end: 1066d1b6f; -[SCLensExplorerOnboardingSectionViewModel initWithSectionConfiguration:sectionLayoutConfiguration:sectionHeaderProvider:dataStore:cellManager:onboardingSettings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1066d1a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_6);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f27d8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithSectionConfiguration_sec_1125317e0,param_3,param_4,
                      param_5,param_7);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11274e1e4;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274e1e8;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274e1ec);
    *(undefined **)((long)puVar1 + (long)_DAT_11274e1ec) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274e1f0);
    *(undefined **)((long)puVar1 + (long)_DAT_11274e1f0) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 1066d1b70; end: 1066d1b93; -[SCLensExplorerOnboardingSectionViewModel contentCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1066d1b70(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274e1e4);
  func_0x00010c0e7dc0(uVar1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 1066d1b94; end: 1066d1b97; -[SCLensExplorerOnboardingSectionViewModel warmup] */

void FUN_1066d1b94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec6b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__subscribeOnDataStoreItems_11258f480);
  return;
}



/* Entry: 1066d1b98; end: 1066d1cd3; -[SCLensExplorerOnboardingSectionViewModel _subscribeOnDataStoreItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066d1b98(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274e1e8);
  func_0x00010bf00280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e0ea0(uVar1);
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
  return;
}



/* Entry: 1066d1cd4; end: 1066d1d1b;  */

void FUN_1066d1cd4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27d60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066d1d1c; end: 1066d1dc3; -[SCLensExplorerOnboardingSectionViewModel _handleDataStoreUpdatesWithLenses:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066d1d1c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11274e1e4;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010c0e7dc0();
  if ((uVar1 & 1) == 0) {
    lVar2 = param_3;
    func_0x00010bf529e0();
    uVar4 = *(undefined8 *)(param_1 + _DAT_11274e1ec);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar2 != 0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4,param_2,puVar3);
    _objc_release(puVar3);
    if (lVar2 != 0) {
      func_0x00010bf43a40(*(undefined8 *)(param_1 + lVar5));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066d1dc4; end: 1066d1dd3; -[SCLensExplorerOnboardingSectionViewModel isEmptyObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066d1dc4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274e1ec);
}



/* Entry: 1066d1dd4; end: 1066d1e73; -[SCLensExplorerOnboardingSectionViewModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066d1dd4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274e1f0,0);
  _objc_storeStrong(param_1 + _DAT_11274e1ec,0);
  _objc_storeStrong(param_1 + _DAT_11274e1e4,0);
  _objc_storeStrong(param_1 + _DAT_11274e1f4,0);
  _objc_storeStrong(param_1 + _DAT_11274e1e8,0);
  _objc_storeStrong(param_1 + _DAT_11274e1f8,0);
  _objc_storeStrong(param_1 + _DAT_11274e1fc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274e200,0);
  return;
}



/* Entry: 1066d1e74; end: 1066d1f1f; -[SCLensExplorerRecentBannerCellManager initWithAssetsProvider:performerProvider:styleOverride:] */

undefined1 *
FUN_1066d1e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f27e0;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066d1f20; end: 1066d1f2b; -[SCLensExplorerRecentBannerCellManager reuseIdentifier] */

undefined ** FUN_1066d1f20(void)

{
  return &PTR____CFConstantStringClassReference_110e59738;
}



/* Entry: 1066d1f2c; end: 1066d1fab; -[SCLensExplorerRecentBannerCellManager identifierToCellClassMap] */

void FUN_1066d1f2c(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126cd058;
  _objc_opt_class();
  ppuVar4 = &puStack_20;
  puStack_20 = puVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar4);
  puVar2 = PTR_PTR_1126cd058;
  _objc_opt_class(PTR_PTR_1126cd058);
  ppuVar3 = ppuVar4;
  _objc_opt_isKindOfClass(ppuVar4,puVar2);
  ppuVar1 = ppuVar4;
  if (((ulong)ppuVar3 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  func_0x00010c09ae00(ppuVar1);
  func_0x00010c28a7c0(ppuVar1);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
  return;
}



/* Entry: 1066d1fac; end: 1066d2027; -[SCLensExplorerRecentBannerCellManager configureCollectionViewCell:] */

void FUN_1066d1fac(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cd058;
  _objc_opt_class(PTR_PTR_1126cd058);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c09ae00(uVar1);
  func_0x00010c28a7c0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066d2028; end: 1066d2057; -[SCLensExplorerRecentBannerCellManager .cxx_destruct] */

void FUN_1066d2028(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066d2058; end: 1066d20db; -[SCLensExplorerCreatorPreviewFetcher initImagesDataStore:previewsLimit:] */

undefined1 *
FUN_1066d2058(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f27e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066d20dc; end: 1066d21b7; -[SCLensExplorerCreatorPreviewFetcher fetchPreviewsForCreatorViewModel:] */

void FUN_1066d20dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0960a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1066d21b8;
  puStack_48 = &UNK_110934dc8;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ae6b8;
  func_0x00010c0cab40(PTR_PTR_1126ae6b8,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066d21b8; end: 1066d21c7;  */

void FUN_1066d21b8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7fe10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__previewObservableForPreviewMode_11257d920,
             param_2,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1066d21c8; end: 1066d22e7; -[SCLensExplorerCreatorPreviewFetcher prefetchPreviewsForCreatorViewModel:] */

void FUN_1066d21c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long unaff_x22;
  long unaff_x23;
  undefined1 *puVar7;
  long unaff_x24;
  undefined *puStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  undefined1 *puStack_278;
  undefined1 *puStack_270;
  undefined1 *puStack_268;
  long lStack_260;
  long lStack_258;
  undefined1 *puStack_250;
  long lStack_248;
  undefined1 **ppuStack_240;
  code *pcStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [128];
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = param_3;
  func_0x00010c0960a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    unaff_x23 = *plStack_110;
    do {
      unaff_x24 = 0;
      do {
        if (*plStack_110 != unaff_x23) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010be13280(param_1,param_2,*(undefined8 *)(lStack_118 + unaff_x24 * 8),param_3,0);
        unaff_x24 = unaff_x24 + 1;
      } while (lVar2 != unaff_x24);
      lVar2 = lVar1;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_230;
  pcStack_128 = FUN_1066d22e8;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lStack_160 = unaff_x24;
  lStack_158 = unaff_x23;
  lStack_150 = unaff_x22;
  lStack_148 = lVar1;
  uStack_140 = param_1;
  lStack_138 = param_3;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x00010c0960a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = auStack_1e8;
  puVar4 = (undefined1 *)puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined1 *)0x0) {
    unaff_x22 = *plStack_220;
    do {
      puVar7 = (undefined1 *)0x0;
      do {
        if (*plStack_220 != unaff_x22) {
          _objc_enumerationMutation(puVar3);
        }
        func_0x00010bdda860(lVar2,param_2,*(undefined8 *)(lStack_228 + (long)puVar7 * 8));
        puVar7 = puVar7 + 1;
      } while (puVar4 != puVar7);
      puVar7 = auStack_1e8;
      puVar4 = (undefined1 *)puVar3;
      puVar6 = &uStack_230;
      func_0x00010bf52a60();
      lVar1 = 0;
    } while (puVar4 != (undefined1 *)0x0);
  }
  puVar4 = (undefined1 *)puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  pcStack_238 = FUN_1066d23e4;
  lStack_260 = unaff_x22;
  lStack_258 = lVar1;
  puStack_250 = (undefined1 *)puVar3;
  lStack_248 = lVar2;
  ppuStack_240 = &puStack_130;
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  puVar5 = PTR_PTR_1126ae6b8;
  puStack_298 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_290 = 0xc2000000;
  pcStack_288 = FUN_1066d24b0;
  puStack_280 = &UNK_1108683b8;
  puStack_278 = puVar4;
  puStack_270 = (undefined1 *)puVar6;
  puStack_268 = puVar7;
  _objc_retain(puVar7);
  _objc_retain(puVar6);
  func_0x00010bf54280(puVar5,param_2,&puStack_298);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_268);
  _objc_release(puStack_270);
  _objc_release(puVar7);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1066d22e8; end: 1066d23e3; -[SCLensExplorerCreatorPreviewFetcher cancelPrefetchPreviewsForCreatorViewModel:] */

void FUN_1066d22e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 unaff_x21;
  long unaff_x22;
  long lVar5;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
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
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar3 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x00010c0960a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = auStack_c8;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    unaff_x22 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != unaff_x22) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010bdda860(param_1,param_2,*(undefined8 *)(lStack_108 + lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      puVar4 = auStack_c8;
      lVar1 = param_3;
      puVar3 = &uStack_110;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar1 != 0);
  }
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_1066d23e4;
  lStack_140 = unaff_x22;
  uStack_138 = unaff_x21;
  lStack_130 = param_3;
  uStack_128 = param_1;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  _objc_retain(puVar4);
  puVar2 = PTR_PTR_1126ae6b8;
  puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_170 = 0xc2000000;
  pcStack_168 = FUN_1066d24b0;
  puStack_160 = &UNK_1108683b8;
  lStack_158 = lVar1;
  puStack_150 = (undefined1 *)puVar3;
  puStack_148 = puVar4;
  _objc_retain(puVar4);
  _objc_retain(puVar3);
  func_0x00010bf54280(puVar2,param_2,&puStack_178);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_148);
  _objc_release(puStack_150);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066d23e4; end: 1066d24af; -[SCLensExplorerCreatorPreviewFetcher _previewObservableForPreviewModel:сreatorViewModel:] */

void FUN_1066d23e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae6b8;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1066d24b0;
  puStack_50 = &UNK_1108683b8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066d24b0; end: 1066d24df;  */

void FUN_1066d24b0(long param_1,undefined8 param_2)

{
  func_0x00010be13280(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0418,PTR_s_create__1125b2a48,0);
  return;
}



/* Entry: 1066d24e0; end: 1066d26d7; -[SCLensExplorerCreatorPreviewFetcher _fetchPreviewForPreviewModel:creatorViewModel:observer:] */

void FUN_1066d24e0(double param_1,double param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6,undefined8 param_7)

{
  double dVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar4 = param_5;
  func_0x00010bf140c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 == 0) {
    lVar4 = param_6;
    func_0x00010c0960a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf529e0();
    _objc_release(lVar4);
    func_0x00010c1109e0(param_6);
    lVar4 = lVar2;
    if (lVar2 == 1) {
      lVar4 = *(long *)(param_3 + 0x10);
    }
    dVar5 = (double)lVar4;
    dVar6 = param_1 / dVar5;
    func_0x00010b816218();
    dVar7 = (double)(long)(dVar5 * dVar6) / dVar5;
    func_0x00010b816218();
    dVar6 = (double)(long)(param_2 * dVar5);
    dVar8 = dVar6 / dVar5;
    lVar4 = param_5;
    func_0x00010c1117a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar3 = param_5;
    if ((lVar2 == 1) || (lVar4 == 0)) {
      dVar9 = dVar8;
      dVar1 = dVar7;
      if (lVar2 == 1) {
        dVar9 = param_2;
        dVar1 = param_1;
      }
      lVar4 = param_5;
      func_0x00010c1117a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 == 0) {
        func_0x00010bfe5b40(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c111280(param_6);
      }
      else {
        func_0x00010c1117a0();
        _objc_retainAutoreleasedReturnValue();
        dVar5 = dVar7;
        dVar6 = dVar8;
      }
      func_0x00010be13360(dVar5,dVar6,dVar1,dVar9,param_3,param_4,lVar3,param_5,param_7);
    }
    else {
      func_0x00010c1117a0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be13380(dVar7,dVar8,param_3,param_4,lVar3,param_5,param_7);
    }
    _objc_release(lVar3);
  }
  else {
    func_0x00010c0d9840(param_7,param_4,param_5);
    func_0x00010bf436e0(param_7);
  }
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1066d26d8; end: 1066d28bb; -[SCLensExplorerCreatorPreviewFetcher _fetchPrimaryPreviewWithImageURL:preferredSize:previewModel:observer:] */

void FUN_1066d26d8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126cd060;
  func_0x00010c092d00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_3 + 8);
  _objc_retain(uVar4);
  func_0x00010c2a90a0(param_1,param_2,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_7);
  _objc_release(puVar2);
  _objc_initWeak(auStack_68,param_7);
  uVar3 = uVar4;
  func_0x00010c093000(param_1,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  puVar2 = puVar1;
  _objc_retain(puVar1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 1066d28bc; end: 1066d2997;  */

void FUN_1066d28bc(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((param_3 == 0) && (lVar1 != 0)) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      lVar2 = param_2;
      func_0x00010bfe6ac0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a9080(uVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar2);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf21f60(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(lVar1);
      _objc_release(uVar3);
      func_0x00010bf436e0(lVar1);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066d2998; end: 1066d2bcf; -[SCLensExplorerCreatorPreviewFetcher _fetchPreviewWithBlurredBackgroundImageURL:contentSize:backgroundSize:previewModel:observer:] */

void FUN_1066d2998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126cd060;
  func_0x00010c092d00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_5 + 8);
  _objc_retain(uVar4);
  func_0x00010c2b5d80(param_1,param_2,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a90a0(param_3,param_4,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_9);
  _objc_release(puVar2);
  _objc_initWeak(auStack_78,param_9);
  uVar3 = uVar4;
  func_0x00010c093000(param_1,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar4);
  _objc_retain(param_7);
  uStack_88 = param_3;
  uStack_80 = param_4;
  _objc_copyWeak(auStack_90,auStack_78);
  puVar2 = puVar1;
  _objc_retain(puVar1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_90);
  _objc_release(param_7);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return;
}



/* Entry: 1066d2bd0; end: 1066d2d1b;  */

void FUN_1066d2bd0(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((param_3 == 0) && (lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c093000(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_48,param_1 + 0x38);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar3);
    lVar1 = param_2;
    _objc_retain(param_2);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar2);
    _objc_release(lVar1);
    _objc_release(uVar2);
    _objc_release(param_2);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1066d2d1c; end: 1066d2e27;  */

void FUN_1066d2d1c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((param_3 == 0) && (lVar1 != 0)) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bfe6ac0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b5d60(uVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar2);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      lVar3 = param_2;
      func_0x00010bfe6ac0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a9080(uVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar3);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf21f60(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(lVar1);
      _objc_release(uVar4);
      func_0x00010bf436e0(lVar1);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066d2e28; end: 1066d2f2f; -[SCLensExplorerCreatorPreviewFetcher _cancelFetchingForPreviewModel:] */

void FUN_1066d2e28(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  
  puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_retain(param_3);
  ppuVar2 = param_3;
  func_0x00010c1117a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  ppuVar4 = param_3;
  func_0x00010bfe5b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  ppuVar5 = ppuVar4;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c226900(puVar6,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  func_0x00010bf2e8c0(*(undefined8 *)(param_1 + 8),param_2,puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1066d2f30; end: 1066d2f3b; -[SCLensExplorerCreatorPreviewFetcher .cxx_destruct] */

void FUN_1066d2f30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066d2f3c; end: 1066d3087; -[SCLensExplorerAutoSelectSectionItemsTracker initWithLensAutoSelection:lensExplorerRouter:sections:dataStoreFactory:selectionTracker:selectionUpdatesPerformer:] */

undefined1 *
FUN_1066d2f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f27f0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
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
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
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



/* Entry: 1066d3088; end: 1066d322f; -[SCLensExplorerAutoSelectSectionItemsTracker startTracking] */

void FUN_1066d3088(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar1 = param_1;
  func_0x00010bece360();
  if ((int)lVar1 != 0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar2;
    _objc_release(uVar5);
    _objc_initWeak(auStack_68,param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1066d3230;
    puStack_78 = &UNK_1108a4880;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010bfb26a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c0e0ea0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_98,auStack_68);
    uVar4 = uVar5;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  return;
}



/* Entry: 1066d3230; end: 1066d3313;  */

void FUN_1066d3230(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = param_2;
    func_0x00010c0b8600(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010c0cab40(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066d3314; end: 1066d331f;  */

void FUN_1066d3314(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9ceb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__sectionItemsObservableForSectio_112584d50,
             param_2);
  return;
}



/* Entry: 1066d3320; end: 1066d33b3;  */

void FUN_1066d3320(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010bfb0d80(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010c154b60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be32800(param_1);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066d33b4; end: 1066d33df; -[SCLensExplorerAutoSelectSectionItemsTracker stopTracking] */

void FUN_1066d33b4(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066d33e0; end: 1066d3497; -[SCLensExplorerAutoSelectSectionItemsTracker _trackingEnabled] */

undefined1 FUN_1066d33e0(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 1;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1066d3498;
  puStack_50 = &UNK_110847658;
  puStack_38 = puStack_48;
  func_0x00010c0bf020(*(undefined8 *)(param_1 + 8),param_2,&puStack_68,
                      &PTR___NSConcreteGlobalBlock_110934eb8,&PTR___NSConcreteGlobalBlock_110934ef8)
  ;
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 1066d3498; end: 1066d34af;  */

void FUN_1066d3498(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 1066d34b0; end: 1066d35ab; -[SCLensExplorerAutoSelectSectionItemsTracker _sectionItemsObservableForSection:] */

void FUN_1066d34b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_3;
  func_0x00010c155f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c093d60(uVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf00280();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1066d35ac;
  puStack_50 = &UNK_1108ec030;
  uStack_48 = param_3;
  _objc_retain(param_3);
  uVar3 = uVar2;
  func_0x00010c0b8600(uVar2,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1066d35ac; end: 1066d35c3;  */

void FUN_1066d35ac(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f2b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b60f8,PTR_s_pairWithFirst_second__11261a4e8,*(undefined8 *)(param_1 + 0x20)
             ,param_2);
  return;
}



/* Entry: 1066d35c4; end: 1066d36db; -[SCLensExplorerAutoSelectSectionItemsTracker _handleUpdateForSection:withItems:] */

void FUN_1066d35c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
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
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1066d36e0;
  puStack_70 = &UNK_110848ba8;
  lStack_68 = param_1;
  _objc_retain(param_4);
  uStack_60 = param_4;
  _objc_retain(param_3);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1066d372c;
  puStack_a8 = &UNK_110934f38;
  lStack_a0 = param_1;
  uStack_98 = param_4;
  uStack_90 = param_3;
  uStack_58 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0bf020(uVar2,param_2,&PTR___NSConcreteGlobalBlock_110934f18,&puStack_88,&puStack_c0);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1066d36dc; end: 1066d36df;  */

void FUN_1066d36dc(void)

{
  return;
}



/* Entry: 1066d36e0; end: 1066d372b;  */

void FUN_1066d36e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c155f60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd1920(uVar1,param_2,uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1066d372c; end: 1066d378f;  */

void FUN_1066d372c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c155f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd1940(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1066d3790; end: 1066d38db; -[SCLensExplorerAutoSelectSectionItemsTracker _autoSelectFirstLensFromItems:sectionId:] */

void FUN_1066d3790(undefined8 param_1,undefined8 param_2,long param_3,undefined1 *param_4,
                  undefined8 param_5,ulong param_6)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
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
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  puVar5 = auStack_d8;
  lVar6 = 0x10;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        puVar2 = *(undefined1 **)(lStack_118 + lVar8 * 8);
        func_0x00010bf0a820();
        _objc_retainAutoreleasedReturnValue();
        if (puVar2 != (undefined1 *)0x0) {
          puVar3 = (undefined8 *)puVar2;
          puVar5 = param_4;
          func_0x00010be261c0(param_1,param_2,puVar2,param_4);
          _objc_release(puVar2);
          goto LAB_1066d388c;
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      puVar5 = auStack_d8;
      lVar6 = 0x10;
      lVar1 = param_3;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
LAB_1066d388c:
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain(puVar5);
    func_0x00010bf43280(puVar3,param_2,&PTR___NSConcreteGlobalBlock_110934f88);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = (undefined1 *)puVar3;
    func_0x00010bf529e0();
    if ((ulong)((long)puVar2 - lVar6) <= param_6) {
      param_6 = (long)puVar2 - lVar6;
    }
    puVar2 = (undefined1 *)puVar3;
    func_0x00010c25e980(puVar3,param_2,lVar6,param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c11f1a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010be261c0(param_3,param_2,puVar4,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 1066d38dc; end: 1066d399f; -[SCLensExplorerAutoSelectSectionItemsTracker _autoSelectRandomLensFromItems:sectionId:inRange:] */

void FUN_1066d38dc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,ulong param_6)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  func_0x00010bf43280(param_3,param_2,&PTR___NSConcreteGlobalBlock_110934f88);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf529e0();
  if ((ulong)(lVar1 - param_5) <= param_6) {
    param_6 = lVar1 - param_5;
  }
  lVar1 = param_3;
  func_0x00010c25e980(param_3,param_2,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c11f1a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010be261c0(param_1,param_2,lVar2,param_4);
  _objc_release(param_4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066d39a0; end: 1066d39a7;  */

void FUN_1066d39a0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0a830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_asLensItem_1125a03b0);
  return;
}



/* Entry: 1066d39a8; end: 1066d3a5b; -[SCLensExplorerAutoSelectSectionItemsTracker _handleAutoSelectedItem:sectionId:] */

void FUN_1066d39a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2810a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb280(*(undefined8 *)(param_1 + 0x28),param_2,uVar1);
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010be73be0(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd1e60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1066d3a5c; end: 1066d3adf; -[SCLensExplorerAutoSelectSectionItemsTracker _pickItemFromLensItem:sectionId:] */

void FUN_1066d3a5c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_4);
    func_0x00010c0ba1a0(param_3,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126ccc68;
    func_0x00010c094c40(PTR_PTR_1126ccc68,param_2,param_3,param_4,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066d3ae0; end: 1066d3b47; -[SCLensExplorerAutoSelectSectionItemsTracker .cxx_destruct] */

void FUN_1066d3ae0(long param_1)

{
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



/* Entry: 1066d3b48; end: 1066d3c7b; -[SCLensExplorerCategoryDynamicFetchingColleague initWithMediator:queryCoordinator:sectionConfigurations:queryProvider:logger:] */

undefined1 *
FUN_1066d3b48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f27f8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x30) = 0;
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    func_0x00010bec8340(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


