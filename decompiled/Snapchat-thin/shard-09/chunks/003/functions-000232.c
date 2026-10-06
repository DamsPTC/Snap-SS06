/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106c2bc40; end: 106c2bd1b;  */

void FUN_106c2bc40(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  _objc_retain(param_1);
  func_0x00010bfb2040(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106c2bd1c; end: 106c2bf1b;  */

undefined **
FUN_106c2bd1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bf5e300();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf44660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c2bedc0();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c26f320(param_2);
  _objc_release(param_2);
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25cf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  _objc_alloc();
  _objc_retainAutorelease(puVar4);
  func_0x00010bdc3520();
  func_0x00010c057e80();
  puVar1 = puVar3;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  ppuVar6 = ppuVar5;
  func_0x00010b7043dc(ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
    return ppuVar6;
  }
  ___stack_chk_fail();
  if (puVar4 + -1 < (undefined *)0xc) {
    return (undefined **)(&PTR_PTR_11096a068)[(long)(puVar4 + -1)];
  }
  return &PTR____CFConstantStringClassReference_110e79d38;
}



/* Entry: 106c2bf1c; end: 106c2bf43;  */

undefined ** FUN_106c2bf1c(long param_1)

{
  if (param_1 - 1U < 0xc) {
    return (undefined **)(&PTR_PTR_11096a068)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110e79d38;
}



/* Entry: 106c2bf44; end: 106c2bfaf;  */

void FUN_106c2bf44(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010c0fa980();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c2bfb0; end: 106c2c11f;  */

void FUN_106c2bfb0(undefined *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar5 = param_2;
  func_0x00010bf529e0();
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (lVar5 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2;
    func_0x00010bf529e0();
    puVar4 = PTR____NSArray0__struct_11034ab48;
    if (-1 < lVar5 + -1) {
      do {
        lVar5 = lVar5 + -1;
        lVar2 = param_2;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        func_0x00010bf4b900();
        if (((ulong)puVar3 & 1) != 0) {
          puVar4 = PTR____NSArray0__struct_11034ab48;
          if (lVar2 != 0) {
            _objc_retain(lVar2);
            func_0x00010bfece40(param_1);
            puVar4 = param_1;
            func_0x00010c25e980(param_1);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar2);
            _objc_release(lVar2);
          }
          break;
        }
        _objc_release(lVar2);
      } while (0 < lVar5);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106c2c120; end: 106c2c12b;  */

void FUN_106c2c120(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_isEqualToString__1125fa240,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106c2c12c; end: 106c2c247;  */

void FUN_106c2c12c(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010c071b60();
  lVar2 = param_3;
  if (param_4 == 0) {
    _objc_retain(param_1);
    lVar1 = param_3;
    func_0x00010bfece40();
    if (lVar1 == 0x7fffffffffffffff) {
      func_0x00010c067fc0();
      func_0x00010bf529e0();
    }
    func_0x00010c25e980(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    _objc_retain(param_3);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106c2c248; end: 106c2c253;  */

void FUN_106c2c248(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_isEqualToString__1125fa240,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106c2c254; end: 106c2c447;  */

void FUN_106c2c254(long param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126bf830;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07e800();
  _objc_release(param_4);
  puVar5 = PTR____NSArray0__struct_11034ab48;
  if ((int)puVar2 != 0) {
    puVar2 = param_2;
    func_0x00010c0d3c80();
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar2);
      puVar3 = puVar2;
    }
    _objc_release(puVar2);
    _objc_retain(param_1);
    lVar4 = param_1;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        puVar2 = puVar3;
        func_0x00010bf4b900();
        if (((ulong)puVar2 & 1) == 0) {
          func_0x00010befa120(puVar3);
        }
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
      lVar4 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release(param_1);
    puVar5 = puVar3;
    func_0x00010bf51e00(puVar3);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c09da90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar6,PTR_s_localIdentifier_1126050b0);
  return;
}



/* Entry: 106c2c448; end: 106c2c44f;  */

void FUN_106c2c448(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09da90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_localIdentifier_1126050b0);
  return;
}



/* Entry: 106c2c450; end: 106c2c4c7;  */

void FUN_106c2c450(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = 0;
  uVar1 = param_1 - 1;
  if ((uVar1 < 0xb) && ((0x7dfU >> (ulong)((uint)uVar1 & 0x1f) & 1) != 0)) {
    uVar2 = param_2;
    func_0x00010bf64e40(*(undefined8 *)(&UNK_10dde85b8 + uVar1 * 8),param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106c2c4c8; end: 106c2c51b;  */

undefined ** FUN_106c2c4c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR__OBJC_CLASS___NSConstantArray_111181028;
  func_0x00010bf4b900(&PTR__OBJC_CLASS___NSConstantArray_111181028,param_2,puVar1);
  _objc_release(puVar1);
  return ppuVar2;
}



/* Entry: 106c2c51c; end: 106c2cfc7;  */

undefined8 **** FUN_106c2c51c(undefined8 ****param_1,undefined8 ****param_2,undefined8 ****param_3)

{
  int iVar1;
  undefined8 ****ppppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 ****ppppuVar7;
  undefined8 ***pppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  uint uVar11;
  undefined8 ****ppppuVar12;
  long lVar13;
  undefined8 ****ppppuVar14;
  undefined8 ****ppppuVar15;
  undefined8 ****unaff_x22;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined **unaff_x26;
  undefined8 ****ppppuVar16;
  long lVar17;
  undefined8 ****unaff_x27;
  undefined8 ****unaff_x28;
  undefined **ppuVar18;
  undefined8 **ppuStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 **appuStack_298 [16];
  undefined8 ***pppuStack_218;
  undefined8 ***pppuStack_210;
  undefined8 **ppuStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined8 ***pppuStack_1f0;
  undefined8 ***pppuStack_1e8;
  long lStack_1e0;
  undefined8 ***pppuStack_1d0;
  undefined8 ***pppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 ***pppuStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 ***pppuStack_198;
  undefined8 ***pppuStack_190;
  undefined8 ***pppuStack_188;
  undefined8 ***apppuStack_180 [4];
  long lStack_160;
  undefined8 ***pppuStack_158;
  undefined **ppuStack_150;
  undefined8 ***pppuStack_148;
  undefined **ppuStack_140;
  undefined *puStack_138;
  undefined8 **ppuStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 **appuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar12 = param_2;
  _objc_retain();
  _objc_retain(param_3);
  ppppuVar2 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  ppuStack_130 = (undefined8 ***)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_111181058;
  ppppuVar16 = (undefined8 ****)&ppuStack_130;
  ppppuVar15 = (undefined8 ****)appuStack_f0;
  pppuStack_158 = ppppuVar2;
  func_0x00010bf52a60();
  ppuStack_150 = ppuVar3;
  if (ppuVar3 != (undefined **)0x0) {
    lStack_160 = *plStack_120;
    apppuStack_180[3] = param_1;
    pppuStack_148 = param_3;
    do {
      unaff_x26 = (undefined **)0x0;
      do {
        if (*plStack_120 != lStack_160) {
          _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_111181058);
        }
        unaff_x22 = *(undefined8 *****)(lStack_128 + (long)unaff_x26 * 8);
        func_0x00010c2827c0();
        _objc_retain(param_1);
        _objc_retain(param_3);
        unaff_x25 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
        func_0x00010c0ecd20();
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x22 == (undefined8 ****)0x5) {
          ppuStack_140 = unaff_x26;
          _objc_retain(param_1);
          _objc_retain(param_3);
          puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new();
          unaff_x27 = param_1;
          ppppuVar12 = param_2;
          puStack_138 = puVar4;
          func_0x000108ebeb20();
          _objc_retainAutoreleasedReturnValue();
          func_0x000108ebeac0();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar16 = param_1;
          func_0x00010bf433a0();
          unaff_x22 = param_1;
          if (ppppuVar16 == (undefined8 ****)0xffffffffffffffff) {
            lVar17 = 0x65;
            ppppuVar16 = unaff_x28;
            do {
              ppppuVar12 = (undefined8 ****)0x5;
              ppppuVar15 = param_3;
              func_0x000107fe41dc(param_3,5,param_1);
              _objc_retainAutoreleasedReturnValue();
              if (ppppuVar15 == (undefined8 ****)0x0) {
                unaff_x28 = ppppuVar15;
                FUN_106c2f3d0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x22 = param_1;
                if (unaff_x28 != (undefined8 ****)0x0) {
                  puVar4 = PTR_PTR_1126d1758;
                  _objc_alloc(PTR_PTR_1126d1758);
                  func_0x00010c02a460();
                  func_0x00010befa120(puStack_138);
                  _objc_release(puVar4);
                  unaff_x22 = (undefined8 ****)0x5;
                  ppppuVar12 = param_1;
                  FUN_106c2c450();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(param_1);
                  goto LAB_106c2c91c;
                }
LAB_106c2c95c:
                _objc_release(ppppuVar15);
                unaff_x28 = ppppuVar16;
                break;
              }
              puVar5 = PTR_PTR_1126d1758;
              _objc_alloc(PTR_PTR_1126d1758);
              puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
              ppppuVar16 = ppppuVar15;
              func_0x00010bef0260(ppppuVar15);
              func_0x00010bf655e0((double)(long)ppppuVar16,puVar4);
              _objc_retainAutoreleasedReturnValue();
              puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
              ppppuVar16 = ppppuVar15;
              func_0x00010c124e40(ppppuVar15);
              func_0x00010bf655e0((double)(long)ppppuVar16,puVar6);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c02a460(puVar5);
              func_0x00010befa120(puStack_138);
              _objc_release(puVar5);
              _objc_release(puVar6);
              _objc_release(puVar4);
              unaff_x22 = (undefined8 ****)PTR__OBJC_CLASS___NSDate_1126ae770;
              ppppuVar16 = ppppuVar15;
              func_0x00010bf9c740(ppppuVar15);
              func_0x00010bf655e0((double)(long)ppppuVar16);
              _objc_retainAutoreleasedReturnValue();
              unaff_x28 = param_1;
LAB_106c2c91c:
              _objc_release(unaff_x28);
              lVar17 = lVar17 + -1;
              param_3 = (undefined8 ****)pppuStack_148;
              ppppuVar16 = unaff_x28;
              if (lVar17 == 0) goto LAB_106c2c95c;
              _objc_release(ppppuVar15);
              ppppuVar15 = unaff_x22;
              func_0x00010bf433a0();
              param_1 = unaff_x22;
              param_3 = (undefined8 ****)pppuStack_148;
            } while (ppppuVar15 == (undefined8 ****)0xffffffffffffffff);
          }
          puVar4 = puStack_138;
          unaff_x24 = puStack_138;
          func_0x00010bf51e00();
          _objc_release(unaff_x22);
          _objc_release(unaff_x27);
          _objc_release(puVar4);
          _objc_release(param_3);
          param_1 = (undefined8 ****)apppuStack_180[3];
          _objc_release(apppuStack_180[3]);
          unaff_x26 = ppuStack_140;
        }
        else {
          if (unaff_x22 == (undefined8 ****)0x3) {
            ppuStack_140 = unaff_x26;
            func_0x000108ebeac0(param_1);
            _objc_retainAutoreleasedReturnValue();
            unaff_x22 = (undefined8 ****)0x0;
            do {
              ppppuVar16 = param_1;
              ppppuVar12 = unaff_x22;
              func_0x000108ebeb20(param_1);
              _objc_retainAutoreleasedReturnValue();
              unaff_x27 = (undefined8 ****)PTR_PTR_1126d1758;
              _objc_alloc();
              func_0x00010c02a460();
              func_0x00010befa120(unaff_x25);
              _objc_release(unaff_x27);
              _objc_release(ppppuVar16);
              unaff_x22 = (undefined8 ****)((long)unaff_x22 + 1);
            } while (unaff_x22 <= param_2);
LAB_106c2c73c:
            _objc_release(param_1);
            param_1 = (undefined8 ****)apppuStack_180[3];
            unaff_x26 = ppuStack_140;
          }
          else if (unaff_x22 == (undefined8 ****)0x1) {
            ppuStack_140 = unaff_x26;
            func_0x000108ebeac0();
            _objc_retainAutoreleasedReturnValue();
            ppppuVar16 = (undefined8 ****)0x0;
            do {
              unaff_x22 = param_1;
              ppppuVar12 = ppppuVar16;
              func_0x000108ebeb20();
              _objc_retainAutoreleasedReturnValue();
              unaff_x27 = unaff_x22;
              func_0x000108ebfd40();
              _objc_retainAutoreleasedReturnValue();
              unaff_x28 = (undefined8 ****)PTR_PTR_1126d1758;
              _objc_alloc();
              func_0x00010c02a460();
              func_0x00010befa120(unaff_x25);
              _objc_release(unaff_x28);
              _objc_release(unaff_x27);
              _objc_release(unaff_x22);
              ppppuVar16 = (undefined8 ****)((long)ppppuVar16 + 1);
            } while (ppppuVar16 <= param_2);
            goto LAB_106c2c73c;
          }
          unaff_x24 = unaff_x25;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(unaff_x25);
        _objc_release(param_3);
        _objc_release(param_1);
        func_0x00010befa160(pppuStack_158);
        _objc_release(unaff_x24);
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (unaff_x26 != ppuStack_150);
      ppppuVar16 = (undefined8 ****)&ppuStack_130;
      ppppuVar15 = (undefined8 ****)appuStack_f0;
      ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_111181058;
      func_0x00010bf52a60();
      ppuStack_150 = ppuVar3;
    } while (ppuVar3 != (undefined **)0x0);
  }
  pppuVar8 = pppuStack_158;
  ppppuVar2 = (undefined8 ****)pppuStack_158;
  func_0x00010bf51e00();
  _objc_release(pppuVar8);
  _objc_release(param_3);
  ppppuVar7 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  ppppuVar14 = (undefined8 ****)&ppuStack_2e0;
  pppuStack_190 = pppuVar8;
  apppuStack_180[1] = (undefined8 ***)0x106c2ca68;
  lStack_1e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar9 = ppppuVar12;
  ppppuVar10 = ppppuVar16;
  pppuStack_1d0 = unaff_x28;
  pppuStack_1c8 = unaff_x27;
  ppuStack_1c0 = unaff_x26;
  puStack_1b8 = unaff_x25;
  puStack_1b0 = unaff_x24;
  pppuStack_1a8 = param_3;
  pppuStack_1a0 = unaff_x22;
  pppuStack_198 = ppppuVar2;
  pppuStack_188 = param_1;
  apppuStack_180[0] = (undefined8 ***)&stack0xfffffffffffffff0;
  _objc_retain(ppppuVar12);
  uVar11 = (uint)ppppuVar9;
  _objc_retain(ppppuVar16);
  ppppuVar2 = (undefined8 ****)PTR____NSArray0__struct_11034ab48;
  ppppuVar9 = ppppuVar12;
  switch(ppppuVar7) {
  case (undefined8 ****)0x0:
  case (undefined8 ****)0x9:
  case (undefined8 ****)0xc:
    ppppuVar9 = (undefined8 ****)PTR_PTR_1126d1758;
    _objc_alloc();
    func_0x00010c02a460();
    ppppuVar14 = &pppuStack_1e8;
    ppppuVar15 = (undefined8 ****)0x1;
    ppppuVar2 = (undefined8 ****)PTR__OBJC_CLASS___NSArray_1126ae530;
    pppuStack_1e8 = ppppuVar9;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined8 ****)0x1:
  case (undefined8 ****)0x4:
    func_0x000108ebfd40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar8 = (undefined8 ***)PTR_PTR_1126d1758;
    _objc_alloc();
    func_0x00010c02a460();
    ppppuVar14 = (undefined8 ****)&ppuStack_208;
    ppppuVar15 = (undefined8 ****)0x1;
    ppppuVar2 = (undefined8 ****)PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_208 = pppuVar8;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar8);
    break;
  case (undefined8 ****)0x2:
    func_0x000108ebfd40();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar7 = ppppuVar9;
    func_0x000108ebfdc4();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar10 = (undefined8 ****)PTR_PTR_1126d1758;
    _objc_alloc();
    func_0x00010c02a460();
    ppppuVar14 = &pppuStack_1f0;
    ppppuVar15 = (undefined8 ****)0x1;
    ppppuVar2 = (undefined8 ****)PTR__OBJC_CLASS___NSArray_1126ae530;
    pppuStack_1f0 = ppppuVar10;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x000106c2cf60;
  case (undefined8 ****)0x3:
    func_0x000108ebeac0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar7 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = 0;
    do {
      ppppuVar2 = ppppuVar9;
      lVar13 = lVar17;
      func_0x000108ebeb20();
      uVar11 = (uint)lVar13;
      _objc_retainAutoreleasedReturnValue();
      ppppuVar10 = (undefined8 ****)PTR_PTR_1126d1758;
      _objc_alloc();
      ppppuVar15 = ppppuVar2;
      func_0x00010c02a460();
      ppppuVar14 = ppppuVar10;
      func_0x00010befa120(ppppuVar7);
      _objc_release(ppppuVar10);
      _objc_release(ppppuVar2);
      lVar17 = lVar17 + -1;
    } while (lVar17 != -7);
    ppppuVar2 = ppppuVar7;
    func_0x00010bf51e00();
    goto code_r0x000106c2cf68;
  case (undefined8 ****)0x5:
    uVar11 = 5;
    ppppuVar9 = ppppuVar16;
    ppppuVar14 = ppppuVar12;
    func_0x000107fe41dc();
    _objc_retainAutoreleasedReturnValue();
    if (ppppuVar9 == (undefined8 ****)0x0) {
      ppppuVar7 = ppppuVar9;
      FUN_106c2f3d0();
      _objc_retainAutoreleasedReturnValue();
      if (ppppuVar7 == (undefined8 ****)0x0) goto code_r0x000106c2cf68;
      puVar4 = PTR_PTR_1126d1758;
      _objc_alloc();
      ppppuVar10 = ppppuVar12;
      func_0x000108ebeac0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02a460();
      lVar17 = -0x78;
      puStack_1f8 = puVar4;
    }
    else {
      puVar4 = PTR_PTR_1126d1758;
      _objc_alloc();
      ppppuVar7 = (undefined8 ****)PTR__OBJC_CLASS___NSDate_1126ae770;
      ppppuVar15 = ppppuVar9;
      func_0x00010bef0260(ppppuVar9);
      func_0x00010bf655e0((double)(long)ppppuVar15);
      _objc_retainAutoreleasedReturnValue();
      ppppuVar10 = (undefined8 ****)PTR__OBJC_CLASS___NSDate_1126ae770;
      ppppuVar15 = ppppuVar9;
      func_0x00010c124e40(ppppuVar9);
      func_0x00010bf655e0((double)(long)ppppuVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02a460();
      lVar17 = -0x80;
      puStack_200 = puVar4;
    }
    ppppuVar14 = (undefined8 ****)((long)apppuStack_180 + lVar17);
    ppppuVar15 = (undefined8 ****)0x1;
    ppppuVar2 = (undefined8 ****)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
code_r0x000106c2cf60:
    _objc_release(ppppuVar10);
code_r0x000106c2cf68:
    _objc_release(ppppuVar7);
    break;
  default:
    goto LAB_106c2cf78;
  case (undefined8 ****)0x7:
    uVar11 = 0;
    func_0x000108ebeb20();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar7 = (undefined8 ****)PTR_PTR_1126d1758;
    _objc_alloc();
    func_0x00010c02a460();
    lVar17 = -0x90;
    pppuStack_210 = ppppuVar7;
    goto code_r0x000106c2cdc4;
  case (undefined8 ****)0x8:
    uVar11 = 0xfffffffd;
    func_0x000108ebeb20();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar7 = (undefined8 ****)PTR_PTR_1126d1758;
    _objc_alloc();
    func_0x00010c02a460();
    lVar17 = -0x98;
    pppuStack_218 = ppppuVar7;
code_r0x000106c2cdc4:
    ppppuVar14 = (undefined8 ****)((long)apppuStack_180 + lVar17);
    ppppuVar15 = (undefined8 ****)0x1;
    ppppuVar2 = (undefined8 ****)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x000106c2cf68;
  case (undefined8 ****)0xa:
    ppppuVar9 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_2d8 = 0;
    ppuStack_2e0 = (undefined8 ***)0x0;
    uStack_2c8 = 0;
    plStack_2d0 = (long *)0x0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_111181040;
    ppppuVar15 = (undefined8 ****)appuStack_298;
    func_0x00010bf52a60();
    if (ppuVar3 != (undefined **)0x0) {
      lVar17 = *plStack_2d0;
      do {
        ppuVar18 = (undefined **)0x0;
        do {
          if (*plStack_2d0 != lVar17) {
            _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_111181040);
          }
          iVar1 = (int)*(undefined8 *)(lStack_2d8 + (long)ppuVar18 * 8);
          func_0x00010c2827c0();
          uVar11 = -iVar1;
          ppppuVar15 = ppppuVar12;
          func_0x000108ebeb20();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR_PTR_1126d1758;
          _objc_alloc(PTR_PTR_1126d1758);
          func_0x00010c02a460();
          func_0x00010befa120(ppppuVar9);
          _objc_release(puVar4);
          _objc_release(ppppuVar15);
          ppuVar18 = (undefined **)((long)ppuVar18 + 1);
        } while (ppuVar3 != ppuVar18);
        ppppuVar15 = (undefined8 ****)appuStack_298;
        ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_111181040;
        ppppuVar14 = (undefined8 ****)&ppuStack_2e0;
        func_0x00010bf52a60();
      } while (ppuVar3 != (undefined **)0x0);
    }
    ppppuVar2 = ppppuVar9;
    func_0x00010bf51e00();
  }
  _objc_release(ppppuVar9);
  ppppuVar10 = ppppuVar14;
LAB_106c2cf78:
  _objc_release(ppppuVar16);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1e0) {
    ___stack_chk_fail();
    _objc_retain(ppppuVar15);
    ppppuVar16 = (undefined8 ****)0x23;
    switch(ppppuVar12) {
    case (undefined8 ****)0x1:
      ppppuVar16 = ppppuVar10;
      if ((uVar11 & 0 < (long)ppppuVar10) == 0) {
        ppppuVar16 = (undefined8 ****)0x23;
      }
      break;
    case (undefined8 ****)0x2:
      ppppuVar16 = (undefined8 ****)0x19;
      break;
    case (undefined8 ****)0x5:
      ppppuVar16 = (undefined8 ****)0xa;
      break;
    case (undefined8 ****)0x6:
    case (undefined8 ****)0xc:
      ppppuVar16 = (undefined8 ****)0xffffffffffffffff;
      break;
    case (undefined8 ****)0x7:
      ppppuVar16 = ppppuVar15;
      func_0x000108ec0680(ppppuVar15);
      break;
    case (undefined8 ****)0x8:
      ppppuVar16 = ppppuVar15;
      func_0x000108ec06e8(ppppuVar15);
      break;
    case (undefined8 ****)0x9:
      ppppuVar16 = (undefined8 ****)0x5;
      break;
    case (undefined8 ****)0xa:
      ppppuVar16 = ppppuVar15;
      func_0x000108ec0750(ppppuVar15);
      break;
    case (undefined8 ****)0xb:
      ppppuVar16 = (undefined8 ****)0x0;
    }
    _objc_release(ppppuVar15);
    return ppppuVar16;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppppuVar2);
  return ppppuVar2;
}



/* Entry: 106c2cfc8; end: 106c2d09f;  */

long FUN_106c2cfc8(undefined8 param_1,byte param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = 0x23;
  switch(param_1) {
  case 1:
    lVar1 = param_3;
    if ((param_2 & 0 < param_3) == 0) {
      lVar1 = 0x23;
    }
    break;
  case 2:
    lVar1 = 0x19;
    break;
  case 5:
    lVar1 = 10;
    break;
  case 6:
  case 0xc:
    lVar1 = -1;
    break;
  case 7:
    lVar1 = param_4;
    func_0x000108ec0680(param_4);
    break;
  case 8:
    lVar1 = param_4;
    func_0x000108ec06e8(param_4);
    break;
  case 9:
    lVar1 = 5;
    break;
  case 10:
    lVar1 = param_4;
    func_0x000108ec0750(param_4);
    break;
  case 0xb:
    lVar1 = 0;
  }
  _objc_release(param_4);
  return lVar1;
}



/* Entry: 106c2d0a0; end: 106c2d0a7;  */

void FUN_106c2d0a0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09da90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_localIdentifier_1126050b0);
  return;
}



/* Entry: 106c2d0a8; end: 106c2d16b;  */

bool FUN_106c2d0a8(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  
  _objc_retain(param_2);
  iVar6 = (int)*(undefined8 *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010c09da80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  if (iVar6 == 0) {
    bVar1 = false;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___PHAssetResource_1126cf9b8;
    func_0x00010bf0b6a0(PTR__OBJC_CLASS___PHAssetResource_1126cf9b8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x0001006372a4();
    puVar5 = puVar4;
    func_0x00010bf529e0();
    bVar1 = puVar5 == (undefined *)0x0;
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(uVar2);
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 106c2d16c; end: 106c2d18b;  */

bool FUN_106c2d16c(undefined8 param_1,long param_2)

{
  func_0x00010c27dd80(param_2);
  return param_2 == 7;
}



/* Entry: 106c2d18c; end: 106c2d49b;  */

void FUN_106c2d18c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar6 = PTR_PTR_1126af4c0;
  func_0x00010bfa6f00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf529e0();
  if (puVar8 == (undefined *)0x0) {
    puVar8 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar7);
    puVar8 = puVar7;
    func_0x00010bf52a60();
    puVar5 = PTR____NSArray0__struct_11034ab48;
    lVar4 = lRam0000000000000000;
    while (puVar8 != (undefined *)0x0) {
      puVar14 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(puVar7);
        }
        puVar10 = PTR_PTR_1126af4d0;
        func_0x00010bfa7380();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar5;
        if (puVar10 != (undefined *)0x0) {
          puVar1 = puVar10;
        }
        _objc_retain(puVar1);
        _objc_release(puVar10);
        func_0x00010befa160(puVar9);
        _objc_release(puVar1);
        puVar14 = puVar14 + 1;
      } while (puVar8 != puVar14);
      puVar8 = puVar7;
      func_0x00010bf52a60();
    }
    _objc_release(puVar7);
    puVar8 = PTR_PTR_1126ae6b8;
    _objc_retain(param_3);
    _objc_retain(param_5);
    _objc_retain(param_7);
    _objc_retain(param_6);
    _objc_retain(puVar9);
    func_0x00010bf54280(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    _objc_release(param_7);
    _objc_release(param_5);
    _objc_release(puVar9);
    _objc_release(param_3);
    _objc_release(puVar9);
  }
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(param_3 + 0x20);
    uVar3 = *(undefined8 *)(param_3 + 0x28);
    _objc_retain(uVar3);
    uVar11 = *(undefined8 *)(param_3 + 0x38);
    func_0x00010c11de00(uVar11);
    _objc_retainAutoreleasedReturnValue();
    auVar16 = *(undefined1 (*) [16])(param_3 + 0x28);
    _objc_retain(*(undefined8 *)*(undefined1 (*) [16])(param_3 + 0x28));
    auVar16 = NEON_ext(auVar16,auVar16,8,1);
    uVar15 = *(undefined8 *)(param_3 + 0x40);
    _objc_retain(uVar15);
    uVar13 = *(undefined8 *)(param_3 + 0x48);
    _objc_retain(uVar13);
    _objc_retain(param_2);
    func_0x00010c0f8520(uVar2);
    _objc_release(uVar11);
    puVar8 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(uVar13);
    _objc_release(uVar15);
    _objc_release(auVar16._8_8_);
    _objc_release(uVar3);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106c2d49c; end: 106c2d5ff;  */

void FUN_106c2d49c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  auVar7 = *(undefined1 (*) [16])(param_1 + 0x28);
  _objc_retain(*(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x28));
  auVar7 = NEON_ext(auVar7,auVar7,8,1);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar6);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar5);
  _objc_retain(param_2);
  func_0x00010c0f8520(uVar1);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(auVar7._8_8_);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106c2d600; end: 106c2d637;  */

void FUN_106c2d600(long param_1,undefined8 param_2)

{
  func_0x00010bf6bf20(PTR_PTR_1126bc7f8,param_2,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bf6be90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126bc830,PTR_s_deleteGalleryEntries__1125b8948,*(undefined8 *)(param_1 + 0x28)
            );
  return;
}



/* Entry: 106c2d638; end: 106c2d77b;  */

undefined * FUN_106c2d638(double param_1,long param_2,undefined *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  int iVar15;
  long lVar16;
  undefined *puVar17;
  double dVar18;
  undefined *puStack_388;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((int)param_3 != 0) {
    param_1 = 0.0;
    lVar12 = *(long *)(param_2 + 0x28);
    _objc_retain(lVar12);
    lVar11 = lVar12;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar11 != 0) {
      lVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar12);
        }
        param_3 = *(undefined **)(param_2 + 0x30);
        func_0x0001080194b4(*(undefined8 *)(lVar16 * 8));
        lVar16 = lVar16 + 1;
      } while (lVar11 != lVar16);
      lVar11 = lVar12;
      func_0x00010bf52a60();
    }
    _objc_release(lVar12);
    func_0x00010c128b80(*(undefined8 *)(param_2 + 0x38));
  }
  uVar10 = *(undefined8 *)(param_2 + 0x40);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c0d9840(uVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar7;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(puVar8);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_new();
  puVar17 = (undefined *)0x1;
  puStack_388 = param_3;
  if ((long)param_3 < 7) {
    if (param_3 + -2 < (undefined *)0x5) goto LAB_106c2d7f0;
    if (param_3 == (undefined *)0x1) {
      puVar17 = (undefined *)0x3;
      goto LAB_106c2d8a0;
    }
LAB_106c2d7f4:
    uVar10 = 0;
    FUN_106c2cfc8(param_3,0,0,puVar8);
    _objc_retain(puVar8);
    if ((((undefined *)0xc < param_3) || ((1L << ((ulong)param_3 & 0x3f) & 0x1d7fU) != 0)) ||
       (param_3 != (undefined *)0x7)) goto LAB_106c2d8c8;
    func_0x000108ec0618();
    _objc_release(puVar8);
  }
  else {
    if (8 < (long)param_3) {
      if (param_3 != (undefined *)0x9) {
        if (param_3 == (undefined *)0xb) {
          puVar17 = (undefined *)0x0;
          goto LAB_106c2d8a0;
        }
        goto LAB_106c2d7f4;
      }
LAB_106c2d7f0:
      puVar17 = (undefined *)0x3;
      goto LAB_106c2d7f4;
    }
    if (param_3 == (undefined *)0x7) goto LAB_106c2d7f0;
    if (param_3 != (undefined *)0x8) goto LAB_106c2d7f4;
    puVar17 = (undefined *)0x5;
LAB_106c2d8a0:
    uVar10 = 0;
    FUN_106c2cfc8(param_3,0,0,puVar8);
    _objc_retain(puVar8);
LAB_106c2d8c8:
    _objc_release(puVar8);
    if ((undefined *)0x3 < param_3 + -7) {
      _objc_retain(puVar7);
      puVar17 = puVar7;
      goto LAB_106c2dbf0;
    }
  }
  param_1 = 0.0;
  _objc_retain(puVar7);
  puVar4 = puVar7;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
    puVar5 = puVar3;
    do {
      if (lRam0000000000000000 != lVar11) {
        _objc_enumerationMutation(puVar7);
      }
      iVar15 = (int)*(undefined8 *)((long)puVar14 * 8);
      func_0x00010c072a60();
      puVar3 = puVar5;
      if (iVar15 != 0) {
        puVar3 = puVar7;
        func_0x00010c14cca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        puVar5 = puVar3;
        func_0x00010bf529e0();
        if (puVar17 <= puVar5) {
          puVar17 = puVar3;
          func_0x00010bf51e00();
          _objc_release(puVar7);
          goto LAB_106c2dbf0;
        }
      }
      puVar14 = puVar14 + 1;
      puVar5 = puVar3;
    } while (puVar4 != puVar14);
    puVar4 = puVar7;
    func_0x00010bf52a60();
  }
  _objc_release(puVar7);
  param_1 = 0.0;
  _objc_retain(puVar7);
  puVar4 = puVar7;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
    puVar5 = puVar3;
    do {
      if (lRam0000000000000000 != lVar11) {
        _objc_enumerationMutation(puVar7);
      }
      puVar3 = puVar7;
      func_0x00010c14cca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = puVar3;
      func_0x00010bf529e0();
      if ((puVar17 <= puVar5) && (puVar5 = puVar3, func_0x00010bf529e0(), puVar5 <= puStack_388)) {
        puVar17 = puVar3;
        func_0x00010bf51e00();
        puVar4 = puVar7;
        goto LAB_106c2dbd8;
      }
      puVar14 = puVar14 + 1;
      puVar5 = puVar3;
    } while (puVar4 != puVar14);
    puVar4 = puVar7;
    func_0x00010bf52a60();
  }
  _objc_release(puVar7);
  puVar17 = puVar3;
  func_0x00010bf529e0();
  if (puStack_388 < puVar17) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar17 = puVar3;
    func_0x00010bf529e0();
    puVar14 = puVar3;
    func_0x00010bf529e0();
    if (puVar14 != (undefined *)0x0) {
      lVar11 = 0;
      puVar14 = (undefined *)0x0;
      uVar2 = 0;
      if (puStack_388 != (undefined *)0x0) {
        uVar2 = (ulong)puVar17 / (ulong)puStack_388;
      }
      do {
        if (lVar11 == 0) {
          puVar17 = puVar3;
          func_0x00010c0dfd40(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar4);
          _objc_release(puVar17);
        }
        lVar1 = 0;
        if (lVar11 + 1U != uVar2) {
          lVar1 = lVar11 + 1;
        }
        puVar14 = puVar14 + 1;
        puVar17 = puVar3;
        func_0x00010bf529e0();
        lVar11 = lVar1;
      } while (puVar14 < puVar17);
    }
    puVar17 = puVar4;
    func_0x00010bf51e00();
