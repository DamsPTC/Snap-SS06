/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00731260; end: 007313fb;  */

void FUN_00731260(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSLocale_00ac2990;
  func_0x0078a840();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x007837a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  if (lRam0000000000b64300 != -1) {
    _dispatch_once(0xb64300,&PTR___NSConcreteGlobalBlock_00a1fbc0);
  }
  ppuVar1 = ppuRam0000000000b64308;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x007882e0();
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar3 = ppuVar2;
    func_0x0078ae20();
    if (ppuVar3 == (undefined **)0x7fffffffffffffff) {
      FUN_00731414();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar3;
      func_0x00789f00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar3);
      ppuVar5 = ppuVar4;
      func_0x007882e0();
      ppuVar3 = ppuVar4;
      if (ppuVar5 != (undefined **)0x0) goto LAB_007312e4;
    }
    else {
      ppuVar4 = ppuVar2;
      func_0x00792460();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      FUN_00731414();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar5;
      func_0x00789f00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
      ppuVar5 = ppuVar3;
      func_0x007882e0();
      if (ppuVar5 != (undefined **)0x0) {
        _objc_release(ppuVar4);
        goto LAB_007312e4;
      }
      _objc_release(ppuVar3);
    }
    _objc_release(ppuVar4);
    ppuVar3 = &PTR____CFConstantStringClassReference_00a21680;
  }
  else {
    _objc_retain(ppuVar1);
    ppuVar3 = ppuVar1;
  }
LAB_007312e4:
  _objc_release(ppuVar1);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(ppuVar3);
  return;
}



/* Entry: 007313fc; end: 00731413;  */

void FUN_007313fc(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam0000000000b64308;
  ppuRam0000000000b64308 = &PTR__OBJC_CLASS___NSConstantDictionary_00a596f8;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00731414; end: 00731467;  */

void FUN_00731414(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b64310 != -1) {
    _dispatch_once(0xb64310,&PTR___NSConcreteGlobalBlock_00a1fbe0);
  }
  uVar1 = uRam0000000000b64318;
  _objc_retain(uRam0000000000b64318);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00731468; end: 0073147f;  */

void FUN_00731468(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam0000000000b64318;
  ppuRam0000000000b64318 = &PTR__OBJC_CLASS___NSConstantDictionary_00a59720;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00731480; end: 007314df;  */

void FUN_00731480(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00780e80();
  if (1 < uVar1) {
    uVar2 = param_1;
    func_0x00780e80();
    uVar1 = 0;
    uVar2 = uVar2 - 1;
    do {
      uVar1 = uVar1 + 1;
      uVar2 = uVar2 - 1;
      func_0x00782f40(param_1);
    } while (uVar1 < uVar2);
  }
  return;
}



/* Entry: 007314e0; end: 00731567;  */

void FUN_007314e0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00788220();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00780e80(param_1);
    func_0x0078b480(param_1,param_2,lVar2 + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar1);
  return;
}



/* Entry: 00731568; end: 00731573;  */

void FUN_00731568(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_addObject__00aba6c0);
    return;
  }
  return;
}



/* Entry: 00731574; end: 007315cb;  */

void FUN_00731574(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00780e80();
  if (0 < (long)(uVar1 - 1)) {
    do {
      uVar2 = uVar1 - 1;
      _arc4random_uniform();
      if (uVar2 != (uVar1 & 0xffffffff)) {
        func_0x00782f40(param_1,param_2,uVar2,uVar1 & 0xffffffff);
      }
      uVar1 = uVar2;
    } while (1 < (long)uVar2);
  }
  return;
}



/* Entry: 007315cc; end: 00731767;  */

