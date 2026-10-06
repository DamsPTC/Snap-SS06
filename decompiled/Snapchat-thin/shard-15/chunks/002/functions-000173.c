/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b989000; end: 10b989007;  */

void FUN_10b989000(long param_1)

{
  func_0x00010b9891d0(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b989008; end: 10b9891bf;  */

void FUN_10b989008(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  ulong uVar6;
  undefined8 *apuStack_c0 [2];
  undefined8 **appuStack_b0 [15];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar5 = *(undefined8 ****)(param_3 + 0x18);
  FUN_10b9a0ad4(appuStack_b0);
  for (uVar6 = 0; uVar6 < *(ulong *)(param_3 + 0x10); uVar6 = uVar6 + 1) {
    lVar1 = param_3;
    FUN_10b9abfa4(param_3,uVar6);
    FUN_10b9a8f04(apuStack_c0,lVar1);
    pppuVar5 = (undefined8 ***)apuStack_c0;
    FUN_10b9a0b80(appuStack_b0);
    FUN_10b9a8d98(apuStack_c0);
  }
  pppuVar2 = (undefined8 ***)(param_2 + 0x10);
  FUN_10b9802e0();
  _objc_retainAutoreleasedReturnValue();
  pppuVar3 = pppuVar2;
  func_0x00010c0f9540();
  _objc_release(pppuVar2);
  if ((int)pppuVar3 == 0) {
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
  }
  else {
    pppuVar5 = (undefined8 ***)0xffffffff;
    FUN_10b9a1228(param_1,appuStack_b0);
  }
  pppuVar3 = appuStack_b0;
  FUN_10b9a0b2c();
  while (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    _objc_release(pppuVar2);
    pppuVar4 = pppuVar3;
    while (FUN_10b9a0b2c(appuStack_b0), (int)pppuVar5 != 1) {
      __Unwind_Resume();
      pppuVar5 = pppuVar2;
    }
    _objc_begin_catch(pppuVar4);
    param_3 = *(long *)(param_3 + 0x18);
    FUN_10b981f24(appuStack_b0);
    pppuVar5 = appuStack_b0;
    FUN_10b99ff08(param_3);
    pppuVar3 = (undefined8 ***)appuStack_b0[0];
    func_0x000104bda960();
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
    _objc_end_catch();
    pppuVar2 = pppuVar4;
  }
  return;
}



/* Entry: 10b9891c0; end: 10b9891db;  */

undefined1  [16] FUN_10b9891c0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 4;
  auVar1._0_8_ = &UNK_10f7d02ea;
  return auVar1;
}



/* Entry: 10b9891dc; end: 10b9891ff;  */

void FUN_10b9891dc(undefined4 param_1)

{
  undefined4 uStack_14;
  
  uStack_14 = param_1;
  FUN_10b989200(3,&uStack_14);
  return;
}



/* Entry: 10b989200; end: 10b98921f;  */

void FUN_10b989200(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x00010b9898ac();
  _CFNumberCreate();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 10b989220; end: 10b98928b;  */

void FUN_10b989220(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_10b989200(4,&uStack_18);
  return;
}



/* Entry: 10b98928c; end: 10b989323;  */

void FUN_10b98928c(undefined8 *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long *extraout_x8;
  long lVar3;
  undefined1 auStack_f8 [8];
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_28;
  
  plVar2 = &lStack_c0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10b989324(&lStack_c0);
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  _CFArrayCreate(uVar1,lStack_c0,uStack_b8,PTR__kCFTypeArrayCallBacks_11034ac10);
  *param_1 = uVar1;
  FUN_10b989414();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    FUN_10b989414();
    lVar3 = lStack_c0;
    func_0x00010b9898c8();
    *extraout_x8 = (long)(extraout_x8 + 3);
    extraout_x8[2] = 0x10;
    extraout_x8[1] = 0;
    func_0x00010b9894c0(extraout_x8);
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      func_0x00010b989268(auStack_f8,*(undefined4 *)plVar2);
      FUN_10b9896b4(extraout_x8,auStack_f8);
      func_0x0001090cba70(auStack_f8);
      plVar2 = (long *)((long)plVar2 + 4);
    }
    return;
  }
  return;
}



/* Entry: 10b989324; end: 10b9893c7;  */

void FUN_10b989324(long *param_1,undefined4 *param_2,long param_3)

{
  undefined1 auStack_38 [8];
  
  *param_1 = (long)(param_1 + 3);
  param_1[2] = 0x10;
  param_1[1] = 0;
  func_0x00010b9894c0(param_1);
  for (; param_3 != 0; param_3 = param_3 + -1) {
    func_0x00010b989268(auStack_38,*param_2);
    FUN_10b9896b4(param_1,auStack_38);
    func_0x0001090cba70(auStack_38);
    param_2 = param_2 + 1;
  }
  return;
}



/* Entry: 10b9893c8; end: 10b9893e3;  */

void FUN_10b9893c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdba82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFStringCreateWithCString_11034a8a8)
            (*(undefined8 *)PTR__kCFAllocatorDefault_11034ab78,param_1,0x8000100);
  return;
}



/* Entry: 10b9893e4; end: 10b989403;  */

void FUN_10b9893e4(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x00010b9898ac();
  _CFDataCreate();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 10b989404; end: 10b989413;  */

void FUN_10b989404(long param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010b9898ac(uVar1,*(undefined8 *)(param_1 + 0x10));
  _CFDataCreate();
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 10b989414; end: 10b98943f;  */

undefined8 * FUN_10b989414(undefined8 *param_1)

{
  FUN_10b989440(param_1,*param_1,param_1[1]);
  if (param_1[2] != 0) {
    FUN_10b9894a4(param_1,param_1);
  }
  return param_1;
}



/* Entry: 10b989440; end: 10b98946f;  */

void FUN_10b989440(undefined8 param_1,long param_2,long param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    func_0x0001090cba70(param_2);
    param_2 = param_2 + 8;
  }
  return;
}



/* Entry: 10b989470; end: 10b9894a3;  */

long FUN_10b989470(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_10b9894a4(param_1,param_1);
  }
  return param_1;
}



/* Entry: 10b9894a4; end: 10b9894d3;  */

void FUN_10b9894a4(long param_1,long *param_2)

{
  if (param_1 + 0x18 != *param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b9894d4; end: 10b989513;  */

void FUN_10b9894d4(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  plVar3 = param_1;
  FUN_10b989514();
  plVar4 = (long *)(*param_1 + param_1[1] * 8);
  lVar2 = param_1[1];
  plVar1 = (long *)*param_1;
  plVar5 = plVar3;
  for (plVar6 = plVar1; plVar6 != plVar4; plVar6 = plVar6 + 1) {
    *plVar5 = *plVar6;
    *plVar6 = 0;
    plVar5 = plVar5 + 1;
  }
  for (lVar7 = 0; lVar7 != 0; lVar7 = lVar7 + 1) {
    plVar5[lVar7] = *(long *)(lVar7 * 8);
    *(undefined8 *)(lVar7 * 8) = 0;
  }
  lVar7 = 0;
  for (; plVar4 != plVar1 + lVar2; plVar4 = plVar4 + 1) {
    *(long *)((long)plVar5 + lVar7) = *plVar4;
    *plVar4 = 0;
    lVar7 = lVar7 + 8;
  }
  func_0x00010b9898dc();
  if (plVar1 != (long *)0x0) {
    FUN_10b989440(param_1,plVar1,param_1[1]);
    func_0x00010b9898d0();
  }
  *param_1 = (long)plVar3;
  param_1[1] = param_1[1];
  param_1[2] = param_2;
  func_0x00010b9898a4();
  return;
}



/* Entry: 10b989514; end: 10b98952b;  */

ulong * FUN_10b989514(ulong *param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4,
                     long param_5,long param_6)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if ((ulong)param_2 >> 0x3c != 0) {
    func_0x00010b9898f0();
    uVar3 = param_1[1];
    puVar1 = (undefined8 *)*param_1;
    puVar4 = param_2;
    for (puVar5 = puVar1; puVar5 != param_4; puVar5 = puVar5 + 1) {
      *puVar4 = *puVar5;
      *puVar5 = 0;
      puVar4 = puVar4 + 1;
    }
    for (lVar6 = 0; param_5 != lVar6; lVar6 = lVar6 + 1) {
      puVar4[lVar6] = *(undefined8 *)(param_6 + lVar6 * 8);
      *(undefined8 *)(param_6 + lVar6 * 8) = 0;
    }
    lVar6 = param_5 << 3;
    for (; param_4 != puVar1 + uVar3; param_4 = param_4 + 1) {
      *(undefined8 *)((long)puVar4 + lVar6) = *param_4;
      *param_4 = 0;
      lVar6 = lVar6 + 8;
    }
    puVar2 = param_1;
    func_0x00010b9898dc();
    if (puVar1 != (undefined8 *)0x0) {
      puVar2 = param_1;
      FUN_10b989440(param_1,puVar1,param_1[1]);
      func_0x00010b9898d0();
    }
    *param_1 = (ulong)param_2;
    param_1[1] = param_1[1] + param_5;
    param_1[2] = param_3;
    func_0x00010b9898a4();
    return puVar2;
  }
  if ((ulong)param_2 >> 0x3c == 0) {
    puVar2 = (ulong *)((long)param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar2);
    return puVar2;
  }
  func_0x00010772e264();
  uVar3 = *param_1;
  while (uVar3 != param_1[1]) {
    func_0x0001090cba70();
    uVar3 = *param_1 + 8;
    *param_1 = uVar3;
  }
  return param_1;
}



/* Entry: 10b98952c; end: 10b98961f;  */

void FUN_10b98952c(long *param_1,undefined8 *param_2,long param_3,undefined8 *param_4,long param_5,
                  long param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar2 = param_1[1];
  puVar1 = (undefined8 *)*param_1;
  puVar3 = param_2;
  for (puVar4 = puVar1; puVar4 != param_4; puVar4 = puVar4 + 1) {
    *puVar3 = *puVar4;
    *puVar4 = 0;
    puVar3 = puVar3 + 1;
  }
  for (lVar5 = 0; param_5 != lVar5; lVar5 = lVar5 + 1) {
    puVar3[lVar5] = *(undefined8 *)(param_6 + lVar5 * 8);
    *(undefined8 *)(param_6 + lVar5 * 8) = 0;
  }
  lVar5 = param_5 << 3;
  for (; param_4 != puVar1 + lVar2; param_4 = param_4 + 1) {
    *(undefined8 *)((long)puVar3 + lVar5) = *param_4;
    *param_4 = 0;
    lVar5 = lVar5 + 8;
  }
  func_0x00010b9898dc();
  if (puVar1 != (undefined8 *)0x0) {
    FUN_10b989440(param_1,puVar1,param_1[1]);
    func_0x00010b9898d0();
  }
  *param_1 = (long)param_2;
  param_1[1] = param_1[1] + param_5;
  param_1[2] = param_3;
  func_0x00010b9898a4();
  return;
}



/* Entry: 10b989620; end: 10b98963b;  */

long * FUN_10b989620(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x00010772e264();
  lVar2 = *param_1;
  while (lVar2 != param_1[1]) {
    func_0x0001090cba70();
    lVar2 = *param_1 + 8;
    *param_1 = lVar2;
  }
  return param_1;
}



/* Entry: 10b98963c; end: 10b9896b3;  */

long * FUN_10b98963c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  while (lVar1 != param_1[1]) {
    func_0x0001090cba70();
    lVar1 = *param_1 + 8;
    *param_1 = lVar1;
  }
  return param_1;
}



/* Entry: 10b9896b4; end: 10b98970f;  */

undefined8 * FUN_10b9896b4(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puStack_18;
  
  lVar2 = param_1[1];
  puVar1 = (undefined8 *)(*param_1 + lVar2 * 8);
  if (lVar2 == param_1[2]) {
    FUN_10b989710(&puStack_18,param_1,puVar1,1);
  }
  else {
    *puVar1 = *param_2;
    *param_2 = 0;
    param_1[1] = lVar2 + 1;
    puStack_18 = puVar1;
  }
  return puStack_18;
}



