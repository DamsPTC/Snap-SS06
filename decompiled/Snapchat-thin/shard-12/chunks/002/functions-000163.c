/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108ee34b4; end: 108ee34d7; -[SCLensApiServiceLinkedResource copyWithZone:] */

undefined8 FUN_108ee34b4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ee34d8; end: 108ee3557; -[SCLensApiServiceLinkedResource hash] */

undefined8 * FUN_108ee34d8(long param_1,undefined8 param_2,undefined1 *param_3)

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
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108ee35f0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108ee35fc;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_108ee35fc;
          }
          goto LAB_108ee35f0;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108ee35fc:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108ee3558; end: 108ee3617; -[SCLensApiServiceLinkedResource isEqual:] */

long FUN_108ee3558(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108ee35f0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108ee35fc;
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
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_108ee35fc;
          }
          goto LAB_108ee35f0;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108ee35fc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108ee3618; end: 108ee361f; -[SCLensApiServiceLinkedResource url] */

undefined8 FUN_108ee3618(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ee3620; end: 108ee3627; -[SCLensApiServiceLinkedResource key] */

undefined8 FUN_108ee3620(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108ee3628; end: 108ee362f; -[SCLensApiServiceLinkedResource iv] */

undefined8 FUN_108ee3628(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108ee3630; end: 108ee366b; -[SCLensApiServiceLinkedResource .cxx_destruct] */

void FUN_108ee3630(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ee366c; end: 108ee383b; -[SCLensApiServiceRequest initWithRequestId:specId:endpointId:lensId:lens:isStudioDev:params:body:linkedResources:] */

undefined1 *
FUN_108ee366c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126ff208;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ee383c; end: 108ee385f; -[SCLensApiServiceRequest copyWithZone:] */

undefined8 FUN_108ee383c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ee3860; end: 108ee391f; -[SCLensApiServiceRequest hash] */

undefined8 * FUN_108ee3860(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108ee3a40:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108ee3a4c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x30);
              if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x38);
                if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x40);
                  if ((lVar5 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    puVar6 = *(undefined1 **)((long)puVar3 + 0x48);
                    if (puVar6 != *(undefined1 **)(param_3 + 0x48)) {
                      func_0x00010c071ae0();
                      goto LAB_108ee3a4c;
                    }
                    goto LAB_108ee3a40;
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108ee3a4c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108ee3920; end: 108ee3a67; -[SCLensApiServiceRequest isEqual:] */

long FUN_108ee3920(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108ee3a40:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108ee3a4c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x48);
                    if (lVar3 != *(long *)(param_3 + 0x48)) {
                      func_0x00010c071ae0();
                      goto LAB_108ee3a4c;
                    }
                    goto LAB_108ee3a40;
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
LAB_108ee3a4c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108ee3a68; end: 108ee3a6f; -[SCLensApiServiceRequest requestId] */

undefined8 FUN_108ee3a68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108ee3a70; end: 108ee3a77; -[SCLensApiServiceRequest specId] */

undefined8 FUN_108ee3a70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108ee3a78; end: 108ee3a7f; -[SCLensApiServiceRequest endpointId] */

undefined8 FUN_108ee3a78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108ee3a80; end: 108ee3a87; -[SCLensApiServiceRequest lensId] */

undefined8 FUN_108ee3a80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108ee3a88; end: 108ee3a8f; -[SCLensApiServiceRequest lens] */

undefined8 FUN_108ee3a88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108ee3a90; end: 108ee3a97; -[SCLensApiServiceRequest isStudioDev] */

undefined1 FUN_108ee3a90(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108ee3a98; end: 108ee3a9f; -[SCLensApiServiceRequest params] */

undefined8 FUN_108ee3a98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108ee3aa0; end: 108ee3aa7; -[SCLensApiServiceRequest body] */

undefined8 FUN_108ee3aa0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108ee3aa8; end: 108ee3aaf; -[SCLensApiServiceRequest linkedResources] */

undefined8 FUN_108ee3aa8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108ee3ab0; end: 108ee3b27; -[SCLensApiServiceRequest .cxx_destruct] */

void FUN_108ee3ab0(long param_1)

{
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



/* Entry: 108ee3b28; end: 108ee3c3b; -[SCLensApiServiceResponse initWithRequestId:statusCode:metadata:body:linkedResources:] */

undefined1 *
FUN_108ee3b28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ff210;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
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
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ee3c3c; end: 108ee3c5f; -[SCLensApiServiceResponse copyWithZone:] */

undefined8 FUN_108ee3c3c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ee3c60; end: 108ee3cf7; -[SCLensApiServiceResponse hash] */

undefined8 * FUN_108ee3c60(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x10);
  uStack_40 = *(undefined8 *)(param_1 + 0x18);
  lStack_48 = -lVar5;
  if (-1 < lVar5) {
    lStack_48 = lVar5;
  }
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108ee3db8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108ee3dc4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_108ee3dc4;
            }
            goto LAB_108ee3db8;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108ee3dc4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108ee3cf8; end: 108ee3ddf; -[SCLensApiServiceResponse isEqual:] */

long FUN_108ee3cf8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108ee3db8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108ee3dc4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_108ee3dc4;
            }
            goto LAB_108ee3db8;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108ee3dc4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108ee3de0; end: 108ee3de7; -[SCLensApiServiceResponse requestId] */

undefined8 FUN_108ee3de0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ee3de8; end: 108ee3def; -[SCLensApiServiceResponse statusCode] */

undefined8 FUN_108ee3de8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108ee3df0; end: 108ee3df7; -[SCLensApiServiceResponse metadata] */

undefined8 FUN_108ee3df0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108ee3df8; end: 108ee3dff; -[SCLensApiServiceResponse body] */

undefined8 FUN_108ee3df8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108ee3e00; end: 108ee3e07; -[SCLensApiServiceResponse linkedResources] */

undefined8 FUN_108ee3e00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108ee3e08; end: 108ee3e4f; -[SCLensApiServiceResponse .cxx_destruct] */

void FUN_108ee3e08(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ee3e50; end: 108ee3e5b; -[SCFeatureSettingsService hasSeenCaptionHelp] */

void FUN_108ee3e50(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f02a98);
  return;
}



/* Entry: 108ee3e5c; end: 108ee3e67; -[SCFeatureSettingsService seenCaptionHelpServerParam] */

undefined ** FUN_108ee3e5c(void)

{
  return &PTR____CFConstantStringClassReference_110f02a98;
}



/* Entry: 108ee3e68; end: 108ee3e77; -[SCFeatureSettingsService setSeenCaptionHelp:] */

void FUN_108ee3e68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f02a98,param_3);
  return;
}



/* Entry: 108ee3e78; end: 108ee3e7f; -[SCFeatureSettingsService caption_tooltip_client_value:] */

undefined * FUN_108ee3e78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108ee3e80; end: 108ee3e87; -[SCFeatureSettingsService caption_tooltip_server_value:] */

void FUN_108ee3e80(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108ee3e88; end: 108ee3e97; -[SCFeatureSettingsService seenCaptionHelp] */

void FUN_108ee3e88(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f02a98,0);
  return;
}



/* Entry: 108ee3e98; end: 108ee3ea3; -[SCFeatureSettingsService hasSeenUnlockableStickerTooltip] */

void FUN_108ee3e98(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f02ab8);
  return;
}



/* Entry: 108ee3ea4; end: 108ee3eaf; -[SCFeatureSettingsService seenUnlockableStickerTooltipServerParam] */

undefined ** FUN_108ee3ea4(void)

{
  return &PTR____CFConstantStringClassReference_110f02ab8;
}



/* Entry: 108ee3eb0; end: 108ee3ebf; -[SCFeatureSettingsService setSeenUnlockableStickerTooltip:] */

void FUN_108ee3eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f02ab8,param_3);
  return;
}



