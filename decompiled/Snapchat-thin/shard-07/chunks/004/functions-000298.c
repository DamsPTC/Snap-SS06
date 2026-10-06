/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1055660a4; end: 10556624f;  */

void FUN_1055660a4(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plStack_30;
  long *plStack_28;
  
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 < 0xc) {
    if (iVar5 - 3U < 9) {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plVar4 = *(long **)(param_2 + 0x40);
      plStack_28 = plVar3;
      (**(code **)(*plVar4 + 0x30))();
      plStack_30 = plVar4;
      func_0x0001055662e4(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
      plVar3 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    else {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plStack_28 = plVar3;
      func_0x000105566250(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_105566190:
    plVar3 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  else {
    if (iVar5 < 0xf) {
      if (iVar5 - 0xcU < 2) {
        plVar3 = *(long **)(param_2 + 0x38);
        (**(code **)(*plVar3 + 0x30))();
        plStack_28 = plVar3;
        FUN_1055663e4(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_105566190;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      bVar1 = *(byte *)(param_2 + 0x18);
      bVar2 = *(byte *)(param_2 + 0x19);
      *(undefined4 *)(param_1 + 1) = 0xe;
      param_1[2] = uVar6;
      *(byte *)(param_1 + 3) = bVar1;
      *(byte *)((long)param_1 + 0x19) = bVar2;
      *(byte *)((long)param_1 + 0x1a) = bVar2 ^ 1;
      *(byte *)((long)param_1 + 0x1b) = (bVar2 | bVar1) ^ 1;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = uVar6;
    }
    else {
      if (iVar5 != 0xf) {
        iVar5 = 0x10;
      }
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)(param_1 + 3) = 0x100;
      *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_FUN_110897348;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
  }
  return;
}



/* Entry: 105566250; end: 1055663e3;  */

undefined8 * FUN_105566250(undefined8 *param_1,int param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  
  lVar4 = *param_3;
  uVar1 = *(undefined1 *)(lVar4 + 0x19);
  uVar2 = *(undefined1 *)(lVar4 + 0x1a);
  if (param_2 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(lVar4 + 0x1b);
  }
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar2;
  *(byte *)((long)param_1 + 0x1b) = bVar5 & 1;
  *param_1 = &PTR_FUN_110897348;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1055663e4; end: 10556647b;  */

undefined8 * FUN_1055663e4(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_3;
  uVar2 = *(undefined2 *)(lVar4 + 0x19);
  uVar1 = *(undefined1 *)(lVar4 + 0x1b);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_FUN_110897348;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_105536ef4(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 2);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 10556647c; end: 105566577; -[SCCTPSearchSection initWithSection:term:last_updated_timestamp:hasBitmoji:hasCameo:data:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10556647c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e8f50;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + (long)_DAT_11272596c) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112725970);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112725970) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112725974) = param_5;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112725978) = param_6;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11272597c) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112725980);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112725980) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105566578; end: 10556659b; -[SCCTPSearchSection copyWithZone:] */

undefined8 FUN_105566578(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10556659c; end: 10556663b; -[SCCTPSearchSection hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_10556659c(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  ulong *puVar6;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = (ulong)*(uint *)(param_1 + _DAT_11272596c);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112725970);
  func_0x00010bfde980();
  uStack_48 = *(undefined8 *)(param_1 + _DAT_112725974);
  uStack_40 = (ulong)*(byte *)(param_1 + _DAT_112725978);
  uStack_38 = (ulong)*(byte *)(param_1 + _DAT_11272597c);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112725980);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10556672c:
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_105566738;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((ulong)puVar4 & 1) != 0) &&
        (((*(int *)((long)puVar3 + (long)_DAT_11272596c) ==
           *(int *)((long)param_3 + (long)_DAT_11272596c) &&
          (*(long *)((long)puVar3 + (long)_DAT_112725974) ==
           *(long *)((long)param_3 + (long)_DAT_112725974))) &&
         (*(char *)((long)puVar3 + (long)_DAT_112725978) ==
          *(char *)((long)param_3 + (long)_DAT_112725978))))) &&
       (*(char *)((long)puVar3 + (long)_DAT_11272597c) ==
        *(char *)((long)param_3 + (long)_DAT_11272597c))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_112725970);
      if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_112725970)) ||
         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(ulong **)((long)puVar3 + (long)_DAT_112725980);
        if (puVar6 != *(ulong **)((long)param_3 + (long)_DAT_112725980)) {
          func_0x00010c071ae0();
          goto LAB_105566738;
        }
        goto LAB_10556672c;
      }
    }
    puVar6 = (ulong *)0x0;
  }
LAB_105566738:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10556663c; end: 105566753; -[SCCTPSearchSection isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10556663c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10556672c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105566738;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((*(int *)(param_1 + (long)_DAT_11272596c) == *(int *)(param_3 + (long)_DAT_11272596c) &&
          (*(long *)(param_1 + (long)_DAT_112725974) == *(long *)(param_3 + (long)_DAT_112725974)))
         && (*(char *)(param_1 + (long)_DAT_112725978) == *(char *)(param_3 + (long)_DAT_112725978))
         ))) && (*(char *)(param_1 + (long)_DAT_11272597c) ==
                 *(char *)(param_3 + (long)_DAT_11272597c))) {
      lVar3 = *(long *)(param_1 + (long)_DAT_112725970);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_112725970)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_112725980);
        if (lVar3 != *(long *)(param_3 + (long)_DAT_112725980)) {
          func_0x00010c071ae0();
          goto LAB_105566738;
        }
        goto LAB_10556672c;
      }
    }
    lVar3 = 0;
  }
LAB_105566738:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105566754; end: 105566763; -[SCCTPSearchSection section] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_105566754(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11272596c);
}