/* Entry: 10b989710; end: 10b989883;  */

void FUN_10b989710(long *param_1,long *param_2,long *param_3,long param_4,long *param_5)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  uVar3 = param_2[2];
  uVar1 = param_2[1] + param_4;
  if (uVar1 - uVar3 <= 0xfffffffffffffff - uVar3) {
    if (uVar3 >> 0x3d == 0) {
      uVar7 = (uVar3 << 3) / 5;
    }
    else {
      uVar7 = uVar3 << 3;
      if (4 < uVar3 >> 0x3d) {
        uVar7 = 0xffffffffffffffff;
      }
    }
    lVar10 = *param_2;
    if (0xffffffffffffffe < uVar7) {
      uVar7 = 0xfffffffffffffff;
    }
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    plVar5 = param_2;
    FUN_10b989514(param_2,uVar1);
    lVar4 = param_2[1];
    plVar2 = (long *)*param_2;
    plVar6 = plVar5;
    for (plVar8 = plVar2; plVar8 != param_3; plVar8 = plVar8 + 1) {
      *plVar6 = *plVar8;
      *plVar8 = 0;
      plVar6 = plVar6 + 1;
    }
    *plVar6 = *param_5;
    *param_5 = 0;
    lVar9 = param_4 << 3;
    for (plVar8 = param_3; plVar8 != plVar2 + lVar4; plVar8 = plVar8 + 1) {
      *(long *)((long)plVar6 + lVar9) = *plVar8;
      *plVar8 = 0;
      lVar9 = lVar9 + 8;
    }
    func_0x00010b9898dc();
    if (plVar2 != (long *)0x0) {
      FUN_10b989440(param_2,plVar2,param_2[1]);
      func_0x00010b9898d0();
    }
    *param_2 = (long)plVar5;
    param_2[1] = param_2[1] + param_4;
    param_2[2] = uVar1;
    func_0x00010b9898a4();
    *param_1 = (long)param_3 + (*param_2 - lVar10);
    return;
  }
  func_0x00010b9898f0();
  func_0x00010b9898a4();
  func_0x00010b9898c8();
  if (*param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFRetain_11034a770)();
    return;
  }
  return;
}



/* Entry: 10b989884; end: 10b9898fb;  */

void FUN_10b989884(long *param_1)

{
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFRetain_11034a770)();
    return;
  }
  return;
}



/* Entry: 10b9898fc; end: 10b9899c7;  */

undefined1  [16] FUN_10b9898fc(double param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  dVar4 = param_1;
  uVar2 = param_2;
  FUN_10b9a6fe4();
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
    uVar1 = 0;
    uVar3 = 0;
  }
  else {
    func_0x000107c310a0(param_1,0x25);
    func_0x00010b989f28();
    if ((int)param_2 == 0) {
      if (SUB84(param_1,0) != 0) {
        dVar4 = (dVar4 * 255.0) / 100.0;
      }
    }
    else if (SUB84(param_1,0) == 0) {
      dVar4 = dVar4 * 255.0;
    }
    else {
      dVar4 = (dVar4 / 100.0) * 255.0;
    }
    uVar2 = (ulong)dVar4;
    uVar3 = uVar2 & 0xffffffffffffff00;
    uVar1 = 1;
  }
  auVar5._0_8_ = uVar3 | uVar2 & 0xff;
  auVar5._8_8_ = uVar1;
  return auVar5;
}



/* Entry: 10b9899c8; end: 10b989b4f;  */

undefined1  [16] FUN_10b9899c8(undefined8 param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  byte bStack_50;
  char cStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  FUN_10b989b50(auStack_58);
  if (cStack_48 == '\x01') {
    if ((bStack_50 & 0xfc) == 4) {
      param_2 = auStack_58;
      FUN_10b9a9588(param_2);
      uVar4 = (ulong)param_2 & 0xffffffffffffff00;
      uVar3 = 1;
    }
    else {
      FUN_10b9a9358(auStack_60,auStack_58);
      puVar2 = auStack_60;
      FUN_10b98b110(param_2);
      if (((ulong)puVar2 & 1) == 0) {
        puVar1 = param_2;
        func_0x000107c31084();
        puStack_40 = auStack_60;
        puStack_38 = &UNK_1003ab990;
        func_0x000107c2793c(&UNK_10f7d0501);
        func_0x000107c3173c(auStack_88);
        func_0x000107c31080(auStack_70,puVar1,auStack_88);
        FUN_10b99f560(auStack_68,auStack_70);
        FUN_10b9a72b8(param_1,auStack_68);
        func_0x000104bda93c(auStack_68);
        func_0x000107c278f4(auStack_70);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
      }
      uVar4 = (ulong)param_2 & 0xffffffffffffff00;
      func_0x000107c278f4(auStack_60);
      uVar3 = (ulong)puVar2 & 0xff;
    }
  }
  else {
    uVar3 = 0;
    param_2 = (undefined1 *)0x0;
    uVar4 = 0;
  }
  FUN_10b989ec8(auStack_58);
  auVar5._0_8_ = uVar4 | (ulong)param_2 & 0xff;
  auVar5._8_8_ = uVar3;
  return auVar5;
}



/* Entry: 10b989b50; end: 10b989d0b;  */

void FUN_10b989b50(undefined1 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [16];
  ulong uStack_58;
  undefined2 uStack_50;
  undefined6 uStack_4e;
  char cStack_48;
  
  func_0x000107c310ac();
  puVar4 = &UNK_10f42b44d;
  uVar1 = param_2;
  func_0x000107c310a8(param_2,&UNK_10f42b44d,5);
  if ((int)uVar1 == 0) {
    uVar6 = 0x23;
    uVar1 = param_2;
    func_0x000107c310a0();
    if ((int)uVar1 == 0) {
      func_0x00010b989f28();
      func_0x00010b9a71b4(&uStack_58,param_2);
      if ((cStack_48 == '\x01') && (CONCAT62(uStack_4e,uStack_50) != 0)) {
        func_0x000107c31084();
        func_0x000107c3107c(auStack_70);
        FUN_10b9a8e18(auStack_68,auStack_70);
        func_0x00010b989ee8(param_1,auStack_68);
        FUN_10b9a8d98(auStack_68);
        func_0x000107c278f4(auStack_70);
        return;
      }
    }
    else {
      lVar7 = *(long *)(param_2 + 0x10);
      uVar1 = param_2;
      FUN_10b9a7124();
      if ((uVar6 & 1) != 0) {
        uVar6 = *(long *)(param_2 + 0x10) - lVar7;
        uStack_58 = uVar1 << 8 | 0xff;
        if (6 < uVar6) {
          uStack_58 = uVar1;
        }
        uVar1 = (uVar1 & 0xf0) << 4 | uVar1 & 0xf | (uVar1 >> 8 & 0xf) << 0x10;
        if (uVar6 == 3) {
          uStack_58 = uVar1 << 0xc | uVar1 << 8 | 0xff;
        }
LAB_10b989c64:
        uStack_50 = 5;
        func_0x00010b989ee8(param_1,&uStack_58);
        FUN_10b9a8d98(&uStack_58);
        return;
      }
    }
  }
  else {
    FUN_10b989f04();
    if ((((((ulong)puVar4 & 1) != 0) && (uVar6 = uVar1, func_0x00010b989f10(), (uVar6 & 1) != 0)) &&
        (FUN_10b989f04(), ((ulong)puVar4 & 1) != 0)) &&
       (((uVar2 = uVar6, func_0x00010b989f10(), (uVar2 & 1) != 0 &&
         (FUN_10b989f04(), ((ulong)puVar4 & 1) != 0)) &&
        (uVar3 = uVar2, func_0x00010b989f10(), (uVar3 & 1) != 0)))) {
      uVar5 = 1;
      uVar3 = param_2;
      FUN_10b9898fc();
      if ((uVar5 & 1) != 0) {
        func_0x00010b989f28();
        func_0x000107c310a4(param_2,0x29);
        if ((param_2 & 1) != 0) {
          uStack_58 = (ulong)(uint)((int)uVar1 << 0x18) | (uVar6 & 0xff) << 0x10 |
                      (uVar2 & 0xff) << 8 | uVar3 & 0xff;
          goto LAB_10b989c64;
        }
      }
    }
  }
  *param_1 = 0;
  param_1[0x10] = 0;
  return;
}



/* Entry: 10b989d0c; end: 10b989d9b;  */

undefined1  [16] FUN_10b989d0c(double param_1,ulong param_2)

{
  int iVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  dVar4 = param_1;
  FUN_10b9a6fe4();
  if ((param_2 & 1) == 0) {
LAB_10b989d84:
    dVar4 = 0.0;
    uVar3 = 0;
  }
  else {
    dVar2 = dVar4;
    func_0x00010b989f1c();
    iVar1 = SUB84(dVar2,0);
    if (((ulong)dVar2 & 1) == 0) {
      func_0x00010b989f1c();
      if (iVar1 == 0) {
        FUN_10b9a6f3c(param_1,&UNK_10f7d0521,0x17);
        goto LAB_10b989d84;
      }
      dVar4 = (dVar4 * 3.141592653589793) / 180.0;
    }
    uVar3 = 1;
  }
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = dVar4;
  return auVar5;
}



/* Entry: 10b989d9c; end: 10b989e37;  */

