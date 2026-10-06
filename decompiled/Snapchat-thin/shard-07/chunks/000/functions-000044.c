/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1050d60cc; end: 1050d60db; -[SCCharmsCharm deleted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1050d60cc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11271bce8);
}



/* Entry: 1050d60dc; end: 1050d614b; -[SCCharmsCharm .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050d60dc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271bcd4,0);
  _objc_storeStrong(param_1 + _DAT_11271bcd0,0);
  _objc_storeStrong(param_1 + _DAT_11271bccc,0);
  _objc_storeStrong(param_1 + _DAT_11271bcc8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271bcbc,0);
  return;
}



/* Entry: 1050d614c; end: 1050d623b; -[SCCharmsHiddenCharm initWithOwnerIdentifier:charmIdentifier:ownerType:displayName:hiddenAtTsMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1050d614c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126e60f0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271bcec);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271bcec) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + (long)_DAT_11271bcf0) = param_4;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271bcf4) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271bcf8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271bcf8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271bcfc) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050d623c; end: 1050d625f; -[SCCharmsHiddenCharm copyWithZone:] */

undefined8 FUN_1050d623c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1050d6260; end: 1050d630b; -[SCCharmsHiddenCharm hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1050d6260(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271bcec);
  func_0x00010bfde980();
  lStack_48 = (long)*(int *)(param_1 + _DAT_11271bcf0);
  lVar5 = *(long *)(param_1 + _DAT_11271bcf4);
  lStack_40 = -lVar5;
  if (-1 < lVar5) {
    lStack_40 = lVar5;
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271bcf8);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + _DAT_11271bcfc);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1050d63e4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1050d63f0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(int *)((long)puVar3 + (long)_DAT_11271bcf0) == *(int *)(param_3 + _DAT_11271bcf0) &&
         (*(long *)((long)puVar3 + (long)_DAT_11271bcf4) == *(long *)(param_3 + _DAT_11271bcf4))) &&
        (*(long *)((long)puVar3 + (long)_DAT_11271bcfc) == *(long *)(param_3 + _DAT_11271bcfc))))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_11271bcec);
      if ((lVar5 == *(long *)(param_3 + _DAT_11271bcec)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
         ) {
        puVar6 = *(undefined1 **)((long)puVar3 + (long)_DAT_11271bcf8);
        if (puVar6 != *(undefined1 **)(param_3 + _DAT_11271bcf8)) {
          func_0x00010c071ae0();
          goto LAB_1050d63f0;
        }
        goto LAB_1050d63e4;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1050d63f0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1050d630c; end: 1050d640b; -[SCCharmsHiddenCharm isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1050d630c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1050d63e4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1050d63f0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(int *)(param_1 + (long)_DAT_11271bcf0) == *(int *)(param_3 + (long)_DAT_11271bcf0) &&
         (*(long *)(param_1 + (long)_DAT_11271bcf4) == *(long *)(param_3 + (long)_DAT_11271bcf4)))
        && (*(long *)(param_1 + (long)_DAT_11271bcfc) == *(long *)(param_3 + (long)_DAT_11271bcfc)))
       )) {
      lVar3 = *(long *)(param_1 + (long)_DAT_11271bcec);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_11271bcec)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_11271bcf8);
        if (lVar3 != *(long *)(param_3 + (long)_DAT_11271bcf8)) {
          func_0x00010c071ae0();
          goto LAB_1050d63f0;
        }
        goto LAB_1050d63e4;
      }
    }
    lVar3 = 0;
  }
LAB_1050d63f0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1050d640c; end: 1050d641b; -[SCCharmsHiddenCharm ownerIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050d640c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271bcec);
}



/* Entry: 1050d641c; end: 1050d642b; -[SCCharmsHiddenCharm charmIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1050d641c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11271bcf0);
}



/* Entry: 1050d642c; end: 1050d643b; -[SCCharmsHiddenCharm ownerType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050d642c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271bcf4);
}



/* Entry: 1050d643c; end: 1050d644b; -[SCCharmsHiddenCharm displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050d643c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271bcf8);
}



/* Entry: 1050d644c; end: 1050d645b; -[SCCharmsHiddenCharm hiddenAtTsMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050d644c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271bcfc);
}



/* Entry: 1050d645c; end: 1050d649b; -[SCCharmsHiddenCharm .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050d645c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271bcf8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271bcec,0);
  return;
}



/* Entry: 1050d649c; end: 1050d6557; -[SCCharmsSyncMetadata initWithOwnerIdentifier:syncToken:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1050d649c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e60f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271bd00);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271bd00) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271bd04);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271bd04) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050d6558; end: 1050d657b; -[SCCharmsSyncMetadata copyWithZone:] */

undefined8 FUN_1050d6558(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1050d657c; end: 1050d65ff; -[SCCharmsSyncMetadata hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1050d657c(long param_1,undefined8 param_2,undefined8 *param_3)

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
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271bd00);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271bd04);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1050d6690:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1050d669c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_11271bd00);
      if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11271bd00)) ||
         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined8 **)((long)puVar3 + (long)_DAT_11271bd04);
        if (puVar6 != *(undefined8 **)((long)param_3 + (long)_DAT_11271bd04)) {
          func_0x00010c071ae0();
          goto LAB_1050d669c;
        }
        goto LAB_1050d6690;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1050d669c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1050d6600; end: 1050d66b7; -[SCCharmsSyncMetadata isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1050d6600(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1050d6690:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1050d669c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + (long)_DAT_11271bd00);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_11271bd00)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_11271bd04);
        if (lVar3 != *(long *)(param_3 + (long)_DAT_11271bd04)) {
          func_0x00010c071ae0();
          goto LAB_1050d669c;
        }
        goto LAB_1050d6690;
      }
    }
    lVar3 = 0;
  }
LAB_1050d669c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1050d66b8; end: 1050d66c7; -[SCCharmsSyncMetadata ownerIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050d66b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271bd00);
}



/* Entry: 1050d66c8; end: 1050d66d7; -[SCCharmsSyncMetadata syncToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050d66c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271bd04);
}



/* Entry: 1050d66d8; end: 1050d6717; -[SCCharmsSyncMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050d66d8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271bd04,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271bd00,0);
  return;
}



/* Entry: 1050d6718; end: 1050d67c3; -[SCCharmsDescription initWithDescriptionTemplate:descriptionVariables:] */

undefined1 *
FUN_1050d6718(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6100;
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



/* Entry: 1050d67c4; end: 1050d67e7; -[SCCharmsDescription copyWithZone:] */

undefined8 FUN_1050d67c4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1050d67e8; end: 1050d685b; -[SCCharmsDescription hash] */

undefined8 * FUN_1050d67e8(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1050d68dc:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1050d68e8;
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
          goto LAB_1050d68e8;
        }
        goto LAB_1050d68dc;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1050d68e8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1050d685c; end: 1050d6903; -[SCCharmsDescription isEqual:] */

long FUN_1050d685c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1050d68dc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1050d68e8;
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
          goto LAB_1050d68e8;
        }
        goto LAB_1050d68dc;
      }
    }
    lVar3 = 0;
  }
LAB_1050d68e8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1050d6904; end: 1050d690b; -[SCCharmsDescription descriptionTemplate] */

