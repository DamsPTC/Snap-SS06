/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10643f6d4; end: 10643f763;  */

void FUN_10643f6d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfe9ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf24ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_10643f378();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10643f764; end: 10643f767;  */

void FUN_10643f764(void)

{
  return;
}



/* Entry: 10643f768; end: 10643f8f3;  */

byte FUN_10643f768(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b8c98;
  func_0x00010bfb4e00();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR_PTR_1126c2118;
    _objc_opt_class(PTR_PTR_1126c2118);
    uVar2 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    puVar1 = PTR_PTR_1126c2118;
    if ((uVar2 & 1) == 0) {
      bVar4 = 0;
    }
    else {
      _objc_retain(param_1);
      _objc_opt_class(puVar1);
      uVar3 = param_1;
      _objc_opt_isKindOfClass(param_1,puVar1);
      uVar2 = param_1;
      if ((uVar3 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(param_1);
      puStack_48 = &uStack_50;
      uStack_50 = 0;
      uStack_40 = 0x2020000000;
      uStack_38 = 0;
      func_0x00010c0bdf40(uVar2);
      bVar4 = *(byte *)(puStack_48 + 3);
      __Block_object_dispose(&uStack_50,8);
      _objc_release(uVar2);
    }
  }
  else {
    bVar4 = 1;
  }
  _objc_release(param_1);
  return bVar4 & 1;
}



/* Entry: 10643f8f4; end: 10643f957;  */

void FUN_10643f8f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfe9ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11a980();
  *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10643f958; end: 10643f96b;  */

void FUN_10643f958(void)

{
  return;
}



/* Entry: 10643f96c; end: 10643f9cf;  */

void FUN_10643f96c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfe9ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11a980();
  *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10643f9d0; end: 10643f9d3;  */

void FUN_10643f9d0(void)

{
  return;
}



/* Entry: 10643f9d4; end: 10643fa17;  */

void FUN_10643f9d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c078f60();
  *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10643fa18; end: 10643fa2b;  */

void FUN_10643fa18(void)

{
  return;
}



/* Entry: 10643fa2c; end: 10643fa6f;  */

void FUN_10643fa2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c078f60();
  *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10643fa70; end: 10643fa73;  */

void FUN_10643fa70(void)

{
  return;
}



/* Entry: 10643fa74; end: 10643fca7;  */

uint FUN_10643fa74(ulong param_1,undefined8 param_2,int param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar2 = param_1;
  FUN_10643f3dc();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fa60();
  if (uVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar3 = param_1;
    FUN_10643f768();
    if ((uVar3 & 1) == 0) {
      func_0x000108534aa8();
      uVar7 = 0;
      if ((param_3 - 0x2dU < 0x3a) &&
         ((1L << ((ulong)(param_3 - 0x2dU) & 0x3f) & 0x200000040000001U) != 0)) {
        uVar4 = param_2;
        func_0x00010bf1f480(param_2);
        _objc_retain(param_1);
        puVar5 = PTR_PTR_1126c2118;
        _objc_opt_class(PTR_PTR_1126c2118);
        uVar3 = param_1;
        _objc_opt_isKindOfClass(param_1,puVar5);
        puVar5 = PTR_PTR_1126c2118;
        if ((uVar3 & 1) == 0) {
          uVar7 = 1;
        }
        else {
          _objc_retain(param_1);
          _objc_opt_class(puVar5);
          uVar6 = param_1;
          _objc_opt_isKindOfClass(param_1,puVar5);
          uVar3 = param_1;
          if ((uVar6 & 1) == 0) {
            uVar3 = 0;
          }
          _objc_retain(uVar3);
          _objc_release(param_1);
          puStack_58 = &uStack_60;
          uStack_60 = 0;
          uStack_50 = 0x2020000000;
          uStack_48 = 0;
          func_0x00010c0bdf40(uVar3);
          bVar1 = *(byte *)(puStack_58 + 3);
          __Block_object_dispose(&uStack_60,8);
          _objc_release(uVar3);
          uVar7 = bVar1 ^ 1;
        }
        _objc_release(param_1);
        uVar7 = (uint)uVar4 & uVar7;
      }
    }
    else {
      uVar7 = 1;
    }
  }
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar7;
}



/* Entry: 10643fca8; end: 10643fd0b;  */

undefined8 FUN_10643fca8(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  func_0x00010bf1f480();
  if (param_2 == 0) {
    uVar2 = 10;
  }
  else {
    uVar1 = param_1;
    FUN_10643f768();
    uVar2 = 10;
    if ((int)uVar1 == 0) {
      uVar2 = 0xc;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10643fd0c; end: 10643fe1b;  */

undefined8 FUN_10643fd0c(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c2118;
  _objc_opt_class(PTR_PTR_1126c2118);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  puVar1 = PTR_PTR_1126c2118;
  if ((uVar2 & 1) == 0) {
    uVar6 = 1;
  }
  else {
    _objc_retain(param_1);
    _objc_opt_class(puVar1);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    uVar2 = param_1;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_1);
    uVar3 = uVar2;
    func_0x000108539290();
    if ((int)uVar3 == 0) {
      uVar6 = 1;
    }
    else {
      uVar3 = uVar2;
      func_0x000108536f70();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c06f940();
      if ((int)uVar4 == 0) {
        uVar6 = 0xd;
      }
      else {
        uVar5 = param_2;
        func_0x00010bf1f480();
        uVar6 = 0xe;
        if ((int)uVar5 == 0) {
          uVar6 = 1;
        }
      }
      _objc_release(uVar3);
    }
    _objc_release(uVar2);
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar6;
}



/* Entry: 10643fe1c; end: 10643ff8f;  */

byte FUN_10643fe1c(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c2118;
  _objc_opt_class(PTR_PTR_1126c2118);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  puVar1 = PTR_PTR_1126c2118;
  if ((uVar2 & 1) == 0) {
    bVar4 = 0;
  }
  else {
    _objc_retain(param_1);
    _objc_opt_class(puVar1);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    uVar2 = param_1;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_1);
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    func_0x00010c0bdf40(uVar2);
    bVar4 = *(byte *)(puStack_48 + 3);
    __Block_object_dispose(&uStack_50,8);
    _objc_release(uVar2);
  }
  _objc_release(param_1);
  return bVar4 & 1;
}



/* Entry: 10643ff90; end: 10643ffe7;  */

void FUN_10643ff90(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bfe9ee0();
  _objc_retainAutoreleasedReturnValue();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar1 != 0;
  _objc_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10643ffe8; end: 10643fffb;  */

void FUN_10643ffe8(void)

{
  return;
}



/* Entry: 10643fffc; end: 106440053;  */

void FUN_10643fffc(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bfe9ee0();
  _objc_retainAutoreleasedReturnValue();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar1 != 0;
  _objc_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106440054; end: 106440057;  */

void FUN_106440054(void)

{
  return;
}



/* Entry: 106440058; end: 1064401d3;  */

void FUN_106440058(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  puVar4 = PTR_PTR_1126c2118;
  _objc_opt_class(PTR_PTR_1126c2118);
  uVar1 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar4);
  puVar4 = PTR_PTR_1126c2118;
  if ((uVar1 & 1) == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_1);
    _objc_opt_class(puVar4);
    uVar2 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar4);
    uVar1 = param_1;
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_1);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    _objc_retain();
    _objc_retain(puVar3);
    func_0x00010c0bdf40(uVar1);
    _objc_release(uVar1);
    puVar4 = puVar3;
    func_0x00010bf51e00(puVar3);
    _objc_release(puVar3);
    _objc_release(puVar3);
    _objc_release(puVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1064401d4; end: 10644055f;  */

void FUN_1064401d4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe9ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf24ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar4 != 0) {
    lVar1 = param_2;
    func_0x00010c25b340(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c0df840(puVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    puVar6 = PTR_PTR_1126b92c8;
    func_0x00010c23fa00(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010bf82560(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfe9ee0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf24ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_10643f378();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    puVar5 = PTR_PTR_1126b92c8;
    func_0x00010c116a20(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar7);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_2;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf45460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    lVar1 = param_2;
    func_0x00010bf82560(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf45460();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    puVar5 = PTR_PTR_1126b92c8;
    func_0x00010c0ecf40(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar7);
    _objc_release(puVar5);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    puVar5 = PTR_PTR_1126b92c8;
    func_0x00010c0ecfc0(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar7);
    _objc_release(puVar5);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    puVar5 = PTR_PTR_1126b92c8;
    func_0x00010c1057c0(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar7);
    _objc_release(puVar5);
    _objc_release(lVar1);
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_2;
  func_0x00010bf82560(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c080120();
  func_0x00010c0df6e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  puVar6 = PTR_PTR_1126b92c8;
  func_0x00010c260660(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106440560; end: 106440573;  */

void FUN_106440560(void)

{
  return;
}



/* Entry: 106440574; end: 10644083f;  */

void FUN_106440574(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe9ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf24ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar4 != 0) {
    lVar1 = param_2;
    func_0x00010c25b340(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c0df840(puVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    puVar6 = PTR_PTR_1126b92c8;
    func_0x00010c23fa00(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010bf82560(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfe9ee0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf24ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_10643f378();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    puVar5 = PTR_PTR_1126b92c8;
    func_0x00010c116a20(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar7);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_2;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf45460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    lVar1 = param_2;
    func_0x00010bf82560(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf45460();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    puVar5 = PTR_PTR_1126b92c8;
    func_0x00010c0ecf40(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar7);
    _objc_release(puVar5);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_2;
  func_0x00010bf82560(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c080120();
  func_0x00010c0df6e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  puVar6 = PTR_PTR_1126b92c8;
  func_0x00010c260660(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106440840; end: 106440843;  */

void FUN_106440840(void)

{
  return;
}



/* Entry: 106440844; end: 10644098b;  */

void FUN_106440844(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  puVar4 = PTR_PTR_1126c2118;
  _objc_opt_class(PTR_PTR_1126c2118);
  uVar1 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar4);
  puVar4 = PTR_PTR_1126c2118;
  if ((uVar1 & 1) == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_1);
    _objc_opt_class(puVar4);
    uVar2 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar4);
    uVar1 = param_1;
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_1);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    _objc_retain();
    func_0x00010c0bdf40(uVar1);
    _objc_release(uVar1);
    puVar4 = puVar3;
    func_0x00010bf51e00(puVar3);
    _objc_release(puVar3);
    _objc_release(puVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10644098c; end: 10644099b;  */

void FUN_10644098c(void)

{
  return;
}



/* Entry: 10644099c; end: 106440cf7;  */

void FUN_10644099c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe9ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf24ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar4 != 0) {
    lVar1 = param_2;
    func_0x00010c25b340(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c0df840(puVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    puVar6 = PTR_PTR_1126b92c8;
    func_0x00010c23fa00(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar8);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010bf82560(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfe9ee0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf24ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_10643f378();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    puVar5 = PTR_PTR_1126b92c8;
    func_0x00010c116a20(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar8);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar7 != 0) {
    lVar1 = param_2;
    func_0x00010c25b340(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    puVar5 = PTR_PTR_1126b92c8;
    func_0x00010c0ecfc0(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar8);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_2;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf45460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    lVar1 = param_2;
    func_0x00010bf82560(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf45460();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    puVar5 = PTR_PTR_1126b92c8;
    func_0x00010c0ecf40(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar8);
    _objc_release(puVar5);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106440cf8; end: 106440d03;  */

void FUN_106440cf8(void)

{
  return;
}



/* Entry: 106440d04; end: 106440e77;  */

byte FUN_106440d04(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c2118;
  _objc_opt_class(PTR_PTR_1126c2118);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  puVar1 = PTR_PTR_1126c2118;
  if ((uVar2 & 1) == 0) {
    bVar4 = 0;
  }
  else {
    _objc_retain(param_1);
    _objc_opt_class(puVar1);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    uVar2 = param_1;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_1);
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    func_0x00010c0bdf40(uVar2);
    bVar4 = *(byte *)(puStack_48 + 3);
    __Block_object_dispose(&uStack_50,8);
    _objc_release(uVar2);
  }
  _objc_release(param_1);
  return bVar4 & 1;
}



/* Entry: 106440e78; end: 106440eb7;  */

void FUN_106440e78(long param_1,long param_2)

{
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2 == 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106440eb8; end: 106440ee3;  */

void FUN_106440eb8(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106440ee4; end: 106441057;  */

byte FUN_106440ee4(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c2118;
  _objc_opt_class(PTR_PTR_1126c2118);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  puVar1 = PTR_PTR_1126c2118;
  if ((uVar2 & 1) == 0) {
    bVar4 = 0;
  }
  else {
    _objc_retain(param_1);
    _objc_opt_class(puVar1);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    uVar2 = param_1;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_1);
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    func_0x00010c0bdf40(uVar2);
    bVar4 = *(byte *)(puStack_48 + 3);
    __Block_object_dispose(&uStack_50,8);
    _objc_release(uVar2);
  }
  _objc_release(param_1);
  return bVar4 & 1;
}



/* Entry: 106441058; end: 106441097;  */

void FUN_106441058(long param_1,long param_2)

{
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2 != 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106441098; end: 1064410ab;  */

void FUN_106441098(void)

{
  return;
}



/* Entry: 1064410ac; end: 1064410eb;  */

void FUN_1064410ac(long param_1,long param_2)

{
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2 != 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1064410ec; end: 1064410ef;  */

void FUN_1064410ec(void)

{
  return;
}



/* Entry: 1064410f0; end: 10644124b;  */

byte FUN_1064410f0(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c2118;
  _objc_opt_class(PTR_PTR_1126c2118);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  puVar1 = PTR_PTR_1126c2118;
  if ((uVar2 & 1) == 0) {
    bVar4 = 0;
  }
  else {
    _objc_retain(param_1);
    _objc_opt_class(puVar1);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    uVar2 = param_1;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_1);
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    func_0x00010c0bdf40(uVar2);
    bVar4 = *(byte *)(puStack_48 + 3);
    __Block_object_dispose(&uStack_50,8);
    _objc_release(uVar2);
  }
  _objc_release(param_1);
  return bVar4 & 1;
}



/* Entry: 10644124c; end: 10644127b;  */

void FUN_10644124c(void)

{
  return;
}



/* Entry: 10644127c; end: 106441463;  */

uint FUN_10644127c(ulong param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c2118;
  _objc_opt_class(PTR_PTR_1126c2118);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  puVar1 = PTR_PTR_1126c2118;
  if ((uVar2 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    _objc_retain(param_1);
    _objc_opt_class(puVar1);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    uVar2 = param_1;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_1);
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    func_0x00010c0bdf40(uVar2);
    uVar3 = param_1;
    FUN_10643fd0c(param_1,param_2);
    if (uVar3 == 0xd) {
      func_0x000108534aa8();
      uVar5 = 0;
      if ((param_3 - 0x2dU < 0x3a) &&
         ((1L << ((ulong)(param_3 - 0x2dU) & 0x3f) & 0x200000040000001U) != 0)) {
        uVar4 = param_2;
        func_0x00010bf1f480(param_2);
        uVar5 = (uint)uVar4;
      }
      uVar5 = *(byte *)(puStack_48 + 3) & uVar5;
    }
    else {
      uVar5 = (uint)*(byte *)(puStack_48 + 3);
    }
    __Block_object_dispose(&uStack_50,8);
    _objc_release(uVar2);
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar5 & 1;
}



/* Entry: 106441464; end: 106441473;  */

void FUN_106441464(void)

{
  return;
}



/* Entry: 106441474; end: 1064414f7;  */

void FUN_106441474(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c26fe00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar3 != 0;
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064414f8; end: 106441503;  */

void FUN_1064414f8(void)

{
  return;
}



/* Entry: 106441504; end: 1064415c3;  */

bool FUN_106441504(ulong param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain();
  puVar2 = PTR_PTR_1126b8e08;
  _objc_opt_class(PTR_PTR_1126b8e08);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  puVar2 = PTR_PTR_1126b8e08;
  if ((uVar3 & 1) == 0) {
    bVar1 = false;
  }
  else {
    _objc_retain(param_1);
    _objc_opt_class(puVar2);
    uVar4 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar2);
    uVar3 = param_1;
    if ((uVar4 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(param_1);
    uVar4 = uVar3;
    func_0x00010bef60a0();
    if (uVar4 == 5) {
      uVar4 = uVar3;
      func_0x00010bef4240(uVar3);
      bVar1 = uVar4 == 4;
    }
    else {
      bVar1 = false;
    }
    _objc_release(uVar3);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 1064415c4; end: 1064417db;  */

void FUN_1064415c4(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126bdd28;
  _objc_opt_class(PTR_PTR_1126bdd28);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  puVar1 = PTR_PTR_1126bdd28;
  if ((uVar3 & 1) == 0) {
    puVar1 = PTR_PTR_1126bdd30;
    _objc_opt_class(PTR_PTR_1126bdd30);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    puVar1 = PTR_PTR_1126bdd30;
    if ((uVar3 & 1) != 0) goto LAB_106441624;
    puVar1 = PTR_PTR_1126c2118;
    _objc_opt_class(PTR_PTR_1126c2118);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    if ((uVar3 & 1) == 0) {
      uVar3 = 0;
      goto LAB_106441674;
    }
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_10643f58c;
    uStack_40 = 0x10643f59c;
    uStack_38 = 0;
    _objc_retain(param_1);
    puVar1 = PTR_PTR_1126c2118;
    _objc_opt_class(PTR_PTR_1126c2118);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    uVar2 = param_1;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_1);
    func_0x00010c0bdf40(uVar2);
    uVar3 = puStack_58[5];
    _objc_retain(uVar3);
    _objc_release(uVar2);
    __Block_object_dispose(&uStack_60,8);
    uVar2 = uStack_38;
  }
  else {
LAB_106441624:
    _objc_retain(param_1);
    _objc_opt_class(puVar1);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    uVar2 = param_1;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_1);
    uVar3 = uVar2;
    func_0x00010bfe4640(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
LAB_106441674:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1064417dc; end: 10644181b;  */

void FUN_1064417dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10644181c; end: 106441837;  */

void FUN_10644181c(void)

{
  return;
}



/* Entry: 106441838; end: 106441877; -[SCAdDismissTrackingHelper init] */

void FUN_106441838(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126f12f0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    auVar2 = NEON_fmov(0xbff0000000000000,8);
    *(long *)((long)puVar1 + 0x10) = auVar2._8_8_;
    *(long *)((long)puVar1 + 8) = auVar2._0_8_;
  }
  return;
}



/* Entry: 106441878; end: 106441887; -[SCAdDismissTrackingHelper itemDismissStarted:] */

void FUN_106441878(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 8) = param_1;
  *(undefined8 *)(param_2 + 0x10) = 0xbff0000000000000;
  return;
}



/* Entry: 106441888; end: 1064418a7; -[SCAdDismissTrackingHelper itemDismissCancelled:] */

void FUN_106441888(double param_1,long param_2)

{
  *(double *)(param_2 + 0x18) = *(double *)(param_2 + 0x18) + (param_1 - *(double *)(param_2 + 8));
  *(undefined8 *)(param_2 + 8) = 0xbff0000000000000;
  return;
}



/* Entry: 1064418a8; end: 1064418ff; -[SCAdDismissTrackingHelper totalTimeItemUnviewedSeconds] */

undefined8 FUN_1064418a8(long param_1)

{
  double dVar1;
  undefined8 uVar2;
  
  dVar1 = -1.0;
  if ((*(double *)(param_1 + 0x10) == -1.0) && (-1.0 < *(double *)(param_1 + 8))) {
    _CACurrentMediaTime();
    *(double *)(param_1 + 0x18) = *(double *)(param_1 + 0x18) + (dVar1 - *(double *)(param_1 + 8));
  }
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  return uVar2;
}



/* Entry: 106441900; end: 10644190f; -[SCAdDismissTrackingHelper reset] */

void FUN_106441900(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0xbff0000000000000,8);
  *(long *)(param_1 + 0x10) = auVar1._8_8_;
  *(long *)(param_1 + 8) = auVar1._0_8_;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 106441910; end: 106441917; -[SCAdDismissTrackingHelper itemBeginDismissTimestamp] */

undefined8 FUN_106441910(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106441918; end: 10644191f; -[SCAdDismissTrackingHelper setItemBeginDismissTimestamp:] */

void FUN_106441918(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 106441920; end: 106441927; -[SCAdDismissTrackingHelper itemCancelDismissTimestamp] */

undefined8 FUN_106441920(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106441928; end: 10644192f; -[SCAdDismissTrackingHelper setItemCancelDismissTimestamp:] */

void FUN_106441928(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 106441930; end: 106441937; -[SCAdDismissTrackingHelper itemTotalDismissDuration] */

undefined8 FUN_106441930(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106441938; end: 10644193f; -[SCAdDismissTrackingHelper setItemTotalDismissDuration:] */

void FUN_106441938(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 106441940; end: 106441bb3;  */

undefined * FUN_106441940(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar4 = PTR_PTR_1126b2330;
  func_0x00010c0e9c60(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  func_0x00010c0720c0();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126b2340;
  if ((int)puVar1 == 0) {
    puVar4 = PTR_PTR_1126b2338;
    func_0x00010bfe8ca0(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010c0720c0();
    _objc_release(puVar4);
    if (((ulong)puVar1 & 1) != 0) {
      puVar4 = (undefined *)0x1;
      goto LAB_106441aa8;
    }
    puVar1 = PTR_PTR_1126b2338;
    func_0x00010c0c6900(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010c0720c0(param_1);
  }
  else {
    puVar1 = param_2;
    func_0x00010c118b40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c075040();
    puVar3 = PTR_PTR_1126ca2b0;
    if (((ulong)puVar4 & 1) == 0) {
      puVar2 = param_2;
      func_0x00010c118b40(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06eec0();
      puVar4 = PTR_PTR_1126ca2b0;
      if (((ulong)puVar3 & 1) == 0) {
        puVar3 = param_2;
        func_0x00010c118b40(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c07a2e0(puVar4);
        _objc_release(puVar3);
      }
      else {
        puVar4 = (undefined *)0x1;
      }
      _objc_release(puVar2);
    }
    else {
      puVar4 = (undefined *)0x1;
    }
  }
  _objc_release(puVar1);
LAB_106441aa8:
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar4;
}



/* Entry: 106441bb4; end: 106441c8b;  */

undefined8 FUN_106441bb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c9a78;
  func_0x00010c1015e0(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0720c0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106441c8c; end: 106441da3;  */

undefined8 FUN_106441c8c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar5 = param_1;
  func_0x00010bfce400(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf63e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126bdd30;
  _objc_opt_class(PTR_PTR_1126bdd30);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  if ((uVar3 & 1) == 0) {
    puVar2 = PTR_PTR_1126bdd28;
    _objc_opt_class(PTR_PTR_1126bdd28);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    if ((uVar3 & 1) == 0) {
      uVar5 = 0;
      goto LAB_106441d7c;
    }
  }
  uVar4 = param_1;
  func_0x00010c27dd80(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9a78;
  func_0x00010c1015e0(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0720c0(uVar4);
  _objc_release(puVar2);
  _objc_release(uVar4);
LAB_106441d7c:
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 106441da4; end: 106441e73;  */

bool FUN_106441da4(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  func_0x00010bf63e60(param_2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ca218;
  _objc_opt_class(PTR_PTR_1126ca218);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  if ((uVar3 & 1) == 0) {
    bVar1 = false;
  }
  else {
    _objc_retain(param_2);
    uVar3 = param_2;
    func_0x00010bef60a0();
    if (uVar3 == 0x17) {
      bVar1 = false;
    }
    else {
      uVar3 = param_2;
      func_0x00010c242040(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c274c60();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0c6c20();
      bVar1 = uVar5 == 1;
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
    _objc_release(param_2);
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 106441e74; end: 106441ee7;  */

void FUN_106441e74(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  
  func_0x00010bf63e60(param_2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ca218;
  _objc_opt_class(PTR_PTR_1126ca218);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010bfe5ec0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106441ee8; end: 106441f9f;  */

undefined8 FUN_106441ee8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  func_0x00010be36bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bef4b20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010bef52c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010bef51c0(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106441fa0; end: 106442027; -[SCAdTrackHelperAction initWithSnapIndex:actionBlock:] */

undefined1 *
FUN_106441fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f12f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106442028; end: 10644202f; -[SCAdTrackHelperAction snapIndex] */

undefined8 FUN_106442028(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106442030; end: 106442037; -[SCAdTrackHelperAction actionBlock] */

undefined8 FUN_106442030(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106442038; end: 106442043; -[SCAdTrackHelperAction .cxx_destruct] */

void FUN_106442038(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106442044; end: 106442133;  */

bool FUN_106442044(long param_1,ulong param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  _objc_retain(param_2);
  if (param_1 == 1) {
    bVar1 = true;
  }
  else {
    puVar2 = PTR_PTR_1126c9cc0;
    func_0x00010bfa0360(PTR_PTR_1126c9cc0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f3c0();
    if ((uVar4 & 1) == 0) {
      puVar5 = PTR_PTR_1126bfe00;
      func_0x00010bf3fe60(PTR_PTR_1126bfe00);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_2;
      func_0x00010c0e00e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c067fc0();
      bVar1 = uVar6 == 3;
      _objc_release(uVar4);
      _objc_release(puVar5);
    }
    else {
      bVar1 = true;
    }
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 106442134; end: 10644245f;  */

ulong FUN_106442134(ulong param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ca1c8;
  func_0x00010bf7c8e0(PTR_PTR_1126ca1c8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c0720c0();
  if ((int)uVar6 == 0) {
    puVar2 = PTR_PTR_1126b5b08;
    func_0x00010bf11e20(PTR_PTR_1126b5b08);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
    func_0x00010c0720c0();
    if ((int)uVar6 != 0) {
      _objc_release(puVar2);
      goto LAB_1064421b8;
    }
    puVar3 = PTR_PTR_1126ca1c8;
    func_0x00010bf7c820(PTR_PTR_1126ca1c8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if ((uVar6 & 1) == 0) {
      puVar1 = PTR_PTR_1126ca1d0;
      func_0x00010bf7c2e0(PTR_PTR_1126ca1d0);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_1;
      func_0x00010c0720c0();
      _objc_release(puVar1);
      if ((int)uVar6 == 0) {
        puVar1 = PTR_PTR_1126b5b08;
        func_0x00010bf4f3c0(PTR_PTR_1126b5b08);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_1;
        func_0x00010c0720c0();
        _objc_release(puVar1);
        if ((int)uVar6 == 0) {
          puVar1 = PTR_PTR_1126b5b08;
          func_0x00010c27bce0(PTR_PTR_1126b5b08);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = param_1;
          func_0x00010c0720c0();
          _objc_release(puVar1);
          if ((int)uVar6 == 0) {
            uVar6 = 0;
          }
          else {
            puVar1 = PTR_PTR_1126b5b10;
            func_0x00010bf0d4e0(PTR_PTR_1126b5b10);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = param_2;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar1);
            puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
            uVar5 = uVar6;
            _objc_opt_isKindOfClass(uVar6,puVar1);
            uVar4 = uVar6;
            if ((uVar5 & 1) == 0) {
              uVar4 = 0;
            }
            _objc_retain(uVar4);
            _objc_release(uVar6);
            uVar6 = uVar4;
            func_0x00010c067fc0(uVar4);
            _objc_release(uVar4);
          }
        }
        else {
          puVar1 = PTR_PTR_1126c9a28;
          func_0x00010c29d280(PTR_PTR_1126c9a28);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = param_2;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar1);
          puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
          uVar5 = uVar4;
          _objc_opt_isKindOfClass(uVar4,puVar1);
          uVar6 = uVar4;
          if ((uVar5 & 1) == 0) {
            uVar6 = 0;
          }
          _objc_retain(uVar6);
          _objc_release(uVar4);
          uVar4 = uVar6;
          func_0x00010c2827c0();
          _objc_release(uVar6);
          uVar6 = 1;
          if (uVar4 != 9 && uVar4 != 7) {
            uVar6 = 2;
          }
        }
      }
      else {
        puVar1 = PTR_PTR_1126ca240;
        func_0x00010c264d40(PTR_PTR_1126ca240);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar5 = uVar6;
        _objc_opt_isKindOfClass(uVar6,puVar1);
        uVar4 = uVar6;
        if ((uVar5 & 1) == 0) {
          uVar4 = 0;
        }
        _objc_retain(uVar4);
        _objc_release(uVar6);
        uVar6 = uVar4;
        func_0x00010bf1f3c0(uVar4);
        _objc_release(uVar4);
        uVar6 = uVar6 & 0xffffffff;
      }
      goto LAB_1064421c4;
    }
  }
  else {
LAB_1064421b8:
    _objc_release(puVar1);
  }
  uVar6 = 2;
LAB_1064421c4:
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar6;
}



/* Entry: 106442460; end: 1064427ff; -[SCAdTrackerHelper initWithUserSession:viewLocation:snapAdsTracker:adConfigProvider:adConfigProviderV2:adLensCarouselInteractionHistoryTracker:showcaseInteractionHistoryTracker:adUnSkippableAdManager:adPodTrackInfoProvider:userTrackedLogger:userNotTrackedLogger:grapheneRegistry:adLifecycleTracker:adShake2ReportLogger:adReportingInteractionHistoryTracker:adHidingInteractionHistoryTracker:adLifecycleTimestampsTracker:skOverlayLifecycleTracker:appImpressionTracker:webviewMetricsValidator:adBrowserLifecycleService:queuePerformer:canOpenUrlProvider:webBrowsingConfigProvider:] */

undefined8
FUN_106442460(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_8);
  puVar2 = PTR_PTR_1126ca898;
  _objc_retain(param_27);
  _objc_retain(param_26);
  _objc_retain(param_25);
  _objc_retain(param_24);
  _objc_retain(param_23);
  _objc_retain(param_22);
  _objc_retain(param_21);
  _objc_retain(param_20);
  _objc_retain(param_19);
  _objc_retain(param_18);
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_alloc();
  puVar3 = PTR_PTR_1126aed60;
  func_0x00010c15fac0(PTR_PTR_1126aed60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ef220();
  func_0x00010bff53a0((double)param_1);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b7f68;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1f480();
  ppuVar1 = &PTR_PTR_1126ca8a0;
  if ((int)uVar5 == 0) {
    ppuVar1 = &PTR_PTR_1126ca8a8;
  }
  puVar6 = *ppuVar1;
  _objc_opt_new();
  _objc_release(uVar4);
  func_0x00010c05ed80(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                      param_16,param_17,puVar2,puVar3,param_13,param_14,param_15,param_18,param_19,
                      param_11,param_12,param_20,param_21,param_22,param_23,param_24,param_25,
                      param_26,puVar6,param_27);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_8);
  return param_2;
}



/* Entry: 106442800; end: 1064428e7; -[SCAdTrackerHelper initWithUserSession:viewLocation:adShake2ReportLogger:adUnSkippableAdManager:] */

undefined8
FUN_106442800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ca8a8;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_opt_new();
  func_0x00010c05ed80(param_1,param_2,param_3,param_4,0,0,0,0,0,0,param_5,0,0,0,0,0,0,0,param_6,0,0,
                      0,0,0,0,0,0,puVar1,0);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1064428e8; end: 106442e5b; -[SCAdTrackerHelper initWithUserSession:viewLocation:snapAdsTracker:adConfigProvider:adConfigProviderV2:adLensCarouselInteractionHistoryTracker:showcaseInteractionHistoryTracker:adLifecycleTracker:adShake2ReportLogger:interactionHistoryTracker:requestManager:userTrackedLogger:userNotTrackedLogger:grapheneRegistry:adReportingInteractionHistoryTracker:adHidingInteractionHistoryTracker:adUnSkippableAdManager:adPodTrackInfoProvider:adLifecycleTimestampsTracker:skOverlayLifecycleTracker:appImpressionTracker:webviewMetricsValidator:adBrowserLifecycleService:queuePerformer:canOpenUrlProvider:topSnapInteractionInfoStore:webBrowsingConfigProvider:] */

undefined8 *
FUN_1064428e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  puStack_70 = PTR_PTR_1126f1300;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_4;
    _objc_retain(param_5);
    uVar2 = puVar1[7];
    puVar1[7] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[8];
    puVar1[8] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[9];
    puVar1[9] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[10];
    puVar1[10] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[2];
    puVar1[2] = param_10;
    _objc_release(uVar2);
    uVar2 = puVar1[3];
    puVar1[3] = 0;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[4];
    puVar1[4] = param_13;
    _objc_release(uVar2);
    puVar4 = puVar1 + 5;
    _objc_storeWeak(puVar4,param_3);
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar4;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_30;
    _objc_release(uVar2);
    func_0x00010bddd460(puVar1);
  }
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106442e5c; end: 106442eb3; -[SCAdTrackerHelper trackLongPressEventwithAdRequestClientId:page:snapIndex:] */

void FUN_106442e5c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  _objc_retain(param_3);
  func_0x00010643afcc();
  if (param_4 == 0) {
    func_0x00010c0e5060(*(undefined8 *)(param_1 + 0x20),param_2,param_3,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106442eb4; end: 10644336f; -[SCAdTrackerHelper trackOpenViewLoadedEventWithAdRequestClientId:adMediaTrackingKeys:page:lastInteraction:snapIndex:isUnSkippableAd:adResponse:isTopPanelOpen:isBottomPanelOpen:navigationStyle:lastNavigationEvent:didPageToStoreModal:didReturnFromStoryAdInternalDeeplink:] */

void FUN_106442eb4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  ulong param_6,undefined8 param_7,undefined8 param_8,long param_9,
                  undefined4 param_10,undefined4 param_11,long param_12,long param_13,uint param_14)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_13);
  lVar3 = param_9;
  func_0x00010bef60a0();
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_13);
  puVar4 = PTR_PTR_1126ca2b0;
  lVar9 = param_5;
  func_0x00010c118b40(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c072660();
  _objc_release(lVar9);
  if (((ulong)puVar4 & 1) == 0) {
    _objc_retain(param_6);
    if (lVar3 == 0xd) {
      uVar5 = param_6;
      func_0x00010c27dd80();
      if (uVar5 == 10) {
        _objc_release(param_6);
        goto LAB_106442fa0;
      }
      uVar5 = param_6;
      func_0x00010c27dd80();
      bVar12 = param_12 != 1 && uVar5 == 9;
    }
    else {
      bVar12 = false;
    }
    _objc_release(param_6);
    puVar4 = PTR_PTR_1126ca2b0;
    bVar2 = true;
    if (((param_14 & 1) != 0) || (bVar12)) goto LAB_106442fa4;
    lVar3 = param_5;
    func_0x00010c118b40(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar3;
    func_0x00010c07fba0();
    _objc_release(lVar3);
    puVar7 = PTR_PTR_1126b2340;
    if ((int)puVar4 == 0) {
      lVar3 = param_5;
      func_0x00010c118b40(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar3;
      func_0x00010c0771a0();
      _objc_retain(param_13);
      uVar5 = param_6;
      func_0x00010c27dd80();
      if ((param_12 == 1) || (uVar5 != 9)) {
        uVar8 = uVar5;
        lVar10 = param_13;
        FUN_10643af40(uVar5,param_12,param_13);
        uVar1 = 0;
        if (uVar5 == 7) {
          uVar1 = (uint)puVar7;
        }
        if ((((uVar1 & 1) == 0) && (2 < uVar5 - 10)) && ((uVar8 & 1) == 0)) {
          uVar1 = 0;
          if (uVar5 == 8) {
            uVar1 = (uint)puVar7;
          }
          _objc_release(param_13);
          _objc_release(lVar3);
          if ((uVar1 & 1) == 0) goto LAB_106442fa0;
          goto LAB_10644331c;
        }
      }
      _objc_release(param_13);
      _objc_release(lVar3);
    }
    else {
      uVar5 = param_6;
      func_0x00010c27dd80();
      if ((uVar5 != 10) && ((uVar5 = param_6, func_0x00010c27dd80(), param_12 == 1 || (uVar5 != 9)))
         ) goto LAB_106442fa0;
    }
LAB_10644331c:
    bVar2 = false;
  }
  else {
LAB_106442fa0:
    bVar2 = true;
  }
LAB_106442fa4:
  _objc_release(param_13);
  _objc_release(param_6);
  _objc_release(param_5);
  if (((param_14 & 0x100) != 0) || (bVar2)) {
    uVar5 = param_6;
    func_0x00010c27dd80();
    if (uVar5 == 3) {
      lVar10 = 1;
      func_0x00010bee4480(param_1);
    }
    else {
      func_0x00010bf49920(*(undefined8 *)(param_1 + 0x60));
      _objc_retain(param_4);
      lVar3 = param_4;
      func_0x00010bf52a60();
      lVar9 = lRam0000000000000000;
      while (lVar3 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar9) {
            _objc_enumerationMutation(param_4);
          }
          func_0x00010bf49920(*(undefined8 *)(param_1 + 0x60));
          lVar10 = lVar10 + 1;
        } while (lVar3 != lVar10);
        lVar3 = param_4;
        func_0x00010bf52a60();
      }
      _objc_release(param_4);
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7eae0();
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf604c0(PTR_PTR_1126afec0);
      func_0x00010c0e25a0(uVar6);
      _objc_release(uVar6);
      func_0x00010c0e25c0(*(undefined8 *)(param_1 + 0x20));
      uVar6 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef5100();
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef50e0();
      _objc_release(uVar6);
      lVar10 = param_3;
      func_0x00010be0bc40(param_1);
    }
  }
  _objc_release(param_13);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar10);
  lVar9 = *(long *)(param_3 + 0xe8);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar9;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    func_0x00010bfed2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    func_0x00010bf97e80(lVar9);
    func_0x00010c12d480(lVar9);
    func_0x00010c1d0640(*(undefined8 *)(param_3 + 0xe8));
    lVar3 = lVar9;
    func_0x00010bf529e0();
    if (lVar3 == 0) {
      func_0x00010c12d3e0(*(undefined8 *)(param_3 + 0xe8));
    }
    _objc_release(puVar4);
    _objc_release(puVar4);
  }
  _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar10);
  return;
}



/* Entry: 106443370; end: 10644347f; -[SCAdTrackerHelper _executePendingActionsOnAdShownForAdRequestId:snapIndex:] */

void FUN_106443370(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0xe8);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    func_0x00010bfed2e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106443480;
    puStack_58 = &UNK_110922cf0;
    uStack_48 = param_4;
    _objc_retain();
    puStack_50 = puVar3;
    func_0x00010bf97e80(lVar1,param_2,&puStack_70);
    func_0x00010c12d480(lVar1,param_2,puVar3);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xe8),param_2,lVar1,param_3);
    lVar2 = lVar1;
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0xe8),param_2,param_3);
    }
    _objc_release(puStack_50);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106443480; end: 106443517;  */

void FUN_106443480(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2415a0();
  if (lVar1 == *(long *)(param_1 + 0x28)) {
    lVar1 = param_2;
    func_0x00010beee0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_2;
      func_0x00010beee0a0();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar1 + 0x10))();
      _objc_release(lVar1);
    }
    func_0x00010bef92c0(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106443518; end: 1064443db; -[SCAdTrackerHelper trackCloseViewEventWithPage:adViewContext:params:adResponse:lastInteraction:snapIndex:adSessionId:dismissDuration:interactionResultType:triggerType:isPresentingOverlayView:option:isOpeningDeepLink:] */

void FUN_106443518(undefined8 param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined *param_6,ulong param_7,long param_8,ulong param_9,
                  undefined8 param_10,long param_11,long param_12,undefined4 param_13,
                  undefined4 param_14,undefined8 param_15,long param_16)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  bool bVar21;
  uint uStack_cc;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_15);
  _objc_retain(param_16);
  uVar2 = param_7;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  if (param_16 == 0) {
    _objc_retain(param_7);
    _objc_retain(param_6);
    if (param_7 == 0) {
LAB_106443788:
      uStack_cc = 0;
    }
    else {
      uVar4 = param_7;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar4;
      func_0x00010bf529e0();
      _objc_release(uVar4);
      if (uVar10 <= param_9) goto LAB_106443788;
      uVar4 = param_7;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      puVar5 = PTR_PTR_1126c9cc0;
      func_0x00010bfbaae0(PTR_PTR_1126c9cc0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar19 = puVar6;
      _objc_opt_isKindOfClass(puVar6,puVar5);
      puVar5 = puVar6;
      if (((ulong)puVar19 & 1) == 0) {
        puVar5 = (undefined *)0x0;
      }
      _objc_retain(puVar5);
      _objc_release(puVar6);
      puVar6 = puVar5;
      func_0x00010bf1f3c0();
      _objc_release(puVar5);
      puVar5 = PTR_PTR_1126ca2f8;
      func_0x00010bf68e80(PTR_PTR_1126ca2f8);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = param_6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar7 = puVar19;
      _objc_opt_isKindOfClass(puVar19,puVar5);
      puVar5 = puVar19;
      if (((ulong)puVar7 & 1) == 0) {
        puVar5 = (undefined *)0x0;
      }
      _objc_retain(puVar5);
      _objc_release(puVar19);
      puVar19 = puVar5;
      func_0x00010bf1f3c0();
      _objc_release(puVar5);
      uVar4 = uVar10;
      func_0x00010bef60a0();
      uStack_cc = (uint)(uVar4 == 6) & ((uint)puVar6 | (uint)puVar19);
      _objc_release(uVar10);
    }
    _objc_release(param_6);
    _objc_release(param_7);
  }
  else {
    lVar3 = param_16;
    func_0x00010bf1f3c0();
    uStack_cc = (uint)lVar3;
  }
  uVar4 = param_7;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar4;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010bf451a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010c26b160();
  _objc_release(uVar9);
  _objc_release(uVar10);
  _objc_release(uVar4);
  uVar4 = param_7;
  func_0x00010bef52e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ca1a8;
  func_0x00010c089020(PTR_PTR_1126ca1a8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  uVar9 = *(ulong *)(param_2 + 0xe0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf90860();
  if ((uVar10 & 1) == 0) {
    uVar10 = uVar4;
    func_0x00010c2a3d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10;
    func_0x00010c067c00();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar12;
  }
  else {
    uVar10 = *(ulong *)(param_2 + 0x48);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar4;
    func_0x00010c2a3d80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar12;
    func_0x00010c067c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_release(uVar9);
  puVar5 = PTR_PTR_1126ca2b0;
  if ((param_12 == 6) && (uVar11 != 0)) {
    func_0x00010bee4380(param_2);
LAB_106443918:
    bVar21 = false;
  }
  else {
    puVar19 = param_4;
    func_0x00010c118b40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c081440();
    _objc_release(puVar19);
    puVar19 = PTR_PTR_1126b2340;
    if ((int)puVar5 == 0) {
      puVar5 = param_4;
      func_0x00010c118b40(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0771c0();
      if ((int)puVar19 != 0) {
        puVar19 = param_4;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126bfe00;
        func_0x00010bf3fe60(PTR_PTR_1126bfe00);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar19;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar13;
        func_0x00010c067fc0();
        if (puVar14 == (undefined *)0x2) {
LAB_106443ac8:
          _objc_release(puVar13);
          _objc_release(puVar7);
          _objc_release(puVar19);
          goto LAB_106443ae4;
        }
        puVar15 = param_4;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar15;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126ca3f0);
        puVar17 = puVar16;
        func_0x00010bf4b900();
        puVar14 = PTR_PTR_1126ca2b0;
        if (((ulong)puVar17 & 1) != 0) {
          _objc_release(puVar16);
          _objc_release(puVar15);
          goto LAB_106443ac8;
        }
        puVar17 = param_4;
        func_0x00010c118b40(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c072620();
        _objc_release(puVar17);
        _objc_release(puVar16);
        _objc_release(puVar15);
        _objc_release(puVar13);
        _objc_release(puVar7);
        _objc_release(puVar19);
        _objc_release(puVar5);
        if (((ulong)puVar14 & 1) != 0) goto LAB_106443aec;
        goto LAB_106443d0c;
      }
LAB_106443ae4:
      _objc_release(puVar5);
LAB_106443aec:
      puVar19 = PTR_PTR_1126b2340;
      puVar5 = param_4;
      func_0x00010c118b40(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c077220();
      if (((ulong)puVar19 & 1) == 0) goto LAB_106443dbc;
      puVar19 = param_4;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126bfe00;
      func_0x00010bf3fe60(PTR_PTR_1126bfe00);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar19;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010c067fc0();
      _objc_release(puVar13);
      _objc_release(puVar7);
      _objc_release(puVar19);
      _objc_release(puVar5);
      if (puVar14 != (undefined *)0x4) goto LAB_106443918;
      puVar5 = param_4;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126ca8b0;
      _objc_opt_class();
      _objc_release(puVar19);
      _objc_release(puVar5);
      if (puVar19 == puVar7) goto LAB_106443d0c;
      func_0x00010bedfec0(param_2);
    }
    else {
      func_0x00010c28b360(param_2);
      func_0x00010bed5920(param_2);
      func_0x00010bee0d20(param_2);
      puVar5 = PTR_PTR_1126ca2b0;
      puVar19 = param_4;
      func_0x00010c118b40(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06c400();
      if ((int)puVar5 == 0) {
        puVar5 = param_4;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126bfe00;
        func_0x00010bf3fe60(PTR_PTR_1126bfe00);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar13;
        func_0x00010c067fc0();
        _objc_release(puVar13);
        _objc_release(puVar7);
        _objc_release(puVar5);
        _objc_release(puVar19);
        if (puVar14 == (undefined *)0x3) goto LAB_106443c74;
        puVar5 = PTR_PTR_1126ca310;
        func_0x00010c0a29e0(PTR_PTR_1126ca310);
        _objc_retainAutoreleasedReturnValue();
        puVar19 = param_6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar5);
        if (puVar19 != (undefined *)0x0) {
          func_0x00010bed6bc0(param_2);
        }
      }
      else {
        _objc_release(puVar19);
LAB_106443c74:
        func_0x00010bed3280(param_2);
      }
      if (param_11 == 0) {
        uVar10 = param_7;
        func_0x00010c257640();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar10 != 0) {
          puVar5 = PTR_PTR_1126ca1a8;
          func_0x00010c089020(PTR_PTR_1126ca1a8);
          _objc_retainAutoreleasedReturnValue();
          puVar19 = param_6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
          puVar7 = puVar19;
          _objc_opt_isKindOfClass(puVar19,puVar5);
          puVar5 = puVar19;
          if (((ulong)puVar7 & 1) == 0) {
            puVar5 = (undefined *)0x0;
          }
          _objc_retain(puVar5);
          _objc_release(puVar19);
          func_0x00010c0e2f80(*(undefined8 *)(param_2 + 0x20));
LAB_106443dbc:
          _objc_release(puVar5);
          goto LAB_106443dc4;
        }
      }
      puVar5 = PTR_PTR_1126ca2b0;
      puVar19 = param_4;
      func_0x00010c118b40(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c072640();
      if (((int)puVar5 == 0) || (uVar10 = param_7, func_0x00010bef60a0(), uVar10 != 5)) {
        _objc_release(puVar19);
      }
      else {
        _objc_release(puVar19);
        if (param_12 == 5) {
          bVar21 = true;
          goto LAB_106443dc8;
        }
      }
      bVar21 = false;
      if ((param_11 != 1) || ((int)uVar8 != 0x11)) goto LAB_106443dc8;
LAB_106443d0c:
      func_0x00010bee4380(param_2);
    }
LAB_106443dc4:
    bVar21 = false;
  }
LAB_106443dc8:
  uVar10 = param_7;
  func_0x00010bf20fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010bfe44e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010c08fa60();
  _objc_release(uVar9);
  _objc_release(uVar10);
  if (uVar8 != 0) {
    func_0x00010c0e2600(param_2);
    func_0x00010c1ac820(param_2);
  }
  if (param_11 < 2) {
    if (param_11 == 0) {
      func_0x00010c27dd80();
    }
    else {
      if (param_11 != 1) goto joined_r0x000106444130;
      puVar5 = PTR_PTR_1126ca300;
      func_0x00010bf84c60(PTR_PTR_1126ca300);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e4e20(param_2);
      _objc_release(puVar5);
    }
    func_0x00010bec9480(param_2);
joined_r0x000106444130:
    if (!bVar21) goto LAB_1064442ec;
  }
  else {
    if (param_11 != 2) {
      if (param_11 == 3) {
        func_0x00010bee4480(param_2);
      }
      else if (param_11 == 4) {
        func_0x00010be6c0a0(param_1,param_2);
      }
      goto joined_r0x000106444130;
    }
    func_0x00010be90020(param_2);
    lVar3 = param_8;
    func_0x00010c27dd80();
    if (lVar3 == 2) {
      lVar3 = param_8;
      func_0x00010c27dd80();
      uVar10 = param_7;
      func_0x00010bef60a0();
      bVar21 = lVar3 != 2 || uVar10 != 5;
    }
    else {
      bVar21 = false;
    }
    uVar18 = *(undefined8 *)(param_2 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar18;
    func_0x00010bf8f260();
    _objc_release(uVar18);
    if ((int)uVar20 == 0) {
      bVar1 = 0;
      if (param_12 != 3) {
        bVar1 = bVar21 ^ 1;
      }
      if (bVar1 == 0) goto LAB_106443fe0;
    }
    else if ((param_12 == 3) || ((*(byte *)(param_2 + 0xf0) & bVar21) != 0)) {
LAB_106443fe0:
      puVar5 = PTR_PTR_1126ca300;
      func_0x00010bf84c60(PTR_PTR_1126ca300);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e4e20(param_2);
      _objc_release(puVar5);
    }
    puVar19 = *(undefined **)(param_2 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar19;
    func_0x00010bf8ff20();
    if ((int)puVar5 == 0) {
LAB_106444084:
      _objc_release(puVar19);
    }
    else {
      lVar3 = param_8;
      func_0x00010c27dd80();
      uVar10 = param_7;
      func_0x00010bef60a0();
      _objc_release(puVar19);
      if ((lVar3 == 1) && (uVar10 == 6)) {
        puVar19 = PTR_PTR_1126ca300;
        func_0x00010bf84c60(PTR_PTR_1126ca300);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e4e20(param_2);
        goto LAB_106444084;
      }
    }
    if ((uStack_cc & 1) == 0) {
      uVar9 = *(ulong *)(param_2 + 0x48);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010bf1f480();
      if ((uVar10 & 1) == 0) {
        _objc_release(uVar9);
        goto LAB_1064441a4;
      }
      lVar3 = param_8;
      func_0x00010c27dd80();
      uVar10 = param_7;
      func_0x00010bef60a0();
      _objc_release(uVar9);
      if ((lVar3 != 2) || (uVar10 != 5)) goto LAB_1064441a4;
    }
    else {
LAB_1064441a4:
      uVar20 = *(undefined8 *)(param_2 + 0xa0);
      func_0x00010c269d40(uVar20);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126ca300;
      func_0x00010bf9b480(PTR_PTR_1126ca300);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e4e20(uVar20);
      _objc_release(puVar5);
      _objc_release(uVar20);
    }
  }
  uVar9 = *(ulong *)(param_2 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c0ec0c0();
  _objc_release(uVar9);
  if ((uVar10 & 1) == 0) {
    uVar20 = *(undefined8 *)(param_2 + 0xc0);
    func_0x00010c269d40(uVar20);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_7;
    func_0x00010bfe5ec0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08e100(uVar20);
    _objc_release(uVar10);
    _objc_release(uVar20);
  }
  puVar5 = PTR_PTR_1126b8da0;
  func_0x00010c115b80(PTR_PTR_1126b8da0);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_15;
  func_0x00010c2804a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_15);
  _objc_release(puVar5);
  func_0x00010be69760(param_1,param_2);
  param_15 = uVar20;
LAB_1064442ec:
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1064443dc; end: 1064446ab; -[SCAdTrackerHelper updateTopSnapViewTimeWithPage:params:adRequestClientId:snapIndex:adResponse:] */

void FUN_1064443dc(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,ulong param_6,ulong param_7)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126ca2b0;
  uVar6 = param_3;
  func_0x00010c118b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c083060();
  _objc_release(uVar6);
  if ((int)puVar1 != 0) {
    puVar1 = PTR_PTR_1126b2348;
    func_0x00010bf8b340(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar1);
    uVar7 = uVar2;
    if ((uVar3 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(uVar2);
    uVar2 = uVar7;
    func_0x00010c067fc0();
    if (0 < (long)uVar2) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c067fc0(uVar7);
      func_0x00010c0e7880(uVar6);
    }
    goto LAB_10644466c;
  }
  if ((long)param_6 < 0) {
LAB_106444570:
    uVar7 = 0;
  }
  else {
    uVar7 = param_7;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010bf529e0();
    _objc_release(uVar7);
    if (uVar2 <= param_6) goto LAB_106444570;
    uVar2 = param_7;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  uVar2 = uVar7;
  func_0x00010c242040();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c274c60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c6c20();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b2340;
  if (uVar4 == 1) {
    func_0x00010bee26a0(param_1);
  }
  else {
    uVar6 = param_3;
    func_0x00010c118b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c083240();
    _objc_release(uVar6);
    puVar5 = PTR_PTR_1126ca2b0;
    if ((int)puVar1 == 0) {
      uVar6 = param_3;
      func_0x00010c118b40(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06eec0();
      _objc_release(uVar6);
      if ((int)puVar5 != 0) {
        func_0x00010bee2740(param_1);
      }
    }
    else {
      func_0x00010bee2720(param_1);
    }
  }
LAB_10644466c:
  _objc_release(uVar7);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064446ac; end: 1064450a7; -[SCAdTrackerHelper generateAdTrackInfo:isExitingAd:swipeUpSnapIndex:option:] */

void FUN_1064446ac(undefined8 param_1,long param_2,undefined8 param_3,long param_4,int param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  lVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_2 + 0x20);
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bef3240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  lVar5 = 0;
  if (lVar2 == 0) goto LAB_106444f7c;
  lVar5 = lVar2;
  func_0x00010bef60a0();
  if (lVar5 == 5) {
    lVar18 = 0;
  }
  else {
    lVar5 = param_4;
    func_0x00010c26d2c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar1;
    func_0x00010849ade0(lVar1,lVar2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
  }
  uVar6 = *(undefined8 *)(param_2 + 0x80);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010bef4700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar7 = *(undefined8 *)(param_2 + 0x88);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bef2b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  uVar8 = *(undefined8 *)(param_2 + 0xa0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bef3360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar9 = *(undefined8 *)(param_2 + 0xb8);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b92c0;
  uVar8 = uVar7;
  func_0x00010bfb1920(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c098e00(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c78a0(uVar9);
  _objc_release(puVar10);
  _objc_release(uVar8);
  _objc_release(uVar9);
  puVar10 = PTR_PTR_1126b8da0;
  func_0x00010c115b80(PTR_PTR_1126b8da0);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_7;
  func_0x00010bf4b4c0();
  _objc_release(puVar10);
  if ((param_5 != 0) && ((int)uVar8 != 0)) {
    uVar8 = *(undefined8 *)(param_2 + 0xa0);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c138a20();
    _objc_release(uVar8);
  }
  lVar5 = param_4;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  func_0x00010c282940(lVar11);
  func_0x00010c082160();
  func_0x00010bef51c0();
  lVar5 = param_4;
  func_0x00010bef60a0();
  if (lVar5 == 0x11) {
    uVar8 = *(undefined8 *)(param_2 + 0x58);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = uVar8;
    func_0x00010bef5e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
  }
  else {
    uStack_d8 = 0;
  }
  uVar9 = *(undefined8 *)(param_2 + 0x98);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010bef3e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  if (param_5 == 0) {
    uStack_e8 = 0;
  }
  else {
    uStack_e8 = *(undefined8 *)(param_2 + 0xd0);
    lVar5 = param_4;
    func_0x00010bfe5ec0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c068720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    uVar9 = *(undefined8 *)(param_2 + 0xd0);
    lVar5 = param_4;
    func_0x00010bfe5ec0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc00(uVar9);
    _objc_release(lVar5);
  }
  lVar5 = param_4;
  func_0x00010bef60a0();
  lVar16 = lVar11;
  if (lVar5 < 6) {
    if (lVar5 == 1) {
      func_0x00010bf054e0(lVar11);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar16;
      func_0x00010bf05300();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfc2520();
      goto LAB_106444e8c;
    }
    if (lVar5 == 5) {
      func_0x00010bef60a0(lVar11);
      func_0x00010bf054e0(lVar11);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar16;
      func_0x00010bf05300();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010c242040(lVar11);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar12;
      func_0x00010bf20540();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar14;
      func_0x00010bf05300();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdccb60();
      _objc_release(lVar15);
      _objc_release(lVar14);
      _objc_release(lVar13);
      goto LAB_106444d8c;
    }
  }
  else {
    if (lVar5 == 6) {
      func_0x00010c242040(lVar11);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar16;
      func_0x00010bf20540();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar5;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar12;
      func_0x00010bf05300();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfc2520();
      _objc_release(lVar13);
    }
    else {
      if (lVar5 != 10) {
        if (lVar5 != 0x16) goto LAB_106444ea0;
        lVar5 = lVar11;
        func_0x00010c242040();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar5;
        func_0x00010bf20540();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar12;
        func_0x00010bf3fc80();
        _objc_retainAutoreleasedReturnValue();
        lVar16 = lVar13;
        func_0x00010bf68c60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar13);
        _objc_release(lVar12);
        _objc_release(lVar5);
        if (lVar16 == 0) {
          func_0x00010bef60a0(lVar11);
          lVar5 = lVar11;
          func_0x00010bf054e0(lVar11);
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar5;
          func_0x00010bf05300();
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar11;
          func_0x00010c242040(lVar11);
          _objc_retainAutoreleasedReturnValue();
          lVar14 = lVar13;
          func_0x00010bf20540();
          _objc_retainAutoreleasedReturnValue();
          lVar15 = lVar14;
          func_0x00010bf67c00();
          _objc_retainAutoreleasedReturnValue();
          lVar17 = lVar15;
          func_0x00010bf05300();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdccb60();
          _objc_release(lVar17);
          _objc_release(lVar15);
        }
        else {
          func_0x00010bef60a0(lVar16);
          lVar5 = lVar16;
          func_0x00010bf054e0(lVar16);
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar5;
          func_0x00010bf05300();
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar16;
          func_0x00010bf67c00(lVar16);
          _objc_retainAutoreleasedReturnValue();
          lVar14 = lVar13;
          func_0x00010bf05300();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdccb60();
        }
        _objc_release(lVar14);
        _objc_release(lVar13);
        _objc_release(lVar12);
        goto LAB_106444e8c;
      }
      lVar5 = lVar11;
      func_0x00010c242040(lVar11);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar5;
      func_0x00010bf20540();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar12;
      func_0x00010bf3fc80();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar13;
      func_0x00010bf68c60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar5);
      func_0x00010bef60a0(lVar16);
      lVar5 = lVar16;
      func_0x00010bf054e0(lVar16);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar5;
      func_0x00010bf05300();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar16;
      func_0x00010bf67c00(lVar16);
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x00010bf05300();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdccb60();
      _objc_release(lVar14);
      _objc_release(lVar13);
    }
LAB_106444d8c:
    _objc_release(lVar12);
LAB_106444e8c:
    _objc_release(lVar5);
    _objc_release(lVar16);
  }
LAB_106444ea0:
  func_0x00010beded60(param_2);
  lVar5 = param_4;
  func_0x00010bef4240(param_4);
  func_0x000108496a58(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_e8);
  _objc_release(uVar8);
  _objc_release(uStack_d8);
  _objc_release(lVar11);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(lVar18);
LAB_106444f7c:
  puVar10 = PTR_PTR_1126b8da0;
  func_0x00010c115b80(PTR_PTR_1126b8da0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_7;
  func_0x00010bf4b4c0();
  _objc_release(puVar10);
  if ((int)uVar3 != 0) {
    if (param_5 == 0) {
      func_0x00010c138b20(lVar2);
    }
    else {
      func_0x00010c138a60(lVar2);
      uVar3 = *(undefined8 *)(param_2 + 0xa8);
      func_0x00010bfe6360(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c138a80();
      _objc_release(uVar3);
    }
  }
  func_0x00010c138ba0(uVar4);
  param_2 = param_2 + 0x100;
  _objc_loadWeakRetained(param_2);
  lVar18 = param_2;
  func_0x00010bef5e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar11 = lVar5;
  func_0x00010c2aafa0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar5);
  _objc_release(param_7);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar11);
  return;
}



/* Entry: 1064450a8; end: 106445127; -[SCAdTrackerHelper _appInstallStatus:appInstallAppId:deepLinkAppId:] */

undefined8
FUN_1064450a8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  if ((param_3 == 1) || (uVar1 = param_5, param_3 == 6)) {
    func_0x00010bfc2520(param_1,param_2,uVar1);
  }
  else {
    param_1 = 0;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 106445128; end: 106445293; -[SCAdTrackerHelper _updateSKOverlayTrackInfo:adResponse:] */

void FUN_106445128(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0xa8);
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar5 = param_4;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf529e0();
    _objc_release(uVar5);
    if (uVar2 != 0) {
      uVar5 = 0;
      do {
        uVar2 = param_4;
        func_0x00010bef52c0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        uVar2 = uVar3;
        func_0x00010bef60a0();
        if (uVar2 == 1) {
          uVar2 = param_4;
          func_0x00010bfe5ec0(param_4);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar1;
          func_0x00010c23db40(lVar1,param_2,uVar2,uVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar2);
          func_0x00010c1f5060(param_3,param_2,lVar4,uVar5);
          _objc_release(lVar4);
        }
        _objc_release(uVar3);
        uVar5 = uVar5 + 1;
        uVar2 = param_4;
        func_0x00010bef52c0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf529e0();
        _objc_release(uVar2);
      } while (uVar5 < uVar3);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106445294; end: 1064453af; -[SCAdTrackerHelper trackNoFill:viewContext:isUnskippableAd:] */

void FUN_106445294(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  func_0x00010c0e2280(uVar2);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x0001084b90d4(param_3,uVar4,param_5,param_4,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c278880();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064453b0; end: 10644548f; -[SCAdTrackerHelper onHide:viewContext:isNoFill:] */

void FUN_1064453b0(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  int param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8da0;
  if (param_5 == 0) {
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c115b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be69760(0,param_1,param_2,param_3,param_4,0,0,0,0,1);
    _objc_release(param_4);
  }
  else {
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c278340(param_1,param_2,param_3,param_4,0);
    puVar1 = param_3;
    param_3 = param_4;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106445490; end: 10644580b; -[SCAdTrackerHelper _onHide:adViewContext:snapIndex:page:params:fromSwipeUp:isExitingAd:isPresentingOverlayView:dismissDuration:triggerType:option:lastInteraction:] */

void FUN_106445490(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  uint param_9,uint param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,long param_14)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010bfe5ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  func_0x00010c0e2280(uVar2,param_3,lVar1);
  _objc_release(uVar2);
  lVar3 = param_4;
  func_0x00010bfe5ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed2a00(param_2,param_3,lVar3,param_6,param_8);
  _objc_release(param_8);
  _objc_release(lVar3);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_4;
  func_0x00010bef4d80(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf77800(uVar2,param_3,lVar3);
  _objc_release(lVar3);
  _objc_release(uVar2);
  uVar2 = param_7;
  func_0x00010643afcc(param_7);
  _objc_release(param_7);
  func_0x00010c2869c0(param_1,param_2,param_3,lVar1,param_6,uVar2,param_5);
  _objc_release(param_5);
  lVar4 = *(long *)(param_2 + 0x20);
  func_0x00010bef6380(lVar4,param_3,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar3 = lVar4;
  func_0x00010bef60a0();
  if ((lVar3 == 5) || (lVar3 = lVar4, func_0x00010bef60a0(), lVar3 == 0x16)) {
    param_9 = param_9 | param_10 >> 8 & 0xff;
  }
  else {
    param_9 = 1;
  }
  _objc_release(lVar4);
  lVar3 = param_4;
  func_0x00010bef4240();
  puVar6 = PTR_PTR_1126bdcd0;
  if (lVar3 == 4) {
    lVar3 = param_4;
    func_0x00010bef52e0(param_4,param_3,param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaa40(puVar6,param_3,param_4,lVar3,4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (puVar6 != (undefined *)0x0) {
      func_0x00010c0f5d60(*(undefined8 *)(param_2 + 0xb0),param_3,puVar6,
                          *(undefined8 *)(param_2 + 8),&PTR___NSConcreteGlobalBlock_110922d20);
    }
  }
  else {
    if ((param_9 & 1) == 0) {
      lVar3 = param_14;
      func_0x00010c27dd80();
      lVar5 = param_4;
      func_0x00010bef60a0();
      if ((lVar3 != 2) || (lVar5 != 5)) goto LAB_1064457c4;
    }
    puVar6 = PTR_PTR_1126bdcd0;
    lVar3 = param_4;
    func_0x00010bef52e0(param_4,param_3,param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaa40(puVar6,param_3,param_4,lVar3,4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (puVar6 != (undefined *)0x0) {
      func_0x00010bf94ac0(*(undefined8 *)(param_2 + 0xb0),param_3,puVar6,
                          *(undefined8 *)(param_2 + 8),&PTR___NSConcreteGlobalBlock_110922d40);
    }
  }
  _objc_release(puVar6);
  if (param_9 != 0) {
    lVar3 = param_2;
    func_0x00010bfbef00(param_2,param_3,param_4,(undefined1)param_10,param_6,param_13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010becdc60(param_2,param_3,param_4,lVar3,param_12,param_13);
    _objc_release(lVar3);
  }
LAB_1064457c4:
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(param_14);
  _objc_release(param_13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10644580c; end: 106445813;  */

void FUN_10644580c(void)

{
  return;
}



/* Entry: 106445814; end: 106445877; -[SCAdTrackerHelper getAppInstallStatus:] */

undefined8 FUN_106445814(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfc2540();
  _objc_release(param_3);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 106445878; end: 106445a0f; -[SCAdTrackerHelper _onTopSnapPresented:adViewContext:snapIndex:page:params:dismissDuration:triggerType:option:] */

void FUN_106445878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  puVar1 = PTR_PTR_1126b8da0;
  func_0x00010c2499a0(PTR_PTR_1126b8da0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_10;
  func_0x00010bf4b4c0(param_10,param_3,puVar1);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
    uVar2 = param_4;
    func_0x00010bfe5ec0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010bfe5ec0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed2a00(param_2,param_3,uVar3,param_6,param_8);
    _objc_release(uVar3);
    uVar3 = param_7;
    func_0x00010643afcc(param_7);
    func_0x00010c2869c0(param_1,param_2,param_3,uVar2,param_6,uVar3,param_5);
    uVar3 = param_2;
    func_0x00010bfbef00(param_2,param_3,param_4,0,param_6,param_10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010becdc60(param_2,param_3,param_4,uVar3,param_9,param_10);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106445a10; end: 106445a13; -[SCAdTrackerHelper updateInteractionHistory:snapIndex:adPanel:adviewContext:dismissDuration:] */

void FUN_106445a10(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2869d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateInteractionHistory_snapInd_11267f498);
  return;
}



/* Entry: 106445a14; end: 106445a1b; -[SCAdTrackerHelper updateInteractionHistory:snapIndex:adPanel:adViewContext:dismissDuration:] */

void FUN_106445a14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e22b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onAdHiddenInteractionUpdate_snap_1126162c0);
  return;
}



/* Entry: 106445a1c; end: 106445b17; -[SCAdTrackerHelper trackStoryAdView:] */

void FUN_106445a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b8da0;
  _objc_retain(param_3);
  func_0x00010c115b80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfbef00(param_1,param_2,param_3,1,0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b8da0;
  func_0x00010c115b80(PTR_PTR_1126b8da0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b8da0;
  func_0x00010c2499a0(PTR_PTR_1126b8da0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2804a0(puVar1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010becdc60(param_1,param_2,param_3,uVar2,5,puVar4);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106445b18; end: 106445c83; -[SCAdTrackerHelper trackPayToPromoteStoryView:viewContext:] */

void FUN_106445b18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b92f0;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_alloc(puVar1);
  uVar2 = param_7;
  func_0x00010bef4240(param_7);
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010bff2160(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),param_3,param_4,0,puVar1,
                      param_6,0x12,uVar2,0,param_8,0,0,0,0,0,0,0);
  _objc_release(param_8);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b8da0;
  func_0x00010c115b80(PTR_PTR_1126b8da0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b8da0;
  func_0x00010c2499a0(PTR_PTR_1126b8da0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2804a0(puVar3,param_6,puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010becdc60(param_5,param_6,param_7,puVar1,5,puVar5);
  _objc_release(param_7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106445c84; end: 106445d37; -[SCAdTrackerHelper didSwipeUpOnCard:snapIndex:attachmentTriggerType:] */

void FUN_106445c84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8ff40();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    puVar3 = PTR_PTR_1126ca300;
    func_0x00010bf3ca20(PTR_PTR_1126ca300,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e4e20(param_1,param_2,puVar3);
    _objc_release(puVar3);
  }
  func_0x00010c0e6e00(*(undefined8 *)(param_1 + 0x20),param_2,param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106445d38; end: 106445dd7; -[SCAdTrackerHelper onProfileAttachmentTriggeredWithAdIdentifier:snapIndex:attachmentTriggerType:] */

void FUN_106445d38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ca300;
  _objc_retain(param_3);
  func_0x00010bf3ca20(puVar1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e4e20(param_1,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  func_0x00010c0e5c20(uVar2,param_2,param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106445dd8; end: 106445deb; -[SCAdTrackerHelper setTopSnapViewTimeObstructed:page:adIdentifier:snapIndex:] */

void FUN_106445dd8(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee4490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateWindowFocusChange_page_sn_112596ac8,param_3 ^ 1,param_4,param_6,
             param_5);
  return;
}



/* Entry: 106445dec; end: 106445df3; -[SCAdTrackerHelper onAdScreenshot:snapIndex:] */

void FUN_106445dec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e62d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onScreenshotInteractionUpdate_sn_1126172c8);
  return;
}



/* Entry: 106445df4; end: 106445dfb; -[SCAdTrackerHelper onAdBoost:snapIndex:wasBoosted:] */

void FUN_106445df4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e2b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onBoostInteractionUpdate_snapInd_1126164e0);
  return;
}



/* Entry: 106445dfc; end: 106445e03; -[SCAdTrackerHelper onAdToCallSwiped:snapIndex:didCall:] */

void FUN_106445dfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e2650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onAdToCallInteractionUpdate_snap_1126163a8);
  return;
}



/* Entry: 106445e04; end: 106445e0b; -[SCAdTrackerHelper onAdToMessage:snapIndex:didMessage:] */

void FUN_106445e04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e26b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onAdToMessageInteractionUpdate_s_1126163c0);
  return;
}



/* Entry: 106445e0c; end: 106445e13; -[SCAdTrackerHelper onLeadGenerationSubmission:snapIndex:submittedLead:] */

void FUN_106445e0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e4cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onLeadGenerationSubmissionUpdate_112616d40);
  return;
}



/* Entry: 106445e14; end: 106445e1b; -[SCAdTrackerHelper onLeadGenerationFormInteraction:snapIndex:formInteraction:] */

void FUN_106445e14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e4c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onLeadGenerationFormInteractionU_112616d30);
  return;
}