LAB_106c2dbd8:
    _objc_release(puVar4);
  }
  else {
    _objc_retain(puVar3);
    puVar17 = puVar3;
  }
LAB_106c2dbf0:
  _objc_release(puVar3);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
    return puVar17;
  }
  ___stack_chk_fail();
  uVar13 = *(undefined8 *)(puVar7 + 0x20);
  _objc_retain(uVar10);
  func_0x00010bf5a700(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  uVar6 = uVar10;
  dVar18 = param_1;
  func_0x00010bf5a700(uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  func_0x00010c26f320(uVar6);
  _objc_release(uVar6);
  _objc_release(uVar13);
  if (0.0 <= param_1 - dVar18) {
    puVar7 = (undefined *)(ulong)(param_1 - dVar18 <= *(double *)(puVar7 + 0x28));
  }
  else {
    puVar7 = (undefined *)0x0;
  }
  return puVar7;
}



/* Entry: 106c2d77c; end: 106c2dc4b;  */

undefined * FUN_106c2d77c(double param_1,undefined *param_2,undefined *param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  int iVar12;
  undefined *puVar13;
  double dVar14;
  undefined *puStack_268;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_4);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_new();
  puVar13 = (undefined *)0x1;
  puStack_268 = param_3;
  if ((long)param_3 < 7) {
    if (param_3 + -2 < (undefined *)0x5) goto LAB_106c2d7f0;
    if (param_3 == (undefined *)0x1) {
      puVar13 = (undefined *)0x3;
      goto LAB_106c2d8a0;
    }
LAB_106c2d7f4:
    uVar7 = 0;
    FUN_106c2cfc8(param_3,0,0,param_4);
    _objc_retain(param_4);
    if ((((undefined *)0xc < param_3) || ((1L << ((ulong)param_3 & 0x3f) & 0x1d7fU) != 0)) ||
       (param_3 != (undefined *)0x7)) goto LAB_106c2d8c8;
    func_0x000108ec0618();
    _objc_release(param_4);
  }
  else {
    if (8 < (long)param_3) {
      if (param_3 != (undefined *)0x9) {
        if (param_3 == (undefined *)0xb) {
          puVar13 = (undefined *)0x0;
          goto LAB_106c2d8a0;
        }
        goto LAB_106c2d7f4;
      }
LAB_106c2d7f0:
      puVar13 = (undefined *)0x3;
      goto LAB_106c2d7f4;
    }
    if (param_3 == (undefined *)0x7) goto LAB_106c2d7f0;
    if (param_3 != (undefined *)0x8) goto LAB_106c2d7f4;
    puVar13 = (undefined *)0x5;
LAB_106c2d8a0:
    uVar7 = 0;
    FUN_106c2cfc8(param_3,0,0,param_4);
    _objc_retain(param_4);
LAB_106c2d8c8:
    _objc_release(param_4);
    if ((undefined *)0x3 < param_3 + -7) {
      _objc_retain(param_2);
      puVar13 = param_2;
      goto LAB_106c2dbf0;
    }
  }
  param_1 = 0.0;
  _objc_retain(param_2);
  puVar3 = param_2;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (puVar3 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    puVar4 = puVar6;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(param_2);
      }
      iVar12 = (int)*(undefined8 *)((long)puVar11 * 8);
      func_0x00010c072a60();
      puVar6 = puVar4;
      if (iVar12 != 0) {
        puVar6 = param_2;
        func_0x00010c14cca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        puVar4 = puVar6;
        func_0x00010bf529e0();
        if (puVar13 <= puVar4) {
          puVar13 = puVar6;
          func_0x00010bf51e00();
          _objc_release(param_2);
          goto LAB_106c2dbf0;
        }
      }
      puVar11 = puVar11 + 1;
      puVar4 = puVar6;
    } while (puVar3 != puVar11);
    puVar3 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  param_1 = 0.0;
  _objc_retain(param_2);
  puVar3 = param_2;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (puVar3 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    puVar4 = puVar6;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(param_2);
      }
      puVar6 = param_2;
      func_0x00010c14cca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = puVar6;
      func_0x00010bf529e0();
      if ((puVar13 <= puVar4) && (puVar4 = puVar6, func_0x00010bf529e0(), puVar4 <= puStack_268)) {
        puVar13 = puVar6;
        func_0x00010bf51e00();
        puVar3 = param_2;
        goto LAB_106c2dbd8;
      }
      puVar11 = puVar11 + 1;
      puVar4 = puVar6;
    } while (puVar3 != puVar11);
    puVar3 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  puVar13 = puVar6;
  func_0x00010bf529e0();
  if (puStack_268 < puVar13) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar13 = puVar6;
    func_0x00010bf529e0();
    puVar11 = puVar6;
    func_0x00010bf529e0();
    if (puVar11 != (undefined *)0x0) {
      lVar9 = 0;
      puVar11 = (undefined *)0x0;
      uVar2 = 0;
      if (puStack_268 != (undefined *)0x0) {
        uVar2 = (ulong)puVar13 / (ulong)puStack_268;
      }
      do {
        if (lVar9 == 0) {
          puVar13 = puVar6;
          func_0x00010c0dfd40(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          _objc_release(puVar13);
        }
        lVar1 = 0;
        if (lVar9 + 1U != uVar2) {
          lVar1 = lVar9 + 1;
        }
        puVar11 = puVar11 + 1;
        puVar13 = puVar6;
        func_0x00010bf529e0();
        lVar9 = lVar1;
      } while (puVar11 < puVar13);
    }
    puVar13 = puVar3;
    func_0x00010bf51e00();
LAB_106c2dbd8:
    _objc_release(puVar3);
  }
  else {
    _objc_retain(puVar6);
    puVar13 = puVar6;
  }
