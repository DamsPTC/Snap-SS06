/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108ef981c; end: 108ef99a3; -[SCSendFlowSendingEvent isEqual:] */

long FUN_108ef981c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108ef997c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108ef9988;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
          (*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10))) &&
         (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
        ((*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28) &&
         (*(char *)(param_1 + 0x68) == *(char *)(param_3 + 0x68))))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x30);
        if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x38);
          if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x40);
            if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x48);
              if ((lVar3 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x50);
                if ((lVar3 == *(long *)(param_3 + 0x50)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x58);
                  if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x60);
                    if (lVar3 != *(long *)(param_3 + 0x60)) {
                      func_0x00010c071ae0();
                      goto LAB_108ef9988;
                    }
                    goto LAB_108ef997c;
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
LAB_108ef9988:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108ef99a4; end: 108ef9a7b; -[SCSendFlowSendingEvent matchSnap:story:chatMessage:] */

void FUN_108ef99a4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5);
    }
  }
  else if (lVar1 == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                 *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                 *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                 *(undefined8 *)(param_1 + 0x60),*(undefined1 *)(param_1 + 0x68));
    }
  }
  else if ((lVar1 == 0) && (param_3 != 0)) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined1 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ef9a7c; end: 108ef9af3; -[SCSendFlowSendingEvent .cxx_destruct] */

void FUN_108ef9a7c(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108ef9af4; end: 108ef9b3f; -[SCSendFlowTriggerEvent initWithPageType:triggerType:] */

void FUN_108ef9af4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ff2d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 108ef9b40; end: 108ef9b63; -[SCSendFlowTriggerEvent copyWithZone:] */

undefined8 FUN_108ef9b40(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ef9b64; end: 108ef9bbb; -[SCSendFlowTriggerEvent hash] */

undefined8 * FUN_108ef9b64(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 8);
  func_0x000107c3191c(&uStack_30,2);
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
      if ((((ulong)puVar2 & 1) == 0) || (*(long *)((long)puVar1 + 8) != *(long *)(param_3 + 8))) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(long *)((long)puVar1 + 0x10) == *(long *)(param_3 + 0x10));
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar3;
}



/* Entry: 108ef9bbc; end: 108ef9c53; -[SCSendFlowTriggerEvent isEqual:] */

bool FUN_108ef9bbc(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108ef9c54; end: 108ef9c5b; -[SCSendFlowTriggerEvent pageType] */

undefined8 FUN_108ef9c54(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ef9c5c; end: 108ef9c63; -[SCSendFlowTriggerEvent triggerType] */

undefined8 FUN_108ef9c5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108ef9c64; end: 108ef9dfb; -[SCSnapSenderDataModel initWithRecipients:groups:massSnapRecipients:phoneNumbers:storiesConfig:businessIds:additionalText:] */

undefined1 *
FUN_108ef9c64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

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
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126ff2d8;
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
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ef9dfc; end: 108ef9e1f; -[SCSnapSenderDataModel copyWithZone:] */

undefined8 FUN_108ef9dfc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ef9e20; end: 108ef9ecf; -[SCSnapSenderDataModel hash] */

undefined8 * FUN_108ef9e20(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108ef9fc8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108ef9fd4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x28);
              if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x30);
                if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  puVar6 = *(undefined1 **)((long)puVar3 + 0x38);
                  if (puVar6 != *(undefined1 **)(param_3 + 0x38)) {
                    func_0x00010c071ae0();
                    goto LAB_108ef9fd4;
                  }
                  goto LAB_108ef9fc8;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108ef9fd4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108ef9ed0; end: 108ef9fef; -[SCSnapSenderDataModel isEqual:] */

long FUN_108ef9ed0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108ef9fc8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108ef9fd4;
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
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x38);
                  if (lVar3 != *(long *)(param_3 + 0x38)) {
                    func_0x00010c071ae0();
                    goto LAB_108ef9fd4;
                  }
                  goto LAB_108ef9fc8;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108ef9fd4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108ef9ff0; end: 108ef9ff7; -[SCSnapSenderDataModel recipients] */