/* Entry: 108ee3ec0; end: 108ee3ec7; -[SCFeatureSettingsService unlockable_sticker_tooltip_tooltip_client_value:] */

undefined * FUN_108ee3ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108ee3ec8; end: 108ee3ecf; -[SCFeatureSettingsService unlockable_sticker_tooltip_tooltip_server_value:] */

void FUN_108ee3ec8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108ee3ed0; end: 108ee3edf; -[SCFeatureSettingsService seenUnlockableStickerTooltip] */

void FUN_108ee3ed0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f02ab8,0);
  return;
}



/* Entry: 108ee3ee0; end: 108ee3eeb; -[SCFeatureSettingsService hasSeenVenueStickerTooltip] */

void FUN_108ee3ee0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f02ad8);
  return;
}



/* Entry: 108ee3eec; end: 108ee3ef7; -[SCFeatureSettingsService seenVenueStickerTooltipServerParam] */

undefined ** FUN_108ee3eec(void)

{
  return &PTR____CFConstantStringClassReference_110f02ad8;
}



/* Entry: 108ee3ef8; end: 108ee3f07; -[SCFeatureSettingsService setSeenVenueStickerTooltip:] */

void FUN_108ee3ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f02ad8,param_3);
  return;
}



/* Entry: 108ee3f08; end: 108ee3f0f; -[SCFeatureSettingsService venue_sticker_tooltip_tooltip_client_value:] */

