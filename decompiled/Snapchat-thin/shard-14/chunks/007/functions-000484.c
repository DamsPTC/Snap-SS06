/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b5fa7fc; end: 10b5fa8b3;  */

uint FUN_10b5fa7fc(ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10b5fa088();
  if (uVar1 - 2 < 0xb) {
    uVar1 = param_1;
    FUN_10b5fa088();
    uVar2 = 0;
    if (uVar1 < 0xd) {
      uVar2 = 0x1566 >> (ulong)((uint)uVar1 & 0x1f);
    }
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_1);
  return uVar2 & 1;
}



/* Entry: 10b5fa8b4; end: 10b5fa95b;  */

bool FUN_10b5fa8b4(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain();
  lVar2 = param_1;
  FUN_10b5fa088();
  if ((lVar2 == 8) || (lVar2 = param_1, FUN_10b5fa088(), lVar2 == 7)) {
    puVar3 = PTR_PTR_1126bf6e8;
    lVar2 = param_1;
    func_0x00010c273740(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c298c40(puVar3,param_2,0x2398fe,lVar2);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = puVar3 != (undefined *)0x0;
    _objc_release();
    _objc_release(lVar2);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10b5fa95c; end: 10b5fa99b;  */

undefined8 FUN_10b5fa95c(ulong param_1)

{
  undefined8 uVar1;
  
  FUN_10b5fa088();
  if (((param_1 < 8) || (param_1 - 0xb < 2)) || (param_1 == 9999)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10b5fa99c; end: 10b5faa7b;  */

undefined1  [16] FUN_10b5fa99c(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010c2a5040(param_1);
  uVar3 = param_1;
  func_0x00010bfe0640(param_1);
  uVar4 = param_1;
  FUN_10b5fa95c();
  _objc_release(param_1);
  iVar1 = (int)uVar3 / 2;
  if ((int)uVar4 == 0) {
    iVar1 = (int)uVar3;
  }
  auVar5._0_8_ = (double)(int)uVar2;
  auVar5._8_8_ = (double)iVar1;
  return auVar5;
}



/* Entry: 10b5faa7c; end: 10b5fab33;  */

undefined ** FUN_10b5faa7c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  ppuVar4 = &PTR____CFConstantStringClassReference_110f673d8;
  if (param_1 != 8) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110db5518;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f673b8;
  if (param_1 != 7) {
    ppuVar1 = ppuVar4;
  }
  ppuVar4 = &PTR____CFConstantStringClassReference_110f0a018;
  if (param_1 != 6) {
    ppuVar4 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e8ced8;
  if (param_1 != 5) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db5518;
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110f67398;
  if (param_1 != 4) {
    ppuVar3 = ppuVar1;
  }
  if (param_1 < 6) {
    ppuVar4 = ppuVar3;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110ed87d8;
  if (param_1 != 3) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db5518;
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110f67378;
  if (param_1 != 2) {
    ppuVar3 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e31138;
  if (param_1 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db5518;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f0a198;
  if (param_1 != -9999) {
    ppuVar2 = ppuVar1;
  }
  if (param_1 < 2) {
    ppuVar3 = ppuVar2;
  }
  if (param_1 < 4) {
    ppuVar4 = ppuVar3;
  }
  return ppuVar4;
}



/* Entry: 10b5fab34; end: 10b5fab83;  */

bool FUN_10b5fab34(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bf977c0();
  if ((int)uVar2 == 0) {
    bVar1 = true;
  }
  else {
    uVar2 = param_1;
    func_0x00010bf977c0(param_1);
    bVar1 = (int)uVar2 == 0x28;
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10b5fab84; end: 10b5fac17;  */

bool FUN_10b5fab84(uint param_1)

{
  return param_1 != 0 && ((param_1 & 0x1f) != 0 || (param_1 & 0xffe0) != 0);
}



/* Entry: 10b5fac18; end: 10b5fac8f;  */

bool FUN_10b5fac18(ulong param_1)

{
  ulong uVar1;
  bool bVar2;
  
  _objc_retain();
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    uVar1 = param_1;
    func_0x00010bfbdda0();
    FUN_10b5fa33c();
    if (uVar1 == 8) {
      bVar2 = true;
    }
    else {
      uVar1 = param_1;
      func_0x00010bf3d240();
      bVar2 = (int)uVar1 != 0 && ((uVar1 & 0x1f) != 0 || (uVar1 & 0xffe0) != 0);
    }
  }
  _objc_release(param_1);
  return bVar2;
}



/* Entry: 10b5fac90; end: 10b5fadbb;  */

bool FUN_10b5fac90(long param_1)

{
  FUN_10b5fa33c();
  return param_1 == 8;
}



/* Entry: 10b5fadbc; end: 10b5fae1b;  */

undefined8 FUN_10b5fadbc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c0c7f80();
    if (lVar1 - 1U < 0xb) {
      uVar2 = *(undefined8 *)(&UNK_10e5d2298 + (lVar1 - 1U) * 8);
    }
    else {
      uVar2 = 0x31;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b5fae1c; end: 10b5fb2c3;  */

undefined8 FUN_10b5fae1c(long param_1)

{
  switch(param_1) {
  case 1:
    return 7;
  case 2:
    return 9;
  case 3:
    return 8;
  case 4:
    return 0xc;
  case 5:
    return 0xe;
  case 6:
    return 0xf;
  case 7:
    return 0x11;
  case 8:
    return 0x12;
  case 9:
    return 0x13;
  case 10:
    return 0x14;
  case 0xb:
    return 0x15;
  case 0xc:
    return 0x16;
  case 0xd:
    return 0x17;
  case 0xe:
    return 0x18;
  case 0xf:
    return 0x19;
  case 0x10:
    return 0x1a;
  case 0x11:
    return 0x1b;
  case 0x12:
    return 0x1c;
  case 0x13:
    return 0x1d;
  case 0x14:
    return 0x1e;
  case 0x15:
    return 0x1f;
  case 0x16:
    return 0x20;
  case 0x17:
    return 0x21;
  case 0x18:
    return 0x22;
  case 0x19:
    return 0x23;
  case 0x1a:
    return 0x24;
  case 0x1b:
    return 0x25;
  case 0x1c:
    return 0x26;
  case 0x1d:
    return 0x27;
  case 0x1e:
    return 0x29;
  case 0x1f:
    return 0x2a;
  case 0x20:
  case 0x26:
    return 0x2b;
  case 0x21:
    return 0x2c;
  case 0x22:
    return 0x2e;
  case 0x23:
    return 0x2f;
  case 0x24:
    return 0x30;
  case 0x25:
    return 0x31;
  case 0x27:
    return 0x33;
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x46:
  case 0x47:
    goto LAB_10b5fae40;
  case 0x2b:
    return 0x36;
  case 0x2c:
    return 0x34;
  case 0x2d:
    return 0x35;
  case 0x2e:
    return 0x38;
  case 0x2f:
    return 0x3a;
  case 0x30:
    return 0x3b;
  case 0x31:
    return 0x4a;
  case 0x32:
    return 0x3f;
  case 0x33:
    return 0x40;
  case 0x34:
    return 0x41;
  case 0x35:
    return 0x42;
  case 0x36:
    return 0x43;
  case 0x37:
    return 0x3c;
  case 0x38:
    return 0x3d;
  case 0x39:
    return 0x3e;
  case 0x3a:
    return 0x44;
  case 0x3b:
    return 0x45;
  case 0x3c:
    return 0x46;
  case 0x3d:
    return 0x47;
  case 0x3e:
    return 0x48;
  case 0x3f:
    return 0x49;
  case 0x40:
    return 0x4b;
  case 0x41:
    return 0x4c;
  case 0x42:
    return 0x4f;
  case 0x43:
    return 0x50;
  case 0x44:
    return 0x51;
  case 0x45:
    return 0x52;
  case 0x48:
    return 0x53;
  default:
    if (param_1 != -9999) {
      return 5;
    }
LAB_10b5fae40:
    return 0xffffffffffffd8f1;
  }
}



/* Entry: 10b5fb2c4; end: 10b5fb3bb;  */

void FUN_10b5fb2c4(long param_1,undefined *param_2,ulong param_3,int param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  ppuVar2 = &PTR_PTR_110d59b98;
  if (10 < param_1 - 2U) {
    ppuVar2 = &PTR_PTR_110d59b88;
  }
  ppuVar1 = &PTR_PTR_110d59ba0;
  if (1 < param_1 - 0xbU) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR_PTR_110d59b90;
  if ((param_3 & 1) == 0) {
    ppuVar2 = ppuVar1;
  }
  puVar5 = *ppuVar2;
  _objc_retain(puVar5);
  if (param_2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  }
  else {
    _objc_retain(param_2);
    puVar3 = param_2;
  }
  ppuVar2 = &PTR_PTR_110d59bb0;
  if (param_4 == 0) {
    ppuVar2 = &PTR_PTR_110d59ba8;
  }
  puVar4 = puVar5;
  FUN_10b703f7c(puVar5,puVar3,*ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b5fb3bc; end: 10b5fb447;  */

void FUN_10b5fb3bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10b5fa088(param_1);
  uVar2 = param_1;
  FUN_10b5f7a24(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  FUN_10b5fb2c4(uVar1,uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b5fb448; end: 10b5fb44b;  */

void FUN_10b5fb448(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  _objc_retain(param_1);
  puVar9 = param_1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar9 != (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_1);
      }
      uVar11 = *(undefined8 *)((long)puVar8 * 8);
      puVar2 = puVar10;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar2 == (undefined *)0x0) {
        func_0x00010c1d0640(puVar10);
      }
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar3 = puVar10;
      func_0x00010c0e00e0(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      func_0x00010c0df760(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar10);
      _objc_release(puVar2);
      _objc_release(puVar3);
      puVar2 = puVar10;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c067ec0();
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if ((int)puVar3 < 2) {
        func_0x00010befa120(puVar1);
      }
      else {
        uVar4 = uVar11;
        func_0x00010c25cea0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar10;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(puVar3);
        _objc_release(uVar4);
        func_0x00010c0f58c0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c25ce20(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(puVar3);
        _objc_release(uVar11);
        _objc_release(puVar2);
      }
      puVar8 = puVar8 + 1;
    } while (puVar9 != puVar8);
    puVar9 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  puVar9 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release(puVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    puVar9 = param_1;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    puVar10 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    while (PTR__OBJC_CLASS___NSUUID_1126b0270 = puVar10, puVar9 != (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(param_1);
        }
        puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
        _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
        func_0x00010c057ea0();
        func_0x00010bfcb980();
        _objc_release(puVar1);
        puVar10 = puVar10 + 1;
      } while (puVar9 != puVar10);
      puVar9 = param_1;
      func_0x00010bf52a60();
      puVar10 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    }
    _objc_alloc();
    func_0x00010c057e80();
    puVar9 = puVar10;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
      ___stack_chk_fail();
      lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain();
      _objc_retain(param_2);
      if (param_2 == (undefined *)0x0) {
        _objc_retain(param_1);
        puVar9 = param_1;
      }
      else if (param_1 == (undefined *)0x0) {
        _objc_retain(param_2);
        puVar9 = param_2;
      }
      else {
        puVar9 = param_1;
        func_0x00010c0720c0();
        if (((ulong)puVar9 & 1) == 0) {
          puVar10 = PTR__OBJC_CLASS___NSUUID_1126b0270;
          _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
          func_0x00010c057ea0();
          func_0x00010bfcb980();
          puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
          _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
          func_0x00010c057ea0();
          func_0x00010bfcb980();
          puVar8 = PTR__OBJC_CLASS___NSUUID_1126b0270;
          _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
          func_0x00010c057e80();
          puVar9 = puVar8;
          func_0x00010bdc3580();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          _objc_release(puVar1);
          _objc_release(puVar10);
        }
        else {
          puVar9 = (undefined *)0x0;
        }
      }
      _objc_release(param_2);
      _objc_release(param_1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
        ___stack_chk_fail();
        puVar10 = PTR__OBJC_CLASS___NSUUID_1126b0270;
        lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
        _objc_retain();
        _objc_alloc();
        func_0x00010c057ea0();
        _objc_release(param_1);
        if (puVar10 == (undefined *)0x0) {
          puVar9 = (undefined *)0x0;
        }
        else {
          func_0x00010bfcb980(puVar10);
          puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
          func_0x00010bf64a00();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
          ___stack_chk_fail();
          _objc_retain();
          if ((puVar10 == (undefined *)0x0) ||
             (puVar9 = puVar10, func_0x00010c08fa60(), puVar9 != (undefined *)0x10)) {
            puVar9 = (undefined *)0x0;
          }
          else {
            puVar9 = PTR__OBJC_CLASS___NSUUID_1126b0270;
            _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
            _objc_retainAutorelease(puVar10);
            func_0x00010bf25f00();
            func_0x00010c057e80(puVar9);
          }
          _objc_release(puVar10);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10b5fb44c; end: 10b5fb5d3;  */

undefined * FUN_10b5fb44c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retain(param_1);
  lVar7 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar7 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      uVar8 = *(ulong *)(lVar9 * 8);
      uVar3 = uVar8;
      FUN_10b5fa088(uVar8);
      FUN_10b5fb3bc(uVar8,0,(uint)(uVar3 < 0xd) & 0x1566U >> (ulong)((uint)uVar3 & 0x1f));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(uVar8);
      lVar9 = lVar9 + 1;
    } while (lVar7 != lVar9);
    lVar7 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  puVar4 = puVar2;
  func_0x00010bf51e00(puVar2);
  puVar5 = puVar4;
  FUN_10b7040d8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  if (param_1 < -0x13b62a2c) {
    if (param_1 < -0x599ab5f7) {
      if (param_1 == -0x60ed74c9) {
        return (undefined *)0x0;
      }
      if (param_1 == -0x6073f652) {
        return (undefined *)0x3;
      }
    }
    else {
      if (param_1 == -0x599ab5f7) {
        return (undefined *)0x3;
      }
      if (param_1 == -0x560480c2) {
        return (undefined *)0x2;
      }
      if (param_1 == -0x56036f34) {
        return (undefined *)0x1;
      }
    }
  }
  else {
    if (param_1 < -0xa2dfdc) {
      if (param_1 == -0x13b62a2c) {
        return (undefined *)0x3;
      }
      lVar7 = -0x13682eb1;
    }
    else {
      if (param_1 == -0xa2dfdc) {
        return (undefined *)0x4;
      }
      if (param_1 == 0) {
        return (undefined *)0x0;
      }
      lVar7 = 0x4f78090a;
    }
    if (param_1 == lVar7) {
      return (undefined *)0x4;
    }
  }
  return (undefined *)0x270f;
}



/* Entry: 10b5fb5d4; end: 10b5fb6c7;  */

undefined8 FUN_10b5fb5d4(long param_1)

{
  long lVar1;
  
  if (param_1 < -0x13b62a2c) {
    if (param_1 < -0x599ab5f7) {
      if (param_1 == -0x60ed74c9) {
        return 0;
      }
      if (param_1 == -0x6073f652) {
        return 3;
      }
    }
    else {
      if (param_1 == -0x599ab5f7) {
        return 3;
      }
      if (param_1 == -0x560480c2) {
        return 2;
      }
      if (param_1 == -0x56036f34) {
        return 1;
      }
    }
  }
  else {
    if (param_1 < -0xa2dfdc) {
      if (param_1 == -0x13b62a2c) {
        return 3;
      }
      lVar1 = -0x13682eb1;
    }
    else {
      if (param_1 == -0xa2dfdc) {
        return 4;
      }
      if (param_1 == 0) {
        return 0;
      }
      lVar1 = 0x4f78090a;
    }
    if (param_1 == lVar1) {
      return 4;
    }
  }
  return 9999;
}



/* Entry: 10b5fb6c8; end: 10b5fb7f3;  */

undefined1 FUN_10b5fb6c8(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010c15fa20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    lVar3 = param_1;
    func_0x00010c0c5040();
    _objc_release(param_1);
    lVar3 = (long)(int)lVar3;
  }
  else {
    lVar3 = param_1;
    func_0x00010b5fb758();
    _objc_release(param_1);
  }
  _objc_release(lVar2);
  uVar1 = 2;
  if (lVar3 != 3) {
    uVar1 = lVar3 == 4;
  }
  return uVar1;
}



/* Entry: 10b5fb7f4; end: 10b5fb88f;  */

bool FUN_10b5fb7f4(ulong param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  
  _objc_retain();
  if (((param_2 & 1) == 0) && (uVar2 = param_1, func_0x00010bfde400(), (uVar2 & 1) == 0)) {
    uVar2 = param_1;
    func_0x00010c27dd80(param_1);
    bVar1 = (int)uVar2 == 1;
  }
  else {
    bVar1 = true;
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10b5fb890; end: 10b5fbca7;  */

void FUN_10b5fb890(long param_1,undefined *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = param_2;
    func_0x00010c0d3c80();
  }
  if (puVar3 == (undefined *)0x0) {
LAB_10b5fb964:
    puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) goto LAB_10b5fb97c;
LAB_10b5fb9d4:
    puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) goto LAB_10b5fb9ec;
  }
  else {
    puVar4 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) goto LAB_10b5fb964;
    puVar5 = puVar3;
    func_0x00010c0e00e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0d3c80();
    _objc_release(puVar5);
    _objc_release(puVar4);
LAB_10b5fb97c:
    puVar4 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) goto LAB_10b5fb9d4;
    puVar7 = puVar3;
    func_0x00010c0e00e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar7;
    func_0x00010c0d3c80();
    _objc_release(puVar7);
    _objc_release(puVar4);
LAB_10b5fb9ec:
    puVar4 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      puVar8 = puVar3;
      func_0x00010c0e00e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar8;
      func_0x00010c0d3c80();
      _objc_release(puVar8);
      _objc_release(puVar4);
      goto LAB_10b5fba5c;
    }
  }
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
LAB_10b5fba5c:
  _objc_retain(param_1);
  lVar9 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar9 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar14 = *(long *)(lVar13 * 8);
      FUN_10b5fa414(lVar14);
      func_0x00010c0df760(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6);
      _objc_release(puVar4);
      lVar10 = lVar14;
      func_0x00010c15fa20();
      _objc_retainAutoreleasedReturnValue();
      if (lVar10 == 0) {
        uVar11 = 0xffffffff9f128b37;
        func_0x00010b77c6b4(0xffffffff9f128b37);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar5);
        _objc_release(uVar11);
      }
      else {
        func_0x00010befa120(puVar5);
      }
      _objc_release(lVar10);
      func_0x00010c273740(lVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar7);
      _objc_release(lVar14);
      lVar13 = lVar13 + 1;
    } while (lVar9 != lVar13);
    lVar9 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  puVar4 = puVar6;
  func_0x00010bf51e00(puVar6);
  func_0x00010c1d0640(puVar3);
  _objc_release(puVar4);
  puVar4 = puVar5;
  func_0x00010bf51e00(puVar5);
  func_0x00010c1d0640(puVar3);
  _objc_release(puVar4);
  puVar4 = puVar7;
  func_0x00010bf51e00(puVar7);
  func_0x00010c1d0640(puVar3);
  _objc_release(puVar4);
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    uVar11 = 0xffffffff9f8c09ae;
    if (param_1 != 2) {
      uVar11 = 0xffffffff9f128b37;
    }
    uVar1 = 0x4f78090a;
    if (param_1 != 1) {
      uVar1 = uVar11;
    }
    func_0x00010b77c6b4(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5fbca8; end: 10b5fbceb;  */

void FUN_10b5fbca8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0xffffffff9f8c09ae;
  if (param_1 != 2) {
    uVar1 = 0xffffffff9f128b37;
  }
  uVar2 = 0x4f78090a;
  if (param_1 != 1) {
    uVar2 = uVar1;
  }
  func_0x00010b77c6b4(uVar2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5fbcec; end: 10b5fc0e7;  */

undefined * FUN_10b5fbcec(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 == (undefined *)0x0) {
    puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar11 = param_2;
    func_0x00010c0d3c80();
  }
  if (puVar11 == (undefined *)0x0) {
LAB_10b5fbdc0:
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar11 != (undefined *)0x0) goto LAB_10b5fbdd8;
LAB_10b5fbe30:
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar11 != (undefined *)0x0) goto LAB_10b5fbe48;
LAB_10b5fbea0:
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = puVar11;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) goto LAB_10b5fbdc0;
    puVar2 = puVar11;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0d3c80();
    _objc_release(puVar2);
    _objc_release(puVar1);
LAB_10b5fbdd8:
    puVar1 = puVar11;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) goto LAB_10b5fbe30;
    puVar4 = puVar11;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010c0d3c80();
    _objc_release(puVar4);
    _objc_release(puVar1);
LAB_10b5fbe48:
    puVar1 = puVar11;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) goto LAB_10b5fbea0;
    puVar5 = puVar11;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010c0d3c80();
    _objc_release(puVar5);
    _objc_release(puVar1);
  }
  _objc_retain(param_1);
  lVar6 = param_1;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(param_1);
      }
      lVar13 = *(long *)(lVar10 * 8);
      lVar12 = lVar13;
      func_0x00010c0c6c20(lVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14c720(puVar3);
      _objc_release(lVar12);
      lVar12 = lVar13;
      func_0x00010c0c5040();
      _objc_retainAutoreleasedReturnValue();
      if (lVar12 == 0) {
        uVar7 = 0xffffffff9f128b37;
        func_0x00010b77c6b4();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(uVar7);
      }
      else {
        func_0x00010befa120(puVar2);
      }
      _objc_release(lVar12);
      func_0x00010c273740(lVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar4);
      _objc_release(lVar13);
      lVar10 = lVar10 + 1;
    } while (lVar6 != lVar10);
    lVar6 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  puVar1 = puVar3;
  func_0x00010bf51e00(puVar3);
  func_0x00010c1d0640(puVar11);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010bf51e00(puVar2);
  func_0x00010c1d0640(puVar11);
  _objc_release(puVar1);
  puVar1 = puVar4;
  func_0x00010bf51e00(puVar4);
  func_0x00010c1d0640(puVar11);
  _objc_release(puVar1);
  puVar1 = puVar11;
  func_0x00010bf51e00(puVar11);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar11);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_1 == 0) {
LAB_10b5fc234:
    puVar11 = (undefined *)0x0;
    goto LAB_10b5fc2f4;
  }
  lVar6 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010bf529e0();
  if (lVar8 == 0) {
    lVar8 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar8;
    func_0x00010bf529e0();
    _objc_release(lVar8);
    _objc_release(lVar6);
    if (lVar10 == 0) goto LAB_10b5fc234;
  }
  else {
    _objc_release(lVar6);
  }
  lVar10 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar10;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(lVar10);
      }
      lVar13 = *(long *)(lVar12 * 8);
      func_0x00010c067ec0();
      FUN_10b5f9f38();
      if (lVar13 != 9999) {
        _objc_release(lVar10);
        lVar10 = param_1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar10;
        func_0x00010bf52a60();
        lVar6 = lRam0000000000000000;
        if (lVar8 == 0) goto LAB_10b5fc2e0;
        goto LAB_10b5fc28c;
      }
      lVar12 = lVar12 + 1;
    } while (lVar6 != lVar12);
    lVar6 = lVar10;
    func_0x00010bf52a60();
  }
  goto LAB_10b5fc2e0;