/* Entry: 105566764; end: 105566773; -[SCCTPSearchSection term] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105566764(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112725970);
}



/* Entry: 105566774; end: 105566783; -[SCCTPSearchSection last_updated_timestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105566774(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112725974);
}



/* Entry: 105566784; end: 105566793; -[SCCTPSearchSection hasBitmoji] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105566784(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112725978);
}



/* Entry: 105566794; end: 1055667a3; -[SCCTPSearchSection hasCameo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105566794(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11272597c);
}



/* Entry: 1055667a4; end: 1055667b3; -[SCCTPSearchSection data] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1055667a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112725980);
}



/* Entry: 1055667b4; end: 1055667f3; -[SCCTPSearchSection .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055667b4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112725980,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112725970,0);
  return;
}



/* Entry: 1055667f4; end: 10556688b; -[SCCTPExternalId initWithExternal_id:item_type:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1055667f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e8f58;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112725984);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112725984) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112725988) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10556688c; end: 1055668af; -[SCCTPExternalId copyWithZone:] */

undefined8 FUN_10556688c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1055668b0; end: 10556692b; -[SCCTPExternalId hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1055668b0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112725984);
  func_0x00010bfde980();
  lStack_30 = (long)*(char *)(param_1 + _DAT_112725988);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1055669c0;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       (*(char *)((long)puVar2 + (long)_DAT_112725988) !=
        *(char *)((long)param_3 + (long)_DAT_112725988))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_1055669c0;
    }
    puVar4 = *(undefined8 **)((long)puVar2 + (long)_DAT_112725984);
    if (puVar4 != *(undefined8 **)((long)param_3 + (long)_DAT_112725984)) {
      func_0x00010c071ae0();
      goto LAB_1055669c0;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_1055669c0:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10556692c; end: 1055669db; -[SCCTPExternalId isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10556692c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1055669c0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (*(char *)(param_1 + (long)_DAT_112725988) != *(char *)(param_3 + (long)_DAT_112725988))) {
      lVar3 = 0;
      goto LAB_1055669c0;
    }
    lVar3 = *(long *)(param_1 + (long)_DAT_112725984);
    if (lVar3 != *(long *)(param_3 + (long)_DAT_112725984)) {
      func_0x00010c071ae0();
      goto LAB_1055669c0;
    }
  }
  lVar3 = 1;
LAB_1055669c0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1055669dc; end: 1055669eb; -[SCCTPExternalId external_id] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1055669dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112725984);
}



/* Entry: 1055669ec; end: 1055669fb; -[SCCTPExternalId item_type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1055669ec(long param_1)

{
  return (long)*(char *)(param_1 + _DAT_112725988);
}



/* Entry: 1055669fc; end: 105566a0f; -[SCCTPExternalId .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055669fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112725984,0);
  return;
}



/* Entry: 105566a10; end: 105566a77; -[SCCTPExternalIdSyncMetadata initWithItem_type:last_updated_timestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105566a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e8f60;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_11272598c) = param_4;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112725990) = param_1;
  }
  return;
}



/* Entry: 105566a78; end: 105566a9b; -[SCCTPExternalIdSyncMetadata copyWithZone:] */

undefined8 FUN_105566a78(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105566a9c; end: 105566b23; -[SCCTPExternalIdSyncMetadata hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_105566a9c(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  long lStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_28 = (long)*(char *)(param_1 + _DAT_11272598c);
  uVar3 = ~*(ulong *)(param_1 + _DAT_112725990) + *(ulong *)(param_1 + _DAT_112725990) * 0x40000;
  uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
  uStack_20 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  plVar1 = &lStack_28;
  func_0x000100505190(plVar1,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar1 == param_3) {
    plVar4 = (long *)0x1;
  }
  else {
    plVar4 = (long *)0x0;
    if ((plVar1 != (long *)0x0) && (param_3 != (long *)0x0)) {
      plVar4 = plVar1;
      _objc_opt_class(plVar1);
      plVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,plVar4);
      if ((((ulong)plVar2 & 1) == 0) ||
         (*(char *)((long)plVar1 + (long)_DAT_11272598c) !=
          *(char *)((long)param_3 + (long)_DAT_11272598c))) {
        plVar4 = (long *)0x0;
      }
      else {
        dVar5 = *(double *)((long)plVar1 + (long)_DAT_112725990);
        dVar7 = *(double *)((long)param_3 + (long)_DAT_112725990);
        dVar6 = ABS(dVar5 + dVar7) * 2.220446049250313e-16;
        if (dVar6 <= 2.2250738585072014e-308) {
          dVar6 = 2.2250738585072014e-308;
        }
        plVar4 = (long *)(ulong)(ABS(dVar5 - dVar7) < dVar6);
      }
    }
  }
  _objc_release(param_3);
  return plVar4;
}



/* Entry: 105566b24; end: 105566bef; -[SCCTPExternalIdSyncMetadata isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105566b24(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if (((uVar2 & 1) == 0) ||
         (*(char *)(param_1 + (long)_DAT_11272598c) != *(char *)(param_3 + (long)_DAT_11272598c))) {
        bVar3 = false;
      }
      else {
        dVar4 = *(double *)(param_1 + (long)_DAT_112725990);
        dVar6 = *(double *)(param_3 + (long)_DAT_112725990);
        dVar5 = ABS(dVar4 + dVar6) * 2.220446049250313e-16;
        if (dVar5 <= 2.2250738585072014e-308) {
          dVar5 = 2.2250738585072014e-308;
        }
        bVar3 = ABS(dVar4 - dVar6) < dVar5;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 105566bf0; end: 105566bff; -[SCCTPExternalIdSyncMetadata item_type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105566bf0(long param_1)

{
  return (long)*(char *)(param_1 + _DAT_11272598c);
}



/* Entry: 105566c00; end: 105566c0f; -[SCCTPExternalIdSyncMetadata last_updated_timestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105566c00(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112725990);
}



/* Entry: 105566c10; end: 105566cbb; -[SCCTPFeedTree initWithContext:last_updated_timestamp:data:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105566c10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e8f68;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112725994) = param_4;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112725998) = param_1;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272599c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272599c) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 105566cbc; end: 105566cdf; -[SCCTPFeedTree copyWithZone:] */

undefined8 FUN_105566cbc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105566ce0; end: 105566d77; -[SCCTPFeedTree hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_105566ce0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar3 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = ~*(ulong *)(param_1 + _DAT_112725998) + *(ulong *)(param_1 + _DAT_112725998) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = *(undefined8 *)(param_1 + _DAT_112725994);
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272599c);
  func_0x00010bfde980();
  uStack_20 = uVar2;
  func_0x000100505190(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105566e3c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105566e48;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (*(long *)((long)puVar3 + (long)_DAT_112725994) == *(long *)(param_3 + _DAT_112725994))) {
      dVar8 = ABS(*(double *)((long)puVar3 + (long)_DAT_112725998) -
                  *(double *)(param_3 + _DAT_112725998));
      dVar7 = ABS(*(double *)((long)puVar3 + (long)_DAT_112725998) +
                  *(double *)(param_3 + _DAT_112725998)) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        puVar6 = *(undefined1 **)((long)puVar3 + (long)_DAT_11272599c);
        if (puVar6 != *(undefined1 **)(param_3 + _DAT_11272599c)) {
          func_0x00010c071ae0();
          goto LAB_105566e48;
        }
        goto LAB_105566e3c;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105566e48:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105566d78; end: 105566e63; -[SCCTPFeedTree isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105566d78(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105566e3c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105566e48;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (*(long *)(param_1 + (long)_DAT_112725994) == *(long *)(param_3 + (long)_DAT_112725994))) {
      dVar5 = *(double *)(param_1 + (long)_DAT_112725998);
      dVar6 = *(double *)(param_3 + (long)_DAT_112725998);
      dVar7 = ABS(dVar5 - dVar6);
      dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
        bVar1 = dVar7 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + (long)_DAT_11272599c);
        if (lVar4 != *(long *)(param_3 + (long)_DAT_11272599c)) {
          func_0x00010c071ae0();
          goto LAB_105566e48;
        }
        goto LAB_105566e3c;
      }
    }
    lVar4 = 0;
  }
