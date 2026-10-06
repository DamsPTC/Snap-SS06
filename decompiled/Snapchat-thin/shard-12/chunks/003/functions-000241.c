/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10901cf0c; end: 10901cf13;  */

void FUN_10901cf0c(void)

{
  return;
}



/* Entry: 10901cf14; end: 10901cfb3;  */

void FUN_10901cf14(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c261440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf0a8a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1a5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  FUN_10901cfb4();
  *(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (char)uVar5;
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10901cfb4; end: 10901d017;  */

undefined8 FUN_10901cfb4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  FUN_10901cc40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c071ae0(param_1);
  _objc_release(param_1);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 10901d018; end: 10901d29f;  */

long FUN_10901d018(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
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
  _objc_retain();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_1);
  lVar3 = param_1;
  func_0x00010bf52a60(param_1,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar3 != 0) {
    lVar4 = *plStack_110;
    do {
      lVar5 = 0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(param_1);
        }
        uVar1 = *(ulong *)(lStack_118 + lVar5 * 8);
        func_0x00010bf33560();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bfda7c0();
        _objc_release(uVar1);
        if ((uVar2 & 1) != 0) {
          lVar3 = 1;
          goto LAB_10901d110;
        }
        lVar5 = lVar5 + 1;
      } while (lVar3 != lVar5);
      lVar3 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar3 != 0);
  }
  lVar3 = 0;
LAB_10901d110:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar3;
  }
  ___stack_chk_fail();
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  _objc_retain(param_1);
  lVar3 = param_1;
  func_0x00010bf52a60(param_1,param_2,&uStack_240,auStack_1f8,0x10);
  if (lVar3 != 0) {
    lVar4 = *plStack_230;
    do {
      lVar5 = 0;
      do {
        if (*plStack_230 != lVar4) {
          _objc_enumerationMutation(param_1);
        }
        uVar1 = *(ulong *)(lStack_238 + lVar5 * 8);
        func_0x00010bf33560();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bfda7c0();
        _objc_release(uVar1);
        if ((uVar2 & 1) != 0) {
          lVar3 = 1;
          goto LAB_10901d254;
        }
        lVar5 = lVar5 + 1;
      } while (lVar3 != lVar5);
      lVar3 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_240,auStack_1f8,0x10);
    } while (lVar3 != 0);
  }
  lVar3 = 0;
LAB_10901d254:
  _objc_release(param_1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return lVar3;
  }
  ___stack_chk_fail();
  func_0x00010bfb9b40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  FUN_10901d018();
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 10901d2a0; end: 10901d317;  */

undefined8 FUN_10901d2a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfb9b40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_10901d018();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10901d318; end: 10901d42f;  */