LAB_10b5fc28c:
  do {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(lVar10);
      }
      lVar13 = *(long *)(lVar12 * 8);
      func_0x00010b77c58c();
      if (lVar13 != 0) {
        puVar11 = (undefined *)0x0;
        goto LAB_10b5fc2ec;
      }
      lVar12 = lVar12 + 1;
    } while (lVar8 != lVar12);
    lVar8 = lVar10;
    func_0x00010bf52a60();
  } while (lVar8 != 0);
LAB_10b5fc2e0:
  puVar11 = (undefined *)0x1;
LAB_10b5fc2ec:
  _objc_release(lVar10);
LAB_10b5fc2f4:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar11;
  }
  ___stack_chk_fail();
  if (param_1 - 7U < 2) {
    puVar11 = PTR_PTR_1126b2930;
    func_0x00010bf5e640(PTR_PTR_1126b2930);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar11;
    func_0x00010c07e1c0();
    _objc_release(puVar11);
    return puVar1;
  }
  return (undefined *)0x1;
}



/* Entry: 10b5fc0e8; end: 10b5fc337;  */

undefined * FUN_10b5fc0e8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_158 [128];
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_1 == 0) {
LAB_10b5fc234:
    puVar5 = (undefined *)0x0;
    goto LAB_10b5fc2f4;
  }
  lVar1 = param_1;
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110db9478);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110f671b8);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar6 == 0) goto LAB_10b5fc234;
  }
  else {
    _objc_release(lVar1);
  }
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  lStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  plStack_190 = (long *)0x0;
  lVar1 = param_1;
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110db9478);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_190;
    do {
      lVar7 = 0;
      do {
        if (*plStack_190 != lVar6) {
          _objc_enumerationMutation(lVar1);
        }
        lVar3 = *(long *)(lStack_198 + lVar7 * 8);
        func_0x00010c067ec0();
        FUN_10b5f9f38();
        if (lVar3 != 9999) {
          _objc_release(lVar1);
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          uStack_1a8 = 0;
          uStack_1b0 = 0;
          lStack_1d8 = 0;
          uStack_1e0 = 0;
          uStack_1c8 = 0;
          plStack_1d0 = (long *)0x0;
          lVar1 = param_1;
          func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ee3018);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar1;
          func_0x00010bf52a60();
          if (lVar2 == 0) goto LAB_10b5fc2e0;
          lVar6 = *plStack_1d0;
          goto LAB_10b5fc28c;
        }
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_1a0,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  goto LAB_10b5fc2e0;
LAB_10b5fc28c:
  do {
    lVar7 = 0;
    do {
      if (*plStack_1d0 != lVar6) {
        _objc_enumerationMutation(lVar1);
      }
      lVar3 = *(long *)(lStack_1d8 + lVar7 * 8);
      func_0x00010b77c58c();
      if (lVar3 != 0) {
        puVar5 = (undefined *)0x0;
        goto LAB_10b5fc2ec;
      }
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = lVar1;
    func_0x00010bf52a60(lVar1,param_2,&uStack_1e0,auStack_158,0x10);
  } while (lVar2 != 0);
LAB_10b5fc2e0:
  puVar5 = (undefined *)0x1;
LAB_10b5fc2ec:
  _objc_release(lVar1);
LAB_10b5fc2f4:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar5;
  }
  ___stack_chk_fail();
  if (1 < param_1 - 7U) {
    return (undefined *)0x1;
  }
  puVar5 = PTR_PTR_1126b2930;
  func_0x00010bf5e640(PTR_PTR_1126b2930);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010c07e1c0();
  _objc_release(puVar5);
  return puVar4;
}