LAB_106c2dbf0:
  _objc_release(puVar6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return puVar13;
  }
  ___stack_chk_fail();
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(uVar7);
  func_0x00010bf5a700(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  uVar5 = uVar7;
  dVar14 = param_1;
  func_0x00010bf5a700(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  func_0x00010c26f320(uVar5);
  _objc_release(uVar5);
  _objc_release(uVar10);
  if (0.0 <= param_1 - dVar14) {
    puVar6 = (undefined *)(ulong)(param_1 - dVar14 <= *(double *)(param_2 + 0x28));
  }
  else {
    puVar6 = (undefined *)0x0;
  }
  return puVar6;
}



/* Entry: 106c2dc4c; end: 106c2dda3;  */

bool FUN_106c2dc4c(double param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_3);
  func_0x00010bf5a700(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  uVar2 = param_3;
  dVar4 = param_1;
  func_0x00010bf5a700(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c26f320(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar3);
  if (0.0 <= param_1 - dVar4) {
    bVar1 = param_1 - dVar4 <= *(double *)(param_2 + 0x28);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 106c2dda4; end: 106c2e26b;  */

void FUN_106c2dda4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined **ppuVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined *puVar26;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar17 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  ppuVar8 = &PTR__OBJC_CLASS___NSConstantArray_111181070;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  if (ppuVar8 != (undefined **)0x0) {
    do {
      ppuVar22 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_111181070);
        }
        puVar9 = PTR_PTR_1126af4c0;
        func_0x00010c067fc0(*(undefined8 *)((long)ppuVar22 * 8));
        func_0x00010bfa6f20();
        _objc_retainAutoreleasedReturnValue();
        puVar26 = puVar9;
        func_0x00010bf529e0();
        if (puVar26 != (undefined *)0x0) {
          func_0x00010befa160(puVar5);
        }
        _objc_release(puVar9);
        ppuVar22 = (undefined **)((long)ppuVar22 + 1);
      } while (ppuVar8 != ppuVar22);
      ppuVar8 = &PTR__OBJC_CLASS___NSConstantArray_111181070;
      func_0x00010bf52a60();
    } while (ppuVar8 != (undefined **)0x0);
  }
  _objc_retain(puVar5);
  puVar9 = puVar5;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  do {
    if (puVar9 == (undefined *)0x0) {
      _objc_release(puVar5);
      puVar26 = puVar6;
      func_0x00010bf529e0();
      puVar9 = PTR_PTR_1126ae6b8;
      if (puVar26 == (undefined *)0x0) {
        func_0x00010c0860a0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(param_1);
        _objc_retain(puVar7);
        _objc_retain(puVar6);
        _objc_retain(param_3);
        _objc_retain(param_5);
        _objc_retain(param_4);
        func_0x00010bf54280();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_4);
        _objc_release(param_5);
        _objc_release(param_3);
        _objc_release(puVar6);
        _objc_release(puVar7);
        _objc_release(param_1);
      }
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_release(param_2);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
        ___stack_chk_fail();
        _objc_retain(uVar17);
        uVar1 = *(undefined8 *)(param_1 + 0x20);
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain(uVar2);
        uVar21 = *(undefined8 *)(param_1 + 0x30);
        _objc_retain(uVar21);
        uVar16 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010c11de00(uVar16);
        _objc_retainAutoreleasedReturnValue();
        uVar23 = *(undefined8 *)(param_1 + 0x30);
        _objc_retain(uVar23);
        uVar24 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain(uVar24);
        uVar25 = *(undefined8 *)(param_1 + 0x40);
        _objc_retain(uVar25);
        uVar20 = *(undefined8 *)(param_1 + 0x48);
        _objc_retain(uVar20);
        _objc_retain(uVar17);
        func_0x00010c0f8520(uVar1);
        _objc_release(uVar16);
        puVar9 = PTR_PTR_1126b0418;
        func_0x00010bf54280(PTR_PTR_1126b0418);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar17);
        _objc_release(uVar20);
        _objc_release(uVar25);
        _objc_release(uVar24);
        _objc_release(uVar23);
        _objc_release(uVar21);
        _objc_release(uVar2);
        _objc_release(uVar17);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
      return;
    }
    puVar26 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar5);
      }
      puVar10 = PTR_PTR_1126af4d0;
      func_0x00010bfa7380();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      puVar11 = puVar10;
      func_0x00010bf52a60();
      lVar4 = lRam0000000000000000;
      while (puVar11 != (undefined *)0x0) {
        puVar19 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar4) {
            _objc_enumerationMutation(puVar10);
          }
          puVar12 = *(undefined **)((long)puVar19 * 8);
          func_0x00010bf5a580();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = PTR__OBJC_CLASS___PHAsset_1126bd898;
          func_0x00010bfa50e0();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar13;
          func_0x00010bf529e0();
          puVar15 = puVar12;
          func_0x00010bf529e0();
          _objc_release(puVar13);
          _objc_release(puVar12);
          if (puVar14 != puVar15) {
            _objc_release(puVar10);
            func_0x00010befa120(puVar6);
            func_0x00010befa160(puVar7);
            goto LAB_106c2e0a8;
          }
          puVar19 = puVar19 + 1;
        } while (puVar11 != puVar19);
        puVar11 = puVar10;
        func_0x00010bf52a60();
      }
      _objc_release(puVar10);
