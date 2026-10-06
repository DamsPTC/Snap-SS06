/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105c84b6c; end: 105c84ca3;  */

void FUN_105c84b6c(long param_1,undefined8 param_2,int *param_3)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  long *plVar4;
  char *pcVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar4 = *(long **)(param_1 + 0x38);
      if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
      }
      pcVar1 = *(char **)(param_1 + 0x50);
      for (pcVar5 = *(char **)(param_1 + 0x48); pcVar5 != pcVar1; pcVar5 = pcVar5 + 1) {
        cVar3 = *pcVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,(long)cVar3);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,(long)*(char *)(param_1 + 0x30));
      return;
    }
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000105c84c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 105c84ca4; end: 105c84d53;  */

int FUN_105c84ca4(long param_1,long param_2,long param_3,undefined1 *param_4)

{
  long lVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  
  _objc_retain(param_3);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 - 1U < 2) {
    cVar3 = '\0';
    *param_4 = 0;
  }
  else if (iVar2 - 0xfU < 2) {
    *param_4 = 0;
    cVar3 = *(char *)(param_1 + 0x30);
  }
  else if (iVar2 == 0xe) {
    lVar1 = 0x28;
    lVar4 = param_3;
    if (param_2 != 0) {
      lVar1 = 0x20;
      lVar4 = param_2;
    }
    (**(code **)(param_1 + lVar1))(lVar4,param_4);
    cVar3 = (char)lVar4;
  }
  else {
    cVar3 = '\0';
  }
  _objc_release(param_3);
  return (int)cVar3;
}



/* Entry: 105c84d54; end: 105c84d8f;  */

undefined8 FUN_105c84d54(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  __Znwm(0x70);
  FUN_105c84d90(uVar1,param_1);
  return uVar1;
}



/* Entry: 105c84d90; end: 105c84f3b;  */