/* Entry: 10b5fc338; end: 10b5fc38f;  */

undefined * FUN_10b5fc338(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_1 - 7U < 2) {
    puVar1 = PTR_PTR_1126b2930;
    func_0x00010bf5e640(PTR_PTR_1126b2930);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c07e1c0();
    _objc_release(puVar1);
    return puVar2;
  }
  return (undefined *)0x1;
}



/* Entry: 10b5fc390; end: 10b5fc5e3;  */

ulong FUN_10b5fc390(ulong param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 == 0) {
    uVar8 = 1;
  }
  else {
    func_0x00010c2457c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (uVar6 != 0) {
      uVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(uVar3);
        }
        iVar2 = (int)*(undefined8 *)(uVar7 * 8);
        func_0x00010c067ec0();
        FUN_10b5f9f38();
        FUN_10b5fc338();
        if (iVar2 == 0) {
          uVar8 = 0;
          goto LAB_10b5fc560;
        }
        uVar7 = uVar7 + 1;
      } while (uVar6 != uVar7);
      uVar6 = uVar3;
      func_0x00010bf52a60();
    }
    _objc_release(uVar3);
    if (lRam00000001137f73f0 != -1) {
      func_0x000107c27d9c(0x1137f73f0,&PTR___NSConcreteGlobalBlock_110d25f60);
    }
    uVar8 = 1;
    if ((param_1 != 0) && ((bRam00000001137f73e8 & 1) == 0)) {
      uVar6 = param_1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar6;
      func_0x00010bf529e0();
      _objc_release(uVar6);
      if (uVar3 != 0) {
        uVar3 = param_1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar3;
        func_0x00010bf529e0();
        if (uVar6 == 1) {
          uVar6 = param_1;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = 0xffffffff9f8c09ae;
          func_0x00010b77c6b4();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010bf4b900();
          if ((int)uVar7 != 0) {
            if (lRam00000001137f73f0 != -1) {
              func_0x000107c27d9c(0x1137f73f0,&PTR___NSConcreteGlobalBlock_110d25f60);
            }
            uVar8 = (uint)bRam00000001137f73e8;
          }
          _objc_release(uVar4);
          _objc_release(uVar6);
        }
LAB_10b5fc560:
        _objc_release(uVar3);
      }
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return (ulong)(uVar8 & 1);
  }
  ___stack_chk_fail();
  _objc_retain();
  if (param_1 == 0) {
    uVar6 = 1;
  }
  else {
    uVar6 = param_1;
    func_0x00010bfbdda0();
    FUN_10b5fa33c();
    if ((uVar6 == 9999) || (uVar6 = param_1, func_0x00010bf977c0(), (int)uVar6 == -9999)) {
      uVar6 = 0;
    }
    else {
      uVar3 = param_1;
      func_0x00010c2457c0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      FUN_10b5fc0e8();
      if ((uVar6 & 1) == 0) {
        uVar6 = param_1;
        FUN_10b5fc390(param_1);
      }
      else {
        uVar6 = 0;
      }
      _objc_release(uVar3);
    }
  }
  _objc_release(param_1);
  return uVar6;
}



