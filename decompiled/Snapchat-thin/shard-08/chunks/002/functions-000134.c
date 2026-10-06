/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105e53830; end: 105e5385b;  */

void FUN_105e53830(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e5385c; end: 105e53863; -[SCSearchSelectionHighlighter setEnabled:] */

void FUN_105e5385c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 105e53864; end: 105e5390b; -[SCSearchSelectionHighlighter _onSelectionChange] */

void FUN_105e53864(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      lVar1 = param_1 + 8;
      _objc_loadWeakRetained(lVar1);
      func_0x00010bf179a0();
      _objc_release(lVar1);
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      func_0x00010c1586c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 105e5390c; end: 105e53937; -[SCSearchSelectionHighlighter .cxx_destruct] */

void FUN_105e5390c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105e53938; end: 105e53a1f;  */

void FUN_105e53938(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSTextAttachment_1126b2a20;
  _objc_alloc_init(PTR__OBJC_CLASS___NSTextAttachment_1126b2a20);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2c4d8;
  if (param_1 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e2c4f8;
  }
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c14e2a0(0x4025000000000000,0x4025000000000000,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar4;
  func_0x00010bfe9720(puVar4,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  func_0x00010bf0e420(PTR__OBJC_CLASS___NSAttributedString_1126af068,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e53a20; end: 105e53b87;  */

void FUN_105e53a20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  lVar2 = param_1;
  func_0x00010c08aaa0();
  uVar3 = param_2;
  if (lVar2 != 1) {
    uVar3 = param_3;
  }
  func_0x00010bf51e00(uVar3);
  func_0x00010bf069e0(puVar1);
  _objc_release(uVar3);
  lVar2 = param_1;
  func_0x00010c08a160(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_retain();
  _objc_alloc(puVar4);
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bfb5a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010c14de00(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e820(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010bf069e0(puVar1);
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e53b88; end: 105e53ccb;  */

byte FUN_105e53b88(double param_1,ulong param_2,ulong param_3)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  
  _objc_retain();
  if (param_2 != 0) {
    puVar3 = PTR_PTR_1126b2970;
    _objc_opt_class(PTR_PTR_1126b2970);
    uVar4 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar3);
    if ((uVar4 & 1) != 0) {
      uVar4 = param_2;
      func_0x00010c08a160();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_2;
      func_0x00010c08a0a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_2;
      func_0x00010c088500();
      _objc_retainAutoreleasedReturnValue();
      if (uVar4 == 0) {
        bVar1 = false;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f380();
        bVar1 = param_1 / 60.0 < (double)param_3;
        _objc_release(puVar3);
      }
      if ((uVar5 == 0 && uVar6 == 0) || (uVar7 = uVar4, func_0x00010bf433a0(), uVar7 == 1)) {
        bVar2 = true;
      }
      else {
        uVar7 = uVar4;
        func_0x00010bf433a0(uVar4);
        bVar2 = uVar7 == 1;
      }
      bVar8 = bVar1 & bVar2;
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      goto LAB_105e53cac;
    }
  }
  bVar8 = 0;
LAB_105e53cac:
  _objc_release(param_2);
  return bVar8;
}



/* Entry: 105e53ccc; end: 105e53d53;  */

bool FUN_105e53ccc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  
  _objc_retain();
  FUN_105e53b88(param_2,param_3);
  if ((((int)param_2 == 0) || (uVar2 = param_1, func_0x000100bec434(), (uVar2 & 1) != 0)) ||
     (uVar2 = param_1, func_0x00010901c54c(), (uVar2 & 1) != 0)) {
    bVar1 = false;
  }
  else {
    uVar2 = param_1;
    func_0x00010bfb8280(param_1);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = uVar2 != 0;
    _objc_release();
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 105e53d54; end: 105e545df;  */

void FUN_105e53d54(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  undefined *puStack_f8;
  undefined *puStack_e0;
  undefined *puStack_d0;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar2 = param_1;
  FUN_105e5c428();
  _objc_retainAutoreleasedReturnValue();
  if (param_6 == 0) {
    puStack_d0 = PTR_PTR_1126b53f0;
    func_0x00010bf811c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar20 = param_1;
    func_0x00010c070aa0();
    if ((uVar20 & 1) != 0) {
      puStack_e0 = (undefined *)0x0;
      puStack_d0 = (undefined *)0x0;
      bVar1 = true;
      goto LAB_105e53f1c;
    }
    puStack_d0 = PTR_PTR_1126b53f0;
    func_0x00010c159140();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_retain(uVar2);
  _objc_retain(param_5);
  puStack_e0 = PTR_PTR_1126b02a8;
  _objc_alloc();
  puVar3 = PTR_PTR_1126b5650;
  _objc_retain(uVar2);
  _objc_retain(param_5);
  _objc_alloc();
  func_0x00010c043e20();
  _objc_release(uVar2);
  _objc_release(param_5);
  puVar4 = PTR_PTR_1126b5658;
  _objc_alloc(PTR_PTR_1126b5658);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043e40(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  func_0x00010c01b460();
  _objc_release(puVar4);
  _objc_release(param_5);
  _objc_release(uVar2);
  bVar1 = false;
LAB_105e53f1c:
  puVar3 = PTR_PTR_1126b52c0;
  _objc_alloc();
  _objc_retain(0);
  _objc_retain(param_1);
  uVar20 = param_1;
  func_0x00010c0fb380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar20 == 0) {
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0,0,0,0x3fa999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c5270;
    _objc_alloc();
    uVar20 = param_1;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25cf20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x00010c28ed80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    puVar9 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar8;
    func_0x00010bf44700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar9 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar7;
    func_0x00010bfaea40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    ppuVar11 = ppuVar10;
    func_0x00010bf529e0();
    if (ppuVar11 == (undefined **)0x0) {
      ppuVar11 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar12 = ppuVar10;
      func_0x00010bf529e0();
      ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      ppuVar13 = ppuVar10;
      if (ppuVar12 == (undefined **)0x1) {
        func_0x00010bfb1920(ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar13;
        func_0x00010c260c20();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar13;
        func_0x00010c260c20();
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuVar10;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = ppuVar14;
        func_0x00010c260c20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(ppuVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar15);
        _objc_release(ppuVar14);
        _objc_release(ppuVar12);
      }
      _objc_release(ppuVar13);
    }
    _objc_release(ppuVar10);
    _objc_release(ppuVar7);
    _objc_release(ppuVar8);
    uVar16 = param_1;
    func_0x00010c0faf60();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar16;
    func_0x00010c08fa60();
    uVar17 = uVar19;
    if (0x1f < uVar19) {
      uVar17 = 0x20;
    }
    if (uVar19 != 0) {
      uVar19 = 0;
      do {
        func_0x00010bf35920();
        uVar19 = uVar19 + 1;
      } while (uVar17 != uVar19);
    }
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c053400(puVar5);
    _objc_release(puVar9);
    _objc_release(uVar16);
    _objc_release(ppuVar11);
    _objc_release(uVar20);
    puStack_f8 = PTR_PTR_1126b53d0;
    func_0x00010c064c40();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
    uVar20 = param_1;
    func_0x00010c0fb380(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff6b20(puVar4);
    _objc_release(uVar20);
    puVar9 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar6 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
    func_0x00010c0469e0(0x4043000000000000,0x4043000000000000);
    _objc_retain(puVar9);
    puVar5 = puVar6;
    func_0x00010bfe91c0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar9);
    _objc_release(puVar6);
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126b53d8;
    _objc_alloc(PTR_PTR_1126b53d8);
    func_0x00010c01c3c0();
    puStack_f8 = PTR_PTR_1126b53d0;
    func_0x00010bfe98c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_1);
  uVar20 = param_1;
  _objc_retain(param_1);
  if (bVar1) {
    func_0x000105e545f8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar20 = 0;
  }
  puVar4 = PTR_PTR_1126b53e0;
  _objc_alloc(PTR_PTR_1126b53e0);
  uVar17 = param_1;
  func_0x00010901c4a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053c00(puVar4);
  _objc_release(uVar17);
  puVar5 = PTR_PTR_1126b53e8;
  func_0x00010bf16660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar20);
  _objc_release(param_1);
  puVar4 = PTR_PTR_1126b5678;
  _objc_alloc();
  func_0x00010c043e00();
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0192e0(0x7fefffffffffffff,0x3ff0000000000000,0x3fd3333333333333,0,puVar3);
  _objc_release(puVar9);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puStack_f8);
  _objc_release(0);
  _objc_release(puStack_e0);
  _objc_release(puStack_d0);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (0,0,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
               *(undefined8 *)(param_1 + 0x20),PTR_s_drawInRect__1125bfff0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e545e0; end: 105e5460f;  */

void FUN_105e545e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20),PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 105e54610; end: 105e54767;  */

void FUN_105e54610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc();
  puVar2 = PTR_PTR_1126b5650;
  _objc_retain(param_1);
  _objc_retain(param_4);
  _objc_alloc();
  func_0x00010c043e20();
  _objc_release(param_1);
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126b5658;
  _objc_alloc(PTR_PTR_1126b5658);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043e40(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  func_0x00010c01b460();
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126b02a8;
    _objc_retain();
    _objc_alloc(puVar1);
    puVar2 = PTR_PTR_1126c24e0;
    _objc_alloc(PTR_PTR_1126c24e0);
    func_0x00010c043de0();
    _objc_release(param_1);
    func_0x00010c01b460(puVar1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e54768; end: 105e547e7;  */

void FUN_105e54768(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_retain();
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c24e0;
  _objc_alloc(PTR_PTR_1126c24e0);
  func_0x00010c043de0();
  _objc_release(param_1);
  func_0x00010c01b460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e2c5d8,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e547e8; end: 105e54a8b;  */

void FUN_105e547e8(long param_1,undefined4 param_2,uint param_3,undefined4 param_4)

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
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lVar3 = param_1;
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010050471c();
  _objc_release(lVar3);
  lVar5 = param_1;
  func_0x00010c089e20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      uVar15 = *(undefined8 *)(lVar16 * 8);
      lVar6 = lVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 != 0) {
        lVar7 = lVar6;
        func_0x00010bf85d80(lVar6);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar6;
        func_0x00010c294420(lVar6);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar6;
        func_0x00010bf1acc0(lVar6);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar6;
        func_0x00010bf1c0a0(lVar6);
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar6;
        func_0x00010bf40c40();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108feb5c8(uVar15,lVar7,lVar8,lVar9,lVar10,0,0,
                            &PTR__OBJC_CLASS___NSConstantArray_11117f600,param_2,0,lVar11,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar11);
        _objc_release(lVar10);
        _objc_release(lVar9);
        _objc_release(lVar8);
        _objc_release(lVar7);
        func_0x00010befa120(puVar2);
        _objc_release(uVar15);
      }
      _objc_release(lVar6);
      lVar16 = lVar16 + 1;
    } while (lVar3 != lVar16);
    lVar3 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  uVar13 = (ulong)param_3;
  puVar12 = puVar2;
  func_0x000108fecf14(puVar2,uVar13,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar13,PTR_s_userId_112682320);
  return;
}



/* Entry: 105e54a8c; end: 105e54a93;  */

void FUN_105e54a8c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 105e54a94; end: 105e54abb;  */

void FUN_105e54a94(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105e54abc; end: 105e54feb;  */

void FUN_105e54abc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
                  undefined8 param_13,undefined4 param_14,undefined4 param_15,ulong param_16,
                  undefined4 param_17,undefined4 param_18,long param_19)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_13);
  _objc_retain(param_10);
  uVar3 = param_4;
  func_0x000108ef7600();
  _objc_retainAutoreleasedReturnValue();
  if ((param_16 & 0xfffffffffffffffe) == 8) {
    lVar11 = param_5;
    func_0x00010c08fa60();
    bVar1 = lVar11 == 0;
    bVar2 = param_19 != 0;
    if (param_19 != 3) goto LAB_105e54bb8;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  bVar1 = true;
LAB_105e54bb8:
  puVar4 = PTR_PTR_1126b52c0;
  _objc_alloc();
  puVar5 = PTR_PTR_1126b53f0;
  func_0x00010c159140();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c2678;
  _objc_retain(param_4);
  _objc_alloc(puVar6);
  uVar7 = param_4;
  FUN_105e547e8(param_4,param_14,(undefined1)param_17,param_17._1_1_);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bff62a0(puVar6);
  _objc_release(uVar7);
  puVar8 = PTR_PTR_1126b53d0;
  func_0x00010bf133a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_retain(param_4);
  puVar6 = PTR_PTR_1126b53e0;
  _objc_alloc(PTR_PTR_1126b53e0);
  uVar7 = param_4;
  func_0x00010c2711a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  if (bVar1) {
    uVar9 = param_4;
    func_0x00010c260dc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c053c00(puVar6);
    _objc_release(uVar9);
  }
  else {
    func_0x00010c053c00(puVar6);
  }
  _objc_release(uVar7);
  puVar10 = PTR_PTR_1126b53e8;
  func_0x00010bf16660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(param_4);
  if (bVar2) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_5;
    func_0x000106c9d0e0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar7 = uVar3;
  FUN_105e54768();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  FUN_105e54610(uVar3,param_6,param_7,param_13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_13);
  puVar6 = PTR_PTR_1126b5678;
  _objc_alloc();
  func_0x00010c043e00();
  _objc_release(param_10);
  func_0x00010c0192e0(0x7fefffffffffffff,0x3ff0000000000000,param_1,0,puVar4);
  _objc_release(puVar6);
  _objc_release(uVar9);
  _objc_release(uVar7);
  if (!bVar2) {
    _objc_release(lVar11);
  }
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105e54fec; end: 105e55143;  */

void FUN_105e54fec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc();
  puVar2 = PTR_PTR_1126b5650;
  _objc_retain(param_1);
  _objc_retain(param_4);
  _objc_alloc();
  func_0x00010c043e20();
  _objc_release(param_1);
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126b5658;
  _objc_alloc(PTR_PTR_1126b5658);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043e40(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  func_0x00010c01b460();
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126b02a8;
    _objc_retain(param_2);
    _objc_retain(param_1);
    _objc_alloc(puVar1);
    puVar2 = PTR_PTR_1126c24e0;
    _objc_alloc(PTR_PTR_1126c24e0);
    func_0x00010c043de0();
    _objc_release(param_1);
    func_0x00010c01b460(puVar1);
    _objc_release(param_2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e55144; end: 105e551d7;  */

void FUN_105e55144(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c24e0;
  _objc_alloc(PTR_PTR_1126c24e0);
  func_0x00010c043de0();
  _objc_release(param_1);
  func_0x00010c01b460(puVar1);
  _objc_release(param_2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e551d8; end: 105e55a23;  */

void FUN_105e551d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined4 param_10,uint param_11,char param_12,
                  undefined4 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,long param_18,undefined4 param_19,undefined4 param_20,
                  undefined8 param_21)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puStack_e8;
  
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_18);
  _objc_retain(param_21);
  _objc_retain(&PTR____CFConstantStringClassReference_110e2c638);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_9);
  _objc_retain(param_7);
  puVar1 = param_5;
  func_0x000108ef82c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_5;
  if (param_11._3_1_ == '\0') {
    if (param_19._2_1_ == '\0') {
      lVar2 = param_18;
      func_0x00010c08fa60();
      puStack_e8 = PTR_PTR_1126b53e8;
      if (lVar2 == 0) {
        _objc_retain(param_5);
        _objc_retain(param_8);
        puVar4 = param_5;
        if ((param_11 & 0x10000) == 0) {
          func_0x00010901d7c4();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          FUN_105e55bac();
          _objc_retainAutoreleasedReturnValue();
        }
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if ((param_11 & 0x100) == 0) {
          _objc_retain(puVar4);
          puVar6 = puVar4;
        }
        else {
          ppuVar5 = &PTR____CFConstantStringClassReference_110e2c678;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2c678,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00(puVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar5);
        }
        puVar7 = param_5;
        func_0x000108f47298();
        if ((puVar7 == (undefined *)0x0) && (param_8 != 0)) {
          puVar7 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
          _objc_alloc();
          func_0x00010c04e820();
          puStack_e8 = PTR_PTR_1126b53e8;
          puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_retain(param_8);
          lVar2 = param_8;
          func_0x00010bf64de0(param_8);
          _objc_retainAutoreleasedReturnValue();
          uVar14 = 0x404e000000000000;
          func_0x00010bfb5a60(0x404e000000000000);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar2);
          puVar9 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
          _objc_alloc();
          puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          lVar2 = param_8;
          func_0x00010c09e300();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_8);
          func_0x00010c14de00(puVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c04e820();
          _objc_release(puVar10);
          _objc_release(lVar2);
          puVar10 = PTR__OBJC_CLASS___UIImage_1126aea68;
          func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = PTR__OBJC_CLASS___NSTextAttachment_1126b2a20;
          _objc_alloc_init(PTR__OBJC_CLASS___NSTextAttachment_1126b2a20);
          func_0x00010c1a9f00();
          func_0x00010c23d0a0(puVar10);
          func_0x00010c23d0a0(puVar10);
          func_0x00010c1739e0(0,0xbff8000000000000,uVar14,param_2,puVar11);
          puVar12 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
          _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
          puVar13 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
          func_0x00010bf0e420(PTR__OBJC_CLASS___NSAttributedString_1126af068);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bff4f40(puVar12);
          _objc_release(puVar13);
          func_0x00010bf069e0(puVar12);
          _objc_release(puVar11);
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(puVar8);
          func_0x00010bf0e6e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar12);
        }
        else {
          puVar7 = PTR_PTR_1126b53e0;
          _objc_alloc(PTR_PTR_1126b53e0);
          func_0x00010c053c00();
          puStack_e8 = PTR_PTR_1126b53e8;
          func_0x00010bf16660();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar4);
        _objc_release(param_8);
        goto LAB_105e554d8;
      }
      puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      func_0x00010901d7c4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e820(puVar4);
      puVar6 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      func_0x00010c04e820();
      func_0x00010bf0e6e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      puVar4 = param_5;
      func_0x00010901d7c4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e820(puVar3);
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      puVar6 = puVar4;
      func_0x000105e56998();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e820(puVar4);
      _objc_release(puVar6);
      puStack_e8 = PTR_PTR_1126b53e8;
      func_0x00010bf0e6e0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar4);
  }
  else {
    _objc_retain(param_5);
    func_0x000107cf4e54(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_5;
    func_0x00010901d7c4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    puStack_e8 = PTR_PTR_1126b53e8;
    puVar6 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x00010c04e820();
    func_0x00010bf0e6e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar4);
  }
LAB_105e554d8:
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b52c0;
  _objc_alloc(PTR_PTR_1126b52c0);
  _objc_retain(0);
  puVar4 = PTR_PTR_1126b53f0;
  func_0x00010c159140(PTR_PTR_1126b53f0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_5;
  FUN_105e55a24(param_5,param_6,param_17,param_7,(undefined1)param_19,param_19._1_1_,param_21);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_21);
  _objc_release(param_7);
  uVar14 = param_9;
  FUN_105e55b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  puVar7 = puVar1;
  FUN_105e55144(puVar1,&PTR____CFConstantStringClassReference_110e2c638);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110e2c638);
  puVar8 = puVar1;
  FUN_105e54fec(puVar1,param_10,(undefined1)param_11,param_16);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_16);
  puVar10 = PTR_PTR_1126b5678;
  _objc_alloc();
  func_0x00010c043e00();
  _objc_release(param_15);
  if (param_12 != '\0') {
    func_0x00010901e8b4();
  }
  func_0x00010c0192e0(0x7fefffffffffffff,0x3ff0000000000000,param_1,0,puVar3);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar14);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(0);
  _objc_release(puStack_e8);
  _objc_release(puVar1);
  _objc_release(param_18);
  _objc_release(param_8);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e55a24; end: 105e55b3f;  */

void FUN_105e55a24(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126c2678;
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  uVar2 = param_1;
  if (param_4 == 0) {
    func_0x000107cf5384(param_1,param_2,param_3,param_5,param_6,param_7);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000107cf55b0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  func_0x00010bff62a0(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b53d0;
  func_0x00010bf133a0(PTR_PTR_1126b53d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e55b40; end: 105e55bab;  */

void FUN_105e55b40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c2680;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010c052bc0();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126c2688;
  func_0x00010bf8ea80(PTR_PTR_1126c2688,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105e55bac; end: 105e55ddb;  */

void FUN_105e55bac(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010901d778();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = param_1;
    func_0x00010c294420(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = param_1;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf44700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar2 = puVar3;
    func_0x0001006372a4(puVar3,&PTR___NSConcreteGlobalBlock_1108ed0c8);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    FUN_105e56810();
    if ((int)puVar1 == 0) {
      puVar5 = (undefined *)0x1;
    }
    else {
      puVar1 = puVar2;
      func_0x00010bf529e0();
      if (puVar1 < (undefined *)0x2) {
        puVar5 = (undefined *)0x2;
      }
      else {
        puVar5 = (undefined *)0x1;
        puVar1 = puVar3;
        do {
          puVar4 = puVar2;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar1);
          puVar1 = puVar4;
          FUN_105e56810();
          _objc_release(puVar4);
          if ((int)puVar1 == 0) break;
          puVar5 = puVar5 + 1;
          puVar4 = puVar2;
          func_0x00010bf529e0();
          puVar1 = puVar3;
        } while (puVar5 < puVar4);
        puVar5 = puVar5 + 1;
      }
    }
    puVar4 = puVar2;
    func_0x00010bf529e0();
    puVar1 = puVar3;
    if (puVar5 < puVar4) {
      puVar5 = puVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c11f3a0();
      puVar4 = puVar5;
      func_0x00010c260c20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar4);
      _objc_release(puVar5);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e55ddc; end: 105e567ef;  */

void FUN_105e55ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined1 param_8,
                  undefined1 param_9,long param_10,undefined8 param_11,ulong param_12,
                  undefined8 param_13,undefined8 param_14,long param_15,long param_16,
                  undefined1 param_17,undefined4 param_18,undefined **param_19)

{
  byte bVar1;
  bool bVar2;
  undefined **ppuVar3;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_11);
  _objc_retain(param_13);
  ppuVar3 = param_19;
  _objc_retain();
  if (param_15 == 3) {
    func_0x000105e569b0();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_15 == 2) {
    func_0x000105e56980();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_15 == 1) {
    FUN_105e56968();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  bVar2 = param_16 - 4U < 6;
  bVar1 = 4;
  if (!bVar2 && param_10 + 1U < param_12) {
    bVar1 = 0;
  }
  FUN_105e551d8(param_1,param_16,bVar1 | (bVar2 || param_10 == 0) | 10U,param_2,param_3,param_4,
                param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_13,param_14,ppuVar3,
                param_17);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(param_19);
  _objc_release(param_13);
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_16);
  return;
}



/* Entry: 105e567f0; end: 105e5680f;  */

bool FUN_105e567f0(undefined8 param_1,long param_2)

{
  func_0x00010c08fa60(param_2);
  return param_2 != 0;
}



/* Entry: 105e56810; end: 105e5691f;  */

byte FUN_105e56810(long param_1)

{
  long lVar1;
  byte bVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    bVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c25cfc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 1;
    func_0x00010c08fa60();
    func_0x00010bf98040(lVar1);
    bVar2 = *(byte *)(puStack_48 + 3);
    __Block_object_dispose(&uStack_50,8);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  return bVar2 & 1;
}



/* Entry: 105e56920; end: 105e56967;  */

void FUN_105e56920(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *in_x6;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c071760(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_2);
  if (((ulong)puVar1 & 1) == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
    *in_x6 = 1;
  }
  return;
}



/* Entry: 105e56968; end: 105e569c7;  */

void FUN_105e56968(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2c6b8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e2c6b8,
                      &PTR____CFConstantStringClassReference_110e2c698,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105e569c8; end: 105e56a93; -[SCSendToActionSheetScope initWithUIContainer:sendToTracker:storyConfiguration:] */

undefined1 *
FUN_105e569c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ed558;
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



/* Entry: 105e56a94; end: 105e56a9b; -[SCSendToActionSheetScope uiContainer] */

undefined8 FUN_105e56a94(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105e56a9c; end: 105e56aa3; -[SCSendToActionSheetScope sendToTracker] */

undefined8 FUN_105e56a9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105e56aa4; end: 105e56aab; -[SCSendToActionSheetScope storyConfiguration] */

undefined8 FUN_105e56aa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105e56aac; end: 105e56ae7; -[SCSendToActionSheetScope .cxx_destruct] */

void FUN_105e56aac(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e56ae8; end: 105e56c03; -[SCComplianceActionHandler initWithSelectionTracker:snapProProfilesProvider:storyConfiguration:ignoredIdentifiers:delegate:] */

undefined1 *
FUN_105e56ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126ed560;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_7);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e56c04; end: 105e56e67; -[SCComplianceActionHandler handleActionWithSender:actionModel:fromSourceView:] */

long FUN_105e56c04(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar9 = param_1 + 0x28;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar9 != 0) {
    uVar10 = *(ulong *)(param_1 + 0x20);
    uVar2 = param_4;
    func_0x00010bfe5ec0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(uVar2);
    if ((uVar10 & 1) == 0) {
      uVar10 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b5658;
      _objc_opt_class(PTR_PTR_1126b5658);
      uVar4 = uVar10;
      _objc_opt_isKindOfClass(uVar10,puVar3);
      uVar2 = uVar10;
      if ((uVar4 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar10);
      uVar10 = uVar2;
      func_0x00010c15a7c0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar10;
      func_0x00010bf529e0();
      _objc_release(uVar10);
      if (uVar4 == 0) {
LAB_105e56e00:
        lVar9 = 0;
      }
      else {
        iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
        func_0x00010c0782e0();
        if (iVar1 == 0) goto LAB_105e56e00;
        uVar10 = uVar2;
        func_0x00010c15a7c0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar10;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar10);
        uVar10 = uVar4;
        func_0x00010c15a7a0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar10;
        func_0x00010c122a80();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c122b80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar10);
        uVar10 = uVar7;
        func_0x00010c08fa60();
        if (uVar10 == 0) {
LAB_105e56e08:
          lVar9 = 0;
        }
        else {
          uVar11 = *(undefined8 *)(param_1 + 0x10);
          puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x000107e32a18(uVar11,puVar3);
          _objc_release(puVar3);
          if ((int)uVar11 == 0) goto LAB_105e56e08;
          param_1 = param_1 + 0x28;
          _objc_loadWeakRetained(param_1);
          func_0x00010c238940();
          _objc_release(param_1);
          lVar9 = 1;
        }
        _objc_release(uVar7);
        _objc_release(uVar4);
      }
      _objc_release(uVar2);
      goto LAB_105e56e24;
    }
  }
  lVar9 = 0;
LAB_105e56e24:
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return lVar9;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(param_4 + 0x28);
  _objc_storeStrong(param_4 + 0x20,0);
  _objc_storeStrong(param_4 + 0x18,0);
  _objc_storeStrong(param_4 + 0x10,0);
  lVar9 = param_4 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar9,0);
  return lVar9;
}



/* Entry: 105e56e68; end: 105e56eb7; -[SCComplianceActionHandler .cxx_destruct] */

void FUN_105e56e68(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e56eb8; end: 105e56f93; -[SCContactsActionHandler initWithDelegate:sendToTooltipsService:selectedItemSubject:enableSelectableContacts:isFromMainCamera:] */

undefined1 *
FUN_105e56eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ed568;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x20) = param_6;
    *(undefined1 *)((long)puVar1 + 0x21) = param_7;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e56f94; end: 105e574db; -[SCContactsActionHandler handleActionWithSender:actionModel:fromSourceView:] */

bool FUN_105e56f94(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar3 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar3 == 0) {
    bVar2 = false;
    goto LAB_105e574a4;
  }
  uVar4 = param_4;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b5658;
  _objc_opt_class(PTR_PTR_1126b5658);
  uVar6 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar1 = uVar4;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar4 = uVar1;
  func_0x00010c15a7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf529e0();
  _objc_release(uVar4);
  if (uVar6 == 0) {
    bVar2 = false;
  }
  else {
    uVar4 = uVar1;
    func_0x00010c15a7c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = uVar6;
    func_0x00010c15a7a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar4;
    func_0x00010c122a80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar13;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar9;
    func_0x00010c15ab60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(uVar13);
    _objc_release(uVar4);
    uVar4 = uVar7;
    func_0x00010c0720c0();
    if ((int)uVar4 == 0) {
      bVar2 = false;
    }
    else {
      uVar4 = uVar6;
      func_0x00010c15a7a0();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar4;
      func_0x00010c122a80();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar13;
      func_0x00010befcf80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar13);
      _objc_release(uVar4);
      puVar5 = PTR_PTR_1126c24d0;
      _objc_opt_class(PTR_PTR_1126c24d0);
      uVar13 = uVar9;
      _objc_opt_isKindOfClass(uVar9,puVar5);
      uVar4 = uVar9;
      if ((uVar13 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(uVar9);
      uVar13 = uVar4;
      func_0x00010c0faf60();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar13;
      func_0x00010c08fa60();
      _objc_release(uVar13);
      bVar2 = uVar9 != 0;
      if (uVar9 != 0) {
        puVar5 = PTR__OBJC_CLASS___CNPhoneNumber_1126b4ae0;
        _objc_alloc();
        uVar13 = uVar4;
        func_0x00010c0faf60(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04e8c0();
        _objc_release(uVar13);
        lVar3 = param_1 + 8;
        _objc_loadWeakRetained();
        uVar11 = *(undefined8 *)(param_1 + 0x18);
        _objc_retain(uVar11);
        puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c8 = 0xc2000000;
        pcStack_c0 = FUN_105e574dc;
        puStack_b8 = &UNK_11085fb98;
        _objc_retain(lVar3);
        lStack_b0 = lVar3;
        _objc_retain(puVar5);
        puStack_a8 = puVar5;
        _objc_retain(uVar6);
        uStack_a0 = uVar6;
        _objc_retain(uVar7);
        uStack_98 = uVar7;
        _objc_retain(uVar4);
        uStack_90 = uVar4;
        _objc_retain(param_5);
        ppuVar8 = &puStack_d0;
        uStack_88 = param_5;
        uStack_80 = uVar11;
        _objc_retainBlock();
        if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
          uVar12 = *(undefined8 *)(param_1 + 0x10);
          _objc_retain(uVar12);
LAB_105e5731c:
          (*(code *)ppuVar8[2])(ppuVar8);
        }
        else {
          if (*(char *)(param_1 + 0x21) == '\x01') {
            uVar9 = *(ulong *)(param_1 + 0x10);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar13 = uVar9;
            func_0x00010c22fba0();
            _objc_release(uVar9);
            if ((*(char *)(param_1 + 0x20) == '\x01') && ((*(byte *)(param_1 + 0x21) & 1) == 0))
            goto LAB_105e57330;
            uVar12 = *(undefined8 *)(param_1 + 0x10);
            _objc_retain(uVar12);
            if ((int)uVar13 == 0) goto LAB_105e5731c;
LAB_105e57364:
            param_1 = param_1 + 8;
            _objc_loadWeakRetained(param_1);
            _objc_retain(uVar12);
            func_0x00010bf7af40(param_1);
            _objc_release(param_1);
          }
          else {
            uVar13 = 0;
LAB_105e57330:
            uVar12 = *(undefined8 *)(param_1 + 0x10);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar12;
            func_0x00010c22f680();
            _objc_release(uVar12);
            uVar12 = *(undefined8 *)(param_1 + 0x10);
            _objc_retain(uVar12);
            if ((uVar13 & 1) != 0) goto LAB_105e57364;
            if ((int)uVar10 == 0) goto LAB_105e5731c;
            param_1 = param_1 + 8;
            _objc_loadWeakRetained(param_1);
            _objc_retain(uVar12);
            func_0x00010bf7af40(param_1);
            _objc_release(param_1);
          }
          _objc_release(uVar12);
        }
        _objc_release(uVar12);
        _objc_release(ppuVar8);
        _objc_release(uStack_88);
        _objc_release(uStack_90);
        _objc_release(uStack_98);
        _objc_release(uStack_a0);
        _objc_release(puStack_a8);
        _objc_release(lStack_b0);
        _objc_release(uVar11);
        _objc_release(lVar3);
        _objc_release(puVar5);
      }
      _objc_release(uVar4);
    }
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  _objc_release(uVar1);
LAB_105e574a4:
  _objc_release(param_5);
  _objc_release(param_4);
  return bVar2;
}



/* Entry: 105e574dc; end: 105e57627;  */

void FUN_105e574dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  uVar5 = *(undefined8 *)(param_5 + 0x20);
  uVar1 = *(undefined8 *)(param_5 + 0x28);
  uVar4 = *(undefined8 *)(param_5 + 0x30);
  func_0x00010c15a7a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_5 + 0x30);
  uVar2 = *(undefined8 *)(param_5 + 0x38);
  func_0x00010c247520(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7c860(uVar5,param_6,uVar1,uVar4,uVar2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar4);
  iVar3 = (int)*(undefined8 *)(param_5 + 0x30);
  func_0x00010c07d660();
  puVar7 = PTR_PTR_1126c24d8;
  if (iVar3 != 0) {
    uVar5 = *(undefined8 *)(param_5 + 0x40);
    func_0x00010c0faf60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + 0x48));
    uVar6 = *(undefined8 *)(param_5 + 0x30);
    func_0x00010c247520(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23cd00(param_1,param_2,param_3,param_4,puVar7,param_6,uVar5,uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    func_0x00010c0d9840(*(undefined8 *)(param_5 + 0x50),param_6,puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar7);
    return;
  }
  return;
}



/* Entry: 105e57628; end: 105e576af;  */

void FUN_105e57628(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa5a0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000105e57668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 105e576b0; end: 105e576e7; -[SCContactsActionHandler .cxx_destruct] */

void FUN_105e576b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105e576e8; end: 105e5772f;  */

void FUN_105e576e8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2c738;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e2c738,
                      &PTR____CFConstantStringClassReference_110e2c758,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105e57730; end: 105e5779b; -[SCLongPressActionHandler initWithDelegate:] */

undefined1 * FUN_105e57730(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ed570;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e5779c; end: 105e57a1f; -[SCLongPressActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_105e5779c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c24e0;
  _objc_opt_class(PTR_PTR_1126c24e0);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  if (uVar1 == 0) {
    uVar10 = 0;
    goto LAB_105e579a4;
  }
  func_0x00010c15a7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_4);
  if (uVar4 == 0) {
    uVar10 = 0;
  }
  else {
    uVar3 = uVar4;
    func_0x00010c15ab60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    if ((uVar5 & 1) == 0) {
      uVar3 = uVar4;
      func_0x00010c15ab60();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      if ((uVar5 & 1) != 0) goto LAB_105e578c8;
      uVar3 = uVar4;
      func_0x00010c15ab60();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c0720c0();
      if ((uVar5 & 1) == 0) {
        uVar5 = uVar4;
        func_0x00010c15ab60();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c0720c0();
        if ((uVar6 & 1) != 0) {
LAB_105e57960:
          _objc_release(uVar5);
          goto LAB_105e57968;
        }
        uVar6 = uVar4;
        func_0x00010c15ab60();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c0720c0();
        if ((uVar7 & 1) != 0) {
LAB_105e57958:
          _objc_release(uVar6);
          goto LAB_105e57960;
        }
        uVar7 = uVar4;
        func_0x00010c15ab60();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c0720c0();
        if ((uVar8 & 1) != 0) {
          _objc_release(uVar7);
          goto LAB_105e57958;
        }
        uVar8 = uVar4;
        func_0x00010c15ab60();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c0720c0();
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar3);
        uVar10 = 0;
        if ((uVar9 & 1) == 0) goto LAB_105e5799c;
      }
      else {
LAB_105e57968:
        _objc_release(uVar3);
      }
      uVar10 = 0;
    }
    else {
LAB_105e578c8:
      uVar10 = 1;
    }
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0b4d00();
    _objc_release(param_1);
  }
LAB_105e5799c:
  _objc_release(uVar4);
LAB_105e579a4:
  _objc_release(uVar1);
  return uVar10;
}



/* Entry: 105e57a20; end: 105e57a27; -[SCLongPressActionHandler .cxx_destruct] */

void FUN_105e57a20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105e57a28; end: 105e57a9f; -[SCMultiActionHandler initWithActionHandlers:] */

undefined1 * FUN_105e57a28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ed578;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e57aa0; end: 105e57bf3; -[SCMultiActionHandler handleActionWithSender:actionModel:fromSourceView:] */

long FUN_105e57aa0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar5 = *(long *)(param_1 + 8);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  lVar6 = 0;
  if (lVar2 != 0) {
    do {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar5);
        }
        uVar3 = *(ulong *)(lVar6 * 8);
        func_0x00010bfd0140();
        if ((uVar3 & 1) != 0) {
          lVar6 = 1;
          goto LAB_105e57b98;
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar5;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    lVar6 = 0;
  }
LAB_105e57b98:
  _objc_release(lVar5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
    param_3 = param_3 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(param_3,0);
    return param_3;
  }
  return lVar6;
}



/* Entry: 105e57bf4; end: 105e57bff; -[SCMultiActionHandler .cxx_destruct] */

void FUN_105e57bf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e57c00; end: 105e57dff; -[SCSelectionNewGroupCreator initWithUserId:groupDataCreator:groupDataFetcher:groupDataMutator:snapchattersDataFetcher:errorHandler:source:circumstanceEngine:myAIExperimentServices:] */

undefined8 *
FUN_105e57c00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126ed580;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    puVar1[7] = param_9;
    uVar2 = param_10;
    func_0x000108f3df38();
    *(char *)(puVar1 + 8) = (char)uVar2;
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_11);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_11);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105e57e00; end: 105e57e8b;  */

void FUN_105e57e00(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = *(long *)(param_1 + 0x20);
  puVar5 = PTR____kCFBooleanFalse_11034ab60;
  if (lVar1 != 0) {
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c078500();
    func_0x00010c0df6e0(puVar4,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar5 = puVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105e57e8c; end: 105e57f87; -[SCSelectionNewGroupCreator createGroupWithSelectedItems:groupName:uiContainer:completion:completionQueue:] */

undefined8
FUN_105e57e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf09f00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bdee4e0(param_1,param_2,param_3,param_5,puVar1,1,1);
  _objc_release(param_5);
  _objc_release(param_3);
  if ((int)uVar2 != 0) {
    func_0x00010bddd420(param_1,param_2,puVar1,param_4,param_6,param_7);
  }
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 105e57f88; end: 105e580af; -[SCSelectionNewGroupCreator addSelectedItems:toGroup:source:uiContainer:completion:completionQueue:] */

void FUN_105e57f88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf43280(param_3,param_2,&PTR___NSConcreteGlobalBlock_1108ed118);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bdee4e0(param_1,param_2,param_3,param_6,puVar2,0,0);
  _objc_release(param_6);
  _objc_release(param_3);
  if ((int)uVar3 != 0) {
    func_0x00010bdc8520(param_1,param_2,puVar2,uVar1,param_4,param_5,param_7,param_8);
  }
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105e580b0; end: 105e58247;  */

void FUN_105e580b0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15ab60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar4 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    uVar1 = param_2;
    func_0x00010c122a80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010befcf80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar6 = PTR_PTR_1126c24d0;
    _objc_opt_class(PTR_PTR_1126c24d0);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar6);
    uVar1 = uVar2;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010c0faf60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c08fa60();
    _objc_release(uVar2);
    if (uVar3 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___CNPhoneNumber_1126b4ae0;
      _objc_alloc(PTR__OBJC_CLASS___CNPhoneNumber_1126b4ae0);
      uVar2 = uVar1;
      func_0x00010c0faf60(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e8c0(puVar5);
      puVar6 = puVar5;
      func_0x000108f92780();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(uVar2);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105e58248; end: 105e58377; -[SCSelectionNewGroupCreator _addSnapchatters:phoneNumbers:toGroupId:source:completion:completionQueue:] */

void FUN_105e58248(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105e58378;
  puStack_68 = &UNK_1108ed138;
  uStack_60 = param_8;
  uStack_58 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010befc1e0(uVar1,param_2,param_5,param_3,param_4,param_6,&puStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_7);
  _objc_release(param_8);
  return;
}



/* Entry: 105e58378; end: 105e5841f;  */

void FUN_105e58378(long param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105e58420;
  puStack_50 = &UNK_1108523f8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_48 = param_4;
  uStack_40 = uVar2;
  uStack_38 = param_2;
  _objc_retain(param_4);
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(uStack_48);
  _objc_release(uStack_40);
  _objc_release(param_4);
  return;
}



/* Entry: 105e58420; end: 105e5843b;  */

void FUN_105e58420(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105e58438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30),
             *(long *)(param_1 + 0x20) != 0);
  return;
}



/* Entry: 105e5843c; end: 105e587bb; -[SCSelectionNewGroupCreator _userIdToParticipantsOfSelectionItems:] */

undefined *
FUN_105e5843c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined *puStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  long lStack_3b8;
  undefined *puStack_3b0;
  undefined8 uStack_3a8;
  code *pcStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  long lStack_388;
  undefined8 uStack_380;
  long lStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined **ppuStack_338;
  undefined **ppuStack_330;
  undefined **ppuStack_328;
  long lStack_2a0;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar17 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  _objc_retain(param_3);
  puVar11 = auStack_f0;
  lVar14 = 0x10;
  lVar1 = param_3;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  iVar16 = (int)param_7;
  iVar15 = (int)param_6;
  while (lVar1 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(param_3);
      }
      lVar21 = *(long *)(lVar14 * 8);
      lVar2 = lVar21;
      func_0x00010c122a80();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar2;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      lVar19 = lVar18;
      func_0x00010c15ab60();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar19;
      func_0x00010c071ae0();
      _objc_release(lVar19);
      _objc_release(lVar18);
      _objc_release(lVar2);
      lVar2 = lVar21;
      func_0x00010c122a80();
      _objc_retainAutoreleasedReturnValue();
      if ((int)lVar3 == 0) {
        lVar18 = lVar2;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        lVar19 = lVar18;
        func_0x00010c15ab60();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar19;
        func_0x00010c071ae0();
        _objc_release(lVar19);
        _objc_release(lVar18);
        _objc_release(lVar2);
        if ((int)lVar3 != 0) {
          func_0x00010c0f4aa0();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar21;
          func_0x00010bf52a60();
          lVar18 = lRam0000000000000000;
          while (lVar2 != 0) {
            lVar19 = 0;
            do {
              if (lRam0000000000000000 != lVar18) {
                _objc_enumerationMutation(lVar21);
              }
              uVar22 = *(undefined8 *)(lVar19 * 8);
              uVar4 = uVar22;
              func_0x00010bfe5ec0();
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar4;
              func_0x00010c15ab60();
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar7;
              func_0x00010c071ae0();
              _objc_release(uVar7);
              _objc_release(uVar4);
              if ((int)uVar5 != 0) {
                func_0x00010bfe5ec0();
                _objc_retainAutoreleasedReturnValue();
                uVar4 = uVar22;
                func_0x00010c122b80();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar17);
                _objc_release(uVar4);
                _objc_release(uVar22);
              }
              lVar19 = lVar19 + 1;
            } while (lVar2 != lVar19);
            lVar2 = lVar21;
            func_0x00010bf52a60();
          }
          goto LAB_105e58738;
        }
      }
      else {
        func_0x00010c122a80();
        _objc_retainAutoreleasedReturnValue();
        lVar18 = lVar21;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        lVar19 = lVar18;
        func_0x00010c122b80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar17);
        _objc_release(lVar19);
        _objc_release(lVar18);
        _objc_release(lVar21);
        lVar21 = lVar2;
LAB_105e58738:
        _objc_release(lVar21);
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 != lVar1);
    puVar11 = auStack_f0;
    lVar14 = 0x10;
    lVar1 = param_3;
    func_0x00010bf52a60();
    iVar16 = (int)param_7;
    iVar15 = (int)param_6;
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lStack_2a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar11);
    _objc_retain(lVar14);
    lVar1 = param_3;
    func_0x00010bee6ce0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010c0d3c80();
    _objc_release(lVar6);
    if (iVar15 != 0) {
      lVar6 = lVar1;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar6 == 0) {
        func_0x00010befa120(lVar2);
      }
    }
    uVar7 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010c0ee9e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(lVar14);
    _objc_release(uVar4);
    _objc_release(uVar7);
    puVar17 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_378 = 0;
    uStack_380 = 0;
    uStack_368 = 0;
    plStack_370 = (long *)0x0;
    uStack_358 = 0;
    uStack_360 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
    _objc_retain(lVar14);
    lVar6 = lVar14;
    func_0x00010bf52a60();
    if (lVar6 != 0) {
      lVar18 = *plStack_370;
      do {
        lVar19 = 0;
        do {
          if (*plStack_370 != lVar18) {
            _objc_enumerationMutation(lVar14);
          }
          uVar23 = *(ulong *)(lStack_378 + lVar19 * 8);
          uVar8 = uVar23;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          func_0x00010c08fa60();
          if ((uVar9 != 0) && (uVar9 = uVar23, func_0x000100bf119c(), (int)uVar9 != 0)) {
            if ((iVar16 == 0) || (uVar9 = uVar23, func_0x00010901c54c(), (int)uVar9 == 0)) {
LAB_105e589a8:
              func_0x000100bf0c60(uVar23,0);
              if ((uVar23 & 1) != 0) goto LAB_105e589c4;
            }
            else {
              uVar10 = *(ulong *)(param_3 + 0x48);
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              uVar9 = uVar10;
              func_0x00010bf1f3c0();
              _objc_release(uVar10);
              if ((uVar9 & 1) == 0) goto LAB_105e589a8;
            }
            func_0x00010befa120(puVar17);
          }
LAB_105e589c4:
          _objc_release(uVar8);
          lVar19 = lVar19 + 1;
        } while (lVar6 != lVar19);
        lVar6 = lVar14;
        func_0x00010bf52a60();
      } while (lVar6 != 0);
    }
    _objc_release(lVar14);
    uVar7 = *(undefined8 *)(param_3 + 0x48);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010bf1f3c0();
    _objc_release(uVar7);
    puVar12 = PTR__OBJC_CLASS___NSSet_1126ae870;
    if ((iVar16 == 0) || ((int)uVar4 == 0)) {
      ppuStack_338 = &PTR____CFConstantStringClassReference_110e12b58;
      ppuStack_330 = &PTR____CFConstantStringClassReference_110e12b38;
    }
    else {
      ppuStack_328 = &PTR____CFConstantStringClassReference_110e12b38;
    }
    puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar20);
    lVar6 = lVar1;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_3b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_3a8 = 0xc2000000;
    pcStack_3a0 = FUN_105e58c7c;
    puStack_398 = &UNK_1108a9ea0;
    _objc_retain(puVar12);
    puStack_390 = puVar12;
    _objc_retain(lVar1);
    lVar18 = lVar6;
    lStack_388 = lVar1;
    func_0x000100504554(lVar6,&puStack_3b0);
    _objc_release(lVar6);
    lVar6 = lVar1;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_3e0 = puVar20;
    uStack_3d8 = 0xc2000000;
    uStack_3d0 = 0x105e58d00;
    puStack_3c8 = &UNK_1108a9ea0;
    _objc_retain(puVar17);
    puStack_3c0 = puVar17;
    _objc_retain(lVar1);
    ppuVar13 = &puStack_3e0;
    lVar19 = lVar6;
    lStack_3b8 = lVar1;
    func_0x000100504554(lVar6,ppuVar13);
    _objc_release(lVar6);
    lVar6 = lVar18;
    func_0x00010bf529e0();
    if (lVar6 == 0) {
      lVar6 = lVar19;
      func_0x00010bf529e0();
      if (lVar6 == 0) {
        puVar20 = (undefined *)0x1;
      }
      else {
        func_0x00010c0d89a0(*(undefined8 *)(param_3 + 0x30));
        puVar20 = (undefined *)0x0;
      }
    }
    else {
      func_0x00010c0d89c0(*(undefined8 *)(param_3 + 0x30));
      puVar20 = (undefined *)0x0;
    }
    _objc_release(lVar19);
    _objc_release(lStack_3b8);
    _objc_release(puStack_3c0);
    _objc_release(lVar18);
    _objc_release(lStack_388);
    _objc_release(puStack_390);
    _objc_release(puVar12);
    _objc_release(puVar17);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar14);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a0) {
      return puVar20;
    }
    ___stack_chk_fail();
    _objc_retain(ppuVar13);
    iVar15 = (int)*(undefined8 *)(puVar11 + 0x20);
    func_0x00010bf4b900();
    if (iVar15 == 0) {
      puVar17 = (undefined *)0x0;
    }
    else {
      puVar12 = *(undefined **)(puVar11 + 0x28);
      func_0x00010c0e00e0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar12;
      func_0x00010c0d5140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
    }
    _objc_release(ppuVar13);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return puVar17;
}