void FUN_10b989d9c(ulong *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  
  func_0x000107c310ac();
  uVar1 = param_2;
  FUN_10b9a6fe4();
  if ((param_3 & 1) == 0) {
    uVar3 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x00010b989f30();
    if ((uVar2 & 1) == 0) {
      uVar4 = 2;
      func_0x00010b989f30();
      if ((uVar2 & 1) == 0) {
        func_0x000107c310a0(param_2,0x25);
        uVar4 = 3;
        if ((int)param_2 == 0) {
          uVar4 = 0;
        }
      }
    }
    else {
      uVar4 = 1;
    }
    *param_1 = uVar1;
    *(undefined4 *)(param_1 + 1) = uVar4;
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar3;
  return;
}



/* Entry: 10b989e38; end: 10b989e73;  */

bool FUN_10b989e38(long *param_1,ulong param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  
  if (param_2 < (ulong)param_1[1]) {
    pcVar4 = (char *)(*param_1 + param_2);
    do {
      cVar1 = *param_3;
      bVar3 = cVar1 == '\0';
      if (cVar1 == '\0') {
        return true;
      }
      cVar2 = *pcVar4;
      param_3 = param_3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 == cVar1);
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



/* Entry: 10b989e74; end: 10b989ec7;  */

bool FUN_10b989e74(long param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = param_2;
  _strlen();
  if (*(ulong *)(param_1 + 8) < uVar2) {
    bVar1 = false;
  }
  else {
    func_0x000107875ee0(param_1,*(ulong *)(param_1 + 8) - uVar2,uVar2,param_2);
    bVar1 = (int)param_1 == 0;
  }
  return bVar1;
}



/* Entry: 10b989ec8; end: 10b989f03;  */

void FUN_10b989ec8(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_10b9a8d98();
  }
  return;
}



/* Entry: 10b989f04; end: 10b989f3b;  */

/* WARNING: Removing unreachable block (ram,0x00010b98993c) */
/* WARNING: Removing unreachable block (ram,0x00010b98998c) */
/* WARNING: Removing unreachable block (ram,0x00010b989940) */

undefined1  [16] FUN_10b989f04(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  double unaff_x20;
  double dVar4;
  undefined1 auVar5 [16];
  
  uVar2 = 0;
  dVar4 = unaff_x20;
  FUN_10b9a6fe4();
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
    uVar1 = 0;
    uVar3 = 0;
  }
  else {
    func_0x000107c310a0();
    func_0x00010b989f28();
    if (SUB84(unaff_x20,0) != 0) {
      dVar4 = (dVar4 * 255.0) / 100.0;
    }
    uVar2 = (ulong)dVar4;
    uVar3 = uVar2 & 0xffffffffffffff00;
    uVar1 = 1;
  }
  auVar5._0_8_ = uVar3 | uVar2 & 0xff;
  auVar5._8_8_ = uVar1;
  return auVar5;
}



/* Entry: 10b989f3c; end: 10b98af7f;  */

undefined8 * FUN_10b989f3c(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  undefined1 *puVar7;
  char **ppcVar8;
  char **ppcVar9;
  char *pcVar10;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  long lVar11;
  long extraout_x9_00;
  undefined8 uVar12;
  undefined8 *puStack_e50;
  undefined8 *puStack_e48;
  undefined8 *puStack_e40;
  undefined1 *puStack_e38;
  undefined1 uStack_e30;
  char *apcStack_e28 [7];
  undefined8 uStack_df0;
  undefined8 uStack_de8;
  undefined *puStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined *puStack_dc8;
  undefined *puStack_db0;
  undefined *puStack_d98;
  char *pcStack_d80;
  undefined *puStack_d68;
  undefined *puStack_d50;
  undefined *puStack_d38;
  undefined *puStack_d20;
  undefined *puStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined *puStack_cf0;
  undefined *puStack_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined *puStack_cc0;
  undefined *puStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined *puStack_c90;
  undefined *puStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined *puStack_c60;
  char *pcStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined *puStack_c30;
  undefined *puStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined *puStack_c00;
  undefined *puStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  undefined *puStack_bd0;
  undefined *puStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined *puStack_ba0;
  undefined *puStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined *puStack_b70;
  undefined *puStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined *puStack_b40;
  undefined *puStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined *puStack_b10;
  undefined *puStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined *puStack_ae0;
  undefined *puStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined *puStack_ab0;
  undefined *puStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined *puStack_a80;
  undefined *puStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined *puStack_a50;
  undefined *puStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined *puStack_a20;
  undefined *puStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined *puStack_9f0;
  undefined *puStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined *puStack_9c0;
  char *pcStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined *puStack_990;
  undefined *puStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined *puStack_960;
  undefined *puStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined *puStack_930;
  char *pcStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined *puStack_900;
  char *pcStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined *puStack_8d0;
  undefined *puStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined *puStack_8a0;
  undefined *puStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined *puStack_870;
  undefined *puStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined *puStack_840;
  undefined *puStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined *puStack_810;
  undefined *puStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined *puStack_7e0;
  undefined *puStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined *puStack_7b0;
  undefined *puStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined *puStack_780;
  undefined *puStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined *puStack_750;
  undefined *puStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined *puStack_720;
  undefined *puStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined *puStack_6f0;
  undefined *puStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined *puStack_6c0;
  undefined *puStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined *puStack_690;
  char *pcStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined *puStack_660;
  undefined *puStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined *puStack_630;
  char *pcStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined *puStack_600;
  undefined *puStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined *puStack_5d0;
  undefined *puStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined *puStack_5a0;
  undefined *puStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined *puStack_570;
  undefined *puStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined *puStack_540;
  undefined *puStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined *puStack_510;
  undefined *puStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined *puStack_4e0;
  undefined *puStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  char *pcStack_4b0;
  undefined *puStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  char *pcStack_480;
  undefined *puStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined *puStack_450;
  undefined *puStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined *puStack_420;
  undefined *puStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined *puStack_390;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined *puStack_360;
  undefined *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined *puStack_330;
  char *pcStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined *puStack_300;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  char *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  char *pcStack_150;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  char *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_48;
  
  ppuVar6 = &puStack_e50;
  puVar5 = param_1;
  func_0x00010b98bfdc(apcStack_e28);
  *puVar5 = &PTR_FUN_110d7d760;
  puVar5[1] = 1;
  lVar11 = *param_2;
  if (lVar11 != 0) {
    piVar1 = (int *)(lVar11 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[3] = &UNK_10dd5b8b0;
  param_1[2] = lVar11;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  apcStack_e28[0] = "aliceblue";
  apcStack_e28[2] = (char *)0xf0f8ffff;
  apcStack_e28[1] = (char *)0x9;
  apcStack_e28[3] = "antiquewhite";
  apcStack_e28[5] = (char *)0xfaebd7ff;
  apcStack_e28[4] = (char *)0xc;
  apcStack_e28[6] = "aqua";
  uStack_de8 = 0xffffff;
  uStack_df0 = 4;
  puStack_de0 = &DAT_10f433e32;
  uStack_dd0 = 0x7fffd4ff;
  uStack_dd8 = 10;
  *(undefined8 *)(extraout_x8 + 0x70) = 0xf0ffffff;
  *(undefined8 *)(extraout_x8 + 0x68) = 5;
  puStack_dc8 = &DAT_10f433e3d;
  puStack_db0 = &DAT_10f433e43;
  *(undefined8 *)(extraout_x8 + 0x88) = 0xf5f5dcff;
  *(undefined8 *)(extraout_x8 + 0x80) = 5;
  *(undefined8 *)(extraout_x8 + 0xa0) = 0xffe4c4ff;
  *(undefined8 *)(extraout_x8 + 0x98) = 6;
  puStack_d98 = &DAT_10f433e49;
  pcStack_d80 = "black";
  *(undefined8 *)(extraout_x8 + 0xb8) = 0xff;
  *(undefined8 *)(extraout_x8 + 0xb0) = 5;
  *(undefined8 *)(extraout_x8 + 0xd0) = 0xffebcdff;
  *(undefined8 *)(extraout_x8 + 200) = 0xe;
  puStack_d68 = &DAT_10f433e50;
  puStack_d50 = &DAT_10f68f102;
  *(undefined8 *)(extraout_x8 + 0xe8) = 0xffff;
  *(undefined8 *)(extraout_x8 + 0xe0) = 4;
  *(undefined8 *)(extraout_x8 + 0x100) = 0x8a2be2ff;
  *(undefined8 *)(extraout_x8 + 0xf8) = 10;
  puStack_d38 = &DAT_10f433e5f;
  puStack_d20 = &DAT_10f68f142;
  *(undefined8 *)(extraout_x8 + 0x118) = 0xa52a2aff;
  *(undefined8 *)(extraout_x8 + 0x110) = 5;
  puStack_d08 = &DAT_10f433e6a;
  uStack_d00 = 9;
  uStack_cf8 = 0xdeb887ff;
  puStack_cf0 = &DAT_10f433e74;
  *(undefined8 *)(extraout_x8 + 0x148) = 0x5f9ea0ff;
  *(undefined8 *)(extraout_x8 + 0x140) = 9;
  puStack_cd8 = &DAT_10f433e7e;
  uStack_cd0 = 10;
  uStack_cc8 = 0x7fff00ff;
  puStack_cc0 = &DAT_10f433e89;
  *(undefined8 *)(extraout_x8 + 0x178) = 0xd2691eff;
  *(undefined8 *)(extraout_x8 + 0x170) = 9;
  puStack_ca8 = &DAT_10f433e93;
  uStack_ca0 = 5;
  uStack_c98 = 0xff7f50ff;
  puStack_c90 = &DAT_10f433e99;
  *(undefined8 *)(extraout_x8 + 0x1a8) = 0x6495edff;
  *(undefined8 *)(extraout_x8 + 0x1a0) = 0xe;
  puStack_c78 = &DAT_10f433ea8;
  uStack_c70 = 8;
  uStack_c68 = 0xfff8dcff;
  puStack_c60 = &DAT_10f433eb1;
  *(undefined8 *)(extraout_x8 + 0x1d8) = 0xdc143cff;
  *(undefined8 *)(extraout_x8 + 0x1d0) = 7;
  pcStack_c48 = "cyan";
  uStack_c40 = 4;
  uStack_c38 = 0xffffff;
  puStack_c30 = &DAT_10f433eb9;
  *(undefined8 *)(extraout_x8 + 0x208) = 0x8bff;
  *(undefined8 *)(extraout_x8 + 0x200) = 8;
  puStack_c18 = &DAT_10f433ec2;
  uStack_c10 = 8;
  uStack_c08 = 0x8b8bff;
  puStack_c00 = &DAT_10f433ecb;
  *(undefined8 *)(extraout_x8 + 0x238) = 0xb8860bff;
  *(undefined8 *)(extraout_x8 + 0x230) = 0xd;
  puStack_be8 = &DAT_10f433ed9;
  uStack_be0 = 8;
  uStack_bd8 = 0xa9a9a9ff;
  puStack_bd0 = &DAT_10f433ee2;
  *(undefined8 *)(extraout_x8 + 0x268) = 0x6400ff;
  *(undefined8 *)(extraout_x8 + 0x260) = 9;
  puStack_bb8 = &DAT_10f433eec;
  uStack_bb0 = 8;
  uStack_ba8 = 0xa9a9a9ff;
  puStack_ba0 = &DAT_10f433ef5;
  *(undefined8 *)(extraout_x8 + 0x298) = 0xbdb76bff;
  *(undefined8 *)(extraout_x8 + 0x290) = 9;
  puStack_b88 = &DAT_10f433eff;
  uStack_b80 = 0xb;
  uStack_b78 = 0x8b008bff;
  puStack_b70 = &DAT_10f433f0b;
  *(undefined8 *)(extraout_x8 + 0x2c8) = 0x556b2fff;
  *(undefined8 *)(extraout_x8 + 0x2c0) = 0xe;
  puStack_b58 = &DAT_10f433f1a;
  uStack_b50 = 10;
  uStack_b48 = 0xff8c00ff;
  puStack_b40 = &DAT_10f433f25;
  *(undefined8 *)(extraout_x8 + 0x2f8) = 0x9932ccff;
  *(undefined8 *)(extraout_x8 + 0x2f0) = 10;
  puStack_b28 = &DAT_10f433f30;
  uStack_b20 = 7;
  uStack_b18 = 0x8b0000ff;
  puStack_b10 = &DAT_10f433f38;
  *(undefined8 *)(extraout_x8 + 0x328) = 0xe9967aff;
  *(undefined8 *)(extraout_x8 + 800) = 10;
  puStack_af8 = &DAT_10f433f43;
  uStack_af0 = 0xc;
  uStack_ae8 = 0x8fbc8fff;
  puStack_ae0 = &DAT_10f433f50;
  *(undefined8 *)(extraout_x8 + 0x358) = 0x483d8bff;
  *(undefined8 *)(extraout_x8 + 0x350) = 0xd;
  puStack_ac8 = &DAT_10f433f5e;
  uStack_ac0 = 0xd;
  uStack_ab8 = 0x2f4f4fff;
  puStack_ab0 = &DAT_10f433f6c;
  *(undefined8 *)(extraout_x8 + 0x388) = 0x2f4f4fff;
  *(undefined8 *)(extraout_x8 + 0x380) = 0xd;
  puStack_a98 = &DAT_10f433f7a;
  uStack_a90 = 0xd;
  uStack_a88 = 0xced1ff;
  puStack_a80 = &DAT_10f433f88;
  *(undefined8 *)(extraout_x8 + 0x3b8) = 0x9400d3ff;
  *(undefined8 *)(extraout_x8 + 0x3b0) = 10;
  puStack_a68 = &DAT_10f433f93;
  uStack_a60 = 8;
  uStack_a58 = 0xff1493ff;
  puStack_a50 = &DAT_10f433f9c;
  *(undefined8 *)(extraout_x8 + 1000) = 0xbfffff;
  *(undefined8 *)(extraout_x8 + 0x3e0) = 0xb;
  puStack_a38 = &DAT_10f433fa8;
  uStack_a30 = 7;
  uStack_a28 = 0x696969ff;
  puStack_a20 = &DAT_10f433fb0;
  *(undefined8 *)(extraout_x8 + 0x418) = 0x696969ff;
  *(undefined8 *)(extraout_x8 + 0x410) = 7;
  puStack_a08 = &DAT_10f433fb8;
  uStack_a00 = 10;
  uStack_9f8 = 0x1e90ffff;
  puStack_9f0 = &DAT_10f433fc3;
  *(undefined8 *)(extraout_x8 + 0x448) = 0xb22222ff;
  *(undefined8 *)(extraout_x8 + 0x440) = 9;
  puStack_9d8 = &DAT_10f433fcd;
  uStack_9d0 = 0xb;
  uStack_9c8 = 0xfffaf0ff;
  puStack_9c0 = &DAT_10f433fd9;
  *(undefined8 *)(extraout_x8 + 0x478) = 0x228b22ff;
  *(undefined8 *)(extraout_x8 + 0x470) = 0xb;
  pcStack_9a8 = "fuchsia";
  uStack_9a0 = 7;
  uStack_998 = 0xff00ffff;
  puStack_990 = &DAT_10f433fe5;
  *(undefined8 *)(extraout_x8 + 0x4a8) = 0xdcdcdcff;
  *(undefined8 *)(extraout_x8 + 0x4a0) = 9;
  puStack_978 = &DAT_10f433fef;
  uStack_970 = 10;
  uStack_968 = 0xf8f8ffff;
  puStack_960 = &DAT_10f433ffa;
  *(undefined8 *)(extraout_x8 + 0x4d8) = 0xffd700ff;
  *(undefined8 *)(extraout_x8 + 0x4d0) = 4;
  puStack_948 = &DAT_10f433fff;
  uStack_940 = 9;
  uStack_938 = 0xdaa520ff;
  puStack_930 = &DAT_10f68f118;
  *(undefined8 *)(extraout_x8 + 0x508) = 0x808080ff;
  *(undefined8 *)(extraout_x8 + 0x500) = 4;
  pcStack_918 = "green";
  uStack_910 = 5;
  uStack_908 = 0x8000ff;
  puStack_900 = &DAT_10f434009;
  *(undefined8 *)(extraout_x8 + 0x538) = 0xadff2fff;
  *(undefined8 *)(extraout_x8 + 0x530) = 0xb;
  pcStack_8e8 = "grey";
  uStack_8e0 = 4;
  uStack_8d8 = 0x808080ff;
  puStack_8d0 = &DAT_10f434015;
  *(undefined8 *)(extraout_x8 + 0x568) = 0xf0fff0ff;
  *(undefined8 *)(extraout_x8 + 0x560) = 8;
  puStack_8b8 = &DAT_10f43401e;
  uStack_8b0 = 7;
  uStack_8a8 = 0xff69b4ff;
  puStack_8a0 = &DAT_10f434026;
  *(undefined8 *)(extraout_x8 + 0x598) = 0xcd5c5cff;
  *(undefined8 *)(extraout_x8 + 0x590) = 9;
  puStack_888 = &DAT_10f434030;
  uStack_880 = 6;
  uStack_878 = 0x4b0082ff;
  puStack_870 = &DAT_10f434037;
  *(undefined8 *)(extraout_x8 + 0x5c8) = 0xfffff0ff;
  *(undefined8 *)(extraout_x8 + 0x5c0) = 5;
  puStack_858 = &DAT_10f43403d;
  uStack_850 = 5;
  uStack_848 = 0xf0e68cff;
  puStack_840 = &DAT_10f434043;
  *(undefined8 *)(extraout_x8 + 0x5f8) = 0xe6e6faff;
  *(undefined8 *)(extraout_x8 + 0x5f0) = 8;
  puStack_828 = &DAT_10f43404c;
  uStack_820 = 0xd;
  uStack_818 = 0xfff0f5ff;
  puStack_810 = &DAT_10f43405a;
  *(undefined8 *)(extraout_x8 + 0x628) = 0x7cfc00ff;
  *(undefined8 *)(extraout_x8 + 0x620) = 9;
  puStack_7f8 = &DAT_10f434064;
  uStack_7f0 = 0xc;
  uStack_7e8 = 0xfffacdff;
  puStack_7e0 = &DAT_10f434071;
  *(undefined8 *)(extraout_x8 + 0x658) = 0xadd8e6ff;
  *(undefined8 *)(extraout_x8 + 0x650) = 9;
  puStack_7c8 = &DAT_10f43407b;
  uStack_7c0 = 10;
  uStack_7b8 = 0xf08080ff;
  puStack_7b0 = &DAT_10f434086;
  *(undefined8 *)(extraout_x8 + 0x688) = 0xe0ffffff;
  *(undefined8 *)(extraout_x8 + 0x680) = 9;
  puStack_798 = &DAT_10f434090;
  uStack_790 = 0x14;
  uStack_788 = 0xfafad2ff;
  puStack_780 = &DAT_10f4340a5;
  *(undefined8 *)(extraout_x8 + 0x6b8) = 0xd3d3d3ff;
  *(undefined8 *)(extraout_x8 + 0x6b0) = 9;
  puStack_768 = &DAT_10f4340af;
  uStack_760 = 10;
  uStack_758 = 0x90ee90ff;
  puStack_750 = &DAT_10f4340ba;
  *(undefined8 *)(extraout_x8 + 0x6e8) = 0xd3d3d3ff;
  *(undefined8 *)(extraout_x8 + 0x6e0) = 9;
  puStack_738 = &DAT_10f4340c4;
  uStack_730 = 9;
  uStack_728 = 0xffb6c1ff;
  puStack_720 = &DAT_10f4340ce;
  *(undefined8 *)(extraout_x8 + 0x718) = 0xffa07aff;
  *(undefined8 *)(extraout_x8 + 0x710) = 0xb;
  puStack_708 = &DAT_10f4340da;
  uStack_700 = 0xd;
  uStack_6f8 = 0x20b2aaff;
  puStack_6f0 = &DAT_10f4340e8;
  *(undefined8 *)(extraout_x8 + 0x748) = 0x87cefaff;
  *(undefined8 *)(extraout_x8 + 0x740) = 0xc;
  puStack_6d8 = &DAT_10f4340f5;
  uStack_6d0 = 0xe;
  uStack_6c8 = 0x778899ff;
  puStack_6c0 = &DAT_10f434104;
  *(undefined8 *)(extraout_x8 + 0x778) = 0x778899ff;
  *(undefined8 *)(extraout_x8 + 0x770) = 0xe;
  puStack_6a8 = &DAT_10f434113;
  uStack_6a0 = 0xe;
  uStack_698 = 0xb0c4deff;
  puStack_690 = &DAT_10f434122;
  *(undefined8 *)(extraout_x8 + 0x7a8) = 0xffffe0ff;
  *(undefined8 *)(extraout_x8 + 0x7a0) = 0xb;
  pcStack_678 = "lime";
  uStack_670 = 4;
  uStack_668 = 0xff00ff;
  puStack_660 = &DAT_10f43412e;
  *(undefined8 *)(extraout_x8 + 0x7d8) = 0x32cd32ff;
  *(undefined8 *)(extraout_x8 + 2000) = 9;
  puStack_648 = &DAT_10f434138;
  uStack_640 = 5;
  uStack_638 = 0xfaf0e6ff;
  puStack_630 = &DAT_10f68f13a;
  *(undefined8 *)(extraout_x8 + 0x808) = 0xff00ffff;
  *(undefined8 *)(extraout_x8 + 0x800) = 7;
  pcStack_618 = "maroon";
  uStack_610 = 6;
  uStack_608 = 0x800000ff;
  puStack_600 = &DAT_10f43413e;
  *(undefined8 *)(extraout_x8 + 0x838) = 0x66cdaaff;
  *(undefined8 *)(extraout_x8 + 0x830) = 0x10;
  puStack_5e8 = &DAT_10f43414f;
  uStack_5e0 = 10;
  uStack_5d8 = 0xcdff;
  puStack_5d0 = &DAT_10f43415a;
  *(undefined8 *)(extraout_x8 + 0x868) = 0xba55d3ff;
  *(undefined8 *)(extraout_x8 + 0x860) = 0xc;
  puStack_5b8 = &DAT_10f434167;
  uStack_5b0 = 0xc;
  uStack_5a8 = 0x9370dbff;
  puStack_5a0 = &DAT_10f434174;
  *(undefined8 *)(extraout_x8 + 0x898) = 0x3cb371ff;
  *(undefined8 *)(extraout_x8 + 0x890) = 0xe;
  puStack_588 = &DAT_10f434183;
  uStack_580 = 0xf;
  uStack_578 = 0x7b68eeff;
  puStack_570 = &DAT_10f434193;
  *(undefined8 *)(extraout_x8 + 0x8c8) = 0xfa9aff;
  *(undefined8 *)(extraout_x8 + 0x8c0) = 0x11;
  puStack_558 = &DAT_10f4341a5;
  uStack_550 = 0xf;
  uStack_548 = 0x48d1ccff;
  puStack_540 = &DAT_10f4341b5;
  *(undefined8 *)(extraout_x8 + 0x8f8) = 0xc71585ff;
  *(undefined8 *)(extraout_x8 + 0x8f0) = 0xf;
  puStack_528 = &DAT_10f4341c5;
  uStack_520 = 0xc;
  uStack_518 = 0x191970ff;
  puStack_510 = &DAT_10f4341d2;
  *(undefined8 *)(extraout_x8 + 0x928) = 0xf5fffaff;
  *(undefined8 *)(extraout_x8 + 0x920) = 9;
  puStack_4f8 = &DAT_10f4341dc;
  uStack_4f0 = 9;
  uStack_4e8 = 0xffe4e1ff;
  puStack_4e0 = &DAT_10f4341e6;
  *(undefined8 *)(extraout_x8 + 0x958) = 0xffe4b5ff;
  *(undefined8 *)(extraout_x8 + 0x950) = 8;
  puStack_4c8 = &DAT_10f4341ef;
  uStack_4c0 = 0xb;
  uStack_4b8 = 0xffdeadff;
  pcStack_4b0 = "navy";
  *(undefined8 *)(extraout_x8 + 0x988) = 0x80ff;
  *(undefined8 *)(extraout_x8 + 0x980) = 4;
  puStack_498 = &DAT_10f4341fb;
  uStack_490 = 7;
  uStack_488 = 0xfdf5e6ff;
  pcStack_480 = "olive";
  *(undefined8 *)(extraout_x8 + 0x9b8) = 0x808000ff;
  *(undefined8 *)(extraout_x8 + 0x9b0) = 5;
  puStack_468 = &DAT_10f434203;
  uStack_460 = 9;
  uStack_458 = 0x6b8e23ff;
  puStack_450 = &DAT_10f68f122;
  *(undefined8 *)(extraout_x8 + 0x9e8) = 0xffa500ff;
  *(undefined8 *)(extraout_x8 + 0x9e0) = 6;
  puStack_438 = &DAT_10f43420d;
  uStack_430 = 9;
  uStack_428 = 0xff4500ff;
  puStack_420 = &DAT_10f434217;
  *(undefined8 *)(extraout_x8 + 0xa18) = 0xda70d6ff;
  *(undefined8 *)(extraout_x8 + 0xa10) = 6;
  puStack_408 = &DAT_10f43421e;
  uStack_400 = 0xd;
  uStack_3f8 = 0xeee8aaff;
  puStack_3f0 = &DAT_10f43422c;
  *(undefined8 *)(extraout_x8 + 0xa48) = 0x98fb98ff;
  *(undefined8 *)(extraout_x8 + 0xa40) = 9;
  pcVar10 = "paleturquoise";
  puStack_3d8 = &DAT_10f434236;
  uStack_3d0 = 0xd;
  uStack_3c8 = 0xafeeeeff;
  puStack_3c0 = &DAT_10f434244;
  *(undefined8 *)(extraout_x8 + 0xa78) = 0xdb7093ff;
  *(undefined8 *)(extraout_x8 + 0xa70) = 0xd;
  puStack_3a8 = &DAT_10f434252;
  uStack_3a0 = 10;
  uStack_398 = 0xffefd5ff;
  puStack_390 = &DAT_10f43425d;
  *(undefined8 *)(extraout_x8 + 0xaa8) = 0xffdab9ff;
  *(undefined8 *)(extraout_x8 + 0xaa0) = 9;
  puStack_378 = &DAT_10f434267;
  uStack_370 = 4;
  uStack_368 = 0xcd853fff;
  puStack_360 = &DAT_10f68f130;
  *(undefined8 *)(extraout_x8 + 0xad8) = 0xffc0cbff;
  *(undefined8 *)(extraout_x8 + 0xad0) = 4;
  ppcVar8 = (char **)&DAT_10f43426c;
  puStack_348 = &DAT_10f43426c;
  uStack_340 = 4;
  uStack_338 = 0xdda0ddff;
  puStack_330 = &DAT_10f434271;
  *(undefined8 *)(extraout_x8 + 0xb08) = 0xb0e0e6ff;
  *(undefined8 *)(extraout_x8 + 0xb00) = 10;
  pcStack_318 = "purple";
  uStack_310 = 6;
  uStack_308 = 0x800080ff;
  puStack_300 = &DAT_10f68f0fe;
  *(undefined8 *)(extraout_x8 + 0xb38) = 0xff0000ff;
  *(undefined8 *)(extraout_x8 + 0xb30) = 3;
  puStack_2e8 = &DAT_10f43427c;
  uStack_2e0 = 9;
  uStack_2d8 = 0xbc8f8fff;
  puStack_2d0 = &DAT_10f434286;
  *(undefined8 *)(extraout_x8 + 0xb68) = 0x4169e1ff;
  *(undefined8 *)(extraout_x8 + 0xb60) = 9;
  puStack_2b8 = &DAT_10f434290;
  uStack_2b0 = 0xb;
  uStack_2a8 = 0x8b4513ff;
  puStack_2a0 = &DAT_10f43429c;
  *(undefined8 *)(extraout_x8 + 0xb98) = 0xfa8072ff;
  *(undefined8 *)(extraout_x8 + 0xb90) = 6;
  puStack_288 = &DAT_10f4342a3;
  uStack_280 = 10;
  uStack_278 = 0xf4a460ff;
  puStack_270 = &DAT_10f4342ae;
  *(undefined8 *)(extraout_x8 + 0xbc8) = 0x2e8b57ff;
  *(undefined8 *)(extraout_x8 + 0xbc0) = 8;
  puStack_258 = &DAT_10f4342b7;
  uStack_250 = 8;
  uStack_248 = 0xfff5eeff;
  puStack_240 = &DAT_10f4342c0;
  *(undefined8 *)(extraout_x8 + 0xbf8) = 0xa0522dff;
  *(undefined8 *)(extraout_x8 + 0xbf0) = 6;
  pcStack_228 = "silver";
  uStack_220 = 6;
  uStack_218 = 0xc0c0c0ff;
  puStack_210 = &DAT_10f4342c7;
  *(undefined8 *)(extraout_x8 + 0xc28) = 0x87ceebff;
  *(undefined8 *)(extraout_x8 + 0xc20) = 7;
  puStack_1f8 = &DAT_10f4342cf;
  uStack_1f0 = 9;
  uStack_1e8 = 0x6a5acdff;
  puStack_1e0 = &DAT_10f4342d9;
  *(undefined8 *)(extraout_x8 + 0xc58) = 0x708090ff;
  *(undefined8 *)(extraout_x8 + 0xc50) = 9;
  puStack_1c8 = &DAT_10f4342e3;
  uStack_1c0 = 9;
  uStack_1b8 = 0x708090ff;
  puStack_1b0 = &DAT_10f40b434;
  *(undefined8 *)(extraout_x8 + 0xc88) = 0xfffafaff;
  *(undefined8 *)(extraout_x8 + 0xc80) = 4;
  puStack_198 = &DAT_10f4342ed;
  uStack_190 = 0xb;
  uStack_188 = 0xff7fff;
  puStack_180 = &DAT_10f4342f9;
  *(undefined8 *)(extraout_x8 + 0xcb8) = 0x4682b4ff;
  *(undefined8 *)(extraout_x8 + 0xcb0) = 9;
  puStack_168 = &DAT_10f434303;
  uStack_160 = 3;
  uStack_158 = 0xd2b48cff;
  pcStack_150 = "teal";
  *(undefined8 *)(extraout_x8 + 0xce8) = 0x8080ff;
  *(undefined8 *)(extraout_x8 + 0xce0) = 4;
  puStack_138 = &DAT_10f434307;
  uStack_130 = 7;
  uStack_128 = 0xd8bfd8ff;
  puStack_120 = &DAT_10f43430f;
  *(undefined8 *)(extraout_x8 + 0xd18) = 0xff6347ff;
  *(undefined8 *)(extraout_x8 + 0xd10) = 6;
  puStack_108 = &DAT_10f433e0f;
  uStack_100 = 0xb;
  uStack_f8 = 0;
  puStack_f0 = &DAT_10f434316;
  *(undefined8 *)(extraout_x8 + 0xd48) = 0x40e0d0ff;
  *(undefined8 *)(extraout_x8 + 0xd40) = 9;
  puStack_d8 = &DAT_10f434320;
  uStack_d0 = 6;
  uStack_c8 = 0xee82eeff;
  puStack_c0 = &DAT_10f434327;
  *(undefined8 *)(extraout_x8 + 0xd78) = 0xf5deb3ff;
  *(undefined8 *)(extraout_x8 + 0xd70) = 5;
  puStack_a8 = &DAT_10f68f10c;
  uStack_a0 = 5;
  uStack_98 = 0xffffffff;
  puStack_90 = &DAT_10f43432d;
  *(undefined8 *)(extraout_x8 + 0xda8) = 0xf5f5f5ff;
  *(undefined8 *)(extraout_x8 + 0xda0) = 10;
  pcStack_78 = "yellow";
  uStack_70 = 6;
  uStack_68 = 0xffff00ff;
  puStack_60 = &DAT_10f434338;
  *(undefined8 *)(extraout_x8 + 0xdd8) = 0x9acd32ff;
  *(undefined8 *)(extraout_x8 + 0xdd0) = 0xb;
  puStack_e50 = (undefined8 *)0x0;
  puStack_e48 = (undefined8 *)0x0;
  puStack_e40 = (undefined8 *)0x0;
  uStack_e30 = 0;
  puVar5 = (undefined8 *)0xde0;
  puStack_e38 = (undefined1 *)&puStack_e50;
  uStack_48 = extraout_x9;
  __Znwm();
  puStack_e40 = puVar5 + 0x1bc;
  puStack_e48 = puVar5;
  for (lVar11 = 0; lVar11 != 0xde0; lVar11 = lVar11 + 0x18) {
    uVar12 = *(undefined8 *)((long)apcStack_e28 + lVar11);
    puStack_e48[1] = *(undefined8 *)((long)apcStack_e28 + lVar11 + 8);
    *puStack_e48 = uVar12;
    puStack_e48[2] = *(undefined8 *)((long)apcStack_e28 + lVar11 + 0x10);
    puStack_e48 = puStack_e48 + 3;
  }
  uStack_e30 = 1;
  puStack_e50 = puVar5;
  FUN_10b98b67c(&puStack_e38);
  puVar4 = puStack_e48;
  for (puVar5 = puStack_e50; puVar5 != puVar4; puVar5 = puVar5 + 3) {
    func_0x000107c31084();
    func_0x000107c3107c(apcStack_e28);
    pcVar10 = (char *)puVar5[2];
    ppcVar8 = apcStack_e28;
    FUN_10b98af80(param_1);
    func_0x000107c278f4(apcStack_e28);
  }
  FUN_10b98b6a8();
  func_0x00010b98bfdc(uStack_48);
  if (extraout_x9_00 != extraout_x8_00) {
    ___stack_chk_fail();
    FUN_10b98b67c(&puStack_e38);
    FUN_10b98b6c0(param_1 + 3);
    func_0x000107c278f4(param_1 + 2);
    __Unwind_Resume();
    puVar7 = (undefined1 *)((long)ppuVar6 + 0x18);
    ppcVar9 = ppcVar8;
    FUN_10b98b0c8();
    if ((undefined1 *)(*(long *)((long)ppuVar6 + 0x18) + *(long *)((long)ppuVar6 + 0x30)) == puVar7)
    {
      puVar5 = (undefined8 *)((long)ppuVar6 + 0x18);
      FUN_10b98b0e8(puVar5,ppcVar8);
      *puVar5 = pcVar10;
    }
    else {
      if (ppcVar9[1] == pcVar10) {
        return (undefined8 *)0x0;
      }
      ppcVar9[1] = pcVar10;
    }
    return (undefined8 *)0x1;
  }
  return param_1;
}



/* Entry: 10b98af80; end: 10b98aff7;  */

undefined8 FUN_10b98af80(long param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x18;
  lVar3 = param_2;
  FUN_10b98b0c8();
  if (*(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x30) == lVar1) {
    plVar2 = (long *)(param_1 + 0x18);
    FUN_10b98b0e8(plVar2,param_2);
    *plVar2 = param_3;
  }
  else {
    if (*(long *)(lVar3 + 8) == param_3) {
      return 0;
    }
    *(long *)(lVar3 + 8) = param_3;
  }
  return 1;
}



/* Entry: 10b98aff8; end: 10b98b033;  */

undefined8 * FUN_10b98aff8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7d760;
  FUN_10b98b6c0(param_1 + 3);
  func_0x000107c278f4(param_1 + 2);
  return param_1;
}



/* Entry: 10b98b034; end: 10b98b037;  */

undefined8 * FUN_10b98b034(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7d760;
  FUN_10b98b6c0(param_1 + 3);
  func_0x000107c278f4(param_1 + 2);
  return param_1;
}



/* Entry: 10b98b038; end: 10b98b04b;  */

void FUN_10b98b038(void)

{
  FUN_10b98aff8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b98b04c; end: 10b98b0c7;  */

uint FUN_10b98b04c(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long *plStack_40;
  long *plStack_38;
  
  plVar1 = param_2;
  plVar3 = param_2;
  FUN_10b98b948();
  uVar6 = 0;
  lVar4 = *param_2;
  lVar5 = param_2[3];
  plStack_40 = plVar1;
  plStack_38 = plVar3;
  while (plStack_40 != (long *)(lVar4 + lVar5)) {
    uVar2 = param_1;
    FUN_10b98af80(param_1,plStack_38,plStack_38[1]);
    uVar6 = (uint)uVar2 | uVar6;
    func_0x00010b98b9cc(&plStack_40);
  }
  return uVar6 & 1;
}



/* Entry: 10b98b0c8; end: 10b98b0e7;  */

void FUN_10b98b0c8(int param_1)

{
  func_0x00010b98c038();
  func_0x00010b98bfec();
  FUN_10b98ba3c();
  if (param_1 != 0) {
    func_0x00010b98c058();
  }
  return;
}



/* Entry: 10b98b0e8; end: 10b98b10f;  */

long FUN_10b98b0e8(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_10b9446b0(auStack_28);
  return lStack_20 + 8;
}



/* Entry: 10b98b110; end: 10b98b17b;  */

undefined1  [16] FUN_10b98b110(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  lVar2 = param_1 + 0x18;
  func_0x00010b98b15c();
  bVar1 = *(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x30) == lVar2;
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 8);
  }
  auVar4[8] = !bVar1;
  auVar4._0_8_ = uVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 10b98b17c; end: 10b98b27f;  */

undefined8 * FUN_10b98b17c(undefined8 *param_1)

{
  undefined1 auStack_48 [8];
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d7d790;
  param_1[3] = 0x32aaaba7;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xc] = &UNK_10dd5b8b0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  func_0x000107c31088(auStack_48,&UNK_10f7d053f);
  FUN_10b98b280(param_1 + 0x12,auStack_48);
  func_0x000107c278f4(auStack_48);
  param_1[0x13] = 0;
  FUN_10b98b2b8(param_1 + 0xc,param_1[0x12] + 0x10);
  FUN_10b8cb8e0();
  return param_1;
}



/* Entry: 10b98b280; end: 10b98b2b7;  */

void FUN_10b98b280(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x00010b98bfb4();
  FUN_10b989f3c();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 10b98b2b8; end: 10b98b2df;  */

long FUN_10b98b2b8(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_10b98babc(auStack_28);
  return lStack_20 + 8;
}



/* Entry: 10b98b2e0; end: 10b98b32b;  */

undefined8 * FUN_10b98b2e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7d790;
  FUN_10b8cdc10(param_1 + 0x12);
  FUN_10b98b6e4(param_1 + 0xc);
  FUN_10b9a1f08(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b98b32c; end: 10b98b32f;  */

undefined8 * FUN_10b98b32c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7d790;
  FUN_10b8cdc10(param_1 + 0x12);
  FUN_10b98b6e4(param_1 + 0xc);
  FUN_10b9a1f08(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b98b330; end: 10b98b343;  */

void FUN_10b98b330(void)

{
  FUN_10b98b2e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b98b344; end: 10b98b38b;  */

void FUN_10b98b344(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  func_0x00010b98bf8c();
  lVar4 = *(long *)(param_2 + 0x90);
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2 + 0x18);
  return;
}



/* Entry: 10b98b38c; end: 10b98b3d7;  */

void FUN_10b98b38c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x00010b98bf8c();
  FUN_10b98b3d8(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2 + 0x18);
  return;
}



/* Entry: 10b98b3d8; end: 10b98b46b;  */

void FUN_10b98b3d8(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = param_2 + 0x60;
  lVar4 = param_3;
  func_0x00010b98b61c();
  if (*(long *)(param_2 + 0x60) + *(long *)(param_2 + 0x78) == lVar5) {
    FUN_10b98b644(param_1,param_3);
    FUN_10b98b2b8(param_2 + 0x60,param_3);
    FUN_10b8cb8e0();
  }
  else {
    lVar5 = *(long *)(lVar4 + 8);
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *param_1 = lVar5;
  }
  return;
}



/* Entry: 10b98b46c; end: 10b98b4f3;  */

void FUN_10b98b46c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  uStack_38 = 0;
  func_0x00010b98bf8c();
  func_0x00010b98bf9c();
  func_0x00010b98c04c();
  FUN_10b8cdc10(auStack_40);
  uVar1 = uStack_38;
  FUN_10b98b04c(uStack_38,param_3);
  func_0x00010b98bf94();
  if ((int)uVar1 != 0) {
    FUN_10b98b4f4(param_1,uStack_38,0);
  }
  func_0x00010b98bfd4();
  return;
}



/* Entry: 10b98b4f4; end: 10b98b553;  */

void FUN_10b98b4f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  func_0x00010b98bf8c();
  plVar1 = *(long **)(param_1 + 0x98);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010b98b548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 10b98b554; end: 10b98b5ef;  */

void FUN_10b98b554(long param_1,long *param_2)

{
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  uStack_38 = 0;
  func_0x00010b98bf8c();
  if (*param_2 == *(long *)(*(long *)(param_1 + 0x90) + 0x10)) {
    func_0x00010b98bf94();
  }
  else {
    func_0x00010b98bf9c();
    func_0x00010b98c04c();
    FUN_10b8cdc10(auStack_40);
    FUN_10b8cb8e0((long *)(param_1 + 0x90),&uStack_38);
    func_0x00010b98bf94();
    FUN_10b98b4f4(param_1,uStack_38,1);
  }
  func_0x00010b98bfd4();
  return;
}



/* Entry: 10b98b5f0; end: 10b98b643;  */

void FUN_10b98b5f0(long param_1,undefined8 param_2)

{
  func_0x00010b98bf8c();
  *(undefined8 *)(param_1 + 0x98) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x18);
  return;
}



/* Entry: 10b98b644; end: 10b98b67b;  */

void FUN_10b98b644(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x00010b98bfb4();
  FUN_10b989f3c();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 10b98b67c; end: 10b98b6a7;  */

undefined8 * FUN_10b98b67c(undefined8 *param_1)

{
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    FUN_10b98b6a8(*param_1);
  }
  return param_1;
}



/* Entry: 10b98b6a8; end: 10b98b6bf;  */

void FUN_10b98b6a8(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b98b6c0; end: 10b98b6e3;  */

undefined8 FUN_10b98b6c0(undefined8 param_1)

{
  func_0x00010b944498();
  return param_1;
}



/* Entry: 10b98b6e4; end: 10b98b707;  */

undefined8 FUN_10b98b6e4(undefined8 param_1)

{
  FUN_10b98b708();
  return param_1;
}



/* Entry: 10b98b708; end: 10b98b783;  */

void FUN_10b98b708(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar2 = 0;
    for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
      if (-1 < *(char *)(*param_1 + lVar3)) {
        FUN_10b98b784(param_1[1] + lVar2);
        lVar1 = param_1[3];
      }
      lVar2 = lVar2 + 0x10;
    }
    __ZdlPv();
    param_1[5] = 0;
    *param_1 = (long)&UNK_10dd5b8b0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10b98b784; end: 10b98b7ab;  */

undefined8 FUN_10b98b784(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_10b8cdc10(param_1 + 8);
  func_0x00010007e5d0(param_1);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b98b7ac; end: 10b98b7eb;  */

ulong FUN_10b98b7ac(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10b98b7ec; end: 10b98b913;  */

void FUN_10b98b7ec(long *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = *param_1;
  lVar5 = param_1[1];
  lVar7 = param_1[3];
  lVar8 = (param_2 & 0xfffffffffffffff8) + 0x10;
  lVar3 = lVar8 + param_2 * 0x10;
  __Znwm();
  *param_1 = lVar3;
  param_1[1] = lVar3 + lVar8;
  _memset();
  lVar8 = 0;
  *(undefined1 *)(lVar3 + param_2) = 0xff;
  lVar3 = 6;
  if (param_2 != 7) {
    lVar3 = param_2 - (param_2 >> 3);
  }
  param_1[5] = lVar3 - param_1[2];
  param_1[3] = param_2;
  for (; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      lVar3 = lVar5;
      FUN_10b98b914();
      lVar6 = *param_1;
      lVar4 = lVar6;
      FUN_10b98b7ac(lVar6,param_1[3],lVar3);
      bVar2 = (byte)lVar3 & 0x7f;
      *(byte *)(lVar6 + lVar4) = bVar2;
      *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & lVar4 - 8U) + 1) = bVar2;
      FUN_10b98b934(param_1[1] + lVar4 * 0x10,lVar5);
    }
    lVar5 = lVar5 + 0x10;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b98b914; end: 10b98b933;  */

void FUN_10b98b914(undefined8 *param_1)

{
  undefined1 uStack_11;
  
  func_0x000107c27918(&uStack_11,*param_1);
  return;
}



/* Entry: 10b98b934; end: 10b98b947;  */

undefined8 FUN_10b98b934(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 unaff_x19;
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10b8cdc10(param_2 + 1);
  func_0x00010007e5d0(param_2);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b98b948; end: 10b98b973;  */

undefined1  [16] FUN_10b98b948(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  FUN_10b98b974(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10b98b974; end: 10b98ba3b;  */

void FUN_10b98b974(long *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uStack_28;
  
  pcVar2 = (char *)*param_1;
  while (*pcVar2 < -1) {
    uStack_28 = *(undefined8 *)pcVar2;
    puVar1 = &uStack_28;
    func_0x000107c27e58();
    pcVar2 = (char *)(*param_1 + ((ulong)puVar1 & 0xffffffff));
    *param_1 = (long)pcVar2;
    param_1[1] = param_1[1] + ((ulong)puVar1 & 0xffffffff) * 0x10;
  }
  return;
}



/* Entry: 10b98ba3c; end: 10b98babb;  */

bool FUN_10b98ba3c(long param_1,long *param_2,undefined8 param_3,ulong *param_4)

{
  long extraout_x8;
  long lVar1;
  ulong extraout_x9;
  ulong extraout_x10;
  long extraout_x11;
  long extraout_x12;
  ulong extraout_x13;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  func_0x00010b98c06c();
  lVar1 = extraout_x8;
  uVar2 = extraout_x13;
  while( true ) {
    uVar2 = uVar2 & extraout_x9;
    uVar4 = *(ulong *)(extraout_x11 + uVar2);
    lVar5 = *param_2;
    for (uVar3 = (uVar4 ^ extraout_x10) + extraout_x12 & (uVar4 ^ extraout_x10 ^ 0xffffffffffffffff)
                 & 0x8080808080808080; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
      uVar6 = (uVar3 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar3 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar2 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) & extraout_x9;
      *param_4 = uVar6;
      if (*(long *)(*(long *)(param_1 + 8) + uVar6 * 0x10) == lVar5) goto LAB_10b98c014;
    }
    if ((uVar4 & ~uVar4 << 6 & 0x8080808080808080) != 0) break;
    lVar1 = lVar1 + 8;
    uVar2 = lVar1 + uVar2;
  }
LAB_10b98c014:
  return uVar3 != 0;
}



/* Entry: 10b98babc; end: 10b98bbe7;  */

void FUN_10b98babc(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined1 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  
  plVar6 = param_2;
  FUN_10b98bbe8();
  lVar10 = 0;
  uVar11 = (ulong)plVar6 >> 7;
  lVar8 = *param_2;
  while( true ) {
    uVar11 = uVar11 & param_2[3];
    uVar14 = *(ulong *)(lVar8 + uVar11);
    uVar12 = uVar14 ^ ((ulong)plVar6 & 0x7f) * 0x101010101010101;
    for (uVar12 = uVar12 + 0xfefefefefefefeff & (uVar12 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
      uVar3 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      lVar13 = param_2[1];
      plVar7 = (long *)(uVar11 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & param_2[3]);
      if (*(long *)(lVar13 + (long)plVar7 * 0x10) == *param_3) {
        uVar9 = 0;
        goto LAB_10b98bb74;
      }
    }
    if ((uVar14 & ~uVar14 << 6 & 0x8080808080808080) != 0) break;
    lVar10 = lVar10 + 8;
    uVar11 = lVar10 + uVar11;
  }
  plVar7 = param_2;
  FUN_10b98bc2c(param_2,plVar6);
  plVar2 = (long *)(param_2[1] + (long)plVar7 * 0x10);
  lVar10 = *param_3;
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar2 = lVar10;
  plVar2[1] = 0;
  *(byte *)(*param_2 + (long)plVar7) = (byte)plVar6 & 0x7f;
  func_0x00010b98bffc();
  lVar8 = *param_2;
  lVar13 = param_2[1];
  uVar9 = 1;
LAB_10b98bb74:
  *param_1 = lVar8 + (long)plVar7;
  param_1[1] = lVar13 + (long)plVar7 * 0x10;
  *(undefined1 *)(param_1 + 2) = uVar9;
  return;
}



/* Entry: 10b98bbe8; end: 10b98bc2b;  */

void FUN_10b98bbe8(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  func_0x00010b98bc0c(&lStack_18);
  return;
}



/* Entry: 10b98bc2c; end: 10b98bcfb;  */

void FUN_10b98bc2c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_1;
  uVar4 = param_1[3];
  lVar1 = lVar3;
  FUN_10b98b7ac(lVar3,uVar4,param_2);
  lVar2 = param_1[5];
  if (lVar2 != 0) goto LAB_10b98bc74;
  if (*(char *)(lVar3 + lVar1) == -2) {
    lVar2 = 0;
    goto LAB_10b98bc74;
  }
  if (uVar4 == 0) {
    uVar4 = 1;
LAB_10b98bcd0:
    FUN_10b98b7ec(param_1,uVar4);
  }
  else {
    if (uVar4 - (uVar4 >> 3) >> 1 < (ulong)param_1[2]) {
      uVar4 = uVar4 << 1 | 1;
      goto LAB_10b98bcd0;
    }
    FUN_10b98bcfc(param_1);
  }
  lVar3 = *param_1;
  lVar1 = lVar3;
  FUN_10b98b7ac(lVar3,param_1[3],param_2);
  lVar2 = param_1[5];
LAB_10b98bc74:
  param_1[2] = param_1[2] + 1;
  param_1[5] = lVar2 - (ulong)(*(char *)(lVar3 + lVar1) == -0x80);
  return;
}



/* Entry: 10b98bcfc; end: 10b98beaf;  */

void FUN_10b98bcfc(long *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x9;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *param_1;
  func_0x000104bda340(lVar4,param_1[3]);
  for (uVar9 = 0; iVar3 = (int)lVar4, uVar9 != param_1[3]; uVar9 = uVar9 + 1) {
    if (*(char *)(*param_1 + uVar9) == -2) {
      uVar5 = param_1[1] + uVar9 * 0x10;
      FUN_10b98b914();
      lVar7 = *param_1;
      uVar8 = param_1[3];
      lVar4 = lVar7;
      FUN_10b98b7ac(lVar7,uVar8,uVar5);
      uVar6 = uVar8 & uVar5 >> 7;
      if (((lVar4 - uVar6 ^ uVar9 - uVar6) & uVar8) < 8) {
        *(byte *)(lVar7 + uVar9) = (byte)uVar5 & 0x7f;
        func_0x00010b98bffc();
      }
      else {
        cVar1 = *(char *)(lVar7 + lVar4);
        bVar2 = (byte)uVar5 & 0x7f;
        *(byte *)(lVar7 + lVar4) = bVar2;
        *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & lVar4 - 8U) + 1) = bVar2;
        lVar7 = param_1[1] + uVar9 * 0x10;
        if (cVar1 == -0x80) {
          lVar4 = param_1[1] + lVar4 * 0x10;
          FUN_10b98b934(lVar4,lVar7);
          *(undefined1 *)(*param_1 + uVar9) = 0x80;
          *(undefined1 *)(*param_1 + (param_1[3] & uVar9 - 8) + (param_1[3] & 7U) + 1) = 0x80;
        }
        else {
          FUN_10b98b934(auStack_68,lVar7);
          FUN_10b98b934(param_1[1] + uVar9 * 0x10,param_1[1] + lVar4 * 0x10);
          lVar4 = param_1[1] + lVar4 * 0x10;
          FUN_10b98b934(lVar4,auStack_68);
          uVar9 = uVar9 - 1;
        }
      }
    }
  }
  lVar4 = 6;
  if (uVar9 != 7) {
    lVar4 = uVar9 - (uVar9 >> 3);
  }
  param_1[5] = lVar4 - param_1[2];
  func_0x00010b98bfdc(uStack_58);
  if (extraout_x9 != extraout_x8) {
    ___stack_chk_fail();
    func_0x00010b98beec();
    if (iVar3 != 0) {
      func_0x00010b98c058();
    }
    return;
  }
  return;
}



/* Entry: 10b98beb0; end: 10b98beeb;  */

void FUN_10b98beb0(int param_1)

{
  FUN_10b98beec();
  if (param_1 != 0) {
    func_0x00010b98c058();
  }
  return;
}



/* Entry: 10b98beec; end: 10b98c093;  */

bool FUN_10b98beec(long param_1,long *param_2,undefined8 param_3,ulong *param_4)

{
  long extraout_x8;
  long lVar1;
  ulong extraout_x9;
  ulong extraout_x10;
  long extraout_x11;
  long extraout_x12;
  ulong extraout_x13;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  func_0x00010b98c06c();
  lVar1 = extraout_x8;
  uVar2 = extraout_x13;
  while( true ) {
    uVar2 = uVar2 & extraout_x9;
    uVar4 = *(ulong *)(extraout_x11 + uVar2);
    lVar5 = *param_2;
    for (uVar3 = (uVar4 ^ extraout_x10) + extraout_x12 & (uVar4 ^ extraout_x10 ^ 0xffffffffffffffff)
                 & 0x8080808080808080; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
      uVar6 = (uVar3 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar3 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar2 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) & extraout_x9;
      *param_4 = uVar6;
      if (*(long *)(*(long *)(param_1 + 8) + uVar6 * 0x10) == lVar5) goto LAB_10b98c014;
    }
    if ((uVar4 & ~uVar4 << 6 & 0x8080808080808080) != 0) break;
    lVar1 = lVar1 + 8;
    uVar2 = lVar1 + uVar2;
  }
LAB_10b98c014:
  return uVar3 != 0;
}



/* Entry: 10b98c094; end: 10b98c0f7;  */

undefined8 FUN_10b98c094(void)

{
  int iVar1;
  
  if ((bRam00000001137fd318 & 1) == 0) {
    iVar1 = 0x137fd318;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x1137fd310,&UNK_10f7d0547);
      ___cxa_guard_release(0x1137fd318);
    }
  }
  return 0x1137fd310;
}



/* Entry: 10b98c0f8; end: 10b98c13b;  */

void FUN_10b98c0f8(long *param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  
  FUN_10b8a1868();
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x68) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(lVar1 + 0x18,param_3 + 0x18,0x50);
  return;
}



/* Entry: 10b98c13c; end: 10b98c2bb;  */

void FUN_10b98c13c(long param_1,long param_2)

{
  float *pfVar1;
  float fVar2;
  long lVar3;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong uVar4;
  long extraout_x8_01;
  ulong uVar5;
  long extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  float *pfVar6;
  long lVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float afStack_d8 [20];
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  float afStack_68 [20];
  undefined8 uStack_18;
  
  lVar3 = 0;
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  fVar2 = *(float *)(param_1 + 0x28);
  fVar9 = *(float *)(param_1 + 0x3c);
  fVar10 = *(float *)(param_1 + 0x50);
  fVar11 = *(float *)(param_1 + 100);
  for (uVar5 = 0; uVar5 < 0x14; uVar5 = uVar5 + 5) {
    pfVar1 = (float *)(param_2 + uVar5 * 4);
    fVar12 = *pfVar1;
    fVar15 = pfVar1[1];
    fVar13 = pfVar1[2];
    fVar14 = pfVar1[3];
    pfVar6 = afStack_68 + lVar3;
    pfVar8 = (float *)(param_1 + 0x2c);
    for (lVar7 = -1; lVar7 != -5; lVar7 = lVar7 + -1) {
      *pfVar6 = fVar15 * *pfVar8 + pfVar8[-5] * fVar12 + pfVar8[5] * fVar13 + pfVar8[10] * fVar14;
      pfVar8 = pfVar8 + 1;
      pfVar6 = pfVar6 + 1;
    }
    lVar3 = lVar3 + 5;
    *pfVar6 = fVar9 * fVar15 + fVar2 * fVar12 + fVar10 * fVar13 + fVar11 * fVar14 + pfVar1[4];
  }
  param_1 = param_1 + 0x18;
  _memcpy(param_1,afStack_68,0x50);
  FUN_10b98c2fc(uStack_18);
  if (extraout_x9 == extraout_x8) {
    return;
  }
  ___stack_chk_fail();
  uStack_78 = 0x10b98c228;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_10b98c2fc(0);
  uStack_88 = extraout_x9_00;
  afStack_d8[7] = 0.0;
  afStack_d8[8] = 0.0;
  afStack_d8[9] = 0.0;
  afStack_d8[10] = 0.0;
  afStack_d8[0x11] = 0.0;
  afStack_d8[0xf] = 0.0;
  afStack_d8[0x10] = 0.0;
  afStack_d8[0xd] = 0.0;
  afStack_d8[0xe] = 0.0;
  afStack_d8[3] = 0.0;
  afStack_d8[4] = 0.0;
  afStack_d8[1] = 0.0;
  afStack_d8[2] = 0.0;
  afStack_d8[0] = 1.0;
  afStack_d8[5] = 0.0;
  afStack_d8[6] = 1.0;
  afStack_d8[0xb] = 0.0;
  afStack_d8[0xc] = 1.0;
  afStack_d8[0x12] = 1.0;
  afStack_d8[0x13] = 0.0;
  uVar5 = extraout_x8_00;
  do {
    uVar4 = uVar5;
    if (uVar4 == 0x14) break;
    uVar5 = uVar4 + 1;
  } while (afStack_d8[uVar4] == *(float *)(param_1 + 0x18 + uVar4 * 4));
  FUN_10b98c2fc(extraout_x9_00,0x13 < uVar4);
  if (extraout_x9_01 == extraout_x8_01) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b98c30c();
  return;
}



/* Entry: 10b98c2bc; end: 10b98c2fb;  */

void FUN_10b98c2bc(void)

{
  func_0x00010b98c30c();
  return;
}



/* Entry: 10b98c2fc; end: 10b98c317;  */

void FUN_10b98c2fc(void)

{
  return;
}



/* Entry: 10b98c318; end: 10b98c407;  */

undefined8 * FUN_10b98c318(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 auStack_420 [127];
  long lStack_28;
  
  puVar1 = auStack_420;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d7ec10;
  param_1[1] = 0;
  FUN_10b8b008c(auStack_420);
  FUN_10b8b008c(param_1 + 3,auStack_420);
  func_0x00010b8b0538(auStack_420);
  lVar2 = 0;
  *param_1 = &PTR_FUN_110d7d848;
  param_1[0x82] = 0;
  lVar4 = 0xf0;
  for (lVar3 = param_1[4]; lVar3 != 0; lVar3 = lVar3 + -1) {
    if (*(char *)(param_1[3] + lVar4) == '\x01') {
      lVar2 = lVar2 + 1;
      param_1[0x82] = lVar2;
    }
    lVar4 = lVar4 + 0xf8;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    func_0x00010b8b0538(puVar1 + 3);
    func_0x000107c278e8(puVar1 + 1);
    param_1 = puVar1;
  }
  return param_1;
}



/* Entry: 10b98c408; end: 10b98c40b;  */

long FUN_10b98c408(long param_1)

{
  func_0x00010b8b0538(param_1 + 0x18);
  func_0x000107c278e8(param_1 + 8);
  return param_1;
}



/* Entry: 10b98c40c; end: 10b98c41f;  */

void FUN_10b98c40c(void)

{
  func_0x00010b98c3dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b98c420; end: 10b98c4bf;  */

void FUN_10b98c420(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_50;
  ulong uStack_48;
  
  lVar2 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  for (lVar3 = *(long *)(param_2 + 0x20); lVar3 != 0; lVar3 = lVar3 + -1) {
    lVar1 = *(long *)(*(long *)(param_2 + 0x18) + lVar2);
    if (lVar1 == 0) {
      uStack_48 = 0;
      puStack_50 = &UNK_10f7d0ef0;
    }
    else {
      uStack_48 = (ulong)*(uint *)(lVar1 + 0xc);
      puStack_50 = (undefined *)(lVar1 + 0x18);
    }
    func_0x0001073727b8(param_1,&puStack_50);
    lVar2 = lVar2 + 0xf8;
  }
  return;
}



/* Entry: 10b98c4c0; end: 10b98c51f;  */

undefined8 FUN_10b98c4c0(void)

{
  int iVar1;
  
  if ((bRam00000001137fd328 & 1) == 0) {
    iVar1 = 0x137fd328;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x1137fd320,&UNK_10f7d0553);
      ___cxa_guard_release(0x1137fd328);
    }
  }
  return 0x1137fd320;
}