undefined8 FUN_1050d6904(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1050d690c; end: 1050d6913; -[SCCharmsDescription descriptionVariables] */

undefined8 FUN_1050d690c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1050d6914; end: 1050d6943; -[SCCharmsDescription .cxx_destruct] */

void FUN_1050d6914(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050d6944; end: 1050d69d3; -[SCCharmsDescriptionVariable initWithValue:groupParticipantID:longestStreakValue:] */

undefined1 *
FUN_1050d6944(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6108;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1050d69d4; end: 1050d69f7; -[SCCharmsDescriptionVariable copyWithZone:] */

undefined8 FUN_1050d69d4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1050d69f8; end: 1050d6a73; -[SCCharmsDescriptionVariable hash] */

long * FUN_1050d69f8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  plVar2 = &lStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_40 = (long)*(int *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x18);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  uStack_38 = uVar1;
  func_0x000100505190(&lStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar2 != (long *)param_3) {
    puVar5 = (undefined1 *)0x0;
    if ((plVar2 == (long *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1050d6b08;
    puVar5 = (undefined1 *)plVar2;
    _objc_opt_class(plVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(int *)((long)plVar2 + 8) != *(int *)(param_3 + 8) ||
        (*(long *)((long)plVar2 + 0x18) != *(long *)(param_3 + 0x18))))) {
      puVar5 = (undefined1 *)0x0;
      goto LAB_1050d6b08;
    }
    puVar5 = *(undefined1 **)((long)plVar2 + 0x10);
    if (puVar5 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_1050d6b08;
    }
  }
  puVar5 = (undefined1 *)0x1;
LAB_1050d6b08:
  _objc_release(param_3);
  return (long *)puVar5;
}



/* Entry: 1050d6a74; end: 1050d6b23; -[SCCharmsDescriptionVariable isEqual:] */

long FUN_1050d6a74(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1050d6b08;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(int *)(param_1 + 8) != *(int *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_1050d6b08;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_1050d6b08;
    }
  }
  lVar3 = 1;
LAB_1050d6b08:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1050d6b24; end: 1050d6b2b; -[SCCharmsDescriptionVariable value] */

undefined4 FUN_1050d6b24(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 1050d6b2c; end: 1050d6b33; -[SCCharmsDescriptionVariable groupParticipantID] */

undefined8 FUN_1050d6b2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1050d6b34; end: 1050d6b3b; -[SCCharmsDescriptionVariable longestStreakValue] */

undefined8 FUN_1050d6b34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1050d6b3c; end: 1050d6b47; -[SCCharmsDescriptionVariable .cxx_destruct] */

void FUN_1050d6b3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1050d6b48; end: 1050d6cdf; -[SCCharmsGraphic initWithPreviewStaticImageStickerID:previewEmoji:detailSolomojiTemplateID:detailFriendmojiTemplateID:bitmojiUserID1:bitmojiUserID2:previewBitmojiSelfieUserID:] */

undefined1 *
FUN_1050d6b48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126e6110;
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



/* Entry: 1050d6ce0; end: 1050d6d03; -[SCCharmsGraphic copyWithZone:] */

undefined8 FUN_1050d6ce0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1050d6d04; end: 1050d6db3; -[SCCharmsGraphic hash] */

undefined8 * FUN_1050d6d04(long param_1,undefined8 param_2,undefined1 *param_3)

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
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1050d6eac:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1050d6eb8;
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
                    goto LAB_1050d6eb8;
                  }
                  goto LAB_1050d6eac;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1050d6eb8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1050d6db4; end: 1050d6ed3; -[SCCharmsGraphic isEqual:] */

long FUN_1050d6db4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1050d6eac:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1050d6eb8;
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
                    goto LAB_1050d6eb8;
                  }
                  goto LAB_1050d6eac;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1050d6eb8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1050d6ed4; end: 1050d6edb; -[SCCharmsGraphic previewStaticImageStickerID] */

undefined8 FUN_1050d6ed4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1050d6edc; end: 1050d6ee3; -[SCCharmsGraphic previewEmoji] */

undefined8 FUN_1050d6edc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1050d6ee4; end: 1050d6eeb; -[SCCharmsGraphic detailSolomojiTemplateID] */

undefined8 FUN_1050d6ee4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1050d6eec; end: 1050d6ef3; -[SCCharmsGraphic detailFriendmojiTemplateID] */

undefined8 FUN_1050d6eec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1050d6ef4; end: 1050d6efb; -[SCCharmsGraphic bitmojiUserID1] */

undefined8 FUN_1050d6ef4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1050d6efc; end: 1050d6f03; -[SCCharmsGraphic bitmojiUserID2] */

undefined8 FUN_1050d6efc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1050d6f04; end: 1050d6f0b; -[SCCharmsGraphic previewBitmojiSelfieUserID] */

undefined8 FUN_1050d6f04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1050d6f0c; end: 1050d6f77; -[SCCharmsGraphic .cxx_destruct] */

void FUN_1050d6f0c(long param_1)

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



/* Entry: 1050d6f78; end: 1050d6fdb;  */

undefined ** FUN_1050d6f78(void)

{
  int iVar1;
  
  if ((bRam0000000113817f20 & 1) == 0) {
    iVar1 = 0x13817f20;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_1130c2c90,0x100000000);
      ___cxa_guard_release(0x113817f20);
    }
  }
  return &PTR_PTR_1130c2c90;
}



/* Entry: 1050d6fdc; end: 1050d7063;  */