LAB_105566e48:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 105566e64; end: 105566e73; -[SCCTPFeedTree context] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105566e64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112725994);
}



/* Entry: 105566e74; end: 105566e83; -[SCCTPFeedTree last_updated_timestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105566e74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112725998);
}



/* Entry: 105566e84; end: 105566e93; -[SCCTPFeedTree data] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105566e84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272599c);
}



/* Entry: 105566e94; end: 105566ea7; -[SCCTPFeedTree .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105566e94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272599c,0);
  return;
}



/* Entry: 105566ea8; end: 105566f73; -[SCCTPSectionMetadata initWithSection_id:type:rank:layoutDirection:displayCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105566ea8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined4 param_5,undefined1 param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1126e8f70;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127259a0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127259a0) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127259a4) = param_4;
    *(undefined4 *)((long)puVar1 + (long)_DAT_1127259a8) = param_5;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127259ac) = param_6;
    *(undefined4 *)((long)puVar1 + (long)_DAT_1127259b0) = param_7;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105566f74; end: 105566f97; -[SCCTPSectionMetadata copyWithZone:] */

undefined8 FUN_105566f74(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105566f98; end: 10556702b; -[SCCTPSectionMetadata hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_105566f98(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_50;
  long lStack_48;
  ulong uStack_40;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127259a0);
  func_0x00010bfde980();
  lStack_48 = (long)*(char *)(param_1 + _DAT_1127259a4);
  uStack_40 = (ulong)*(uint *)(param_1 + _DAT_1127259a8);
  lStack_38 = (long)*(char *)(param_1 + _DAT_1127259ac);
  uStack_30 = (ulong)*(uint *)(param_1 + _DAT_1127259b0);
  uStack_50 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105567108;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if (((((ulong)puVar3 & 1) == 0) ||
        (((*(char *)((long)puVar2 + (long)_DAT_1127259a4) != param_3[_DAT_1127259a4] ||
          (*(int *)((long)puVar2 + (long)_DAT_1127259a8) != *(int *)(param_3 + _DAT_1127259a8))) ||
         (*(char *)((long)puVar2 + (long)_DAT_1127259ac) != param_3[_DAT_1127259ac])))) ||
       (*(int *)((long)puVar2 + (long)_DAT_1127259b0) != *(int *)(param_3 + _DAT_1127259b0))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_105567108;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + (long)_DAT_1127259a0);
    if (puVar4 != *(undefined1 **)(param_3 + _DAT_1127259a0)) {
      func_0x00010c071ae0();
      goto LAB_105567108;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_105567108:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10556702c; end: 105567123; -[SCCTPSectionMetadata isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10556702c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105567108;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) == 0) ||
        (((*(char *)(param_1 + (long)_DAT_1127259a4) != *(char *)(param_3 + (long)_DAT_1127259a4) ||
          (*(int *)(param_1 + (long)_DAT_1127259a8) != *(int *)(param_3 + (long)_DAT_1127259a8))) ||
         (*(char *)(param_1 + (long)_DAT_1127259ac) != *(char *)(param_3 + (long)_DAT_1127259ac)))))
       || (*(int *)(param_1 + (long)_DAT_1127259b0) != *(int *)(param_3 + (long)_DAT_1127259b0))) {
      lVar3 = 0;
      goto LAB_105567108;
    }
    lVar3 = *(long *)(param_1 + (long)_DAT_1127259a0);
    if (lVar3 != *(long *)(param_3 + (long)_DAT_1127259a0)) {
      func_0x00010c071ae0();
      goto LAB_105567108;
    }
  }
  lVar3 = 1;
LAB_105567108:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105567124; end: 105567133; -[SCCTPSectionMetadata section_id] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105567124(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127259a0);
}



