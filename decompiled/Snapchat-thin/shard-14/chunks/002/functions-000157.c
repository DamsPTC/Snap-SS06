/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b04fce8; end: 10b04fd0b; -[SCCanvasAppConnection copyWithZone:] */

undefined8 FUN_10b04fce8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b04fd0c; end: 10b04fdc3; -[SCCanvasAppConnection hash] */

undefined8 * FUN_10b04fd0c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uStack_50 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_58 = uVar3;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uStack_30 = (ulong)*(byte *)(param_1 + 10);
  puVar4 = &uStack_78;
  uStack_48 = uVar1;
  func_0x000107c3191c(puVar4,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10b04fee4:
    puVar7 = (undefined8 *)0x1;
  }
  else {
    puVar7 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b04fef0;
    puVar7 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((((puVar4[7] == param_3[7] && (*(char *)(puVar4 + 1) == *(char *)(param_3 + 1))) &&
         (*(char *)((long)puVar4 + 9) == *(char *)((long)param_3 + 9))) &&
        (*(char *)((long)puVar4 + 10) == *(char *)((long)param_3 + 10))))) {
      lVar6 = puVar4[2];
      if ((lVar6 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        lVar6 = puVar4[3];
        if ((lVar6 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = puVar4[4];
          if ((lVar6 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            lVar6 = puVar4[5];
            if ((lVar6 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
              lVar6 = puVar4[6];
              if ((lVar6 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                puVar7 = (undefined8 *)puVar4[8];
                if (puVar7 != (undefined8 *)param_3[8]) {
                  func_0x00010c071ae0();
                  goto LAB_10b04fef0;
                }
                goto LAB_10b04fee4;
              }
            }
          }
        }
      }
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_10b04fef0:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 10b04fdc4; end: 10b04ff0b; -[SCCanvasAppConnection isEqual:] */

long FUN_10b04fdc4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b04fee4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b04fef0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38) &&
          (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))) {
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
                lVar3 = *(long *)(param_1 + 0x40);
                if (lVar3 != *(long *)(param_3 + 0x40)) {
                  func_0x00010c071ae0();
                  goto LAB_10b04fef0;
                }
                goto LAB_10b04fee4;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b04fef0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b04ff0c; end: 10b04ff13; -[SCCanvasAppConnection applicationId] */

undefined8 FUN_10b04ff0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b04ff14; end: 10b04ff1b; -[SCCanvasAppConnection applicationName] */

undefined8 FUN_10b04ff14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b04ff1c; end: 10b04ff23; -[SCCanvasAppConnection applicationIconURL] */

undefined8 FUN_10b04ff1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b04ff24; end: 10b04ff2b; -[SCCanvasAppConnection approvedScopes] */

undefined8 FUN_10b04ff24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b04ff2c; end: 10b04ff33; -[SCCanvasAppConnection connectionTimestamp] */

undefined8 FUN_10b04ff2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b04ff34; end: 10b04ff3b; -[SCCanvasAppConnection appContext] */

undefined8 FUN_10b04ff34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b04ff3c; end: 10b04ff43; -[SCCanvasAppConnection snapKitFeatures] */

undefined8 FUN_10b04ff3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b04ff44; end: 10b04ff4b; -[SCCanvasAppConnection isConnected] */

undefined1 FUN_10b04ff44(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b04ff4c; end: 10b04ff53; -[SCCanvasAppConnection hasPrivateStorageData] */

undefined1 FUN_10b04ff4c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b04ff54; end: 10b04ff5b; -[SCCanvasAppConnection isFirstPartyApp] */

undefined1 FUN_10b04ff54(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b04ff5c; end: 10b04ffbb; -[SCCanvasAppConnection .cxx_destruct] */

void FUN_10b04ff5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b04ffbc; end: 10b0500a3; -[SCCanvasAppOAuthScope initWithName:toggleable:descriptions:iconURL:] */

undefined1 *
FUN_10b04ffbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_112704d30;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
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
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0500a4; end: 10b0500c7; -[SCCanvasAppOAuthScope copyWithZone:] */

undefined8 FUN_10b0500a4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0500c8; end: 10b05014b; -[SCCanvasAppOAuthScope hash] */

undefined8 * FUN_10b0500c8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b0501f4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b050200;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_10b050200;
          }
          goto LAB_10b0501f4;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b050200:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b05014c; end: 10b05021b; -[SCCanvasAppOAuthScope isEqual:] */

long FUN_10b05014c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0501f4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b050200;
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
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10b050200;
          }
          goto LAB_10b0501f4;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b050200:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b05021c; end: 10b050223; -[SCCanvasAppOAuthScope name] */

undefined8 FUN_10b05021c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b050224; end: 10b05022b; -[SCCanvasAppOAuthScope toggleable] */

undefined1 FUN_10b050224(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b05022c; end: 10b050233; -[SCCanvasAppOAuthScope descriptions] */

undefined8 FUN_10b05022c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b050234; end: 10b05023b; -[SCCanvasAppOAuthScope iconURL] */

undefined8 FUN_10b050234(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b05023c; end: 10b050277; -[SCCanvasAppOAuthScope .cxx_destruct] */

void FUN_10b05023c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b050278; end: 10b05032b; -[SCCanvasAppSnapKitFeature initWithName:toggleable:iconURL:] */

undefined1 *
FUN_10b050278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112704d38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b05032c; end: 10b05034f; -[SCCanvasAppSnapKitFeature copyWithZone:] */

undefined8 FUN_10b05032c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b050350; end: 10b0503c7; -[SCCanvasAppSnapKitFeature hash] */

undefined8 * FUN_10b050350(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b050458:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b050464;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b050464;
        }
        goto LAB_10b050458;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b050464:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b0503c8; end: 10b05047f; -[SCCanvasAppSnapKitFeature isEqual:] */

long FUN_10b0503c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b050458:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b050464;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b050464;
        }
        goto LAB_10b050458;
      }
    }
    lVar3 = 0;
  }
LAB_10b050464:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b050480; end: 10b050487; -[SCCanvasAppSnapKitFeature name] */

undefined8 FUN_10b050480(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b050488; end: 10b05048f; -[SCCanvasAppSnapKitFeature toggleable] */

undefined1 FUN_10b050488(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b050490; end: 10b050497; -[SCCanvasAppSnapKitFeature iconURL] */

undefined8 FUN_10b050490(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b050498; end: 10b0504c7; -[SCCanvasAppSnapKitFeature .cxx_destruct] */

void FUN_10b050498(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0504c8; end: 10b050593; -[SCFeedReplyParameters initWithCellViewPosition:isDoubleTap:isFromChatActionMenu:friendsFeedShortcutType:isReplyCta:] */

undefined1 *
FUN_10b0504c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112704d40;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b050594; end: 10b0505b7; -[SCFeedReplyParameters copyWithZone:] */

undefined8 FUN_10b050594(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0505b8; end: 10b05063b; -[SCFeedReplyParameters hash] */

undefined8 * FUN_10b0505b8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = (ulong)*(byte *)(param_1 + 9);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 10);
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b0506ec:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b0506f8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))
        && (*(char *)((long)puVar3 + 10) == param_3[10])))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b0506f8;
        }
        goto LAB_10b0506ec;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b0506f8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b05063c; end: 10b050713; -[SCFeedReplyParameters isEqual:] */

long FUN_10b05063c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0506ec:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0506f8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b0506f8;
        }
        goto LAB_10b0506ec;
      }
    }
    lVar3 = 0;
  }