undefined * FUN_108ee3f08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108ee3f10; end: 108ee3f17; -[SCFeatureSettingsService venue_sticker_tooltip_tooltip_server_value:] */

void FUN_108ee3f10(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108ee3f18; end: 108ee3f27; -[SCFeatureSettingsService seenVenueStickerTooltip] */

void FUN_108ee3f18(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f02ad8,0);
  return;
}



/* Entry: 108ee3f28; end: 108ee3f33; -[SCFeatureSettingsService hasSeenVenueStickerStyleTooltip] */

void FUN_108ee3f28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f02af8);
  return;
}



/* Entry: 108ee3f34; end: 108ee3f3f; -[SCFeatureSettingsService seenVenueStickerStyleTooltipServerParam] */

undefined ** FUN_108ee3f34(void)

{
  return &PTR____CFConstantStringClassReference_110f02af8;
}



/* Entry: 108ee3f40; end: 108ee3f4f; -[SCFeatureSettingsService setSeenVenueStickerStyleTooltip:] */

void FUN_108ee3f40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f02af8,param_3);
  return;
}



/* Entry: 108ee3f50; end: 108ee3f57; -[SCFeatureSettingsService venue_sticker_style_tooltip_tooltip_client_value:] */

undefined * FUN_108ee3f50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108ee3f58; end: 108ee3f5f; -[SCFeatureSettingsService venue_sticker_style_tooltip_tooltip_server_value:] */

void FUN_108ee3f58(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108ee3f60; end: 108ee3f6f; -[SCFeatureSettingsService seenVenueStickerStyleTooltip] */

void FUN_108ee3f60(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f02af8,0);
  return;
}



/* Entry: 108ee3f70; end: 108ee3f7b; -[SCFeatureSettingsService hasSeenSwipeHelpLabel] */

void FUN_108ee3f70(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f02b18);
  return;
}



/* Entry: 108ee3f7c; end: 108ee3f87; -[SCFeatureSettingsService seenSwipeHelpLabelServerParam] */

undefined ** FUN_108ee3f7c(void)

{
  return &PTR____CFConstantStringClassReference_110f02b18;
}



/* Entry: 108ee3f88; end: 108ee3f97; -[SCFeatureSettingsService setSeenSwipeHelpLabel:] */

void FUN_108ee3f88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f02b18,param_3);
  return;
}



/* Entry: 108ee3f98; end: 108ee3f9f; -[SCFeatureSettingsService swipe_filters_tooltip_client_value:] */

undefined * FUN_108ee3f98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108ee3fa0; end: 108ee3fa7; -[SCFeatureSettingsService swipe_filters_tooltip_server_value:] */

void FUN_108ee3fa0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108ee3fa8; end: 108ee3fb7; -[SCFeatureSettingsService seenSwipeHelpLabel] */