/* Entry: 10b98c520; end: 10b98c56b;  */

void FUN_10b98c520(void)

{
  return;
}



/* Entry: 10b98c56c; end: 10b98c5cb;  */

/* WARNING: Possible PIC construction at 0x00010b98c580: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b98c584) */

long FUN_10b98c56c(long param_1)

{
  func_0x00010007e5d0(param_1 + 8);
  func_0x0001003a8cb8();
  return param_1;
}



/* Entry: 10b98c5cc; end: 10b98c7b7;  */

void FUN_10b98c5cc(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 *extraout_x8;
  undefined *puVar8;
  ulong uVar9;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  ulong uStack_c8;
  long *plStack_c0;
  undefined **ppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_2;
  FUN_10b9a6170(param_2,&UNK_10e5fcec7);
  if ((int)plVar4 == 0) {
    puStack_78 = (undefined *)0x0;
    uStack_58 = 0;
    uVar9 = 0;
    plVar4 = param_2;
    func_0x00010b9a5ee8(param_2);
    if ((uVar9 & 1) == 0) {
      func_0x000107c31068(&uStack_58,param_2);
    }
    else {
      FUN_10b9a6724(&puStack_50,param_2,plVar4);
      func_0x000107c31060(&puStack_78,&puStack_50);
      func_0x000107c31060(&uStack_58,&uStack_48);
      func_0x00010812e450(&puStack_50);
    }
    FUN_10b98dc84(&puStack_50,&uStack_58);
    uVar3 = uStack_40;
    uVar2 = uStack_48;
    puVar8 = puStack_78;
    if (puStack_50 == (undefined *)0x1) {
      puStack_78 = (undefined *)0x0;
      uStack_40 = 0;
      uStack_48 = 0;
      param_1[1] = uVar3;
      *param_1 = uVar2;
      uStack_88 = 0;
      uStack_90 = 0;
      param_1[2] = puVar8;
      uStack_98 = 0;
      func_0x00010b98c900();
      func_0x00010b8bc430(&uStack_90);
    }
    else {
      func_0x00010b98c594(param_1);
    }
    FUN_10b8faff8(&puStack_50);
    FUN_10b98c8f8();
    ppuVar5 = &puStack_78;
  }
  else {
    if (*param_2 == 0) {
      lVar7 = -6;
    }
    else {
      lVar7 = (ulong)*(uint *)(*param_2 + 0xc) - 6;
    }
    FUN_10b9a6488(&puStack_68,param_2,0,lVar7);
    puStack_50 = &UNK_10f7d0566;
    uStack_48 = 0xe;
    FUN_10b9a63dc(auStack_60,&puStack_68,&puStack_50);
    puStack_78 = &UNK_10f7d0575;
    uStack_70 = 0xf;
    FUN_10b9a62b4(&uStack_58,auStack_60,&puStack_78);
    FUN_10b98c5cc(param_1,&uStack_58);
    FUN_10b98c8f8();
    func_0x000107c278f4(auStack_60);
    ppuVar5 = &puStack_68;
  }
  func_0x000107c278f4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  FUN_10b98c8f8();
  func_0x000107c278f4(auStack_60);
  func_0x000107c278f4(&puStack_68);
  ppuVar6 = ppuVar5;
  __Unwind_Resume();
  pcStack_a8 = FUN_10b98c7b8;
  plStack_c0 = param_2;
  ppuStack_b8 = ppuVar5;
  puStack_b0 = &stack0xfffffffffffffff0;
  if ((ppuVar6[2] != (undefined *)0x0) && (*(int *)(ppuVar6[2] + 0xc) != 0)) {
    FUN_10b9a5e5c(auStack_f0);
    func_0x000107c27fac(auStack_d8,auStack_f0,&UNK_10f7d0585);
    FUN_10b98ea44(auStack_108,ppuVar6);
    func_0x00010533a9c0(extraout_x8,auStack_d8,auStack_108);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f0);
    return;
  }
  pcStack_a8 = FUN_10b98c7b8;
  if ((*ppuVar6 != (undefined *)0x0) && (uVar1 = *(uint *)(*ppuVar6 + 0xc), uVar1 != 0)) {
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    uVar9 = 0;
    if (ppuVar6[1] != (undefined *)0x0) {
      uVar9 = (ulong)*(uint *)(ppuVar6[1] + 0xc);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
              (extraout_x8,uVar1 + uVar9 + 1);
    puVar8 = *ppuVar6;
    if (puVar8 == (undefined *)0x0) {
      puStack_d0 = &UNK_10f7d0ef0;
      uStack_c8 = 0;
    }
    else {
      puStack_d0 = puVar8 + 0x18;
      uStack_c8 = (ulong)*(uint *)(puVar8 + 0xc);
    }
    func_0x00010b98eb78();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(extraout_x8,0x2f);
    puVar8 = ppuVar6[1];
    if (puVar8 == (undefined *)0x0) {
      puStack_d0 = &UNK_10f7d0ef0;
      uStack_c8 = 0;
    }
    else {
      puStack_d0 = puVar8 + 0x18;
      uStack_c8 = (ulong)*(uint *)(puVar8 + 0xc);
    }
    func_0x00010b98eb78();
    return;
  }
  pcStack_a8 = FUN_10b98c7b8;
  puVar8 = ppuVar6[1];
  if (puVar8 == (undefined *)0x0) {
    plStack_c0 = (long *)&UNK_10f7d0ef0;
    ppuStack_b8 = (undefined **)0x0;
  }
  else {
    plStack_c0 = (long *)(puVar8 + 0x18);
    ppuStack_b8 = (undefined **)(ulong)*(uint *)(puVar8 + 0xc);
  }
  func_0x000107c27958(extraout_x8,&plStack_c0);
  return;
}