ulong FUN_10901d318(ulong param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain();
  if ((param_3 < 0x32) && ((1L << (param_3 & 0x3f) & 0x3f804001e0000U) != 0)) {
    uVar1 = (ulong)(param_2 == 0x10ca441e);
  }
  else {
    uVar1 = param_1;
    func_0x00010901d398(param_1);
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10901d430; end: 10901d587;  */

void FUN_10901d430(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10901d588;
  uStack_40 = 0x10901d598;
  uStack_38 = 0;
  lVar1 = param_1;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bfb8280(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c261440();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_1);
    func_0x00010c0bdea0(lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  uVar3 = puStack_58[5];
  _objc_retain(uVar3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10901d588; end: 10901d5a7;  */

void FUN_10901d588(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10901d5a8; end: 10901d64f;  */

void FUN_10901d5a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c261440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf0a8a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1a5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf51e00();
  lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar6 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = uVar5;
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10901d650; end: 10901d777;  */

void FUN_10901d650(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c261440();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0a8a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1a5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  puVar4 = PTR_PTR_1126dcf38;
  _objc_alloc(PTR_PTR_1126dcf38);
  uVar1 = uVar3;
  func_0x00010c0d0e40(uVar3);
  uVar2 = uVar3;
  func_0x00010bf65700(uVar3);
  func_0x00010c02c8c0(puVar4,param_2,uVar1,uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10901d778; end: 10901d7c3;  */

uint FUN_10901d778(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar1,param_2,param_1);
  _objc_release(param_1);
  return (uint)puVar1 ^ 1;
}



/* Entry: 10901d7c4; end: 10901d853;  */

void FUN_10901d7c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf85d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar2,param_2,uVar1);
  uVar3 = param_1;
  if ((int)puVar2 == 0) {
    func_0x00010bf85d80(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c294420(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10901d854; end: 10901d923;  */

void FUN_10901d854(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c06d560();
  uVar2 = param_1;
  if ((uVar1 & 1) == 0) {
    FUN_10901d7c4(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c294420(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10901d924; end: 10901da5b;  */

undefined4 FUN_10901d924(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0xffffffff;
  lVar2 = param_1;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010bfb8280(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c261440();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_1);
    func_0x00010c0bdea0(lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  uVar1 = *(undefined4 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10901da5c; end: 10901da63;  */

void FUN_10901da5c(void)

{
  return;
}



/* Entry: 10901da64; end: 10901dadf;  */

void FUN_10901da64(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c261440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf0a8a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c243560();
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (int)uVar4;
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10901dae0; end: 10901db3f;  */

void FUN_10901dae0(double param_1,undefined8 param_2)

{
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0891c0();
  _objc_release(param_2);
  if (0.0 < param_1) {
    FUN_109021670(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10901db40; end: 10901dcb3;  */

void FUN_10901db40(long param_1)

{
  double dVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  func_0x00010bfb9b40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
      lVar7 = 0;
LAB_10901dc6c:
      _objc_release(param_1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
        ___stack_chk_fail();
        func_0x00010bfb9b40();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = param_1;
        func_0x000107c31910();
        _objc_release(param_1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
      return;
    }
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      lVar7 = *(long *)(lVar8 * 8);
      lVar4 = lVar7;
      func_0x00010bf33560();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0720c0();
      if ((int)lVar5 == 0) {
        _objc_release(lVar4);
      }
      else {
        func_0x00010bf9c880(lVar7);
        dVar1 = (double)CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(
                                                  uVar12,CONCAT12(uVar11,CONCAT11(uVar10,uVar9))))))
                                );
        _objc_release(lVar4);
        if (0.0 < dVar1) {
          func_0x00010bf9c880();
          FUN_109021670();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_10901dc6c;
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = param_1;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10901dcb4; end: 10901dd43;  */

void FUN_10901dcb4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfb9b40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000107c31910();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10901dd44; end: 10901de0b;  */

void FUN_10901dd44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain();
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126ba270;
  _objc_alloc(PTR_PTR_1126ba270);
  func_0x00010bffd140(param_1);
  func_0x00010befa120(puVar1,param_3,puVar2);
  uVar3 = param_2;
  FUN_10901dcb4(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010befa160(puVar1,param_3,uVar3);
  _objc_release(uVar3);
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10901de0c; end: 10901de3b;  */

void FUN_10901de0c(void)

{
  _objc_alloc(PTR_PTR_1126ba270);
  func_0x00010bffd140(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10901de3c; end: 10901dff7;  */

undefined * FUN_10901de3c(undefined *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  _objc_retain();
  puVar4 = param_1;
  if (param_2 != 0) {
    FUN_10901de0c();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(puVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain();
  puVar4 = puVar1;
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010c08fa60();
  _objc_release(puVar4);
  if (puVar2 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = puVar1;
    FUN_10901d2a0(puVar1);
  }
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 10901dff8; end: 10901e043;  */

ulong FUN_10901dff8(ulong param_1)

{
  ulong uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000107c2aaa4();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010901df08(param_1);
  }
  else {
    uVar1 = 0;
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10901e044; end: 10901e0a3;  */

void FUN_10901e044(double param_1,undefined8 param_2)

{
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef89e0();
  _objc_release(param_2);
  if (0.0 < param_1) {
    FUN_109021670(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10901e0a4; end: 10901e13b;  */

void FUN_10901e0a4(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c261440();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0a8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befcae0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  if (0.0 < param_1) {
    FUN_109021670(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10901e13c; end: 10901e19b;  */

void FUN_10901e13c(double param_1,undefined8 param_2)

{
  func_0x00010bfebe20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befcae0();
  _objc_release(param_2);
  if (0.0 < param_1) {
    FUN_109021670(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10901e19c; end: 10901e253;  */

void FUN_10901e19c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  lVar4 = param_1;
  func_0x000107c2aaa4();
  if ((int)lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar1 = param_1;
    FUN_10901e044();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    FUN_10901e0a4(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c08aee0(lVar1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    if (lVar3 != 0) {
      lVar4 = lVar1;
    }
    _objc_retain(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10901e254; end: 10901e307;  */

bool FUN_10901e254(double param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  bool bVar3;
  
  _objc_retain();
  lVar1 = param_2;
  func_0x000107c2aaa4();
  if ((int)lVar1 == 0) {
    bVar3 = false;
  }
  else {
    lVar1 = param_2;
    FUN_10901e19c();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      bVar3 = false;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380();
      bVar3 = param_1 <= (double)(ulong)(param_3 * 0x15180);
      _objc_release(puVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_2);
  return bVar3;
}



/* Entry: 10901e308; end: 10901e463;  */

bool FUN_10901e308(double param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  func_0x00010bf122e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0 || puVar2 == (undefined *)0x0) {
    bVar8 = false;
  }
  else {
    puVar3 = puVar1;
    func_0x00010bf44640(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
    func_0x00010bf5e300(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf650e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    lVar6 = param_2;
    FUN_10901d430();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    FUN_10901e464();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    if (lVar7 == 0) {
      bVar8 = false;
    }
    else {
      func_0x00010c26f380(lVar7);
      bVar8 = param_1 <= (double)(ulong)(param_3 * 0x15180);
    }
    _objc_release(lVar7);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
  return bVar8;
}



/* Entry: 10901e464; end: 10901e6c7;  */

void FUN_10901e464(double param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar7 = param_2;
    func_0x00010c0d0e40();
    if ((int)puVar7 == 0) {
      puVar8 = (undefined *)0x0;
      puVar7 = param_2;
    }
    else {
      puVar7 = param_2;
      func_0x00010bf65700();
      _objc_release(param_2);
      if ((int)puVar7 == 0) {
        puVar8 = (undefined *)0x0;
        goto LAB_10901e6a0;
      }
      puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
      func_0x00010bf122e0(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar8;
      func_0x00010bf44640();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      puVar8 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
      func_0x00010bf5e300(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar8;
      func_0x00010bf650e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      puVar8 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
      func_0x00010bf122e0(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar8;
      func_0x00010bf44640();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      puVar4 = PTR__OBJC_CLASS___NSDateComponents_1126aef68;
      _objc_alloc_init(PTR__OBJC_CLASS___NSDateComponents_1126aef68);
      puVar8 = param_2;
      func_0x00010c0d0e40(param_2);
      func_0x00010c1c8fc0(puVar4,param_3,(ulong)puVar8 & 0xffffffff);
      puVar8 = param_2;
      func_0x00010bf65700(param_2);
      func_0x00010c189d40(puVar4,param_3,(ulong)puVar8 & 0xffffffff);
      puVar8 = puVar3;
      func_0x00010c2bedc0(puVar3);
      func_0x00010c2278a0(puVar4,param_3,puVar8);
      puVar8 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
      func_0x00010bf5e300(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar8;
      func_0x00010bf650e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      func_0x00010c26f380(puVar5,param_3,puVar2);
      if (0.0 <= param_1) {
        _objc_retain(puVar5);
        puVar8 = puVar5;
      }
      else {
        puVar8 = puVar3;
        func_0x00010c2bedc0(puVar3);
        func_0x00010c2278a0(puVar4,param_3,puVar8 + 1);
        puVar6 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
        func_0x00010bf5e300(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar6;
        func_0x00010bf650e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
      }
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
  }
  _objc_release(puVar7);
LAB_10901e6a0:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10901e6c8; end: 10901e817;  */

void FUN_10901e6c8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar1 = param_1, func_0x00010c08fa60(), lVar1 == 0)) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010b88a740();
    if ((int)lVar1 == 0) {
      puStack_48 = &uStack_50;
      uStack_50 = 0;
      uStack_40 = 0x2020000000;
      uStack_38 = 0;
      puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
      func_0x00010c25cd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60(param_1);
      _objc_retain(puVar2);
      func_0x00010bf98040(param_1);
      puVar3 = puVar2;
      func_0x00010bf51e00(puVar2);
      _objc_release(puVar2);
      _objc_release(puVar2);
      __Block_object_dispose(&uStack_50,8);
    }
    else {
      puVar3 = PTR_PTR_1126dcf40;
      func_0x00010bfb18e0(PTR_PTR_1126dcf40);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10901e818; end: 10901e927;  */

void FUN_10901e818(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *in_x6;
  long lVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    func_0x00010bf070e0(*(undefined8 *)(param_1 + 0x20));
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + 1;
  }
  else if (*(ulong *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) < 3) {
    func_0x00010bf070e0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    *in_x6 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10901e928; end: 10901ea2f;  */

void FUN_10901e928(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010beef400();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c238fc0();
  if ((int)lVar2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar2 = param_1;
    func_0x00010beef400();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0fa820();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if (lVar4 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      lVar4 = param_1;
      func_0x00010beef400(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0fa820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar6,param_2,lVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10901ea30; end: 10901eb2b;  */

void FUN_10901ea30(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000107c2aaa4();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bf5b820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c116cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10901eb2c; end: 10901eb6f;  */

void FUN_10901eb2c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf5b820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c116cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10901eb70; end: 10901ebcf;  */

bool FUN_10901eb70(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bf5b820();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c116cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 != 0;
}



/* Entry: 10901ebd0; end: 10901ebd7;  */

void FUN_10901ebd0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 10901ebd8; end: 10901ebff;  */

void FUN_10901ebd8(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10901ec00; end: 10901ec2b;  */

void FUN_10901ec00(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c31910(param_1,&PTR___NSConcreteGlobalBlock_110ad45e0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10901ec2c; end: 10901ec3f;  */

bool FUN_10901ec2c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c439a8(param_2);
  func_0x000107c61180();
  lVar1 = param_2;
  func_0x000107c5c3a4();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c3e1d0();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_2);
  return lVar2 != 0;
}



/* Entry: 10901ec40; end: 10901ed13;  */

void FUN_10901ec40(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    lVar2 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10901ed14; end: 10901ed3b;  */

void FUN_10901ed14(void)

{
  return;
}



/* Entry: 10901ed3c; end: 10901ef13;  */

bool FUN_10901ed3c(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  lVar2 = param_1;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  bVar1 = false;
  if (lVar2 != 0) {
    lVar3 = param_2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    if (lVar3 == 0) {
      bVar1 = false;
    }
    else {
      lVar2 = param_1;
      func_0x00010c294420(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_2;
      func_0x00010c0b5ac0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11f420(lVar3);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      bVar1 = lVar5 != 0;
    }
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10901ef14; end: 10901ef83;  */

ulong FUN_10901ef14(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_1;
  FUN_10901ed3c(param_1,param_2);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010901ee2c(param_1,param_2);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10901ef84; end: 10901f073;  */

bool FUN_10901ef84(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  lVar2 = param_1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  bVar1 = false;
  if (lVar2 != 0) {
    lVar3 = param_2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    if (lVar3 == 0) {
      bVar1 = false;
    }
    else {
      lVar2 = param_1;
      func_0x00010bf85d80(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_2;
      func_0x00010c0b5ac0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11f420(lVar3);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      bVar1 = lVar5 != 0;
    }
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10901f074; end: 10901f177;  */

void FUN_10901f074(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x3032000000;
    pcStack_38 = FUN_10901f178;
    uStack_30 = 0x10901f188;
    uStack_28 = 0;
    func_0x00010c08fa60(param_1);
    func_0x00010bf98040(param_1);
    ppuVar2 = (undefined **)puStack_48[5];
    _objc_retain(ppuVar2);
    __Block_object_dispose(&uStack_50,8);
    _objc_release(uStack_28);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10901f178; end: 10901f18f;  */

void FUN_10901f178(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10901f190; end: 10901f1df;  */

void FUN_10901f190(long param_1,undefined8 param_2)

{
  undefined1 *in_x6;
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c09e940();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
  *in_x6 = 1;
  return;
}



/* Entry: 10901f1e0; end: 10901f2db;  */

bool FUN_10901f1e0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf433a0(param_1,param_2,&PTR____CFConstantStringClassReference_110e13718);
  lVar2 = param_1;
  func_0x00010bf433a0(param_1,param_2,&PTR____CFConstantStringClassReference_110dc12b8);
  _objc_release(param_1);
  return lVar1 != -1 && lVar2 != 1;
}



/* Entry: 10901f2dc; end: 10901f44b;  */

ulong FUN_10901f2dc(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_2;
  FUN_10901d7c4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  FUN_10901d7c4();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  FUN_10901f074();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  FUN_10901f074();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  FUN_10901f1e0();
  if (((int)uVar7 == 0) || (uVar7 = uVar4, FUN_10901f1e0(), (int)uVar7 != 0)) {
    uVar7 = uVar3;
    FUN_10901f1e0();
    if (((uVar7 & 1) == 0) && (uVar7 = uVar4, FUN_10901f1e0(), (uVar7 & 1) != 0)) {
      uVar7 = 1;
    }
    else {
      uVar7 = uVar1;
      func_0x00010c09e440();
      if (uVar7 == 0) {
        uVar5 = param_2;
        func_0x00010c294420(param_2);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_3;
        func_0x00010c294420(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar5;
        func_0x00010bf433a0(uVar5);
        _objc_release(uVar6);
        _objc_release(uVar5);
      }
    }
  }
  else {
    uVar7 = 0xffffffffffffffff;
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar7;
}



/* Entry: 10901f44c; end: 10901f53f;  */

void FUN_10901f44c(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010bf529e0();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010c246ca0(param_1,param_2,&PTR___NSConcreteGlobalBlock_110ad4840);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10901f540; end: 10901f603;  */

ulong FUN_10901f540(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  
  lVar3 = *(long *)(param_1 + 0x20);
  pcVar4 = *(code **)(lVar3 + 0x10);
  _objc_retain(param_3);
  (*pcVar4)(lVar3,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(ulong *)(param_1 + 0x20);
  (**(code **)(uVar1 + 0x10))(uVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar3 == 0 || uVar1 == 0) {
    uVar2 = (ulong)(uVar1 != 0);
    if (lVar3 != 0) {
      uVar2 = 0xffffffffffffffff;
    }
  }
  else {
    uVar2 = uVar1;
    func_0x00010bf433a0(uVar1);
  }
  _objc_release(uVar1);
  _objc_release(lVar3);
  return uVar2;
}



/* Entry: 10901f604; end: 10901f963;  */

undefined ** FUN_10901f604(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar11 = param_1;
  func_0x00010bf529e0();
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (uVar11 != 0) {
    puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar1 = param_1;
    FUN_10901f44c();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010901f244();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(uVar1);
    uVar10 = uVar1;
    func_0x00010bf52a60();
    lVar8 = lRam0000000000000000;
    while (uVar10 != 0) {
      uVar14 = 0;
      puVar4 = puVar2;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(uVar1);
        }
        uVar12 = *(ulong *)(uVar14 * 8);
        func_0x00010901f244(uVar12,1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar11;
        func_0x00010c0720c0();
        puVar2 = puVar4;
        if ((uVar3 & 1) == 0) {
          func_0x00010bf51e00(puVar4);
          func_0x00010befa120(puVar13);
          _objc_release(puVar2);
          _objc_retain(uVar12);
          _objc_release(uVar11);
          puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new();
          _objc_release(puVar4);
          uVar11 = uVar12;
        }
        func_0x00010befa120(puVar2);
        _objc_release(uVar12);
        uVar14 = uVar14 + 1;
        puVar4 = puVar2;
      } while (uVar10 != uVar14);
      uVar10 = uVar1;
      func_0x00010bf52a60();
    }
    _objc_release(uVar1);
    puVar4 = puVar2;
    func_0x00010bf529e0();
    if (puVar4 != (undefined *)0x0) {
      puVar4 = puVar2;
      func_0x00010bf51e00(puVar2);
      func_0x00010befa120(puVar13);
      _objc_release(puVar4);
    }
    puVar4 = puVar13;
    func_0x00010bf51e00();
    _objc_release(puVar2);
    _objc_release(uVar11);
    _objc_release(uVar1);
    _objc_release(puVar13);
  }
  _objc_release(param_1);
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  _objc_retain(puVar4);
  puVar2 = puVar4;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (puVar2 != (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(puVar4);
      }
      uVar9 = *(undefined8 *)((long)puVar13 * 8);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar9;
      func_0x00010901f244();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      func_0x00010c1d0560(ppuVar5);
      _objc_release(uVar6);
      puVar13 = puVar13 + 1;
    } while (puVar2 != puVar13);
    puVar2 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retain(puVar4);
    puVar2 = puVar4;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    while (puVar2 != (undefined *)0x0) {
      puVar13 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(puVar4);
        }
        uVar10 = *(ulong *)((long)puVar13 * 8);
        uVar11 = uVar10;
        func_0x000107c2aaa4();
        if ((uVar11 & 1) == 0) {
          uVar11 = uVar10;
          func_0x00010901d398();
        }
        else {
          uVar11 = 0;
        }
        FUN_10901dff8();
        if (((uVar11 & 1) == 0) && ((uVar10 & 1) == 0)) {
          func_0x00010befa120(ppuVar5);
        }
        puVar13 = puVar13 + 1;
      } while (puVar2 != puVar13);
      puVar2 = puVar4;
      func_0x00010bf52a60();
    }
    _objc_release(puVar4);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
      ___stack_chk_fail();
      if (puVar4 < (undefined *)0x4d) {
        return (undefined **)(&PTR_PTR_110ad4890)[(long)puVar4];
      }
      return &PTR____CFConstantStringClassReference_110dd9778;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return ppuVar5;
}



/* Entry: 10901f964; end: 10901fab3;  */

undefined ** FUN_10901f964(ulong param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
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
  _objc_retain();
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_1);
  uVar2 = param_1;
  func_0x00010bf52a60(param_1,param_2,&uStack_120,auStack_d8,0x10);
  if (uVar2 != 0) {
    lVar6 = *plStack_110;
    do {
      uVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(param_1);
        }
        uVar4 = *(ulong *)(lStack_118 + uVar7 * 8);
        uVar5 = uVar4;
        func_0x000107c2aaa4();
        if ((uVar5 & 1) == 0) {
          uVar5 = uVar4;
          func_0x00010901d398();
        }
        else {
          uVar5 = 0;
        }
        uVar3 = uVar4;
        FUN_10901dff8();
        if (((uVar5 & 1) == 0) && ((uVar3 & 1) == 0)) {
          func_0x00010befa120(ppuVar1,param_2,uVar4);
        }
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
      uVar2 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_120,auStack_d8,0x10);
    } while (uVar2 != 0);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
    return ppuVar1;
  }
  ___stack_chk_fail();
  if (param_1 < 0x4d) {
    return (undefined **)(&PTR_PTR_110ad4890)[param_1];
  }
  return &PTR____CFConstantStringClassReference_110dd9778;
}



/* Entry: 10901fab4; end: 10901fad7;  */

undefined ** FUN_10901fab4(ulong param_1)

{
  if (param_1 < 0x4d) {
    return (undefined **)(&PTR_PTR_110ad4890)[param_1];
  }
  return &PTR____CFConstantStringClassReference_110dd9778;
}



/* Entry: 10901fad8; end: 10901fb97;  */

void FUN_10901fad8(long param_1)

{
  undefined8 unaff_x19;
  
  if (param_1 + 1U < 0x4e) {
    unaff_x19 = *(undefined8 *)(&PTR_PTR_110ad4af8)[param_1 + 1U];
    _objc_retain(unaff_x19);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 10901fb98; end: 109020297;  */

undefined ** FUN_10901fb98(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  
  if (param_1 < 0x1a040a22) {
    if (param_1 < -0xea092b9) {
      if (-0x6401d9ee < param_1) {
        lVar2 = -0x50fe1121;
        ppuVar5 = &PTR____CFConstantStringClassReference_110f18c38;
        if (param_1 != -0x154e5cae) {
          ppuVar5 = &PTR____CFConstantStringClassReference_110f18b38;
        }
        ppuVar6 = &PTR____CFConstantStringClassReference_110f18b58;
        if (param_1 != -0x30a2f521) {
          ppuVar6 = ppuVar5;
        }
        ppuVar3 = &PTR____CFConstantStringClassReference_110f18e98;
        if (param_1 != -0x50fe1120) {
          ppuVar3 = ppuVar6;
        }
        lVar4 = -0x6401d9ed;
        ppuVar5 = &PTR____CFConstantStringClassReference_110f18f78;
        lVar7 = -0x57465a43;
        ppuVar6 = &PTR____CFConstantStringClassReference_110f18bf8;
        goto LAB_10901fddc;
      }
      lVar2 = -0x6d0cb17d;
      ppuVar5 = &PTR____CFConstantStringClassReference_110f18d98;
      if (param_1 != -0x67e67e6f) {
        ppuVar5 = &PTR____CFConstantStringClassReference_110f18b38;
      }
      ppuVar3 = &PTR____CFConstantStringClassReference_110f18c18;
      if (param_1 != -0x6d0cb17c) {
        ppuVar3 = ppuVar5;
      }
      ppuVar5 = &PTR____CFConstantStringClassReference_110f18e18;
      bVar1 = param_1 == -0x70364b9a;
      ppuVar6 = &PTR____CFConstantStringClassReference_110f18eb8;
      lVar4 = -0x729f5962;
    }
    else {
      if (-0x42fd6cf < param_1) {
        lVar2 = 0x9c0b736;
        ppuVar5 = &PTR____CFConstantStringClassReference_110e056f8;
        if (param_1 != 0x10ca441e) {
          ppuVar5 = &PTR____CFConstantStringClassReference_110f18b38;
        }
        ppuVar6 = &PTR____CFConstantStringClassReference_110f18d38;
        if (param_1 != 0x1070c589) {
          ppuVar6 = ppuVar5;
        }
        ppuVar3 = &PTR____CFConstantStringClassReference_110f18d18;
        if (param_1 != 0x9c0b737) {
          ppuVar3 = ppuVar6;
        }
        lVar4 = -0x42fd6ce;
        ppuVar5 = &PTR____CFConstantStringClassReference_110f18d78;
        ppuVar6 = &PTR____CFConstantStringClassReference_110de39b8;
        if (param_1 != 0) {
          ppuVar6 = &PTR____CFConstantStringClassReference_110f18b38;
        }
LAB_10901fde4:
        if (param_1 != lVar4) {
          ppuVar5 = ppuVar6;
        }
        goto LAB_10901ff78;
      }
      lVar2 = -0x4c62610;
      ppuVar5 = &PTR____CFConstantStringClassReference_110f18cf8;
      if (param_1 != -0x49bc1bd) {
        ppuVar5 = &PTR____CFConstantStringClassReference_110f18b38;
      }
      ppuVar3 = &PTR____CFConstantStringClassReference_110f18f18;
      if (param_1 != -0x4c6260f) {
        ppuVar3 = ppuVar5;
      }
      ppuVar5 = &PTR____CFConstantStringClassReference_110f18c78;
      bVar1 = param_1 == -0xd4e6138;
      ppuVar6 = &PTR____CFConstantStringClassReference_110f18bb8;
      lVar4 = -0xea092b9;
    }
  }
  else if (param_1 < 0x2f5432a1) {
    if (0x20e40508 < param_1) {
      lVar2 = 0x2e5189e0;
      ppuVar5 = &PTR____CFConstantStringClassReference_110f18cb8;
      if (param_1 != 0x2e879d01) {
        ppuVar5 = &PTR____CFConstantStringClassReference_110f18b38;
      }
      ppuVar6 = &PTR____CFConstantStringClassReference_110f18db8;
      if (param_1 != 0x2e593b1b) {
        ppuVar6 = ppuVar5;
      }
      ppuVar3 = &PTR____CFConstantStringClassReference_110f18e78;
      if (param_1 != 0x2e5189e1) {
        ppuVar3 = ppuVar6;
      }
      lVar4 = 0x20e40509;
      ppuVar5 = &PTR____CFConstantStringClassReference_110f18e38;
      lVar7 = 0x248de666;
      ppuVar6 = &PTR____CFConstantStringClassReference_110f18b98;
LAB_10901fddc:
      if (param_1 != lVar7) {
        ppuVar6 = &PTR____CFConstantStringClassReference_110f18b38;
      }
      goto LAB_10901fde4;
    }
    lVar2 = 0x1b567eac;
    ppuVar5 = &PTR____CFConstantStringClassReference_110f18e58;
    if (param_1 != 0x1df5c7d4) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110f18b38;
    }
    ppuVar3 = &PTR____CFConstantStringClassReference_110f18c58;
    if (param_1 != 0x1b567ead) {
      ppuVar3 = ppuVar5;
    }
    ppuVar5 = &PTR____CFConstantStringClassReference_110f18b78;
    bVar1 = param_1 == 0x1a0e6a1a;
    ppuVar6 = &PTR____CFConstantStringClassReference_110f18bd8;
    lVar4 = 0x1a040a22;
  }
  else {
    if (0x54110797 < param_1) {
      lVar2 = 0x6424ea8a;
      ppuVar5 = &PTR____CFConstantStringClassReference_110f18df8;
      if (param_1 != 0x7ebc3d7f) {
        ppuVar5 = &PTR____CFConstantStringClassReference_110f18b38;
      }
      ppuVar6 = &PTR____CFConstantStringClassReference_110f18d58;
      if (param_1 != 0x78fe2cec) {
        ppuVar6 = ppuVar5;
      }
      ppuVar3 = &PTR____CFConstantStringClassReference_110f18f58;
      if (param_1 != 0x6424ea8b) {
        ppuVar3 = ppuVar6;
      }
      lVar4 = 0x54110798;
      ppuVar5 = &PTR____CFConstantStringClassReference_110f18f38;
      lVar7 = 0x5740d2fe;
      ppuVar6 = &PTR____CFConstantStringClassReference_110f18ef8;
      goto LAB_10901fddc;
    }
    lVar2 = 0x431dca03;
    ppuVar5 = &PTR____CFConstantStringClassReference_110f18ed8;
    if (param_1 != 0x4a68a6a6) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110f18b38;
    }
    ppuVar3 = &PTR____CFConstantStringClassReference_110f18c98;
    if (param_1 != 0x431dca04) {
      ppuVar3 = ppuVar5;
    }
    ppuVar5 = &PTR____CFConstantStringClassReference_110f18dd8;
    bVar1 = param_1 == 0x3cf4b9ff;
    ppuVar6 = &PTR____CFConstantStringClassReference_110f18cd8;
    lVar4 = 0x2f5432a1;
  }
  if (!bVar1) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110f18b38;
  }
  if (param_1 != lVar4) {
    ppuVar5 = ppuVar6;
  }
LAB_10901ff78:
  if (param_1 <= lVar2) {
    ppuVar3 = ppuVar5;
  }
  return ppuVar3;
}



/* Entry: 109020298; end: 1090203d7;  */

void FUN_109020298(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_230 [8];
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  
  puVar2 = auStack_230;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010b656760(auStack_230,0);
  _objc_retain(param_1);
  uVar1 = uStack_228;
  auStack_230[0] = 0;
  uStack_228 = param_1;
  _objc_release(uVar1);
  _objc_retain(param_2);
  uVar1 = uStack_220;
  auStack_230[0] = 0;
  uStack_220 = param_2;
  _objc_release(uVar1);
  _objc_retain(param_3);
  uVar1 = uStack_218;
  auStack_230[0] = 0;
  uStack_218 = param_3;
  _objc_release(uVar1);
  _objc_retain(param_2);
  uVar1 = uStack_e8;
  auStack_230[0] = 0;
  uStack_e8 = param_2;
  _objc_release(uVar1);
  _objc_retain(param_2);
  uVar1 = uStack_e0;
  auStack_230[0] = 0;
  uStack_e0 = param_2;
  _objc_release(uVar1);
  func_0x00010b656cf8(auStack_230);
  _objc_retainAutoreleasedReturnValue();
  FUN_108c0bf38(auStack_230);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1090203d8; end: 109020607;  */

void FUN_1090203d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_250 [8];
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_108;
  undefined8 uStack_100;
  
  puVar2 = auStack_250;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010b656760(auStack_250,0);
  _objc_retain(param_1);
  uVar1 = uStack_248;
  auStack_250[0] = 0;
  uStack_248 = param_1;
  _objc_release(uVar1);
  _objc_retain(param_2);
  uVar1 = uStack_240;
  auStack_250[0] = 0;
  uStack_240 = param_2;
  _objc_release(uVar1);
  _objc_retain(param_3);
  uVar1 = uStack_238;
  auStack_250[0] = 0;
  uStack_238 = param_3;
  _objc_release(uVar1);
  _objc_retain(param_8);
  uVar1 = uStack_108;
  auStack_250[0] = 0;
  uStack_108 = param_8;
  _objc_release(uVar1);
  _objc_retain(param_2);
  uVar1 = uStack_100;
  auStack_250[0] = 0;
  uStack_100 = param_2;
  _objc_release(uVar1);
  uVar1 = param_4;
  FUN_109020608(param_4,param_5,param_6,param_7,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b6570f8(auStack_250,uVar1);
  _objc_release(uVar1);
  func_0x00010b656cf8(auStack_250);
  _objc_retainAutoreleasedReturnValue();
  FUN_108c0bf38(auStack_250);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 109020608; end: 1090207c3;  */

void FUN_109020608(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined *param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_1;
  func_0x00010c08fa60();
  if ((lVar1 == 0) && (lVar1 = param_2, func_0x00010c08fa60(), lVar1 == 0)) {
    puVar3 = (undefined *)0x0;
  }
  else {
    if (param_7 == (undefined *)0x0) {
      lVar1 = param_6;
      func_0x00010c08fa60();
      if (lVar1 == 0) {
        puVar2 = (undefined *)0x0;
      }
      else {
        puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
        _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
        func_0x00010bff6b20();
      }
    }
    else {
      _objc_retain(param_7);
      puVar2 = param_7;
    }
    puVar3 = PTR_PTR_1126b14b8;
    _objc_alloc(PTR_PTR_1126b14b8);
    func_0x00010bff7be0();
    _objc_release(puVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1090207c4; end: 109020ae3;  */

void FUN_1090207c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_258 [8];
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  func_0x00010b656760(auStack_258,0);
  _objc_retain(param_1);
  uVar1 = uStack_250;
  auStack_258[0] = 0;
  uStack_250 = param_1;
  _objc_release(uVar1);
  _objc_retain(param_2);
  uVar1 = uStack_248;
  auStack_258[0] = 0;
  uStack_248 = param_2;
  _objc_release(uVar1);
  _objc_retain(param_3);
  uVar1 = uStack_240;
  auStack_258[0] = 0;
  uStack_240 = param_3;
  _objc_release(uVar1);
  uVar1 = param_4;
  FUN_109020608(param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b6570f8(auStack_258,uVar1);
  _objc_release(uVar1);
  auStack_258[0] = 0;
  uStack_238 = param_10;
  _objc_retain(param_12);
  uVar1 = uStack_118;
  auStack_258[0] = 0;
  uStack_118 = param_12;
  _objc_release(uVar1);
  _objc_retain(param_13);
  uVar1 = uStack_110;
  auStack_258[0] = 0;
  uStack_110 = param_13;
  _objc_release(uVar1);
  _objc_retain(param_2);
  uVar1 = uStack_108;
  auStack_258[0] = 0;
  uStack_108 = param_2;
  _objc_release(uVar1);
  func_0x00010b6572ec(auStack_258,param_14);
  puVar2 = auStack_258;
  func_0x00010b656cf8(puVar2);
  _objc_retainAutoreleasedReturnValue();
  FUN_108c0bf38(auStack_258);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 109020ae4; end: 109020b4f;  */

void FUN_109020ae4(undefined8 param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_210 [488];
  undefined1 uStack_28;
  
  puVar1 = auStack_210;
  func_0x00010b656760(auStack_210,param_1);
  auStack_210[0] = 0;
  uStack_28 = param_2;
  func_0x00010b656cf8(auStack_210);
  _objc_retainAutoreleasedReturnValue();
  FUN_108c0bf38(auStack_210);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 109020b50; end: 109020c5f; -[SCSortableSnapchatter initWithSnapchatter:displayMetadata:] */

undefined8 FUN_109020b50(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c0d5140();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = param_3;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar1 = param_3;
      func_0x00010c294420(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(lVar2);
      lVar1 = lVar2;
    }
    _objc_release(lVar2);
  }
  lVar2 = param_4;
  func_0x00010c246f60(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_4;
  func_0x00010c1499e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c048f40(param_1,param_2,param_3,lVar1,lVar2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 109020c60; end: 109020c63; -[SCSortableSnapchatter sectionKitSanitizedString] */

void FUN_109020c60(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1499f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_sanitizedString_112630098);
  return;
}



/* Entry: 109020c64; end: 109020c67; -[SCSortableSnapchatter sectionKitSortingKey] */

void FUN_109020c64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c246f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_sortingKey_11266f600);
  return;
}



/* Entry: 109020c68; end: 109020d0b; -[SCSortableSnapchatterServices initWithSortableSnapchatterObservableRepository:snapchattersDisplayMetadataFetcher:] */

undefined1 *
FUN_109020c68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ffe50;
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



/* Entry: 109020d0c; end: 109020d13; -[SCSortableSnapchatterServices sortableSnapchatterObservableRepository] */

undefined8 FUN_109020d0c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109020d14; end: 109020d1b; -[SCSortableSnapchatterServices snapchattersDisplayMetadataFetcher] */

undefined8 FUN_109020d14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109020d1c; end: 109020d4b; -[SCSortableSnapchatterServices .cxx_destruct] */

void FUN_109020d1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109020d4c; end: 109020e57; -[SCSortableSnapchatter initWithSnapchatter:nameToDisplay:sortingKey:sanitizedString:] */

undefined1 *
FUN_109020d4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ffe58;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109020e58; end: 109020e7b; -[SCSortableSnapchatter copyWithZone:] */

undefined8 FUN_109020e58(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 109020e7c; end: 109020f07; -[SCSortableSnapchatter hash] */

undefined8 * FUN_109020e7c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_109020fb8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_109020fc4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_109020fc4;
            }
            goto LAB_109020fb8;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_109020fc4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 109020f08; end: 109020fdf; -[SCSortableSnapchatter isEqual:] */

long FUN_109020f08(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_109020fb8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_109020fc4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_109020fc4;
            }
            goto LAB_109020fb8;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_109020fc4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 109020fe0; end: 109020fe7; -[SCSortableSnapchatter snapchatter] */

undefined8 FUN_109020fe0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109020fe8; end: 109020fef; -[SCSortableSnapchatter nameToDisplay] */

undefined8 FUN_109020fe8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109020ff0; end: 109020ff7; -[SCSortableSnapchatter sortingKey] */

undefined8 FUN_109020ff0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109020ff8; end: 109020fff; -[SCSortableSnapchatter sanitizedString] */

undefined8 FUN_109020ff8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 109021000; end: 109021047; -[SCSortableSnapchatter .cxx_destruct] */

void FUN_109021000(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109021048; end: 10902117f; -[SCSnapchattersDisplayMetadata initWithUserId:nameToDisplay:sanitizedString:sortingKey:script:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_109021048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126ffe60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277fcb0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277fcb0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277fcb4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277fcb4) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277fcb8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277fcb8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277fcbc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277fcbc) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + (long)_DAT_11277fcc0) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109021180; end: 1090211a3; -[SCSnapchattersDisplayMetadata copyWithZone:] */

undefined8 FUN_109021180(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1090211a4; end: 10902124f; -[SCSnapchattersDisplayMetadata hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1090211a4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277fcb0);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277fcb4);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277fcb8);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277fcbc);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(uint *)(param_1 + _DAT_11277fcc0);
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_109021338:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_109021344;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (*(int *)((long)puVar3 + (long)_DAT_11277fcc0) == *(int *)(param_3 + _DAT_11277fcc0))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_11277fcb0);
      if ((lVar5 == *(long *)(param_3 + _DAT_11277fcb0)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
         ) {
        lVar5 = *(long *)((long)puVar3 + (long)_DAT_11277fcb4);
        if ((lVar5 == *(long *)(param_3 + _DAT_11277fcb4)) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + (long)_DAT_11277fcb8);
          if ((lVar5 == *(long *)(param_3 + _DAT_11277fcb8)) ||
             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + (long)_DAT_11277fcbc);
            if (puVar6 != *(undefined1 **)(param_3 + _DAT_11277fcbc)) {
              func_0x00010c071ae0();
              goto LAB_109021344;
            }
            goto LAB_109021338;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_109021344:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 109021250; end: 10902135f; -[SCSnapchattersDisplayMetadata isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_109021250(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_109021338:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_109021344;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (*(int *)(param_1 + (long)_DAT_11277fcc0) == *(int *)(param_3 + (long)_DAT_11277fcc0))) {
      lVar3 = *(long *)(param_1 + (long)_DAT_11277fcb0);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_11277fcb0)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_11277fcb4);
        if ((lVar3 == *(long *)(param_3 + (long)_DAT_11277fcb4)) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + (long)_DAT_11277fcb8);
          if ((lVar3 == *(long *)(param_3 + (long)_DAT_11277fcb8)) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + (long)_DAT_11277fcbc);
            if (lVar3 != *(long *)(param_3 + (long)_DAT_11277fcbc)) {
              func_0x00010c071ae0();
              goto LAB_109021344;
            }
            goto LAB_109021338;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_109021344:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 109021360; end: 10902136f; -[SCSnapchattersDisplayMetadata userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109021360(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277fcb0);
}



/* Entry: 109021370; end: 10902137f; -[SCSnapchattersDisplayMetadata nameToDisplay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109021370(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277fcb4);
}



/* Entry: 109021380; end: 10902138f; -[SCSnapchattersDisplayMetadata sanitizedString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109021380(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277fcb8);
}



/* Entry: 109021390; end: 10902139f; -[SCSnapchattersDisplayMetadata sortingKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109021390(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277fcbc);
}



/* Entry: 1090213a0; end: 1090213af; -[SCSnapchattersDisplayMetadata script] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1090213a0(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11277fcc0);
}



/* Entry: 1090213b0; end: 10902140f; -[SCSnapchattersDisplayMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090213b0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277fcbc,0);
  _objc_storeStrong(param_1 + _DAT_11277fcb8,0);
  _objc_storeStrong(param_1 + _DAT_11277fcb4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277fcb0,0);
  return;
}



/* Entry: 109021410; end: 1090214bb; -[SCSnapchattersIndexScript initWithType:indexes:linguisticType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_109021410(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ffe68;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + (long)_DAT_11277fcc4) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277fcc8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277fcc8) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + (long)_DAT_11277fccc) = param_5;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1090214bc; end: 1090214df; -[SCSnapchattersIndexScript copyWithZone:] */

undefined8 FUN_1090214bc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1090214e0; end: 109021563; -[SCSnapchattersIndexScript hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_1090214e0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = (ulong)*(uint *)(param_1 + _DAT_11277fcc4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277fcc8);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(uint *)(param_1 + _DAT_11277fccc);
  uStack_38 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (ulong *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_109021610;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(int *)((long)puVar2 + (long)_DAT_11277fcc4) != *(int *)(param_3 + _DAT_11277fcc4) ||
        (*(int *)((long)puVar2 + (long)_DAT_11277fccc) != *(int *)(param_3 + _DAT_11277fccc))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_109021610;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + (long)_DAT_11277fcc8);
    if (puVar4 != *(undefined1 **)(param_3 + _DAT_11277fcc8)) {
      func_0x00010c071ae0();
      goto LAB_109021610;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_109021610:
  _objc_release(param_3);
  return (ulong *)puVar4;
}



/* Entry: 109021564; end: 10902162b; -[SCSnapchattersIndexScript isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_109021564(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_109021610;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(int *)(param_1 + (long)_DAT_11277fcc4) != *(int *)(param_3 + (long)_DAT_11277fcc4) ||
        (*(int *)(param_1 + (long)_DAT_11277fccc) != *(int *)(param_3 + (long)_DAT_11277fccc))))) {
      lVar3 = 0;
      goto LAB_109021610;
    }
    lVar3 = *(long *)(param_1 + (long)_DAT_11277fcc8);
    if (lVar3 != *(long *)(param_3 + (long)_DAT_11277fcc8)) {
      func_0x00010c071ae0();
      goto LAB_109021610;
    }
  }
  lVar3 = 1;
LAB_109021610:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10902162c; end: 10902163b; -[SCSnapchattersIndexScript type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10902162c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11277fcc4);
}



/* Entry: 10902163c; end: 10902164b; -[SCSnapchattersIndexScript indexes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10902163c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277fcc8);
}



/* Entry: 10902164c; end: 10902165b; -[SCSnapchattersIndexScript linguisticType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10902164c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11277fccc);
}



/* Entry: 10902165c; end: 10902166f; -[SCSnapchattersIndexScript .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10902165c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277fcc8,0);
  return;
}



/* Entry: 109021670; end: 1090216ab;  */

void FUN_109021670(double param_1)

{
  if (param_1 != 2.2250738585072014e-308) {
    func_0x00010bf655e0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1090216ac; end: 1090216c7;  */

void FUN_1090216ac(double param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0df7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithLongLong__112615808,
             (long)(param_1 * 1000.0));
  return;
}



/* Entry: 1090216c8; end: 10902171f;  */

undefined8 FUN_1090216c8(undefined8 param_1,long param_2)

{
  func_0x00010bf5e5e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    param_1 = 0x10000000000000;
  }
  else {
    func_0x00010c26f320(param_2);
  }
  _objc_release(param_2);
  return param_1;
}



/* Entry: 109021720; end: 109021763; +[SCMapTweakCOFHelper boolValueForTweakValue:circumstanceEngine:configKeyName:defaultValue:] */

uint FUN_109021720(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  
  func_0x00010bf1f440(param_4,param_2,param_5,param_6,0);
  uVar1 = (uint)param_4;
  if (param_3 != 0) {
    uVar1 = (uint)(param_3 != 2);
  }
  return uVar1;
}