LAB_106c2e0a8:
      _objc_release(puVar10);
      puVar26 = puVar26 + 1;
    } while (puVar26 != puVar9);
    puVar9 = puVar5;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106c2e26c; end: 106c2e3f3;  */

void FUN_106c2e26c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar6);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar9);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar5);
  _objc_retain(param_2);
  func_0x00010c0f8520(uVar1);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar5);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106c2e3f4; end: 106c2e42b;  */

void FUN_106c2e3f4(long param_1,undefined8 param_2)

{
  func_0x00010bf6bf20(PTR_PTR_1126bc7f8,param_2,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bf6be90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126bc830,PTR_s_deleteGalleryEntries__1125b8948,*(undefined8 *)(param_1 + 0x28)
            );
  return;
}



/* Entry: 106c2e42c; end: 106c2e56f;  */

void FUN_106c2e42c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((int)param_2 != 0) {
    lVar10 = *(long *)(param_1 + 0x28);
    _objc_retain(lVar10);
    lVar2 = lVar10;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar10);
        }
        param_2 = *(undefined8 *)(param_1 + 0x30);
        func_0x0001080194b4(*(undefined8 *)(lVar11 * 8),param_2);
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = lVar10;
      func_0x00010bf52a60();
    }
    _objc_release(lVar10);
    func_0x00010c128b80(*(undefined8 *)(param_1 + 0x38));
  }
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010c09da80(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c072a60(puVar3);
  func_0x00010c0c6ac0(puVar3);
  func_0x00010c0c6c20();
  func_0x00010c0c6ac0(puVar3);
  func_0x00010bf4b900(param_2);
  _objc_release(param_2);
  puVar5 = puVar3;
  func_0x000107fe9c90();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x000107fe9d68();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010bf5a700(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010c26f320(puVar7);
  _objc_release(puVar7);
  puVar3 = PTR_PTR_1126d1760;
  _objc_alloc(PTR_PTR_1126d1760);
  func_0x00010c01b700();
  puVar7 = PTR_PTR_1126d1730;
  func_0x00010c0cc880(PTR_PTR_1126d1730);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106c2e570; end: 106c2f183;  */

void FUN_106c2e570(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_1;
  func_0x00010c09da80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c072a60(param_1);
  func_0x00010c0c6ac0(param_1);
  func_0x00010c0c6c20();
  func_0x00010c0c6ac0(param_1);
  func_0x00010bf4b900(param_2);
  _objc_release(param_2);
  uVar2 = param_1;
  func_0x000107fe9c90();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x000107fe9d68();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf5a700(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c26f320(uVar4);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126d1760;
  _objc_alloc(PTR_PTR_1126d1760);
  func_0x00010c01b700();
  puVar6 = PTR_PTR_1126d1730;
  func_0x00010c0cc880(PTR_PTR_1126d1730);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106c2f184; end: 106c2f18b;  */

void FUN_106c2f184(void)

{
  return;
}



/* Entry: 106c2f18c; end: 106c2f30f;  */

undefined * FUN_106c2f18c(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5a700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  puVar6 = (undefined *)(long)(param_1 * 1000.0);
  _objc_release(lVar2);
  _objc_release(lVar1);
  dVar8 = 0.0;
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_2);
      }
      uVar3 = *(undefined8 *)(lVar7 * 8);
      func_0x00010bf5a700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      dVar9 = dVar8 * 1000.0;
      _objc_release(uVar3);
      dVar8 = (double)(long)puVar6;
      if (dVar9 <= (double)(long)puVar6) {
        dVar8 = dVar9;
      }
      puVar6 = (undefined *)(long)dVar8;
      lVar7 = lVar7 + 1;
    } while (lVar1 != lVar7);
    lVar1 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return puVar6;
  }
  ___stack_chk_fail();
  puVar6 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  _objc_retain(param_3);
  func_0x00010bf09780(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d1770;
  _objc_alloc(PTR_PTR_1126d1770);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c09da80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffbaa0(puVar4);
  _objc_release(uVar3);
  func_0x000107fe4980(param_3,puVar4);
  _objc_release(param_3);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return puVar6;
}



/* Entry: 106c2f310; end: 106c2f3cb;  */

void FUN_106c2f310(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  _objc_retain(param_2);
  func_0x00010bf09780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d1770;
  _objc_alloc(PTR_PTR_1126d1770);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c09da80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffbaa0(puVar2);
  _objc_release(uVar3);
  func_0x000107fe4980(param_2,puVar2);
  _objc_release(param_2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c2f3cc; end: 106c2f3cf;  */

void FUN_106c2f3cc(void)

{
  return;
}



/* Entry: 106c2f3d0; end: 106c2f50f;  */

void FUN_106c2f3d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000108ebec30();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf44640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c0d0e40();
  _arc4random_uniform();
  puVar1 = PTR__OBJC_CLASS___NSDateComponents_1126aef68;
  _objc_opt_new(PTR__OBJC_CLASS___NSDateComponents_1126aef68);
  func_0x00010c2bedc0(uVar2);
  func_0x00010c2278a0(puVar1);
  func_0x00010c1c8fc0(puVar1);
  uVar3 = param_1;
  func_0x00010bf650e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11f480(param_1);
  _arc4random_uniform(param_2);
  func_0x00010c189d40(puVar1);
  uVar4 = param_1;
  func_0x00010bf650e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106c2f510; end: 106c2f62f;  */

void FUN_106c2f510(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2cb58;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e2cb58,
                      &PTR____CFConstantStringClassReference_110e79ef8,0);
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



/* Entry: 106c2f630; end: 106c2f6e3; -[SCMemoriesCRFeaturedStoryActivationDate initWithMemoriesCRFeaturedStoryType:activationDate:referenceDate:] */

undefined1 *
FUN_106c2f630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f5d28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106c2f6e4; end: 106c2f707; -[SCMemoriesCRFeaturedStoryActivationDate copyWithZone:] */

undefined8 FUN_106c2f6e4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106c2f708; end: 106c2f77f; -[SCMemoriesCRFeaturedStoryActivationDate hash] */

undefined8 * FUN_106c2f708(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106c2f810:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106c2f81c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 8) == *(long *)(param_3 + 8))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_106c2f81c;
        }
        goto LAB_106c2f810;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106c2f81c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106c2f780; end: 106c2f837; -[SCMemoriesCRFeaturedStoryActivationDate isEqual:] */

long FUN_106c2f780(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106c2f810:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106c2f81c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_106c2f81c;
        }
        goto LAB_106c2f810;
      }
    }
    lVar3 = 0;
  }