/* Entry: 105567134; end: 105567143; -[SCCTPSectionMetadata type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105567134(long param_1)

{
  return (long)*(char *)(param_1 + _DAT_1127259a4);
}



/* Entry: 105567144; end: 105567153; -[SCCTPSectionMetadata rank] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_105567144(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_1127259a8);
}



/* Entry: 105567154; end: 105567163; -[SCCTPSectionMetadata layoutDirection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105567154(long param_1)

{
  return (long)*(char *)(param_1 + _DAT_1127259ac);
}



/* Entry: 105567164; end: 105567173; -[SCCTPSectionMetadata displayCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_105567164(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_1127259b0);
}



/* Entry: 105567174; end: 105567187; -[SCCTPSectionMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105567174(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127259a0,0);
  return;
}



/* Entry: 105567188; end: 10556737f; -[SCCTPItem initWithItem_id:rank_id:data:ct_id:section:type:context:version:clientCacheTtlMinutes:requestId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105567188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined4 param_12,
             undefined4 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_11);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126e8f78;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127259b4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127259b4) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127259b8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127259b8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127259bc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127259bc) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127259c0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127259c0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127259c4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127259c4) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127259c8) = param_8;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127259cc) = param_9;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127259d0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127259d0) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + (long)_DAT_1127259d4) = param_12;
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127259d8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127259d8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105567380; end: 1055673a3; -[SCCTPItem copyWithZone:] */

undefined8 FUN_105567380(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1055673a4; end: 10556748b; -[SCCTPItem hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1055673a4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127259b4);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127259b8);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127259bc);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127259c0);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127259c4);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  lStack_50 = (long)*(char *)(param_1 + _DAT_1127259c8);
  lStack_48 = (long)*(char *)(param_1 + _DAT_1127259cc);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127259d0);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(uint *)(param_1 + _DAT_1127259d4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127259d8);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_78;
  uStack_30 = uVar1;
  func_0x000100505190(puVar3,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105567604:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105567610;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(char *)((long)puVar3 + (long)_DAT_1127259c8) ==
          *(char *)((long)param_3 + (long)_DAT_1127259c8) &&
         (*(char *)((long)puVar3 + (long)_DAT_1127259cc) ==
          *(char *)((long)param_3 + (long)_DAT_1127259cc))) &&
        (*(int *)((long)puVar3 + (long)_DAT_1127259d4) ==
         *(int *)((long)param_3 + (long)_DAT_1127259d4))))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_1127259b4);
      if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_1127259b4)) ||
         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + (long)_DAT_1127259b8);
        if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_1127259b8)) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + (long)_DAT_1127259bc);
          if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_1127259bc)) ||
             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + (long)_DAT_1127259c0);
            if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_1127259c0)) ||
               (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + (long)_DAT_1127259c4);
              if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_1127259c4)) ||
                 (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = *(long *)((long)puVar3 + (long)_DAT_1127259d0);
                if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_1127259d0)) ||
                   (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  puVar6 = *(undefined8 **)((long)puVar3 + (long)_DAT_1127259d8);
                  if (puVar6 != *(undefined8 **)((long)param_3 + (long)_DAT_1127259d8)) {
                    func_0x00010c071ae0();
                    goto LAB_105567610;
                  }
                  goto LAB_105567604;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105567610:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10556748c; end: 10556762b; -[SCCTPItem isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10556748c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105567604:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105567610;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(char *)(param_1 + (long)_DAT_1127259c8) == *(char *)(param_3 + (long)_DAT_1127259c8) &&
         (*(char *)(param_1 + (long)_DAT_1127259cc) == *(char *)(param_3 + (long)_DAT_1127259cc)))
        && (*(int *)(param_1 + (long)_DAT_1127259d4) == *(int *)(param_3 + (long)_DAT_1127259d4)))))
    {
      lVar3 = *(long *)(param_1 + (long)_DAT_1127259b4);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127259b4)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_1127259b8);
        if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127259b8)) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + (long)_DAT_1127259bc);
          if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127259bc)) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + (long)_DAT_1127259c0);
            if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127259c0)) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + (long)_DAT_1127259c4);
              if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127259c4)) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                lVar3 = *(long *)(param_1 + (long)_DAT_1127259d0);
                if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127259d0)) ||
                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                  lVar3 = *(long *)(param_1 + (long)_DAT_1127259d8);
                  if (lVar3 != *(long *)(param_3 + (long)_DAT_1127259d8)) {
                    func_0x00010c071ae0();
                    goto LAB_105567610;
                  }
                  goto LAB_105567604;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105567610:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10556762c; end: 10556763b; -[SCCTPItem item_id] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10556762c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127259b4);
}



/* Entry: 10556763c; end: 10556764b; -[SCCTPItem rank_id] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10556763c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127259b8);
}



/* Entry: 10556764c; end: 10556765b; -[SCCTPItem data] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10556764c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127259bc);
}



/* Entry: 10556765c; end: 10556766b; -[SCCTPItem ct_id] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10556765c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127259c0);
}



/* Entry: 10556766c; end: 10556767b; -[SCCTPItem section] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10556766c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127259c4);
}



/* Entry: 10556767c; end: 10556768b; -[SCCTPItem type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10556767c(long param_1)

{
  return (long)*(char *)(param_1 + _DAT_1127259c8);
}



/* Entry: 10556768c; end: 10556769b; -[SCCTPItem context] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10556768c(long param_1)

{
  return (long)*(char *)(param_1 + _DAT_1127259cc);
}



/* Entry: 10556769c; end: 1055676ab; -[SCCTPItem version] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10556769c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127259d0);
}



/* Entry: 1055676ac; end: 1055676bb; -[SCCTPItem clientCacheTtlMinutes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1055676ac(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_1127259d4);
}



/* Entry: 1055676bc; end: 1055676cb; -[SCCTPItem requestId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1055676bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127259d8);
}



/* Entry: 1055676cc; end: 10556775b; -[SCCTPItem .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055676cc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127259d8,0);
  _objc_storeStrong(param_1 + _DAT_1127259d0,0);
  _objc_storeStrong(param_1 + _DAT_1127259c4,0);
  _objc_storeStrong(param_1 + _DAT_1127259c0,0);
  _objc_storeStrong(param_1 + _DAT_1127259bc,0);
  _objc_storeStrong(param_1 + _DAT_1127259b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127259b4,0);
  return;
}



/* Entry: 10556775c; end: 10556784b; -[SCCTPFeedSyncMetadata initWithFeed_id:type:context:last_updated_timestamp:page_token:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10556775c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126e8f80;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127259dc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127259dc) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127259e0) = param_5;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127259e4) = param_6;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127259e8) = param_1;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127259ec);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127259ec) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10556784c; end: 10556786f; -[SCCTPFeedSyncMetadata copyWithZone:] */