void FUN_1050d6fdc(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050d7064; end: 1050d70ef;  */

void FUN_1050d7064(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c0f0720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c0f0720(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1050d70f0; end: 1050d71a7;  */

undefined8 FUN_1050d70f0(void)

{
  int iVar1;
  
  if ((bRam0000000113817f98 & 1) == 0) {
    iVar1 = 0x13817f98;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113817f30 = 0xe;
      pcRam0000000113817f38 = "charmIdentifier";
      uRam0000000113817f40 = 0x10001;
      pcRam0000000113817f48 = FUN_1050d71a8;
      pcRam0000000113817f50 = FUN_1050d71e0;
      ppuRam0000000113817f28 = &PTR_FUN_110864c08;
      uRam0000000113817f68 = 0;
      uRam0000000113817f60 = 0;
      uRam0000000113817f78 = 0;
      uRam0000000113817f70 = 0;
      uRam0000000113817f88 = 0;
      uRam0000000113817f80 = 0;
      uRam0000000113817f90 = 0;
      ___cxa_atexit(FUN_1050797f4,0x113817f28,0x100000000);
      ___cxa_guard_release(0x113817f98);
    }
  }
  return 0x113817f28;
}



/* Entry: 1050d71a8; end: 1050d71df;  */

undefined4 FUN_1050d71a8(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((6 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar2 != 0)) {
    return *(undefined4 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 1050d71e0; end: 1050d7233;  */

undefined8 FUN_1050d71e0(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010bf35b80(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1050d7234; end: 1050d72eb;  */

undefined8 FUN_1050d7234(void)

{
  int iVar1;
  
  if ((bRam0000000113818010 & 1) == 0) {
    iVar1 = 0x13818010;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113817fa8 = 0xe;
      pcRam0000000113817fb0 = "source";
      uRam0000000113817fb8 = 0x100;
      pcRam0000000113817fc0 = FUN_1050d72ec;
      pcRam0000000113817fc8 = FUN_1050d7324;
      ppuRam0000000113817fa0 = &PTR_DAT_110866ca0;
      uRam0000000113817fe0 = 0;
      uRam0000000113817fd8 = 0;
      uRam0000000113817ff0 = 0;
      uRam0000000113817fe8 = 0;
      uRam0000000113818000 = 0;
      uRam0000000113817ff8 = 0;
      uRam0000000113818008 = 0;
      ___cxa_atexit(0x1050ce008,0x113817fa0,0x100000000);
      ___cxa_guard_release(0x113818010);
    }
  }
  return 0x113817fa0;
}



/* Entry: 1050d72ec; end: 1050d7323;  */

undefined4 FUN_1050d72ec(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((0x18 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xc], uVar2 != 0)) {
    return *(undefined4 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 1050d7324; end: 1050d7377;  */

undefined8 FUN_1050d7324(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010c247520(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1050d7378; end: 1050d742f;  */

undefined8 FUN_1050d7378(void)

{
  int iVar1;
  
  if ((bRam0000000113818088 & 1) == 0) {
    iVar1 = 0x13818088;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113818020 = 0xe;
      pcRam0000000113818028 = "deleted";
      uRam0000000113818030 = 0x100;
      pcRam0000000113818038 = FUN_1050d7430;
      pcRam0000000113818040 = FUN_1050d7470;
      ppuRam0000000113818018 = &PTR_SUB_1108629c8;
      uRam0000000113818058 = 0;
      uRam0000000113818050 = 0;
      uRam0000000113818068 = 0;
      uRam0000000113818060 = 0;
      uRam0000000113818078 = 0;
      uRam0000000113818070 = 0;
      uRam0000000113818080 = 0;
      ___cxa_atexit(0x105007830,0x113818018,0x100000000);
      ___cxa_guard_release(0x113818088);
    }
  }
  return 0x113818018;
}



/* Entry: 1050d7430; end: 1050d746f;  */

bool FUN_1050d7430(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((0x1a < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xd], uVar2 != 0)) {
    return *(char *)((long)piVar1 + uVar2) != '\0';
  }
  return false;
}



/* Entry: 1050d7470; end: 1050d74c3;  */

undefined8 FUN_1050d7470(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010bf6ce80(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1050d74c4; end: 1050d74cf; +[SCCharmsCharm table] */

char * FUN_1050d74c4(void)

{
  return "charms__charm_draft";
}



/* Entry: 1050d74d0; end: 1050d7f8b; +[SCCharmsCharm immutableObjectParse:bufferSize:] */

void FUN_1050d74d0(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  long lVar4;
  uint uVar5;
  bool bVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  ushort uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  uint *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined4 uVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  ulong uVar25;
  undefined *puVar26;
  ulong uVar27;
  undefined4 uVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puStack_90;
  undefined *puStack_70;
  undefined *puStack_68;
  
  uVar5 = *param_3;
  piVar1 = (int *)((long)param_3 + (ulong)uVar5);
  puVar7 = PTR_PTR_1126b4910;
  _objc_alloc();
  iVar11 = *piVar1;
  lVar12 = (long)iVar11;
  uVar10 = *(ushort *)((long)piVar1 - lVar12);
  if (uVar10 < 5) {
    puStack_68 = (undefined *)0x0;
    uVar28 = 0;
    uVar20 = 0;
LAB_1050d7620:
    puStack_70 = (undefined *)0x0;
    puVar22 = (undefined *)0x0;
  }
  else {
    uVar15 = (ulong)((ushort *)((long)piVar1 - lVar12))[2];
    if (uVar15 == 0) {
      puStack_68 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar15);
      puStack_68 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = (long)*piVar1;
      uVar10 = *(ushort *)((long)piVar1 - lVar12);
    }
    iVar11 = (int)lVar12;
    lVar12 = -lVar12;
    if (uVar10 < 7) {
      uVar28 = 0;
      uVar20 = 0;
      goto LAB_1050d7620;
    }
    uVar15 = (ulong)*(ushort *)((long)piVar1 + lVar12 + 6);
    if (uVar15 == 0) {
      uVar28 = 0;
    }
    else {
      uVar28 = *(undefined4 *)((long)piVar1 + uVar15);
    }
    if (uVar10 < 9) {
      uVar20 = 0;
      goto LAB_1050d7620;
    }
    uVar15 = (ulong)*(ushort *)((long)piVar1 + lVar12 + 8);
    if (uVar15 == 0) {
      uVar20 = 0;
    }
    else {
      uVar20 = *(undefined4 *)((long)piVar1 + uVar15);
    }
    if (uVar10 < 0xb) goto LAB_1050d7620;
    uVar15 = (ulong)*(ushort *)((long)piVar1 + lVar12 + 10);
    if (uVar15 == 0) {
      puStack_70 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar15);
      puStack_70 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      iVar11 = *piVar1;
      lVar12 = -(long)iVar11;
      uVar10 = *(ushort *)((long)piVar1 - (long)iVar11);
    }
    if ((uVar10 < 0xd) || (uVar15 = (ulong)*(ushort *)((long)piVar1 + lVar12 + 0xc), uVar15 == 0)) {
      puVar22 = (undefined *)0x0;
    }
    else {
      uVar27 = (ulong)*(uint *)((long)piVar1 + uVar15);
      puVar22 = PTR_PTR_1126b4908;
      _objc_alloc();
      piVar3 = (int *)((long)((long)piVar1 + uVar15) + uVar27);
      lVar12 = (long)*piVar3;
      uVar10 = *(ushort *)((long)piVar3 - lVar12);
      if (uVar10 < 5) {
        puStack_90 = (undefined *)0x0;
LAB_1050d7ca0:
        puVar24 = (undefined *)0x0;
      }
      else {
        uVar16 = (ulong)((ushort *)((long)piVar3 - lVar12))[2];
        if (uVar16 == 0) {
          puStack_90 = (undefined *)0x0;
        }
        else {
          puVar2 = (uint *)((long)piVar3 + uVar16);
          puStack_90 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar2 + (ulong)*puVar2 + 4);
          _objc_retainAutoreleasedReturnValue();
          lVar12 = (long)*piVar3;
          uVar10 = *(ushort *)((long)piVar3 - lVar12);
        }
        if ((uVar10 < 7) || (uVar16 = (ulong)*(ushort *)((long)piVar3 + (6 - lVar12)), uVar16 == 0))
        goto LAB_1050d7ca0;
        uVar25 = (ulong)*(uint *)((long)piVar3 + uVar16);
        puVar2 = (uint *)((long)((long)piVar3 + uVar16) + uVar25);
        puVar29 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar2);
        _objc_retainAutoreleasedReturnValue();
        if (*puVar2 != 0) {
          lVar12 = (long)param_3 + uVar25 + uVar16 + uVar27 + uVar15 + (ulong)uVar5 + 0xc;
          do {
            uVar15 = (ulong)*(uint *)(lVar12 + -8);
            puVar24 = PTR_PTR_1126b4918;
            _objc_alloc(PTR_PTR_1126b4918);
            lVar13 = (long)*(int *)(lVar12 + uVar15 + -8);
            lVar4 = lVar12 + (uVar15 - lVar13);
            uVar10 = *(ushort *)(lVar4 + -8);
            if (uVar10 < 5) {
              uVar8 = 0;
LAB_1050d7c10:
              puVar30 = (undefined *)0x0;
LAB_1050d7c14:
              uVar9 = 0;
            }
            else {
              uVar27 = (ulong)*(ushort *)(lVar4 + -4);
              if (uVar27 == 0) {
                uVar8 = 0;
              }
              else {
                uVar8 = *(undefined4 *)(lVar12 + uVar15 + uVar27 + -8);
              }
              if (uVar10 < 7) goto LAB_1050d7c10;
              uVar27 = (ulong)*(ushort *)(lVar12 + (uVar15 - lVar13) + -2);
              if (uVar27 == 0) {
                puVar30 = (undefined *)0x0;
              }
              else {
                lVar4 = lVar12 + uVar15 + uVar27;
                puVar30 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                    lVar4 + (ulong)*(uint *)(lVar4 + -8) + -4);
                _objc_retainAutoreleasedReturnValue();
                lVar13 = (long)*(int *)(lVar12 + uVar15 + -8);
                uVar10 = *(ushort *)(lVar12 + (uVar15 - lVar13) + -8);
              }
              if ((uVar10 < 9) ||
                 (uVar27 = (ulong)*(ushort *)(lVar12 + (uVar15 - lVar13)), uVar27 == 0))
              goto LAB_1050d7c14;
              uVar9 = *(undefined8 *)(lVar12 + uVar15 + uVar27 + -8);
            }
            func_0x00010c060440(puVar24,param_2,uVar8,puVar30,uVar9);
            _objc_release(puVar30);
            func_0x00010befa120(puVar29,param_2,puVar24);
            _objc_release(puVar24);
            puVar14 = (uint *)(lVar12 + -4);
            lVar12 = lVar12 + 4;
          } while (puVar14 != puVar2 + (ulong)*puVar2 + 1);
        }
        puVar24 = puVar29;
        func_0x00010bf51e00(puVar29);
        _objc_release(puVar29);
      }
      func_0x00010c00b9c0();
      _objc_release(puVar24);
      _objc_release(puStack_90);
      iVar11 = *piVar1;
    }
  }
  uVar10 = *(ushort *)((long)piVar1 - (long)iVar11);
  if (uVar10 < 0xf) {
    puVar24 = (undefined *)0x0;
  }
  else {
    uVar15 = (ulong)((ushort *)((long)piVar1 - (long)iVar11))[7];
    if (uVar15 == 0) {
      puVar24 = (undefined *)0x0;
      lVar12 = (long)iVar11;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar15);
      puVar24 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      iVar11 = *piVar1;
      lVar12 = (long)iVar11;
      uVar10 = *(ushort *)((long)piVar1 - lVar12);
    }
    if ((0x10 < uVar10) &&
       (uVar15 = (ulong)*(ushort *)((long)piVar1 + (0x10 - lVar12)), uVar15 != 0)) {
      puVar2 = (uint *)((long)piVar1 + uVar15);
      uVar5 = *puVar2;
      puVar29 = PTR_PTR_1126b4920;
      _objc_alloc();
      piVar3 = (int *)((long)puVar2 + (ulong)uVar5);
      lVar12 = (long)*piVar3;
      uVar10 = *(ushort *)((long)piVar3 - lVar12);
      if (uVar10 < 5) {
        puVar30 = (undefined *)0x0;
LAB_1050d78e0:
        puVar21 = (undefined *)0x0;
LAB_1050d78e4:
        puVar23 = (undefined *)0x0;
LAB_1050d78e8:
        puVar17 = (undefined *)0x0;
LAB_1050d78ec:
        puVar19 = (undefined *)0x0;
        puVar26 = (undefined *)0x0;
        puVar18 = (undefined *)0x0;
      }
      else {
        uVar15 = (ulong)((ushort *)((long)piVar3 - lVar12))[2];
        if (uVar15 == 0) {
          puVar30 = (undefined *)0x0;
        }
        else {
          puVar2 = (uint *)((long)piVar3 + uVar15);
          puVar30 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar2 + (ulong)*puVar2 + 4);
          _objc_retainAutoreleasedReturnValue();
          lVar12 = (long)*piVar3;
          uVar10 = *(ushort *)((long)piVar3 - lVar12);
        }
        lVar12 = -lVar12;
        if (uVar10 < 7) goto LAB_1050d78e0;
        uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar12 + 6);
        if (uVar15 == 0) {
          puVar21 = (undefined *)0x0;
        }
        else {
          puVar2 = (uint *)((long)piVar3 + uVar15);
          puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar2 + (ulong)*puVar2 + 4);
          _objc_retainAutoreleasedReturnValue();
          lVar12 = -(long)*piVar3;
          uVar10 = *(ushort *)((long)piVar3 - (long)*piVar3);
        }
        if (uVar10 < 9) goto LAB_1050d78e4;
        uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar12 + 8);
        if (uVar15 == 0) {
          puVar23 = (undefined *)0x0;
        }
        else {
          puVar2 = (uint *)((long)piVar3 + uVar15);
          puVar23 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar2 + (ulong)*puVar2 + 4);
          _objc_retainAutoreleasedReturnValue();
          lVar12 = -(long)*piVar3;
          uVar10 = *(ushort *)((long)piVar3 - (long)*piVar3);
        }
        if (uVar10 < 0xb) goto LAB_1050d78e8;
        uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar12 + 10);
        if (uVar15 == 0) {
          puVar17 = (undefined *)0x0;
        }
        else {
          puVar2 = (uint *)((long)piVar3 + uVar15);
          puVar17 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar2 + (ulong)*puVar2 + 4);
          _objc_retainAutoreleasedReturnValue();
          lVar12 = -(long)*piVar3;
          uVar10 = *(ushort *)((long)piVar3 - (long)*piVar3);
        }
        if (uVar10 < 0xd) goto LAB_1050d78ec;
        uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar12 + 0xc);
        if (uVar15 == 0) {
          puVar18 = (undefined *)0x0;
        }
        else {
          puVar2 = (uint *)((long)piVar3 + uVar15);
          puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar2 + (ulong)*puVar2 + 4);
          _objc_retainAutoreleasedReturnValue();
          lVar12 = -(long)*piVar3;
          uVar10 = *(ushort *)((long)piVar3 - (long)*piVar3);
        }
        if (uVar10 < 0xf) {
          puVar19 = (undefined *)0x0;
          puVar26 = (undefined *)0x0;
        }
        else {
          uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar12 + 0xe);
          if (uVar15 == 0) {
            puVar26 = (undefined *)0x0;
          }
          else {
            puVar2 = (uint *)((long)piVar3 + uVar15);
            puVar26 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                (long)puVar2 + (ulong)*puVar2 + 4);
            _objc_retainAutoreleasedReturnValue();
            lVar12 = -(long)*piVar3;
            uVar10 = *(ushort *)((long)piVar3 - (long)*piVar3);
          }
          if ((uVar10 < 0x11) ||
             (uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar12 + 0x10), uVar15 == 0)) {
            puVar19 = (undefined *)0x0;
          }
          else {
            puVar2 = (uint *)((long)piVar3 + uVar15);
            puVar19 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                (long)puVar2 + (ulong)*puVar2 + 4);
            _objc_retainAutoreleasedReturnValue();
          }
        }
      }
      func_0x00010c039c60();
      _objc_release(puVar19);
      _objc_release(puVar26);
      _objc_release(puVar18);
      _objc_release(puVar17);
      _objc_release(puVar23);
      _objc_release(puVar21);
      _objc_release(puVar30);
      iVar11 = *piVar1;
      goto LAB_1050d7734;
    }
  }
  puVar29 = (undefined *)0x0;