/* Entry: 10b5fc5e4; end: 10b5fc68f;  */

ulong FUN_10b5fc5e4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain();
  if (param_1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = param_1;
    func_0x00010bfbdda0();
    FUN_10b5fa33c();
    if ((uVar2 == 9999) || (uVar2 = param_1, func_0x00010bf977c0(), (int)uVar2 == -9999)) {
      uVar2 = 0;
    }
    else {
      uVar1 = param_1;
      func_0x00010c2457c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      FUN_10b5fc0e8();
      if ((uVar2 & 1) == 0) {
        uVar2 = param_1;
        FUN_10b5fc390(param_1);
      }
      else {
        uVar2 = 0;
      }
      _objc_release(uVar1);
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b5fc690; end: 10b5fc6ef;  */

long FUN_10b5fc690(long param_1)

{
  long lVar1;
  
  _objc_retain();
  if (param_1 == 0) {
    lVar1 = 1;
  }
  else {
    lVar1 = param_1;
    FUN_10b5fa088();
    if (lVar1 == 9999) {
      lVar1 = 0;
    }
    else {
      lVar1 = param_1;
      FUN_10b5fa5d4(param_1);
    }
  }
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 10b5fc6f0; end: 10b5fc767;  */

uint FUN_10b5fc6f0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  if ((param_1 == 0) || (lVar1 = param_1, func_0x00010b5fb758(), lVar1 != 3)) {
    uVar3 = 0;
  }
  else {
    puVar2 = PTR_PTR_1126ba150;
    func_0x00010bf66c00(PTR_PTR_1126ba150);
    uVar3 = (uint)puVar2 ^ 1;
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 10b5fc768; end: 10b5fca27;  */

undefined8 FUN_10b5fc768(long param_1)

{
  if (param_1 - 1U < 0x12) {
    return *(undefined8 *)(&UNK_10e5d22f0 + (param_1 - 1U) * 8);
  }
  return 0;
}



/* Entry: 10b5fca28; end: 10b5fca53;  */

void FUN_10b5fca28(void)

{
  int iVar1;
  
  iVar1 = 0x68766331;
  _VTIsHardwareDecodeSupported();
  uRam00000001137f73e8 = iVar1 != 0;
  return;
}



/* Entry: 10b5fca54; end: 10b5fcb1b;  */

void FUN_10b5fca54(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar2 = param_2;
  if ((param_1 == 0) || (lVar1 = param_1, func_0x00010bf529e0(), lVar1 == 0)) {
    _objc_retain(param_2);
  }
  else {
    _objc_retain(param_1);
    func_0x00010c246ca0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b5fcb1c; end: 10b5fcc73;  */

long FUN_10b5fcb1c(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar4 = *(long *)(param_1 + 0x20);
  lVar5 = param_2;
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = *(long *)(param_1 + 0x20);
  uVar1 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if ((lVar4 == 0) || (lVar5 == 0)) {
    lVar3 = 1;
    if (lVar4 != 0) {
      lVar3 = -1;
    }
    if (lVar4 == 0 && lVar5 == 0) {
      lVar2 = param_2;
      func_0x00010bf59960(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010bf59960(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf433a0(lVar2);
      _objc_release(uVar1);
      _objc_release(lVar2);
    }
  }
  else {
    lVar3 = lVar4;
    func_0x00010bf433a0(lVar4);
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_3);
  _objc_release(param_2);
  return lVar3;
}



/* Entry: 10b5fcc74; end: 10b5fcde3;  */

void FUN_10b5fcc74(ulong param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar7 = param_2;
  func_0x00010bf529e0();
  if (uVar7 != 0) {
    uVar7 = 0;
    do {
      uVar2 = param_2;
      func_0x00010c0dfd40(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c071ae0();
      _objc_release(puVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      if ((uVar6 & 1) == 0) {
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c241220(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(puVar1);
        _objc_release(uVar3);
        _objc_release(puVar5);
      }
      _objc_release(uVar2);
      uVar7 = uVar7 + 1;
      uVar2 = param_2;
      func_0x00010bf529e0();
    } while (uVar7 < uVar2);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b5fcde4; end: 10b5fd0ff;  */

void FUN_10b5fcde4(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar5 = param_1;
  func_0x00010bf529e0();
  if (uVar5 != 0) {
    uVar5 = 0;
    do {
      uVar2 = param_1;
      func_0x00010c0dfd40(param_1,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c241220(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar1,param_2,puVar3,uVar4);
      _objc_release(uVar4);
      _objc_release(puVar3);
      _objc_release(uVar2);
      uVar5 = uVar5 + 1;
      uVar2 = param_1;
      func_0x00010bf529e0();
    } while (uVar5 < uVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b5fd100; end: 10b5fd187;  */

void FUN_10b5fd100(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c067fc0(uVar2);
  func_0x00010c0df840(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b5fd188; end: 10b5fd583;  */

ulong FUN_10b5fd188(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  if (param_2 == 0) {
    uVar10 = 0;
  }
  else {
    if (param_4 == 0) {
      lVar11 = 0;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_4);
      lVar11 = param_4;
      func_0x00010bf52a60();
      lVar4 = lRam0000000000000000;
      while (lVar11 != 0) {
        lVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar4) {
            _objc_enumerationMutation(param_4);
          }
          uVar2 = *(undefined8 *)(lVar8 * 8);
          func_0x00010c086560(uVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(uVar2);
          lVar8 = lVar8 + 1;
        } while (lVar11 != lVar8);
        lVar11 = param_4;
        func_0x00010bf52a60();
      }
      _objc_release(param_4);
      lVar11 = param_4;
      func_0x00010c0d3c80();
      lVar3 = param_1;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf52a60();
      lVar8 = lRam0000000000000000;
      while (lVar4 != 0) {
        lVar9 = 0;
        do {
          if (lRam0000000000000000 != lVar8) {
            _objc_enumerationMutation(lVar3);
          }
          uVar2 = *(undefined8 *)(lVar9 * 8);
          func_0x00010c086560(uVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar1;
          func_0x00010bf4b900();
          _objc_release(uVar2);
          if (((ulong)puVar5 & 1) == 0) {
            func_0x00010befa120(lVar11);
          }
          lVar9 = lVar9 + 1;
        } while (lVar4 != lVar9);
        lVar4 = lVar3;
        func_0x00010bf52a60();
      }
      _objc_release(lVar3);
      _objc_release(param_4);
      _objc_release(puVar1);
    }
    uVar2 = *(undefined8 *)PTR__AVAssetExportPresetPassthrough_110347ec8;
    _objc_retain(uVar2);
    puVar1 = PTR__OBJC_CLASS___AVAssetExportSession_1126b0d60;
    _objc_alloc();
    func_0x00010bff4280();
    lVar4 = lVar11;
    func_0x00010bf529e0();
    if (lVar4 == 0) {
      lVar4 = param_1;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010c1d6fc0(puVar1);
      _objc_release(lVar4);
    }
    else {
      func_0x00010c1d6fc0(puVar1);
    }
    func_0x00010c1d7200(puVar1);
    func_0x00010c200aa0(puVar1);
    func_0x00010c1c73c0(puVar1);
    uVar6 = 0;
    _dispatch_semaphore_create();
    _objc_retain();
    func_0x00010bf9cee0(puVar1);
    _dispatch_semaphore_wait(uVar6,0xffffffffffffffff);
    if (param_5 != (undefined8 *)0x0) {
      puVar5 = puVar1;
      func_0x00010bf987e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_5 = puVar5;
    }
    puVar5 = puVar1;
    func_0x00010c252d60(puVar1);
    uVar10 = (ulong)(puVar5 == (undefined *)0x3);
    _objc_release(uVar6);
    _objc_release(uVar6);
    _objc_release(puVar1);
    _objc_release(uVar2);
    param_4 = lVar11;
  }
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return uVar10;
  }
  ___stack_chk_fail();
  uVar10 = *(ulong *)(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(uVar10);
  return uVar10;
}



/* Entry: 10b5fd584; end: 10b5fd58b;  */

void FUN_10b5fd584(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b5fd58c; end: 10b5fd593; -[SCGalleryEntry galleryItemType] */

undefined8 FUN_10b5fd58c(void)

{
  return 1;
}



/* Entry: 10b5fd594; end: 10b5fd597; -[SCGalleryEntry galleryItemIdentifier] */

void FUN_10b5fd594(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_entryId_1125c3628);
  return;
}



/* Entry: 10b5fd598; end: 10b5fd59b; -[SCGalleryEntry galleryItemCreateTime] */

void FUN_10b5fd598(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf59970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_createTimeUtc_1125b4000);
  return;
}



/* Entry: 10b5fd59c; end: 10b5fd5a3; -[SCMemoriesCRFeaturedStory galleryItemType] */

undefined8 FUN_10b5fd59c(void)

{
  return 3;
}



/* Entry: 10b5fd5a4; end: 10b5fd5a7; -[SCMemoriesCRFeaturedStory galleryItemIdentifier] */

void FUN_10b5fd5a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_identifier_1125d7178);
  return;
}



/* Entry: 10b5fd5a8; end: 10b5fd5bf; -[SCMemoriesCRFeaturedStory galleryItemCreateTime] */

undefined8 FUN_10b5fd5a8(void)

{
  return 0;
}



/* Entry: 10b5fd5c0; end: 10b5fd5f7;  */

undefined8 FUN_10b5fd5c0(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010c0fce40();
  func_0x00010c0fcaa0();
  uVar1 = 3;
  if (uVar2 <= param_1) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10b5fd5f8; end: 10b5fd64f;  */

void FUN_10b5fd5f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  uStack_28 = 0x10b5fd894;
  puStack_20 = &UNK_110d25fe0;
  uStack_18 = param_2;
  func_0x00010c14cca0(param_1,param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5fd650; end: 10b5fd797;  */

long FUN_10b5fd650(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  lVar7 = 0;
  if (lVar1 != 0) {
    do {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(param_1);
        }
        uVar2 = *(ulong *)(lVar7 * 8);
        func_0x00010bfbd0e0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        if ((uVar3 & 1) != 0) {
          lVar7 = 1;
          goto LAB_10b5fd744;
        }
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = param_1;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    lVar7 = 0;
  }
LAB_10b5fd744:
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(lVar4);
    lVar7 = param_1;
    func_0x00010bf529e0();
    lVar6 = 0x7fffffffffffffff;
    if ((lVar4 != 0) && (lVar7 != 0)) {
      _objc_retain(lVar4);
      lVar6 = param_1;
      func_0x00010bfece40(param_1);
      _objc_release(lVar4);
    }
    _objc_release(lVar4);
    _objc_release(param_1);
    return lVar6;
  }
  return lVar7;
}



/* Entry: 10b5fd798; end: 10b5fd84b;  */

long FUN_10b5fd798(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010bf529e0();
  lVar2 = 0x7fffffffffffffff;
  if ((param_2 != 0) && (lVar1 != 0)) {
    _objc_retain(param_2);
    lVar2 = param_1;
    func_0x00010bfece40(param_1);
    _objc_release(param_2);
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 10b5fd84c; end: 10b5fd8bf;  */

undefined8 FUN_10b5fd84c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfbd0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 10b5fd8c0; end: 10b5fda0f; -[SCDreamsMetadata initWithCoder:] */

undefined1 * FUN_10b5fd8c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127066a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b5fda10; end: 10b5fdb7b; -[SCDreamsMetadata initWithDreamsPackId:dreamId:userIds:identityIds:generationId:lensId:] */

undefined1 *
FUN_10b5fda10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1127066a0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b5fdb7c; end: 10b5fdb9f; -[SCDreamsMetadata copyWithZone:] */

undefined8 FUN_10b5fdb7c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b5fdba0; end: 10b5fdc4f; -[SCDreamsMetadata encodeWithCoder:] */

void FUN_10b5fdba0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f673f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f58538);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f67418);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f67438);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f67458);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110eeb138);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b5fdc50; end: 10b5fdcf3; -[SCDreamsMetadata hash] */

undefined8 * FUN_10b5fdc50(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b5fddd4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b5fdde0;
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
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[5];
              if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                puVar6 = (undefined8 *)puVar3[6];
                if (puVar6 != (undefined8 *)param_3[6]) {
                  func_0x00010c071ae0();
                  goto LAB_10b5fdde0;
                }
                goto LAB_10b5fddd4;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b5fdde0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b5fdcf4; end: 10b5fddfb; -[SCDreamsMetadata isEqual:] */

long FUN_10b5fdcf4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b5fddd4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b5fdde0;
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
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if (lVar3 != *(long *)(param_3 + 0x30)) {
                  func_0x00010c071ae0();
                  goto LAB_10b5fdde0;
                }
                goto LAB_10b5fddd4;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b5fdde0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b5fddfc; end: 10b5fde03; -[SCDreamsMetadata dreamsPackId] */

undefined8 FUN_10b5fddfc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b5fde04; end: 10b5fde0b; -[SCDreamsMetadata dreamId] */

undefined8 FUN_10b5fde04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b5fde0c; end: 10b5fde13; -[SCDreamsMetadata userIds] */

undefined8 FUN_10b5fde0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b5fde14; end: 10b5fde1b; -[SCDreamsMetadata identityIds] */

undefined8 FUN_10b5fde14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b5fde1c; end: 10b5fde23; -[SCDreamsMetadata generationId] */

undefined8 FUN_10b5fde1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b5fde24; end: 10b5fde2b; -[SCDreamsMetadata lensId] */

undefined8 FUN_10b5fde24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b5fde2c; end: 10b5fde8b; -[SCDreamsMetadata .cxx_destruct] */

void FUN_10b5fde2c(long param_1)

{
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



/* Entry: 10b5fde8c; end: 10b5fe093; -[SCMemoriesClientGenEventModel initWithGalleryEntry:crFeaturedStory:activationTimeUtc:groupCount:lensId:templateId:setId:generationId:clientProcessingBitMaskType:snapId:groupName:videoCreateSessionId:] */

undefined8 *
FUN_10b5fde8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1127066a8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    puVar1[3] = param_5;
    puVar1[4] = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    puVar1[9] = param_11;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b5fe094; end: 10b5fe0b7; -[SCMemoriesClientGenEventModel copyWithZone:] */

undefined8 FUN_10b5fe094(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b5fe0b8; end: 10b5fe193; -[SCMemoriesClientGenEventModel hash] */

undefined8 * FUN_10b5fe0b8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_88 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x18);
  uStack_70 = *(undefined8 *)(param_1 + 0x20);
  lStack_78 = -lVar5;
  if (-1 < lVar5) {
    lStack_78 = lVar5;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uStack_48 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_88;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,0xc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b5fe2ec:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b5fe2f8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((puVar3[3] == param_3[3] && (puVar3[4] == param_3[4])) && (puVar3[9] == param_3[9])))) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[5];
          if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[6];
            if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[7];
              if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[8];
                if ((lVar5 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = puVar3[10];
                  if ((lVar5 == param_3[10]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = puVar3[0xb];
                    if ((lVar5 == param_3[0xb]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      puVar6 = (undefined8 *)puVar3[0xc];
                      if (puVar6 != (undefined8 *)param_3[0xc]) {
                        func_0x00010c071ae0();
                        goto LAB_10b5fe2f8;
                      }
                      goto LAB_10b5fe2ec;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b5fe2f8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b5fe194; end: 10b5fe313; -[SCMemoriesClientGenEventModel isEqual:] */

long FUN_10b5fe194(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b5fe2ec:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b5fe2f8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
         (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x50);
                  if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x58);
                    if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x60);
                      if (lVar3 != *(long *)(param_3 + 0x60)) {
                        func_0x00010c071ae0();
                        goto LAB_10b5fe2f8;
                      }
                      goto LAB_10b5fe2ec;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b5fe2f8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b5fe314; end: 10b5fe31b; -[SCMemoriesClientGenEventModel galleryEntry] */

undefined8 FUN_10b5fe314(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b5fe31c; end: 10b5fe323; -[SCMemoriesClientGenEventModel crFeaturedStory] */

undefined8 FUN_10b5fe31c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b5fe324; end: 10b5fe32b; -[SCMemoriesClientGenEventModel activationTimeUtc] */

undefined8 FUN_10b5fe324(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b5fe32c; end: 10b5fe333; -[SCMemoriesClientGenEventModel groupCount] */

undefined8 FUN_10b5fe32c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b5fe334; end: 10b5fe33b; -[SCMemoriesClientGenEventModel lensId] */

undefined8 FUN_10b5fe334(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b5fe33c; end: 10b5fe343; -[SCMemoriesClientGenEventModel templateId] */

undefined8 FUN_10b5fe33c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b5fe344; end: 10b5fe34b; -[SCMemoriesClientGenEventModel setId] */

undefined8 FUN_10b5fe344(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b5fe34c; end: 10b5fe353; -[SCMemoriesClientGenEventModel generationId] */

undefined8 FUN_10b5fe34c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b5fe354; end: 10b5fe35b; -[SCMemoriesClientGenEventModel clientProcessingBitMaskType] */

undefined8 FUN_10b5fe354(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b5fe35c; end: 10b5fe363; -[SCMemoriesClientGenEventModel snapId] */

undefined8 FUN_10b5fe35c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b5fe364; end: 10b5fe36b; -[SCMemoriesClientGenEventModel groupName] */

undefined8 FUN_10b5fe364(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b5fe36c; end: 10b5fe373; -[SCMemoriesClientGenEventModel videoCreateSessionId] */

undefined8 FUN_10b5fe36c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b5fe374; end: 10b5fe3f7; -[SCMemoriesClientGenEventModel .cxx_destruct] */

void FUN_10b5fe374(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5fe3f8; end: 10b5fe5e3; -[SCExternalShareMediaConfiguration initWithMedia:mediaContent:mediaType:preferSharingOnlyText:forceEnableCopyLink:hasWatermark:watermarkProfile:generateWatermarkedMedia:generateWatermarkedMediaContent:mediaTypeLoggingOverride:productMediaTypeSource:dreamsMetadata:isMediaGeneratedByTextToImage:isEditedMemory:] */

undefined8 *
FUN_10b5fe3f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined4 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1127066b0;
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
    *(undefined1 *)(puVar1 + 1) = param_6;
    puVar1[6] = param_5;
    puVar1[7] = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    uVar2 = param_10;
    _objc_retainBlock();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    _objc_retainBlock();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
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
    *(undefined1 *)((long)puVar1 + 10) = (undefined1)param_15;
    *(undefined1 *)((long)puVar1 + 0xb) = param_15._1_1_;
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b5fe5e4; end: 10b5fe5eb; -[SCExternalShareMediaConfiguration media] */

undefined8 FUN_10b5fe5e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b5fe5ec; end: 10b5fe5f3; -[SCExternalShareMediaConfiguration mediaContent] */

undefined8 FUN_10b5fe5ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b5fe5f4; end: 10b5fe5fb; -[SCExternalShareMediaConfiguration generateWatermarkedMedia] */

undefined8 FUN_10b5fe5f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b5fe5fc; end: 10b5fe603; -[SCExternalShareMediaConfiguration generateWatermarkedMediaContent] */

undefined8 FUN_10b5fe5fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b5fe604; end: 10b5fe60b; -[SCExternalShareMediaConfiguration mediaType] */

undefined8 FUN_10b5fe604(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b5fe60c; end: 10b5fe613; -[SCExternalShareMediaConfiguration preferSharingOnlyText] */

undefined1 FUN_10b5fe60c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b5fe614; end: 10b5fe61b; -[SCExternalShareMediaConfiguration forceEnableCopyLink] */

undefined8 FUN_10b5fe614(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b5fe61c; end: 10b5fe623; -[SCExternalShareMediaConfiguration hasWatermark] */

undefined1 FUN_10b5fe61c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b5fe624; end: 10b5fe62b; -[SCExternalShareMediaConfiguration watermarkProfile] */

undefined8 FUN_10b5fe624(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b5fe62c; end: 10b5fe633; -[SCExternalShareMediaConfiguration mediaTypeLoggingOverride] */

undefined8 FUN_10b5fe62c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b5fe634; end: 10b5fe63b; -[SCExternalShareMediaConfiguration productMediaTypeSource] */

undefined8 FUN_10b5fe634(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b5fe63c; end: 10b5fe643; -[SCExternalShareMediaConfiguration dreamsMetadata] */

undefined8 FUN_10b5fe63c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b5fe644; end: 10b5fe64b; -[SCExternalShareMediaConfiguration isMediaGeneratedByTextToImage] */

undefined1 FUN_10b5fe644(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b5fe64c; end: 10b5fe653; -[SCExternalShareMediaConfiguration isEditedMemory] */

undefined1 FUN_10b5fe64c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10b5fe654; end: 10b5fe6cb; -[SCExternalShareMediaConfiguration .cxx_destruct] */

void FUN_10b5fe654(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b5fe6cc; end: 10b5fe76f; -[SCExternalShareMediaContent initWithLazyFutureMedia:snapIds:] */

undefined1 *
FUN_10b5fe6cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127066b8;
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



/* Entry: 10b5fe770; end: 10b5fe777; -[SCExternalShareMediaContent lazyFutureMedia] */

undefined8 FUN_10b5fe770(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b5fe778; end: 10b5fe77f; -[SCExternalShareMediaContent snapIds] */

undefined8 FUN_10b5fe778(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b5fe780; end: 10b5fe7af; -[SCExternalShareMediaContent .cxx_destruct] */

void FUN_10b5fe780(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5fe7b0; end: 10b5fe873; +[SCExternalShareMedia imageWithImage:customFilename:lensId:] */

void FUN_10b5fe7b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b1c68;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b5fe874; end: 10b5fe93f; +[SCExternalShareMedia videoWithVideo:customFilename:lensId:] */

void FUN_10b5fe874(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b1c68;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b5fe940; end: 10b5fe963; -[SCExternalShareMedia copyWithZone:] */

undefined8 FUN_10b5fe940(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