/* Entry: 105e587bc; end: 105e58c7b; -[SCSelectionNewGroupCreator _createGroupPrestepWithSelectedItems:uiContainer:snapchatters:includeCurrentUser:isCreatingNewGroup:] */

undefined8
FUN_105e587bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
             int param_6,int param_7)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_1;
  func_0x00010bee6ce0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0d3c80();
  _objc_release(lVar3);
  if (param_6 != 0) {
    lVar3 = lVar2;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      func_0x00010befa120(lVar4);
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar5;
  func_0x00010c0ee9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(param_5);
  _objc_release(uVar15);
  _objc_release(uVar5);
  puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  _objc_retain(param_5);
  lVar3 = param_5;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar13 = *plStack_150;
    do {
      lVar14 = 0;
      do {
        if (*plStack_150 != lVar13) {
          _objc_enumerationMutation(param_5);
        }
        uVar16 = *(ulong *)(lStack_158 + lVar14 * 8);
        uVar7 = uVar16;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c08fa60();
        if ((uVar8 != 0) && (uVar8 = uVar16, func_0x000100bf119c(), (int)uVar8 != 0)) {
          if ((param_7 == 0) || (uVar8 = uVar16, func_0x00010901c54c(), (int)uVar8 == 0)) {
LAB_105e589a8:
            func_0x000100bf0c60(uVar16,0);
            if ((uVar16 & 1) != 0) goto LAB_105e589c4;
          }
          else {
            uVar9 = *(ulong *)(param_1 + 0x48);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar9;
            func_0x00010bf1f3c0();
            _objc_release(uVar9);
            if ((uVar8 & 1) == 0) goto LAB_105e589a8;
          }
          func_0x00010befa120(puVar6);
        }
LAB_105e589c4:
        _objc_release(uVar7);
        lVar14 = lVar14 + 1;
      } while (lVar3 != lVar14);
      lVar3 = param_5;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_5);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar5;
  func_0x00010bf1f3c0();
  _objc_release(uVar5);
  puVar11 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if ((param_7 == 0) || ((int)uVar15 == 0)) {
    ppuStack_118 = &PTR____CFConstantStringClassReference_110e12b58;
    ppuStack_110 = &PTR____CFConstantStringClassReference_110e12b38;
  }
  else {
    ppuStack_108 = &PTR____CFConstantStringClassReference_110e12b38;
  }
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  lVar3 = lVar2;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_188 = 0xc2000000;
  pcStack_180 = FUN_105e58c7c;
  puStack_178 = &UNK_1108a9ea0;
  _objc_retain(puVar11);
  puStack_170 = puVar11;
  _objc_retain(lVar2);
  lVar13 = lVar3;
  lStack_168 = lVar2;
  func_0x000100504554(lVar3,&puStack_190);
  _objc_release(lVar3);
  lVar3 = lVar2;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_1c0 = puVar10;
  uStack_1b8 = 0xc2000000;
  uStack_1b0 = 0x105e58d00;
  puStack_1a8 = &UNK_1108a9ea0;
  _objc_retain(puVar6);
  puStack_1a0 = puVar6;
  _objc_retain(lVar2);
  ppuVar12 = &puStack_1c0;
  lVar14 = lVar3;
  lStack_198 = lVar2;
  func_0x000100504554(lVar3,ppuVar12);
  _objc_release(lVar3);
  lVar3 = lVar13;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    lVar3 = lVar14;
    func_0x00010bf529e0();
    if (lVar3 == 0) {
      uVar15 = 1;
    }
    else {
      func_0x00010c0d89a0(*(undefined8 *)(param_1 + 0x30));
      uVar15 = 0;
    }
  }
  else {
    func_0x00010c0d89c0(*(undefined8 *)(param_1 + 0x30));
    uVar15 = 0;
  }
  _objc_release(lVar14);
  _objc_release(lStack_198);
  _objc_release(puStack_1a0);
  _objc_release(lVar13);
  _objc_release(lStack_168);
  _objc_release(puStack_170);
  _objc_release(puVar11);
  _objc_release(puVar6);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return uVar15;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar12);
  iVar1 = (int)*(undefined8 *)(param_4 + 0x20);
  func_0x00010bf4b900();
  if (iVar1 == 0) {
    uVar15 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_4 + 0x28);
    func_0x00010c0e00e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar5;
    func_0x00010c0d5140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
  }
  _objc_release(ppuVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar15);
  return uVar15;
}