undefined8 FUN_108ef9ff0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ef9ff8; end: 108ef9fff; -[SCSnapSenderDataModel groups] */

undefined8 FUN_108ef9ff8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108efa000; end: 108efa007; -[SCSnapSenderDataModel massSnapRecipients] */

undefined8 FUN_108efa000(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108efa008; end: 108efa00f; -[SCSnapSenderDataModel phoneNumbers] */

undefined8 FUN_108efa008(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108efa010; end: 108efa017; -[SCSnapSenderDataModel storiesConfig] */

undefined8 FUN_108efa010(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108efa018; end: 108efa01f; -[SCSnapSenderDataModel businessIds] */

undefined8 FUN_108efa018(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108efa020; end: 108efa027; -[SCSnapSenderDataModel additionalText] */

undefined8 FUN_108efa020(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108efa028; end: 108efa093; -[SCSnapSenderDataModel .cxx_destruct] */

void FUN_108efa028(long param_1)

{
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



/* Entry: 108efa094; end: 108efa09b; -[SCScanServices scanScopeLauncher] */

undefined8 FUN_108efa094(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108efa09c; end: 108efa0a7; -[SCScanServices .cxx_destruct] */

void FUN_108efa09c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108efa0a8; end: 108efa1af; -[SCChatMediaDataModel initWithMedia:snapDocKey:snapDoc:mediaMetadata:] */

undefined1 *
FUN_108efa0a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126ff2e8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
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



/* Entry: 108efa1b0; end: 108efa1d3; -[SCChatMediaDataModel copyWithZone:] */

undefined8 FUN_108efa1b0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108efa1d4; end: 108efa25f; -[SCChatMediaDataModel hash] */

undefined8 * FUN_108efa1d4(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_108efa310:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108efa31c;
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
              goto LAB_108efa31c;
            }
            goto LAB_108efa310;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108efa31c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108efa260; end: 108efa337; -[SCChatMediaDataModel isEqual:] */

long FUN_108efa260(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108efa310:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108efa31c;
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
              goto LAB_108efa31c;
            }
            goto LAB_108efa310;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108efa31c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108efa338; end: 108efa33f; -[SCChatMediaDataModel media] */

undefined8 FUN_108efa338(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108efa340; end: 108efa347; -[SCChatMediaDataModel snapDocKey] */

undefined8 FUN_108efa340(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108efa348; end: 108efa34f; -[SCChatMediaDataModel snapDoc] */

undefined8 FUN_108efa348(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108efa350; end: 108efa357; -[SCChatMediaDataModel mediaMetadata] */

undefined8 FUN_108efa350(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108efa358; end: 108efa39f; -[SCChatMediaDataModel .cxx_destruct] */

void FUN_108efa358(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108efa3a0; end: 108efa3ab; +[SendToFanPassStoryIdUtils fanPassSuffix] */

undefined ** FUN_108efa3a0(void)

{
  return &PTR____CFConstantStringClassReference_110f03dd8;
}



/* Entry: 108efa3ac; end: 108efa3b3; +[SendToFanPassStoryIdUtils fanPassStoryVariant] */

undefined8 FUN_108efa3ac(void)

{
  return 1;
}



/* Entry: 108efa3b4; end: 108efa433; +[SendToFanPassStoryIdUtils toFanPassStoryId:] */

void FUN_108efa3b4(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  
  if (param_3 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    _objc_retain(param_3);
    func_0x00010bfa0ba0(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = param_3;
    func_0x00010c25ce40(param_3,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108efa434; end: 108efa4e7; +[SendToFanPassStoryIdUtils toRegularStoryId:] */

void FUN_108efa434(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  if (param_3 == (undefined **)0x0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    func_0x00010bfa0ba0(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = param_3;
    func_0x00010bfdcf80(param_3,param_2,param_1);
    ppuVar3 = param_3;
    if ((int)ppuVar1 == 0) {
      _objc_retain(param_3);
    }
    else {
      ppuVar1 = param_3;
      func_0x00010c08fa60(param_3);
      lVar2 = param_1;
      func_0x00010c08fa60(param_1);
      func_0x00010c260c20(param_3,param_2,(long)ppuVar1 - lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 108efa4e8; end: 108efa55b; +[SendToFanPassStoryIdUtils isFanPassStoryId:] */

long FUN_108efa4e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    func_0x00010bfa0ba0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bfdcf80(param_3,param_2,param_1);
    _objc_release(param_3);
    _objc_release(param_1);
    return lVar1;
  }
  return 0;
}



/* Entry: 108efa55c; end: 108efa59f; +[SendToFanPassStoryIdUtils isFanPassStorySnap:] */

bool FUN_108efa55c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010c25b820(param_3);
    func_0x00010bfa0ac0(param_1);
    return param_3 == param_1;
  }
  return false;
}



/* Entry: 108efa5a0; end: 108efa5d7; -[SCLegacySendToAttribution initWithSnapSource:messageType:sourcePage:] */

void FUN_108efa5a0(void)

{
  func_0x00010c048740();
  return;
}



/* Entry: 108efa5d8; end: 108efa61b; -[SCLegacySendToAttribution initWithSnapSource:messageType:sourcePage:isEligibleForSpotlight:] */

void FUN_108efa5d8(void)

{
  func_0x00010c048740();
  return;
}



/* Entry: 108efa61c; end: 108efa657; -[SCLegacySendToAttribution initWithSnapSource:messageType:sourcePage:isLensShare:lensIds:] */

void FUN_108efa61c(void)

{
  func_0x00010c048740();
  return;
}



/* Entry: 108efa658; end: 108efa68f; -[SCLegacySendToAttribution initWithSnapSource:messageType:sourcePage:contextSessionId:] */

void FUN_108efa658(void)

{
  func_0x00010c048740();
  return;
}



/* Entry: 108efa690; end: 108efa7fb; -[SCLegacySendToAttribution initWithSnapSource:messageType:sourcePage:captureSessionId:contextSessionId:contentId:lensIds:isSponsoredSnap:spectaclesSnapsOnly:isMusicSnap:isImageSnap:isBatchCapture:isMultiSelection:isShortVideo:isEligibleForSpotlight:isRemixingSpotlightVideo:isCameosSnap:isLensShare:isTwoDTryOnSnap:shouldDisplayPolaroidEducation:] */

undefined8
FUN_108efa690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined1 param_11,undefined1 param_12,
             undefined1 param_13)

{
  undefined8 uVar1;
  
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  uVar1 = param_6;
  _objc_retain(param_6);
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044560(param_1,param_2,uVar1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11,param_12,param_13);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108efa7fc; end: 108efa99f; -[SCLegacySendToConfiguration initWithIncludeRecents:includeGroups:includeStories:includeSelectableContacts:hasLensPreselection:isPromptLensWithRestrictedDestinations:isPlanStickerWithRestrictedDestinations:userIdsToExclude:topicTracker:friendsInThisSnapUserIdsObservable:thumbnailMedia:snapCaptureLocation:userMentionsCount:creationTime:] */

undefined8 *
FUN_108efa7fc(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_17);
  puStack_68 = PTR_PTR_1126ff2f0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
    *(undefined1 *)((long)puVar1 + 0xb) = param_6;
    *(undefined1 *)((long)puVar1 + 0xc) = param_7;
    *(undefined1 *)((long)puVar1 + 0xd) = param_8;
    *(undefined1 *)((long)puVar1 + 0xe) = param_9;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar2 = puVar1[3];
    puVar1[3] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[4];
    puVar1[4] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[5];
    puVar1[5] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[6];
    puVar1[6] = param_15;
    _objc_release(uVar2);
    puVar1[8] = param_16;
    _objc_retain(param_17);
    uVar2 = puVar1[7];
    puVar1[7] = param_17;
    _objc_release(uVar2);
  }
  _objc_release(param_17);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  return puVar1;
}



/* Entry: 108efa9a0; end: 108efa9db; -[SCLegacySendToConfiguration initWithIncludeRecents:includeGroups:includeStories:includeSelectableContacts:] */

void FUN_108efa9a0(void)

{
  func_0x00010c01d660();
  return;
}



/* Entry: 108efa9dc; end: 108efa9e3; -[SCLegacySendToConfiguration includeRecents] */

undefined1 FUN_108efa9dc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108efa9e4; end: 108efa9eb; -[SCLegacySendToConfiguration includeGroups] */

undefined1 FUN_108efa9e4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108efa9ec; end: 108efa9f3; -[SCLegacySendToConfiguration includeStories] */

undefined1 FUN_108efa9ec(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108efa9f4; end: 108efa9fb; -[SCLegacySendToConfiguration includeSelectableContacts] */

undefined1 FUN_108efa9f4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 108efa9fc; end: 108efaa03; -[SCLegacySendToConfiguration hasLensPreselection] */

undefined1 FUN_108efa9fc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 108efaa04; end: 108efaa0b; -[SCLegacySendToConfiguration isPromptLensWithRestrictedDestinations] */

undefined1 FUN_108efaa04(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 108efaa0c; end: 108efaa13; -[SCLegacySendToConfiguration isPlanStickerWithRestrictedDestinations] */

undefined1 FUN_108efaa0c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 108efaa14; end: 108efaa1b; -[SCLegacySendToConfiguration userIdsToExclude] */

undefined8 FUN_108efaa14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108efaa1c; end: 108efaa23; -[SCLegacySendToConfiguration topicTracker] */

undefined8 FUN_108efaa1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108efaa24; end: 108efaa2b; -[SCLegacySendToConfiguration friendsInThisSnapUserIdsObservable] */

undefined8 FUN_108efaa24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108efaa2c; end: 108efaa33; -[SCLegacySendToConfiguration thumbnailMedia] */

undefined8 FUN_108efaa2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108efaa34; end: 108efaa3b; -[SCLegacySendToConfiguration snapCaptureLocation] */

undefined8 FUN_108efaa34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108efaa3c; end: 108efaa43; -[SCLegacySendToConfiguration creationTime] */

undefined8 FUN_108efaa3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108efaa44; end: 108efaa4b; -[SCLegacySendToConfiguration userMentionsCount] */

undefined8 FUN_108efaa44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108efaa4c; end: 108efaaab; -[SCLegacySendToConfiguration .cxx_destruct] */

void FUN_108efaa4c(long param_1)

{
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



/* Entry: 108efaaac; end: 108efac83; -[SCLegacySendToScope initWithAttribution:configuration:uiContainer:previewViewModel:contentConfiguration:replyParameters:shareSheetConfiguration:workflowDelegate:preSelectedItems:showSendToTray:] */

undefined8 *
FUN_108efaaac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126ff2f8;
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
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[10];
    puVar1[10] = param_9;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 7,param_10);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 9) = param_12;
  }
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



/* Entry: 108efac84; end: 108efac8b; -[SCLegacySendToScope attribution] */

undefined8 FUN_108efac84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108efac8c; end: 108efac93; -[SCLegacySendToScope configuration] */

undefined8 FUN_108efac8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108efac94; end: 108efac9b; -[SCLegacySendToScope uiContainer] */

undefined8 FUN_108efac94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108efac9c; end: 108efaca3; -[SCLegacySendToScope previewViewModel] */

undefined8 FUN_108efac9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108efaca4; end: 108efacab; -[SCLegacySendToScope contentConfiguration] */

undefined8 FUN_108efaca4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108efacac; end: 108efacc3; -[SCLegacySendToScope workflowDelegate] */

void FUN_108efacac(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108efacc4; end: 108efaccb; -[SCLegacySendToScope replyParameters] */

undefined8 FUN_108efacc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108efaccc; end: 108efacd3; -[SCLegacySendToScope preSelectedItems] */

undefined8 FUN_108efaccc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108efacd4; end: 108efacdb; -[SCLegacySendToScope willRelaunch] */

undefined1 FUN_108efacd4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108efacdc; end: 108eface3; -[SCLegacySendToScope setWillRelaunch:] */

void FUN_108efacdc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108eface4; end: 108efaceb; -[SCLegacySendToScope shareSheetConfiguration] */

undefined8 FUN_108eface4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108efacec; end: 108efacf3; -[SCLegacySendToScope showSendToTray] */

undefined1 FUN_108efacec(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108efacf4; end: 108efad73; -[SCLegacySendToScope .cxx_destruct] */

void FUN_108efacf4(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108efad74; end: 108efaf3b; -[SCLegacySendToSelection initWithRecipients:groups:massSnapRecipients:phoneNumbers:externalDestinations:storiesConfig:businessIds:additionalText:] */

undefined1 *
FUN_108efad74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

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
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126ff300;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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



/* Entry: 108efaf3c; end: 108efaf43; -[SCLegacySendToSelection recipients] */

undefined8 FUN_108efaf3c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108efaf44; end: 108efaf4b; -[SCLegacySendToSelection groups] */

undefined8 FUN_108efaf44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108efaf4c; end: 108efaf53; -[SCLegacySendToSelection massSnapRecipients] */

undefined8 FUN_108efaf4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108efaf54; end: 108efaf5b; -[SCLegacySendToSelection phoneNumbers] */

undefined8 FUN_108efaf54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108efaf5c; end: 108efaf63; -[SCLegacySendToSelection externalDestinations] */

undefined8 FUN_108efaf5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108efaf64; end: 108efaf6b; -[SCLegacySendToSelection storiesConfig] */

undefined8 FUN_108efaf64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108efaf6c; end: 108efaf73; -[SCLegacySendToSelection businessIds] */

undefined8 FUN_108efaf6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108efaf74; end: 108efaf7b; -[SCLegacySendToSelection additionalText] */

undefined8 FUN_108efaf74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108efaf7c; end: 108efaff3; -[SCLegacySendToSelection .cxx_destruct] */

void FUN_108efaf7c(long param_1)

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



/* Entry: 108efaff4; end: 108efb1fb; -[SCLegacySendToAttribution initWithSendToSessionId:snapSource:messageType:sourcePage:captureSessionId:contextSessionId:contentId:lensIds:isSponsoredSnap:spectaclesSnapsOnly:isMusicSnap:isImageSnap:isBatchCapture:isMultiSelection:isShortVideo:isEligibleForSpotlight:isRemixingSpotlightVideo:isCameosSnap:isLensShare:isTwoDTryOnSnap:shouldDisplayPolaroidEducation:] */

undefined8 *
FUN_108efaff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
             undefined4 param_13,undefined1 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126ff308;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    puVar1[4] = param_4;
    puVar1[5] = param_5;
    puVar1[6] = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_11;
    *(undefined1 *)((long)puVar1 + 9) = param_11._1_1_;
    *(undefined1 *)((long)puVar1 + 10) = param_11._2_1_;
    *(undefined1 *)((long)puVar1 + 0xb) = param_11._3_1_;
    *(undefined1 *)((long)puVar1 + 0xc) = (undefined1)param_12;
    *(undefined1 *)((long)puVar1 + 0xd) = param_12._1_1_;
    *(undefined1 *)((long)puVar1 + 0xe) = param_12._2_1_;
    *(undefined1 *)((long)puVar1 + 0xf) = param_12._3_1_;
    *(undefined1 *)(puVar1 + 2) = (undefined1)param_13;
    *(undefined1 *)((long)puVar1 + 0x11) = param_13._1_1_;
    *(undefined1 *)((long)puVar1 + 0x12) = param_13._2_1_;
    *(undefined1 *)((long)puVar1 + 0x13) = param_13._3_1_;
    *(undefined1 *)((long)puVar1 + 0x14) = param_14;
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108efb1fc; end: 108efb21f; -[SCLegacySendToAttribution copyWithZone:] */

undefined8 FUN_108efb1fc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108efb220; end: 108efb347; -[SCLegacySendToAttribution hash] */

undefined8 * FUN_108efb220(long param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  ushort uVar8;
  ushort uVar9;
  undefined4 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_d0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_c8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_c0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  lVar6 = *(long *)(param_1 + 0x30);
  uStack_b0 = *(undefined8 *)(param_1 + 0x38);
  lStack_b8 = -lVar6;
  if (-1 < lVar6) {
    lStack_b8 = lVar6;
  }
  uStack_d0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_a8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_a0 = uVar3;
  func_0x00010bfde980();
  uVar10 = *(undefined4 *)(param_1 + 8);
  uVar11 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar10 >> 0x18),
                                           (uint6)(byte)((uint)uVar10 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar10) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar10 >> 8),(short)uVar11);
  uVar12 = CONCAT44((int)(uVar11 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar11 = CONCAT26((short)(uVar12 >> 0x30),CONCAT24((short)(uVar11 >> 0x20),(int)uVar12)) &
           0xff01ff01ffffffff;
  uVar8 = (ushort)(uVar11 >> 0x30);
  uStack_90 = (ulong)uVar1 & 0xff;
  uStack_88 = uVar11 >> 0x10 & 0xff;
  uStack_80 = (ulong)CONCAT24(uVar8,(uint)(ushort)(uVar11 >> 0x20)) & 0xffffffff;
  uStack_78 = (ulong)uVar8;
  uVar10 = *(undefined4 *)(param_1 + 0xc);
  uVar12 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar10 >> 0x18),
                                           (uint6)(byte)((uint)uVar10 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar10) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar10 >> 8),(short)uVar12);
  uVar11 = CONCAT44((int)(uVar12 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar11 = CONCAT26((short)(uVar11 >> 0x30),CONCAT24((short)(uVar12 >> 0x20),(int)uVar11)) &
           0xff01ff01ffffffff;
  uVar8 = (ushort)(uVar11 >> 0x30);
  uStack_70 = (ulong)uVar1 & 0xff;
  uStack_68 = uVar11 >> 0x10 & 0xff;
  uStack_60 = (ulong)CONCAT24(uVar8,(uint)(ushort)(uVar11 >> 0x20)) & 0xffffffff;
  uStack_58 = (ulong)uVar8;
  uVar10 = *(undefined4 *)(param_1 + 0x10);
  uVar11 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar10 >> 0x18),
                                           (uint6)(byte)((uint)uVar10 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar10) & 0xffffffffffffff01;
  uVar12 = CONCAT44((int)(uVar11 >> 0x20),(uint)CONCAT12((char)((uint)uVar10 >> 8),(short)uVar11)) &
           0xffffffffff01ffff;
  uVar10 = (undefined4)uVar12;
  uVar11 = CONCAT26((short)(uVar12 >> 0x30),CONCAT24((short)(uVar11 >> 0x20),uVar10)) &
           0xff01ff01ffffffff;
  uVar8 = (ushort)(uVar11 >> 0x10);
  uVar9 = (ushort)(uVar11 >> 0x30);
  uStack_50 = (ulong)(CONCAT24(uVar8,uVar10) & 0xffff0000ffff) & 0xffffffff;
  uStack_48 = (ulong)uVar8;
  uStack_40 = (ulong)CONCAT24(uVar9,(uint)(ushort)(uVar11 >> 0x20)) & 0xffffffff;
  uStack_38 = (ulong)uVar9;
  uStack_30 = (ulong)*(byte *)(param_1 + 0x14);
  uStack_98 = uVar2;
  func_0x000107c3191c(&uStack_d0,0x15);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_108efb510:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108efb51c;
    puVar7 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if (((((((ulong)puVar5 & 1) != 0) &&
          ((((*(long *)((long)puVar4 + 0x20) == *(long *)(param_3 + 0x20) &&
             (*(long *)((long)puVar4 + 0x28) == *(long *)(param_3 + 0x28))) &&
            (*(long *)((long)puVar4 + 0x30) == *(long *)(param_3 + 0x30))) &&
           ((*(char *)((long)puVar4 + 8) == param_3[8] &&
            (*(char *)((long)puVar4 + 9) == param_3[9])))))) &&
         (*(char *)((long)puVar4 + 10) == param_3[10])) &&
        (((*(char *)((long)puVar4 + 0xb) == param_3[0xb] &&
          (*(char *)((long)puVar4 + 0xc) == param_3[0xc])) &&
         ((*(char *)((long)puVar4 + 0xd) == param_3[0xd] &&
          (((*(char *)((long)puVar4 + 0xe) == param_3[0xe] &&
            (*(char *)((long)puVar4 + 0xf) == param_3[0xf])) &&
           (*(char *)((long)puVar4 + 0x10) == param_3[0x10])))))))) &&
       (((*(char *)((long)puVar4 + 0x11) == param_3[0x11] &&
         (*(char *)((long)puVar4 + 0x12) == param_3[0x12])) &&
        ((*(char *)((long)puVar4 + 0x13) == param_3[0x13] &&
         (*(char *)((long)puVar4 + 0x14) == param_3[0x14])))))) {
      lVar6 = *(long *)((long)puVar4 + 0x18);
      if ((lVar6 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        lVar6 = *(long *)((long)puVar4 + 0x38);
        if ((lVar6 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = *(long *)((long)puVar4 + 0x40);
          if ((lVar6 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            lVar6 = *(long *)((long)puVar4 + 0x48);
            if ((lVar6 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
              puVar7 = *(undefined1 **)((long)puVar4 + 0x50);
              if (puVar7 != *(undefined1 **)(param_3 + 0x50)) {
                func_0x00010c071ae0();
                goto LAB_108efb51c;
              }
              goto LAB_108efb510;
            }
          }
        }
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_108efb51c:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 108efb348; end: 108efb537; -[SCLegacySendToAttribution isEqual:] */

long FUN_108efb348(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108efb510:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108efb51c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((((uVar2 & 1) != 0) &&
          ((((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
             (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
            (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
           ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
            (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))))) &&
         (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
        (((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
          (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))) &&
         ((*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd) &&
          (((*(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe) &&
            (*(char *)(param_1 + 0xf) == *(char *)(param_3 + 0xf))) &&
           (*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10))))))))) &&
       (((*(char *)(param_1 + 0x11) == *(char *)(param_3 + 0x11) &&
         (*(char *)(param_1 + 0x12) == *(char *)(param_3 + 0x12))) &&
        ((*(char *)(param_1 + 0x13) == *(char *)(param_3 + 0x13) &&
         (*(char *)(param_1 + 0x14) == *(char *)(param_3 + 0x14))))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x38);
        if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x40);
          if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x48);
            if ((lVar3 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x50);
              if (lVar3 != *(long *)(param_3 + 0x50)) {
                func_0x00010c071ae0();
                goto LAB_108efb51c;
              }
              goto LAB_108efb510;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108efb51c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108efb538; end: 108efb53f; -[SCLegacySendToAttribution sendToSessionId] */

undefined8 FUN_108efb538(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108efb540; end: 108efb547; -[SCLegacySendToAttribution snapSource] */

undefined8 FUN_108efb540(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108efb548; end: 108efb54f; -[SCLegacySendToAttribution messageType] */

undefined8 FUN_108efb548(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108efb550; end: 108efb557; -[SCLegacySendToAttribution sourcePage] */

undefined8 FUN_108efb550(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108efb558; end: 108efb55f; -[SCLegacySendToAttribution captureSessionId] */

undefined8 FUN_108efb558(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108efb560; end: 108efb567; -[SCLegacySendToAttribution contextSessionId] */

undefined8 FUN_108efb560(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108efb568; end: 108efb56f; -[SCLegacySendToAttribution contentId] */

undefined8 FUN_108efb568(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108efb570; end: 108efb577; -[SCLegacySendToAttribution lensIds] */

undefined8 FUN_108efb570(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108efb578; end: 108efb57f; -[SCLegacySendToAttribution isSponsoredSnap] */

undefined1 FUN_108efb578(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108efb580; end: 108efb587; -[SCLegacySendToAttribution spectaclesSnapsOnly] */

undefined1 FUN_108efb580(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108efb588; end: 108efb58f; -[SCLegacySendToAttribution isMusicSnap] */

undefined1 FUN_108efb588(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108efb590; end: 108efb597; -[SCLegacySendToAttribution isImageSnap] */

undefined1 FUN_108efb590(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}