void FUN_105c84d90(undefined8 *param_1,long param_2)

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
      func_0x000105c84fd0(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
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
      func_0x000105c84f3c(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_105c84e7c:
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
        FUN_105c850d0(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_105c84e7c;
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
    *param_1 = &PTR_DAT_1108e2c78;
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



/* Entry: 105c84f3c; end: 105c850cf;  */

undefined8 * FUN_105c84f3c(undefined8 *param_1,int param_2,long *param_3)

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
  *param_1 = &PTR_DAT_1108e2c78;
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



/* Entry: 105c850d0; end: 105c85163;  */

undefined8 * FUN_105c850d0(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

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
  *param_1 = &PTR_DAT_1108e2c78;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_105c85164(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4);
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



/* Entry: 105c85164; end: 105c851db;  */

void FUN_105c85164(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_105c851dc(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 105c851dc; end: 105c85217;  */

void FUN_105c851dc(long *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  if (-1 < param_2) {
    lVar1 = param_2;
    __Znwm();
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + param_2;
    return;
  }
  FUN_105c85218();
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  *puVar2 = &PTR_DAT_1108e2c18;
  plVar3 = (long *)puVar2[0xd];
  puVar2[0xd] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)puVar2[0xc];
  puVar2[0xc] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (puVar2[9] != 0) {
    puVar2[10] = puVar2[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar2);
  return;
}



/* Entry: 105c85218; end: 105c8522b;  */

void FUN_105c85218(void)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  *puVar1 = &PTR_DAT_1108e2c18;
  plVar2 = (long *)puVar1[0xd];
  puVar1[0xd] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)puVar1[0xc];
  puVar1[0xc] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (puVar1[9] != 0) {
    puVar1[10] = puVar1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 105c8522c; end: 105c85297;  */

void FUN_105c8522c(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_DAT_1108e2c18;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 105c85298; end: 105c85953;  */

void FUN_105c85298(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x000105c858f8;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x000105c85918;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x000105c85918;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x000105c8588c:
                    /* WARNING: Could not recover jumptable at 0x000105c858b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x000105c8588c;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48)));
      goto code_r0x000105c85918;
    }
    goto code_r0x000105c8590c;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x000105c8590c;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48)));
    goto code_r0x000105c85918;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x000105c85918;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_105c85928;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x000105c858f8:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x000105c8590c:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x000105c85918:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_105c85928:
  return;
}



/* Entry: 105c85954; end: 105c859db;  */

void FUN_105c85954(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x00010055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000105c859c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 105c859dc; end: 105c85b13;  */

void FUN_105c859dc(long param_1,undefined8 param_2,int *param_3)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  long *plVar4;
  char *pcVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar4 = *(long **)(param_1 + 0x38);
      if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
      }
      pcVar1 = *(char **)(param_1 + 0x50);
      for (pcVar5 = *(char **)(param_1 + 0x48); pcVar5 != pcVar1; pcVar5 = pcVar5 + 1) {
        cVar3 = *pcVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,(long)cVar3);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined1 *)(param_1 + 0x30));
      return;
    }
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000105c85b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 105c85b14; end: 105c85d27;  */

uint FUN_105c85b14(long param_1,long param_2,long param_3,byte *param_4)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  byte *pbVar8;
  uint uVar9;
  long *plVar10;
  byte bStack_43;
  byte bStack_42;
  byte bStack_41;
  
  _objc_retain(param_3);
  uVar9 = *(uint *)(param_1 + 8);
  if ((int)uVar9 < 0xe) {
    if (1 < uVar9 - 1) {
      if (uVar9 - 0xc < 2) {
        plVar10 = *(long **)(param_1 + 0x38);
        _objc_retain(param_3);
        (**(code **)(*plVar10 + 0x28))(plVar10,param_2,param_3,param_4);
        pbVar2 = *(byte **)(param_1 + 0x48);
        pbVar3 = *(byte **)(param_1 + 0x50);
        if (uVar9 == 0xc) {
          if (pbVar2 == pbVar3) {
            uVar9 = 0;
          }
          else {
            do {
              pbVar8 = pbVar2 + 1;
              bVar5 = ((uint)plVar10 & 0xff) == (uint)*pbVar2;
              uVar9 = (uint)bVar5;
              pbVar2 = pbVar8;
            } while (!bVar5 && pbVar8 != pbVar3);
          }
        }
        else if (pbVar2 == pbVar3) {
          uVar9 = 1;
        }
        else {
          do {
            pbVar8 = pbVar2 + 1;
            bVar5 = ((uint)plVar10 & 0xff) != (uint)*pbVar2;
            uVar9 = (uint)bVar5;
            pbVar2 = pbVar8;
          } while (bVar5 && pbVar8 != pbVar3);
        }
        _objc_release(param_3);
        goto LAB_105c85d00;
      }
      goto LAB_105c85c48;
    }
    *param_4 = 0;
    bStack_43 = 0;
    (**(code **)(**(long **)(param_1 + 0x38) + 0x28))
              (*(long **)(param_1 + 0x38),param_2,param_3,&bStack_43);
    bVar5 = uVar9 != 1;
    bVar4 = bStack_43;
  }
  else {
    if (uVar9 - 0xf < 2) {
      *param_4 = 0;
      uVar9 = (uint)*(byte *)(param_1 + 0x30);
      goto LAB_105c85d00;
    }
    if (uVar9 == 0xe) {
      lVar1 = 0x28;
      lVar6 = param_3;
      if (param_2 != 0) {
        lVar1 = 0x20;
        lVar6 = param_2;
      }
      (**(code **)(param_1 + lVar1))(lVar6,param_4);
      uVar9 = (uint)lVar6;
      goto LAB_105c85d00;
    }
LAB_105c85c48:
    if ((uVar9 & 0xfffffffe) != 10) {
      uVar9 = 0;
      goto LAB_105c85d00;
    }
    plVar10 = *(long **)(param_1 + 0x38);
    plVar7 = *(long **)(param_1 + 0x40);
    (**(code **)(*plVar10 + 0x28))(plVar10,param_2,param_3,&bStack_41);
    (**(code **)(*plVar7 + 0x28))(plVar7,param_2,param_3,&bStack_42);
    *param_4 = (bStack_41 | bStack_42) & 1;
    bVar5 = uVar9 == 0xb;
    bVar4 = (int)plVar10 == (int)plVar7;
  }
  uVar9 = (uint)(bVar5 ^ bVar4);
LAB_105c85d00:
  _objc_release(param_3);
  return uVar9 & 1;
}



/* Entry: 105c85d28; end: 105c85f9f;  */

undefined8 * FUN_105c85d28(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  byte bVar12;
  byte bVar13;
  
  puVar6 = (undefined8 *)0x70;
  __Znwm();
  iVar10 = *(int *)(param_1 + 8);
  if (0xb < iVar10) {
    if (iVar10 < 0xf) {
      if (iVar10 - 0xcU < 2) {
        plVar7 = *(long **)(param_1 + 0x38);
        (**(code **)(*plVar7 + 0x30))();
        uVar5 = *(undefined2 *)((long)plVar7 + 0x19);
        uVar3 = *(undefined1 *)((long)plVar7 + 0x1b);
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_1 + 8);
        *(undefined1 *)(puVar6 + 3) = 0;
        *(undefined2 *)((long)puVar6 + 0x19) = uVar5;
        *(undefined1 *)((long)puVar6 + 0x1b) = uVar3;
        *puVar6 = &PTR_DAT_1108e2c18;
        puVar6[7] = plVar7;
        lVar1 = *(long *)(param_1 + 0x48);
        lVar2 = *(long *)(param_1 + 0x50);
        puVar6[9] = 0;
        puVar6[8] = 0;
        puVar6[0xb] = 0;
        puVar6[10] = 0;
        FUN_105c85164(puVar6 + 9,lVar1,lVar2,lVar2 - lVar1);
        puVar6[0xc] = plVar7;
        puVar6[0xd] = 0;
        return puVar6;
      }
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      bVar9 = *(byte *)(param_1 + 0x18);
      bVar12 = *(byte *)(param_1 + 0x19);
      *(undefined4 *)(puVar6 + 1) = 0xe;
      puVar6[2] = uVar11;
      *(byte *)(puVar6 + 3) = bVar9;
      *(byte *)((long)puVar6 + 0x19) = bVar12;
      *(byte *)((long)puVar6 + 0x1a) = bVar12 ^ 1;
      *(byte *)((long)puVar6 + 0x1b) = (bVar12 | bVar9) ^ 1;
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      puVar6[5] = *(undefined8 *)(param_1 + 0x28);
      puVar6[4] = uVar11;
    }
    else {
      if (iVar10 != 0xf) {
        iVar10 = 0x10;
      }
      *(int *)(puVar6 + 1) = iVar10;
      *(undefined4 *)(puVar6 + 3) = 0x100;
      *(undefined1 *)(puVar6 + 6) = *(undefined1 *)(param_1 + 0x30);
    }
    *puVar6 = &PTR_DAT_1108e2c18;
    puVar6[8] = 0;
    puVar6[7] = 0;
    puVar6[10] = 0;
    puVar6[9] = 0;
    puVar6[0xc] = 0;
    puVar6[0xb] = 0;
    puVar6[0xd] = 0;
    return puVar6;
  }
  if (8 < iVar10 - 3U) {
    plVar7 = *(long **)(param_1 + 0x38);
    (**(code **)(*plVar7 + 0x30))();
    uVar3 = *(undefined1 *)((long)plVar7 + 0x19);
    uVar4 = *(undefined1 *)((long)plVar7 + 0x1a);
    if (*(int *)(param_1 + 8) == 0) {
      bVar9 = 1;
    }
    else {
      bVar9 = *(byte *)((long)plVar7 + 0x1b);
    }
    *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
    *(undefined1 *)(puVar6 + 3) = 0;
    *(undefined1 *)((long)puVar6 + 0x19) = uVar3;
    *(undefined1 *)((long)puVar6 + 0x1a) = uVar4;
    *(byte *)((long)puVar6 + 0x1b) = bVar9 & 1;
    *puVar6 = &PTR_DAT_1108e2c18;
    puVar6[7] = plVar7;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[0xc] = plVar7;
    return puVar6;
  }
  plVar7 = *(long **)(param_1 + 0x38);
  (**(code **)(*plVar7 + 0x30))();
  plVar8 = *(long **)(param_1 + 0x40);
  (**(code **)(*plVar8 + 0x30))();
  if ((*(byte *)((long)plVar7 + 0x19) & 1) == 0) {
    bVar9 = *(byte *)((long)plVar8 + 0x19);
  }
  else {
    bVar9 = 1;
  }
  if ((*(byte *)((long)plVar7 + 0x1a) & 1) == 0) {
    bVar12 = *(byte *)((long)plVar8 + 0x1a);
  }
  else {
    bVar12 = 1;
  }
  if (*(int *)(param_1 + 8) == 4) {
    if ((*(byte *)((long)plVar7 + 0x1b) & 1) == 0) {
      bVar13 = 0;
      goto LAB_105c85e4c;
    }
  }
  else if ((*(byte *)((long)plVar7 + 0x1b) & 1) != 0) {
    bVar13 = 1;
    goto LAB_105c85e4c;
  }
  bVar13 = *(byte *)((long)plVar8 + 0x1b);
LAB_105c85e4c:
  *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
  *(undefined1 *)(puVar6 + 3) = 0;
  *(byte *)((long)puVar6 + 0x19) = bVar9 & 1;
  *(byte *)((long)puVar6 + 0x1a) = bVar12 & 1;
  *(byte *)((long)puVar6 + 0x1b) = bVar13 & 1;
  *puVar6 = &PTR_DAT_1108e2c18;
  puVar6[7] = plVar7;
  puVar6[8] = plVar8;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = plVar7;
  puVar6[0xd] = plVar8;
  return puVar6;
}



/* Entry: 105c85fa0; end: 105c86083;  */

undefined4 FUN_105c85fa0(long param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bStack_42;
  byte bStack_41;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  (*param_3)(param_1,&bStack_41);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  (*param_3)(param_2,&bStack_42);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 2;
  if (bStack_42 == 0) {
    uVar5 = 0;
  }
  if (bStack_41 == 0) {
    uVar5 = 1;
  }
  if (((bStack_41 & 1) == 0) && ((bStack_42 & 1) == 0)) {
    lVar3 = lVar1;
    func_0x00010bf433a0();
    uVar4 = 1;
    if (lVar3 != 1) {
      uVar4 = 2;
    }
    uVar5 = 0;
    if (lVar3 != -1) {
      uVar5 = uVar4;
    }
  }
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 105c86084; end: 105c860af; +[SCGrapheneUserPropertiesMetric putVerMismatchFailureCount] */

void FUN_105c86084(void)

{
  _objc_alloc(PTR_PTR_1126c3850);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c860b0; end: 105c860db; +[SCGrapheneUserPropertiesMetric putVm2FailureCount] */

void FUN_105c860b0(void)

{
  _objc_alloc(PTR_PTR_1126c3850);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c860dc; end: 105c86107; +[SCGrapheneUserPropertiesMetric putJobIterationCount] */

void FUN_105c860dc(void)

{
  _objc_alloc(PTR_PTR_1126c3850);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c86108; end: 105c86133; +[SCGrapheneUserPropertiesMetric pendingWritesQueueDepth] */

void FUN_105c86108(void)

{
  _objc_alloc(PTR_PTR_1126c3850);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c86134; end: 105c8615f; +[SCGrapheneUserPropertiesMetric putJobRetryCount] */

void FUN_105c86134(void)

{
  _objc_alloc(PTR_PTR_1126c3850);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c86160; end: 105c8618b; +[SCGrapheneUserPropertiesMetric putTerminalFailureCount] */

void FUN_105c86160(void)

{
  _objc_alloc(PTR_PTR_1126c3850);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c8618c; end: 105c861b7; +[SCGrapheneUserPropertiesMetric putAlreadyPendingCount] */

void FUN_105c8618c(void)

{
  _objc_alloc(PTR_PTR_1126c3850);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c861b8; end: 105c861e3; +[SCGrapheneUserPropertiesMetric putWrongType] */

void FUN_105c861b8(void)

{
  _objc_alloc(PTR_PTR_1126c3850);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c861e4; end: 105c8620f; +[SCGrapheneUserPropertiesMetric dequeueLatency] */

void FUN_105c861e4(void)

{
  _objc_alloc(PTR_PTR_1126c3850);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c86210; end: 105c8623b; +[SCGrapheneUserPropertiesMetric supWriteCount] */

void FUN_105c86210(void)

{
  _objc_alloc(PTR_PTR_1126c3850);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c8623c; end: 105c862db; -[SCGrapheneUserPropertiesMetric description] */

void FUN_105c8623c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e26338;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e26338,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126ecab0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 105c862dc; end: 105c862ff; -[SCUserProperties copyWithZone:] */

undefined8 FUN_105c862dc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105c86300; end: 105c86437; -[SCUserProperties hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_105c86300(long param_1,undefined8 param_2,undefined1 *param_3)

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
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  ulong uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_90;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_90 = *(undefined8 *)(param_1 + _DAT_11273316c);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112733170);
  func_0x00010bfde980();
  lStack_80 = (long)*(char *)(param_1 + _DAT_112733174);
  lVar6 = *(long *)(param_1 + _DAT_112733178);
  lStack_70 = (long)*(char *)(param_1 + _DAT_11273317c);
  uStack_68 = (ulong)*(byte *)(param_1 + _DAT_112733180);
  lStack_78 = -lVar6;
  if (-1 < lVar6) {
    lStack_78 = lVar6;
  }
  lVar6 = *(long *)(param_1 + _DAT_112733184);
  lStack_60 = -lVar6;
  if (-1 < lVar6) {
    lStack_60 = lVar6;
  }
  uStack_58 = *(undefined8 *)(param_1 + _DAT_112733188);
  uVar7 = (ulong)*(uint *)(param_1 + _DAT_11273318c) * 0x200000 - 1;
  uVar7 = (uVar7 ^ uVar7 >> 0x18) * 0x109;
  uVar7 = (uVar7 ^ uVar7 >> 0xe) * 0x15;
  lStack_50 = (uVar7 ^ uVar7 >> 0x1c) * 0x80000001;
  uVar7 = ~*(ulong *)(param_1 + _DAT_112733190) + *(ulong *)(param_1 + _DAT_112733190) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_48 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112733194);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112733198);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + _DAT_11273319c);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_90,0xd);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_105c8661c:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105c86628;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((((ulong)puVar5 & 1) != 0) &&
         ((((*(long *)((long)puVar4 + (long)_DAT_11273316c) == *(long *)(param_3 + _DAT_11273316c)
            && (*(char *)((long)puVar4 + (long)_DAT_112733174) == param_3[_DAT_112733174])) &&
           (*(long *)((long)puVar4 + (long)_DAT_112733178) == *(long *)(param_3 + _DAT_112733178)))
          && ((*(char *)((long)puVar4 + (long)_DAT_11273317c) == param_3[_DAT_11273317c] &&
              (*(char *)((long)puVar4 + (long)_DAT_112733180) == param_3[_DAT_112733180])))))) &&
        (*(long *)((long)puVar4 + (long)_DAT_112733184) == *(long *)(param_3 + _DAT_112733184))) &&
       ((*(long *)((long)puVar4 + (long)_DAT_112733188) == *(long *)(param_3 + _DAT_112733188) &&
        (*(long *)((long)puVar4 + (long)_DAT_11273319c) == *(long *)(param_3 + _DAT_11273319c))))) {
      fVar11 = ABS(*(float *)((long)puVar4 + (long)_DAT_11273318c) -
                   *(float *)(param_3 + _DAT_11273318c));
      fVar9 = ABS(*(float *)((long)puVar4 + (long)_DAT_11273318c) +
                  *(float *)(param_3 + _DAT_11273318c)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar11) && (bVar1 = false, !NAN(fVar11) && !NAN(fVar9))) {
        bVar1 = fVar11 < fVar9;
      }
      if (bVar1) {
        dVar12 = ABS(*(double *)((long)puVar4 + (long)_DAT_112733190) -
                     *(double *)(param_3 + _DAT_112733190));
        dVar10 = ABS(*(double *)((long)puVar4 + (long)_DAT_112733190) +
                     *(double *)(param_3 + _DAT_112733190)) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar12) && (bVar1 = false, !NAN(dVar12) && !NAN(dVar10))) {
          bVar1 = dVar12 < dVar10;
        }
        if (((bVar1) &&
            ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_112733170),
             lVar6 == *(long *)(param_3 + _DAT_112733170) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
           ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_112733194),
            lVar6 == *(long *)(param_3 + _DAT_112733194) || (func_0x00010c071ae0(), (int)lVar6 != 0)
            ))) {
          puVar8 = *(undefined1 **)((long)puVar4 + (long)_DAT_112733198);
          if (puVar8 != *(undefined1 **)(param_3 + _DAT_112733198)) {
            func_0x00010c071ae0();
            goto LAB_105c86628;
          }
          goto LAB_105c8661c;
        }
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_105c86628:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 105c86438; end: 105c86643; -[SCUserProperties isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105c86438(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105c8661c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105c86628;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((((uVar3 & 1) != 0) &&
         ((((*(long *)(param_1 + (long)_DAT_11273316c) == *(long *)(param_3 + (long)_DAT_11273316c)
            && (*(char *)(param_1 + (long)_DAT_112733174) ==
                *(char *)(param_3 + (long)_DAT_112733174))) &&
           (*(long *)(param_1 + (long)_DAT_112733178) == *(long *)(param_3 + (long)_DAT_112733178)))
          && ((*(char *)(param_1 + (long)_DAT_11273317c) ==
               *(char *)(param_3 + (long)_DAT_11273317c) &&
              (*(char *)(param_1 + (long)_DAT_112733180) ==
               *(char *)(param_3 + (long)_DAT_112733180))))))) &&
        (*(long *)(param_1 + (long)_DAT_112733184) == *(long *)(param_3 + (long)_DAT_112733184))) &&
       ((*(long *)(param_1 + (long)_DAT_112733188) == *(long *)(param_3 + (long)_DAT_112733188) &&
        (*(long *)(param_1 + (long)_DAT_11273319c) == *(long *)(param_3 + (long)_DAT_11273319c)))))
    {
      fVar5 = *(float *)(param_1 + (long)_DAT_11273318c);
      fVar7 = *(float *)(param_3 + (long)_DAT_11273318c);
      fVar9 = ABS(fVar5 - fVar7);
      fVar5 = ABS(fVar5 + fVar7) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar9) && (bVar1 = false, !NAN(fVar9) && !NAN(fVar5))) {
        bVar1 = fVar9 < fVar5;
      }
      if (bVar1) {
        dVar6 = *(double *)(param_1 + (long)_DAT_112733190);
        dVar8 = *(double *)(param_3 + (long)_DAT_112733190);
        dVar10 = ABS(dVar6 - dVar8);
        dVar6 = ABS(dVar6 + dVar8) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar6))) {
          bVar1 = dVar10 < dVar6;
        }
        if (((bVar1) &&
            ((lVar4 = *(long *)(param_1 + (long)_DAT_112733170),
             lVar4 == *(long *)(param_3 + (long)_DAT_112733170) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + (long)_DAT_112733194),
            lVar4 == *(long *)(param_3 + (long)_DAT_112733194) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + (long)_DAT_112733198);
          if (lVar4 != *(long *)(param_3 + (long)_DAT_112733198)) {
            func_0x00010c071ae0();
            goto LAB_105c86628;
          }
          goto LAB_105c8661c;
        }
      }
    }
    lVar4 = 0;
  }