LAB_10b0506f8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b050714; end: 10b05071b; -[SCFeedReplyParameters cellViewPosition] */

undefined8 FUN_10b050714(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b05071c; end: 10b050723; -[SCFeedReplyParameters isDoubleTap] */

undefined1 FUN_10b05071c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b050724; end: 10b05072b; -[SCFeedReplyParameters isFromChatActionMenu] */

undefined1 FUN_10b050724(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b05072c; end: 10b050733; -[SCFeedReplyParameters friendsFeedShortcutType] */

undefined8 FUN_10b05072c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b050734; end: 10b05073b; -[SCFeedReplyParameters isReplyCta] */

undefined1 FUN_10b050734(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b05073c; end: 10b05076b; -[SCFeedReplyParameters .cxx_destruct] */

void FUN_10b05073c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b05076c; end: 10b0507b3; -[SCDiscoverFeedReplyParameters initWithIsMobStory:] */

void FUN_10b05076c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112704d48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10b0507b4; end: 10b0507d7; -[SCDiscoverFeedReplyParameters copyWithZone:] */

undefined8 FUN_10b0507b4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0507d8; end: 10b0507df; -[SCDiscoverFeedReplyParameters hash] */

undefined1 FUN_10b0507d8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b0507e0; end: 10b050867; -[SCDiscoverFeedReplyParameters isEqual:] */

bool FUN_10b0507e0(ulong param_1,undefined8 param_2,ulong param_3)

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
        bVar1 = *(char *)(param_1 + 8) == *(char *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b050868; end: 10b05086f; -[SCDiscoverFeedReplyParameters isMobStory] */

undefined1 FUN_10b050868(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b050870; end: 10b050a5f; -[SCContextReplyParameters initWithIsFromContextMenu:remixNotifiedUsernames:remixSourceSnapId:remixSourceUserId:remixLaunchSource:remixCaptureType:remixPermission:contextSessionId:isReplyToStory:isPreviewSavingDisabled:isLaunchedBySnapBackAction:cameraModeParameters:remixExportItem:storyReplyOriginMetadata:] */

undefined8 *
FUN_10b050870(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_112704d50;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    puVar1[5] = param_7;
    puVar1[6] = param_8;
    puVar1[7] = param_9;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = (undefined1)param_11;
    *(undefined1 *)((long)puVar1 + 10) = param_11._1_1_;
    *(undefined1 *)((long)puVar1 + 0xb) = param_11._2_1_;
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10b050a60; end: 10b050a83; -[SCContextReplyParameters copyWithZone:] */

undefined8 FUN_10b050a60(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b050a84; end: 10b050b57; -[SCContextReplyParameters hash] */

ulong * FUN_10b050a84(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_98 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_90 = uVar1;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uStack_70 = *(undefined8 *)(param_1 + 0x30);
  uStack_78 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_80 = uVar3;
  func_0x00010bfde980();
  uStack_58 = (ulong)*(byte *)(param_1 + 9);
  uStack_50 = (ulong)*(byte *)(param_1 + 10);
  uStack_48 = (ulong)*(byte *)(param_1 + 0xb);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar4 = &uStack_98;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar4,0xe);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10b050cc0:
    puVar7 = (ulong *)0x1;
  }
  else {
    puVar7 = (ulong *)0x0;
    if ((puVar4 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_10b050ccc;
    puVar7 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((((ulong)puVar5 & 1) != 0) &&
         (((((char)puVar4[1] == (char)param_3[1] && (puVar4[5] == param_3[5])) &&
           (puVar4[6] == param_3[6])) &&
          ((puVar4[7] == param_3[7] && (*(char *)((long)puVar4 + 9) == *(char *)((long)param_3 + 9))
           ))))) && (*(char *)((long)puVar4 + 10) == *(char *)((long)param_3 + 10))) &&
       (*(char *)((long)puVar4 + 0xb) == *(char *)((long)param_3 + 0xb))) {
      uVar6 = puVar4[2];
      if ((uVar6 == param_3[2]) || (func_0x00010c071ae0(), (int)uVar6 != 0)) {
        uVar6 = puVar4[3];
        if ((uVar6 == param_3[3]) || (func_0x00010c071ae0(), (int)uVar6 != 0)) {
          uVar6 = puVar4[4];
          if ((uVar6 == param_3[4]) || (func_0x00010c071ae0(), (int)uVar6 != 0)) {
            uVar6 = puVar4[8];
            if ((uVar6 == param_3[8]) || (func_0x00010c071ae0(), (int)uVar6 != 0)) {
              uVar6 = puVar4[9];
              if ((uVar6 == param_3[9]) || (func_0x00010c071ae0(), (int)uVar6 != 0)) {
                uVar6 = puVar4[10];
                if ((uVar6 == param_3[10]) || (func_0x00010c071ae0(), (int)uVar6 != 0)) {
                  puVar7 = (ulong *)puVar4[0xb];
                  if (puVar7 != (ulong *)param_3[0xb]) {
                    func_0x00010c071ae0();
                    goto LAB_10b050ccc;
                  }
                  goto LAB_10b050cc0;
                }
              }
            }
          }
        }
      }
    }
    puVar7 = (ulong *)0x0;
  }
LAB_10b050ccc:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 10b050b58; end: 10b050ce7; -[SCContextReplyParameters isEqual:] */

long FUN_10b050b58(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b050cc0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b050ccc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
            (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
           (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
          ((*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38) &&
           (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))))) &&
        (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
       (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x40);
            if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x48);
              if ((lVar3 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x50);
                if ((lVar3 == *(long *)(param_3 + 0x50)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x58);
                  if (lVar3 != *(long *)(param_3 + 0x58)) {
                    func_0x00010c071ae0();
                    goto LAB_10b050ccc;
                  }
                  goto LAB_10b050cc0;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b050ccc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b050ce8; end: 10b050cef; -[SCContextReplyParameters isFromContextMenu] */

undefined1 FUN_10b050ce8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b050cf0; end: 10b050cf7; -[SCContextReplyParameters remixNotifiedUsernames] */

undefined8 FUN_10b050cf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b050cf8; end: 10b050cff; -[SCContextReplyParameters remixSourceSnapId] */

undefined8 FUN_10b050cf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b050d00; end: 10b050d07; -[SCContextReplyParameters remixSourceUserId] */

undefined8 FUN_10b050d00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b050d08; end: 10b050d0f; -[SCContextReplyParameters remixLaunchSource] */

undefined8 FUN_10b050d08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b050d10; end: 10b050d17; -[SCContextReplyParameters remixCaptureType] */

undefined8 FUN_10b050d10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b050d18; end: 10b050d1f; -[SCContextReplyParameters remixPermission] */

undefined8 FUN_10b050d18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b050d20; end: 10b050d27; -[SCContextReplyParameters contextSessionId] */

undefined8 FUN_10b050d20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b050d28; end: 10b050d2f; -[SCContextReplyParameters isReplyToStory] */

undefined1 FUN_10b050d28(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b050d30; end: 10b050d37; -[SCContextReplyParameters isPreviewSavingDisabled] */

undefined1 FUN_10b050d30(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b050d38; end: 10b050d3f; -[SCContextReplyParameters isLaunchedBySnapBackAction] */

undefined1 FUN_10b050d38(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10b050d40; end: 10b050d47; -[SCContextReplyParameters cameraModeParameters] */

undefined8 FUN_10b050d40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b050d48; end: 10b050d4f; -[SCContextReplyParameters remixExportItem] */

undefined8 FUN_10b050d48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b050d50; end: 10b050d57; -[SCContextReplyParameters storyReplyOriginMetadata] */

undefined8 FUN_10b050d50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b050d58; end: 10b050dc3; -[SCContextReplyParameters .cxx_destruct] */

void FUN_10b050d58(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b050dc4; end: 10b050e6f; -[SCTopicsReplyParameters initWithTopicToAdd:contextSessionId:] */

undefined1 *
FUN_10b050dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112704d58;
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



/* Entry: 10b050e70; end: 10b050e93; -[SCTopicsReplyParameters copyWithZone:] */

undefined8 FUN_10b050e70(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b050e94; end: 10b050f07; -[SCTopicsReplyParameters hash] */

undefined8 * FUN_10b050e94(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b050f88:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b050f94;
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
          goto LAB_10b050f94;
        }
        goto LAB_10b050f88;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b050f94:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b050f08; end: 10b050faf; -[SCTopicsReplyParameters isEqual:] */

long FUN_10b050f08(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b050f88:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b050f94;
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
          goto LAB_10b050f94;
        }
        goto LAB_10b050f88;
      }
    }
    lVar3 = 0;
  }
LAB_10b050f94:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b050fb0; end: 10b050fb7; -[SCTopicsReplyParameters topicToAdd] */

undefined8 FUN_10b050fb0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b050fb8; end: 10b050fbf; -[SCTopicsReplyParameters contextSessionId] */

undefined8 FUN_10b050fb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b050fc0; end: 10b050fef; -[SCTopicsReplyParameters .cxx_destruct] */

void FUN_10b050fc0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b050ff0; end: 10b051037; -[SCOperaReplyParameters initWithIsBottomSnapCamera:] */

void FUN_10b050ff0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112704d60;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10b051038; end: 10b05105b; -[SCOperaReplyParameters copyWithZone:] */

undefined8 FUN_10b051038(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b05105c; end: 10b051063; -[SCOperaReplyParameters hash] */

undefined1 FUN_10b05105c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b051064; end: 10b0510eb; -[SCOperaReplyParameters isEqual:] */

bool FUN_10b051064(ulong param_1,undefined8 param_2,ulong param_3)

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
        bVar1 = *(char *)(param_1 + 8) == *(char *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b0510ec; end: 10b0510f3; -[SCOperaReplyParameters isBottomSnapCamera] */

undefined1 FUN_10b0510ec(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b0510f4; end: 10b051157; +[SCReplyConfiguration basicReplyConfigurationWithBasicParameters:] */

void FUN_10b0510f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1bb0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b051158; end: 10b0511ef; +[SCReplyConfiguration commentsSnapReplyConfigurationWithBasicParameters:commentsSnapReplyParameters:] */

void FUN_10b051158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b1bb0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 9;
  uVar3 = *(undefined8 *)(puVar2 + 0xc0);
  *(undefined8 *)(puVar2 + 0xc0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 200);
  *(undefined8 *)(puVar2 + 200) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0511f0; end: 10b051287; +[SCReplyConfiguration contextReplyConfigurationWithBasicParameters:contextParameters:] */

void FUN_10b0511f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b1bb0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b051288; end: 10b05131f; +[SCReplyConfiguration creatorSubscriptionsReplyConfigurationWithBasicParameters:creatorSubscriptionsParameters:] */

void FUN_10b051288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b1bb0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 10;
  uVar3 = *(undefined8 *)(puVar2 + 0xd0);
  *(undefined8 *)(puVar2 + 0xd0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xd8);
  *(undefined8 *)(puVar2 + 0xd8) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b051320; end: 10b0513b7; +[SCReplyConfiguration discoverFeedReplyConfigurationWithBasicParameters:discoverFeedParameters:] */

void FUN_10b051320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b1bb0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0513b8; end: 10b05144f; +[SCReplyConfiguration feedReplyConfigurationWithBasicParameters:feedParameters:] */

void FUN_10b0513b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b1bb0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b051450; end: 10b0514e7; +[SCReplyConfiguration impalaReplyConfigurationWithBasicParameters:impalaParameters:] */

void FUN_10b051450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b1bb0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0514e8; end: 10b051673; +[SCReplyConfiguration lensReplyConfigurationWithBasicParameters:lensParameters:gamesReplyParameters:impalaReplyParams:contextReplyParameters:topicReplyParameters:lensConfigReplyParameters:] */

void FUN_10b0514e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126b1bb0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  uVar3 = *(undefined8 *)(puVar2 + 0x58);
  *(undefined8 *)(puVar2 + 0x58) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x60);
  *(undefined8 *)(puVar2 + 0x60) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x68);
  *(undefined8 *)(puVar2 + 0x68) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x70);
  *(undefined8 *)(puVar2 + 0x70) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x78);
  *(undefined8 *)(puVar2 + 0x78) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x80);
  *(undefined8 *)(puVar2 + 0x80) = param_8;
  _objc_retain(param_8);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x88);
  *(undefined8 *)(puVar2 + 0x88) = param_9;
  _objc_release(uVar3);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b051674; end: 10b05170b; +[SCReplyConfiguration operaReplyConfigurationWithBasicParameters:operaParameters:] */

void FUN_10b051674(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b1bb0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
  uVar3 = *(undefined8 *)(puVar2 + 0x90);
  *(undefined8 *)(puVar2 + 0x90) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x98);
  *(undefined8 *)(puVar2 + 0x98) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b05170c; end: 10b0517a3; +[SCReplyConfiguration streakRestoreReplyConfigurationWithBasicParameters:streakRestoreParameters:] */

void FUN_10b05170c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b1bb0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 8;
  uVar3 = *(undefined8 *)(puVar2 + 0xb0);
  *(undefined8 *)(puVar2 + 0xb0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xb8);
  *(undefined8 *)(puVar2 + 0xb8) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0517a4; end: 10b05183b; +[SCReplyConfiguration topicsReplyConfigurationWithBasicParameters:replyParameters:] */

void FUN_10b0517a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b1bb0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 7;
  uVar3 = *(undefined8 *)(puVar2 + 0xa0);
  *(undefined8 *)(puVar2 + 0xa0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xa8);
  *(undefined8 *)(puVar2 + 0xa8) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b05183c; end: 10b05185f; -[SCReplyConfiguration copyWithZone:] */

undefined8 FUN_10b05183c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b051860; end: 10b0519f7; -[SCReplyConfiguration hash] */

void FUN_10b051860(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
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
  
  puVar3 = &uStack_100;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_100 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_f8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_f0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_e8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_e0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_d8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_d0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_c8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_c0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_b8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_b0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  uStack_a8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uStack_a0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  uStack_90 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 200);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_100,0x1b);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_128 = PTR_PTR_112704d68;
  puStack_130 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_130,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0519f8; end: 10b051a3b; -[SCReplyConfiguration internalInit] */

void FUN_10b0519f8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112704d68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b051a3c; end: 10b051d33; -[SCReplyConfiguration isEqual:] */

long FUN_10b051a3c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b051d0c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b051d18;
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
                    if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x50);
                      if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x58);
                        if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x60);
                          if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0x68);
                            if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                              lVar3 = *(long *)(param_1 + 0x70);
                              if ((lVar3 == *(long *)(param_3 + 0x70)) ||
                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                lVar3 = *(long *)(param_1 + 0x78);
                                if ((lVar3 == *(long *)(param_3 + 0x78)) ||
                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                  lVar3 = *(long *)(param_1 + 0x80);
                                  if ((lVar3 == *(long *)(param_3 + 0x80)) ||
                                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                    lVar3 = *(long *)(param_1 + 0x88);
                                    if ((lVar3 == *(long *)(param_3 + 0x88)) ||
                                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                      lVar3 = *(long *)(param_1 + 0x90);
                                      if ((lVar3 == *(long *)(param_3 + 0x90)) ||
                                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                        lVar3 = *(long *)(param_1 + 0x98);
                                        if ((lVar3 == *(long *)(param_3 + 0x98)) ||
                                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                          lVar3 = *(long *)(param_1 + 0xa0);
                                          if ((lVar3 == *(long *)(param_3 + 0xa0)) ||
                                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                            lVar3 = *(long *)(param_1 + 0xa8);
                                            if ((lVar3 == *(long *)(param_3 + 0xa8)) ||
                                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                              lVar3 = *(long *)(param_1 + 0xb0);
                                              if ((lVar3 == *(long *)(param_3 + 0xb0)) ||
                                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                lVar3 = *(long *)(param_1 + 0xb8);
                                                if ((lVar3 == *(long *)(param_3 + 0xb8)) ||
                                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                  lVar3 = *(long *)(param_1 + 0xc0);
                                                  if ((lVar3 == *(long *)(param_3 + 0xc0)) ||
                                                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                    lVar3 = *(long *)(param_1 + 200);
                                                    if ((lVar3 == *(long *)(param_3 + 200)) ||
                                                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                      lVar3 = *(long *)(param_1 + 0xd0);
                                                      if ((lVar3 == *(long *)(param_3 + 0xd0)) ||
                                                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                        lVar3 = *(long *)(param_1 + 0xd8);
                                                        if (lVar3 != *(long *)(param_3 + 0xd8)) {
                                                          func_0x00010c071ae0();
                                                          goto LAB_10b051d18;
                                                        }
                                                        goto LAB_10b051d0c;
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
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
LAB_10b051d18:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b051d34; end: 10b051f77; -[SCReplyConfiguration matchBasicReplyConfiguration:contextReplyConfiguration:discoverFeedReplyConfiguration:feedReplyConfiguration:impalaReplyConfiguration:lensReplyConfiguration:operaReplyConfiguration:topicsReplyConfiguration:streakRestoreReplyConfiguration:commentsSnapReplyConfiguration:creatorSubscriptionsReplyConfiguration:] */

void FUN_10b051d34(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10,long param_11,
                  long param_12,long param_13)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  switch(*(undefined8 *)(param_1 + 8)) {
  case 0:
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
    }
    goto LAB_10b051f04;
  case 1:
    if (param_4 == 0) goto LAB_10b051f04;
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    pcVar4 = *(code **)(param_4 + 0x10);
    lVar1 = param_4;
    break;
  case 2:
    if (param_5 == 0) goto LAB_10b051f04;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    pcVar4 = *(code **)(param_5 + 0x10);
    lVar1 = param_5;
    break;
  case 3:
    if (param_6 == 0) goto LAB_10b051f04;
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    pcVar4 = *(code **)(param_6 + 0x10);
    lVar1 = param_6;
    break;
  case 4:
    if (param_7 == 0) goto LAB_10b051f04;
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    pcVar4 = *(code **)(param_7 + 0x10);
    lVar1 = param_7;
    break;
  case 5:
    if (param_8 != 0) {
      (**(code **)(param_8 + 0x10))
                (param_8,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),
                 *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),
                 *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),
                 *(undefined8 *)(param_1 + 0x88));
    }
    goto LAB_10b051f04;
  case 6:
    if (param_9 == 0) goto LAB_10b051f04;
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    pcVar4 = *(code **)(param_9 + 0x10);
    lVar1 = param_9;
    break;
  case 7:
    if (param_10 == 0) goto LAB_10b051f04;
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    uVar3 = *(undefined8 *)(param_1 + 0xa8);
    pcVar4 = *(code **)(param_10 + 0x10);
    lVar1 = param_10;
    break;
  case 8:
    if (param_11 == 0) goto LAB_10b051f04;
    uVar2 = *(undefined8 *)(param_1 + 0xb0);
    uVar3 = *(undefined8 *)(param_1 + 0xb8);
    pcVar4 = *(code **)(param_11 + 0x10);
    lVar1 = param_11;
    break;
  case 9:
    if (param_12 == 0) goto LAB_10b051f04;
    uVar2 = *(undefined8 *)(param_1 + 0xc0);
    uVar3 = *(undefined8 *)(param_1 + 200);
    pcVar4 = *(code **)(param_12 + 0x10);
    lVar1 = param_12;
    break;
  case 10:
    if (param_13 == 0) goto LAB_10b051f04;
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    uVar3 = *(undefined8 *)(param_1 + 0xd8);
    pcVar4 = *(code **)(param_13 + 0x10);
    lVar1 = param_13;
    break;
  default:
    goto LAB_10b051f04;
  }
  (*pcVar4)(lVar1,uVar2,uVar3);
LAB_10b051f04:
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b051f78; end: 10b0520c7; -[SCReplyConfiguration .cxx_destruct] */

void FUN_10b051f78(long param_1)

{
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 10b0520c8; end: 10b0523a7; -[SCPromptLensReplyParameters initWithCoder:] */

undefined1 * FUN_10b0520c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704d70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
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
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined8 *)((long)puVar1 + 0x80) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0523a8; end: 10b0526f3; -[SCPromptLensReplyParameters initWithLensId:promptId:promptEncryptionKey:flowType:promptCreatorId:promptReceiverUserId:overWrittenReplyUserId:promptCreatorName:responseId:responseEncryptionKey:enableCaptureButton:storyServerId:chatMessageId:tappableElementKey:mediaFilepath:overlayCacheKey:isVideo:] */

undefined8 *
FUN_10b0523a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined1 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain();
  _objc_retain();
  puStack_70 = PTR_PTR_112704d70;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_13;
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_19;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_20;
  }
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b0526f4; end: 10b052717; -[SCPromptLensReplyParameters copyWithZone:] */

undefined8 FUN_10b0526f4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b052718; end: 10b0528a3; -[SCPromptLensReplyParameters encodeWithCoder:] */

void FUN_10b052718(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110eeb138);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f530b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f530d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f530f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f53118);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f53138);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110f53158);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110f53178);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110f53198);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110f531b8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f531d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110f531f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                      &PTR____CFConstantStringClassReference_110f53218);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x70),
                      &PTR____CFConstantStringClassReference_110f53238);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x78),
                      &PTR____CFConstantStringClassReference_110f53258);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x80),
                      &PTR____CFConstantStringClassReference_110f53278);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110f53298);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0528a4; end: 10b0529bb; -[SCPromptLensReplyParameters hash] */