undefined8 FUN_10556784c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105567870; end: 105567927; -[SCCTPFeedSyncMetadata hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_105567870(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127259dc);
  func_0x00010bfde980();
  lStack_48 = (long)*(char *)(param_1 + _DAT_1127259e0);
  uVar7 = ~*(ulong *)(param_1 + _DAT_1127259e8) + *(ulong *)(param_1 + _DAT_1127259e8) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  lStack_40 = (long)*(char *)(param_1 + _DAT_1127259e4);
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127259ec);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar3;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_105567a24:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105567a30;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((*(char *)((long)puVar4 + (long)_DAT_1127259e0) == param_3[_DAT_1127259e0] &&
        (*(char *)((long)puVar4 + (long)_DAT_1127259e4) == param_3[_DAT_1127259e4])))) {
      dVar10 = ABS(*(double *)((long)puVar4 + (long)_DAT_1127259e8) -
                   *(double *)(param_3 + _DAT_1127259e8));
      dVar9 = ABS(*(double *)((long)puVar4 + (long)_DAT_1127259e8) +
                  *(double *)(param_3 + _DAT_1127259e8)) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if ((bVar1) &&
         ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_1127259dc),
          lVar6 == *(long *)(param_3 + _DAT_1127259dc) || (func_0x00010c071ae0(), (int)lVar6 != 0)))
         ) {
        puVar8 = *(undefined1 **)((long)puVar4 + (long)_DAT_1127259ec);
        if (puVar8 != *(undefined1 **)(param_3 + _DAT_1127259ec)) {
          func_0x00010c071ae0();
          goto LAB_105567a30;
        }
        goto LAB_105567a24;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_105567a30:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 105567928; end: 105567a4b; -[SCCTPFeedSyncMetadata isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105567928(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105567a24:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105567a30;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(char *)(param_1 + (long)_DAT_1127259e0) == *(char *)(param_3 + (long)_DAT_1127259e0) &&
        (*(char *)(param_1 + (long)_DAT_1127259e4) == *(char *)(param_3 + (long)_DAT_1127259e4)))))
    {
      dVar5 = *(double *)(param_1 + (long)_DAT_1127259e8);
      dVar6 = *(double *)(param_3 + (long)_DAT_1127259e8);
      dVar7 = ABS(dVar5 - dVar6);
      dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
        bVar1 = dVar7 < dVar5;
      }
      if ((bVar1) &&
         ((lVar4 = *(long *)(param_1 + (long)_DAT_1127259dc),
          lVar4 == *(long *)(param_3 + (long)_DAT_1127259dc) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + (long)_DAT_1127259ec);
        if (lVar4 != *(long *)(param_3 + (long)_DAT_1127259ec)) {
          func_0x00010c071ae0();
          goto LAB_105567a30;
        }
        goto LAB_105567a24;
      }
    }
    lVar4 = 0;
  }
LAB_105567a30:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 105567a4c; end: 105567a5b; -[SCCTPFeedSyncMetadata feed_id] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105567a4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127259dc);
}



/* Entry: 105567a5c; end: 105567a6b; -[SCCTPFeedSyncMetadata type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105567a5c(long param_1)

{
  return (long)*(char *)(param_1 + _DAT_1127259e0);
}



/* Entry: 105567a6c; end: 105567a7b; -[SCCTPFeedSyncMetadata context] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105567a6c(long param_1)

{
  return (long)*(char *)(param_1 + _DAT_1127259e4);
}



/* Entry: 105567a7c; end: 105567a8b; -[SCCTPFeedSyncMetadata last_updated_timestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105567a7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127259e8);
}



/* Entry: 105567a8c; end: 105567a9b; -[SCCTPFeedSyncMetadata page_token] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105567a8c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127259ec);
}



/* Entry: 105567a9c; end: 105567adb; -[SCCTPFeedSyncMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105567a9c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127259ec,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127259dc,0);
  return;
}



/* Entry: 105567adc; end: 105567b93;  */

undefined8 FUN_105567adc(void)

{
  int iVar1;
  
  if ((bRam0000000113819898 & 1) == 0) {
    iVar1 = 0x13819898;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113819830 = 0xe;
      puRam0000000113819838 = &UNK_10f2d12ba;
      uRam0000000113819840 = 0x10001;
      pcRam0000000113819848 = FUN_105567b94;
      pcRam0000000113819850 = FUN_105567bcc;
      ppuRam0000000113819828 = &PTR_DAT_110864b98;
      uRam0000000113819868 = 0;
      uRam0000000113819860 = 0;
      uRam0000000113819878 = 0;
      uRam0000000113819870 = 0;
      uRam0000000113819888 = 0;
      uRam0000000113819880 = 0;
      uRam0000000113819890 = 0;
      ___cxa_atexit(0x105077cd4,0x113819828,0x100000000);
      ___cxa_guard_release(0x113819898);
    }
  }
  return 0x113819828;
}



/* Entry: 105567b94; end: 105567bcb;  */