void FUN_007315cc(ulong param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  
  func_0x00793100();
  if (param_1 < 1000) {
    ppuVar1 = &PTR____CFConstantStringClassReference_00a4a280;
  }
  else if (param_1 >> 5 < 0xc35) {
    if ((uint)((int)param_1 + (int)((param_1 & 0xffffffff) / 1000) * -1000) < 100) {
      ppuVar1 = &PTR____CFConstantStringClassReference_00a4a2c0;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_00a4a2a0;
    }
  }
  else if (param_1 < 1000000) {
    ppuVar1 = &PTR____CFConstantStringClassReference_00a4a2c0;
  }
  else if (param_1 < 100000000) {
    if ((uint)((int)param_1 + (int)((param_1 & 0xffffffff) / 1000000) * -1000000) >> 5 < 0xc35) {
      ppuVar1 = &PTR____CFConstantStringClassReference_00a4a300;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_00a4a2e0;
    }
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_00a4a300;
  }
  func_0x0078c100(PTR__OBJC_CLASS___NSString_00ac2988,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00731768; end: 0073176b;  */

void FUN_00731768(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077e810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_addPointer__00aba6f8);
  return;
}



/* Entry: 0073176c; end: 00731863;  */

bool FUN_0073176c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = param_1;
  func_0x00780e80();
  if (uVar3 == 0) {
    bVar1 = false;
  }
  else {
    uVar3 = 0;
    do {
      uVar2 = param_1;
      func_0x0078a700(param_1,param_2,uVar3);
      bVar1 = uVar2 == param_3;
      if (bVar1) break;
      uVar3 = uVar3 + 1;
      uVar2 = param_1;
      func_0x00780e80();
    } while (uVar3 < uVar2);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 00731864; end: 00731867;  */

void FUN_00731864(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078a710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_pointerAtIndex__00abd6d0);
  return;
}



/* Entry: 00731868; end: 0073188f;  */

void FUN_00731868(void)

{
  func_0x0077c380();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00731890; end: 0073199b;  */

void FUN_00731890(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,
                 undefined8 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x007882e0();
  if (param_4 + 1 < uVar2) {
    uVar2 = param_3;
    func_0x00780140(param_3,param_2,param_4);
    uVar1 = param_3;
    func_0x00780140(param_3,param_2,param_4 + 1);
    if ((((uint)uVar2 & 0xfc00) != 0xd800) || (((uint)uVar1 & 0xfc00) != 0xdc00)) goto LAB_0073192c;
    *param_5 = 2;
    uVar2 = (ulong)((uint)uVar1 + (uint)uVar2 * 0x400 + 0x2400) & 0x1fffff;
  }
  else {
LAB_0073192c:
    uVar2 = param_3;
    func_0x007882e0();
    if (uVar2 <= param_4) {
      puVar3 = (undefined *)0x0;
      *param_5 = 0;
      goto LAB_0073197c;
    }
    uVar2 = param_3;
    func_0x00780140(param_3,param_2,param_4);
    *param_5 = 1;
    uVar2 = uVar2 & 0xffffffff;
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d40(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
LAB_0073197c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 0073199c; end: 00731a2b;  */

undefined8 FUN_0073199c(undefined8 param_1,undefined8 param_2,char *param_3)

{
  if ((("t__DATA_CONST" < param_3 + -0x20a0) && (((ulong)param_3 & 0xfffffffffffff000) != 0x1f000))
     && ("" < param_3 + -0xfe4e5)) {
    if ((long)param_3 < 0x203c) {
      if ((param_3 != "\x04") && (param_3 != "")) {
        return 0;
      }
    }
    else if ((param_3 != "\x02") && (param_3 != "usr/lib/swift/libswiftSpatial.dylib")) {
      return 0;
    }
  }
  return 1;
}



/* Entry: 00731a2c; end: 00731a8f;  */

undefined8 FUN_00731a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x0077cfc0();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x0077d000(PTR__OBJC_CLASS___NSString_00ac2988,param_2,param_3);
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
      func_0x0077cfe0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,param_3);
      uVar2 = 3;
      if ((int)puVar1 == 0) {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 00731a90; end: 00731bd3;  */

uint FUN_00731a90(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (uVar6 = param_3, func_0x007882e0(), uVar6 == 0)) {
LAB_00731bac:
    uVar7 = 0;
  }
  else {
    uVar6 = 0;
    puVar8 = (undefined1 *)0x0;
    do {
      puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
      func_0x0077c360(PTR__OBJC_CLASS___NSString_00ac2988,param_2,param_3,uVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00793100();
      puVar4 = PTR__OBJC_CLASS___NSString_00ac2988;
      func_0x00792f40(PTR__OBJC_CLASS___NSString_00ac2988,param_2,puVar3);
      if ((puVar4 != (undefined1 *)((long)&MACH_HEADER.magic + 1)) &&
         ((puVar8 == (undefined1 *)0x0 || ((long)puVar4 <= (long)puVar8)))) {
        _objc_release(puVar2);
        uVar6 = param_3;
        func_0x007882e0();
        if (uVar6 < 2) goto LAB_00731bac;
        uVar6 = param_3;
        func_0x00780140(param_3,param_2,0);
        uVar5 = param_3;
        func_0x00780140(param_3,param_2,1);
        puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
        func_0x0077d000(PTR__OBJC_CLASS___NSString_00ac2988,param_2,uVar5 & 0xffffffff);
        uVar7 = (uint)(((int)uVar6 == 0x23 || (int)uVar6 - 0x30U < 10) && (int)uVar5 == 0x20e3) |
                (uint)puVar2;
        break;
      }
      uVar7 = 1;
      lVar1 = 1;
      if (&UNK_0000ffff < puVar3) {
        lVar1 = 2;
      }
      uVar6 = lVar1 + uVar6;
      _objc_release(puVar2);
      uVar5 = param_3;
      func_0x007882e0();
      puVar8 = puVar4;
    } while (uVar6 < uVar5);
  }
  _objc_release(param_3);
  return uVar7 & 1;
}



/* Entry: 00731bd4; end: 00731cb3;  */

void FUN_00731bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x007882e0(param_3);
  func_0x00782ca0(param_3);
  uVar1 = param_3;
  func_0x00792440(param_3);
  _objc_retainAutoreleasedReturnValue();
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00731cb4; end: 00731d27;  */

void FUN_00731cb4(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *in_x6;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x00787780();
  if ((int)puVar1 == 0) {
    *in_x6 = 1;
  }
  else {
    lVar2 = param_2;
    func_0x007882e0();
    *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar2 + param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 00731d28; end: 00731f0b;  */

/* WARNING: Removing unreachable block (ram,0x00731e38) */

void FUN_00731d28(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *in_x6;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  _objc_alloc_init();
  func_0x007882e0();
  _objc_retain(puVar1);
  func_0x00782ca0(param_3);
  _objc_retain(puVar1);
  puVar2 = puVar1;
  func_0x00780ea0();
  puVar3 = param_3;
  while (puVar2 != (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
    puVar5 = puVar3;
    do {
      in_x6 = puVar5;
      func_0x007882e0();
      puVar3 = puVar5;
      func_0x00791fa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar6 = puVar6 + 1;
      puVar5 = puVar3;
    } while (puVar2 != puVar6);
    puVar2 = puVar1;
    func_0x00780ea0();
  }
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar4) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x00787780();
    if ((int)puVar2 != 0) {
      func_0x0077e720(*(undefined8 *)(param_3 + 0x20));
    }
    *in_x6 = 0;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_0099ada0)(param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 00731f0c; end: 00731f67;  */

void FUN_00731f0c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *in_x6;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x00787780();
  if ((int)puVar1 != 0) {
    func_0x0077e720(*(undefined8 *)(param_1 + 0x20));
  }
  *in_x6 = 0;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 00731f68; end: 00732047;  */

undefined1 FUN_00731f68(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  func_0x00791f80(param_1,param_2,&PTR____CFConstantStringClassReference_00a27120,
                  &PTR____CFConstantStringClassReference_00a212a0);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 1;
  func_0x007882e0();
  func_0x00782ca0(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 00732048; end: 00732157;  */

void FUN_00732048(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *in_x6;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x00787780(PTR__OBJC_CLASS___NSString_00ac2988,param_2,param_2);
  if (((ulong)puVar1 & 1) == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
    *in_x6 = 1;
  }
  return;
}



/* Entry: 00732158; end: 00732197;  */

bool FUN_00732158(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x007882e0(param_3);
  return param_3 == 0;
}



/* Entry: 00732198; end: 0073227b;  */

bool FUN_00732198(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  if (param_3 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00792000(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x007882e0();
    bVar1 = lVar2 != 0;
    _objc_release(param_3);
  }
  return bVar1;
}



/* Entry: 0073227c; end: 00732317;  */

void FUN_0073227c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_00ac30b0;
  func_0x00793ac0(PTR__OBJC_CLASS___NSCharacterSet_00ac30b0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00787380();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x0078ada0(param_1,param_2,puVar2,4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (lVar3 != 0x7fffffffffffffff) {
    func_0x00792460(param_1,param_2,lVar3 + 1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00732318; end: 0073236f;  */

void FUN_00732318(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_00ac30b0;
  func_0x00793ac0(PTR__OBJC_CLASS___NSCharacterSet_00ac30b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00791fe0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 00732370; end: 00732427;  */

undefined8 FUN_00732370(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x007882e0();
  func_0x00782ca0(param_1);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 00732428; end: 0073243f;  */

void FUN_00732428(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 1;
  return;
}



/* Entry: 00732440; end: 007324f3;  */

void FUN_00732440(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  if (param_3 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_00a212a0;
  }
  else {
    ppuVar1 = param_3;
    func_0x00788340();
    ppuVar2 = param_3;
    if (0x1e < (long)ppuVar1) {
      func_0x00792480(param_3,param_2,0x1e);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
    }
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_00ac30b0;
    func_0x00793aa0(PTR__OBJC_CLASS___NSCharacterSet_00ac30b0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar2;
    func_0x00791fe0(ppuVar2,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(ppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(ppuVar1);
  return;
}



/* Entry: 007324f4; end: 0073260b;  */

void FUN_007324f4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
  func_0x007882e0();
  func_0x00792160();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  func_0x007882e0(param_1);
  _objc_retain(puVar1);
  func_0x00782ca0(param_1);
  puVar2 = puVar1;
  func_0x00780e20(puVar1);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0073260c; end: 00732643;  */

void FUN_0073260c(long param_1,undefined8 param_2)

{
  undefined1 *in_x6;
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(ulong *)(lVar1 + 0x18);
  *(ulong *)(lVar1 + 0x18) = uVar2 + 1;
  if (*(ulong *)(param_1 + 0x30) < uVar2) {
    *in_x6 = 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077ef90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_appendString__00aba8d8,param_2);
  return;
}



/* Entry: 00732644; end: 007326ab;  */

bool FUN_00732644(long param_1,long param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (func_0x0078ae20(), param_1 != 0)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x007882e0(param_3);
    bVar1 = param_2 == lVar2;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 007326ac; end: 0073274b;  */

void FUN_007326ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSRegularExpression_00ac3188;
  _objc_retain(param_4);
  func_0x0078b1e0(puVar1,param_2,param_3,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x007882e0(param_1);
  puVar3 = puVar1;
  func_0x00791f60(puVar1,param_2,param_1,0,0,uVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 0073274c; end: 0073275b;  */

void FUN_0073274c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078c3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_scoreAgainst_fuzziness__00abde08,param_3,0);
  return;
}



/* Entry: 0073275c; end: 00732baf;  */

double FUN_0073275c(double param_1,ulong param_2,undefined8 param_3,ulong param_4,long param_5,
                   uint param_6)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (lRam0000000000b64320 != -1) {
    _dispatch_once(0xb64320,&PTR___NSConcreteGlobalBlock_00a1fc60);
  }
  func_0x00781b60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00780840();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00780820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_2);
  uVar3 = param_4;
  func_0x00781b60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00780840();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00780820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar3);
  uVar3 = uVar4;
  func_0x007878e0();
  if ((int)uVar3 != 0) {
    uVar3 = uVar4;
    func_0x007882e0();
    dVar14 = 1.0;
    if (uVar3 != 0) goto LAB_00732b44;
  }
  uVar3 = uVar6;
  func_0x007882e0();
  if (uVar3 == 0) {
    dVar14 = 0.0;
  }
  else {
    uVar3 = uVar6;
    func_0x007882e0();
    uVar5 = uVar4;
    func_0x007882e0();
    if (uVar3 == 0) {
      bVar2 = false;
      dVar14 = 0.0;
      dVar13 = 1.0;
    }
    else {
      bVar2 = false;
      dVar13 = 1.0;
      dVar14 = 0.0;
      dVar15 = 0.1;
      uVar11 = 1;
      do {
        uVar7 = uVar6;
        func_0x007924a0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00788bc0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar4;
        func_0x0078ae00();
        _objc_release(uVar8);
        uVar8 = uVar7;
        func_0x00793260(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar4;
        func_0x0078ae00();
        _objc_release(uVar8);
        fVar12 = SUB84(param_1,0);
        dVar17 = dVar15;
        if ((uVar9 == 0x7fffffffffffffff) && (uVar10 == 0x7fffffffffffffff)) {
          if (param_5 == 0) {
            _objc_release(uVar7);
            dVar14 = 0.0;
            goto LAB_00732b44;
          }
          func_0x00783840(param_5);
          param_1 = (double)(1.0 - fVar12);
          dVar13 = dVar13 + param_1;
        }
        else {
          uVar8 = uVar9;
          if ((uVar9 == 0x7fffffffffffffff) || (uVar10 == 0x7fffffffffffffff)) {
            if (uVar9 == 0x7fffffffffffffff) {
              uVar8 = uVar10;
            }
            if ((uVar10 == 0x7fffffffffffffff && uVar9 == 0x7fffffffffffffff) ||
               (uVar8 == 0x7fffffffffffffff)) goto LAB_00732a7c;
          }
          else if (uVar10 <= uVar9) {
            uVar8 = uVar10;
          }
          uVar9 = uVar4;
          func_0x007924a0();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar9;
          func_0x007878e0();
          _objc_release(uVar9);
          dVar16 = 0.2;
          if ((uVar10 & 1) == 0) {
            dVar16 = dVar15;
          }
          if (uVar8 == 0) {
            bVar2 = (bool)((int)uVar11 == 1 | bVar2);
            dVar17 = dVar16 + 0.6;
          }
          else {
            uVar8 = uVar4;
            func_0x007924a0();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar8;
            func_0x007878e0();
            _objc_release(uVar8);
            param_1 = dVar16 + 0.8;
            dVar17 = param_1;
            if ((int)uVar9 == 0) {
              dVar17 = dVar16;
            }
          }
          uVar8 = uVar4;
          func_0x00792440();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          uVar4 = uVar8;
        }
LAB_00732a7c:
        dVar14 = dVar14 + dVar17;
        _objc_release(uVar7);
        bVar1 = uVar11 < uVar3;
        uVar11 = (ulong)((int)uVar11 + 1);
      } while (bVar1);
    }
    if ((param_6 >> 1 & 1) == 0) {
      dVar14 = dVar14 / (double)uVar3;
      uVar11 = 0;
      if (uVar5 != 0) {
        uVar11 = uVar3 / uVar5;
      }
      dVar15 = (double)uVar3 / (double)uVar5;
      if ((param_6 & 4) != 0) {
        dVar15 = (double)uVar11;
      }
      dVar13 = ((dVar14 + dVar15 * dVar14) * 0.5) / dVar13;
      if ((!bVar2) || (dVar14 = dVar13 + 0.15, 1.0 <= dVar14)) {
        dVar14 = dVar13;
      }
    }
    else {
      dVar14 = dVar14 / (double)uVar5;
    }
  }
LAB_00732b44:
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_5);
  _objc_release(param_4);
  return dVar14;
}



/* Entry: 00732bb0; end: 00732c73;  */

void FUN_00732bb0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableCharacterSet_00ac36f0;
  func_0x00788ba0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_00ac30b0;
  func_0x00793240(PTR__OBJC_CLASS___NSCharacterSet_00ac30b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x007839e0(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_00ac30b0;
  func_0x007819e0(PTR__OBJC_CLASS___NSCharacterSet_00ac30b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x007839e0(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  func_0x0077e460(puVar2,param_2,&PTR____CFConstantStringClassReference_00a27120);
  puVar3 = puVar2;
  func_0x00787380();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000000b64328;
  puRam0000000000b64328 = puVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar2);
  return;
}



/* Entry: 00732c74; end: 00732f1b;  */

undefined1  [16]
FUN_00732c74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  lVar9 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_8);
  _objc_retain(param_7);
  func_0x00782080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  uVar7 = 3;
  func_0x0077fc20(param_7);
  uVar13 = param_3;
  uVar14 = param_4;
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar9) {
    auVar15._8_8_ = param_4;
    auVar15._0_8_ = param_3;
    return auVar15;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  lVar9 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(uVar7);
  func_0x00782080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  puVar8 = puVar2;
  func_0x00791900(puVar1);
  uVar7 = param_1;
  uVar11 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar9) {
    auVar16._8_8_ = param_2;
    auVar16._0_8_ = param_1;
    return auVar16;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  lVar9 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(puVar8);
  func_0x00782080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = puVar1;
  func_0x00791920(puVar2);
  uVar10 = uVar7;
  uVar12 = uVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar9) {
    auVar17._8_8_ = uVar11;
    auVar17._0_8_ = uVar7;
    return auVar17;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSMutableParagraphStyle_00ac32a0;
  lVar9 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(puVar8);
  func_0x00781c60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00789700();
  _objc_release(puVar2);
  func_0x0078ebc0(puVar3);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  func_0x00782080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = puVar2;
  func_0x00791920(puVar1);
  uVar7 = uVar10;
  uVar11 = uVar12;
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar9) {
    auVar18._8_8_ = uVar12;
    auVar18._0_8_ = uVar10;
    return auVar18;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(puVar8);
  puVar1 = puVar3;
  _objc_opt_class();
  func_0x007918c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSValue_00ac32b0;
  uVar10 = uVar7;
  uVar12 = uVar11;
  func_0x00793680(uVar7,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00780e20();
  puVar5 = puVar8;
  func_0x00780e20();
  puVar6 = PTR__OBJC_CLASS___NSArray_00ac2c28;
  func_0x0077f200(PTR__OBJC_CLASS___NSArray_00ac2c28);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = puVar1;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    func_0x0077fc20(uVar7,uVar11,puVar3);
    puVar4 = PTR__OBJC_CLASS___NSValue_00ac32b0;
    uVar10 = uVar13;
    uVar12 = uVar14;
    func_0x00793680(uVar13,uVar14,PTR__OBJC_CLASS___NSValue_00ac32b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078f4a0(puVar1);
  }
  else {
    func_0x0077b8c0();
    uVar13 = uVar10;
    uVar14 = uVar12;
  }
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar8);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar9) {
    auVar19._8_8_ = uVar14;
    auVar19._0_8_ = uVar13;
    return auVar19;
  }
  ___stack_chk_fail();
  if (lRam0000000000b64330 != -1) {
    _dispatch_once(0xb64330,&PTR___NSConcreteGlobalBlock_00a1fc80);
  }
  uVar13 = uRam0000000000b64338;
  _objc_retain(uRam0000000000b64338);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar13);
  auVar20._8_8_ = uVar12;
  auVar20._0_8_ = uVar10;
  return auVar20;
}



/* Entry: 00732f1c; end: 00733053;  */

undefined1  [16]
FUN_00732f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  puVar1 = PTR__OBJC_CLASS___NSMutableParagraphStyle_00ac32a0;
  lVar8 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_7);
  func_0x00781c60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00789700();
  _objc_release(puVar1);
  func_0x0078ebc0(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  func_0x00782080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  puVar7 = puVar1;
  func_0x00791920(param_5);
  uVar9 = param_1;
  uVar11 = param_2;
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar8) {
    auVar13._8_8_ = param_2;
    auVar13._0_8_ = param_1;
    return auVar13;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(puVar7);
  puVar1 = puVar2;
  _objc_opt_class();
  func_0x007918c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSValue_00ac32b0;
  uVar10 = uVar9;
  uVar12 = uVar11;
  func_0x00793680(uVar9,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00780e20();
  puVar5 = puVar7;
  func_0x00780e20();
  puVar6 = PTR__OBJC_CLASS___NSArray_00ac2c28;
  func_0x0077f200(PTR__OBJC_CLASS___NSArray_00ac2c28);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = puVar1;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    func_0x0077fc20(uVar9,uVar11,puVar2);
    puVar4 = PTR__OBJC_CLASS___NSValue_00ac32b0;
    uVar10 = param_3;
    uVar12 = param_4;
    func_0x00793680(param_3,param_4,PTR__OBJC_CLASS___NSValue_00ac32b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078f4a0(puVar1);
  }
  else {
    func_0x0077b8c0();
    param_3 = uVar10;
    param_4 = uVar12;
  }
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar7);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar8) {
    auVar14._8_8_ = param_4;
    auVar14._0_8_ = param_3;
    return auVar14;
  }
  ___stack_chk_fail();
  if (lRam0000000000b64330 != -1) {
    _dispatch_once(0xb64330,&PTR___NSConcreteGlobalBlock_00a1fc80);
  }
  uVar9 = uRam0000000000b64338;
  _objc_retain(uRam0000000000b64338);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar9);
  auVar15._8_8_ = uVar12;
  auVar15._0_8_ = uVar10;
  return auVar15;
}



/* Entry: 00733054; end: 0073320b;  */

undefined1  [16]
FUN_00733054(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined *param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  lVar6 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_7);
  puVar1 = param_5;
  _objc_opt_class();
  func_0x007918c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSValue_00ac32b0;
  uVar7 = param_1;
  uVar8 = param_2;
  func_0x00793680(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_5;
  func_0x00780e20();
  uVar4 = param_7;
  func_0x00780e20();
  puVar5 = PTR__OBJC_CLASS___NSArray_00ac2c28;
  func_0x0077f200(PTR__OBJC_CLASS___NSArray_00ac2c28);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    func_0x0077fc20(param_1,param_2,param_5);
    puVar3 = PTR__OBJC_CLASS___NSValue_00ac32b0;
    uVar7 = param_3;
    uVar8 = param_4;
    func_0x00793680(param_3,param_4,PTR__OBJC_CLASS___NSValue_00ac32b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078f4a0(puVar1);
  }
  else {
    func_0x0077b8c0();
    param_3 = uVar7;
    param_4 = uVar8;
  }
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar6) {
    auVar9._8_8_ = param_4;
    auVar9._0_8_ = param_3;
    return auVar9;
  }
  ___stack_chk_fail();
  if (lRam0000000000b64330 != -1) {
    _dispatch_once(0xb64330,&PTR___NSConcreteGlobalBlock_00a1fc80);
  }
  uVar4 = uRam0000000000b64338;
  _objc_retain(uRam0000000000b64338);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar4);
  auVar10._8_8_ = uVar8;
  auVar10._0_8_ = uVar7;
  return auVar10;
}



/* Entry: 0073320c; end: 0073325f;  */

void FUN_0073320c(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b64330 != -1) {
    _dispatch_once(0xb64330,&PTR___NSConcreteGlobalBlock_00a1fc80);
  }
  uVar1 = uRam0000000000b64338;
  _objc_retain(uRam0000000000b64338);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00733260; end: 0073328b;  */

void FUN_00733260(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCache_00ac3278;
  _objc_alloc_init();
  uVar1 = puRam0000000000b64338;
  puRam0000000000b64338 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0073328c; end: 00733493;  */

void FUN_0073328c(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSUUID_00ac2fe0;
  _objc_alloc();
  func_0x00786c40();
  if (ppuVar1 == (undefined **)0x0) {
    _objc_retain(param_1);
  }
  else {
    func_0x00784120(ppuVar1,param_2,auStack_48);
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSData_00ac2b10;
    func_0x007815e0(PTR__OBJC_CLASS___NSData_00ac2b10,param_2,auStack_48,0x10);
    _objc_retainAutoreleasedReturnValue();
    param_1 = ppuVar2;
    func_0x0077f760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_38) {
    ___stack_chk_fail();
    ppuVar2 = ppuVar1;
    func_0x0078a400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_00a212a0;
    }
    else {
      ppuVar2 = ppuVar1;
      func_0x0078a400(ppuVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar3 = ppuVar1;
    func_0x0078ac60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    param_1 = ppuVar2;
    if (ppuVar3 != (undefined **)0x0) {
      func_0x0078ac60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00791e60(ppuVar2,param_2,&PTR____CFConstantStringClassReference_00a2a6e0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar2);
      _objc_release(ppuVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 00733494; end: 0073378b;  */

/* WARNING: Removing unreachable block (ram,0x007335a8) */

void FUN_00733494(long param_1,undefined **param_2,undefined1 param_3,int param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined1 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_118 = PTR___NSConcreteStackBlock_00999f30;
  uStack_110 = 0xc0000000;
  pcStack_108 = FUN_0073378c;
  puStack_100 = &UNK_00a1fca0;
  ppuVar1 = &puStack_118;
  uStack_f8 = param_3;
  _objc_retainBlock();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
  func_0x00781fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0078ac60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00780860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_retain(lVar3);
  lVar4 = lVar3;
  func_0x00780ea0();
  do {
    if (lVar4 == 0) {
      _objc_release(lVar3);
      ppuVar6 = ppuVar2;
      func_0x00780e20();
      _objc_release(lVar3);
      _objc_release(ppuVar2);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_70) {
        ___stack_chk_fail();
        _objc_retain(param_2);
        if (*(char *)(ppuVar1 + 4) == '\x01') {
          ppuVar1 = param_2;
          func_0x00791f80(param_2);
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = ppuVar1;
          func_0x00791f20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar1);
        }
        else {
          _objc_retain(param_2);
          ppuVar6 = param_2;
        }
        _objc_release(param_2);
      }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(ppuVar6);
      return;
    }
    lVar9 = 0;
    do {
      ppuVar5 = *(undefined ***)(lVar9 * 8);
      func_0x00780860();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar5;
      func_0x00780e80();
      if (ppuVar6 == (undefined **)((long)&MACH_HEADER.magic + 2)) {
        ppuVar6 = ppuVar5;
        func_0x00789e20();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar6;
        func_0x007882e0();
        if (ppuVar7 != (undefined **)0x0) {
          ppuVar7 = ppuVar5;
          func_0x00789e20();
          _objc_retainAutoreleasedReturnValue();
          ppuVar8 = ppuVar7;
          func_0x007882e0();
          _objc_release(ppuVar7);
          _objc_release(ppuVar6);
          if (ppuVar8 == (undefined **)0x0) goto LAB_007336ec;
          ppuVar6 = ppuVar5;
          func_0x00789e20(ppuVar5);
          _objc_retainAutoreleasedReturnValue();
          ppuVar7 = ppuVar1;
          (*(code *)ppuVar1[2])(ppuVar1,ppuVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar6);
          ppuVar6 = ppuVar7;
          if (param_4 != 0) {
            func_0x00788bc0(ppuVar7);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar7);
          }
          ppuVar7 = ppuVar5;
          func_0x00789e20(ppuVar5);
          _objc_retainAutoreleasedReturnValue();
          ppuVar8 = ppuVar1;
          param_2 = ppuVar7;
          (*(code *)ppuVar1[2])(ppuVar1,ppuVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x0078f4e0(ppuVar2);
          _objc_release(ppuVar8);
          _objc_release(ppuVar7);
        }
        _objc_release(ppuVar6);
      }
LAB_007336ec:
      _objc_release(ppuVar5);
      lVar9 = lVar9 + 1;
    } while (lVar4 != lVar9);
    lVar4 = lVar3;
    func_0x00780ea0();
  } while( true );
}



/* Entry: 0073378c; end: 0073381f;  */

void FUN_0073378c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    uVar1 = param_2;
    func_0x00791f80(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00791f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    _objc_retain(param_2);
    uVar2 = param_2;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 00733820; end: 00733b8f;  */

void FUN_00733820(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_00ac36f8;
  _objc_alloc();
  func_0x00786bc0();
  puVar2 = puVar1;
  func_0x0078acc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00789700();
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    func_0x0077f120();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar3);
    puVar4 = puVar3;
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
  puVar3 = puVar4;
  func_0x00780e80(puVar4);
  func_0x00782000(puVar2,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(puVar4);
  puVar3 = puVar4;
  func_0x00780ea0(puVar4,param_2,&uStack_1b0,auStack_f0,0x10);
  if (puVar3 != (undefined *)0x0) {
    lVar9 = 0;
    lVar11 = *plStack_1a0;
    do {
      puVar7 = (undefined *)0x0;
      do {
        if (*plStack_1a0 != lVar11) {
          _objc_enumerationMutation(puVar4);
        }
        uVar10 = *(undefined8 *)(lStack_1a8 + (long)puVar7 * 8);
        puVar5 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
        func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,lVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00789760(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x0078f4e0(puVar2,param_2,puVar5,uVar10);
        _objc_release(uVar10);
        _objc_release(puVar5);
        lVar9 = lVar9 + 1;
        puVar7 = puVar7 + 1;
      } while (puVar3 != puVar7);
      puVar3 = puVar4;
      func_0x00780ea0(puVar4,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar4);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  _objc_retain(param_3);
  lVar9 = param_3;
  func_0x00780ea0(param_3,param_2,&uStack_1f0,auStack_170,0x10);
  if (lVar9 != 0) {
    lVar11 = *plStack_1e0;
    do {
      lVar8 = 0;
      do {
        if (*plStack_1e0 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        puVar3 = PTR__OBJC_CLASS___NSURLQueryItem_00ac3700;
        uVar10 = *(undefined8 *)(lStack_1e8 + lVar8 * 8);
        lVar6 = param_3;
        func_0x00789f00(param_3,param_2,uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x0078aca0(puVar3,param_2,uVar10,lVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
        puVar7 = puVar2;
        func_0x00789f00(puVar2,param_2,uVar10);
        _objc_retainAutoreleasedReturnValue();
        if (puVar7 == (undefined *)0x0) {
          func_0x0077e720(puVar4,param_2,puVar3);
        }
        else {
          puVar5 = puVar7;
          func_0x00787200(puVar7);
          func_0x0078f460(puVar4,param_2,puVar3,puVar5);
        }
        _objc_release(puVar7);
        _objc_release(puVar3);
        lVar8 = lVar8 + 1;
      } while (lVar9 != lVar8);
      lVar9 = param_3;
      func_0x00780ea0(param_3,param_2,&uStack_1f0,auStack_170,0x10);
    } while (lVar9 != 0);
  }
  _objc_release(param_3);
  puVar7 = puVar4;
  func_0x00780e80();
  puVar3 = (undefined *)0x0;
  if (puVar7 != (undefined *)0x0) {
    puVar3 = puVar4;
  }
  func_0x0078fa20(puVar1,param_2,puVar3);
  puVar3 = puVar1;
  func_0x0077baa0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_70) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSURLComponents_00ac36f8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSURLComponents_00ac36f8);
    lVar9 = param_3;
    func_0x0078c380(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00790260(puVar1,param_2,lVar9);
    _objc_release(lVar9);
    lVar9 = param_3;
    func_0x007844a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078e560(puVar1,param_2,lVar9);
    _objc_release(lVar9);
    func_0x0078a400(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078f6c0(puVar1,param_2,param_3);
    _objc_release(param_3);
    puVar3 = puVar1;
    func_0x0077baa0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 00733b90; end: 00733c5b;  */

void FUN_00733b90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_00ac36f8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSURLComponents_00ac36f8);
  uVar2 = param_1;
  func_0x0078c380(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00790260(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x007844a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078e560(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x0078a400(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f6c0(puVar1,param_2,param_1);
  _objc_release(param_1);
  puVar3 = puVar1;
  func_0x0077baa0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 00733c5c; end: 00733e77;  */

/* WARNING: Removing unreachable block (ram,0x00733d44) */

void FUN_00733c5c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar6 = param_3;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x0077eae0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00780e80();
  _objc_release(lVar1);
  if (lVar10 == 0) {
    ppuVar8 = &PTR____CFConstantStringClassReference_00a212a0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_00ac30b0;
    func_0x0077bc20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
    func_0x00791e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00780ea0();
    while (lVar1 != 0) {
      lVar10 = 0;
      do {
        uVar9 = *(undefined8 *)(lVar10 * 8);
        func_0x00791e40();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = param_3;
        func_0x00789f00();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar6;
        func_0x00791e40();
        _objc_retainAutoreleasedReturnValue();
        func_0x0077eec0(ppuVar3);
        _objc_release(lVar4);
        _objc_release(lVar6);
        _objc_release(uVar9);
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = param_3;
      func_0x00780ea0();
    }
    _objc_release(param_3);
    ppuVar8 = ppuVar3;
    func_0x007882e0(ppuVar3);
    lVar6 = (long)ppuVar8 + -1;
    func_0x00781d80(ppuVar3);
    ppuVar8 = ppuVar3;
    func_0x00780e20();
    _objc_release(ppuVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar7) {
    ___stack_chk_fail();
    _objc_retain(lVar6);
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSURLComponents_00ac36f8;
    func_0x00780880();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar8 = *(undefined ***)PTR__kCFAllocatorDefault_00999d30;
      lVar1 = lVar6;
      func_0x007815a0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar1;
      _objc_retainAutorelease();
      func_0x0077fde0();
      lVar7 = lVar6;
      func_0x007882e0(lVar6);
      _CFURLCreateWithBytes(ppuVar8,lVar10,lVar7,0x8000100,0);
      _objc_release(lVar1);
    }
    else {
      ppuVar8 = ppuVar3;
      func_0x00793360(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSCharacterSet_00ac30b0;
      func_0x0077bc40(PTR__OBJC_CLASS___NSCharacterSet_00ac30b0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar8;
      func_0x00791e40(ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00790fe0(ppuVar3);
      _objc_release(ppuVar5);
      _objc_release(puVar2);
      _objc_release(ppuVar8);
      ppuVar8 = ppuVar3;
      func_0x0078a3e0(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSCharacterSet_00ac30b0;
      func_0x0077bbe0(PTR__OBJC_CLASS___NSCharacterSet_00ac30b0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar8;
      func_0x00791e40(ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x0078f680(ppuVar3);
      _objc_release(ppuVar5);
      _objc_release(puVar2);
      _objc_release(ppuVar8);
      ppuVar8 = ppuVar3;
      func_0x007844a0(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSCharacterSet_00ac30b0;
      func_0x0077bbc0(PTR__OBJC_CLASS___NSCharacterSet_00ac30b0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar8;
      func_0x00791e40(ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x0078e560(ppuVar3);
      _objc_release(ppuVar5);
      _objc_release(puVar2);
      _objc_release(ppuVar8);
      ppuVar8 = ppuVar3;
      func_0x0078a400(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSCharacterSet_00ac30b0;
      func_0x0077bc00(PTR__OBJC_CLASS___NSCharacterSet_00ac30b0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar8;
      func_0x00791e40(ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x0078f6c0(ppuVar3);
      _objc_release(ppuVar5);
      _objc_release(puVar2);
      _objc_release(ppuVar8);
      ppuVar8 = ppuVar3;
      func_0x0078ac60(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSCharacterSet_00ac30b0;
      func_0x0077bc20(PTR__OBJC_CLASS___NSCharacterSet_00ac30b0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar8;
      func_0x00791e40(ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x0078fa00(ppuVar3);
      _objc_release(ppuVar5);
      _objc_release(puVar2);
      _objc_release(ppuVar8);
      ppuVar8 = ppuVar3;
      func_0x00783b00(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSCharacterSet_00ac30b0;
      func_0x0077bba0(PTR__OBJC_CLASS___NSCharacterSet_00ac30b0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar8;
      func_0x00791e40(ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x0078e220(ppuVar3);
      _objc_release(ppuVar5);
      _objc_release(puVar2);
      _objc_release(ppuVar8);
      ppuVar8 = ppuVar3;
      func_0x0077baa0(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar3);
    _objc_release(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(ppuVar8);
  return;
}



/* Entry: 00733e78; end: 007341b3;  */

void FUN_00733e78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_00ac36f8;
  func_0x00780880();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar7 = *(undefined **)PTR__kCFAllocatorDefault_00999d30;
    uVar4 = param_3;
    func_0x007815a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    _objc_retainAutorelease();
    func_0x0077fde0();
    uVar6 = param_3;
    func_0x007882e0(param_3);
    _CFURLCreateWithBytes(puVar7,uVar5,uVar6,0x8000100,0);
    _objc_release(uVar4);
  }
  else {
    puVar7 = puVar1;
    func_0x00793360(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_00ac30b0;
    func_0x0077bc40(PTR__OBJC_CLASS___NSCharacterSet_00ac30b0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00791e40(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00790fe0(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar7);
    puVar7 = puVar1;
    func_0x0078a3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_00ac30b0;
    func_0x0077bbe0(PTR__OBJC_CLASS___NSCharacterSet_00ac30b0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00791e40(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078f680(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar7);
    puVar7 = puVar1;
    func_0x007844a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_00ac30b0;
    func_0x0077bbc0(PTR__OBJC_CLASS___NSCharacterSet_00ac30b0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00791e40(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078e560(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar7);
    puVar7 = puVar1;
    func_0x0078a400(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_00ac30b0;
    func_0x0077bc00(PTR__OBJC_CLASS___NSCharacterSet_00ac30b0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00791e40(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078f6c0(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar7);
    puVar7 = puVar1;
    func_0x0078ac60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_00ac30b0;
    func_0x0077bc20(PTR__OBJC_CLASS___NSCharacterSet_00ac30b0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00791e40(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078fa00(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar7);
    puVar7 = puVar1;
    func_0x00783b00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_00ac30b0;
    func_0x0077bba0(PTR__OBJC_CLASS___NSCharacterSet_00ac30b0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00791e40(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078e220(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar7);
    puVar7 = puVar1;
    func_0x0077baa0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar7);
  return;
}



/* Entry: 007341b4; end: 0073458f;  */

undefined *
FUN_007341b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *unaff_x25;
  undefined *unaff_x26;
  long lVar9;
  long unaff_x27;
  undefined *puVar10;
  undefined *unaff_x28;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  long lStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_00ac36f8;
  func_0x007808a0(PTR__OBJC_CLASS___NSURLComponents_00ac36f8,param_2,param_1,0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x0078acc0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00789700();
  if (puVar8 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    func_0x0077f120();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar8);
    puVar2 = puVar8;
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(puVar2);
  puVar7 = puVar2;
  func_0x00780ea0(puVar2,param_2,&uStack_130,auStack_f0,0x10);
  puVar8 = puVar2;
  if (puVar7 != (undefined *)0x0) {
    unaff_x27 = *plStack_120;
    do {
      unaff_x28 = (undefined *)0x0;
      do {
        if (*plStack_120 != unaff_x27) {
          _objc_enumerationMutation(puVar2);
        }
        puVar8 = *(undefined **)(lStack_128 + (long)unaff_x28 * 8);
        unaff_x25 = puVar8;
        func_0x00789760();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = unaff_x25;
        func_0x00780080();
        _objc_release(unaff_x25);
        if (unaff_x26 == (undefined *)0x0) {
          _objc_retain(puVar8);
          _objc_release(puVar2);
          if (puVar8 == (undefined *)0x0) goto LAB_00734358;
          func_0x0078b460(puVar2,param_2,puVar8);
          goto LAB_00734350;
        }
        unaff_x28 = unaff_x28 + 1;
      } while (puVar7 != unaff_x28);
      puVar7 = puVar2;
      func_0x00780ea0(puVar2,param_2,&uStack_130,auStack_f0,0x10);
      puVar8 = puVar2;
    } while (puVar7 != (undefined *)0x0);
  }
LAB_00734350:
  _objc_release(puVar8);
LAB_00734358:
  puVar8 = PTR__OBJC_CLASS___NSURLQueryItem_00ac3700;
  func_0x0078aca0(PTR__OBJC_CLASS___NSURLQueryItem_00ac3700,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077e720(puVar2,param_2,puVar8);
  puVar6 = puVar2;
  func_0x0078fa20(puVar1);
  puVar7 = puVar1;
  func_0x0077baa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  uVar3 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_70) {
    ___stack_chk_fail();
    uStack_138 = 0x73440c;
    lStack_198 = *(long *)PTR____stack_chk_guard_00999f88;
    puStack_190 = unaff_x28;
    lStack_188 = unaff_x27;
    puStack_180 = unaff_x26;
    puStack_178 = unaff_x25;
    puStack_170 = puVar8;
    puStack_168 = puVar7;
    puStack_160 = puVar2;
    puStack_158 = puVar1;
    uStack_150 = param_4;
    uStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar6);
    puVar1 = PTR__OBJC_CLASS___NSURLComponents_00ac36f8;
    func_0x007808a0(PTR__OBJC_CLASS___NSURLComponents_00ac36f8,param_2,uVar3,0);
    _objc_retainAutoreleasedReturnValue();
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    puVar8 = puVar1;
    func_0x0078acc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar8;
    func_0x00780ea0();
    puVar7 = (undefined *)0x0;
    if (puVar2 != (undefined *)0x0) {
      lVar9 = *plStack_250;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_250 != lVar9) {
            _objc_enumerationMutation(puVar8);
          }
          puVar7 = *(undefined **)(lStack_258 + (long)puVar10 * 8);
          puVar4 = puVar7;
          func_0x00789760();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00780080();
          _objc_release(puVar4);
          if (puVar5 == (undefined *)0x0) {
            func_0x00793580();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_00734538;
          }
          puVar10 = puVar10 + 1;
        } while (puVar2 != puVar10);
        puVar2 = puVar8;
        func_0x00780ea0(puVar8,param_2,&uStack_260,auStack_218,0x10);
      } while (puVar2 != (undefined *)0x0);
      puVar7 = (undefined *)0x0;
    }
LAB_00734538:
    _objc_release(puVar8);
    _objc_release(puVar1);
    _objc_release(puVar6);
    if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_198) {
      ___stack_chk_fail();
      func_0x0077e1c0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar6;
      func_0x00788bc0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar1;
      func_0x00780c40();
      _objc_release(puVar1);
      _objc_release(puVar6);
      return puVar7;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar7);
  return puVar7;
}



/* Entry: 00734590; end: 007345f3;  */

undefined8 FUN_00734590(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0077e1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00788bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00780c40();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 007345f4; end: 00734683;  */

undefined8 FUN_007345f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0077e1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00788bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00780c40(uVar1,param_2,&PTR____CFConstantStringClassReference_00a4a380);
  if (((int)uVar2 == 0) ||
     (uVar2 = uVar1, func_0x00780c40(uVar1,param_2,&PTR____CFConstantStringClassReference_00a4a3a0),
     (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x00780c40(uVar1,param_2,&PTR____CFConstantStringClassReference_00a4a3c0);
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 00734684; end: 00734707;  */

ulong FUN_00734684(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x0078c380();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x007878e0();
  if ((uVar2 & 1) == 0) {
    func_0x0078c380(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x007878e0();
    _objc_release(param_1);
  }
  else {
    uVar2 = 1;
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 00734708; end: 007347a3;  */

/* WARNING: Type propagation algorithm not settling */

double FUN_00734708(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  double dVar3;
  long alStack_40 [4];
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_20 = 0x1500000001;
  alStack_40[1] = 0x10;
  _time(alStack_40);
  puVar2 = &uStack_20;
  _sysctl(puVar2,2,alStack_40 + 2,alStack_40 + 1,0,0);
  dVar3 = (double)(alStack_40[0] - alStack_40[2]);
  if (alStack_40[2] == 0 || (int)puVar2 == -1) {
    dVar3 = -1.0;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return dVar3;
  }
  ___stack_chk_fail(dVar3);
  _mach_continuous_time();
  if (lRam0000000000b6ce30 != -1) {
    _dispatch_once(0xb6ce30,&PTR___NSConcreteGlobalBlock_00a1fcc0);
  }
  uVar1 = 0;
  if ((ulong)uRam0000000000b6ce3c != 0) {
    uVar1 = ((long)puVar2 * (ulong)uRam0000000000b6ce38) / (ulong)uRam0000000000b6ce3c;
  }
  return (double)uVar1 / 1000000000.0;
}



/* Entry: 007347a4; end: 0073480f;  */

double FUN_007347a4(long param_1)

{
  ulong uVar1;
  
  _mach_continuous_time();
  if (lRam0000000000b6ce30 != -1) {
    _dispatch_once(0xb6ce30,&PTR___NSConcreteGlobalBlock_00a1fcc0);
  }
  uVar1 = 0;
  if ((ulong)uRam0000000000b6ce3c != 0) {
    uVar1 = (param_1 * (ulong)uRam0000000000b6ce38) / (ulong)uRam0000000000b6ce3c;
  }
  return (double)uVar1 / 1000000000.0;
}



/* Entry: 00734810; end: 0073481b;  */

void FUN_00734810(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a81c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mach_timebase_info_0099a3d0)(0xb6ce38);
  return;
}



/* Entry: 0073481c; end: 0073482b; -[SCTimeProvider epochDate] */

void FUN_0073481c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00781930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (0,PTR__OBJC_CLASS___NSDate_00ac2c88,PTR_s_dateWithTimeIntervalSince1970__00abb340);
  return;
}



/* Entry: 0073482c; end: 00734837; -[SCTimeProvider currentDate] */

void FUN_0073482c(void)

{
                    /* WARNING: Could not recover jumptable at 0x007817f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(PTR__OBJC_CLASS___NSDate_00ac2c88,PTR_s_date_00abb2f0);
  return;
}



/* Entry: 00734838; end: 00734883; -[SCTimeProvider absoluteSeconds] */

undefined8 FUN_00734838(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_00ac2c88;
  func_0x007817e0(PTR__OBJC_CLASS___NSDate_00ac2c88);
  _objc_retainAutoreleasedReturnValue();
  func_0x007928e0();
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 00734884; end: 00734887; -[SCTimeProvider currentRelativeSeconds] */

void FUN_00734884(void)

{
                    /* WARNING: Could not recover jumptable at 0x00779160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CACurrentMediaTime_00999810)();
  return;
}



/* Entry: 00734888; end: 0073488b; -[SCTimeProvider currentDeviceUpTimeInSeconds] */

/* WARNING: Type propagation algorithm not settling */

double FUN_00734888(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  double dVar3;
  long alStack_40 [4];
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_20 = 0x1500000001;
  alStack_40[1] = 0x10;
  _time(alStack_40);
  puVar2 = &uStack_20;
  _sysctl(puVar2,2,alStack_40 + 2,alStack_40 + 1,0,0);
  dVar3 = (double)(alStack_40[0] - alStack_40[2]);
  if (alStack_40[2] == 0 || (int)puVar2 == -1) {
    dVar3 = -1.0;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return dVar3;
  }
  ___stack_chk_fail(dVar3);
  _mach_continuous_time();
  if (lRam0000000000b6ce30 != -1) {
    _dispatch_once(0xb6ce30,&PTR___NSConcreteGlobalBlock_00a1fcc0);
  }
  uVar1 = 0;
  if ((ulong)uRam0000000000b6ce3c != 0) {
    uVar1 = ((long)puVar2 * (ulong)uRam0000000000b6ce38) / (ulong)uRam0000000000b6ce3c;
  }
  return (double)uVar1 / 1000000000.0;
}



/* Entry: 0073488c; end: 007348e3; -[SCTimeProvider traceEventCurrentTime] */

ulong FUN_0073488c(long param_1)

{
  ulong uVar1;
  uint uStack_28;
  uint uStack_24;
  
  _mach_absolute_time();
  _mach_timebase_info(&uStack_28);
  uVar1 = 0;
  if ((ulong)uStack_24 != 0) {
    uVar1 = (param_1 * (ulong)uStack_28) / (ulong)uStack_24;
  }
  return uVar1 / 100000;
}



/* Entry: 007348e4; end: 0073490f; +[SCTimeUtils currentTimeInMilliseconds] */

void FUN_007348e4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3708;
  func_0x00781440(PTR_PTR_00ac3708);
                    /* WARNING: Could not recover jumptable at 0x0078c470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(puVar1,PTR_s_secondsToMillis__00abde28);
  return;
}



/* Entry: 00734910; end: 0073495b; +[SCTimeUtils currentTimeInSeconds] */

undefined8 FUN_00734910(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_00ac2c88;
  func_0x007817e0(PTR__OBJC_CLASS___NSDate_00ac2c88);
  _objc_retainAutoreleasedReturnValue();
  func_0x007928e0();
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 0073495c; end: 0073496b; +[SCTimeUtils millisToSeconds:] */

double FUN_0073495c(double param_1)

{
  return param_1 / 1000.0;
}



/* Entry: 0073496c; end: 0073497b; +[SCTimeUtils secondsToMillis:] */

double FUN_0073496c(double param_1)

{
  return param_1 * 1000.0;
}



/* Entry: 0073497c; end: 0073498b; +[SCTimeUtils minutesToSeconds:] */

double FUN_0073497c(double param_1)

{
  return param_1 * 60.0;
}



/* Entry: 0073498c; end: 007349df; +[SCTimeUtils absoluteTimeToMicros:] */

ulong FUN_0073498c(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  uint uStack_28;
  uint uStack_24;
  
  iVar1 = (int)&uStack_28;
  _mach_timebase_info();
  uVar2 = 0;
  if ((iVar1 == 0) && (uStack_24 != 0)) {
    uVar2 = 0;
    if ((ulong)uStack_24 * 1000 != 0) {
      uVar2 = (param_3 * (ulong)uStack_28) / ((ulong)uStack_24 * 1000);
    }
  }
  return uVar2;
}



/* Entry: 007349e0; end: 00734a53; -[SCTimestamp init] */

undefined1 * FUN_007349e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac4618;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_00ac2c88;
    func_0x007817e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _CACurrentMediaTime();
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 00734a54; end: 00734a5b; -[SCTimestamp date] */

undefined8 FUN_00734a54(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 00734a5c; end: 00734a63; -[SCTimestamp mediaTime] */

undefined8 FUN_00734a5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 00734a64; end: 00734a6f; -[SCTimestamp .cxx_destruct] */

void FUN_00734a64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00734a70; end: 00734bcb;  */

void FUN_00734a70(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  _objc_retain();
  if (lRam0000000000b64348 != -1) {
    lVar2 = 0xb64348;
    _dispatch_once(0xb64348,&PTR___NSConcreteGlobalBlock_00a1fce0);
  }
  FUN_00734e00();
  lVar1 = param_3;
  _CFStringGetCStringPtr(param_3,0x8000100);
  if (lVar1 == 0) {
    lVar1 = param_3;
    _objc_retainAutorelease();
    func_0x0077bcc0();
    if (lVar1 != 0) goto LAB_00734ae4;
  }
  else {
LAB_00734ae4:
    if ((*(byte *)(lVar2 + 0x1c8) & 1) == 0) {
      *(undefined1 *)(lVar2 + 0x1c8) = 1;
      FUN_00734e90();
      if (*(char *)(lVar2 + 0x1c9) != '\x01') {
        uVar3 = *(undefined8 *)(lVar2 + 0x1b0);
        *(undefined8 *)(lVar2 + 0x1b8) = 0;
        *(undefined2 *)(lVar2 + 0x1c8) = 0;
        _objc_release(param_3);
        lVar1 = 0;
        _CFStringCreateWithCString(0,uVar3,0x8000100);
        lVar2 = lVar1;
        if (param_1 == lRam0000000000b64340) {
          lVar2 = 0;
          _CFStringCreateMutableCopy(0,0,lVar1);
          _CFRelease(lVar1);
        }
        goto LAB_00734b34;
      }
      *(undefined8 *)(lVar2 + 0x1b8) = 0;
      *(undefined2 *)(lVar2 + 0x1c8) = 0;
    }
  }
  _objc_release(param_3);
  _objc_alloc(param_1);
  func_0x007856e0();
  lVar2 = param_1;
LAB_00734b34:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar2);
  return;
}



/* Entry: 00734bcc; end: 00734d2f;  */

void FUN_00734bcc(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  _objc_retain();
  if (lRam0000000000b64348 != -1) {
    lVar3 = 0xb64348;
    _dispatch_once(0xb64348,&PTR___NSConcreteGlobalBlock_00a1fce0);
  }
  FUN_00734e00();
  lVar2 = param_3;
  _CFStringGetCStringPtr(param_3,0x8000100);
  if (lVar2 == 0) {
    lVar2 = param_3;
    _objc_retainAutorelease();
    func_0x0077bcc0();
    if (lVar2 != 0) goto LAB_00734c40;
LAB_00734c48:
    _objc_release(param_3);
  }
  else {
LAB_00734c40:
    if ((*(byte *)(lVar3 + 0x1c8) & 1) != 0) goto LAB_00734c48;
    *(undefined1 *)(lVar3 + 0x1c8) = 1;
    FUN_00734e90();
    bVar1 = *(byte *)(lVar3 + 0x1c9);
    if ((bVar1 & 1) == 0) {
      uVar4 = *(undefined8 *)(lVar3 + 0x1b0);
    }
    else {
      uVar4 = 0;
    }
    *(undefined8 *)(lVar3 + 0x1b8) = 0;
    *(undefined2 *)(lVar3 + 0x1c8) = 0;
    _objc_release(param_3);
    if (bVar1 == 0) {
      lVar2 = 0;
      _CFStringCreateWithCString(0,uVar4,0x8000100);
      lVar3 = lVar2;
      if (param_1 == lRam0000000000b64340) {
        lVar3 = 0;
        _CFStringCreateMutableCopy(0,0,lVar2);
        _CFRelease(lVar2);
      }
      goto LAB_00734ca8;
    }
  }
  _objc_alloc(param_1);
  func_0x007856e0();
  lVar3 = param_1;
LAB_00734ca8:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar3);
  return;
}



/* Entry: 00734d30; end: 00734dff;  */

void FUN_00734d30(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _pthread_key_create(0xb64350,0x734dd0);
  uVar1 = 0;
  _CFAllocatorAllocate(0,3000,0);
  uRam0000000000b64538 = 3000;
  uRam0000000000b64530 = 0;
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  uRam0000000000b64528 = uVar1;
  _objc_opt_class();
  puVar3 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  puRam0000000000b64358 = puVar2;
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSArray_00ac2c28;
  puRam0000000000b64360 = puVar3;
  _objc_opt_class();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  puRam0000000000b64368 = puVar2;
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
  puRam0000000000b64370 = puVar3;
  _objc_opt_class();
  puRam0000000000b64340 = puVar2;
  return;
}



/* Entry: 00734e00; end: 00734e8f;  */

long FUN_00734e00(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_00ac30f8;
  func_0x00787a60();
  if (((ulong)puVar1 & 1) == 0) {
    lVar2 = lRam0000000000b64350;
    _pthread_getspecific();
    if (lVar2 == 0) {
      _CFAllocatorAllocate();
      uVar3 = 0;
      _CFAllocatorAllocate(0,3000,0);
      *(undefined8 *)(lVar2 + 0x1b8) = 0;
      *(undefined8 *)(lVar2 + 0x1c0) = 3000;
      *(undefined8 *)(lVar2 + 0x1b0) = uVar3;
      *(undefined2 *)(lVar2 + 0x1c8) = 0;
      _pthread_setspecific(lRam0000000000b64350,lVar2);
    }
  }
  else {
    lVar2 = 0xb64378;
  }
  return lVar2;
}



/* Entry: 00734e90; end: 007355b7;  */

void FUN_00734e90(long param_1,long param_2,long *param_3)

{
  char cVar1;
  uint6 uVar2;
  undefined1 auVar3 [16];
  ushort uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  byte bVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  bool bVar22;
  int iVar23;
  
  lVar16 = param_1;
  _strlen();
  if (0 < lVar16) {
    lVar15 = 0;
    bVar22 = true;
    do {
      lVar10 = param_1 + lVar15;
      _memchr(lVar10,0x25,lVar16 - lVar15);
      lVar21 = lVar10 - param_1;
      lVar20 = lVar16;
      if (lVar10 != 0) {
        lVar20 = lVar21;
      }
      if (bVar22) {
        if ((lVar20 < lVar16) && (*(char *)(param_1 + lVar20 + 1) != '%')) {
          if (1 < lVar16 - lVar20) {
            lVar18 = (lVar16 + -2) - lVar20;
            pbVar12 = (byte *)(param_1 + 1 + lVar20);
            do {
              bVar11 = *pbVar12;
              if (bVar11 == 0x24) goto LAB_0073557c;
              bVar22 = lVar18 != 0;
              lVar18 = lVar18 + -1;
              pbVar12 = pbVar12 + 1;
            } while (0xfffffff5 < bVar11 - 0x3a && bVar22);
          }
          goto LAB_00734f7c;
        }
        bVar22 = true;
      }
      else {
LAB_00734f7c:
        bVar22 = false;
      }
      lVar18 = lVar20 - lVar15;
      lVar19 = *(long *)(param_2 + 0x1b8);
      lVar7 = *(long *)(param_2 + 0x1b0);
      if (*(long *)(param_2 + 0x1c0) <= lVar19 + lVar18) {
        lVar19 = (lVar19 + lVar18) * 2;
        lVar7 = 0;
        _CFAllocatorReallocate(0,*(long *)(param_2 + 0x1b0),lVar19,0);
        *(long *)(param_2 + 0x1b0) = lVar7;
        *(long *)(param_2 + 0x1c0) = lVar19;
        lVar19 = *(long *)(param_2 + 0x1b8);
      }
      _memcpy(lVar7 + lVar19,param_1 + lVar15,lVar18);
      lVar18 = *(long *)(param_2 + 0x1b8) + lVar18;
      *(long *)(param_2 + 0x1b8) = lVar18;
      if (lVar10 == 0) break;
      lVar15 = param_1 + lVar21;
      bVar11 = *(byte *)(lVar15 + 1);
      if (bVar11 < 0x53) {
        if (bVar11 == 0x25) {
          lVar15 = *(long *)(param_2 + 0x1b0);
          if (*(long *)(param_2 + 0x1c0) <= lVar18 + 1) {
            lVar10 = (lVar18 + 1) * 2;
            lVar15 = 0;
            _CFAllocatorReallocate(0,*(long *)(param_2 + 0x1b0),lVar10,0);
            *(long *)(param_2 + 0x1b0) = lVar15;
            *(long *)(param_2 + 0x1c0) = lVar10;
            lVar18 = *(long *)(param_2 + 0x1b8);
          }
          *(undefined1 *)(lVar15 + lVar18) = 0x25;
          lVar10 = *(long *)(param_2 + 0x1b8) + 1;
LAB_00735344:
          *(long *)(param_2 + 0x1b8) = lVar10;
          lVar15 = lVar21 + 2;
        }
        else {
          if (bVar11 != 0x40) {
            if (bVar11 != 0x43) goto LAB_00735204;
            goto LAB_00735088;
          }
          puVar13 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar13 + 1);
          puVar17 = (undefined *)*puVar13;
          _objc_retain(puVar17);
          func_0x007358e8(puVar17,0,param_2,0,0);
LAB_007351f0:
          lVar15 = lVar21 + 2;
          _objc_release(puVar17);
        }
      }
      else {
        if (bVar11 == 0x53) {
LAB_00735088:
          if (bVar11 == 0x53) {
            lVar15 = 0;
            plVar14 = (long *)*param_3;
            *param_3 = (long)(plVar14 + 1);
            do {
              lVar10 = lVar15 * 2;
              lVar15 = lVar15 + 1;
            } while (*(short *)(*plVar14 + lVar10) != 0);
          }
          else {
            *param_3 = *param_3 + 8;
          }
          puVar17 = PTR__OBJC_CLASS___NSString_00ac2988;
          _objc_alloc();
          func_0x00784f60();
          puVar8 = puVar17;
          _objc_retainAutorelease();
          func_0x0077bcc0();
          if (puVar8 == (undefined *)0x0) {
            *(undefined1 *)(param_2 + 0x1c9) = 1;
            _objc_release(puVar17);
            return;
          }
          puVar9 = puVar8;
          _strlen();
          lVar15 = *(long *)(param_2 + 0x1b8);
          lVar10 = *(long *)(param_2 + 0x1b0);
          if (*(long *)(param_2 + 0x1c0) <= (long)(puVar9 + lVar15)) {
            lVar15 = (long)(puVar9 + lVar15) * 2;
            lVar10 = 0;
            _CFAllocatorReallocate(0,*(long *)(param_2 + 0x1b0),lVar15,0);
            *(long *)(param_2 + 0x1b0) = lVar10;
            *(long *)(param_2 + 0x1c0) = lVar15;
            lVar15 = *(long *)(param_2 + 0x1b8);
          }
          _memcpy(lVar10 + lVar15,puVar8,puVar9);
          *(undefined **)(param_2 + 0x1b8) = puVar9 + *(long *)(param_2 + 0x1b8);
          goto LAB_007351f0;
        }
        if (bVar11 == 0x73) {
          plVar14 = (long *)*param_3;
          *param_3 = (long)(plVar14 + 1);
          lVar15 = *plVar14;
          if (lVar15 == 0) {
            lVar15 = *(long *)(param_2 + 0x1b8);
            lVar10 = *(long *)(param_2 + 0x1b0);
            if (*(long *)(param_2 + 0x1c0) <= lVar15 + 6) {
              lVar15 = (lVar15 + 6) * 2;
              lVar10 = 0;
              _CFAllocatorReallocate(0,*(long *)(param_2 + 0x1b0),lVar15,0);
              *(long *)(param_2 + 0x1b0) = lVar10;
              *(long *)(param_2 + 0x1c0) = lVar15;
              lVar15 = *(long *)(param_2 + 0x1b8);
            }
            *(undefined2 *)((undefined4 *)(lVar10 + lVar15) + 1) = 0x296c;
            *(undefined4 *)(lVar10 + lVar15) = 0x6c756e28;
            lVar10 = 6;
          }
          else {
            lVar10 = lVar15;
            _strlen();
            lVar20 = *(long *)(param_2 + 0x1b8);
            lVar18 = *(long *)(param_2 + 0x1b0);
            if (*(long *)(param_2 + 0x1c0) <= lVar20 + lVar10) {
              lVar20 = (lVar20 + lVar10) * 2;
              lVar18 = 0;
              _CFAllocatorReallocate(0,*(long *)(param_2 + 0x1b0),lVar20,0);
              *(long *)(param_2 + 0x1b0) = lVar18;
              *(long *)(param_2 + 0x1c0) = lVar20;
              lVar20 = *(long *)(param_2 + 0x1b8);
            }
            _memcpy(lVar18 + lVar20,lVar15,lVar10);
          }
          lVar10 = *(long *)(param_2 + 0x1b8) + lVar10;
          goto LAB_00735344;
        }
        if (bVar11 == 0x6e) goto LAB_0073557c;
LAB_00735204:
        lVar10 = -1;
        do {
          lVar18 = lVar10;
          if (lVar18 - (lVar16 - lVar21 & (lVar16 - lVar21 >> 0x3f ^ 0xffffffffffffffffU)) == -1)
          goto LAB_0073557c;
          iVar5 = (int)*(char *)(lVar15 + lVar18 + 1);
          ___tolower();
          iVar23 = iVar5 << 0x18;
          iVar6 = -(uint)(((byte)iVar5 & 0xfb) == 0x61);
          uVar2 = CONCAT15((char)(-(uint)(iVar23 == 0x75000000) >> 8),
                           CONCAT14((char)-(uint)(iVar23 == 0x75000000),
                                    -(uint)(iVar23 == 0x78000000))) & 0xffff0000ffff;
          auVar3[2] = (char)-(uint)(iVar23 == 0x64000000);
          auVar3._0_2_ = -(ushort)(((byte)iVar5 & 0xef) == 99);
          auVar3[3] = (char)(-(uint)(iVar23 == 0x64000000) >> 8);
          auVar3[4] = (char)-(uint)(iVar23 == 0x69000000);
          auVar3[5] = (char)(-(uint)(iVar23 == 0x69000000) >> 8);
          auVar3[6] = (char)-(uint)(iVar23 == 0x6f000000);
          auVar3[7] = (char)(-(uint)(iVar23 == 0x6f000000) >> 8);
          auVar3[8] = (char)uVar2;
          auVar3[9] = (char)(uVar2 >> 8);
          auVar3[10] = (char)(uVar2 >> 0x20);
          auVar3[0xb] = (char)(uVar2 >> 0x28);
          auVar3[0xc] = (char)-(uint)(iVar23 == 0x66000000);
          auVar3[0xd] = (char)(-(uint)(iVar23 == 0x66000000) >> 8);
          auVar3[0xe] = (char)iVar6;
          auVar3[0xf] = (char)((uint)iVar6 >> 8);
          uVar4 = NEON_umaxv(auVar3,2);
        } while (((uVar4 & 1) == 0) &&
                (lVar10 = lVar18 + 1, iVar5 << 0x18 != 0x70000000 && iVar5 << 0x18 != 0x67000000));
        if ((lVar18 == 0x7ffffffffffffffd) ||
           ((lVar10 = lVar18 + 2, 0x1e < lVar10 ||
            (cVar1 = *(char *)(lVar15 + lVar18 + 1), iVar6 = (int)cVar1, cVar1 == 'O')))) {
LAB_0073557c:
          *(undefined1 *)(param_2 + 0x1c9) = 1;
          return;
        }
        ___tolower();
        if (iVar6 < 0x69) {
          if (iVar6 < 0x65) {
            if (iVar6 != 0x61) {
              if (iVar6 != 99) {
                if (iVar6 != 100) goto LAB_0073557c;
                goto LAB_007353dc;
              }
LAB_00735484:
              _memcpy(param_2 + 400,lVar15,lVar10);
              *(undefined1 *)(param_2 + lVar18 + 0x192) = 0;
              *param_3 = *param_3 + 8;
              goto LAB_007354b4;
            }
          }
          else if (2 < iVar6 - 0x65U) goto LAB_0073557c;
          _memcpy(param_2 + 400,lVar15,lVar10);
          *(undefined1 *)(param_2 + lVar18 + 0x192) = 0;
          *param_3 = *param_3 + 8;
        }
        else {
          if (iVar6 < 0x70) {
            if (iVar6 != 0x69) {
              if (iVar6 != 0x6f) goto LAB_0073557c;
              goto LAB_007353c4;
            }
LAB_007353dc:
            bVar11 = *(byte *)(lVar15 + lVar18);
            if (bVar11 < 0x71) {
              if ((bVar11 == 0x68) || ((bVar11 != 0x6a && (bVar11 != 0x6c)))) goto LAB_00735484;
              goto LAB_00735454;
            }
            if (bVar11 != 0x7a) {
LAB_00735420:
              if (bVar11 == 0x74) goto LAB_00735454;
              if (bVar11 != 0x71) goto LAB_00735484;
            }
            _memcpy(param_2 + 400,lVar15,lVar18);
            *(undefined4 *)(param_2 + lVar18 + 400) = 0x646c6c;
          }
          else {
            if (iVar6 != 0x70) {
              if ((iVar6 != 0x75) && (iVar6 != 0x78)) goto LAB_0073557c;
LAB_007353c4:
              bVar11 = *(byte *)(lVar15 + lVar18);
              if (bVar11 < 0x6c) {
                if ((bVar11 == 0x68) || (bVar11 != 0x6a)) goto LAB_00735484;
              }
              else if (bVar11 != 0x6c) goto LAB_00735420;
            }
LAB_00735454:
            _memcpy(param_2 + 400,lVar15,lVar10);
            *(undefined1 *)(param_2 + lVar18 + 0x192) = 0;
          }
          *param_3 = *param_3 + 8;
        }
LAB_007354b4:
        lVar10 = param_2;
        _snprintf(param_2,400,param_2 + 400);
        lVar15 = *(long *)(param_2 + 0x1b8);
        iVar6 = (int)lVar10;
        lVar10 = *(long *)(param_2 + 0x1b0);
        if (*(long *)(param_2 + 0x1c0) <= lVar15 + iVar6) {
          lVar15 = (lVar15 + iVar6) * 2;
          lVar10 = 0;
          _CFAllocatorReallocate(0,*(long *)(param_2 + 0x1b0),lVar15,0);
          *(long *)(param_2 + 0x1b0) = lVar10;
          *(long *)(param_2 + 0x1c0) = lVar15;
          lVar15 = *(long *)(param_2 + 0x1b8);
        }
        _memcpy(lVar10 + lVar15,param_2,(long)iVar6);
        *(long *)(param_2 + 0x1b8) = *(long *)(param_2 + 0x1b8) + (long)iVar6;
        lVar15 = lVar20 + lVar18 + 2;
      }
    } while (lVar15 < lVar16);
  }
  lVar16 = *(long *)(param_2 + 0x1b8);
  lVar15 = *(long *)(param_2 + 0x1b0);
  if (*(long *)(param_2 + 0x1c0) <= lVar16 + 1) {
    lVar16 = (lVar16 + 1) * 2;
    lVar15 = 0;
    _CFAllocatorReallocate(0,*(long *)(param_2 + 0x1b0),lVar16,0);
    *(long *)(param_2 + 0x1b0) = lVar15;
    *(long *)(param_2 + 0x1c0) = lVar16;
    lVar16 = *(long *)(param_2 + 0x1b8);
  }
  *(undefined1 *)(lVar15 + lVar16) = 0;
  *(long *)(param_2 + 0x1b8) = *(long *)(param_2 + 0x1b8) + 1;
  return;
}



/* Entry: 007355b8; end: 0073561b;  */

void FUN_007355b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x0078c120(param_1,param_2,param_3,param_4,&PTR____CFConstantStringClassReference_00a27c80);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 0073561c; end: 00736643;  */

void FUN_0073561c(undefined8 param_1,long param_2,undefined **param_3,undefined **param_4,
                 long param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == (undefined **)0x0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_00a212a0;
    goto LAB_007358ac;
  }
  ppuVar1 = param_3;
  func_0x007882e0();
  ppuVar5 = &PTR____CFConstantStringClassReference_00a212a0;
  if (ppuVar1 == (undefined **)0x0) goto LAB_007358ac;
  ppuVar5 = param_3;
  if (((param_4 == (undefined **)0x0) || (param_5 == 0)) ||
     (lVar6 = param_5, func_0x007882e0(), lVar6 == 0)) {
    _objc_retain(param_3);
    goto LAB_007358ac;
  }
  _objc_retain(param_3);
  func_0x007882e0(param_3);
  ppuVar1 = param_3;
  func_0x007882e0();
  if (ppuVar1 == (undefined **)0x0) {
LAB_00735870:
    func_0x00780e80(param_4);
    _objc_retain(param_3);
  }
  else {
    lVar6 = 0;
    do {
      ppuVar1 = param_3;
      func_0x0078ae40();
      if (ppuVar1 == (undefined **)0x7fffffffffffffff) break;
      lVar6 = lVar6 + 1;
      ppuVar1 = (undefined **)((long)ppuVar1 + param_2);
      func_0x007882e0();
      ppuVar8 = param_3;
      func_0x007882e0();
    } while (ppuVar1 < ppuVar8);
    if (lVar6 == 0) goto LAB_00735870;
    func_0x00780e80(param_4);
    ppuVar1 = param_3;
    func_0x00789700();
    func_0x007882e0();
    ppuVar5 = ppuVar1;
    func_0x0078ae40();
    if (ppuVar5 != (undefined **)0x7fffffffffffffff) {
      ppuVar8 = (undefined **)0x0;
      do {
        ppuVar2 = param_4;
        func_0x00780e80();
        ppuVar7 = &PTR____CFConstantStringClassReference_00a212a0;
        if (ppuVar8 < ppuVar2) {
          ppuVar2 = param_4;
          func_0x00789e20();
          _objc_retainAutoreleasedReturnValue();
          if (ppuVar2 != (undefined **)0x0) {
            puVar3 = PTR__OBJC_CLASS___NSObject_00ac2b58;
            _objc_opt_class(PTR__OBJC_CLASS___NSObject_00ac2b58);
            ppuVar4 = ppuVar2;
            _objc_opt_isKindOfClass(ppuVar2,puVar3);
            if (((ulong)ppuVar4 & 1) != 0) {
              ppuVar4 = ppuVar2;
              func_0x00781e40();
              _objc_retainAutoreleasedReturnValue();
              if (ppuVar4 != (undefined **)0x0) {
                ppuVar7 = ppuVar4;
              }
              _objc_retain(ppuVar7);
              _objc_release(ppuVar4);
            }
          }
          ppuVar8 = (undefined **)((long)ppuVar8 + 1);
          _objc_release(ppuVar2);
        }
        func_0x0078b5a0(ppuVar1);
        ppuVar2 = ppuVar7;
        func_0x007882e0();
        ppuVar4 = ppuVar1;
        func_0x007882e0();
        if (ppuVar4 <= (undefined **)((long)ppuVar2 + (long)ppuVar5)) {
          _objc_release(ppuVar7);
          break;
        }
        func_0x007882e0(ppuVar1);
        ppuVar5 = ppuVar1;
        func_0x0078ae40();
        _objc_release(ppuVar7);
      } while (ppuVar5 != (undefined **)0x7fffffffffffffff);
    }
    ppuVar5 = ppuVar1;
    func_0x00780e20(ppuVar1);
    _objc_release(ppuVar1);
  }
  _objc_release(param_3);
LAB_007358ac:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(ppuVar5);
  return;
}



/* Entry: 00736644; end: 007366cb;  */

bool FUN_00736644(char *param_1,long param_2)

{
  char cVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  
  puVar2 = PTR___DefaultRuneLocale_00999f28;
  if (param_2 != 0) {
    if (param_2 < 1) {
      bVar3 = false;
    }
    else {
      do {
        param_2 = param_2 + -1;
        cVar1 = *param_1;
        lVar5 = (long)cVar1;
        if (cVar1 < 0) {
          ___maskrune(lVar5,0x500);
          uVar4 = (uint)lVar5;
        }
        else {
          uVar4 = *(uint *)(puVar2 + (ulong)(uint)(int)cVar1 * 4 + 0x3c) & 0x500;
        }
        bVar3 = uVar4 == 0;
        param_1 = param_1 + 1;
      } while (uVar4 != 0 && param_2 != 0);
    }
    return bVar3;
  }
  return true;
}



/* Entry: 007366cc; end: 0073676f; -[FBTweakNumericRange initWithMinimumValue:maximumValue:] */

undefined1 *
FUN_007366cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac4620;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
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



/* Entry: 00736770; end: 00736807; -[FBTweakNumericRange initWithCoder:] */

undefined8 FUN_00736770(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00781b00(param_3,param_2,&PTR____CFConstantStringClassReference_00a4a420);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00781b00(param_3,param_2,&PTR____CFConstantStringClassReference_00a4a440);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00785be0(param_1,param_2,uVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 00736808; end: 00736867; -[FBTweakNumericRange encodeWithCoder:] */

void FUN_00736808(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00782780(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_00a4a420);
  func_0x00782780(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                  &PTR____CFConstantStringClassReference_00a4a440);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00736868; end: 0073686f; -[FBTweakNumericRange minimumValue] */

undefined8 FUN_00736868(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 00736870; end: 0073689f; -[FBTweakNumericRange setMinimumValue:] */

void FUN_00736870(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 007368a0; end: 007368a7; -[FBTweakNumericRange maximumValue] */

undefined8 FUN_007368a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 007368a8; end: 007368d7; -[FBTweakNumericRange setMaximumValue:] */

void FUN_007368a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 007368d8; end: 00736907; -[FBTweakNumericRange .cxx_destruct] */

void FUN_007368d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00736908; end: 00736b0f; -[FBTweak initWithCoder:] */

long FUN_00736908(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00781b00(param_3,param_2,&PTR____CFConstantStringClassReference_00a4a460);
  _objc_retainAutoreleasedReturnValue();
  func_0x00785880(param_1,param_2,lVar1);
  if (param_1 != 0) {
    lVar4 = param_3;
    func_0x00781b00(param_3,param_2,&PTR____CFConstantStringClassReference_00a215a0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar4;
    _objc_release(uVar3);
    lVar4 = param_3;
    func_0x00781b00(param_3,param_2,&PTR____CFConstantStringClassReference_00a4a480);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar4;
    _objc_release(uVar3);
    lVar4 = param_3;
    func_0x00780c60(param_3,param_2,&PTR____CFConstantStringClassReference_00a4a4a0);
    if ((int)lVar4 == 0) {
      lVar4 = param_3;
      func_0x00781b00(param_3,param_2,&PTR____CFConstantStringClassReference_00a4a420);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_3;
      func_0x00781b00(param_3,param_2,&PTR____CFConstantStringClassReference_00a4a440);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_00ac3710;
      _objc_alloc();
      func_0x00785be0();
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      *(undefined **)(param_1 + 0x30) = puVar2;
      _objc_release(uVar3);
      _objc_release(lVar5);
    }
    else {
      lVar5 = param_3;
      func_0x00781b00(param_3,param_2,&PTR____CFConstantStringClassReference_00a4a4a0);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *(long *)(param_1 + 0x30);
      *(long *)(param_1 + 0x30) = lVar5;
    }
    _objc_release(lVar4);
    lVar4 = param_3;
    func_0x00781b00(param_3,param_2,&PTR____CFConstantStringClassReference_00a4a4c0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    *(long *)(param_1 + 0x48) = lVar4;
    _objc_release(uVar3);
    lVar4 = param_3;
    func_0x00781b00(param_3,param_2,&PTR____CFConstantStringClassReference_00a4a4e0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = lVar4;
    _objc_release(uVar3);
    lVar4 = param_3;
    func_0x00781b00(param_3,param_2,&PTR____CFConstantStringClassReference_00a4a500);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    if (lVar4 == 0) {
      lVar5 = *(long *)(param_1 + 0x28);
    }
    _objc_retain(lVar5);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar5;
    _objc_release(uVar3);
    _objc_release(lVar4);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 00736b10; end: 00736bcb; -[FBTweak initWithIdentifier:] */

undefined1 * FUN_00736b10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac4628;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSUserDefaults_00ac3018;
    func_0x00791b60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00736bcc; end: 00736c8f; -[FBTweak encodeWithCoder:] */

void FUN_00736bcc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  func_0x00782780(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                  &PTR____CFConstantStringClassReference_00a4a460);
  func_0x00782780(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                  &PTR____CFConstantStringClassReference_00a215a0);
  uVar1 = param_1;
  func_0x00787400();
  if ((uVar1 & 1) == 0) {
    func_0x00782780(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                    &PTR____CFConstantStringClassReference_00a4a480);
    func_0x00782780(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                    &PTR____CFConstantStringClassReference_00a4a4a0);
    func_0x00782780(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                    &PTR____CFConstantStringClassReference_00a4a500);
    func_0x00782780(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                    &PTR____CFConstantStringClassReference_00a4a4c0);
    func_0x00782780(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                    &PTR____CFConstantStringClassReference_00a4a4e0);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00736c90; end: 00736d07; -[FBTweak isAction] */

uint FUN_00736c90(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  ppuVar1 = &PTR___NSConcreteGlobalBlock_00a1fd00;
  _objc_opt_class();
  ppuVar2 = ppuVar1;
  func_0x00792520();
  while( true ) {
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSObject_00ac2b58;
    _objc_opt_class();
    if (ppuVar2 == ppuVar3) break;
    func_0x00792520();
    ppuVar2 = ppuVar1;
    func_0x00792520();
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_opt_isKindOfClass(uVar4,ppuVar1);
  return (uint)uVar4 & 1;
}



/* Entry: 00736d08; end: 00736d0b;  */

void FUN_00736d08(void)

{
  return;
}



/* Entry: 00736d0c; end: 00736d5f; -[FBTweak minimumValue] */

void FUN_00736d0c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x30);
  puVar1 = PTR_PTR_00ac3710;
  _objc_opt_class(PTR_PTR_00ac3710);
  _objc_opt_isKindOfClass(uVar2,puVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00789460(*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00736d60; end: 00736e27; -[FBTweak setMinimumValue:] */

void FUN_00736d60(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0x30);
  if (param_3 == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    puVar1 = PTR_PTR_00ac3710;
    _objc_opt_class(PTR_PTR_00ac3710);
    _objc_opt_isKindOfClass(uVar3,puVar1);
    puVar1 = PTR_PTR_00ac3710;
    _objc_alloc();
    if ((uVar3 & 1) == 0) {
      func_0x00785be0();
      uVar3 = *(ulong *)(param_1 + 0x30);
      *(undefined **)(param_1 + 0x30) = puVar1;
    }
    else {
      uVar3 = *(ulong *)(param_1 + 0x30);
      func_0x00789040(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00785be0();
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      *(undefined **)(param_1 + 0x30) = puVar1;
      _objc_release(uVar2);
    }
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00736e28; end: 00736e7b; -[FBTweak maximumValue] */

void FUN_00736e28(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x30);
  puVar1 = PTR_PTR_00ac3710;
  _objc_opt_class(PTR_PTR_00ac3710);
  _objc_opt_isKindOfClass(uVar2,puVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00789040(*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00736e7c; end: 00736f43; -[FBTweak setMaximumValue:] */

void FUN_00736e7c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0x30);
  if (param_3 == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    puVar1 = PTR_PTR_00ac3710;
    _objc_opt_class(PTR_PTR_00ac3710);
    _objc_opt_isKindOfClass(uVar3,puVar1);
    puVar1 = PTR_PTR_00ac3710;
    _objc_alloc();
    if ((uVar3 & 1) == 0) {
      func_0x00785be0();
      uVar3 = *(ulong *)(param_1 + 0x30);
      *(undefined **)(param_1 + 0x30) = puVar1;
    }
    else {
      uVar3 = *(ulong *)(param_1 + 0x30);
      func_0x00789460(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00785be0();
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      *(undefined **)(param_1 + 0x30) = puVar1;
      _objc_release(uVar2);
    }
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00736f44; end: 00737277; -[FBTweak setCurrentValue:] */

void FUN_00736f44(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar9 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar8 = param_3;
  _objc_retain(param_3);
  if ((param_3 == (undefined1 *)0x0) || (uVar10 = *(ulong *)(param_1 + 0x30), uVar10 == 0))
  goto LAB_007370e8;
  puVar1 = PTR__OBJC_CLASS___NSArray_00ac2c28;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_00ac2c28);
  _objc_opt_isKindOfClass(uVar10,puVar1);
  uVar11 = *(ulong *)(param_1 + 0x30);
  if ((uVar10 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_00ac29e8);
    _objc_opt_isKindOfClass(uVar11,puVar1);
    if ((uVar11 & 1) != 0) {
      uVar10 = *(ulong *)(param_1 + 0x30);
      func_0x0077eae0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      puVar8 = param_3;
      func_0x007848c0();
      _objc_release(uVar10);
      goto joined_r0x00737018;
    }
    puVar12 = param_1;
    func_0x00789460();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00789460();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined1 *)0x0) {
      puVar13 = puVar12;
      puVar8 = param_3;
      func_0x007806a0();
      _objc_release(puVar2);
      if (puVar13 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
        _objc_retain(puVar12);
        _objc_release(param_3);
        param_3 = puVar12;
      }
    }
    puVar2 = param_1;
    func_0x00789040();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = param_3;
    if (((puVar2 != (undefined1 *)0x0) && (param_3 != (undefined1 *)0x0)) &&
       (puVar3 = puVar2, puVar8 = param_3, func_0x007806a0(),
       puVar3 == (undefined1 *)0xffffffffffffffff)) {
      _objc_retain(puVar2);
      _objc_release(param_3);
      puVar13 = puVar2;
    }
    _objc_release(puVar2);
  }
  else {
    puVar8 = param_3;
    func_0x007848c0();
joined_r0x00737018:
    if (uVar11 != 0x7fffffffffffffff) goto LAB_007370e8;
    puVar13 = *(undefined1 **)(param_1 + 0x20);
    _objc_retain(puVar13);
    puVar12 = param_3;
  }
  _objc_release(puVar12);
  param_3 = puVar13;
LAB_007370e8:
  puVar12 = *(undefined1 **)(param_1 + 0x28);
  if (puVar12 != param_3) {
    _objc_retain(puVar12);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    *(undefined1 **)(param_1 + 0x28) = param_3;
    _objc_release(uVar4);
    puVar1 = PTR__OBJC_CLASS___NSUserDefaults_00ac3018;
    func_0x00791b60(PTR__OBJC_CLASS___NSUserDefaults_00ac3018);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078f4a0();
    _objc_release(puVar1);
    lVar5 = *(long *)(param_1 + 0x38);
    _objc_retainBlock();
    if (lVar5 != 0) {
      if (param_3 == (undefined1 *)0x0) {
        param_3 = *(undefined1 **)(param_1 + 0x20);
        _objc_retain(param_3);
      }
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = *(undefined1 **)(param_1 + 0x20);
        _objc_retain(puVar12);
      }
      (**(code **)(lVar5 + 0x10))(lVar5,param_3,puVar12);
    }
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar6 = *(long *)(param_1 + 8);
    func_0x0078fc20();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00780ea0();
    if (lVar7 != 0) {
      lVar14 = *plStack_120;
      do {
        lVar15 = 0;
        do {
          if (*plStack_120 != lVar14) {
            _objc_enumerationMutation(lVar6);
          }
          func_0x00792ee0(*(undefined8 *)(lStack_128 + lVar15 * 8));
          lVar15 = lVar15 + 1;
        } while (lVar7 != lVar15);
        lVar7 = lVar6;
        puVar9 = &uStack_130;
        func_0x00780ea0();
      } while (lVar7 != 0);
    }
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(puVar12);
    puVar8 = (undefined1 *)puVar9;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(puVar8);
    lVar5 = *(long *)(param_3 + 8);
    if (lVar5 == 0) {
      puVar1 = PTR__OBJC_CLASS___NSHashTable_00ac2e60;
      func_0x00793a40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_3 + 8);
      *(undefined **)(param_3 + 8) = puVar1;
      _objc_release(uVar4);
      lVar5 = *(long *)(param_3 + 8);
    }
    func_0x0077e720(lVar5);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_0099ada0)(puVar8);
    return;
  }
  return;
}



/* Entry: 00737278; end: 007372db; -[FBTweak addObserver:] */

void FUN_00737278(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSHashTable_00ac2e60;
    func_0x00793a40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 8);
  }
  func_0x0077e720(lVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 007372dc; end: 007372e3; -[FBTweak removeObserver:] */

void FUN_007372dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 8),PTR_s_removeObject__00abda28);
  return;
}