LAB_105c86628:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 105c86644; end: 105c86653; -[SCUserProperties kind] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105c86644(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112733170);
}



/* Entry: 105c86654; end: 105c86663; -[SCUserProperties writeStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105c86654(long param_1)

{
  return (long)*(char *)(param_1 + _DAT_112733174);
}



/* Entry: 105c86664; end: 105c86673; -[SCUserProperties rowVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105c86664(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112733178);
}



/* Entry: 105c86674; end: 105c86683; -[SCUserProperties valUInt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105c86674(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112733188);
}



/* Entry: 105c86684; end: 105c86693; -[SCUserProperties valFloat] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_105c86684(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11273318c);
}



/* Entry: 105c86694; end: 105c866a3; -[SCUserProperties valDouble] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105c86694(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112733190);
}



/* Entry: 105c866a4; end: 105c866b3; -[SCUserProperties valData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105c866a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112733198);
}



/* Entry: 105c866b4; end: 105c866c3; -[SCUserProperties enqueueTimeMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105c866b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273319c);
}



/* Entry: 105c866c4; end: 105c86717;  */

undefined8 FUN_105c866c4(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010c0844e0(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105c86718; end: 105c867a3;  */

void FUN_105c86718(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c087060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c087060(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105c867a4; end: 105c8685b;  */

undefined8 FUN_105c867a4(void)

{
  int iVar1;
  
  if ((bRam000000011381abf8 & 1) == 0) {
    iVar1 = 0x1381abf8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011381ab90 = 0xe;
      puRam000000011381ab98 = &UNK_10f33a4ce;
      uRam000000011381aba0 = 0x10001;
      pcRam000000011381aba8 = FUN_105c8685c;
      pcRam000000011381abb0 = FUN_105c86898;
      ppuRam000000011381ab88 = &PTR_DAT_1108e2c78;
      uRam000000011381abc8 = 0;
      uRam000000011381abc0 = 0;
      uRam000000011381abd8 = 0;
      uRam000000011381abd0 = 0;
      uRam000000011381abe8 = 0;
      uRam000000011381abe0 = 0;
      uRam000000011381abf0 = 0;
      ___cxa_atexit(0x105c809e8,0x11381ab88,0x100000000);
      ___cxa_guard_release(0x11381abf8);
    }
  }
  return 0x11381ab88;
}



/* Entry: 105c8685c; end: 105c86897;  */

int FUN_105c8685c(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  char cVar2;
  ulong uVar3;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar3 == 0)) {
    cVar2 = '\0';
  }
  else {
    cVar2 = *(char *)((long)piVar1 + uVar3);
  }
  return (int)cVar2;
}



/* Entry: 105c86898; end: 105c868eb;  */

undefined8 FUN_105c86898(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010c2be400(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105c868ec; end: 105c8690f; +[SCUserProperties objectClassFunctionPointer] */

undefined1  [16] FUN_105c868ec(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x105c86908;
  auVar1._0_8_ = 0x105c86900;
  return auVar1;
}



/* Entry: 105c86910; end: 105c86af3;  */

void FUN_105c86910(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  
  _objc_retain(param_3);
  _objc_opt_self(param_2);
  puVar12 = PTR_PTR_1126c3888;
  if (param_3 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar12 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_3;
    func_0x00010c0844e0();
    lVar2 = param_3;
    func_0x00010c087060(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c2be400(param_3);
    lVar4 = param_3;
    func_0x00010c1422a0(param_3);
    lVar5 = param_3;
    func_0x00010c2950a0(param_3);
    lVar6 = param_3;
    func_0x00010c294f80(param_3);
    lVar7 = param_3;
    func_0x00010c295040();
    lVar8 = param_3;
    func_0x00010c2950c0();
    func_0x00010c295020(param_3);
    uVar13 = param_1;
    func_0x00010c294fe0(param_3);
    lVar9 = param_3;
    func_0x00010c295080();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_3;
    func_0x00010c294fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_3;
    func_0x00010bf964a0();
    FUN_105c86af4(param_1,uVar13,puVar12,0xffffffffffffffff,lVar1,lVar2,lVar3,lVar4,lVar5,lVar6,
                  lVar7,lVar8,lVar9,lVar10,lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar2);
  }
  *(undefined4 *)(puVar12 + 0x10) = 1;
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 105c86af4; end: 105c86c63;  */

long * FUN_105c86af4(undefined4 param_1,long param_2,long param_3,long param_4,long param_5,
                    long param_6,undefined1 param_7,long param_8,undefined1 param_9,
                    undefined1 param_10,long param_11,long param_12,long param_13,long param_14,
                    long param_15)

{
  long *plVar1;
  long lVar2;
  long lStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_6);
  _objc_retain(param_13);
  _objc_retain(param_14);
  plVar1 = (long *)0x0;
  if (param_3 != 0) {
    puStack_78 = PTR_PTR_1126ecac0;
    plVar1 = &lStack_80;
    lStack_80 = param_3;
    _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      plVar1[1] = param_4;
      plVar1[4] = param_5;
      _objc_retain(param_6);
      lVar2 = plVar1[5];
      plVar1[5] = param_6;
      _objc_release(lVar2);
      *(undefined1 *)((long)plVar1 + 0x14) = param_7;
      *(undefined1 *)((long)plVar1 + 0x15) = param_9;
      *(undefined1 *)((long)plVar1 + 0x16) = param_10;
      plVar1[6] = param_8;
      plVar1[7] = param_11;
      plVar1[8] = param_12;
      *(undefined4 *)(plVar1 + 3) = param_1;
      plVar1[9] = param_2;
      _objc_retain(param_13);
      lVar2 = plVar1[10];
      plVar1[10] = param_13;
      _objc_release(lVar2);
      _objc_retain(param_14);
      lVar2 = plVar1[0xb];
      plVar1[0xb] = param_14;
      _objc_release(lVar2);
      plVar1[0xc] = param_15;
    }
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_6);
  return plVar1;
}



/* Entry: 105c86c64; end: 105c86cd7;  */

void FUN_105c86c64(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_105c86cd8();
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



/* Entry: 105c86cd8; end: 105c871f3;  */

void FUN_105c86cd8(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puStack_78;
  
  _objc_retain();
  if (param_2 != (undefined *)0x0) {
    puVar13 = param_2;
    func_0x00010c1422e0();
    if ((long)puVar13 < 0) {
      puVar13 = param_2;
      func_0x00010c087060();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar13 != (undefined *)0x0) {
        puVar13 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar13;
        func_0x00010bf636c0();
        _objc_release(puVar13);
        func_0x0001001b9e08(puVar1,&UNK_10f33a4e9);
        puVar13 = (undefined *)0x0;
        if (puVar1 == (undefined *)0x0) goto LAB_105c87128;
        puVar13 = param_2;
        func_0x00010c0844e0(param_2);
        _sqlite3_bind_int64(puVar1,1,puVar13);
        puVar13 = param_2;
        func_0x00010c087060(param_2);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        puVar2 = puVar13;
        _objc_retainAutorelease(puVar13);
        func_0x00010bdc3520();
        _sqlite3_bind_text(puVar1,2,puVar2,0xffffffff,0xffffffffffffffff);
        _objc_release(puVar13);
        _objc_release(puVar13);
        puVar13 = param_2;
        func_0x00010c2be400(param_2);
        _sqlite3_bind_int64(puVar1,3,(long)(int)puVar13);
        puVar13 = puVar1;
        _sqlite3_step();
        if ((int)puVar13 == 100) {
          puVar2 = puVar1;
          _sqlite3_column_int64(puVar1,0);
          puVar13 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126c3858);
          _sqlite3_column_blob(puVar1,1);
          _sqlite3_column_bytes(puVar1,1);
          puVar3 = puVar13;
          func_0x00010c0dfea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_2);
          _objc_release(puVar13);
          _sqlite3_reset(puVar1);
          if (puVar3 == (undefined *)0x0) goto LAB_105c87120;
          puVar13 = PTR_PTR_1126c3888;
          _objc_alloc();
          puVar1 = puVar3;
          func_0x00010c0844e0();
          puStack_78 = puVar3;
          func_0x00010c087060();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010c2be400(puVar3);
          puVar5 = puVar3;
          func_0x00010c1422a0(puVar3);
          puVar6 = puVar3;
          func_0x00010c2950a0(puVar3);
          puVar7 = puVar3;
          func_0x00010c294f80(puVar3);
          puVar8 = puVar3;
          func_0x00010c295040();
          puVar9 = puVar3;
          func_0x00010c2950c0();
          func_0x00010c295020(puVar3);
          uVar14 = param_1;
          func_0x00010c294fe0(puVar3);
          puVar10 = puVar3;
          func_0x00010c295080();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar3;
          func_0x00010c294fc0();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar3;
          func_0x00010bf964a0();
          FUN_105c86af4(param_1,uVar14,puVar13,puVar2,puVar1,puStack_78,puVar4,puVar5,puVar6,puVar7,
                        puVar8,puVar9,puVar10,puVar11,puVar12);
          goto LAB_105c86e7c;
        }
      }
    }
    else {
      puVar1 = param_2;
      func_0x00010c1422e0(param_2);
      puVar13 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126c3858);
      puVar3 = puVar13;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      _objc_release(puVar13);
      if (puVar3 != (undefined *)0x0) {
        puVar13 = PTR_PTR_1126c3888;
        _objc_alloc();
        puVar2 = puVar3;
        func_0x00010c0844e0();
        puStack_78 = puVar3;
        func_0x00010c087060();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c2be400(puVar3);
        puVar5 = puVar3;
        func_0x00010c1422a0(puVar3);
        puVar6 = puVar3;
        func_0x00010c2950a0(puVar3);
        puVar7 = puVar3;
        func_0x00010c294f80(puVar3);
        puVar8 = puVar3;
        func_0x00010c295040();
        puVar9 = puVar3;
        func_0x00010c2950c0();
        func_0x00010c295020(puVar3);
        uVar14 = param_1;
        func_0x00010c294fe0(puVar3);
        puVar10 = puVar3;
        func_0x00010c295080();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar3;
        func_0x00010c294fc0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar3;
        func_0x00010bf964a0();
        FUN_105c86af4(param_1,uVar14,puVar13,puVar1,puVar2,puStack_78,puVar4,puVar5,puVar6,puVar7,
                      puVar8,puVar9,puVar10,puVar11,puVar12);
LAB_105c86e7c:
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puStack_78);
        param_2 = puVar3;
        goto LAB_105c87128;
      }
LAB_105c87120:
      param_2 = (undefined *)0x0;
    }
  }
  puVar13 = (undefined *)0x0;