void FUN_108ee3fa8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f02b18,0);
  return;
}



/* Entry: 108ee3fb8; end: 108ee3fc3; -[SCFeatureSettingsService hasSeenVenueFilterTooltip] */

void FUN_108ee3fb8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f02b38);
  return;
}



/* Entry: 108ee3fc4; end: 108ee3fcf; -[SCFeatureSettingsService seenVenueFilterTooltipServerParam] */

undefined ** FUN_108ee3fc4(void)

{
  return &PTR____CFConstantStringClassReference_110f02b38;
}



/* Entry: 108ee3fd0; end: 108ee3fdf; -[SCFeatureSettingsService setSeenVenueFilterTooltip:] */

void FUN_108ee3fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f02b38,param_3);
  return;
}



/* Entry: 108ee3fe0; end: 108ee3fe7; -[SCFeatureSettingsService venue_filter_tooltip_seen_client_value:] */

undefined * FUN_108ee3fe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108ee3fe8; end: 108ee3fef; -[SCFeatureSettingsService venue_filter_tooltip_seen_server_value:] */

void FUN_108ee3fe8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108ee3ff0; end: 108ee3fff; -[SCFeatureSettingsService seenVenueFilterTooltip] */

void FUN_108ee3ff0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f02b38,0);
  return;
}



/* Entry: 108ee4000; end: 108ee400b; -[SCFeatureSettingsService hasSeenAudioFiltersTooltip] */

void FUN_108ee4000(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f02b58);
  return;
}



/* Entry: 108ee400c; end: 108ee4017; -[SCFeatureSettingsService seenAudioFiltersTooltipServerParam] */

undefined ** FUN_108ee400c(void)

{
  return &PTR____CFConstantStringClassReference_110f02b58;
}



/* Entry: 108ee4018; end: 108ee4027; -[SCFeatureSettingsService setSeenAudioFiltersTooltip:] */

void FUN_108ee4018(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f02b58,param_3);
  return;
}



/* Entry: 108ee4028; end: 108ee402f; -[SCFeatureSettingsService sound_tools_tooltip_tooltip_client_value:] */

undefined * FUN_108ee4028(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108ee4030; end: 108ee4037; -[SCFeatureSettingsService sound_tools_tooltip_tooltip_server_value:] */

void FUN_108ee4030(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108ee4038; end: 108ee4047; -[SCFeatureSettingsService seenAudioFiltersTooltip] */

void FUN_108ee4038(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f02b58,0);
  return;
}



/* Entry: 108ee4048; end: 108ee4053; -[SCFeatureSettingsService hasSeenSnapReplyStickerAnimation] */

void FUN_108ee4048(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f02b78);
  return;
}



/* Entry: 108ee4054; end: 108ee405f; -[SCFeatureSettingsService seenSnapReplyStickerAnimationServerParam] */

undefined ** FUN_108ee4054(void)

{
  return &PTR____CFConstantStringClassReference_110f02b78;
}



/* Entry: 108ee4060; end: 108ee406f; -[SCFeatureSettingsService setSeenSnapReplyStickerAnimation:] */

void FUN_108ee4060(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f02b78,param_3);
  return;
}



/* Entry: 108ee4070; end: 108ee4077; -[SCFeatureSettingsService snap_reply_sticker_animation_tooltip_client_value:] */

undefined * FUN_108ee4070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108ee4078; end: 108ee407f; -[SCFeatureSettingsService snap_reply_sticker_animation_tooltip_server_value:] */

void FUN_108ee4078(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108ee4080; end: 108ee408f; -[SCFeatureSettingsService seenSnapReplyStickerAnimation] */

void FUN_108ee4080(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f02b78,0);
  return;
}



/* Entry: 108ee4090; end: 108ee409b; -[SCFeatureSettingsService getSeenCustomStickerDeleteHintCount] */

void FUN_108ee4090(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f02b98);
  return;
}



/* Entry: 108ee409c; end: 108ee40a7; -[SCFeatureSettingsService seenCustomStickerDeleteHintCountServerParam] */