/* Entry: 105e58c7c; end: 105e58d83;  */

void FUN_105e58c7c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b900();
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0e00e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0d5140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105e58d84; end: 105e58f1b; -[SCSelectionNewGroupCreator _createGroupWithSnapchatters:groupName:completion:completionQueue:] */

void FUN_105e58d84(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar3 = -(ulong)(*(long *)(param_1 + 0x38) != 1);
  if (*(long *)(param_1 + 0x38) == 0) {
    lVar3 = 1;
  }
  _objc_retain(param_3);
  lVar1 = param_4;
  func_0x00010c08fa60();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    uStack_98 = 0x105e58fe0;
    puStack_90 = &UNK_110848438;
    uStack_88 = param_5;
    _objc_retain(param_5);
    func_0x00010bf56ee0(uVar2,param_2,param_3,lVar3,&puStack_a8,param_6);
    _objc_release(param_3);
    _objc_release(uVar2);
    uVar2 = uStack_88;
  }
  else {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105e58f1c;
    puStack_68 = &UNK_11085d1a0;
    uStack_58 = param_5;
    _objc_retain(param_6);
    uStack_60 = param_6;
    _objc_retain(param_5);
    func_0x00010bf56680(uVar2,param_2,param_4,param_3,lVar3,&puStack_80);
    _objc_release(param_3);
    _objc_release(uVar2);
    _objc_release(uStack_60);
    uVar2 = uStack_58;
  }
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 105e58f1c; end: 105e58fc7;  */