LAB_105c87128:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 105c871f4; end: 105c87267;  */

void FUN_105c871f4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_105c86cd8();
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



/* Entry: 105c87268; end: 105c872fb;  */

void FUN_105c87268(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126c3858;
    _objc_alloc(PTR_PTR_1126c3858);
    func_0x00010c01ff60(*(undefined4 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x48));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c872fc; end: 105c87337; -[SCUserPropertiesChangeRequest .cxx_destruct] */

void FUN_105c872fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 105c87338; end: 105c87343; -[SCUserPropertiesChangeRequest table] */

undefined * FUN_105c87338(void)

{
  return &UNK_10f33a4da;
}



/* Entry: 105c87344; end: 105c8738b; -[SCUserPropertiesChangeRequest createTableWithSQLite:] */

void FUN_105c87344(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10ddcfb26,0xb2,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 105c8738c; end: 105c877eb; -[SCUserPropertiesChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_105c8738c(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  uint *puVar10;
  
  iVar6 = *(int *)(param_1 + 0x10);
  puVar4 = param_1;
  if (iVar6 == 1) {
    FUN_105c87268(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    FUN_105c877ec(param_4,puVar4);
    func_0x0001001ce6fc(param_4,lVar5,0,0);
    puVar10 = *(uint **)(param_4 + 0x30);
    uVar3 = *puVar10;
    lVar5 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f33a56e);
    if (lVar5 == 0) goto LAB_105c87788;
    _sqlite3_bind_blob(lVar5,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar10 + (ulong)uVar3);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
       (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar7 == 0)) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)((long)piVar1 + uVar7);
    }
    _sqlite3_bind_int64(lVar5,2,uVar9);
    puVar10 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar10 + (ulong)*puVar10);
    _sqlite3_bind_text(lVar5,3,puVar2 + 1,*puVar2,0);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
       (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar7 == 0)) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)*(char *)((long)piVar1 + uVar7);
    }
    _sqlite3_bind_int64(lVar5,4,iVar6);
    _sqlite3_step();
    if ((int)lVar5 != 0x65) goto LAB_105c87788;
    uVar9 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar9;
    func_0x00010c1eeb60(puVar4);
    puVar8 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126c3858);
    func_0x00010c21c9a0(puVar8);
LAB_105c87770:
    _objc_release(puVar8);
    _objc_retain(puVar4);
    puVar8 = puVar4;
  }
  else {
    if (iVar6 != 2) {
      if (iVar6 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f33a544);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar4 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126c3858);
            func_0x00010c21c9a0(puVar4);
            _objc_release(puVar8);
            _objc_release(puVar4);
            puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_105c87794;
          }
        }
      }
      puVar8 = (undefined *)0x0;
      goto LAB_105c87794;
    }
    FUN_105c87268(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    FUN_105c877ec(param_4,puVar4);
    func_0x0001001ce6fc(param_4,lVar5,0,0);
    puVar10 = *(uint **)(param_4 + 0x30);
    uVar3 = *puVar10;
    uVar9 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f33a5c0);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar9);
      piVar1 = (int *)((long)puVar10 + (ulong)uVar3);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar7 == 0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)((long)piVar1 + uVar7);
      }
      _sqlite3_bind_int64(param_3,3,uVar9);
      puVar10 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar10 + (ulong)*puVar10);
      _sqlite3_bind_text(param_3,4,puVar2 + 1,*puVar2,0);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
         (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar7 == 0)) {
        iVar6 = 0;
      }
      else {
        iVar6 = (int)*(char *)((long)piVar1 + uVar7);
      }
      _sqlite3_bind_int64(param_3,5,iVar6);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar8 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126c3858);
        func_0x00010c21c9a0(puVar8);
        goto LAB_105c87770;
      }
    }
LAB_105c87788:
    puVar8 = (undefined *)0x0;
  }
  _objc_release(puVar4);
LAB_105c87794:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105c877ec; end: 105c87b13;  */