LAB_1050d7734:
  if (*(ushort *)((long)piVar1 - (long)iVar11) < 0x13) {
    bVar6 = false;
  }
  else {
    uVar15 = (ulong)((ushort *)((long)piVar1 - (long)iVar11))[9];
    bVar6 = false;
    if (uVar15 != 0) {
      bVar6 = *(char *)((long)piVar1 + uVar15) != '\0';
    }
  }
  func_0x00010c032ae0(puVar7,param_2,puStack_68,uVar28,uVar20,puStack_70,puVar22,puVar24,puVar29,
                      bVar6);
  _objc_release(puVar29);
  _objc_release(puVar24);
  _objc_release(puVar22);
  _objc_release(puStack_70);
  _objc_release(puStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1050d7f8c; end: 1050d7f9f; +[SCCharmsCharm objectClassFunctionPointer] */

undefined1  [16] FUN_1050d7f8c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = FUN_1050d7fec;
  auVar1._0_8_ = FUN_1050d7fa0;
  return auVar1;
}



/* Entry: 1050d7fa0; end: 1050d7feb;  */

void FUN_1050d7fa0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 0xf01c910;
  _strcmp("source",param_1);
  if (iVar1 != 0) {
    _strcmp("deleted",param_1);
  }
  return;
}



/* Entry: 1050d7fec; end: 1050d80e3;  */

bool FUN_1050d7fec(int param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint uVar2;
  ulong uVar3;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  if (param_1 == 1) {
    func_0x0001001b9e08(param_2,
                        "INSERT INTO index_charms__charm_draftdeleted (rowid, deleted) VALUES (?1, ?2)"
                       );
    _sqlite3_bind_int64();
    if ((0x1a < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
       (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xd], uVar3 != 0)) {
      uVar2 = (uint)(*(char *)((long)piVar1 + uVar3) != '\0');
      goto LAB_1050d80b0;
    }
  }
  else {
    if (param_1 != 0) {
      return false;
    }
    func_0x0001001b9e08(param_2,
                        "INSERT INTO index_charms__charm_draftsource (rowid, source) VALUES (?1, ?2)"
                       );
    _sqlite3_bind_int64();
    if ((0x18 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
       (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xc], uVar3 != 0)) {
      uVar2 = *(uint *)((long)piVar1 + uVar3);
      goto LAB_1050d80b0;
    }
  }
  uVar2 = 0;
LAB_1050d80b0:
  _sqlite3_bind_int64(param_2,2,uVar2);
  _sqlite3_step(param_2);
  return (int)param_2 == 0x65;
}



/* Entry: 1050d80e4; end: 1050d82a7;  */

long * FUN_1050d80e4(long param_1,long param_2,long param_3,undefined4 param_4,long param_5,
                    long param_6,long param_7,long param_8,long param_9,undefined1 param_10,
                    undefined4 param_11,long param_12,undefined1 param_13,undefined4 param_14,
                    long param_15,undefined1 param_16)

{
  long *plVar1;
  long lVar2;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  plVar1 = (long *)0x0;
  if (param_1 != 0) {
    puStack_68 = PTR_PTR_1126e6118;
    plVar1 = &lStack_70;
    lStack_70 = param_1;
    _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      plVar1[1] = param_2;
      _objc_retain(param_3);
      lVar2 = plVar1[4];
      plVar1[4] = param_3;
      _objc_release(lVar2);
      *(undefined4 *)(plVar1 + 3) = param_4;
      plVar1[5] = param_5;
      _objc_retain(param_6);
      lVar2 = plVar1[6];
      plVar1[6] = param_6;
      _objc_release(lVar2);
      _objc_retain(param_7);
      lVar2 = plVar1[7];
      plVar1[7] = param_7;
      _objc_release(lVar2);
      _objc_retain(param_8);
      lVar2 = plVar1[8];
      plVar1[8] = param_8;
      _objc_release(lVar2);
      _objc_retain(param_9);
      lVar2 = plVar1[9];
      plVar1[9] = param_9;
      _objc_release(lVar2);
      *(undefined1 *)((long)plVar1 + 0x14) = param_10;
      *(undefined1 *)((long)plVar1 + 0x15) = param_13;
      plVar1[10] = param_12;
      plVar1[0xb] = param_15;
      *(undefined1 *)((long)plVar1 + 0x16) = param_16;
    }
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return plVar1;
}



/* Entry: 1050d82a8; end: 1050d831b;  */

void FUN_1050d82a8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_1050d831c();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 2;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1050d831c; end: 1050d884f;  */

void FUN_1050d831c(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_1;
      func_0x00010c0f0720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar7,
                            "SELECT rowid, p FROM charms__charm_draft WHERE ownerIdentifier=?1 AND charmIdentifier=?2 LIMIT 1"
                           );
        if (puVar7 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010c0f0720(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar7,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = param_1;
          func_0x00010bf35b80(param_1);
          _sqlite3_bind_int64(puVar7,2,(long)(int)puVar1);
          puVar1 = puVar7;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar7;
            _sqlite3_column_int64(puVar7,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126b4910);
            _sqlite3_column_blob(puVar7,1);
            _sqlite3_column_bytes(puVar7,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar7);
            if (puVar3 == (undefined *)0x0) goto LAB_1050d8758;
            puVar7 = PTR_PTR_1126b49e0;
            _objc_alloc(PTR_PTR_1126b49e0);
            puStack_68 = puVar3;
            func_0x00010c0f0720();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar3;
            func_0x00010bf35b80(puVar3);
            puVar4 = puVar3;
            func_0x00010c0f0760(puVar3);
            puStack_70 = puVar3;
            func_0x00010bf85d80();
            _objc_retainAutoreleasedReturnValue();
            puStack_78 = puVar3;
            func_0x00010bf6e400();
            _objc_retainAutoreleasedReturnValue();
            puStack_80 = puVar3;
            func_0x00010bf71d00();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010bfce020();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar3;
            func_0x00010bfe2e20();
            func_0x00010bf861c0();
            func_0x00010c282d00();
            func_0x00010c247520();
            func_0x00010bf6ce80();
            FUN_1050d80e4(puVar7,puVar1,puStack_68,puVar2,puVar4,puStack_70,puStack_78,puStack_80,
                          puVar5,(char)puVar6);
            goto LAB_1050d84bc;
          }
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar7 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126b4910);
      puVar3 = puVar7;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar7);
      if (puVar3 != (undefined *)0x0) {
        puVar7 = PTR_PTR_1126b49e0;
        _objc_alloc(PTR_PTR_1126b49e0);
        puStack_68 = puVar3;
        func_0x00010c0f0720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010bf35b80(puVar3);
        puVar4 = puVar3;
        func_0x00010c0f0760(puVar3);
        puStack_70 = puVar3;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        puStack_78 = puVar3;
        func_0x00010bf6e400();
        _objc_retainAutoreleasedReturnValue();
        puStack_80 = puVar3;
        func_0x00010bf71d00();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010bfce020();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010bfe2e20();
        func_0x00010bf861c0();
        func_0x00010c282d00();
        func_0x00010c247520();
        func_0x00010bf6ce80();
        FUN_1050d80e4(puVar7,puVar1,puStack_68,puVar2,puVar4,puStack_70,puStack_78,puStack_80,puVar5
                      ,(char)puVar6);
LAB_1050d84bc:
        _objc_release(puVar5);
        _objc_release(puStack_80);
        _objc_release(puStack_78);
        _objc_release(puStack_70);
        _objc_release(puStack_68);
        param_1 = puVar3;
        goto LAB_1050d8760;
      }
LAB_1050d8758:
      param_1 = (undefined *)0x0;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_1050d8760:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1050d8850; end: 1050d88c3;  */