void FUN_105e58f1c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105e58fc8;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(lVar1);
    lStack_38 = lVar1;
    _objc_retain(param_2);
    uStack_40 = param_2;
    func_0x00010007380c(uVar2,&puStack_60);
    _objc_release(uStack_40);
    _objc_release(lStack_38);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 105e58fc8; end: 105e58fff;  */

void FUN_105e58fc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105e58fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),1,0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105e59000; end: 105e59247; -[SCSelectionNewGroupCreator _checkAndUpdateExistingGroup:groupName:completion:completionQueue:] */

void FUN_105e59000(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined **ppuStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108ed168);
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105e59250;
  puStack_a0 = &UNK_1108ed188;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_5);
  uStack_90 = param_5;
  _objc_retain(param_6);
  ppuVar3 = &puStack_b8;
  uStack_98 = param_6;
  _objc_retainBlock();
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_105e59374;
  puStack_f0 = &UNK_1108ed1b8;
  _objc_copyWeak(auStack_c0,auStack_80);
  _objc_retain(param_3);
  uStack_e8 = param_3;
  _objc_retain(param_4);
  uStack_e0 = param_4;
  _objc_retain(param_5);
  uStack_d0 = param_5;
  _objc_retain(param_6);
  uStack_d8 = param_6;
  _objc_retain(ppuVar3);
  ppuVar4 = &puStack_108;
  ppuStack_c8 = ppuVar3;
  _objc_retainBlock(ppuVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc6160();
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuStack_c8);
  _objc_release(uStack_d8);
  _objc_release(uStack_d0);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_destroyWeak(auStack_c0);
  _objc_release(ppuVar3);
  _objc_release(uStack_98);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105e59248; end: 105e5924f;  */