undefined ** FUN_108ee409c(void)

{
  return &PTR____CFConstantStringClassReference_110f02b98;
}



/* Entry: 108ee40a8; end: 108ee40b7; -[SCFeatureSettingsService setSeenCustomStickerDeleteHintCount:] */

void FUN_108ee40a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f02b98,param_3);
  return;
}



/* Entry: 108ee40b8; end: 108ee40bf; -[SCFeatureSettingsService custom_sticker_delete_hint_count_tooltip_client_value:] */

undefined * FUN_108ee40b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108ee40c0; end: 108ee40c7; -[SCFeatureSettingsService custom_sticker_delete_hint_count_tooltip_server_value:] */

void FUN_108ee40c0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108ee40c8; end: 108ee40d7; -[SCFeatureSettingsService seenCustomStickerDeleteHintCount] */

void FUN_108ee40c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f02b98,0);
  return;
}



/* Entry: 108ee40d8; end: 108ee40e3; -[SCFeatureSettingsService getSeenCustomStickerDeleteDragCount] */

void FUN_108ee40d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f02bb8);
  return;
}



/* Entry: 108ee40e4; end: 108ee40ef; -[SCFeatureSettingsService seenCustomStickerDeleteDragCountServerParam] */

undefined ** FUN_108ee40e4(void)

{
  return &PTR____CFConstantStringClassReference_110f02bb8;
}



/* Entry: 108ee40f0; end: 108ee40ff; -[SCFeatureSettingsService setSeenCustomStickerDeleteDragCount:] */

void FUN_108ee40f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f02bb8,param_3);
  return;
}



/* Entry: 108ee4100; end: 108ee4107; -[SCFeatureSettingsService custom_sticker_delete_drag_count_tooltip_client_value:] */

undefined * FUN_108ee4100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108ee4108; end: 108ee410f; -[SCFeatureSettingsService custom_sticker_delete_drag_count_tooltip_server_value:] */

void FUN_108ee4108(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108ee4110; end: 108ee411f; -[SCFeatureSettingsService seenCustomStickerDeleteDragCount] */

void FUN_108ee4110(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f02bb8,0);
  return;
}



/* Entry: 108ee4120; end: 108ee412b; -[SCFeatureSettingsService hasSeenBitmojiFriendmojiHint] */

void FUN_108ee4120(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f02bd8);
  return;
}



/* Entry: 108ee412c; end: 108ee4137; -[SCFeatureSettingsService seenBitmojiFriendmojiHintServerParam] */

undefined ** FUN_108ee412c(void)

{
  return &PTR____CFConstantStringClassReference_110f02bd8;
}



/* Entry: 108ee4138; end: 108ee4147; -[SCFeatureSettingsService setSeenBitmojiFriendmojiHint:] */

void FUN_108ee4138(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f02bd8,param_3);
  return;
}



/* Entry: 108ee4148; end: 108ee414f; -[SCFeatureSettingsService bitmoji_friendmoji_hint_tooltip_client_value:] */

undefined * FUN_108ee4148(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108ee4150; end: 108ee4157; -[SCFeatureSettingsService bitmoji_friendmoji_hint_tooltip_server_value:] */

void FUN_108ee4150(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108ee4158; end: 108ee4167; -[SCFeatureSettingsService seenBitmojiFriendmojiHint] */

void FUN_108ee4158(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f02bd8,0);
  return;
}



/* Entry: 108ee4168; end: 108ee4173; -[SCFeatureSettingsService hasSeenStoriesIntroSend] */

void FUN_108ee4168(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110f02bf8);
  return;
}



/* Entry: 108ee4174; end: 108ee417f; -[SCFeatureSettingsService seenStoriesIntroSendServerParam] */

undefined ** FUN_108ee4174(void)

{
  return &PTR____CFConstantStringClassReference_110f02bf8;
}



/* Entry: 108ee4180; end: 108ee418f; -[SCFeatureSettingsService setSeenStoriesIntroSend:] */

void FUN_108ee4180(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110f02bf8,param_3);
  return;
}