void FUN_1050d8850(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_1050d831c();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1050d88c4; end: 1050d8c9b;  */

void FUN_1050d88c4(long param_1,undefined1 *param_2)

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
  undefined *puVar10;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b49e0;
  FUN_1050d82a8(PTR_PTR_1126b49e0,param_1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar10 = PTR_PTR_1126b49e0;
    _objc_retain(param_1);
    _objc_opt_self(puVar10);
    puVar10 = PTR_PTR_1126b49e0;
    if (param_1 == 0) {
      _objc_opt_new();
      *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      lVar2 = param_1;
      func_0x00010c0f0720();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bf35b80(param_1);
      lVar4 = param_1;
      func_0x00010c0f0760();
      lVar5 = param_1;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      func_0x00010bf6e400();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1;
      func_0x00010bf71d00(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_1;
      func_0x00010bfce020();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_1;
      func_0x00010bfe2e20();
      func_0x00010bf861c0();
      func_0x00010c282d00();
      func_0x00010c247520();
      func_0x00010bf6ce80();
      FUN_1050d80e4(puVar10,0xffffffffffffffff,lVar2,lVar3,lVar4,lVar5,lVar6,lVar7,lVar8,(char)lVar9
                   );
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar2);
    }
    *(undefined4 *)(puVar10 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    lVar2 = param_1;
    func_0x00010c0f0720(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bf35b80();
    *(int *)(puVar1 + 0x18) = (int)lVar2;
    lVar2 = param_1;
    func_0x00010c0f0760();
    *(long *)(puVar1 + 0x28) = lVar2;
    lVar2 = param_1;
    func_0x00010bf85d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bf6e400(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bf71d00(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bfce020(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bfe2e20();
    puVar1[0x14] = (char)lVar2;
    lVar2 = param_1;
    func_0x00010bf861c0();
    *(long *)(puVar1 + 0x50) = lVar2;
    lVar2 = param_1;
    func_0x00010c282d00();
    puVar1[0x15] = (char)lVar2;
    lVar2 = param_1;
    func_0x00010c247520();
    *(long *)(puVar1 + 0x58) = lVar2;
    lVar2 = param_1;
    func_0x00010bf6ce80();
    puVar1[0x16] = (char)lVar2;
    _objc_retain(puVar1);
    puVar10 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1050d8c9c; end: 1050d8d37;  */

void FUN_1050d8c9c(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b4910;
    _objc_alloc(PTR_PTR_1126b4910);
    func_0x00010c032ae0();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050d8d38; end: 1050d8d8b; -[SCCharmsCharmChangeRequest .cxx_destruct] */

void FUN_1050d8d38(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 1050d8d8c; end: 1050d8d97; -[SCCharmsCharmChangeRequest table] */

char * FUN_1050d8d8c(void)

{
  return "charms__charm_draft";
}



/* Entry: 1050d8d98; end: 1050d8eab; -[SCCharmsCharmChangeRequest createTableWithSQLite:] */

void FUN_1050d8d98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dd8f920,0xbd,&uStack_28,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_28);
    _sqlite3_finalize(uStack_28);
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dd8f9dd,0x67,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    uVar1 = param_3;
    _sqlite3_prepare_v2(param_3,&UNK_10dd8fa44,0x74,&uStack_38,0);
    if ((int)uVar1 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dd8fab8,0x69,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    _sqlite3_prepare_v2(param_3,&UNK_10dd8fb21,0x77,&uStack_38,0);
    if ((int)param_3 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  return;
}



/* Entry: 1050d8eac; end: 1050d95e7; -[SCCharmsCharmChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_1050d8eac(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  uint *puVar15;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar6 = param_1;
  if (iVar3 == 1) {
    FUN_1050d8c9c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    FUN_1050d95e8(param_4,puVar6);
    func_0x0001001ce6fc(param_4,lVar7,0,0);
    puVar15 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar15;
    puVar13 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar13;
    func_0x00010bf636c0();
    FUN_1050da3a4();
    _objc_release(puVar13);
    lVar7 = param_3;
    func_0x0001001b9e08(param_3,
                        "INSERT INTO charms__charm_draft (p, ownerIdentifier, charmIdentifier) VALUES (?1, ?2, ?3)"
                       );
    if (lVar7 == 0) goto LAB_1050d9540;
    _sqlite3_bind_blob(lVar7,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar15 + (ulong)uVar4);
    puVar15 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar15 + (ulong)*puVar15);
    _sqlite3_bind_text(lVar7,2,puVar2 + 1,*puVar2,0);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
       (uVar12 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar12 == 0)) {
      lVar11 = 0;
    }
    else {
      lVar11 = (long)*(int *)((long)piVar1 + uVar12);
    }
    _sqlite3_bind_int64(lVar7,3,lVar11);
    _sqlite3_step();
    if ((int)lVar7 != 0x65) goto LAB_1050d9540;
    uVar14 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    if (((ulong)puVar8 & 1) != 0) {
      lVar7 = param_3;
      func_0x0001001b9e08(param_3,
                          "INSERT INTO index_charms__charm_draftsource (rowid, source) VALUES (?1, ?2)"
                         );
      _sqlite3_bind_int64();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x19) ||
         (uVar12 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xc], uVar12 == 0)) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined4 *)((long)piVar1 + uVar12);
      }
      _sqlite3_bind_int64(lVar7,2,uVar10);
      _sqlite3_step();
      if ((int)lVar7 != 0x65) goto LAB_1050d9540;
    }
    if (((uint)puVar8 >> 8 & 1) != 0) {
      func_0x0001001b9e08(param_3,
                          "INSERT INTO index_charms__charm_draftdeleted (rowid, deleted) VALUES (?1, ?2)"
                         );
      _sqlite3_bind_int64();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x1b) ||
         (uVar12 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xd], uVar12 == 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = *(char *)((long)piVar1 + uVar12) != '\0';
      }
      _sqlite3_bind_int64(param_3,2,bVar5);
      _sqlite3_step();
      if ((int)param_3 != 0x65) goto LAB_1050d9540;
    }
    *(undefined8 *)(param_1 + 8) = uVar14;
    func_0x00010c1eeb60(puVar6);
    puVar13 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b4910);
    func_0x00010c21c9a0(puVar13);
LAB_1050d9518:
    _objc_release(puVar13);
    _objc_retain(puVar6);
    puVar13 = puVar6;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        lVar7 = param_3;
        func_0x0001001b9e08(param_3,"DELETE FROM charms__charm_draft WHERE rowid=?1");
        if (lVar7 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)lVar7 == 0x65) {
            lVar7 = param_3;
            func_0x0001001b9e08(param_3,"DELETE FROM index_charms__charm_draftsource WHERE rowid=?1"
                               );
            if (lVar7 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)lVar7 != 0x65) goto LAB_1050d900c;
            }
            func_0x0001001b9e08(param_3,
                                "DELETE FROM index_charms__charm_draftdeleted WHERE rowid=?1");
            if (param_3 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)param_3 != 0x65) goto LAB_1050d900c;
            }
            puVar6 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar13 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126b4910);
            func_0x00010c21c9a0(puVar6);
            _objc_release(puVar13);
            _objc_release(puVar6);
            puVar13 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1050d954c;
          }
        }
      }
LAB_1050d900c:
      puVar13 = (undefined *)0x0;
      goto LAB_1050d954c;
    }
    FUN_1050d8c9c();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    FUN_1050d95e8(param_4,puVar6);
    func_0x0001001ce6fc(param_4,lVar7,0,0);
    puVar15 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar15;
    uVar14 = *(undefined8 *)(param_1 + 8);
    _objc_retain(puVar6);
    lVar7 = param_3;
    func_0x0001001b9e08(param_3,
                        "UPDATE charms__charm_draft SET p=?1, ownerIdentifier=?3, charmIdentifier=?4 WHERE rowid=?2 LIMIT 1"
                       );
    if (lVar7 != 0) {
      _sqlite3_bind_blob(lVar7,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(lVar7,2,uVar14);
      piVar1 = (int *)((long)puVar15 + (ulong)uVar4);
      puVar15 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar15 + (ulong)*puVar15);
      _sqlite3_bind_text(lVar7,3,puVar2 + 1,*puVar2,0);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
         (uVar12 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar12 == 0)) {
        lVar11 = 0;
      }
      else {
        lVar11 = (long)*(int *)((long)piVar1 + uVar12);
      }
      _sqlite3_bind_int64(lVar7,4,lVar11);
      _sqlite3_step();
      if ((int)lVar7 == 0x65) {
        puVar13 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126b4910);
        puVar8 = puVar13;
        func_0x00010c0dfea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar13);
        puVar13 = puVar8;
        func_0x00010c247520();
        puVar9 = puVar6;
        func_0x00010c247520();
        if (puVar13 == puVar9) {
LAB_1050d93e4:
          puVar13 = puVar8;
          func_0x00010bf6ce80();
          puVar9 = puVar6;
          func_0x00010bf6ce80();
          if ((int)puVar13 != (int)puVar9) {
            func_0x0001001b9e08(param_3,
                                "UPDATE index_charms__charm_draftdeleted SET deleted=?1 WHERE rowid=?2 LIMIT 1"
                               );
            if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x1b) ||
               (uVar12 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xd], uVar12 == 0)) {
              bVar5 = false;
            }
            else {
              bVar5 = *(char *)((long)piVar1 + uVar12) != '\0';
            }
            _sqlite3_bind_int64(param_3,1,bVar5);
            _sqlite3_bind_int64(param_3,2,uVar14);
            _sqlite3_step();
            if ((int)param_3 != 0x65) goto LAB_1050d9530;
          }
          _objc_release(puVar8);
          _objc_release(puVar6);
          puVar13 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0(PTR_PTR_1126b04a8);
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126b4910);
          func_0x00010c21c9a0(puVar13);
          goto LAB_1050d9518;
        }
        lVar7 = param_3;
        func_0x0001001b9e08(param_3,
                            "UPDATE index_charms__charm_draftsource SET source=?1 WHERE rowid=?2 LIMIT 1"
                           );
        if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x19) ||
           (uVar12 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xc], uVar12 == 0)) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined4 *)((long)piVar1 + uVar12);
        }
        _sqlite3_bind_int64(lVar7,1,uVar10);
        _sqlite3_bind_int64(lVar7,2,uVar14);
        _sqlite3_step();
        if ((int)lVar7 == 0x65) goto LAB_1050d93e4;
LAB_1050d9530:
        _objc_release(puVar8);
      }
    }
    _objc_release(puVar6);
LAB_1050d9540:
    puVar13 = (undefined *)0x0;
  }
  _objc_release(puVar6);
LAB_1050d954c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 1050d95e8; end: 1050da08b;  */

ulong FUN_1050d95e8(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined ***pppuVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  char *pcVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  char *pcVar25;
  long lVar26;
  undefined8 uVar27;
  ulong uVar28;
  undefined4 *puVar29;
  undefined4 *puVar30;
  undefined4 *puVar31;
  ulong uVar32;
  undefined8 uVar33;
  ulong uVar34;
  long lVar35;
  undefined4 *puStack_168;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  code *pcStack_108;
  undefined ***pppuStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar6 = param_2;
  func_0x00010bf6e400();
  _objc_retainAutoreleasedReturnValue();
  if (uVar6 == 0) {
    puStack_168 = (undefined4 *)0x0;
  }
  else {
    uVar34 = param_2;
    func_0x00010bf6e400();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    ppuStack_110 = &PTR_FUN_110866d50;
    pcStack_108 = FUN_1050da1bc;
    pppuStack_f8 = &ppuStack_110;
    uVar7 = uVar34;
    func_0x00010bf6e6a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_retain(uVar7);
    uVar8 = uVar7;
    func_0x00010bf52a60();
    lVar26 = lRam0000000000000000;
    if (uVar8 == 0) {
      puStack_168 = (undefined4 *)0x0;
      puVar30 = (undefined4 *)0x0;
    }
    else {
      puStack_168 = (undefined4 *)0x0;
      puVar30 = (undefined4 *)0x0;
      puVar29 = (undefined4 *)0x0;
      do {
        uVar32 = 0;
        do {
          if (lRam0000000000000000 != lVar26) {
            _objc_enumerationMutation(uVar7);
          }
          uVar33 = *(undefined8 *)(uVar32 * 8);
          _objc_retain(uVar33);
          _objc_retain(uVar33);
          uStack_118 = uVar33;
          if (pppuStack_f8 == (undefined ***)0x0) {
            func_0x000104bfeb48();
            goto LAB_1050d9ec4;
          }
          pppuVar9 = pppuStack_f8;
          (*(code *)(*pppuStack_f8)[6])(pppuStack_f8,param_1,&uStack_118);
          _objc_release(uStack_118);
          if (puVar30 < puVar29) {
            *puVar30 = (int)pppuVar9;
            puVar31 = puStack_168;
          }
          else {
            lVar35 = (long)puVar30 - (long)puStack_168;
            uVar11 = (lVar35 >> 2) + 1;
            if (uVar11 >> 0x3e != 0) {
              FUN_1050da2cc();
LAB_1050d9ec4:
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1050d9ec8);
              (*pcVar5)();
            }
            uVar28 = (long)puVar29 - (long)puStack_168 >> 1;
            if (uVar28 <= uVar11) {
              uVar28 = uVar11;
            }
            if (0x7ffffffffffffffb < (ulong)((long)puVar29 - (long)puStack_168)) {
              uVar28 = 0x3fffffffffffffff;
            }
            if (uVar28 >> 0x3e != 0) {
              func_0x000104bd35f4();
              goto LAB_1050d9ec4;
            }
            lVar10 = uVar28 << 2;
            __Znwm();
            puVar30 = (undefined4 *)(lVar10 + lVar35);
            puVar29 = (undefined4 *)(lVar10 + uVar28 * 4);
            puVar31 = puVar30 + -(lVar35 >> 2);
            *puVar30 = (int)pppuVar9;
            _memcpy(puVar31,puStack_168,lVar35);
            if (puStack_168 != (undefined4 *)0x0) {
              __ZdlPv(puStack_168);
            }
          }
          puStack_168 = puVar31;
          puVar30 = puVar30 + 1;
          _objc_release(uVar33);
          uVar32 = uVar32 + 1;
        } while (uVar8 != uVar32);
        uVar8 = uVar7;
        func_0x00010bf52a60();
      } while (uVar8 != 0);
    }
    _objc_release(uVar7);
    _objc_release(uVar7);
    _objc_release(uVar7);
    if (pppuStack_f8 == &ppuStack_110) {
      lVar26 = 0x20;
LAB_1050d985c:
      (**(code **)((long)*pppuStack_f8 + lVar26))();
    }
    else if (pppuStack_f8 != (undefined ***)0x0) {
      lVar26 = 0x28;
      goto LAB_1050d985c;
    }
    uVar8 = uVar34;
    func_0x00010bf6e600(uVar34);
    _objc_retainAutoreleasedReturnValue();
    uVar32 = param_1;
    FUN_1050da08c(param_1,uVar8);
    uVar7 = (long)puVar30 - (long)puStack_168;
    puVar29 = (undefined4 *)&UNK_10dd8fd95;
    if (uVar7 != 0) {
      puVar29 = puStack_168;
    }
    *(undefined1 *)(param_1 + 0x46) = 1;
    func_0x0001001cddd0(param_1,uVar7,4);
    func_0x0001001cddd0(param_1,uVar7,4);
    if (puStack_168 != puVar30) {
      lVar26 = (long)uVar7 >> 2;
      do {
        iVar4 = puVar29[lVar26 + -1];
        func_0x0001001ce088(param_1,4);
        func_0x0001001ce0bc(param_1,(((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                                     *(int *)(param_1 + 0x28)) - iVar4) + 4);
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
    }
    *(undefined1 *)(param_1 + 0x46) = 0;
    uVar11 = param_1;
    func_0x0001001ce0bc(param_1,uVar7 >> 2);
    *(undefined1 *)(param_1 + 0x46) = 1;
    iVar4 = *(int *)(param_1 + 0x20);
    iVar2 = *(int *)(param_1 + 0x30);
    iVar3 = *(int *)(param_1 + 0x28);
    if ((int)uVar11 != 0) {
      func_0x0001001ce088(param_1,4);
      func_0x0001001ce354(param_1,6,
                          (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                           *(int *)(param_1 + 0x28)) - (int)uVar11) + 4,0);
    }
    func_0x0001001ce2e4(param_1,4,uVar32 & 0xffffffff);
    uVar7 = param_1;
    func_0x0001001ce548(param_1,(iVar4 - iVar2) + iVar3);
    _objc_release(uVar8);
    if (puStack_168 != (undefined4 *)0x0) {
      __ZdlPv();
    }
    _objc_release(uVar34);
    _objc_release(uVar34);
    puStack_168 = (undefined4 *)(uVar7 & 0xffffffff);
  }
  _objc_release(uVar6);
  uVar6 = param_2;
  func_0x00010bfce020();
  _objc_retainAutoreleasedReturnValue();
  if (uVar6 == 0) {
    uVar34 = 0;
  }
  else {
    uVar7 = param_2;
    func_0x00010bfce020();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar8 = uVar7;
    func_0x00010c111d40();
    _objc_retainAutoreleasedReturnValue();
    uVar34 = param_1;
    FUN_1050da08c(param_1,uVar8);
    uVar32 = uVar7;
    func_0x00010c110b60();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_1;
    FUN_1050da08c(param_1,uVar32);
    uVar28 = uVar7;
    func_0x00010bf6f660();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_1;
    FUN_1050da08c(param_1,uVar28);
    uVar13 = uVar7;
    func_0x00010bf6f580();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = param_1;
    FUN_1050da08c(param_1);
    uVar15 = uVar7;
    func_0x00010bf1c5c0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = param_1;
    FUN_1050da08c(param_1,uVar15);
    uVar17 = uVar7;
    func_0x00010bf1c5e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = param_1;
    FUN_1050da08c(param_1,uVar17);
    uVar19 = uVar7;
    func_0x00010c110560(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = param_1;
    FUN_1050da08c(param_1,uVar19);
    *(undefined1 *)(param_1 + 0x46) = 1;
    iVar4 = *(int *)(param_1 + 0x20);
    iVar2 = *(int *)(param_1 + 0x30);
    iVar3 = *(int *)(param_1 + 0x28);
    func_0x0001001ce2e4(param_1,0x10,uVar20 & 0xffffffff);
    func_0x0001001ce2e4(param_1,0xe,uVar18 & 0xffffffff);
    func_0x0001001ce2e4(param_1,0xc,uVar16 & 0xffffffff);
    func_0x0001001ce2e4(param_1,10,uVar14 & 0xffffffff);
    func_0x0001001ce2e4(param_1,8,uVar12 & 0xffffffff);
    func_0x0001001ce2e4(param_1,6,uVar11 & 0xffffffff);
    func_0x0001001ce2e4(param_1,4,uVar34 & 0xffffffff);
    uVar34 = param_1;
    func_0x0001001ce548(param_1,(iVar4 - iVar2) + iVar3);
    _objc_release(uVar19);
    _objc_release(uVar17);
    _objc_release(uVar15);
    _objc_release(uVar13);
    _objc_release(uVar28);
    _objc_release(uVar32);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar7);
    uVar34 = uVar34 & 0xffffffff;
  }
  _objc_release(uVar6);
  uVar6 = param_2;
  func_0x00010c0f0720();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_1050da08c(param_1,uVar6);
  uVar8 = param_2;
  func_0x00010bf35b80(param_2);
  uVar32 = param_2;
  func_0x00010c0f0760();
  uVar11 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = param_1;
  FUN_1050da08c(param_1,uVar11);
  uVar12 = param_2;
  func_0x00010bf71d00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_1;
  FUN_1050da08c(param_1,uVar12);
  uVar14 = param_2;
  func_0x00010bfe2e20();
  uVar15 = param_2;
  func_0x00010bf861c0(param_2);
  uVar16 = param_2;
  func_0x00010c282d00();
  uVar17 = param_2;
  func_0x00010c247520();
  uVar18 = param_2;
  func_0x00010bf6ce80(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  uVar27 = *(undefined8 *)(param_1 + 0x30);
  uVar33 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x0001001ce1c8(param_1,0x18,uVar17 & 0xffffffff,0);
  func_0x0001001ce1c8(param_1,0x14,uVar15,0);
  func_0x0001001ce1c8(param_1,8,uVar32 & 0xffffffff,0);
  if (uVar34 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,0x10,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uVar34) + 4,0);
  }
  func_0x0001001ce2e4(param_1,0xe,uVar13 & 0xffffffff);
  if (puStack_168 != (undefined4 *)0x0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,0xc,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)puStack_168) + 4,0);
  }
  func_0x0001001ce2e4(param_1,10,uVar28 & 0xffffffff);
  func_0x000100c3b024(param_1,6,uVar8,0);
  func_0x0001001ce2e4(param_1,4,uVar7 & 0xffffffff);
  func_0x000100ab13ac(param_1,0x1a,uVar18,0);
  func_0x000100ab13ac(param_1,0x16,uVar16 & 0xffffffff,0);
  func_0x000100ab13ac(param_1,0x12,uVar14,0);
  pcVar25 = (char *)(ulong)(uint)(((int)uVar33 - (int)uVar27) + (int)uVar1);
  func_0x0001001ce548(param_1);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar6);
  uVar34 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  if (puStack_168 != (undefined4 *)0x0) {
    __ZdlPv(puStack_168);
  }
  _objc_release(uVar6);
  _objc_release(uVar6);
  _objc_release(uVar11);
  _objc_release(param_2);
  __Unwind_Resume(uVar34);
  _objc_retain(pcVar25);
  if (pcVar25 == (char *)0x0) {
    uVar34 = 0;
    goto LAB_1050da16c;
  }
  pcVar21 = pcVar25;
  _CFStringGetCStringPtr(pcVar25,0x8000100);
  if (pcVar21 != (char *)0x0) {
    pcVar22 = pcVar21;
    _strlen(pcVar21);
    func_0x0001001cde08(uVar34,pcVar21,pcVar22);
    goto LAB_1050da16c;
  }
  pcVar21 = pcVar25;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar21 == (char *)0x0) {
    pcVar21 = pcVar25;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar21 != (char *)0x0) goto LAB_1050da12c;
    uVar34 = 0;
  }
  else {
LAB_1050da12c:
    pcVar23 = pcVar21;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar24 = pcVar21;
    func_0x00010c08fa60(pcVar21);
    pcVar22 = "";
    if (pcVar23 != (char *)0x0) {
      pcVar22 = pcVar23;
    }
    func_0x0001001cde08(uVar34,pcVar22,pcVar24);
  }
  _objc_release(pcVar21);
LAB_1050da16c:
  _objc_release(pcVar25);
  return uVar34;
}



/* Entry: 1050da08c; end: 1050da1bb;  */

undefined8 FUN_1050da08c(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_1050da16c;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_1050da16c;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_1050da12c;
    param_1 = 0;
  }
  else {
LAB_1050da12c:
    pcVar3 = pcVar1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar4 = pcVar1;
    func_0x00010c08fa60(pcVar1);
    pcVar2 = "";
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
    }
    func_0x0001001cde08(param_1,pcVar2,pcVar4);
  }
  _objc_release(pcVar1);
LAB_1050da16c:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1050da1bc; end: 1050da2cb;  */

ulong FUN_1050da1bc(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c296d80(param_2);
  uVar5 = param_2;
  func_0x00010bfcf020(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  FUN_1050da08c(param_1,uVar5);
  uVar7 = param_2;
  func_0x00010c0b51e0(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce1c8(param_1,8,uVar7,0);
  func_0x0001001ce2e4(param_1,6,uVar6 & 0xffffffff);
  func_0x000100c3b024(param_1,4,uVar4,0);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar5);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1050da2cc; end: 1050da2df;  */

void FUN_1050da2cc(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  return;
}



/* Entry: 1050da2e0; end: 1050da2e7;  */

void FUN_1050da2e0(void)

{
  return;
}



/* Entry: 1050da2e8; end: 1050da31b;  */

void FUN_1050da2e8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110866d50;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1050da31c; end: 1050da35b;  */

void FUN_1050da31c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110866d50;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1050da35c; end: 1050da397;  */

long FUN_1050da35c(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110866dc0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1050da398; end: 1050da3a3;  */

undefined ** FUN_1050da398(void)

{
  return &PTR_DAT_110866dc0;
}



/* Entry: 1050da3a4; end: 1050da67b;  */

undefined2 FUN_1050da3a4(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 ***pppuVar2;
  bool bVar3;
  undefined2 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puStack_a0;
  undefined8 **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  undefined8 *puStack_68;
  
  puStack_68 = &puStack_a0;
  uStack_6a = 0;
  uStack_6b = 0;
  uVar4 = 0;
  if (param_1 != 0) {
    ppuStack_98 = (undefined8 ***)0x0;
    uStack_90 = 0;
    uStack_88 = 0;
    lVar5 = param_1 + 0x60;
    puStack_a0 = param_2;
    uStack_80 = param_3;
    uStack_78 = param_4;
    func_0x0001000e9dd8(lVar5,&puStack_a0,&UNK_10dd5b8f9,&puStack_68,&uStack_69);
    puVar11 = &uStack_6a;
    puVar13 = (undefined8 *)0xffffffffffffffff;
    puVar12 = &uStack_80;
    bVar3 = true;
    do {
      bVar9 = bVar3;
      lVar6 = lVar5 + 0x18;
      func_0x00010055a52c(lVar6,puVar12);
      if (lVar6 == 0) {
        if ((long)puVar13 < 0) {
          func_0x000100042ef0(&ppuStack_98,"SELECT MAX(rowid) FROM ");
          puVar13 = param_2;
          _strlen(param_2);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&ppuStack_98,param_2,puVar13);
          iVar1 = (int)uStack_90;
          pppuVar2 = (undefined8 ***)ppuStack_98;
          if (-1 < uStack_88._7_1_) {
            iVar1 = (int)uStack_88._7_1_;
            pppuVar2 = &ppuStack_98;
          }
          _sqlite3_prepare_v2(*(undefined8 *)(param_1 + 0x58),pppuVar2,iVar1,&puStack_68,0);
          puVar13 = puStack_68;
          _sqlite3_step();
          if ((int)puVar13 == 100) {
            puVar13 = puStack_68;
            _sqlite3_column_int64(puStack_68,0);
          }
          else {
            puVar13 = (undefined8 *)0x0;
          }
          _sqlite3_finalize(puStack_68);
        }
        if ((long)uStack_88 < 0) {
          *(undefined1 *)ppuStack_98 = 0;
          uStack_90 = 0;
        }
        else {
          ppuStack_98 = (undefined8 **)((ulong)ppuStack_98 & 0xffffffffffffff00);
          uStack_88 = uStack_88 & 0xffffffffffffff;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&ppuStack_98,"SELECT MAX(rowid) FROM index_",0x1d);
        puVar7 = param_2;
        _strlen(param_2);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&ppuStack_98,param_2,puVar7);
        uVar14 = *puVar12;
        uVar8 = uVar14;
        _strlen(uVar14);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&ppuStack_98,uVar14,uVar8);
        uVar8 = *(undefined8 *)(param_1 + 0x58);
        iVar1 = (int)uStack_90;
        pppuVar2 = (undefined8 ***)ppuStack_98;
        if (-1 < uStack_88._7_1_) {
          iVar1 = (int)uStack_88._7_1_;
          pppuVar2 = &ppuStack_98;
        }
        _sqlite3_prepare_v2(uVar8,pppuVar2,iVar1,&puStack_a0,0);
        if ((int)uVar8 == 0) {
          if (puStack_a0 != (undefined8 *)0x0) {
            puVar7 = puStack_a0;
            _sqlite3_step();
            if ((int)puVar7 == 100) {
              puVar7 = puStack_a0;
              _sqlite3_column_int64(puStack_a0,0);
              bVar3 = puVar7 == puVar13;
            }
            else {
              bVar3 = puVar13 == (undefined8 *)0x0;
            }
            *puVar11 = bVar3;
            _sqlite3_finalize(puStack_a0);
            lVar6 = lVar5 + 0x18;
            puStack_68 = puVar12;
            FUN_10507ce00(lVar6,puVar12,&UNK_10dd5b8f9,&puStack_68,&uStack_69);
            uVar10 = 1;
            if (bVar3) {
              uVar10 = 2;
            }
            *(undefined4 *)(lVar6 + 0x18) = uVar10;
            goto LAB_1050da608;
          }
        }
        else {
          puStack_a0 = (undefined8 *)0x0;
        }
        *puVar11 = 0;
        lVar6 = lVar5 + 0x18;
        puStack_68 = puVar12;
        FUN_10507ce00(lVar6,puVar12,&UNK_10dd5b8f9,&puStack_68,&uStack_69);
        *(undefined4 *)(lVar6 + 0x18) = 0;
      }
      else {
        *puVar11 = *(int *)(lVar6 + 0x18) == 2;
      }
LAB_1050da608:
      puVar11 = &uStack_6b;
      puVar12 = &uStack_78;
      bVar3 = false;
    } while (bVar9);
    if ((long)uStack_88 < 0) {
      __ZdlPv(ppuStack_98);
    }
    uVar4 = CONCAT11(uStack_6b,uStack_6a);
  }
  return uVar4;
}



/* Entry: 1050da67c; end: 1050da6df;  */

undefined ** FUN_1050da67c(void)

{
  int iVar1;
  
  if ((bRam0000000113818090 & 1) == 0) {
    iVar1 = 0x13818090;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_1130c2d00,0x100000000);
      ___cxa_guard_release(0x113818090);
    }
  }
  return &PTR_PTR_1130c2d00;
}