void FUN_105e59248(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 105e59250; end: 105e59343;  */

void FUN_105e59250(long param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 auStack_a0 [6];
  undefined8 auStack_70 [6];
  
  puVar4 = auStack_a0;
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_2 & 1) == 0) {
      func_0x00010bf2f820(*(undefined8 *)(lVar1 + 0x30));
      lVar5 = *(long *)(param_1 + 0x28);
      if (lVar5 == 0) goto LAB_105e5931c;
      pcVar2 = FUN_105e59344;
      puVar4 = auStack_70;
    }
    else {
      func_0x00010c0d89e0();
      lVar5 = *(long *)(param_1 + 0x28);
      if (lVar5 == 0) goto LAB_105e5931c;
      pcVar2 = (code *)0x105e5935c;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puVar4[1] = 0xc2000000;
    puVar4[2] = pcVar2;
    puVar4[3] = &UNK_11084aaa8;
    _objc_retain(lVar5);
    puVar4[5] = lVar5;
    _objc_retain(param_3);
    puVar4[4] = param_3;
    func_0x00010007380c(uVar3,puVar4);
    _objc_release(puVar4[4]);
    _objc_release(puVar4[5]);
  }
LAB_105e5931c:
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105e59344; end: 105e59373;  */

void FUN_105e59344(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105e59358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,1,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105e59374; end: 105e59507;  */

void FUN_105e59374(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (param_2 == 0) {
    func_0x00010bdee540(lVar1);
    goto LAB_105e594e0;
  }
  if (lVar1 == 0) goto LAB_105e594e0;
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c08fa60();
  if (lVar2 == 0) {
LAB_105e593f0:
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_105e594e0;
    func_0x00010c0d89e0(*(undefined8 *)(lVar1 + 0x30));
    lVar2 = *(long *)(param_1 + 0x38);
    lVar4 = param_2;
    func_0x00010bfceb20(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,0,1,lVar4);
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x28);
    lVar2 = param_2;
    func_0x00010bfcef60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(lVar2);
    if ((uVar5 & 1) != 0) goto LAB_105e593f0;
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010bfceb20(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + 0x40);
    _objc_retain(lVar4);
    func_0x00010c286340(uVar3);
    _objc_release(lVar2);
    _objc_release(uVar3);
  }
  _objc_release(lVar4);
LAB_105e594e0:
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105e59508; end: 105e59517;  */

void FUN_105e59508(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000105e59514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,param_5);
  return;
}



