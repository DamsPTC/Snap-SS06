/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0599c8; end: 10b059a33; +[SCPreviewActionLog timelineWithParams:] */

void FUN_10b0599c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c4c00;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b059a34; end: 10b059a57; -[SCPreviewActionLog copyWithZone:] */

undefined8 FUN_10b059a34(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b059a58; end: 10b059adb; -[SCPreviewActionLog hash] */

void FUN_10b059a58(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
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
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_112704e88;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b059adc; end: 10b059b1f; -[SCPreviewActionLog internalInit] */

void FUN_10b059adc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112704e88;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b059b20; end: 10b059bef; -[SCPreviewActionLog isEqual:] */

long FUN_10b059b20(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b059bc8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b059bd4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10b059bd4;
          }
          goto LAB_10b059bc8;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b059bd4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b059bf0; end: 10b059c9b; -[SCPreviewActionLog matchSingle:batchCapture:timeline:] */

void FUN_10b059bf0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_10b059c78;
    lVar2 = 0x20;
    lVar1 = param_5;
  }
  else if (lVar1 == 1) {
    if (param_4 == 0) goto LAB_10b059c78;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if ((lVar1 != 0) || (param_3 == 0)) goto LAB_10b059c78;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10b059c78:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b059c9c; end: 10b059cd7; -[SCPreviewActionLog .cxx_destruct] */

void FUN_10b059c9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b059cd8; end: 10b059de3; -[SCAICropToolUserInteractionLoggingParams initWithErrorList:buttonTapList:buttonViewList:latencyList:] */

undefined1 *
FUN_10b059cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_112704e90;
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



/* Entry: 10b059de4; end: 10b059e07; -[SCAICropToolUserInteractionLoggingParams copyWithZone:] */

undefined8 FUN_10b059de4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b059e08; end: 10b059e93; -[SCAICropToolUserInteractionLoggingParams hash] */

undefined8 * FUN_10b059e08(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b059f44:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b059f50;
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
              goto LAB_10b059f50;
            }
            goto LAB_10b059f44;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b059f50:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b059e94; end: 10b059f6b; -[SCAICropToolUserInteractionLoggingParams isEqual:] */

long FUN_10b059e94(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b059f44:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b059f50;
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
              goto LAB_10b059f50;
            }
            goto LAB_10b059f44;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b059f50:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b059f6c; end: 10b059f73; -[SCAICropToolUserInteractionLoggingParams errorList] */

undefined8 FUN_10b059f6c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b059f74; end: 10b059f7b; -[SCAICropToolUserInteractionLoggingParams buttonTapList] */

undefined8 FUN_10b059f74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b059f7c; end: 10b059f83; -[SCAICropToolUserInteractionLoggingParams buttonViewList] */

undefined8 FUN_10b059f7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b059f84; end: 10b059f8b; -[SCAICropToolUserInteractionLoggingParams latencyList] */

undefined8 FUN_10b059f84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b059f8c; end: 10b059fd3; -[SCAICropToolUserInteractionLoggingParams .cxx_destruct] */

void FUN_10b059f8c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b059fd4; end: 10b059fdb; -[SCImageProcessCommandProviderRequestEntryBase getImageProcessCommandUsingMapper:] */

undefined8 FUN_10b059fd4(void)

{
  return 0;
}



/* Entry: 10b059fdc; end: 10b05a0b7; -[SCImageProcessCommandProviderRequest initWithType:entries:isSpectacles:lensCommandMetadata:isExportMode:isSnapEditor:] */

undefined1 *
FUN_10b059fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_112704e98;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    *(undefined1 *)((long)puVar1 + 10) = param_8;
  }
  _objc_release(param_6);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b05a0b8; end: 10b05a0db; -[SCImageProcessCommandProviderRequest copyWithZone:] */

undefined8 FUN_10b05a0b8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b05a0dc; end: 10b05a16b; -[SCImageProcessCommandProviderRequest hash] */

long * FUN_10b05a0dc(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lStack_58 = -lVar5;
  if (-1 < lVar5) {
    lStack_58 = lVar5;
  }
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uStack_30 = (ulong)*(byte *)(param_1 + 10);
  plVar3 = &lStack_58;
  uStack_40 = uVar2;
  func_0x000107c3191c(plVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == param_3) {
LAB_10b05a22c:
    plVar6 = (long *)0x1;
  }
  else {
    plVar6 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10b05a238;
    plVar6 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar6);
    if (((((ulong)plVar4 & 1) != 0) &&
        (((plVar3[2] == param_3[2] && ((char)plVar3[1] == (char)param_3[1])) &&
         (*(char *)((long)plVar3 + 9) == *(char *)((long)param_3 + 9))))) &&
       (*(char *)((long)plVar3 + 10) == *(char *)((long)param_3 + 10))) {
      lVar5 = plVar3[3];
      if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        plVar6 = (long *)plVar3[4];
        if (plVar6 != (long *)param_3[4]) {
          func_0x00010c071ae0();
          goto LAB_10b05a238;
        }
        goto LAB_10b05a22c;
      }
    }
    plVar6 = (long *)0x0;
  }