/* Entry: 1050da6e0; end: 1050da767;  */

void FUN_1050da6e0(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050da768; end: 1050da7f3;  */

void FUN_1050da768(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c0f0720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c0f0720(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1050da7f4; end: 1050da8ab;  */

undefined8 FUN_1050da7f4(void)

{
  int iVar1;
  
  if ((bRam0000000113818108 & 1) == 0) {
    iVar1 = 0x13818108;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001138180a0 = 0xe;
      pcRam00000001138180a8 = "charmIdentifier";
      uRam00000001138180b0 = 0x10001;
      pcRam00000001138180b8 = FUN_1050da8ac;
      pcRam00000001138180c0 = FUN_1050da8e4;
      ppuRam0000000113818098 = &PTR_FUN_110864c08;
      uRam00000001138180d8 = 0;
      uRam00000001138180d0 = 0;
      uRam00000001138180e8 = 0;
      uRam00000001138180e0 = 0;
      uRam00000001138180f8 = 0;
      uRam00000001138180f0 = 0;
      uRam0000000113818100 = 0;
      ___cxa_atexit(FUN_1050797f4,0x113818098,0x100000000);
      ___cxa_guard_release(0x113818108);
    }
  }
  return 0x113818098;
}



/* Entry: 1050da8ac; end: 1050da8e3;  */

undefined4 FUN_1050da8ac(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((6 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar2 != 0)) {
    return *(undefined4 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 1050da8e4; end: 1050da937;  */

undefined8 FUN_1050da8e4(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010bf35b80(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1050da938; end: 1050da943; +[SCCharmsHiddenCharm table] */

char * FUN_1050da938(void)

{
  return "charms__hiddencharm_draft";
}



/* Entry: 1050da944; end: 1050daaf7; +[SCCharmsHiddenCharm immutableObjectParse:bufferSize:] */

void FUN_1050da944(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ushort uVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126b4938;
  _objc_alloc(PTR_PTR_1126b4938);
  lVar6 = (long)*piVar1;
  uVar5 = *(ushort *)((long)piVar1 - lVar6);
  if (uVar5 < 5) {
    puVar8 = (undefined *)0x0;
LAB_1050da9f4:
    uVar9 = 0;
LAB_1050da9f8:
    uVar10 = 0;
LAB_1050da9fc:
    puVar11 = (undefined *)0x0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)piVar1 - lVar6))[2];
    if (uVar7 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar7);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - lVar6);
    }
    lVar6 = -lVar6;
    if (uVar5 < 7) goto LAB_1050da9f4;
    uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 6);
    if (uVar7 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)((long)piVar1 + uVar7);
    }
    if (uVar5 < 9) goto LAB_1050da9f8;
    uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 8);
    if (uVar7 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined4 *)((long)piVar1 + uVar7);
    }
    if (uVar5 < 0xb) goto LAB_1050da9fc;
    uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 10);
    if (uVar7 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar7);
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = -(long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if ((0xc < uVar5) && (uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 0xc), uVar7 != 0)) {
      uVar4 = *(undefined8 *)((long)piVar1 + uVar7);
      goto LAB_1050daa04;
    }
  }
  uVar4 = 0;