/* Entry: 105e59518; end: 105e59583; -[SCSelectionNewGroupCreator .cxx_destruct] */

void FUN_105e59518(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 105e59584; end: 105e59a83;  */

void FUN_105e59584(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010bf529e0();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = param_1;
  if (puVar1 == (undefined *)0x1) {
    FUN_105e59cac();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar7,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = param_1;
    func_0x00010bf529e0();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar3 = param_1;
    if (puVar1 == (undefined *)0x2) {
      func_0x000105e59cc4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar7,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar1 = param_1;
      func_0x00010bf529e0();
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (puVar1 == (undefined *)0x3) {
        func_0x000105e59cdc();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0dfd40(param_1,param_2,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0dfd40(param_1,param_2,1);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = param_1;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar7,param_2,puVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000105e59cf4();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0dfd40(param_1,param_2,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0dfd40(param_1,param_2,1);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        puVar4 = param_1;
        func_0x00010bf529e0(param_1);
        func_0x00010c0df840(puVar5,param_2,puVar4 + -2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar6,param_2,&PTR____CFConstantStringClassReference_110dc4658);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar7,param_2,puVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
      }
      _objc_release(puVar5);
    }
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105e59a84; end: 105e59cab;  */

void FUN_105e59a84(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf529e0();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar2 = param_1;
  if (lVar1 == 1) {
    func_0x000105e59d0c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010c14de00(puVar4,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000105e59d24();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010c14de00(puVar4,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105e59cac; end: 105e59dcb;  */

void FUN_105e59cac(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2c7d8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e2c7d8,
                      &PTR____CFConstantStringClassReference_110e2c7b8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105e59dcc; end: 105e59ebf; -[SCSelectionNewGroupScope initWithSelectedItems:uiContainer:delegate:source:] */

undefined1 *
FUN_105e59dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126ed588;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e59ec0; end: 105e59ec7; -[SCSelectionNewGroupScope selectedItems] */

undefined8 FUN_105e59ec0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105e59ec8; end: 105e59ecf; -[SCSelectionNewGroupScope uiContainer] */

undefined8 FUN_105e59ec8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105e59ed0; end: 105e59ee7; -[SCSelectionNewGroupScope delegate] */

void FUN_105e59ed0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e59ee8; end: 105e59eef; -[SCSelectionNewGroupScope source] */

undefined8 FUN_105e59ee8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105e59ef0; end: 105e59f33; -[SCSelectionNewGroupScope .cxx_destruct] */

void FUN_105e59ef0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e59f34; end: 105e5a033; -[SCSendToPanGestureActionHandler initWithDelegate:scrollOnSelectEnabled:scrollByOneCellEnabled:respectDragMode:sectionsAllowlist:] */

undefined1 *
FUN_105e59f34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ed590;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
    *(undefined1 *)((long)puVar1 + 0x18) = param_4;
    *(undefined1 *)((long)puVar1 + 0x1b) = param_6;
    *(undefined2 *)((long)puVar1 + 0x19) = 0x100;
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    uVar2 = param_7;
    func_0x00010bf44740(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x30) = param_5;
  }
  _objc_release(param_7);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e5a034; end: 105e5a03b; -[SCSendToPanGestureActionHandler gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_105e5a034(void)

{
  return 1;
}



/* Entry: 105e5a03c; end: 105e5a17f; -[SCSendToPanGestureActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_105e5a03c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
             undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_5);
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c5158;
  _objc_opt_class(PTR_PTR_1126c5158);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  if (uVar1 != 0) {
    func_0x00010be99c40(param_1);
    uVar3 = param_4;
    func_0x00010bfc1a80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_opt_class(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar2);
    _objc_release(uVar3);
    if ((uVar4 & 1) != 0) {
      func_0x00010be2bce0(param_1);
      goto LAB_105e5a158;
    }
    func_0x00010bfc1a80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    _objc_release(param_4);
    if ((uVar3 & 1) != 0) {
      func_0x00010be2dba0(param_1);
      goto LAB_105e5a158;
    }
  }
  param_1 = 0;
LAB_105e5a158:
  _objc_release(uVar1);
  _objc_release(param_5);
  return param_1;
}



/* Entry: 105e5a180; end: 105e5a21b; -[SCSendToPanGestureActionHandler _saveSourceViewIfNecessary:] */

void FUN_105e5a180(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  puVar3 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  if (lVar2 == 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar3);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    uVar1 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    if (uVar1 != 0) {
      _objc_storeWeak(param_1 + 8,param_3);
    }
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e5a21c; end: 105e5a2f7; -[SCSendToPanGestureActionHandler _setDragSelectionMode:indexPath:] */

void FUN_105e5a21c(long param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    if (*(byte *)(param_1 + 0x19) != param_3) {
      *(char *)(param_1 + 0x19) = (char)param_3;
      lVar1 = param_1 + 8;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c21e900();
      _objc_release(lVar1);
      lVar1 = param_1 + 8;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c1f7b20();
      _objc_release(lVar1);
      lVar1 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c0e3d40();
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010be21f60(param_1,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c07d660();
      *(byte *)(param_1 + 0x1a) = (byte)lVar2 ^ 1;
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105e5a2f8; end: 105e5a41b; -[SCSendToPanGestureActionHandler _handleLongPressGestureForActionModel:] */

bool FUN_105e5a2f8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  lVar3 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  bVar2 = false;
  if (lVar3 != 0) {
    uVar4 = param_3;
    func_0x00010bfc1a80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_opt_class(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    uVar1 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    bVar2 = uVar1 != 0;
    if (uVar1 != 0) {
      lVar3 = param_1;
      func_0x00010be1e500(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c252440();
      if (uVar4 != 2) {
        if (uVar4 == 1) {
          func_0x00010bea3880(param_1);
          func_0x00010be9d820(param_1);
        }
        else {
          func_0x00010bea3880(param_1);
          uVar7 = *(undefined8 *)(param_1 + 0x20);
          *(undefined8 *)(param_1 + 0x20) = 0;
          _objc_release(uVar7);
        }
      }
      _objc_release(lVar3);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 105e5a41c; end: 105e5a4ff; -[SCSendToPanGestureActionHandler _handlePanGestureForActionModel:] */

bool FUN_105e5a41c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  lVar3 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar3 == 0) {
    bVar2 = false;
  }
  else {
    uVar4 = param_3;
    func_0x00010bfc1a80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    uVar1 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    bVar2 = uVar1 != 0;
    if ((uVar1 != 0) && (*(char *)(param_1 + 0x19) == '\x01')) {
      func_0x00010c252440();
      if (uVar4 - 1 < 2) {
        func_0x00010be9d820(param_1);
      }
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 105e5a500; end: 105e5a643; -[SCSendToPanGestureActionHandler _selectCellWithGestureRecognizer:] */

void FUN_105e5a500(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_1;
  func_0x00010be1e500();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be21f60(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = uVar2;
    func_0x00010bfc9f80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar5,param_2,uVar3);
    _objc_release(uVar3);
    if (((int)uVar5 != 0) &&
       (uVar3 = uVar1, func_0x00010c071ae0(uVar1,param_2,*(undefined8 *)(param_1 + 0x20)),
       (uVar3 & 1) == 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar6);
      _objc_retain(uVar1);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      *(ulong *)(param_1 + 0x20) = uVar1;
      _objc_release(uVar5);
      if (*(char *)(param_1 + 0x1b) == '\x01') {
        func_0x00010c27c240(uVar2,param_2,*(undefined1 *)(param_1 + 0x1a));
      }
      else {
        func_0x00010c27c220(uVar2);
      }
      if (*(char *)(param_1 + 0x18) == '\x01') {
        if (*(char *)(param_1 + 0x30) == '\x01') {
          func_0x00010be9bde0(param_1,param_2,uVar1,uVar6);
        }
        else {
          lVar4 = param_1 + 8;
          _objc_loadWeakRetained(lVar4);
          func_0x00010c1525a0();
          _objc_release(lVar4);
        }
      }
      _objc_release(uVar6);
    }
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e5a644; end: 105e5a7bb; -[SCSendToPanGestureActionHandler _scrollByOneCellWithIndexPath:previousIndexPath:] */

void FUN_105e5a644(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6,long param_7,long param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_7);
  func_0x00010c142240();
  lVar1 = param_7;
  func_0x00010c142240();
  lVar2 = param_5 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf4d5e0();
  lVar3 = param_5 + 8;
  dVar6 = param_2;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bf20c00();
  param_2 = param_2 - param_4;
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_5 + 8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf408e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar4 = lVar3;
  func_0x00010c08c980(lVar3,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010bfb68e0(lVar4);
  lVar2 = param_5 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf4cdc0();
  _objc_release(lVar2);
  dVar5 = 0.0;
  if (0.0 <= dVar6 - param_4) {
    dVar5 = dVar6 - param_4;
  }
  if (param_8 <= lVar1) {
    dVar5 = param_4 + dVar6;
  }
  if (param_2 <= dVar5) {
    dVar5 = param_2;
  }
  if (lVar1 < param_8) {
    if (dVar6 <= dVar5) goto LAB_105e5a794;
  }
  else if (dVar5 <= dVar6) goto LAB_105e5a794;
  param_5 = param_5 + 8;
  _objc_loadWeakRetained(param_5);
  func_0x00010c182300(0,dVar5);
  _objc_release(param_5);
LAB_105e5a794:
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105e5a7bc; end: 105e5a86f; -[SCSendToPanGestureActionHandler _getCurrentSelectedIndexPath:] */

void FUN_105e5a7bc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_5);
  lVar1 = param_3 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_3 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c09ef00(param_5,param_4,lVar1);
    _objc_release(lVar1);
    param_3 = param_3 + 8;
    _objc_loadWeakRetained(param_3);
    lVar1 = param_3;
    func_0x00010bfed040(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105e5a870; end: 105e5a91b; -[SCSendToPanGestureActionHandler _getRecipientCellFromIndexPath:] */

void FUN_105e5a870(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar1 = 0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    uVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010bf33b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126b5290;
    _objc_retain(uVar2);
    _objc_opt_class(puVar3);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e5a91c; end: 105e5a95b; -[SCSendToPanGestureActionHandler .cxx_destruct] */

void FUN_105e5a91c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105e5a95c; end: 105e5a9cf; -[SCSendToPanGestureActionModel initWithGestureRecognizer:] */

undefined1 * FUN_105e5a95c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ed598;
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



/* Entry: 105e5a9d0; end: 105e5a9f3; -[SCSendToPanGestureActionModel copyWithZone:] */

undefined8 FUN_105e5a9d0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105e5a9f4; end: 105e5a9fb; -[SCSendToPanGestureActionModel gestureRecognizer] */

undefined8 FUN_105e5a9f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105e5a9fc; end: 105e5aa07; -[SCSendToPanGestureActionModel .cxx_destruct] */

void FUN_105e5a9fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e5aa08; end: 105e5ab57; -[SCSendToPanGestureTooltipActionHandler initWithIgnoredIdentifiers:tooltipsService:dragToSelectEnabled:dragToSelectNumberOfTouches:forceResetTooltip:sectionsAllowlist:] */

undefined1 *
FUN_105e5aa08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,int param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ed5a0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x18) = param_5;
    if (param_7 != 0) {
      uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1388c0();
      _objc_release(uVar2);
    }
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    uVar2 = param_8;
    func_0x00010bf44740(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e5ab58; end: 105e5ae4b; -[SCSendToPanGestureTooltipActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_105e5ab58(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
             undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  int iVar9;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(char *)(param_1 + 0x18) != '\x01') goto LAB_105e5ae10;
  uVar7 = *(ulong *)(param_1 + 8);
  puVar1 = param_4;
  func_0x00010bfe5ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(puVar1);
  if ((uVar7 & 1) != 0) goto LAB_105e5ae10;
  puVar2 = param_4;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b5658;
  _objc_opt_class(PTR_PTR_1126b5658);
  puVar8 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar1);
  puVar1 = puVar2;
  if (((ulong)puVar8 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
  if (puVar1 != (undefined *)0x0) {
    uVar7 = 0;
    puVar8 = puVar2;
    func_0x00010c15a7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar8;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c247520();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    if ((uVar7 & 1) == 0) {
      iVar9 = (int)*(undefined8 *)(param_1 + 0x28);
      func_0x00010c15a7c0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c247520();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900();
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar8);
      puVar2 = PTR_PTR_1126b5290;
      if (iVar9 == 0) goto LAB_105e5ae08;
      _objc_retain(param_5);
      _objc_opt_class(puVar2);
      puVar8 = param_5;
      _objc_opt_isKindOfClass(param_5,puVar2);
      puVar2 = param_5;
      if (((ulong)puVar8 & 1) == 0) {
        puVar2 = (undefined *)0x0;
      }
      _objc_retain(puVar2);
      _objc_release(param_5);
      if (puVar2 == (undefined *)0x0) {
        puVar8 = (undefined *)0x0;
      }
      else {
        puVar5 = *(undefined **)(param_1 + 0x10);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar5;
        func_0x00010c22f620();
        _objc_release(puVar5);
        puVar8 = param_5;
        if ((int)puVar2 != 0) {
          FUN_105e5ae88();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          if (1 < *(ulong *)(param_1 + 0x20)) {
            puVar6 = puVar5;
            func_0x000105e5aea0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14de00(puVar2);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar5);
            _objc_release(puVar6);
            puVar5 = puVar2;
          }
          func_0x00010c23a920(param_5);
          puVar6 = *(undefined **)(param_1 + 0x10);
          func_0x00010c269d40(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1f9da0();
          goto LAB_105e5ac6c;
        }
      }
    }
    else {
LAB_105e5ac6c:
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    _objc_release(puVar8);
  }
LAB_105e5ae08:
  _objc_release(puVar1);
LAB_105e5ae10:
  _objc_release(param_5);
  _objc_release(param_4);
  return 0;
}



/* Entry: 105e5ae4c; end: 105e5ae87; -[SCSendToPanGestureTooltipActionHandler .cxx_destruct] */

void FUN_105e5ae4c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e5ae88; end: 105e5aeb7;  */

void FUN_105e5ae88(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2c958;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e2c958,
                      &PTR____CFConstantStringClassReference_110e2c978,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105e5aeb8; end: 105e5b073; -[SCSendToSelectAllActionHandler initWithSelectionTracker:replyRecipientObservableRepository:snapchattersObservableRepository:topGroupsDataSource:snappableDataSource:userInitiatedPerformer:logger:selectedItemPublishSubject:] */

undefined1 *
FUN_105e5aeb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126ed5a8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x40),param_9);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e5b074; end: 105e5b53f; -[SCSendToSelectAllActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_105e5b074(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 auStack_190 [8];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_initWeak(auStack_90,param_5);
  func_0x00010bfb68e0(param_9);
  uVar6 = param_8;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010c0720c0();
  _objc_release(uVar6);
  if ((int)uVar1 == 0) {
    uVar6 = param_8;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    func_0x00010c0720c0();
    _objc_release(uVar6);
    if ((int)uVar1 != 0) {
      uVar2 = *(undefined8 *)(param_5 + 0x18);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_5 + 0x30);
      func_0x00010c11de00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      func_0x00010bf19580(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar6;
      func_0x00010c268560();
      _objc_retainAutoreleasedReturnValue();
      puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_118 = 0xc2000000;
      uStack_110 = 0x105e5b5a4;
      puStack_108 = &UNK_1108ed1e8;
      puVar7 = auStack_100;
      _objc_copyWeak(puVar7,auStack_90);
      uVar4 = uVar1;
      uStack_f8 = param_1;
      uStack_f0 = param_2;
      uStack_e8 = param_3;
      uStack_e0 = param_4;
      func_0x00010c25ff60(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar4);
      goto LAB_105e5b2b4;
    }
    uVar6 = param_8;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    func_0x00010c0720c0();
    _objc_release(uVar6);
    if ((int)uVar1 == 0) {
      uVar6 = param_8;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar6;
      func_0x00010c0720c0();
      _objc_release(uVar6);
      if ((int)uVar1 == 0) {
        uVar6 = 0;
        goto LAB_105e5b2dc;
      }
      uVar2 = *(undefined8 *)(param_5 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_5 + 0x30);
      func_0x00010c11de00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      func_0x00010c245560();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar6;
      func_0x00010bfad7a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010c268560();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = auStack_190;
      _objc_copyWeak(puVar7,auStack_90);
      uVar5 = uVar4;
      uStack_188 = param_1;
      uStack_180 = param_2;
      uStack_178 = param_3;
      uStack_170 = param_4;
      func_0x00010c25ff60(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar5);
      _objc_release(uVar4);
      goto LAB_105e5b2b4;
    }
    uVar2 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf2fb00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c268560();
    _objc_retainAutoreleasedReturnValue();
    puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_160 = 0xc2000000;
    uStack_158 = 0x105e5b608;
    puStack_150 = &UNK_1108ed1e8;
    puVar7 = auStack_148;
    _objc_copyWeak(puVar7,auStack_90);
    uStack_140 = param_1;
    uStack_138 = param_2;
    uStack_130 = param_3;
    uStack_128 = param_4;
    func_0x00010c25ff60(uVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    uVar2 = *(undefined8 *)(param_5 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c122fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c268560();
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_105e5b540;
    puStack_c0 = &UNK_1108ed1e8;
    puVar7 = auStack_b8;
    _objc_copyWeak(puVar7,auStack_90);
    uVar1 = uVar6;
    uStack_b0 = param_1;
    uStack_a8 = param_2;
    uStack_a0 = param_3;
    uStack_98 = param_4;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
LAB_105e5b2b4:
    _objc_release(uVar1);
  }
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(puVar7);
  uVar6 = 1;
LAB_105e5b2dc:
  _objc_destroyWeak(auStack_90);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return uVar6;
}



/* Entry: 105e5b540; end: 105e5b66b;  */

void FUN_105e5b540(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be9d740(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