LAB_10b05a238:
  _objc_release(param_3);
  return plVar6;
}



/* Entry: 10b05a16c; end: 10b05a253; -[SCImageProcessCommandProviderRequest isEqual:] */

long FUN_10b05a16c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b05a22c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b05a238;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
          (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) &&
       (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b05a238;
        }
        goto LAB_10b05a22c;
      }
    }
    lVar3 = 0;
  }
LAB_10b05a238:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b05a254; end: 10b05a25b; -[SCImageProcessCommandProviderRequest type] */

undefined8 FUN_10b05a254(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b05a25c; end: 10b05a263; -[SCImageProcessCommandProviderRequest entries] */

undefined8 FUN_10b05a25c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b05a264; end: 10b05a26b; -[SCImageProcessCommandProviderRequest isSpectacles] */

undefined1 FUN_10b05a264(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b05a26c; end: 10b05a273; -[SCImageProcessCommandProviderRequest lensCommandMetadata] */

undefined8 FUN_10b05a26c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b05a274; end: 10b05a27b; -[SCImageProcessCommandProviderRequest isExportMode] */

undefined1 FUN_10b05a274(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b05a27c; end: 10b05a283; -[SCImageProcessCommandProviderRequest isSnapEditor] */

undefined1 FUN_10b05a27c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b05a284; end: 10b05a2b3; -[SCImageProcessCommandProviderRequest .cxx_destruct] */

void FUN_10b05a284(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b05a2b4; end: 10b05a343; -[SCLensSixDofFrame initWithTimestamp:eulerAngles:translation:] */

void FUN_10b05a2b4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 *param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_112704ea0;
  uStack_60 = param_7;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_9[1];
    uVar2 = *param_9;
    *(undefined8 *)((long)puVar1 + 0x30) = param_9[2];
    *(undefined8 *)((long)puVar1 + 0x28) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    *(undefined4 *)((long)puVar1 + 8) = param_1;
    *(undefined4 *)((long)puVar1 + 0xc) = param_2;
    *(undefined4 *)((long)puVar1 + 0x10) = param_3;
    *(undefined4 *)((long)puVar1 + 0x14) = param_4;
    *(undefined4 *)((long)puVar1 + 0x18) = param_5;
    *(undefined4 *)((long)puVar1 + 0x1c) = param_6;
  }
  return;
}



/* Entry: 10b05a344; end: 10b05a357; -[SCLensSixDofFrame timestamp] */

void FUN_10b05a344(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[1] = *(undefined8 *)(param_2 + 0x28);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x30);
  return;
}



/* Entry: 10b05a358; end: 10b05a363; -[SCLensSixDofFrame eulerAngles] */

undefined4 FUN_10b05a358(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b05a364; end: 10b05a36f; -[SCLensSixDofFrame translation] */

undefined4 FUN_10b05a364(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 10b05a370; end: 10b05a46b; -[SCImageProcessLensCommandMetadata initWithCapturerSamples:recordingDeviceMotionData:recordingRawAccelerometerData:recordingRawGyroData:] */

undefined1 *
FUN_10b05a370(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_112704ea8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b05a46c; end: 10b05a523; -[SCImageProcessLensCommandMetadata initWithSpectaclesMetadata:launchConfigData:] */

undefined1 *
FUN_10b05a46c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112704ea8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b05a524; end: 10b05a647; -[SCImageProcessLensCommandMetadata initWithCapturerSamples:recordingDeviceMotionData:recordingRawAccelerometerData:recordingRawGyroData:launchConfigData:] */

undefined1 *
FUN_10b05a524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_112704ea8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b05a648; end: 10b05a6ef; -[SCImageProcessLensCommandMetadata initWithLensPersistentStoreData:lensId:] */

undefined1 *
FUN_10b05a648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112704ea8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b05a6f0; end: 10b05a713; -[SCImageProcessLensCommandMetadata copyWithZone:] */

undefined8 FUN_10b05a6f0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b05a714; end: 10b05a71b; -[SCImageProcessLensCommandMetadata capturerSamples] */

undefined8 FUN_10b05a714(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b05a71c; end: 10b05a723; -[SCImageProcessLensCommandMetadata spectaclesMetadata] */

undefined8 FUN_10b05a71c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b05a724; end: 10b05a72b; -[SCImageProcessLensCommandMetadata recordingDeviceMotionData] */

undefined8 FUN_10b05a724(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b05a72c; end: 10b05a733; -[SCImageProcessLensCommandMetadata recordingRawAccelerometerData] */

undefined8 FUN_10b05a72c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b05a734; end: 10b05a73b; -[SCImageProcessLensCommandMetadata recordingRawGyroData] */

undefined8 FUN_10b05a734(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b05a73c; end: 10b05a743; -[SCImageProcessLensCommandMetadata launchConfigData] */

undefined8 FUN_10b05a73c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b05a744; end: 10b05a74b; -[SCImageProcessLensCommandMetadata lensPersistentStoreData] */

undefined8 FUN_10b05a744(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b05a74c; end: 10b05a753; -[SCImageProcessLensCommandMetadata lensId] */

undefined8 FUN_10b05a74c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b05a754; end: 10b05a7cb; -[SCImageProcessLensCommandMetadata .cxx_destruct] */

void FUN_10b05a754(long param_1)

{
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



/* Entry: 10b05a7cc; end: 10b05a803; -[SCImageProcessLensCommandSpectaclesMetadata initWithMediaType:fieldOfView:aspectRatio:imuData:] */

void FUN_10b05a7cc(void)

{
  func_0x00010c029f00();
  return;
}



/* Entry: 10b05a804; end: 10b05a83f; -[SCImageProcessLensCommandSpectaclesMetadata initWithMediaType:fieldOfView:aspectRatio:sixDofDataProvider:] */

void FUN_10b05a804(void)

{
  func_0x00010c029f00();
  return;
}



/* Entry: 10b05a840; end: 10b05a9eb; -[SCImageProcessLensCommandSpectaclesMetadata initWithMediaType:fieldOfView:aspectRatio:imuData:sixDofDataProvider:primaryCameraLookupTable:secondaryCameraLookupTable:calibrationFilePath:skyClassifierPath:magicMomentEnabled:lensPlayback:] */

undefined1 *
FUN_10b05a840(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
             undefined4 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_14);
  puStack_78 = PTR_PTR_112704eb0;
  uStack_80 = param_3;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    *(undefined4 *)((long)puVar1 + 0xc) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
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
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_12;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_14;
    _objc_release(uVar2);
  }
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 10b05a9ec; end: 10b05aa23; -[SCImageProcessLensCommandSpectaclesMetadata initWithMediaType:fieldOfView:aspectRatio:imuData:lensPlayback:] */

void FUN_10b05a9ec(void)

{
  func_0x00010c029f00();
  return;
}



/* Entry: 10b05aa24; end: 10b05aa2b; -[SCImageProcessLensCommandSpectaclesMetadata mediaType] */

undefined8 FUN_10b05aa24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b05aa2c; end: 10b05aa33; -[SCImageProcessLensCommandSpectaclesMetadata fieldOfView] */

undefined4 FUN_10b05aa2c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b05aa34; end: 10b05aa3b; -[SCImageProcessLensCommandSpectaclesMetadata aspectRatio] */

undefined8 FUN_10b05aa34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b05aa3c; end: 10b05aa43; -[SCImageProcessLensCommandSpectaclesMetadata imuData] */

undefined8 FUN_10b05aa3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b05aa44; end: 10b05aa4b; -[SCImageProcessLensCommandSpectaclesMetadata sixDofDataProvider] */

undefined8 FUN_10b05aa44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b05aa4c; end: 10b05aa53; -[SCImageProcessLensCommandSpectaclesMetadata primaryCameraLookupTable] */

undefined8 FUN_10b05aa4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b05aa54; end: 10b05aa5b; -[SCImageProcessLensCommandSpectaclesMetadata secondaryCameraLookupTable] */

undefined8 FUN_10b05aa54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b05aa5c; end: 10b05aa63; -[SCImageProcessLensCommandSpectaclesMetadata calibrationFilePath] */

undefined8 FUN_10b05aa5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b05aa64; end: 10b05aa6b; -[SCImageProcessLensCommandSpectaclesMetadata skyClassifierPath] */

undefined8 FUN_10b05aa64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b05aa6c; end: 10b05aa73; -[SCImageProcessLensCommandSpectaclesMetadata magicMomentEnabled] */

undefined1 FUN_10b05aa6c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b05aa74; end: 10b05aa7b; -[SCImageProcessLensCommandSpectaclesMetadata lensPlayback] */

undefined8 FUN_10b05aa74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b05aa7c; end: 10b05aae7; -[SCImageProcessLensCommandSpectaclesMetadata .cxx_destruct] */

void FUN_10b05aa7c(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10b05aae8; end: 10b05abcb; -[SCLensLabsCameraData initWithWidth:height:focalLength:principalPointX:principalPointY:leftCameraExtrinsics:rightCameraExtrinsics:] */

undefined1 *
FUN_10b05aae8(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_112704eb8;
  uStack_70 = param_4;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined4 *)((long)puVar1 + 8) = param_2;
    *(undefined4 *)((long)puVar1 + 0xc) = param_3;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  return (undefined1 *)puVar1;
}



/* Entry: 10b05abcc; end: 10b05abef; -[SCLensLabsCameraData copyWithZone:] */

undefined8 FUN_10b05abcc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b05abf0; end: 10b05acdf; -[SCLensLabsCameraData hash] */

undefined8 * FUN_10b05abf0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_50 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar7 = (ulong)*(uint *)(param_1 + 8) * 0x200000 - 1;
  uVar7 = (uVar7 ^ uVar7 >> 0x18) * 0x109;
  uVar7 = (uVar7 ^ uVar7 >> 0xe) * 0x15;
  lStack_48 = (uVar7 ^ uVar7 >> 0x1c) * 0x80000001;
  uVar7 = (ulong)*(uint *)(param_1 + 0xc) * 0x200000 - 1;
  uVar7 = (uVar7 ^ uVar7 >> 0x18) * 0x109;
  uStack_60 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_58 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uVar7 = (uVar7 ^ uVar7 >> 0xe) * 0x15;
  lStack_40 = (uVar7 ^ uVar7 >> 0x1c) * 0x80000001;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar3;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10b05ae10:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b05ae1c;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((*(long *)((long)puVar4 + 0x10) == *(long *)(param_3 + 0x10) &&
        (*(long *)((long)puVar4 + 0x18) == *(long *)(param_3 + 0x18))))) {
      dVar12 = ABS(*(double *)((long)puVar4 + 0x20) - *(double *)(param_3 + 0x20));
      dVar10 = ABS(*(double *)((long)puVar4 + 0x20) + *(double *)(param_3 + 0x20)) *
               2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar12) && (bVar1 = false, !NAN(dVar12) && !NAN(dVar10))) {
        bVar1 = dVar12 < dVar10;
      }
      if (bVar1) {
        fVar11 = ABS(*(float *)((long)puVar4 + 8) - *(float *)(param_3 + 8));
        fVar9 = ABS(*(float *)((long)puVar4 + 8) + *(float *)(param_3 + 8)) * 1.1920929e-07;
        bVar1 = true;
        if ((1.1754944e-38 <= fVar11) && (bVar1 = false, !NAN(fVar11) && !NAN(fVar9))) {
          bVar1 = fVar11 < fVar9;
        }
        if (bVar1) {
          fVar11 = ABS(*(float *)((long)puVar4 + 0xc) - *(float *)(param_3 + 0xc));
          fVar9 = ABS(*(float *)((long)puVar4 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
          bVar1 = true;
          if ((1.1754944e-38 <= fVar11) && (bVar1 = false, !NAN(fVar11) && !NAN(fVar9))) {
            bVar1 = fVar11 < fVar9;
          }
          if ((bVar1) &&
             ((lVar6 = *(long *)((long)puVar4 + 0x28), lVar6 == *(long *)(param_3 + 0x28) ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
            puVar8 = *(undefined1 **)((long)puVar4 + 0x30);
            if (puVar8 != *(undefined1 **)(param_3 + 0x30)) {
              func_0x00010c071ae0();
              goto LAB_10b05ae1c;
            }
            goto LAB_10b05ae10;
          }
        }
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_10b05ae1c:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 10b05ace0; end: 10b05ae37; -[SCLensLabsCameraData isEqual:] */

long FUN_10b05ace0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b05ae10:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b05ae1c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
        (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))))) {
      dVar8 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
      dVar6 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar6))) {
        bVar1 = dVar8 < dVar6;
      }
      if (bVar1) {
        fVar7 = ABS(*(float *)(param_1 + 8) - *(float *)(param_3 + 8));
        fVar5 = ABS(*(float *)(param_1 + 8) + *(float *)(param_3 + 8)) * 1.1920929e-07;
        bVar1 = true;
        if ((1.1754944e-38 <= fVar7) && (bVar1 = false, !NAN(fVar7) && !NAN(fVar5))) {
          bVar1 = fVar7 < fVar5;
        }
        if (bVar1) {
          fVar7 = ABS(*(float *)(param_1 + 0xc) - *(float *)(param_3 + 0xc));
          fVar5 = ABS(*(float *)(param_1 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
          bVar1 = true;
          if ((1.1754944e-38 <= fVar7) && (bVar1 = false, !NAN(fVar7) && !NAN(fVar5))) {
            bVar1 = fVar7 < fVar5;
          }
          if ((bVar1) &&
             ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
            lVar4 = *(long *)(param_1 + 0x30);
            if (lVar4 != *(long *)(param_3 + 0x30)) {
              func_0x00010c071ae0();
              goto LAB_10b05ae1c;
            }
            goto LAB_10b05ae10;
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_10b05ae1c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b05ae38; end: 10b05ae3f; -[SCLensLabsCameraData width] */

undefined8 FUN_10b05ae38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b05ae40; end: 10b05ae47; -[SCLensLabsCameraData height] */

undefined8 FUN_10b05ae40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b05ae48; end: 10b05ae4f; -[SCLensLabsCameraData focalLength] */

undefined8 FUN_10b05ae48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b05ae50; end: 10b05ae57; -[SCLensLabsCameraData principalPointX] */

undefined4 FUN_10b05ae50(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b05ae58; end: 10b05ae5f; -[SCLensLabsCameraData principalPointY] */

undefined4 FUN_10b05ae58(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b05ae60; end: 10b05ae67; -[SCLensLabsCameraData leftCameraExtrinsics] */

undefined8 FUN_10b05ae60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b05ae68; end: 10b05ae6f; -[SCLensLabsCameraData rightCameraExtrinsics] */

undefined8 FUN_10b05ae68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b05ae70; end: 10b05ae9f; -[SCLensLabsCameraData .cxx_destruct] */

void FUN_10b05ae70(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 10b05aea0; end: 10b05af5b; -[SCLensLabsAlignmentFrameData initWithTimestamp:leftAlignmentComp:rightAlignmentComp:] */

undefined1 *
FUN_10b05aea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_112704ec0;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
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



/* Entry: 10b05af5c; end: 10b05af7f; -[SCLensLabsAlignmentFrameData copyWithZone:] */

undefined8 FUN_10b05af5c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b05af80; end: 10b05b017; -[SCLensLabsAlignmentFrameData hash] */

ulong * FUN_10b05af80(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  double dVar10;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_40 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar3;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (ulong *)param_3) {
LAB_10b05b0cc:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b05b0d8;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((ulong)puVar5 & 1) != 0) {
      dVar10 = ABS(*(double *)((long)puVar4 + 8) - *(double *)(param_3 + 8));
      dVar9 = ABS(*(double *)((long)puVar4 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if ((bVar1) &&
         ((lVar6 = *(long *)((long)puVar4 + 0x10), lVar6 == *(long *)(param_3 + 0x10) ||
          (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = *(undefined1 **)((long)puVar4 + 0x18);
        if (puVar8 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b05b0d8;
        }
        goto LAB_10b05b0cc;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_10b05b0d8:
  _objc_release(param_3);
  return (ulong *)puVar8;
}



/* Entry: 10b05b018; end: 10b05b0f3; -[SCLensLabsAlignmentFrameData isEqual:] */

long FUN_10b05b018(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b05b0cc:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b05b0d8;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
      dVar5 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((bVar1) &&
         ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b05b0d8;
        }
        goto LAB_10b05b0cc;
      }
    }
    lVar4 = 0;
  }
LAB_10b05b0d8:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b05b0f4; end: 10b05b0fb; -[SCLensLabsAlignmentFrameData timestamp] */

undefined8 FUN_10b05b0f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b05b0fc; end: 10b05b103; -[SCLensLabsAlignmentFrameData leftAlignmentComp] */

undefined8 FUN_10b05b0fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b05b104; end: 10b05b10b; -[SCLensLabsAlignmentFrameData rightAlignmentComp] */

undefined8 FUN_10b05b104(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b05b10c; end: 10b05b13b; -[SCLensLabsAlignmentFrameData .cxx_destruct] */

void FUN_10b05b10c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b05b13c; end: 10b05b1eb; -[SCImageProcessLensCommandSpectaclesLensPlayback initWithCoder:] */

undefined1 * FUN_10b05b13c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704ec8;
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
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b05b1ec; end: 10b05b297; -[SCImageProcessLensCommandSpectaclesLensPlayback initWithLensId:metadataPath:] */

undefined1 *
FUN_10b05b1ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112704ec8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b05b298; end: 10b05b2bb; -[SCImageProcessLensCommandSpectaclesLensPlayback copyWithZone:] */

undefined8 FUN_10b05b298(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b05b2bc; end: 10b05b31b; -[SCImageProcessLensCommandSpectaclesLensPlayback encodeWithCoder:] */

void FUN_10b05b2bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110eeb138);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f53c18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b05b31c; end: 10b05b38f; -[SCImageProcessLensCommandSpectaclesLensPlayback hash] */

undefined8 * FUN_10b05b31c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b05b410:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b05b41c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10b05b41c;
        }
        goto LAB_10b05b410;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b05b41c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b05b390; end: 10b05b437; -[SCImageProcessLensCommandSpectaclesLensPlayback isEqual:] */

long FUN_10b05b390(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b05b410:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b05b41c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10b05b41c;
        }
        goto LAB_10b05b410;
      }
    }
    lVar3 = 0;
  }
LAB_10b05b41c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b05b438; end: 10b05b43f; -[SCImageProcessLensCommandSpectaclesLensPlayback lensId] */

undefined8 FUN_10b05b438(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b05b440; end: 10b05b447; -[SCImageProcessLensCommandSpectaclesLensPlayback metadataPath] */

undefined8 FUN_10b05b440(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b05b448; end: 10b05b477; -[SCImageProcessLensCommandSpectaclesLensPlayback .cxx_destruct] */

void FUN_10b05b448(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b05b478; end: 10b05b54f; -[SCLensDepthMetadata initWithCoder:] */

undefined1 * FUN_10b05b478(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704ed0;
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
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b05b550; end: 10b05b627; -[SCLensDepthMetadata initWithSerializedDepthMapAsPNGRawData:serializedCameraInfoData:serializedSegmentationMaskAsPNGRawData:] */

undefined1 *
FUN_10b05b550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112704ed0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b05b628; end: 10b05b64b; -[SCLensDepthMetadata copyWithZone:] */

undefined8 FUN_10b05b628(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b05b64c; end: 10b05b6bf; -[SCLensDepthMetadata encodeWithCoder:] */

void FUN_10b05b64c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f53c38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f53c58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f53c78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b05b6c0; end: 10b05b73f; -[SCLensDepthMetadata hash] */

undefined8 * FUN_10b05b6c0(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_10b05b7d8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b05b7e4;
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
            goto LAB_10b05b7e4;
          }
          goto LAB_10b05b7d8;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b05b7e4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b05b740; end: 10b05b7ff; -[SCLensDepthMetadata isEqual:] */

long FUN_10b05b740(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b05b7d8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b05b7e4;
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
            goto LAB_10b05b7e4;
          }
          goto LAB_10b05b7d8;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b05b7e4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b05b800; end: 10b05b807; -[SCLensDepthMetadata serializedDepthMapAsPNGRawData] */

undefined8 FUN_10b05b800(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b05b808; end: 10b05b80f; -[SCLensDepthMetadata serializedCameraInfoData] */

undefined8 FUN_10b05b808(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b05b810; end: 10b05b817; -[SCLensDepthMetadata serializedSegmentationMaskAsPNGRawData] */

undefined8 FUN_10b05b810(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