undefined8 * FUN_10b0528a4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_b0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_b0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_a8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_a0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_90 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uStack_60 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  uStack_38 = uVar1;
  func_0x000107c3191c(&uStack_b0,0x11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b052b94:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b052ba0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))))
    {
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
                    lVar5 = *(long *)((long)puVar3 + 0x48);
                    if ((lVar5 == *(long *)(param_3 + 0x48)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = *(long *)((long)puVar3 + 0x50);
                      if ((lVar5 == *(long *)(param_3 + 0x50)) ||
                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        lVar5 = *(long *)((long)puVar3 + 0x58);
                        if ((lVar5 == *(long *)(param_3 + 0x58)) ||
                           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                          lVar5 = *(long *)((long)puVar3 + 0x60);
                          if ((lVar5 == *(long *)(param_3 + 0x60)) ||
                             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                            lVar5 = *(long *)((long)puVar3 + 0x68);
                            if ((lVar5 == *(long *)(param_3 + 0x68)) ||
                               (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                              lVar5 = *(long *)((long)puVar3 + 0x70);
                              if ((lVar5 == *(long *)(param_3 + 0x70)) ||
                                 (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                lVar5 = *(long *)((long)puVar3 + 0x78);
                                if ((lVar5 == *(long *)(param_3 + 0x78)) ||
                                   (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                  puVar6 = *(undefined1 **)((long)puVar3 + 0x80);
                                  if (puVar6 != *(undefined1 **)(param_3 + 0x80)) {
                                    func_0x00010c071ae0();
                                    goto LAB_10b052ba0;
                                  }
                                  goto LAB_10b052b94;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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
LAB_10b052ba0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b0529bc; end: 10b052bbb; -[SCPromptLensReplyParameters isEqual:] */

long FUN_10b0529bc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b052b94:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b052ba0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
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
                    if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x50);
                      if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x58);
                        if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x60);
                          if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0x68);
                            if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                              lVar3 = *(long *)(param_1 + 0x70);
                              if ((lVar3 == *(long *)(param_3 + 0x70)) ||
                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                lVar3 = *(long *)(param_1 + 0x78);
                                if ((lVar3 == *(long *)(param_3 + 0x78)) ||
                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                  lVar3 = *(long *)(param_1 + 0x80);
                                  if (lVar3 != *(long *)(param_3 + 0x80)) {
                                    func_0x00010c071ae0();
                                    goto LAB_10b052ba0;
                                  }
                                  goto LAB_10b052b94;
                                }
                              }
                            }
                          }
                        }
                      }
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
LAB_10b052ba0:
  _objc_release(param_3);
  return lVar3;
}