ulong FUN_105c877ec(undefined8 param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010c0844e0();
  uVar5 = param_3;
  func_0x00010c087060();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  FUN_105c87b14(param_2,uVar5);
  uVar7 = param_3;
  func_0x00010c2be400();
  uVar8 = param_3;
  func_0x00010c1422a0(param_3);
  uVar9 = param_3;
  func_0x00010c2950a0();
  uVar10 = param_3;
  func_0x00010c294f80();
  uVar11 = param_3;
  func_0x00010c295040(param_3);
  uVar12 = param_3;
  func_0x00010c2950c0(param_3);
  func_0x00010c295020(param_3);
  uVar19 = param_1;
  func_0x00010c294fe0(param_3);
  uVar13 = param_3;
  func_0x00010c295080();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_2;
  FUN_105c87b14(param_2,uVar13);
  uVar15 = param_3;
  func_0x00010c294fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (uVar15 == 0) {
    uVar18 = 0;
  }
  else {
    uVar16 = uVar15;
    _objc_retainAutorelease(uVar15);
    func_0x00010bf25f00();
    uVar17 = uVar15;
    func_0x00010c08fa60(uVar15);
    uVar18 = param_2;
    func_0x0001001d1030(param_2,uVar16,uVar17);
  }
  _objc_release(uVar15);
  uVar16 = param_3;
  func_0x00010bf964a0(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x0001001ce170(param_2,0x1c,uVar16,0);
  func_0x0001001ce11c(uVar19,0,param_2,0x16);
  func_0x0001001ce170(param_2,0x12,uVar12,0);
  func_0x0001001ce1c8(param_2,0x10,uVar11,0);
  func_0x0001001ce1c8(param_2,10,uVar8,0);
  func_0x0001001ce170(param_2,4,uVar4,0);
  func_0x0001001ce220(param_2,0x1a,uVar18 & 0xffffffff);
  func_0x0001001ce2e4(param_2,0x18,uVar14 & 0xffffffff);
  func_0x0001001ce290(param_1,0,param_2,0x14);
  func_0x0001001ce2e4(param_2,6,uVar6 & 0xffffffff);
  func_0x000100ab13ac(param_2,0xe,uVar10 & 0xffffffff,0);
  func_0x0001001ce42c(param_2,0xc,uVar9 & 0xffffffff,0);
  func_0x0001001ce42c(param_2,8,uVar7 & 0xffffffff,0);
  func_0x0001001ce548(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar15);
  _objc_release(uVar13);
  _objc_release(uVar5);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 105c87b14; end: 105c87c43;  */

undefined8 FUN_105c87b14(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_105c87bf4;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_105c87bf4;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_105c87bb4;
    param_1 = 0;
  }
  else {
LAB_105c87bb4:
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
LAB_105c87bf4:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105c87c44; end: 105c87ef3; -[SCPageLauncherImpl launchWithCommand:uiContainer:completion:] */

void FUN_105c87c44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c3898;
  _objc_alloc();
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c021ae0(puVar1,param_2,param_3,lVar2);
  _objc_release(lVar2);
  func_0x00010c0e45a0(puVar1,param_2,0);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x105c87dac;
  puStack_70 = &UNK_110852488;
  lStack_68 = param_1;
  uStack_60 = param_3;
  puStack_58 = puVar1;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(puVar1);
  _objc_retain(param_3);
  ppuVar3 = &puStack_88;
  _objc_retainBlock(ppuVar3);
  uVar4 = param_3;
  func_0x00010c151180(param_3);
  func_0x00010be0d0a0(param_1,param_2,ppuVar3,uVar4,0,0);
  _objc_release(ppuVar3);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(puStack_58);
  _objc_release(uStack_60);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105c87ef4; end: 105c87f3f;  */

void FUN_105c87ef4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  func_0x00010c0e3680(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c87f40; end: 105c88083; -[SCPageLauncherImpl launchWithPayload:completion:] */

void FUN_105c87f40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x105c88014;
  puStack_50 = &UNK_11084a9e8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  func_0x00010be0d0a0(param_1,param_2,ppuVar1,0,0,param_3);
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c88084; end: 105c881cb; -[SCPageLauncherImpl launchInteractivelyWithPayload:completion:] */

void FUN_105c88084(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_a0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105c881cc;
  uStack_40 = 0x105c881dc;
  uStack_38 = 0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105c881e4;
  puStack_88 = &UNK_110883410;
  uStack_80 = param_1;
  puStack_58 = &uStack_60;
  _objc_retain(param_3);
  uStack_78 = param_3;
  puStack_68 = &uStack_60;
  _objc_retain(param_4);
  uStack_70 = param_4;
  _objc_retainBlock(&puStack_a0);
  func_0x00010be0d0a0(param_1);
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105c881cc; end: 105c881e3;  */

void FUN_105c881cc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105c881e4; end: 105c88273;  */

void FUN_105c881e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  _objc_opt_class(uVar1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar4;
  func_0x00010c08b960(uVar4,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30))
  ;
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105c88274; end: 105c88423; -[SCPageLauncherImpl launchForResultWithCommand:uiContainer:completion:] */

void FUN_105c88274(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  ppuVar4 = &puStack_a0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126c3898;
  _objc_alloc();
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c021ae0(puVar2,param_2,param_3,lVar3);
  _objc_release(lVar3);
  func_0x00010c0e45a0(puVar2,param_2,0);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105c88424;
  puStack_88 = &UNK_110866740;
  lStack_80 = param_1;
  uStack_78 = param_3;
  puStack_70 = puVar2;
  uStack_68 = param_4;
  puStack_60 = puVar1;
  uStack_58 = param_5;
  _objc_retain(puVar1);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(puVar2);
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_a0);
  uVar5 = param_3;
  func_0x00010c151180(param_3);
  func_0x00010be0d0a0(param_1,param_2,ppuVar4,uVar5,0,0);
  puVar6 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  _objc_release(puStack_60);
  _objc_release(uStack_58);
  _objc_release(uStack_68);
  _objc_release(puStack_70);
  _objc_release(uStack_78);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105c88424; end: 105c885e3;  */

void FUN_105c88424(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c151180(uVar5);
  func_0x00010c0df760(puVar2,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20(lVar4,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  if (lVar4 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x00010c00e2e0();
    func_0x00010c0e4580(uVar5,param_2,puVar2);
  }
  else {
    func_0x00010c0e4580(uVar5,param_2,0);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puVar2 = *(undefined **)(param_1 + 0x30);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105c885e4;
    puStack_68 = &UNK_1108538b0;
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(puVar2);
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    puStack_60 = puVar2;
    _objc_retain(uVar7);
    lVar3 = lVar4;
    uStack_58 = uVar7;
    func_0x00010c08b860(lVar4,param_2,uVar6,uVar5,&puStack_80);
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = puVar1;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_105c88630;
    puStack_90 = &UNK_1108e2cd8;
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    uVar5 = uVar6;
    _objc_retain(uVar6);
    uStack_88 = uVar6;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(lVar3,param_2,&puStack_a8,uVar5);
    _objc_release(uVar5);
    _objc_release(uStack_88);
    _objc_release(lVar3);
    _objc_release(uStack_58);
    puVar2 = puStack_60;
  }
  _objc_release(puVar2);
  _objc_release(lVar4);
  return;
}



/* Entry: 105c885e4; end: 105c8862f;  */

void FUN_105c885e4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  func_0x00010c0e3680(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c88630; end: 105c88643;  */

void FUN_105c88630(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 105c88644; end: 105c887a3; -[SCPageLauncherImpl launchPageWithComposerPageLaunchPayload:] */

void FUN_105c88644(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1588;
  _objc_opt_new();
  puVar2 = puVar1;
  func_0x00010b97f424();
  puVar3 = param_3;
  func_0x00010bfc8780();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010010fab4();
  puVar5 = puVar3;
  if ((int)puVar4 == 0) {
    puVar5 = (undefined *)0x0;
  }
  _objc_retain(puVar5);
  _objc_release(puVar3);
  puVar3 = puVar5;
  func_0x00010c0f9540();
  _objc_release(puVar5);
  if (((ulong)puVar3 & 1) == 0) {
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x00010c00e2e0();
    func_0x00010bfbb6e0(puVar1);
    _objc_retain(puVar1);
  }
  else {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105c887a4;
    puStack_68 = &UNK_11084d788;
    uStack_60 = param_1;
    _objc_retain(param_3);
    puStack_58 = param_3;
    puStack_50 = puVar1;
    puStack_48 = puVar2;
    func_0x0001000d76cc("APPSTORE",&puStack_80);
    _objc_retain(puVar1);
    puVar5 = puStack_58;
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c887a4; end: 105c889bf;  */

void FUN_105c887a4(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x105c88854;
  puStack_58 = &UNK_11084d788;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  ppuVar1 = &puStack_70;
  uStack_50 = uVar2;
  uStack_48 = uVar3;
  _objc_retainBlock(ppuVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0f66e0(uVar3);
  func_0x00010be0d0a0(uVar2,param_2,ppuVar1,0,uVar3,0);
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  return;
}



/* Entry: 105c889c0; end: 105c889d3;  */

void FUN_105c889c0(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfbb6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_fulfillWithError__1125cc760,param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfbb710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_fulfillWithSuccessValue__1125cc768);
  return;
}



/* Entry: 105c889d4; end: 105c88ad3; -[SCPageLauncherImpl launchWithPageLaunchCommand:] */

void FUN_105c889d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar2 = PTR_PTR_1126b1588;
  _objc_retain(param_3);
  _objc_opt_new();
  lStack_38 = 0;
  puVar3 = PTR_PTR_1126b0ea8;
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar1 = lStack_38;
  _objc_retain(lStack_38);
  if (lVar1 == 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105c88ad4;
    puStack_58 = &UNK_110848ba8;
    uStack_50 = param_1;
    puStack_48 = puVar3;
    puStack_40 = puVar2;
    func_0x0001000d76cc("APPSTORE",&puStack_70);
  }
  else {
    func_0x00010bfbb6e0(puVar2);
  }
  _objc_retain(puVar2);
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105c88ad4; end: 105c88b33;  */

void FUN_105c88ad4(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105c88b34;
  puStack_20 = &UNK_110849810;
  uStack_18 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c08c020(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),0,
                      &puStack_38);
  return;
}



/* Entry: 105c88b34; end: 105c88b77;  */

void FUN_105c88b34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b15a8;
  func_0x00010c27f660(PTR_PTR_1126b15a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbb700(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c88b78; end: 105c88c8f; -[SCPageLauncherImpl launchForResultWithPageLaunchCommand:] */

void FUN_105c88b78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar2 = PTR_PTR_1126b1588;
  _objc_retain(param_3);
  _objc_opt_new();
  lStack_38 = 0;
  puVar3 = PTR_PTR_1126b0ea8;
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar1 = lStack_38;
  _objc_retain(lStack_38);
  if (lVar1 == 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105c88c90;
    puStack_58 = &UNK_110848ba8;
    uStack_50 = param_1;
    _objc_retain(puVar3);
    puStack_48 = puVar3;
    puStack_40 = puVar2;
    func_0x0001000d76cc("APPSTORE",&puStack_70);
    _objc_retain(puVar2);
    _objc_release(puStack_48);
  }
  else {
    func_0x00010bfbb6e0(puVar2);
    _objc_retain(puVar2);
  }
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105c88c90; end: 105c88d8b;  */

void FUN_105c88c90(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c08b860(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105c88d38;
  puStack_30 = &UNK_1108e2cd8;
  uStack_28 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = uVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar1,param_2,&puStack_48,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 105c88d8c; end: 105c8904f; -[SCPageLauncherImpl _exposePluginScopeIfRequiredAndLaunchBlock:forScreen:composerPageLaunchPayloadType:payload:] */

void FUN_105c88d8c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  lVar3 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar3);
  if (lVar3 == 0) goto LAB_105c88f94;
  lVar6 = lVar3;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 == 0) {
    _objc_initWeak(auStack_68,param_1);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    func_0x00010bf9d5c0(lVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    goto LAB_105c88f94;
  }
  puVar4 = *(undefined **)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    lVar6 = *(long *)(param_1 + 0x10);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 != 0) {
LAB_105c88eec:
      _objc_release(lVar6);
      goto LAB_105c88ef4;
    }
    puVar7 = *(undefined **)(param_1 + 0x18);
    lVar6 = param_6;
    _objc_opt_class(param_6);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 != (undefined *)0x0) {
LAB_105c88ee4:
      _objc_release(puVar7);
      goto LAB_105c88eec;
    }
    lVar2 = *(long *)(param_1 + 0x28);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      _objc_release();
      goto LAB_105c88ee4;
    }
    lVar5 = *(long *)(param_1 + 0x20);
    lVar2 = param_6;
    _objc_opt_class(param_6);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(puVar7);
    _objc_release(lVar6);
    _objc_release(puVar4);
    _objc_release(puVar1);
    if (lVar5 == 0) goto LAB_105c88f94;
  }
  else {
LAB_105c88ef4:
    _objc_release(puVar4);
    _objc_release(puVar1);
  }
  (**(code **)(param_3 + 0x10))(param_3);
LAB_105c88f94:
  _objc_release(lVar3);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 105c89050; end: 105c8909b;  */

void FUN_105c89050(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c38a0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c037380();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c8909c; end: 105c89143;  */

void FUN_105c8909c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_2;
    func_0x00010c0d3c80(param_2);
    lVar3 = *(long *)(lVar1 + 0x48);
    if (lVar3 != 0) {
      func_0x00010bf22660();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(lVar1 + 0x38);
      *(long *)(lVar1 + 0x38) = lVar3;
      _objc_release(uVar4);
      func_0x00010befa160(uVar2);
    }
    func_0x00010be81d60(lVar1);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c89144; end: 105c89963; -[SCPageLauncherImpl _processPlugins:] */

long FUN_105c89144(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_handlers_1125d2680;
  while (PTR_s_handlers_1125d2680 = puVar1, lVar4 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_3);
      }
      uVar10 = *(ulong *)(lVar8 * 8);
      uVar5 = uVar10;
      _objc_opt_respondsToSelector(uVar10,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x00010bfd3360();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar10;
        func_0x00010bf52a60();
        lVar3 = lRam0000000000000000;
        while (uVar5 != 0) {
          uVar9 = 0;
          do {
            if (lRam0000000000000000 != lVar3) {
              _objc_enumerationMutation(uVar10);
            }
            puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            uVar11 = *(undefined8 *)(param_1 + 8);
            func_0x00010c150e00(*(undefined8 *)(uVar9 * 8));
            func_0x00010c0df760(puVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0560(uVar11);
            _objc_release(puVar6);
            uVar9 = uVar9 + 1;
          } while (uVar5 != uVar9);
          uVar5 = uVar10;
          func_0x00010bf52a60();
        }
        _objc_release(uVar10);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != lVar4);
    lVar4 = param_3;
    func_0x00010bf52a60();
    puVar1 = PTR_s_handlers_1125d2680;
  }
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_nativePayloadHandlers_112613108;
  while (PTR_s_nativePayloadHandlers_112613108 = puVar1, lVar4 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_3);
      }
      uVar10 = *(ulong *)(lVar8 * 8);
      uVar5 = uVar10;
      _objc_opt_respondsToSelector(uVar10,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x00010c0d5bc0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar10;
        func_0x00010bf52a60();
        lVar3 = lRam0000000000000000;
        while (uVar5 != 0) {
          uVar9 = 0;
          do {
            if (lRam0000000000000000 != lVar3) {
              _objc_enumerationMutation(uVar10);
            }
            uVar11 = *(undefined8 *)(uVar9 * 8);
            uVar12 = *(undefined8 *)(param_1 + 0x18);
            func_0x00010c0f64c0(uVar11);
            _NSStringFromClass();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(uVar12);
            _objc_release(uVar11);
            uVar9 = uVar9 + 1;
          } while (uVar5 != uVar9);
          uVar5 = uVar10;
          func_0x00010bf52a60();
        }
        _objc_release(uVar10);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != lVar4);
    lVar4 = param_3;
    func_0x00010bf52a60();
    puVar1 = PTR_s_nativePayloadHandlers_112613108;
  }
  _objc_release(param_3);
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_nativePayloadInteractiveLaunchHa_112613110;
  while (PTR_s_nativePayloadInteractiveLaunchHa_112613110 = puVar1, lVar4 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_3);
      }
      uVar10 = *(ulong *)(lVar8 * 8);
      uVar5 = uVar10;
      _objc_opt_respondsToSelector(uVar10,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x00010c0d5be0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar10;
        func_0x00010bf52a60();
        lVar3 = lRam0000000000000000;
        while (uVar5 != 0) {
          uVar9 = 0;
          do {
            if (lRam0000000000000000 != lVar3) {
              _objc_enumerationMutation(uVar10);
            }
            uVar11 = *(undefined8 *)(uVar9 * 8);
            uVar12 = *(undefined8 *)(param_1 + 0x20);
            func_0x00010c0f64c0(uVar11);
            _NSStringFromClass();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(uVar12);
            _objc_release(uVar11);
            uVar9 = uVar9 + 1;
          } while (uVar5 != uVar9);
          uVar5 = uVar10;
          func_0x00010bf52a60();
        }
        _objc_release(uVar10);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != lVar4);
    lVar4 = param_3;
    func_0x00010bf52a60();
    puVar1 = PTR_s_nativePayloadInteractiveLaunchHa_112613110;
  }
  _objc_release(param_3);
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_composerNativePayloadHandlers_1125aecd0;
  while (PTR_s_composerNativePayloadHandlers_1125aecd0 = puVar1, lVar4 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_3);
      }
      uVar10 = *(ulong *)(lVar8 * 8);
      uVar5 = uVar10;
      _objc_opt_respondsToSelector(uVar10,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x00010bf44ca0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar10;
        func_0x00010bf52a60();
        lVar3 = lRam0000000000000000;
        while (uVar5 != 0) {
          uVar9 = 0;
          do {
            if (lRam0000000000000000 != lVar3) {
              _objc_enumerationMutation(uVar10);
            }
            puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            uVar11 = *(undefined8 *)(param_1 + 0x28);
            func_0x00010c0f66e0(*(undefined8 *)(uVar9 * 8));
            func_0x00010c0df760(puVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(uVar11);
            _objc_release(puVar6);
            uVar9 = uVar9 + 1;
          } while (uVar5 != uVar9);
          uVar5 = uVar10;
          func_0x00010bf52a60();
        }
        _objc_release(uVar10);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != lVar4);
    lVar4 = param_3;
    func_0x00010bf52a60();
    puVar1 = PTR_s_composerNativePayloadHandlers_1125aecd0;
  }
  _objc_release(param_3);
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_handlersForResult_1125d2690;
  while (PTR_s_handlersForResult_1125d2690 = puVar1, lVar4 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_3);
      }
      uVar10 = *(ulong *)(lVar8 * 8);
      uVar5 = uVar10;
      _objc_opt_respondsToSelector(uVar10,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x00010bfd33a0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar10;
        func_0x00010bf52a60();
        lVar3 = lRam0000000000000000;
        while (uVar5 != 0) {
          uVar9 = 0;
          do {
            if (lRam0000000000000000 != lVar3) {
              _objc_enumerationMutation(uVar10);
            }
            puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            uVar11 = *(undefined8 *)(param_1 + 0x10);
            func_0x00010c150e00(*(undefined8 *)(uVar9 * 8));
            func_0x00010c0df760(puVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0560(uVar11);
            _objc_release(puVar6);
            uVar9 = uVar9 + 1;
          } while (uVar5 != uVar9);
          uVar5 = uVar10;
          func_0x00010bf52a60();
        }
        _objc_release(uVar10);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != lVar4);
    lVar4 = param_3;
    func_0x00010bf52a60();
    puVar1 = PTR_s_handlersForResult_1125d2690;
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return param_3;
  }
  ___stack_chk_fail();
  return *(long *)(param_3 + 0x48);
}



/* Entry: 105c89964; end: 105c8996b; -[SCPageLauncherImpl pluginSaberService] */

undefined8 FUN_105c89964(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105c8996c; end: 105c899eb; -[SCPageLauncherImpl .cxx_destruct] */

void FUN_105c8996c(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
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



/* Entry: 105c899ec; end: 105c89abb; -[SCPageLauncherMetricsReporterImpl initWithLaunchCommand:userTrackedLogger:] */

undefined1 *
FUN_105c899ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ecad0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x000107aebacc();
    *(undefined8 *)((long)puVar1 + 8) = uVar4;
    uVar4 = param_3;
    func_0x00010c151180();
    *(long *)((long)puVar1 + 0x10) = (long)(int)uVar4;
    puVar2 = (undefined1 *)puVar1;
    func_0x00010be1b260();
    *(undefined1 **)((long)puVar1 + 0x18) = puVar2;
    *(undefined1 *)((long)puVar1 + 0x28) = 0;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_4);
    puVar3 = PTR_PTR_1126c38a8;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c89abc; end: 105c89be7; -[SCPageLauncherMetricsReporterImpl onFrameworkStartOrError:] */

void FUN_105c89abc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar3;
  }
  else {
    func_0x00010be542a0(param_1,param_2,&PTR____CFConstantStringClassReference_110daeeb8);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar4 = param_3;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar1 = param_3;
    func_0x00010bf3ec40(param_3);
    func_0x00010c0df780(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e264d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be50ae0(0xbff0000000000000,param_1,param_2,0,0,puVar3);
    _objc_release(puVar3);
    _objc_release(lVar1);
    _objc_release(puVar2);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c89be8; end: 105c89d2f; -[SCPageLauncherMetricsReporterImpl onFrameworkEndOrError:] */

void FUN_105c89be8(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    func_0x00010be50ae0(param_1,param_2,0xffffffffffffffff,1,
                        &PTR____CFConstantStringClassReference_110daafd8);
  }
  else {
    func_0x00010be542a0(param_1,param_2,&PTR____CFConstantStringClassReference_110daeeb8);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar4 = param_3;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar1 = param_3;
    func_0x00010bf3ec40(param_3);
    func_0x00010c0df780(puVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_3;
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e264d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be50ae0(0xbff0000000000000,param_1,param_2,0,1,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c89d30; end: 105c89f13; -[SCPageLauncherMetricsReporterImpl onDestinationPresentedOrError:] */

void FUN_105c89d30(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  *(undefined1 *)(param_2 + 0x28) = 1;
  if (param_4 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(puVar5);
    func_0x00010be542a0(param_2);
    uVar6 = *(undefined8 *)(param_2 + 0x38);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    FUN_105c8a50c(param_1,uVar6,puVar5);
    _objc_release(puVar5);
    func_0x00010be50ae0(param_1,param_2);
  }
  else {
    func_0x00010be542a0(param_2);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar1 = param_4;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf3ec40(param_4);
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_4;
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    func_0x00010be50ae0(param_2);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(lVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105c89f14; end: 105c89f97; -[SCPageLauncherMetricsReporterImpl _logGrapheneLaunchMetric:] */

void FUN_105c89f14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_105c8a168(uVar2,param_3,puVar1,1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c89f98; end: 105c8a093; -[SCPageLauncherMetricsReporterImpl _logBlizzardLifecycleMetric:handlingStage:handlingResolutionDetails:elapsed:] */

void FUN_105c89f98(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c38b0;
  _objc_retain(param_6);
  _objc_opt_new(puVar1);
  func_0x00010c1a53c0();
  func_0x00010c1a53e0(puVar1,param_3,(long)(param_1 * 1000.0));
  func_0x00010c1a5400(puVar1,param_3,param_4);
  func_0x00010c1a5420(puVar1,param_3,param_6);
  _objc_release(param_6);
  func_0x00010c1a5440(puVar1,param_3,param_5);
  func_0x00010c1f74c0(puVar1,param_3,*(undefined8 *)(param_2 + 0x10));
  func_0x00010c206c40(puVar1,param_3,*(undefined8 *)(param_2 + 8));
  param_2 = param_2 + 0x30;
  _objc_loadWeakRetained(param_2);
  lVar2 = param_2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(lVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c8a094; end: 105c8a0bb; -[SCPageLauncherMetricsReporterImpl _generateHandlingId] */

undefined8 FUN_105c8a094(void)

{
  undefined8 uStack_18;
  
  _arc4random_buf(&uStack_18,8);
  return uStack_18;
}



/* Entry: 105c8a0bc; end: 105c8a0f3; -[SCPageLauncherMetricsReporterImpl .cxx_destruct] */

void FUN_105c8a0bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 105c8a0f4; end: 105c8a167; -[SCGraphenePageLauncherMetric2 init] */

undefined1 * FUN_105c8a0f4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ecad8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105c8a168; end: 105c8a397;  */

void FUN_105c8a168(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar2 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar8 = (undefined8 *)0x0;
  if (param_2 != 0) {
    plVar7 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f33a695;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f33a695;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_1108e2d88;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108e2d88,puVar2,param_5);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar6 = 0;
    puVar8 = auStack_78;
    do {
      if ((&cStack_49)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_105c8a398;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar8;
  puStack_c8 = puVar3;
  puStack_c0 = param_4;
  puStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar4 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f33a695;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_100,puVar3);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    puVar5 = &UNK_1108e2dd8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108e2dd8,&uStack_120,puVar2);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  _objc_retain(puVar5);
  if (puVar3 != (undefined *)0x0) {
    FUN_105c8a398(puVar3,puVar5,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105c8a398; end: 105c8a50b;  */

void FUN_105c8a398(double param_1,long param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar3 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f33a695;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1108e2dd8;
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_1108e2dd8,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    FUN_105c8a398(puVar2,puVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c8a50c; end: 105c8a577;  */

void FUN_105c8a50c(double param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_105c8a398(param_2,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c8a578; end: 105c8a5eb; -[SCGrapheneCaidMetric2 init] */

undefined1 * FUN_105c8a578(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ecae0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105c8a5ec; end: 105c8a75f;  */

void FUN_105c8a5ec(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108e2e58,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_105c8a760;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_1108e2ea8,&uStack_c0,pcVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 105c8a760; end: 105c8a7d7;  */

void FUN_105c8a760(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108e2ea8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105c8a7d8; end: 105c8a94b;  */

void FUN_105c8a7d8(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108e2ef8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_105c8a94c;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_1108e2f48,&uStack_c0,pcVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 105c8a94c; end: 105c8a9c3;  */

void FUN_105c8a94c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108e2f48,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105c8a9c4; end: 105c8ab37;  */

long ** FUN_105c8a9c4(long param_1,long **param_2,long *param_3)

{
  char *pcVar1;
  long **pplVar2;
  long **pplVar3;
  long **pplVar4;
  long ***ppplVar5;
  long **pplVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *unaff_x22;
  long **pplStack_3a0;
  undefined *puStack_398;
  long **pplStack_390;
  long **pplStack_388;
  undefined8 **ppuStack_380;
  code *pcStack_378;
  long alStack_370 [3];
  undefined1 *puStack_358;
  undefined8 auStack_350 [2];
  char cStack_339;
  long lStack_338;
  undefined8 **ppuStack_300;
  code *pcStack_2f8;
  long alStack_2f0 [3];
  undefined1 *puStack_2d8;
  undefined8 auStack_2d0 [2];
  char cStack_2b9;
  long lStack_2b8;
  undefined8 **ppuStack_280;
  code *pcStack_278;
  long alStack_270 [3];
  undefined1 *puStack_258;
  undefined8 auStack_250 [2];
  char cStack_239;
  long lStack_238;
  undefined8 **ppuStack_200;
  code *pcStack_1f8;
  long alStack_1f0 [3];
  undefined1 *puStack_1d8;
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined8 **ppuStack_180;
  code *pcStack_178;
  long alStack_170 [3];
  undefined1 *puStack_158;
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  long alStack_f0 [3];
  long *plStack_d8;
  long **applStack_d0 [2];
  char cStack_b9;
  long lStack_b8;
  undefined1 *puStack_b0;
  long *plStack_a8;
  long **pplStack_a0;
  long **pplStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long alStack_80 [3];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  plVar7 = alStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar6 = param_2;
  plVar9 = param_3;
  _objc_retain(param_2);
  plVar8 = (long *)0x0;
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long **)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    alStack_80[0] = 0;
    alStack_80[1] = 0;
    alStack_80[2] = 0;
    func_0x00010007e1e8(alStack_80,auStack_60,&lStack_48,1);
    pplVar6 = (long **)&UNK_1108e2f98;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108e2f98,alStack_80,param_3);
    puStack_68 = (undefined1 *)alStack_80;
    func_0x00010007e5dc(&puStack_68);
    plVar9 = plVar7;
    unaff_x22 = alStack_80;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      plVar9 = plVar7;
      unaff_x22 = alStack_80;
    }
  }
  pplVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pplVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pplVar3 = pplVar2;
  __Unwind_Resume();
  plVar7 = alStack_f0;
  pcStack_88 = FUN_105c8ab38;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar4 = (long **)0x0;
  puStack_b0 = (undefined1 *)unaff_x22;
  plStack_a8 = plVar8;
  pplStack_a0 = pplVar2;
  pplStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  if (pplVar3 != (long **)0x0) {
    plVar8 = pplVar3[1];
    pcVar1 = "true";
    if ((int)pplVar6 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(applStack_d0,pcVar1);
    alStack_f0[0] = 0;
    alStack_f0[1] = 0;
    alStack_f0[2] = 0;
    func_0x00010007e1e8(alStack_f0,applStack_d0,&lStack_b8,1);
    pplVar6 = (long **)&UNK_1108e2fe8;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108e2fe8,alStack_f0,plVar9);
    pplVar4 = &plStack_d8;
    plStack_d8 = alStack_f0;
    func_0x00010007e5dc();
    plVar9 = plVar7;
    plVar8 = alStack_f0;
    if (cStack_b9 < '\0') {
      pplVar4 = applStack_d0[0];
      __ZdlPv();
      plVar9 = plVar7;
      plVar8 = alStack_f0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return pplVar4;
  }
  ___stack_chk_fail();
  plStack_d8 = plVar8;
  func_0x00010007e5dc(&plStack_d8);
  if (cStack_b9 < '\0') {
    __ZdlPv(applStack_d0[0]);
  }
  __Unwind_Resume();
  plVar7 = alStack_170;
  pcStack_f8 = FUN_105c8ac50;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar2 = pplVar6;
  plVar8 = plVar9;
  ppuStack_100 = &puStack_90;
  _objc_retain(pplVar6);
  if (pplVar4 != (long **)0x0) {
    plVar8 = pplVar4[1];
    _objc_retain(pplVar6);
    if (pplVar6 == (long **)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)pplVar6;
      _objc_retainAutorelease(pplVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar6);
    func_0x00010002b838(auStack_150,pcVar1);
    alStack_170[0] = 0;
    alStack_170[1] = 0;
    alStack_170[2] = 0;
    func_0x00010007e1e8(alStack_170,auStack_150,&lStack_138,1);
    pplVar2 = (long **)&UNK_1108e3038;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108e3038,alStack_170,plVar9);
    puStack_158 = (undefined1 *)alStack_170;
    func_0x00010007e5dc(&puStack_158);
    plVar8 = plVar7;
    if (cStack_139 < '\0') {
      __ZdlPv(auStack_150[0]);
      plVar8 = plVar7;
    }
  }
  pplVar4 = pplVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return pplVar4;
  }
  ___stack_chk_fail();
  _objc_release(pplVar6);
  _objc_release(pplVar6);
  __Unwind_Resume();
  plVar7 = alStack_1f0;
  pcStack_178 = FUN_105c8adc4;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar6 = pplVar2;
  plVar9 = plVar8;
  ppuStack_180 = &ppuStack_100;
  _objc_retain(pplVar2);
  if (pplVar4 != (long **)0x0) {
    plVar9 = pplVar4[1];
    _objc_retain(pplVar2);
    if (pplVar2 == (long **)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)pplVar2;
      _objc_retainAutorelease(pplVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar2);
    func_0x00010002b838(auStack_1d0,pcVar1);
    alStack_1f0[0] = 0;
    alStack_1f0[1] = 0;
    alStack_1f0[2] = 0;
    func_0x00010007e1e8(alStack_1f0,auStack_1d0,&lStack_1b8,1);
    pplVar6 = (long **)&UNK_1108e3088;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108e3088,alStack_1f0,plVar8);
    puStack_1d8 = (undefined1 *)alStack_1f0;
    func_0x00010007e5dc(&puStack_1d8);
    plVar9 = plVar7;
    if (cStack_1b9 < '\0') {
      __ZdlPv(auStack_1d0[0]);
      plVar9 = plVar7;
    }
  }
  pplVar4 = pplVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return pplVar4;
  }
  ___stack_chk_fail();
  _objc_release(pplVar2);
  _objc_release(pplVar2);
  __Unwind_Resume();
  plVar7 = alStack_270;
  pcStack_1f8 = FUN_105c8af38;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar2 = pplVar6;
  plVar8 = plVar9;
  ppuStack_200 = &ppuStack_180;
  _objc_retain(pplVar6);
  if (pplVar4 != (long **)0x0) {
    plVar8 = pplVar4[1];
    _objc_retain(pplVar6);
    if (pplVar6 == (long **)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)pplVar6;
      _objc_retainAutorelease(pplVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar6);
    func_0x00010002b838(auStack_250,pcVar1);
    alStack_270[0] = 0;
    alStack_270[1] = 0;
    alStack_270[2] = 0;
    func_0x00010007e1e8(alStack_270,auStack_250,&lStack_238,1);
    pplVar2 = (long **)&UNK_1108e30d8;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108e30d8,alStack_270,plVar9);
    puStack_258 = (undefined1 *)alStack_270;
    func_0x00010007e5dc(&puStack_258);
    plVar8 = plVar7;
    if (cStack_239 < '\0') {
      __ZdlPv(auStack_250[0]);
      plVar8 = plVar7;
    }
  }
  pplVar4 = pplVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return pplVar4;
  }
  ___stack_chk_fail();
  _objc_release(pplVar6);
  _objc_release(pplVar6);
  __Unwind_Resume();
  plVar7 = alStack_2f0;
  pcStack_278 = FUN_105c8b0ac;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar6 = pplVar2;
  plVar9 = plVar8;
  ppuStack_280 = &ppuStack_200;
  _objc_retain(pplVar2);
  if (pplVar4 != (long **)0x0) {
    plVar9 = pplVar4[1];
    _objc_retain(pplVar2);
    if (pplVar2 == (long **)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)pplVar2;
      _objc_retainAutorelease(pplVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar2);
    func_0x00010002b838(auStack_2d0,pcVar1);
    alStack_2f0[0] = 0;
    alStack_2f0[1] = 0;
    alStack_2f0[2] = 0;
    func_0x00010007e1e8(alStack_2f0,auStack_2d0,&lStack_2b8,1);
    pplVar6 = (long **)&UNK_1108e3128;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108e3128,alStack_2f0,plVar8);
    puStack_2d8 = (undefined1 *)alStack_2f0;
    func_0x00010007e5dc(&puStack_2d8);
    plVar9 = plVar7;
    if (cStack_2b9 < '\0') {
      __ZdlPv(auStack_2d0[0]);
      plVar9 = plVar7;
    }
  }
  pplVar4 = pplVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
    return pplVar4;
  }
  ___stack_chk_fail();
  _objc_release(pplVar2);
  _objc_release(pplVar2);
  __Unwind_Resume();
  plVar7 = alStack_370;
  pcStack_2f8 = FUN_105c8b220;
  lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = plVar9;
  ppuStack_300 = &ppuStack_280;
  _objc_retain(pplVar6);
  if (pplVar4 != (long **)0x0) {
    plVar8 = pplVar4[1];
    _objc_retain(pplVar6);
    if (pplVar6 == (long **)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)pplVar6;
      _objc_retainAutorelease(pplVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pplVar6);
    func_0x00010002b838(auStack_350,pcVar1);
    alStack_370[0] = 0;
    alStack_370[1] = 0;
    alStack_370[2] = 0;
    func_0x00010007e1e8(alStack_370,auStack_350,&lStack_338,1);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108e3178,alStack_370,plVar9);
    puStack_358 = (undefined1 *)alStack_370;
    func_0x00010007e5dc(&puStack_358);
    plVar8 = plVar7;
    if (cStack_339 < '\0') {
      __ZdlPv(auStack_350[0]);
      plVar8 = plVar7;
    }
  }
  pplVar2 = pplVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_338) {
    return pplVar2;
  }
  ___stack_chk_fail();
  _objc_release(pplVar6);
  _objc_release(pplVar6);
  pplVar4 = pplVar2;
  __Unwind_Resume();
  ppplVar5 = &pplStack_3a0;
  pcStack_378 = FUN_105c8b394;
  pplStack_390 = pplVar2;
  pplStack_388 = pplVar6;
  ppuStack_380 = &ppuStack_300;
  _objc_retain(plVar8);
  puStack_398 = PTR_PTR_1126ecae8;
  pplStack_3a0 = pplVar4;
  _objc_msgSendSuper2(&pplStack_3a0,PTR_s_init_1125d9248);
  if (ppplVar5 != (long ***)0x0) {
    _objc_retain(plVar8);
    plVar9 = (long *)ppplVar5[1];
    ppplVar5[1] = (long **)plVar8;
    _objc_release(plVar9);
  }
  _objc_release(plVar8);
  return (long **)ppplVar5;
}



/* Entry: 105c8ab38; end: 105c8ac4f;  */

undefined1 ** FUN_105c8ab38(long param_1,undefined1 **param_2,undefined1 *param_3)

{
  undefined1 **ppuVar1;
  char *pcVar2;
  undefined1 **ppuVar3;
  undefined1 ***pppuVar4;
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined8 *unaff_x21;
  undefined1 **ppuStack_320;
  undefined *puStack_318;
  undefined1 **ppuStack_310;
  undefined1 **ppuStack_308;
  undefined8 **ppuStack_300;
  code *pcStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 *puStack_2d8;
  undefined8 auStack_2d0 [2];
  char cStack_2b9;
  long lStack_2b8;
  undefined8 **ppuStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 *puStack_258;
  undefined8 auStack_250 [2];
  char cStack_239;
  long lStack_238;
  undefined8 **ppuStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 *puStack_1d8;
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined8 **ppuStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 *puStack_158;
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_d8;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  long lStack_b8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  puVar7 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined1 **)0x0;
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    pcVar2 = "true";
    if ((int)param_2 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar2);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    param_2 = (undefined1 **)&UNK_1108e2fe8;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108e2fe8,&uStack_70,param_3);
    ppuVar1 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    param_3 = (undefined1 *)puVar7;
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar1 = appuStack_50[0];
      __ZdlPv();
      param_3 = (undefined1 *)puVar7;
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  puVar7 = &uStack_f0;
  pcStack_78 = FUN_105c8ac50;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = param_2;
  puVar8 = param_3;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar9 = (long *)ppuVar1[1];
    _objc_retain(param_2);
    if (param_2 == (undefined1 **)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_d0,pcVar2);
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    func_0x00010007e1e8(&uStack_f0,auStack_d0,&lStack_b8,1);
    ppuVar3 = (undefined1 **)&UNK_1108e3038;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108e3038,&uStack_f0,param_3);
    puStack_d8 = (undefined1 *)&uStack_f0;
    func_0x00010007e5dc(&puStack_d8);
    puVar8 = (undefined1 *)puVar7;
    if (cStack_b9 < '\0') {
      __ZdlPv(auStack_d0[0]);
      puVar8 = (undefined1 *)puVar7;
    }
  }
  ppuVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar7 = &uStack_170;
  pcStack_f8 = FUN_105c8adc4;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar3;
  puVar5 = puVar8;
  ppuStack_100 = &puStack_80;
  _objc_retain(ppuVar3);
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar9 = (long *)ppuVar1[1];
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined1 **)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)ppuVar3;
      _objc_retainAutorelease(ppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar3);
    func_0x00010002b838(auStack_150,pcVar2);
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    func_0x00010007e1e8(&uStack_170,auStack_150,&lStack_138,1);
    ppuVar6 = (undefined1 **)&UNK_1108e3088;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108e3088,&uStack_170,puVar8);
    puStack_158 = (undefined1 *)&uStack_170;
    func_0x00010007e5dc(&puStack_158);
    puVar5 = (undefined1 *)puVar7;
    if (cStack_139 < '\0') {
      __ZdlPv(auStack_150[0]);
      puVar5 = (undefined1 *)puVar7;
    }
  }
  ppuVar1 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar3);
  _objc_release(ppuVar3);
  __Unwind_Resume();
  puVar7 = &uStack_1f0;
  pcStack_178 = FUN_105c8af38;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar6;
  puVar8 = puVar5;
  ppuStack_180 = &ppuStack_100;
  _objc_retain(ppuVar6);
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar9 = (long *)ppuVar1[1];
    _objc_retain(ppuVar6);
    if (ppuVar6 == (undefined1 **)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)ppuVar6;
      _objc_retainAutorelease(ppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar6);
    func_0x00010002b838(auStack_1d0,pcVar2);
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    func_0x00010007e1e8(&uStack_1f0,auStack_1d0,&lStack_1b8,1);
    ppuVar3 = (undefined1 **)&UNK_1108e30d8;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108e30d8,&uStack_1f0,puVar5);
    puStack_1d8 = (undefined1 *)&uStack_1f0;
    func_0x00010007e5dc(&puStack_1d8);
    puVar8 = (undefined1 *)puVar7;
    if (cStack_1b9 < '\0') {
      __ZdlPv(auStack_1d0[0]);
      puVar8 = (undefined1 *)puVar7;
    }
  }
  ppuVar1 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar6);
  _objc_release(ppuVar6);
  __Unwind_Resume();
  puVar7 = &uStack_270;
  pcStack_1f8 = FUN_105c8b0ac;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar3;
  puVar5 = puVar8;
  ppuStack_200 = &ppuStack_180;
  _objc_retain(ppuVar3);
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar9 = (long *)ppuVar1[1];
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined1 **)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)ppuVar3;
      _objc_retainAutorelease(ppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar3);
    func_0x00010002b838(auStack_250,pcVar2);
    uStack_270 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    func_0x00010007e1e8(&uStack_270,auStack_250,&lStack_238,1);
    ppuVar6 = (undefined1 **)&UNK_1108e3128;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108e3128,&uStack_270,puVar8);
    puStack_258 = (undefined1 *)&uStack_270;
    func_0x00010007e5dc(&puStack_258);
    puVar5 = (undefined1 *)puVar7;
    if (cStack_239 < '\0') {
      __ZdlPv(auStack_250[0]);
      puVar5 = (undefined1 *)puVar7;
    }
  }
  ppuVar1 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar3);
  _objc_release(ppuVar3);
  __Unwind_Resume();
  puVar7 = &uStack_2f0;
  pcStack_278 = FUN_105c8b220;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar5;
  ppuStack_280 = &ppuStack_200;
  _objc_retain(ppuVar6);
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar9 = (long *)ppuVar1[1];
    _objc_retain(ppuVar6);
    if (ppuVar6 == (undefined1 **)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)ppuVar6;
      _objc_retainAutorelease(ppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar6);
    func_0x00010002b838(auStack_2d0,pcVar2);
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    func_0x00010007e1e8(&uStack_2f0,auStack_2d0,&lStack_2b8,1);
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108e3178,&uStack_2f0,puVar5);
    puStack_2d8 = (undefined1 *)&uStack_2f0;
    func_0x00010007e5dc(&puStack_2d8);
    puVar8 = (undefined1 *)puVar7;
    if (cStack_2b9 < '\0') {
      __ZdlPv(auStack_2d0[0]);
      puVar8 = (undefined1 *)puVar7;
    }
  }
  ppuVar1 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar6);
  _objc_release(ppuVar6);
  ppuVar3 = ppuVar1;
  __Unwind_Resume();
  pppuVar4 = &ppuStack_320;
  pcStack_2f8 = FUN_105c8b394;
  ppuStack_310 = ppuVar1;
  ppuStack_308 = ppuVar6;
  ppuStack_300 = &ppuStack_280;
  _objc_retain(puVar8);
  puStack_318 = PTR_PTR_1126ecae8;
  ppuStack_320 = ppuVar3;
  _objc_msgSendSuper2(&ppuStack_320,PTR_s_init_1125d9248);
  if (pppuVar4 != (undefined1 ***)0x0) {
    _objc_retain(puVar8);
    puVar5 = (undefined1 *)pppuVar4[1];
    pppuVar4[1] = (undefined1 **)puVar8;
    _objc_release(puVar5);
  }
  _objc_release(puVar8);
  return (undefined1 **)pppuVar4;
}