LAB_106c2f81c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106c2f838; end: 106c2f83f; -[SCMemoriesCRFeaturedStoryActivationDate memoriesCRFeaturedStoryType] */

undefined8 FUN_106c2f838(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106c2f840; end: 106c2f847; -[SCMemoriesCRFeaturedStoryActivationDate activationDate] */

undefined8 FUN_106c2f840(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106c2f848; end: 106c2f84f; -[SCMemoriesCRFeaturedStoryActivationDate referenceDate] */

undefined8 FUN_106c2f848(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106c2f850; end: 106c2f87f; -[SCMemoriesCRFeaturedStoryActivationDate .cxx_destruct] */

void FUN_106c2f850(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106c2f880; end: 106c2fa77; +[SCCMemoriesCameraRollDbDb schema] */

void FUN_106c2f880(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = PTR_PTR_1126b84f8;
  _objc_alloc(PTR_PTR_1126b84f8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f3c1c12);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8500;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&DAT_10f68f57e);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016840(puVar2,param_2,8,9,puVar3);
  puVar4 = PTR_PTR_1126b8500;
  puStack_68 = puVar2;
  _objc_alloc();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f3c276d);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016840(puVar4,param_2,9,10,puVar5);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060a40(puVar8,param_2,10,puVar1,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar3);
  puVar7 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar1);
    __Unwind_Resume();
    puVar8 = *(undefined **)(puVar7 + 8);
    _objc_retain(puVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106c2fa78; end: 106c2fa9f; -[SCCMemoriesCameraRollDbDb getConn] */

void FUN_106c2fa78(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c2faa0; end: 106c2fb27; -[SCCMemoriesCameraRollDbDb initWithSqliteConnection:] */

undefined1 * FUN_106c2faa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5d30;
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



/* Entry: 106c2fb28; end: 106c2fd73; -[SCCMemoriesCameraRollDbDb .cxx_destruct] */

void FUN_106c2fb28(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c2fd74; end: 106c2fd97; -[SCCMemoriesCameraRollDbDb .cxx_construct] */

void FUN_106c2fd74(long param_1)

{
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 106c2fd98; end: 106c2fea3;  */

void FUN_106c2fd98(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      func_0x0001005fc990(param_1 + 0x10,*(undefined8 *)(param_1 + 8),&UNK_10dde8610,0x66);
      func_0x0001005fcb64();
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c2fea4; end: 106c2ff97;  */

void FUN_106c2fea4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126d1778;
  _objc_alloc(PTR_PTR_1126d1778);
  lVar2 = param_1;
  func_0x00010b5ef268(param_1,0);
  lVar3 = param_1;
  func_0x00010b5ef268(param_1,1);
  lVar4 = param_1;
  func_0x00010b5ef268(param_1,2);
  lVar5 = param_1;
  func_0x0001005ff748(param_1,3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010b5ef268(param_1,4);
  func_0x00010b5ef268(param_1,5);
  FUN_106c32240(puVar1,lVar2,lVar3 != 0,lVar4 != 0,lVar5,lVar6,param_1);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c2ff98; end: 106c300a3;  */

void FUN_106c2ff98(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      func_0x0001005fc990(param_1 + 0x18,*(undefined8 *)(param_1 + 8),&UNK_10dde8677,0x66);
      func_0x0001005fcb64();
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c300a4; end: 106c301af;  */

void FUN_106c300a4(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      func_0x0001005fc990(param_1 + 0x20,*(undefined8 *)(param_1 + 8),&UNK_10dde86de,0x46);
      func_0x0001005fcb64();
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c301b0; end: 106c302bb;  */

void FUN_106c301b0(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      func_0x0001005fc990(param_1 + 0x28,*(undefined8 *)(param_1 + 8),&UNK_10dde8725,0x27);
      func_0x0001005fcb64();
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c302bc; end: 106c303e3;  */

void FUN_106c302bc(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x30;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10dde874d,0x3c);
      func_0x0001005edcd4();
      func_0x0001005fcb64(lVar1,FUN_106c2fea4);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c303e4; end: 106c304ef;  */

void FUN_106c303e4(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      func_0x0001005fc990(param_1 + 0x38,*(undefined8 *)(param_1 + 8),&UNK_10dde878a,0x48);
      func_0x0001005fcb64();
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c304f0; end: 106c30617;  */

void FUN_106c304f0(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x40;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10dde87d3,0x47);
      func_0x0001005edcd4();
      func_0x0001005fcb64(lVar1,FUN_106c30618);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c30618; end: 106c3065b;  */

void FUN_106c30618(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d1780;
  _objc_alloc(PTR_PTR_1126d1780);
  func_0x00010b5ef268(param_1,0);
  func_0x000106c32138(puVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c3065c; end: 106c30893;  */

void FUN_106c3065c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar1 = PTR_PTR_1126d1788;
  _objc_alloc();
  lVar2 = param_1;
  func_0x0001005fdab8(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010b5ef268(param_1,1);
  lVar4 = param_1;
  func_0x00010b5ef268(param_1,2);
  lVar5 = param_1;
  func_0x00010b5ef268(param_1,3);
  lVar6 = param_1;
  func_0x00010b5ef268(param_1,4);
  lVar7 = param_1;
  func_0x0001005ff748(param_1,5);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x0001005ff748(param_1,6);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x0001005ff748(param_1,7);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x0001005ff748(param_1,8);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010b5ef268(param_1,9);
  lVar12 = param_1;
  func_0x0001005fdb34(param_1,10);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001005fdb34(param_1,0xb);
  _objc_retainAutoreleasedReturnValue();
  FUN_106c31c88(puVar1,lVar2,lVar3,lVar4 != 0,lVar5 != 0,lVar6,lVar7,lVar8,lVar9,lVar10,lVar11,
                lVar12,param_1);
  _objc_release(param_1);
  _objc_release(lVar12);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c30894; end: 106c309bb;  */

void FUN_106c30894(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x50;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10dde881b,0x40);
      func_0x0001005edcd4();
      func_0x0001005fcb64(lVar1,FUN_106c3065c);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c309bc; end: 106c30af7;  */

void FUN_106c309bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x58;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10dde885c,0x3ac);
      func_0x0001005edcd4();
      func_0x0001005edcd4(lVar1,2,param_3);
      func_0x0001005fcb64(lVar1,FUN_106c3065c);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c30af8; end: 106c30c33;  */

void FUN_106c30af8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x60;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10dde8c09,0x11c);
      func_0x0001005edcd4();
      func_0x0001005edcd4(lVar1,2,param_3);
      func_0x0001005fcb64(lVar1,FUN_106c30c34);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c30c34; end: 106c30ca7;  */

void FUN_106c30c34(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d1790;
  _objc_alloc(PTR_PTR_1126d1790);
  func_0x0001005fdab8(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  FUN_106c31b44(puVar1,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c30ca8; end: 106c30e6b;  */

void FUN_106c30ca8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uStack_3c;
  long *plStack_38;
  
  _objc_retain(param_3);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar3 = param_3;
      func_0x00010bf529e0(param_3);
      func_0x000105440200(&plStack_38,uVar5,&UNK_10dde8d26,0x7a,uVar3);
      uStack_3c = 2;
      func_0x0001005edcd4(plStack_38,1,param_2);
      func_0x00010544033c(plStack_38,&uStack_3c,param_3);
      plVar4 = plStack_38;
      func_0x0001005fcb64(plStack_38,FUN_106c30e6c);
      _objc_retainAutoreleasedReturnValue();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_106c30d8c;
    }
  }
  plVar4 = (long *)0x0;
LAB_106c30d8c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 106c30e6c; end: 106c30edf;  */

void FUN_106c30e6c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d1798;
  _objc_alloc(PTR_PTR_1126d1798);
  func_0x0001005fdab8(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  FUN_106c32494(puVar1,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c30ee0; end: 106c310a3;  */

void FUN_106c30ee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uStack_3c;
  long *plStack_38;
  
  _objc_retain(param_3);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar3 = param_3;
      func_0x00010bf529e0(param_3);
      func_0x000105440200(&plStack_38,uVar5,&UNK_10dde8da1,0x66,uVar3);
      uStack_3c = 2;
      func_0x0001005edcd4(plStack_38,1,param_2);
      func_0x00010544033c(plStack_38,&uStack_3c,param_3);
      plVar4 = plStack_38;
      func_0x0001005fcb64(plStack_38,FUN_106c3065c);
      _objc_retainAutoreleasedReturnValue();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_106c30fc4;
    }
  }
  plVar4 = (long *)0x0;
LAB_106c30fc4:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 106c310a4; end: 106c311ab;  */

void FUN_106c310a4(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x70;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10dde8e08,0x56);
      func_0x0001005edcd4();
      func_0x00010b5ef0d0(lVar1);
    }
  }
  return;
}



/* Entry: 106c311ac; end: 106c312b3;  */

void FUN_106c311ac(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x78;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10dde8e5f,0x53);
      func_0x0001005edcd4();
      func_0x00010b5ef0d0(lVar1);
    }
  }
  return;
}



/* Entry: 106c312b4; end: 106c313f7;  */

void FUN_106c312b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x88;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10dde8eb3,0xa8);
      func_0x00010b5eeb94();
      func_0x0001005edcd4(lVar1,1,param_3);
      func_0x00010b5ef0d0(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c313f8; end: 106c314ff;  */

void FUN_106c313f8(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x90;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10dde8f5c,0x3a);
      func_0x0001005edcd4();
      func_0x00010b5ef0d0(lVar1);
    }
  }
  return;
}



/* Entry: 106c31500; end: 106c315eb;  */

void FUN_106c31500(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x0001005fc990(param_1 + 0x98,*(undefined8 *)(param_1 + 8),&UNK_10dde8f97,0x25);
      func_0x00010b5ef0d0();
    }
  }
  return;
}



/* Entry: 106c315ec; end: 106c31707;  */

void FUN_106c315ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0xa0;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10dde8fbd,0x9c);
      func_0x0001005edcd4();
      func_0x0001005edcd4(lVar1,2,param_3);
      func_0x00010b5ef0d0(lVar1);
    }
  }
  return;
}