LAB_1050daa04:
  func_0x00010c032b00(puVar3,param_2,puVar8,uVar9,uVar10,puVar11,uVar4);
  _objc_release(puVar11);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1050daaf8; end: 1050dab1b; +[SCCharmsHiddenCharm objectClassFunctionPointer] */

undefined1  [16] FUN_1050daaf8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1050dab14;
  auVar1._0_8_ = 0x1050dab0c;
  return auVar1;
}



/* Entry: 1050dab1c; end: 1050dac0f;  */

undefined1 *
FUN_1050dab1c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_60;
  undefined *puStack_58;
  
  plVar1 = &lStack_60;
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_58 = PTR_PTR_1126e6120;
    lStack_60 = param_1;
    _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      _objc_release(uVar2);
      *(undefined4 *)((long)plVar1 + 0x14) = param_4;
      *(undefined8 *)((long)plVar1 + 0x20) = param_5;
      _objc_retain(param_6);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = param_6;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x30) = param_7;
    }
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 1050dac10; end: 1050dafdf;  */

void FUN_1050dac10(undefined *param_1)

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
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_1;
      func_0x00010c0f0720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar8,
                            "SELECT rowid, p FROM charms__hiddencharm_draft WHERE ownerIdentifier=?1 AND charmIdentifier=?2 LIMIT 1"
                           );
        if (puVar8 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010c0f0720(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar8,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = param_1;
          func_0x00010bf35b80(param_1);
          _sqlite3_bind_int64(puVar8,2,(long)(int)puVar1);
          puVar1 = puVar8;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar8;
            _sqlite3_column_int64(puVar8,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126b4938);
            _sqlite3_column_blob(puVar8,1);
            _sqlite3_column_bytes(puVar8,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar8);
            if (puVar3 == (undefined *)0x0) goto LAB_1050daf2c;
            puVar8 = PTR_PTR_1126b49e8;
            _objc_alloc(PTR_PTR_1126b49e8);
            puVar2 = puVar3;
            func_0x00010c0f0720(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010bf35b80(puVar3);
            puVar5 = puVar3;
            func_0x00010c0f0760(puVar3);
            puVar6 = puVar3;
            func_0x00010bf85d80(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar3;
            func_0x00010bfe1320(puVar3);
            FUN_1050dab1c(puVar8,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7);
            param_1 = puVar3;
            goto LAB_1050dad28;
          }
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar8 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126b4938);
      puVar3 = puVar8;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar8);
      if (puVar3 != (undefined *)0x0) {
        puVar8 = PTR_PTR_1126b49e8;
        _objc_alloc(PTR_PTR_1126b49e8);
        puVar2 = puVar3;
        func_0x00010c0f0720(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf35b80(puVar3);
        puVar5 = puVar3;
        func_0x00010c0f0760(puVar3);
        puVar6 = puVar3;
        func_0x00010bf85d80(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010bfe1320(puVar3);
        FUN_1050dab1c(puVar8,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7);
        param_1 = puVar3;
LAB_1050dad28:
        _objc_release(puVar6);
        _objc_release(puVar2);
        goto LAB_1050daf34;
      }
LAB_1050daf2c:
      param_1 = (undefined *)0x0;
    }
  }
  puVar8 = (undefined *)0x0;
LAB_1050daf34:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1050dafe0; end: 1050db053;  */

void FUN_1050dafe0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_1050dac10();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1050db054; end: 1050db2bf;  */

void FUN_1050db054(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b49e8;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_1050dac10();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar7 = PTR_PTR_1126b49e8;
    _objc_retain(param_1);
    _objc_opt_self(puVar7);
    puVar7 = PTR_PTR_1126b49e8;
    if (param_1 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_1;
      func_0x00010c0f0720(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010bf35b80(param_1);
      puVar4 = param_1;
      func_0x00010c0f0760(param_1);
      puVar5 = param_1;
      func_0x00010bf85d80(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_1;
      func_0x00010bfe1320(param_1);
      FUN_1050dab1c(puVar7,0xffffffffffffffff,puVar2,puVar3,puVar4,puVar5,puVar6);
      _objc_release(puVar5);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar7 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    puVar7 = param_1;
    func_0x00010c0f0720(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar7);
    puVar7 = param_1;
    func_0x00010bf35b80();
    *(int *)(puVar1 + 0x14) = (int)puVar7;
    puVar7 = param_1;
    func_0x00010c0f0760();
    *(undefined **)(puVar1 + 0x20) = puVar7;
    puVar7 = param_1;
    func_0x00010bf85d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar7);
    puVar7 = param_1;
    func_0x00010bfe1320();
    *(undefined **)(puVar1 + 0x30) = puVar7;
    _objc_retain(puVar1);
    puVar7 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1050db2c0; end: 1050db327;  */

void FUN_1050db2c0(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b4938;
    _objc_alloc(PTR_PTR_1126b4938);
    func_0x00010c032b00();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050db328; end: 1050db357; -[SCCharmsHiddenCharmChangeRequest .cxx_destruct] */

void FUN_1050db328(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1050db358; end: 1050db363; -[SCCharmsHiddenCharmChangeRequest table] */

char * FUN_1050db358(void)

{
  return "charms__hiddencharm_draft";
}



/* Entry: 1050db364; end: 1050db3ab; -[SCCharmsHiddenCharmChangeRequest createTableWithSQLite:] */

void FUN_1050db364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10dd8fd96,0xc3,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}