/* Entry: 10b98c7b8; end: 10b98c88b;  */

void FUN_10b98c7b8(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [8];
  undefined *puStack_30;
  ulong uStack_28;
  
  if ((param_2[2] != 0) && (*(int *)(param_2[2] + 0xc) != 0)) {
    FUN_10b9a5e5c(auStack_50);
    func_0x000107c27fac(auStack_38,auStack_50,&UNK_10f7d0585);
    FUN_10b98ea44(auStack_68,param_2);
    func_0x00010533a9c0(param_1,auStack_38,auStack_68);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
    return;
  }
  if ((*param_2 != 0) && (uVar1 = *(uint *)(*param_2 + 0xc), uVar1 != 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar3 = 0;
    if (param_2[1] != 0) {
      uVar3 = (ulong)*(uint *)(param_2[1] + 0xc);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
              (param_1,uVar1 + uVar3 + 1);
    lVar2 = *param_2;
    if (lVar2 == 0) {
      puStack_30 = &UNK_10f7d0ef0;
      uStack_28 = 0;
    }
    else {
      puStack_30 = (undefined *)(lVar2 + 0x18);
      uStack_28 = (ulong)*(uint *)(lVar2 + 0xc);
    }
    func_0x00010b98eb78();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_1,0x2f);
    lVar2 = param_2[1];
    if (lVar2 == 0) {
      puStack_30 = &UNK_10f7d0ef0;
      uStack_28 = 0;
    }
    else {
      puStack_30 = (undefined *)(lVar2 + 0x18);
      uStack_28 = (ulong)*(uint *)(lVar2 + 0xc);
    }
    func_0x00010b98eb78();
    return;
  }
  func_0x000107c27958(param_1,&stack0xffffffffffffffe0);
  return;
}



/* Entry: 10b98c88c; end: 10b98c8f7;  */

bool FUN_10b98c88c(long *param_1)

{
  bool bVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((param_1[2] == 0) || (*(int *)(param_1[2] + 0xc) == 0)) {
    uStack_30 = 0;
    uStack_28 = 0;
    if (*param_1 == 0) {
      bVar1 = param_1[1] == 0;
    }
    else {
      bVar1 = false;
    }
    func_0x00010b8bc430(&uStack_30);
    func_0x00010b98c900();
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 10b98c8f8; end: 10b98c907;  */

void FUN_10b98c8f8(void)

{
  func_0x00010007e5d0(&stack0x00000048);
  func_0x0001003a8cb8();
  return;
}



/* Entry: 10b98c908; end: 10b98c987;  */

undefined8 *
FUN_10b98c908(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             long *param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d7d8e8;
  *(undefined4 *)(param_1 + 3) = param_2;
  FUN_10b98cbb8(param_1 + 4,param_3);
  FUN_10b93e188(param_1 + 7,param_4);
  lVar4 = *param_5;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = lVar4;
  return param_1;
}



/* Entry: 10b98c988; end: 10b98c9e7;  */

undefined8 * FUN_10b98c988(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7d8e8;
  func_0x000107c27900(param_1 + 0xc);
  func_0x000107c27900(param_1 + 0xb);
  func_0x000107c278f4(param_1 + 10);
  func_0x00010b8c2b50(param_1 + 7);
  FUN_10b98c56c(param_1 + 4);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b98c9e8; end: 10b98c9eb;  */

undefined8 * FUN_10b98c9e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7d8e8;
  func_0x000107c27900(param_1 + 0xc);
  func_0x000107c27900(param_1 + 0xb);
  func_0x000107c278f4(param_1 + 10);
  func_0x00010b8c2b50(param_1 + 7);
  FUN_10b98c56c(param_1 + 4);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b98c9ec; end: 10b98c9ff;  */

void FUN_10b98c9ec(void)

{
  FUN_10b98c988();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b98ca00; end: 10b98caf7;  */

void FUN_10b98ca00(undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [24];
  ulong uStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  iVar2 = (int)param_2 + 0x38;
  FUN_10b98c88c();
  if (iVar2 == 0) {
    FUN_10b98c7b8(auStack_58,param_2 + 0x38);
    uVar1 = *(uint *)(param_2 + 0x18);
    puVar3 = auStack_58;
    func_0x000107c27e5c();
    uStack_38 = 0;
    uStack_40 = (ulong)uVar1;
    puStack_30 = puVar3;
    uStack_28 = param_3;
    func_0x000107c2793c(&UNK_10f7d05a1);
    func_0x00010b98cc00();
  }
  else {
    if ((*(long *)(param_2 + 0x50) == 0) || (*(int *)(*(long *)(param_2 + 0x50) + 0xc) == 0)) {
      uStack_40 = (ulong)*(uint *)(param_2 + 0x18);
      uStack_38 = 0;
      func_0x000107c2793c(&UNK_10f7d059b);
      func_0x000107c3173c(param_1);
      return;
    }
    FUN_10b9a5e5c(auStack_58);
    uVar1 = *(uint *)(param_2 + 0x18);
    puVar3 = auStack_58;
    func_0x000107c27e5c();
    uStack_38 = 0;
    uStack_40 = (ulong)uVar1;
    puStack_30 = puVar3;
    uStack_28 = param_3;
    func_0x000107c2793c(&UNK_10f7d0587);
    func_0x00010b98cc00();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  return;
}



/* Entry: 10b98caf8; end: 10b98cb47;  */

void FUN_10b98caf8(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined *extraout_x8;
  undefined *puVar5;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  ppuVar4 = &PTR___tlv_bootstrap_11340e128;
  (*(code *)PTR___tlv_bootstrap_11340e128)(param_1);
  puVar5 = *ppuVar4;
  if ((extraout_x8 != (undefined *)0x0) && (*(long *)(extraout_x8 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(extraout_x8 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *ppuVar4 = extraout_x8;
  if (puVar5 != (undefined *)0x0) {
    uStack_18 = *(undefined8 *)(puVar5 + 0x10);
    uStack_20 = *(undefined8 *)(puVar5 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b98cb48; end: 10b98cb53;  */

void FUN_10b98cb48(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b98cb54; end: 10b98cbb7;  */

undefined8 FUN_10b98cb54(void)

{
  int iVar1;
  
  if ((bRam00000001137fd338 & 1) == 0) {
    iVar1 = 0x137fd338;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x1137fd330,&UNK_10f7d05be);
      ___cxa_guard_release(0x1137fd338);
    }
  }
  return 0x1137fd330;
}



/* Entry: 10b98cbb8; end: 10b98cc0f;  */

void FUN_10b98cbb8(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *param_2;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = param_2[2];
  param_1[1] = lVar4;
  param_1[2] = lVar5;
  return;
}



/* Entry: 10b98cc10; end: 10b98cca7;  */

void FUN_10b98cc10(void)

{
  int iVar1;
  
  if ((bRam00000001138468b0 & 1) == 0) {
    iVar1 = 0x138468b0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x1138468a8,&UNK_10f7d05ca);
      ___cxa_guard_release(0x1138468b0);
    }
  }
  FUN_10b9a74e4();
  func_0x00010b98d8a8();
  func_0x00010b98d98c();
  func_0x00010b98d90c();
  return;
}