/* Entry: 106c31708; end: 106c31a03;  */

void FUN_106c31708(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  int iVar1;
  long lVar2;
  int iStack_64;
  
  _objc_retain(param_2);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_12);
  _objc_retain(param_13);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_1 + 0xa8;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_1 + 8),&UNK_10dde905a,0x110);
      iStack_64 = 1;
      func_0x0001005fcac0();
      iVar1 = iStack_64;
      func_0x0001005edcd4(lVar2,iStack_64,param_3);
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_4);
      func_0x0001005edcd4(lVar2,iVar1 + 2,param_5);
      iStack_64 = iVar1 + 4;
      func_0x0001005edcd4(lVar2,iVar1 + 3,param_6);
      func_0x00010b5eeb94(lVar2,&iStack_64,param_7);
      func_0x00010b5eeb94(lVar2,&iStack_64,param_8);
      func_0x00010b5eeb94(lVar2,&iStack_64,param_9);
      func_0x00010b5eeb94(lVar2,&iStack_64,param_10);
      iVar1 = iStack_64;
      iStack_64 = iStack_64 + 1;
      func_0x0001005edcd4(lVar2,iVar1,param_11);
      func_0x00010b5eec6c(lVar2,&iStack_64,param_12);
      func_0x00010b5eec6c(lVar2,&iStack_64,param_13);
      func_0x00010b5ef0d0(lVar2);
    }
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c31a04; end: 106c31a27; -[CameraRollCreationDateForFlashback copyWithZone:] */