undefined8 FUN_105567b94(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((4 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar2 != 0)) {
    return *(undefined8 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 105567bcc; end: 105567c1f;  */

undefined8 FUN_105567bcc(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010bf4e080(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105567c20; end: 105567c2b; +[SCCTPFeedTree table] */

undefined * FUN_105567c20(void)

{
  return &UNK_10f2d12c2;
}



/* Entry: 105567c2c; end: 105567d2f; +[SCCTPFeedTree immutableObjectParse:bufferSize:] */

void FUN_105567c2c(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  ushort uVar2;
  undefined *puVar3;
  ushort *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126bacb8;
  _objc_alloc(PTR_PTR_1126bacb8);
  puVar4 = (ushort *)((long)piVar1 - (long)*piVar1);
  uVar2 = *puVar4;
  uVar7 = 0;
  if (uVar2 < 5) {
    uVar5 = 0;
  }
  else {
    if ((ulong)puVar4[2] == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)((long)piVar1 + (ulong)puVar4[2]);
    }
    if (6 < uVar2) {
      if ((ulong)puVar4[3] != 0) {
        uVar7 = *(undefined8 *)((long)piVar1 + (ulong)puVar4[3]);
      }
      if ((8 < uVar2) && (puVar4[4] != 0)) {
        puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
        _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
        func_0x00010bffa160();
        goto LAB_105567ce4;
      }
    }
  }
  puVar6 = (undefined *)0x0;
LAB_105567ce4:
  func_0x00010c0042a0(uVar7,puVar3,param_2,uVar5,puVar6);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105567d30; end: 105567d53; +[SCCTPFeedTree objectClassFunctionPointer] */

undefined1  [16] FUN_105567d30(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x105567d4c;
  auVar1._0_8_ = 0x105567d44;
  return auVar1;
}



/* Entry: 105567d54; end: 105567e07;  */

undefined1 *
FUN_105567d54(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_5);
  puVar3 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puStack_48 = PTR_PTR_1126e8f88;
    lStack_50 = param_2;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_3;
      *(undefined8 *)((long)plVar1 + 0x18) = param_4;
      *(undefined8 *)((long)plVar1 + 0x20) = param_1;
      _objc_retain(param_5);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = param_5;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_5);
  return puVar3;
}



/* Entry: 105567e08; end: 10556810b;  */

void FUN_105567e08(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x00010bf636c0();
      _objc_release(puVar1);
      func_0x0001001b9e08(puVar5,&UNK_10f2d12d0);
      if (puVar5 != (undefined *)0x0) {
        puVar1 = param_2;
        func_0x00010bf4e080(param_2);
        _sqlite3_bind_int64(puVar5,1,puVar1);
        puVar1 = puVar5;
        _sqlite3_step();
        if ((int)puVar1 == 100) {
          puVar1 = puVar5;
          _sqlite3_column_int64(puVar5,0);
          puVar2 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126bacb8);
          _sqlite3_column_blob(puVar5,1);
          _sqlite3_column_bytes(puVar5,1);
          puVar3 = puVar2;
          func_0x00010c0dfea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_2);
          _objc_release(puVar2);
          _sqlite3_reset(puVar5);
          if (puVar3 == (undefined *)0x0) goto LAB_10556807c;
          puVar5 = PTR_PTR_1126bad18;
          _objc_alloc(PTR_PTR_1126bad18);
          puVar2 = puVar3;
          func_0x00010bf4e080(puVar3);
          func_0x00010c08ac80(puVar3);
          puVar4 = puVar3;
          func_0x00010bf63640(puVar3);
          _objc_retainAutoreleasedReturnValue();
          FUN_105567d54(param_1,puVar5,puVar1,puVar2,puVar4);
          param_2 = puVar3;
          goto LAB_105567f04;
        }
      }
    }
    else {
      puVar1 = param_2;
      func_0x00010c1422e0(param_2);
      puVar5 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126bacb8);
      puVar2 = puVar5;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      _objc_release(puVar5);
      if (puVar2 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126bad18;
        _objc_alloc(PTR_PTR_1126bad18);
        puVar3 = puVar2;
        func_0x00010bf4e080(puVar2);
        func_0x00010c08ac80(puVar2);
        puVar4 = puVar2;
        func_0x00010bf63640(puVar2);
        _objc_retainAutoreleasedReturnValue();
        FUN_105567d54(param_1,puVar5,puVar1,puVar3,puVar4);
        param_2 = puVar2;
LAB_105567f04:
        _objc_release(puVar4);
        goto LAB_105568084;
      }
LAB_10556807c:
      param_2 = (undefined *)0x0;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_105568084:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10556810c; end: 10556817f;  */

void FUN_10556810c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_105567e08();
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



/* Entry: 105568180; end: 105568373;  */

void FUN_105568180(undefined8 param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126bad18;
  _objc_retain(param_2);
  _objc_opt_self(puVar1);
  puVar1 = param_2;
  FUN_105567e08();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    puVar4 = PTR_PTR_1126bad18;
    _objc_retain(param_2);
    _objc_opt_self(puVar4);
    puVar4 = PTR_PTR_1126bad18;
    if (param_2 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_2;
      func_0x00010bf4e080(param_2);
      func_0x00010c08ac80(param_2);
      puVar3 = param_2;
      func_0x00010bf63640(param_2);
      _objc_retainAutoreleasedReturnValue();
      FUN_105567d54(param_1,puVar4,0xffffffffffffffff,puVar2,puVar3);
      _objc_release(puVar3);
    }
    *(undefined4 *)(puVar4 + 0x10) = 1;
    _objc_release(param_2);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
    puVar4 = param_2;
    func_0x00010bf4e080();
    *(undefined **)(puVar1 + 0x18) = puVar4;
    func_0x00010c08ac80(param_2);
    *(undefined8 *)(puVar1 + 0x20) = param_1;
    puVar4 = param_2;
    func_0x00010bf63640(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar4);
    _objc_retain(puVar1);
    puVar4 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105568374; end: 1055683db;  */

void FUN_105568374(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126bacb8;
    _objc_alloc(PTR_PTR_1126bacb8);
    func_0x00010c0042a0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055683dc; end: 1055683e7; -[SCCTPFeedTreeChangeRequest .cxx_destruct] */

void FUN_1055683dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 1055683e8; end: 1055683f3; -[SCCTPFeedTreeChangeRequest table] */

undefined * FUN_1055683e8(void)

{
  return &UNK_10f2d12c2;
}



/* Entry: 1055683f4; end: 10556843b; -[SCCTPFeedTreeChangeRequest createTableWithSQLite:] */

void FUN_1055683f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10ddb1f8b,0x7e,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 10556843c; end: 1055687d3; -[SCCTPFeedTreeChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_10556843c(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar2 = *(int *)(param_1 + 0x10);
  puVar4 = param_1;
  if (iVar2 == 1) {
    FUN_105568374(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    FUN_1055687d4(param_4,puVar4);
    func_0x0001001ce6fc(param_4,lVar5,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar3 = *puVar9;
    lVar5 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f2d1335);
    if (lVar5 == 0) goto LAB_105568770;
    _sqlite3_bind_blob(lVar5,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar3);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
       (uVar6 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar6 == 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)((long)piVar1 + uVar6);
    }
    _sqlite3_bind_int64(lVar5,2,uVar8);
    _sqlite3_step();
    if ((int)lVar5 != 0x65) goto LAB_105568770;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar4);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bacb8);
    func_0x00010c21c9a0(puVar7);
LAB_105568758:
    _objc_release(puVar7);
    _objc_retain(puVar4);
    puVar7 = puVar4;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f2d130c);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar4 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126bacb8);
            func_0x00010c21c9a0(puVar4);
            _objc_release(puVar7);
            _objc_release(puVar4);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10556877c;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_10556877c;
    }
    FUN_105568374(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    FUN_1055687d4(param_4,puVar4);
    func_0x0001001ce6fc(param_4,lVar5,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar3 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f2d136c);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar3);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar6 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar6 == 0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined8 *)((long)piVar1 + uVar6);
      }
      _sqlite3_bind_int64(param_3,3,uVar8);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126bacb8);
        func_0x00010c21c9a0(puVar7);
        goto LAB_105568758;
      }
    }