/* Entry: 105c8ac50; end: 105c8adc3;  */

char * FUN_105c8ac50(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  char *pcStack_2b0;
  undefined *puStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
  undefined8 **ppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 **ppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  puVar6 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108e3038,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar6 = (undefined1 *)puVar7;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar6 = (undefined1 *)puVar7;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar7 = &uStack_100;
  pcStack_88 = FUN_105c8adc4;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  puVar8 = puVar6;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar9 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pcVar5 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108e3088,&uStack_100,puVar6);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar8 = (undefined1 *)puVar7;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar8 = (undefined1 *)puVar7;
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  puVar7 = &uStack_180;
  pcStack_108 = FUN_105c8af38;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar5;
  puVar6 = puVar8;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar5);
  if (pcVar2 != (char *)0x0) {
    plVar9 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_160,pcVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    pcVar1 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108e30d8,&uStack_180,puVar8);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar6 = (undefined1 *)puVar7;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar6 = (undefined1 *)puVar7;
    }
  }
  pcVar2 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  _objc_release(pcVar5);
  __Unwind_Resume();
  puVar7 = &uStack_200;
  pcStack_188 = FUN_105c8b0ac;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  puVar8 = puVar6;
  ppuStack_190 = &ppuStack_110;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar9 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_1e0,pcVar2);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    pcVar5 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108e3128,&uStack_200,puVar6);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    puVar8 = (undefined1 *)puVar7;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar8 = (undefined1 *)puVar7;
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  puVar7 = &uStack_280;
  pcStack_208 = FUN_105c8b220;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar8;
  ppuStack_210 = &ppuStack_190;
  _objc_retain(pcVar5);
  if (pcVar2 != (char *)0x0) {
    plVar9 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_260,pcVar1);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108e3178,&uStack_280,puVar8);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x00010007e5dc(&puStack_268);
    puVar6 = (undefined1 *)puVar7;
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
      puVar6 = (undefined1 *)puVar7;
    }
  }
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  _objc_release(pcVar5);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar3 = &pcStack_2b0;
  pcStack_288 = FUN_105c8b394;
  pcStack_2a0 = pcVar1;
  pcStack_298 = pcVar5;
  ppuStack_290 = &ppuStack_210;
  _objc_retain(puVar6);
  puStack_2a8 = PTR_PTR_1126ecae8;
  pcStack_2b0 = pcVar2;
  _objc_msgSendSuper2(&pcStack_2b0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    _objc_retain(puVar6);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 8);
    *(undefined1 **)((long)ppcVar3 + 8) = puVar6;
    _objc_release(uVar4);
  }
  _objc_release(puVar6);
  return (char *)ppcVar3;
}