undefined8 FUN_106c31a04(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106c31a28; end: 106c31a8b; -[CameraRollCreationDateForFlashback hash] */

undefined8 * FUN_106c31a28(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  puVar1 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 8));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_28 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  func_0x000100505190(&uStack_40,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) ||
         (((*(long *)((long)puVar1 + 8) != *(long *)(param_3 + 8) ||
           (*(long *)((long)puVar1 + 0x10) != *(long *)(param_3 + 0x10))) ||
          (*(long *)((long)puVar1 + 0x18) != *(long *)(param_3 + 0x18))))) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(long *)((long)puVar1 + 0x20) == *(long *)(param_3 + 0x20));
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar3;
}



/* Entry: 106c31a8c; end: 106c31b43; -[CameraRollCreationDateForFlashback isEqual:] */

bool FUN_106c31a8c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) ||
         (((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
           (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
          (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106c31b44; end: 106c31bbf;  */

undefined1 * FUN_106c31b44(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_30;
  undefined *puStack_28;
  
  plVar1 = &lStack_30;
  _objc_retain(param_2);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_28 = PTR_PTR_1126f5d40;
    lStack_30 = param_1;
    _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 106c31bc0; end: 106c31be3; -[GetCameraRollMetadataDeletionDelta copyWithZone:] */

undefined8 FUN_106c31bc0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106c31be4; end: 106c31beb; -[GetCameraRollMetadataDeletionDelta hash] */

void FUN_106c31be4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 106c31bec; end: 106c31c7b; -[GetCameraRollMetadataDeletionDelta isEqual:] */

long FUN_106c31bec(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106c31c60;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_106c31c60;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_106c31c60;
    }
  }
  lVar3 = 1;
LAB_106c31c60:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106c31c7c; end: 106c31c87; -[GetCameraRollMetadataDeletionDelta .cxx_destruct] */

void FUN_106c31c7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c31c88; end: 106c31e57;  */

long * FUN_106c31c88(long param_1,long param_2,long param_3,undefined1 param_4,undefined1 param_5,
                    long param_6,long param_7,long param_8,long param_9,long param_10,long param_11,
                    long param_12,long param_13)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_12);
  _objc_retain(param_13);
  plVar1 = (long *)0x0;
  if (param_1 != 0) {
    puStack_68 = PTR_PTR_1126f5d48;
    plVar1 = &lStack_70;
    lStack_70 = param_1;
    _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      lVar2 = param_2;
      func_0x00010bf51e00();
      lVar3 = plVar1[2];
      plVar1[2] = lVar2;
      _objc_release(lVar3);
      *(undefined1 *)(plVar1 + 1) = param_4;
      *(undefined1 *)((long)plVar1 + 9) = param_5;
      plVar1[3] = param_3;
      plVar1[4] = param_6;
      lVar2 = param_7;
      func_0x00010bf51e00();
      lVar3 = plVar1[5];
      plVar1[5] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_8;
      func_0x00010bf51e00();
      lVar3 = plVar1[6];
      plVar1[6] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_9;
      func_0x00010bf51e00();
      lVar3 = plVar1[7];
      plVar1[7] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_10;
      func_0x00010bf51e00();
      lVar3 = plVar1[8];
      plVar1[8] = lVar2;
      _objc_release(lVar3);
      plVar1[9] = param_11;
      lVar2 = param_12;
      func_0x00010bf51e00();
      lVar3 = plVar1[10];
      plVar1[10] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_13;
      func_0x00010bf51e00();
      lVar3 = plVar1[0xb];
      plVar1[0xb] = lVar2;
      _objc_release(lVar3);
    }
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_2);
  return plVar1;
}



/* Entry: 106c31e58; end: 106c31e7b; -[CameraRollMetadataIndex copyWithZone:] */

undefined8 FUN_106c31e58(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106c31e7c; end: 106c31f5b; -[CameraRollMetadataIndex hash] */

undefined8 * FUN_106c31e7c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uStack_88;
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x20);
  lStack_80 = -lVar6;
  if (-1 < lVar6) {
    lStack_80 = lVar6;
  }
  uStack_78 = (ulong)*(byte *)(param_1 + 8);
  uStack_70 = (ulong)*(byte *)(param_1 + 9);
  lStack_68 = -lVar1;
  if (-1 < lVar1) {
    lStack_68 = lVar1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = uVar3;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x48);
  uStack_38 = *(undefined8 *)(param_1 + 0x50);
  lStack_40 = -lVar6;
  if (-1 < lVar6) {
    lStack_40 = lVar6;
  }
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bfde980();
  puVar4 = &uStack_88;
  uStack_30 = uVar2;
  func_0x000100505190(puVar4,0xc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_106c320a4:
    puVar7 = (undefined8 *)0x1;
  }
  else {
    puVar7 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106c320b0;
    puVar7 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((((puVar4[3] == param_3[3] && (*(char *)(puVar4 + 1) == *(char *)(param_3 + 1))) &&
         (*(char *)((long)puVar4 + 9) == *(char *)((long)param_3 + 9))) &&
        ((puVar4[4] == param_3[4] && (puVar4[9] == param_3[9])))))) {
      lVar6 = puVar4[2];
      if ((lVar6 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        lVar6 = puVar4[5];
        if ((lVar6 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = puVar4[6];
          if ((lVar6 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            lVar6 = puVar4[7];
            if ((lVar6 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
              lVar6 = puVar4[8];
              if ((lVar6 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                lVar6 = puVar4[10];
                if ((lVar6 == param_3[10]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                  puVar7 = (undefined8 *)puVar4[0xb];
                  if (puVar7 != (undefined8 *)param_3[0xb]) {
                    func_0x00010c071ae0();
                    goto LAB_106c320b0;
                  }
                  goto LAB_106c320a4;
                }
              }
            }
          }
        }
      }
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_106c320b0:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 106c31f5c; end: 106c320cb; -[CameraRollMetadataIndex isEqual:] */

long FUN_106c31f5c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106c320a4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106c320b0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
          (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        ((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
         (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x28);
        if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x30);
          if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x38);
            if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x40);
              if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x50);
                if ((lVar3 == *(long *)(param_3 + 0x50)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x58);
                  if (lVar3 != *(long *)(param_3 + 0x58)) {
                    func_0x00010c071ae0();
                    goto LAB_106c320b0;
                  }
                  goto LAB_106c320a4;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106c320b0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106c320cc; end: 106c32183; -[CameraRollMetadataIndex .cxx_destruct] */

void FUN_106c320cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106c32184; end: 106c321a7; -[GetNumberOfCameraRollMetadata copyWithZone:] */

undefined8 FUN_106c32184(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106c321a8; end: 106c321b7; -[GetNumberOfCameraRollMetadata hash] */

long FUN_106c321a8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = -lVar2;
  if (-1 < lVar2) {
    lVar1 = lVar2;
  }
  return lVar1;
}



/* Entry: 106c321b8; end: 106c3223f; -[GetNumberOfCameraRollMetadata isEqual:] */

bool FUN_106c321b8(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106c32240; end: 106c322f7;  */

undefined1 *
FUN_106c32240(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_60;
  undefined *puStack_58;
  
  plVar1 = &lStack_60;
  _objc_retain(param_5);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_58 = PTR_PTR_1126f5d58;
    lStack_60 = param_1;
    _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 0x10) = param_2;
      *(undefined1 *)((long)plVar1 + 8) = param_3;
      *(undefined1 *)((long)plVar1 + 9) = param_4;
      uVar2 = param_5;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x20) = param_6;
      *(undefined8 *)((long)plVar1 + 0x28) = param_7;
    }
  }
  _objc_release(param_5);
  return puVar4;
}



/* Entry: 106c322f8; end: 106c3231b; -[CameraRollIndexBatchState copyWithZone:] */

undefined8 FUN_106c322f8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106c3231c; end: 106c323a7; -[CameraRollIndexBatchState hash] */

long * FUN_106c3231c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  lStack_58 = -lVar1;
  if (-1 < lVar1) {
    lStack_58 = lVar1;
  }
  uStack_50 = (ulong)*(byte *)(param_1 + 8);
  uStack_48 = (ulong)*(byte *)(param_1 + 9);
  func_0x00010bfde980();
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  plVar3 = &lStack_58;
  uStack_40 = uVar2;
  func_0x000100505190(plVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 != param_3) {
    plVar5 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_106c3246c;
    plVar5 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar5);
    if (((((ulong)plVar4 & 1) == 0) ||
        (((plVar3[2] != param_3[2] || ((char)plVar3[1] != (char)param_3[1])) ||
         (*(char *)((long)plVar3 + 9) != *(char *)((long)param_3 + 9))))) ||
       ((plVar3[4] != param_3[4] || (plVar3[5] != param_3[5])))) {
      plVar5 = (long *)0x0;
      goto LAB_106c3246c;
    }
    plVar5 = (long *)plVar3[3];
    if (plVar5 != (long *)param_3[3]) {
      func_0x00010c071ae0();
      goto LAB_106c3246c;
    }
  }
  plVar5 = (long *)0x1;
LAB_106c3246c:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 106c323a8; end: 106c32487; -[CameraRollIndexBatchState isEqual:] */

long FUN_106c323a8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106c3246c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) == 0) ||
        (((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
          (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) ||
         (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) ||
       ((*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20) ||
        (*(long *)(param_1 + 0x28) != *(long *)(param_3 + 0x28))))) {
      lVar3 = 0;
      goto LAB_106c3246c;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_106c3246c;
    }
  }
  lVar3 = 1;
LAB_106c3246c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106c32488; end: 106c32493; -[CameraRollIndexBatchState .cxx_destruct] */

void FUN_106c32488(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106c32494; end: 106c3250f;  */

undefined1 * FUN_106c32494(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_30;
  undefined *puStack_28;
  
  plVar1 = &lStack_30;
  _objc_retain(param_2);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_28 = PTR_PTR_1126f5d60;
    lStack_30 = param_1;
    _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 106c32510; end: 106c32533; -[GetExistingCameraRollIdentifiers copyWithZone:] */

undefined8 FUN_106c32510(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106c32534; end: 106c3253b; -[GetExistingCameraRollIdentifiers hash] */

void FUN_106c32534(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 106c3253c; end: 106c325cb; -[GetExistingCameraRollIdentifiers isEqual:] */

long FUN_106c3253c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106c325b0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_106c325b0;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_106c325b0;
    }
  }
  lVar3 = 1;
LAB_106c325b0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106c325cc; end: 106c325d7; -[GetExistingCameraRollIdentifiers .cxx_destruct] */

void FUN_106c325cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c325d8; end: 106c3264b; -[UNISnapIndexClientService initWithUnifiedGrpcService:] */

undefined1 * FUN_106c325d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5d68;
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



/* Entry: 106c3264c; end: 106c3272f; -[UNISnapIndexClientService generateIndexWithRequest:callOptionsBuilder:handler:] */

void FUN_106c3264c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d17a0;
  _objc_opt_class(PTR_PTR_1126d17a0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e7a0b8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c32730; end: 106c3273b; -[UNISnapIndexClientService .cxx_destruct] */

void FUN_106c32730(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