LAB_105568770:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar4);
LAB_10556877c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1055687d4; end: 105568933;  */

ulong FUN_1055687d4(undefined8 param_1,ulong param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf4e080(param_3);
  func_0x00010c08ac80(param_3);
  lVar5 = param_3;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lVar5 == 0) {
    uVar8 = 0;
  }
  else {
    lVar6 = lVar5;
    _objc_retainAutorelease(lVar5);
    func_0x00010bf25f00();
    lVar7 = lVar5;
    func_0x00010c08fa60(lVar5);
    uVar8 = param_2;
    func_0x0001001d1030(param_2,lVar6,lVar7);
  }
  _objc_release(lVar5);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x0001001ce11c(param_1,0,param_2,6);
  func_0x0001001ce170(param_2,4,lVar4,0);
  func_0x0001001ce220(param_2,8,uVar8 & 0xffffffff);
  func_0x0001001ce548(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(lVar5);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 105568934; end: 105568997;  */

undefined ** FUN_105568934(void)

{
  int iVar1;
  
  if ((bRam00000001138198a0 & 1) == 0) {
    iVar1 = 0x138198a0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_1130e3a30,0x100000000);
      ___cxa_guard_release(0x1138198a0);
    }
  }
  return &PTR_PTR_1130e3a30;
}



/* Entry: 105568998; end: 105568a1f;  */

void FUN_105568998(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 0xb) || (puVar1[5] == 0)) {
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



/* Entry: 105568a20; end: 105568aab;  */

void FUN_105568a20(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf5cfe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010bf5cfe0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105568aac; end: 105568b67;  */

undefined8 FUN_105568aac(void)

{
  int iVar1;
  
  if ((bRam0000000113819918 & 1) == 0) {
    iVar1 = 0x13819918;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001138198b0 = 0xe;
      puRam00000001138198b8 = &UNK_10f2d13b3;
      uRam00000001138198c0 = 0x1010000;
      pcRam00000001138198c8 = FUN_105568b68;
      pcRam00000001138198d0 = FUN_105568ba4;
      ppuRam00000001138198a8 = &PTR_DAT_110897208;
      uRam00000001138198e8 = 0;
      uRam00000001138198e0 = 0;
      uRam00000001138198f8 = 0;
      uRam00000001138198f0 = 0;
      uRam0000000113819908 = 0;
      uRam0000000113819900 = 0;
      uRam0000000113819910 = 0;
      ___cxa_atexit(0x10555a158,0x1138198a8,0x100000000);
      ___cxa_guard_release(0x113819918);
    }
  }
  return 0x1138198a8;
}



/* Entry: 105568b68; end: 105568ba3;  */

int FUN_105568b68(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  char cVar2;
  ulong uVar3;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xf) ||
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7], uVar3 == 0)) {
    cVar2 = '\0';
  }
  else {
    cVar2 = *(char *)((long)piVar1 + uVar3);
  }
  return (int)cVar2;
}



/* Entry: 105568ba4; end: 105568bf7;  */

undefined8 FUN_105568ba4(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010c27dd80(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105568bf8; end: 105568cb3;  */

undefined8 FUN_105568bf8(void)

{
  int iVar1;
  
  if ((bRam0000000113819990 & 1) == 0) {
    iVar1 = 0x13819990;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113819928 = 0xe;
      puRam0000000113819930 = &UNK_10f2d13b8;
      uRam0000000113819938 = 0x1010000;
      pcRam0000000113819940 = FUN_105568cb4;
      pcRam0000000113819948 = FUN_105568cf0;
      ppuRam0000000113819920 = &PTR_DAT_110897278;
      uRam0000000113819960 = 0;
      uRam0000000113819958 = 0;
      uRam0000000113819970 = 0;
      uRam0000000113819968 = 0;
      uRam0000000113819980 = 0;
      uRam0000000113819978 = 0;
      uRam0000000113819988 = 0;
      ___cxa_atexit(0x10555ad28,0x113819920,0x100000000);
      ___cxa_guard_release(0x113819990);
    }
  }
  return 0x113819920;
}



/* Entry: 105568cb4; end: 105568cef;  */

int FUN_105568cb4(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  char cVar2;
  ulong uVar3;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x11) ||
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[8], uVar3 == 0)) {
    cVar2 = '\0';
  }
  else {
    cVar2 = *(char *)((long)piVar1 + uVar3);
  }
  return (int)cVar2;
}



/* Entry: 105568cf0; end: 105568d43;  */

undefined8 FUN_105568cf0(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010bf4e080(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105568d44; end: 105568d4f; +[SCCTPItem table] */

undefined * FUN_105568d44(void)

{
  return &UNK_10f2d13c0;
}



/* Entry: 105568d50; end: 10556918b; +[SCCTPItem immutableObjectParse:bufferSize:] */

void FUN_105568d50(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  long lVar4;
  ushort uVar5;
  long lVar6;
  ulong uVar7;
  ushort *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  char cVar15;
  undefined1 uVar16;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126bacd8;
  _objc_alloc(PTR_PTR_1126bacd8);
  lVar4 = (long)*piVar1;
  uVar5 = *(ushort *)((long)piVar1 - lVar4);
  if (uVar5 < 5) {
    puVar10 = (undefined *)0x0;
LAB_105568e40:
    puVar9 = (undefined *)0x0;
LAB_105568e44:
    puVar11 = (undefined *)0x0;
LAB_105568e48:
    puVar12 = (undefined *)0x0;
LAB_105568e4c:
    lVar4 = 0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)piVar1 - lVar4))[2];
    if (uVar7 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar7);
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = (long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - lVar4);
    }
    lVar4 = -lVar4;
    if (uVar5 < 7) goto LAB_105568e40;
    uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar4 + 6);
    if (uVar7 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar7);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = -(long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar5 < 9) goto LAB_105568e44;
    if (*(short *)((long)piVar1 + lVar4 + 8) == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar11 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc();
      func_0x00010bffa160();
      lVar4 = -(long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar5 < 0xb) goto LAB_105568e48;
    uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar4 + 10);
    if (uVar7 == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar7);
      puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = -(long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if ((uVar5 < 0xd) || (uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar4 + 0xc), uVar7 == 0))
    goto LAB_105568e4c;
    puVar2 = (uint *)((long)piVar1 + uVar7);
    lVar4 = (long)puVar2 + (ulong)*puVar2;
  }
  FUN_10556aed0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)*piVar1;
  puVar8 = (ushort *)((long)piVar1 - lVar6);
  uVar5 = *puVar8;
  if (uVar5 < 0xf) {
    uVar16 = 0;
    cVar15 = '\0';
  }
  else {
    if ((ulong)puVar8[7] == 0) {
      cVar15 = '\0';
    }
    else {
      cVar15 = *(char *)((long)piVar1 + (ulong)puVar8[7]);
    }
    if (uVar5 < 0x11) {
      uVar16 = 0;
    }
    else {
      if ((ulong)puVar8[8] == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = *(undefined1 *)((long)piVar1 + (ulong)puVar8[8]);
      }
      if (0x12 < uVar5) {
        if ((ulong)puVar8[9] == 0) {
          puVar13 = (undefined *)0x0;
        }
        else {
          puVar2 = (uint *)((long)piVar1 + (ulong)puVar8[9]);
          puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar2 + (ulong)*puVar2 + 4);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = (long)*piVar1;
          uVar5 = *(ushort *)((long)piVar1 - lVar6);
        }
        if (((uVar5 < 0x15) || (uVar5 < 0x17)) ||
           (uVar7 = (ulong)*(ushort *)((long)piVar1 + (0x16 - lVar6)), uVar7 == 0)) {
          puVar14 = (undefined *)0x0;
        }
        else {
          puVar2 = (uint *)((long)piVar1 + uVar7);
          puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar2 + (ulong)*puVar2 + 4);
          _objc_retainAutoreleasedReturnValue();
        }
        goto LAB_105568f84;
      }
    }
  }
  puVar14 = (undefined *)0x0;
  puVar13 = (undefined *)0x0;
LAB_105568f84:
  func_0x00010c020440(puVar3,param_2,puVar10,puVar9,puVar11,puVar12,lVar4,(int)cVar15,uVar16);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(lVar4);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10556918c; end: 10556919f; +[SCCTPItem objectClassFunctionPointer] */

undefined1  [16] FUN_10556918c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = FUN_1055691ec;
  auVar1._0_8_ = FUN_1055691a0;
  return auVar1;
}



/* Entry: 1055691a0; end: 1055691eb;  */

void FUN_1055691a0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 0xf2d13cc;
  _strcmp(&UNK_10f2d13cc,param_1);
  if (iVar1 != 0) {
    _strcmp(&UNK_10f2d13d4,param_1);
  }
  return;
}



/* Entry: 1055691ec; end: 10556932f;  */

bool FUN_1055691ec(int param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  if (param_1 == 1) {
    func_0x0001001b9e08(param_2,&UNK_10f2d1428);
    _sqlite3_bind_int64();
    if ((0xc < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
       (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar5 != 0)) {
      puVar2 = (uint *)((long)piVar1 + uVar5);
      piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
         (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar5 == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)((long)piVar1 + uVar5);
      }
      _sqlite3_bind_int64(param_2,2,uVar4);
      goto LAB_1055692f4;
    }
  }
  else {
    if (param_1 != 0) {
      return false;
    }
    func_0x0001001b9e08(param_2,&UNK_10f2d13e2);
    _sqlite3_bind_int64();
    if ((6 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
       (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar5 != 0)) {
      puVar2 = (uint *)((long)piVar1 + uVar5);
      puVar3 = (undefined4 *)((long)puVar2 + (ulong)*puVar2);
      _sqlite3_bind_text(param_2,2,puVar3 + 1,*puVar3,0);
      goto LAB_1055692f4;
    }
  }
  _sqlite3_bind_null(param_2,2);
LAB_1055692f4:
  _sqlite3_step(param_2);
  return (int)param_2 == 0x65;
}


