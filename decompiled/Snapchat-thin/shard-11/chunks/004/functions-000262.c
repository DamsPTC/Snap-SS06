/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1084ed6fc; end: 1084ed793;  */

undefined8 * FUN_1084ed6fc(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

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
  *param_1 = &PTR_DAT_110a4ff40;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_1084ed794(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 3);
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



/* Entry: 1084ed794; end: 1084ed80b;  */

void FUN_1084ed794(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_1084ed80c(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 1084ed80c; end: 1084ed847;  */

void FUN_1084ed80c(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  if (param_2 >> 0x3d == 0) {
    plVar2 = param_1 + 2;
    FUN_1084ed85c();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)(plVar2 + param_2);
    return;
  }
  FUN_1084ed848();
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  *puVar1 = &PTR_FUN_110a4fee0;
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



/* Entry: 1084ed848; end: 1084ed85b;  */

void FUN_1084ed848(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  *puVar1 = &PTR_FUN_110a4fee0;
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



/* Entry: 1084ed85c; end: 1084ed8fb;  */

void FUN_1084ed85c(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110a4fee0;
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



/* Entry: 1084ed8fc; end: 1084edfb7;  */

void FUN_1084ed8fc(long param_1,undefined8 param_2,int *param_3)

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
    goto code_r0x0001084edf5c;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x0001084edf7c;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x0001084edf7c;
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
code_r0x0001084edef0:
                    /* WARNING: Could not recover jumptable at 0x0001084edf14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x0001084edef0;
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
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
      goto code_r0x0001084edf7c;
    }
    goto code_r0x0001084edf70;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x0001084edf70;
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
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
    goto code_r0x0001084edf7c;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x0001084edf7c;
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
    goto LAB_1084edf8c;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x0001084edf5c:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x0001084edf70:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x0001084edf7c:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_1084edf8c:
  return;
}



/* Entry: 1084edfb8; end: 1084ee03f;  */

void FUN_1084edfb8(long param_1,undefined8 param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0001084ee02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 1084ee040; end: 1084ee173;  */

void FUN_1084ee040(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar3 = *(long **)(param_1 + 0x38);
      if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
      }
      puVar1 = *(undefined8 **)(param_1 + 0x50);
      for (puVar5 = *(undefined8 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar4 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar4);
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
  plVar3 = *(long **)(param_1 + 0x38);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
  }
  plVar3 = *(long **)(param_1 + 0x40);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001084ee168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 1084ee174; end: 1084ee37f;  */

uint FUN_1084ee174(long param_1,long param_2,long param_3,byte *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
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
        puVar2 = *(undefined8 **)(param_1 + 0x48);
        puVar3 = *(undefined8 **)(param_1 + 0x50);
        if (uVar9 == 0xc) {
          if (puVar2 == puVar3) {
            uVar9 = 0;
          }
          else {
            do {
              puVar7 = puVar2 + 1;
              plVar8 = (long *)*puVar2;
              uVar9 = (uint)(plVar10 == plVar8);
              puVar2 = puVar7;
            } while (plVar10 != plVar8 && puVar7 != puVar3);
          }
        }
        else if (puVar2 == puVar3) {
          uVar9 = 1;
        }
        else {
          do {
            puVar7 = puVar2 + 1;
            plVar8 = (long *)*puVar2;
            uVar9 = (uint)(plVar10 != plVar8);
            puVar2 = puVar7;
          } while (plVar10 != plVar8 && puVar7 != puVar3);
        }
        _objc_release(param_3);
        goto LAB_1084ee358;
      }
      goto LAB_1084ee2a4;
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
      goto LAB_1084ee358;
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
      goto LAB_1084ee358;
    }
LAB_1084ee2a4:
    if ((uVar9 & 0xfffffffe) != 10) {
      uVar9 = 0;
      goto LAB_1084ee358;
    }
    plVar10 = *(long **)(param_1 + 0x38);
    plVar8 = *(long **)(param_1 + 0x40);
    (**(code **)(*plVar10 + 0x28))(plVar10,param_2,param_3,&bStack_41);
    (**(code **)(*plVar8 + 0x28))(plVar8,param_2,param_3,&bStack_42);
    *param_4 = (bStack_41 | bStack_42) & 1;
    bVar5 = uVar9 == 0xb;
    bVar4 = plVar10 == plVar8;
  }
  uVar9 = (uint)(bVar5 ^ bVar4);
LAB_1084ee358:
  _objc_release(param_3);
  return uVar9 & 1;
}



/* Entry: 1084ee380; end: 1084ee5fb;  */

undefined8 * FUN_1084ee380(long param_1)

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
        *puVar6 = &PTR_FUN_110a4fee0;
        puVar6[7] = plVar7;
        lVar1 = *(long *)(param_1 + 0x48);
        lVar2 = *(long *)(param_1 + 0x50);
        puVar6[9] = 0;
        puVar6[8] = 0;
        puVar6[0xb] = 0;
        puVar6[10] = 0;
        FUN_1084ed794(puVar6 + 9,lVar1,lVar2,lVar2 - lVar1 >> 3);
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
    *puVar6 = &PTR_FUN_110a4fee0;
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
    *puVar6 = &PTR_FUN_110a4fee0;
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
      goto LAB_1084ee4a8;
    }
  }
  else if ((*(byte *)((long)plVar7 + 0x1b) & 1) != 0) {
    bVar13 = 1;
    goto LAB_1084ee4a8;
  }
  bVar13 = *(byte *)((long)plVar8 + 0x1b);
LAB_1084ee4a8:
  *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
  *(undefined1 *)(puVar6 + 3) = 0;
  *(byte *)((long)puVar6 + 0x19) = bVar9 & 1;
  *(byte *)((long)puVar6 + 0x1a) = bVar12 & 1;
  *(byte *)((long)puVar6 + 0x1b) = bVar13 & 1;
  *puVar6 = &PTR_FUN_110a4fee0;
  puVar6[7] = plVar7;
  puVar6[8] = plVar8;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = plVar7;
  puVar6[0xd] = plVar8;
  return puVar6;
}



/* Entry: 1084ee5fc; end: 1084ee78f;  */

void FUN_1084ee5fc(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [31];
  undefined1 uStack_f1;
  undefined **appuStack_f0 [9];
  undefined1 auStack_a8 [24];
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126d6768);
  if (param_1 == 0) {
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_80,param_1);
  }
  puVar2 = &uStack_f1;
  func_0x000100818000(puVar2);
  func_0x000100818064(auStack_110,param_2);
  func_0x000107c281a0(appuStack_f0,0xc,puVar2,auStack_110);
  puStack_128 = (undefined1 *)0x0;
  puStack_120 = (undefined1 *)0x0;
  uStack_118 = 0;
  uStack_12c = 0;
  puVar3 = &uStack_80;
  func_0x000107c310cc(puVar3,appuStack_f0,&puStack_128,&uStack_12c);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_128 != (undefined1 *)0x0) {
    puStack_120 = puStack_128;
    __ZdlPv();
  }
  plVar1 = plStack_88;
  appuStack_f0[0] = &PTR_SUB_110862700;
  plStack_88 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_90;
  plStack_90 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_128 = auStack_a8;
  func_0x000107c27dd4(&puStack_128);
  puStack_128 = auStack_110;
  func_0x000107c27dd4(&puStack_128);
  func_0x000107c27da8(&uStack_58);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1084ee790; end: 1084ee947;  */

ulong FUN_1084ee790(ulong param_1,undefined *param_2)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  undefined *puVar10;
  long in_x5;
  long in_x6;
  int iVar11;
  undefined8 in_x7;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined *puVar21;
  long lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 uStack_720;
  undefined8 *puStack_718;
  undefined8 uStack_710;
  undefined1 uStack_708;
  undefined *puStack_700;
  undefined *puStack_6f8;
  undefined1 **ppuStack_6f0;
  code *pcStack_6e8;
  int iStack_6d4;
  undefined *puStack_6d0;
  undefined *puStack_6c8;
  long lStack_6c0;
  long lStack_6b8;
  long lStack_6b0;
  undefined *puStack_6a8;
  undefined *puStack_6a0;
  undefined *puStack_698;
  undefined *puStack_690;
  ulong uStack_688;
  undefined *puStack_680;
  undefined *puStack_678;
  undefined8 *puStack_670;
  undefined *puStack_668;
  undefined *puStack_660;
  undefined *puStack_658;
  undefined *puStack_650;
  undefined *puStack_648;
  undefined *puStack_640;
  undefined *puStack_638;
  ulong uStack_630;
  undefined *puStack_628;
  undefined8 uStack_620;
  long lStack_618;
  long *plStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  long lStack_5d8;
  long *plStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  long lStack_598;
  long *plStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined1 uStack_551;
  undefined8 uStack_550;
  undefined8 uStack_548;
  long *plStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined **ppuStack_508;
  undefined **ppuStack_500;
  code *pcStack_4f8;
  undefined *puStack_4f0;
  undefined8 *puStack_4e8;
  undefined *puStack_4e0;
  undefined8 uStack_4d8;
  code *pcStack_4d0;
  undefined *puStack_4c8;
  undefined8 uStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 uStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 *puStack_488;
  long *plStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined **ppuStack_250;
  undefined8 uStack_248;
  code *pcStack_240;
  undefined *puStack_238;
  undefined8 *puStack_230;
  undefined *apuStack_208 [3];
  long *plStack_1f0;
  long *plStack_1e8;
  long lStack_1d0;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar3 = param_1;
  FUN_1084ee5fc();
  _objc_retainAutoreleasedReturnValue();
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uVar4 = uVar3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  iVar9 = (int)auStack_e8;
  puVar10 = (undefined *)0x10;
  uVar15 = uVar4;
  func_0x00010bf52a60();
  iVar11 = (int)in_x7;
  if (uVar15 != 0) {
    lVar18 = *plStack_120;
    do {
      uVar20 = 0;
      do {
        if (*plStack_120 != lVar18) {
          _objc_enumerationMutation(uVar4);
        }
        param_2 = *(undefined **)(lStack_128 + uVar20 * 8);
        puVar10 = PTR_PTR_1126d6778;
        FUN_10851f874();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(param_1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar10);
        uVar20 = uVar20 + 1;
      } while (uVar15 != uVar20);
      iVar9 = (int)auStack_e8;
      puVar10 = (undefined *)0x10;
      uVar15 = uVar4;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
      iVar11 = (int)in_x7;
    } while (uVar15 != 0);
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar15 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar15;
  }
  ___stack_chk_fail();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_1);
  __Unwind_Resume();
  pcStack_138 = FUN_1084ee948;
  lStack_1d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iStack_6d4 = iVar9;
  uStack_688 = uVar15;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain();
  puStack_648 = (undefined *)puVar7;
  _objc_retain(puVar7);
  puStack_6d0 = puVar10;
  _objc_retain(puVar10);
  lStack_6b0 = in_x5;
  _objc_retain(in_x5);
  lStack_6b8 = in_x6;
  _objc_retain(in_x6);
  puVar16 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puVar21 = puStack_648;
  puStack_690 = param_2;
  if ((param_2 == (undefined *)0x1) && (iVar11 != 0)) {
    func_0x00010bf529e0(puStack_648);
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puStack_648;
    uStack_528 = 0;
    uStack_530 = 0;
    uStack_518 = 0;
    uStack_520 = 0;
    uStack_548 = 0;
    uStack_550 = 0;
    uStack_538 = 0;
    plStack_540 = (long *)0x0;
    _objc_retain(puStack_648);
    func_0x00010bf52a60();
    if (puVar10 != (undefined *)0x0) {
      lVar18 = *plStack_540;
      do {
        puVar21 = (undefined *)0x0;
        do {
          if (*plStack_540 != lVar18) {
            _objc_enumerationMutation(puStack_648);
          }
          puVar5 = puStack_648;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar5;
          func_0x00010bf529e0();
          if (puVar14 == (undefined *)0x0) {
            func_0x00010c1d0640(puVar16);
          }
          else {
            puVar14 = puVar5;
            FUN_1084d2cc4(puVar5,0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar16);
            _objc_release(puVar14);
          }
          _objc_release(puVar5);
          puVar21 = puVar21 + 1;
        } while (puVar10 != puVar21);
        puVar10 = puStack_648;
        func_0x00010bf52a60();
      } while (puVar10 != (undefined *)0x0);
    }
    _objc_release(puStack_648);
    puVar10 = puVar16;
    func_0x00010bf51e00();
    _objc_release(puStack_648);
    _objc_release(puVar16);
    puVar21 = puVar10;
  }
  puStack_648 = puVar21;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puStack_690;
  puStack_6c8 = puVar21;
  func_0x00010bf529e0();
  if (puVar21 == (undefined *)0x0) {
    if (iStack_6d4 != 0) {
      FUN_1084efe2c(uStack_688,puVar16,puStack_6d0);
    }
  }
  else {
    _objc_opt_class(PTR_PTR_1126d5360);
    if (uStack_688 == 0) {
      uStack_460 = 0;
      uStack_478 = 0;
      plStack_480 = (long *)0x0;
      uStack_468 = 0;
      uStack_470 = 0;
      puStack_488 = (undefined8 *)0x0;
      uStack_490 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_490);
    }
    puVar6 = &uStack_551;
    func_0x0001009612e4(puVar6);
    func_0x000100961348(&puStack_4e0,puStack_6c8);
    func_0x000107c281a0(&ppuStack_250,0xc,puVar6,&puStack_4e0);
    ppuStack_508 = (undefined **)0x0;
    ppuStack_500 = (undefined **)0x0;
    pcStack_4f8 = (code *)0x0;
    uStack_4b0 = (ulong)uStack_4b0._4_4_ << 0x20;
    puVar7 = &uStack_490;
    func_0x000107c310cc(puVar7,&ppuStack_250,&ppuStack_508,&uStack_4b0);
    _objc_retainAutoreleasedReturnValue();
    puStack_670 = puVar7;
    if (ppuStack_508 != (undefined **)0x0) {
      ppuStack_500 = ppuStack_508;
      __ZdlPv();
    }
    plVar2 = plStack_1e8;
    ppuStack_250 = &PTR_SUB_110862700;
    plStack_1e8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_1f0;
    plStack_1f0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    ppuStack_508 = apuStack_208;
    func_0x000107c27dd4(&ppuStack_508);
    ppuStack_508 = &puStack_4e0;
    func_0x000107c27dd4(&ppuStack_508);
    func_0x000107c27da8(&uStack_468);
    _objc_release(uStack_478);
    _objc_release(plStack_480);
    puVar16 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puStack_670;
    uStack_578 = 0;
    uStack_580 = 0;
    uStack_568 = 0;
    uStack_570 = 0;
    lStack_598 = 0;
    uStack_5a0 = 0;
    uStack_588 = 0;
    plStack_590 = (long *)0x0;
    puStack_658 = puVar16;
    _objc_retain(puStack_670);
    func_0x00010bf52a60();
    if (puVar7 != (undefined8 *)0x0) {
      lVar18 = *plStack_590;
      do {
        puVar17 = (undefined8 *)0x0;
        do {
          if (*plStack_590 != lVar18) {
            _objc_enumerationMutation(puStack_670);
          }
          puVar10 = *(undefined **)(lStack_598 + (long)puVar17 * 8);
          puVar16 = puVar10;
          func_0x00010c259cc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar16 != (undefined *)0x0) {
            puVar16 = puVar10;
            func_0x00010c259cc0(puVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puStack_658);
            _objc_release(puVar16);
          }
          func_0x00010c27dd80(puVar10);
          puVar17 = (undefined8 *)((long)puVar17 + 1);
        } while (puVar7 != puVar17);
        puVar7 = puStack_670;
        func_0x00010bf52a60();
      } while (puVar7 != (undefined8 *)0x0);
    }
    _objc_release(puStack_670);
    puVar21 = puStack_6c8;
    uStack_5b8 = 0;
    uStack_5c0 = 0;
    uStack_5a8 = 0;
    uStack_5b0 = 0;
    lStack_5d8 = 0;
    uStack_5e0 = 0;
    uStack_5c8 = 0;
    plStack_5d0 = (long *)0x0;
    _objc_retain(puStack_6c8);
    func_0x00010bf52a60();
    puVar16 = puStack_648;
    puStack_6a8 = puVar21;
    if (puVar21 != (undefined *)0x0) {
      lStack_6c0 = *plStack_5d0;
      do {
        puStack_660 = (undefined *)0x0;
        do {
          if (*plStack_5d0 != lStack_6c0) {
            _objc_enumerationMutation(puStack_6c8);
          }
          uVar13 = *(undefined8 *)(lStack_5d8 + (long)puStack_660 * 8);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puStack_658;
          puStack_628 = puVar16;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puStack_628;
          func_0x00010bf529e0();
          puStack_678 = puVar10;
          if (puVar16 == (undefined *)0x0) {
            if (puVar10 != (undefined *)0x0) {
              puVar16 = PTR_PTR_1126d9eb0;
              FUN_1085210b0(PTR_PTR_1126d9eb0,puVar10);
              _objc_retainAutoreleasedReturnValue();
              puStack_680 = puVar16;
              func_0x00010c25ed40(uStack_688);
              _objc_unsafeClaimAutoreleasedReturnValue();
              goto LAB_1084ef7a4;
            }
          }
          else {
            puStack_488 = (undefined8 *)0x0;
            uStack_490 = 0;
            uStack_478 = 0;
            plStack_480 = (long *)0x0;
            uStack_468 = 0;
            uStack_470 = 0;
            uStack_458 = 0;
            uStack_460 = 0;
            puVar10 = puStack_628;
            puStack_668 = (undefined *)uVar13;
            func_0x00010c140180();
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar10;
            func_0x00010bf52a60();
            if (puVar16 != (undefined *)0x0) {
              lVar18 = *plStack_480;
              do {
                puVar21 = (undefined *)0x0;
                do {
                  if (*plStack_480 != lVar18) {
                    _objc_enumerationMutation(puVar10);
                  }
                  puVar14 = (undefined *)puStack_488[(long)puVar21];
                  puVar5 = puVar14;
                  func_0x00010c26d760();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  if (puVar5 != (undefined *)0x0) {
                    func_0x00010c26d760();
                    _objc_retainAutoreleasedReturnValue();
                    puStack_680 = puVar14;
                    goto LAB_1084eef1c;
                  }
                  puVar21 = puVar21 + 1;
                } while (puVar16 != puVar21);
                puVar16 = puVar10;
                func_0x00010bf52a60();
              } while (puVar16 != (undefined *)0x0);
            }
            puStack_680 = (undefined *)0x0;
LAB_1084eef1c:
            _objc_release(puVar10);
            puVar10 = puStack_628;
            func_0x000100504554(puStack_628,&PTR___NSConcreteGlobalBlock_110a4ffa0);
            uVar3 = uStack_688;
            func_0x000100aac27c(uStack_688,puVar10);
            _objc_retainAutoreleasedReturnValue();
            uStack_630 = uVar3;
            _objc_release(puVar10);
            puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            _objc_opt_new();
            puVar16 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            puStack_640 = puVar10;
            _objc_opt_new();
            puVar10 = puStack_628;
            dVar23 = 0.0;
            uStack_5f8 = 0;
            uStack_600 = 0;
            uStack_5e8 = 0;
            uStack_5f0 = 0;
            lStack_618 = 0;
            uStack_620 = 0;
            uStack_608 = 0;
            plStack_610 = (long *)0x0;
            puStack_638 = puVar16;
            _objc_retain(puStack_628);
            func_0x00010bf52a60();
            lVar22 = 0;
            lVar18 = 0;
            if (puVar10 == (undefined *)0x0) {
              dVar25 = 0.0;
              dVar24 = 0.0;
              dVar26 = 0.0;
            }
            else {
              lVar12 = *plStack_610;
              dVar25 = 0.0;
              dVar24 = 0.0;
              dVar26 = 0.0;
              do {
                puVar16 = (undefined *)0x0;
                dVar27 = dVar26;
                do {
                  if (*plStack_610 != lVar12) {
                    _objc_enumerationMutation(puStack_628);
                  }
                  uVar15 = *(ulong *)(lStack_618 + (long)puVar16 * 8);
                  uVar3 = uVar15;
                  func_0x00010c15f2e0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar4 = uVar3;
                  func_0x00010bfda7c0();
                  _objc_release(uVar3);
                  dVar26 = dVar27;
                  if ((uVar4 & 1) == 0) {
                    uVar3 = uVar15;
                    func_0x00010c26f2a0(uVar15);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf9c720();
                    dVar26 = dVar23;
                    if (dVar25 <= dVar23) {
                      uVar4 = uVar15;
                      func_0x00010c26f2a0(uVar15);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010bf9c720();
                      dVar26 = dVar23;
                      _objc_release(uVar4);
                      dVar25 = dVar23;
                    }
                    _objc_release(uVar3);
                    uVar3 = uVar15;
                    func_0x00010c15f2e0(uVar15);
                    _objc_retainAutoreleasedReturnValue();
                    uVar4 = uStack_630;
                    func_0x00010c0e00e0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release();
                    _objc_release(uVar3);
                    lVar18 = lVar18 + 1;
                    if (uVar4 == 0) {
                      uVar3 = uVar15;
                      func_0x00010c15f2e0();
                      _objc_retainAutoreleasedReturnValue();
                      uVar4 = uVar3;
                      func_0x00010c08fa60();
                      _objc_release(uVar3);
                      if (uVar4 != 0) {
                        uVar3 = uVar15;
                        func_0x00010c15f2e0(uVar15);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010befa120(puStack_640);
                        _objc_release(uVar3);
                      }
                      func_0x00010c26f2a0(uVar15);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c2709c0();
                      dVar23 = dVar26;
                      _objc_release(uVar15);
                      func_0x00010befa120(puStack_638);
                      lVar22 = lVar22 + 1;
                    }
                    else {
                      func_0x00010c26f2a0(uVar15);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c2709c0();
                      dVar23 = dVar26;
                      _objc_release(uVar15);
                      dVar24 = dVar26;
                      dVar26 = dVar27;
                    }
                  }
                  puVar16 = puVar16 + 1;
                  dVar27 = dVar26;
                } while (puVar10 != puVar16);
                puVar10 = puStack_628;
                func_0x00010bf52a60();
              } while (puVar10 != (undefined *)0x0);
            }
            _objc_release(puStack_628);
            puVar10 = PTR_PTR_1126d9eb0;
            if (puStack_678 == (undefined *)0x0) {
              puStack_650 = (undefined *)0x0;
              FUN_108520e40();
              _objc_retainAutoreleasedReturnValue();
              if (puVar10 != (undefined *)0x0) {
                puStack_650 = puVar10;
                _objc_setProperty_nonatomic_copy(puVar10);
                goto LAB_1084ef224;
              }
LAB_1084ef7e0:
              puStack_650 = (undefined *)0x0;
            }
            else {
              puStack_650 = (undefined *)0x0;
              func_0x000100aad504();
              _objc_retainAutoreleasedReturnValue();
              if (puVar10 == (undefined *)0x0) goto LAB_1084ef7e0;
LAB_1084ef224:
              *(undefined **)(puVar10 + 0x28) = puStack_690;
              puStack_650 = puVar10;
            }
            lVar12 = lStack_6b0;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar12 != 0) {
              lVar12 = lStack_6b0;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              lVar8 = lVar12;
              func_0x00010c282800();
              if (puStack_650 != (undefined *)0x0) {
                *(long *)(puStack_650 + 0x88) = lVar8;
              }
              _objc_release(lVar12);
            }
            lVar12 = lStack_6b8;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar12 != 0) {
              lVar12 = lStack_6b8;
              func_0x00010c0e00e0(lStack_6b8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfb2c80();
              if (puStack_650 != (undefined *)0x0) {
                *(int *)(puStack_650 + 0x18) = SUB84(dVar23,0);
              }
              _objc_release(lVar12);
            }
            puVar10 = puStack_638;
            func_0x00010bf529e0();
            if (puVar10 == (undefined *)0x0) {
              puStack_6a0 = (undefined *)0x0;
              puStack_698 = (undefined *)0x0;
            }
            else {
              puVar10 = PTR_PTR_1126d5358;
              _objc_alloc();
              puVar16 = puStack_638;
              func_0x00010c0dfd20(puStack_638);
              _objc_retainAutoreleasedReturnValue();
              puVar21 = puVar10;
              func_0x00010c0f4380();
              puStack_698 = puVar21;
              _objc_release(puVar16);
              _objc_release(puVar10);
              puVar10 = PTR_PTR_1126d5358;
              _objc_alloc();
              puVar16 = puVar10;
              func_0x00010c0f43a0();
              puStack_6a0 = puVar16;
              _objc_release(puVar10);
            }
            puVar16 = puStack_628;
            func_0x00010c089820();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar16;
            func_0x000100aad290();
            _objc_retainAutoreleasedReturnValue();
            puStack_668 = puVar10;
            _objc_retain(puStack_628);
            puVar10 = puStack_628;
            uVar13 = 0;
            if ((long)puStack_690 < 3) {
              if (puStack_690 == (undefined *)0x1) {
                uStack_4b0 = 0;
                uStack_4a0 = 0x2020000000;
                uStack_498 = 0;
                dVar23 = 0.0;
                puStack_488 = (undefined8 *)0x0;
                uStack_490 = 0;
                uStack_478 = 0;
                plStack_480 = (long *)0x0;
                uStack_468 = 0;
                uStack_470 = 0;
                uStack_458 = 0;
                uStack_460 = 0;
                puStack_4a8 = &uStack_4b0;
                _objc_retain(puStack_628);
                func_0x00010bf52a60();
                if (puVar10 != (undefined *)0x0) {
                  lVar12 = *plStack_480;
                  do {
                    puVar21 = (undefined *)0x0;
                    do {
                      if (*plStack_480 != lVar12) {
                        _objc_enumerationMutation(puStack_628);
                      }
                      uVar19 = puStack_488[(long)puVar21];
                      uVar13 = uVar19;
                      func_0x00010bf0e700(uVar19);
                      _objc_retainAutoreleasedReturnValue();
                      puStack_4e0 = PTR___NSConcreteStackBlock_11034bd00;
                      uStack_4d8 = 0xc2000000;
                      pcStack_4d0 = FUN_1084f2bf0;
                      puStack_4c8 = &UNK_110a500c0;
                      puStack_4e8 = &uStack_4b0;
                      ppuStack_508 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
                      ppuStack_500 = (undefined **)0xc2000000;
                      pcStack_4f8 = FUN_1084f2c34;
                      puStack_4f0 = &UNK_110a4fbc0;
                      uStack_4c0 = uVar19;
                      puStack_4b8 = puStack_4e8;
                      func_0x00010c0c1340();
                      _objc_release(uVar13);
                      puVar21 = puVar21 + 1;
                    } while (puVar10 != puVar21);
                    puVar10 = puStack_628;
                    func_0x00010bf52a60();
                  } while (puVar10 != (undefined *)0x0);
                }
                _objc_release(puStack_628);
                uVar13 = puStack_4a8[3];
                __Block_object_dispose(&uStack_4b0,8);
              }
              else if (puStack_690 == (undefined *)0x2) {
                func_0x00010c089820(puStack_628);
                _objc_retainAutoreleasedReturnValue();
                uStack_490 = 0;
                plStack_480 = (long *)0x2020000000;
                uStack_478 = 2;
                puVar21 = puVar10;
                puStack_488 = &uStack_490;
                func_0x00010bf0e700();
                _objc_retainAutoreleasedReturnValue();
                ppuStack_250 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
                uStack_248 = 0xc2000000;
                pcStack_240 = FUN_1084f2b58;
                puStack_238 = &UNK_110a4fbc0;
                puStack_230 = &uStack_490;
                func_0x00010c0c1340();
                _objc_release(puVar21);
                uVar13 = puStack_488[3];
                __Block_object_dispose(&uStack_490,8);
                _objc_release(puVar10);
              }
            }
            else if (puStack_690 == (undefined *)0x3) {
              uVar13 = 1;
            }
            else if (puStack_690 == (undefined *)0x5) {
              dVar23 = 0.0;
              uStack_468 = 0;
              uStack_470 = 0;
              uStack_458 = 0;
              uStack_460 = 0;
              puStack_488 = (undefined8 *)0x0;
              uStack_490 = 0;
              uStack_478 = 0;
              plStack_480 = (long *)0x0;
              _objc_retain(puStack_628);
              func_0x00010bf52a60();
              if (puVar10 != (undefined *)0x0) {
                lVar12 = *plStack_480;
                do {
                  puVar21 = (undefined *)0x0;
                  do {
                    if (*plStack_480 != lVar12) {
                      _objc_enumerationMutation(puStack_628);
                    }
                    lVar8 = puStack_488[(long)puVar21];
                    func_0x00010c25b820();
                    if (lVar8 == 1) {
                      _objc_release(puStack_628);
                      uVar13 = 0x100;
                      goto LAB_1084ef684;
                    }
                    puVar21 = puVar21 + 1;
                  } while (puVar10 != puVar21);
                  puVar10 = puStack_628;
                  func_0x00010bf52a60();
                } while (puVar10 != (undefined *)0x0);
              }
              _objc_release(puStack_628);
              uVar13 = 0x80;
            }
            else if (puStack_690 == (undefined *)0x6) {
              uVar13 = 0x200;
            }
LAB_1084ef684:
            _objc_release(puStack_628);
            puVar10 = puStack_650;
            if (puStack_650 != (undefined *)0x0) {
              *(undefined8 *)(puStack_650 + 0x60) = uVar13;
              _objc_setProperty_nonatomic_copy(puStack_650);
              *(double *)(puVar10 + 0x38) = dVar25;
              *(long *)(puVar10 + 0x40) = lVar18;
              puVar10[0x14] = dVar26 != 0.0;
            }
            puVar21 = puVar16;
            func_0x00010c26f2a0(puVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2709c0();
            if (puVar10 == (undefined *)0x0) {
              _objc_release(puVar21);
            }
            else {
              *(double *)(puVar10 + 0x48) = dVar23;
              _objc_release(puVar21);
              *(double *)(puStack_650 + 0x50) = dVar26;
              *(double *)(puStack_650 + 0x58) = dVar24;
              *(long *)(puStack_650 + 0x68) = lVar22;
            }
            puVar10 = puStack_650;
            puVar21 = puVar16;
            func_0x00010c12fc80(puVar16);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar21;
            func_0x00010bf30620();
            _objc_retainAutoreleasedReturnValue();
            if (puVar10 == (undefined *)0x0) {
              _objc_release(puVar5);
              _objc_release(puVar21);
            }
            else {
              _objc_setProperty_nonatomic_copy(puVar10);
              _objc_release(puVar5);
              _objc_release(puVar21);
              *(undefined **)(puStack_650 + 0x78) = puStack_698;
              *(undefined **)(puStack_650 + 0x80) = puStack_6a0;
              _objc_setProperty_nonatomic_copy(puStack_650);
            }
            func_0x00010c25ed40(uStack_688);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puStack_668);
            _objc_release(puVar16);
            _objc_release(puStack_650);
            _objc_release(puStack_638);
            _objc_release(puStack_640);
            _objc_release(uStack_630);
LAB_1084ef7a4:
            _objc_release(puStack_680);
          }
          puVar10 = puStack_678;
          _objc_release(puStack_678);
          _objc_release(puStack_628);
          puVar16 = puStack_648;
          puStack_660 = puStack_660 + 1;
        } while (puStack_660 != puStack_6a8);
        puVar21 = puStack_6c8;
        func_0x00010bf52a60();
        puStack_6a8 = puVar21;
      } while (puVar21 != (undefined *)0x0);
    }
    _objc_release(puStack_6c8);
    if (iStack_6d4 != 0) {
      puVar16 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160();
      puVar10 = puVar16;
      func_0x00010bf00560();
      _objc_retainAutoreleasedReturnValue();
      FUN_1084efe2c(uStack_688,puStack_690,puVar10);
      _objc_release(puVar10);
      _objc_release(puVar16);
    }
    _objc_release(puStack_658);
    _objc_release(puStack_670);
  }
  _objc_release(puStack_6c8);
  _objc_release(lStack_6b8);
  _objc_release(lStack_6b0);
  _objc_release(puStack_6d0);
  _objc_release(puStack_648);
  uVar3 = uStack_688;
  _objc_release(uStack_688);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d0) {
    return uVar3;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  _objc_release(puVar16);
  _objc_release(puStack_658);
  _objc_release(puStack_670);
  _objc_release(puStack_6c8);
  _objc_release(lStack_6b8);
  _objc_release(lStack_6b0);
  _objc_release(puStack_6d0);
  _objc_release(puStack_648);
  _objc_release(uStack_688);
  __Unwind_Resume(uVar3);
  pcStack_6e8 = FUN_1084efcbc;
  puStack_718 = &uStack_720;
  uStack_720 = 0;
  uStack_710 = 0x2020000000;
  uStack_708 = 0;
  puStack_700 = puVar10;
  puStack_6f8 = puVar16;
  ppuStack_6f0 = &puStack_140;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1340();
  _objc_release(uVar3);
  bVar1 = *(byte *)(puStack_718 + 3);
  __Block_object_dispose(&uStack_720,8);
  return (ulong)bVar1;
}



/* Entry: 1084ee948; end: 1084efcbb;  */

ulong FUN_1084ee948(ulong param_1,undefined *param_2,undefined *param_3,int param_4,
                   undefined *param_5,long param_6,long param_7,int param_8)

{
  byte bVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined8 uStack_5f0;
  undefined8 *puStack_5e8;
  undefined8 uStack_5e0;
  undefined1 uStack_5d8;
  undefined *puStack_5d0;
  undefined *puStack_5c8;
  undefined1 *puStack_5c0;
  code *pcStack_5b8;
  int iStack_5a4;
  undefined *puStack_5a0;
  undefined *puStack_598;
  long lStack_590;
  long lStack_588;
  long lStack_580;
  undefined *puStack_578;
  undefined *puStack_570;
  undefined *puStack_568;
  undefined *puStack_560;
  ulong uStack_558;
  undefined *puStack_550;
  undefined *puStack_548;
  undefined8 *puStack_540;
  undefined *puStack_538;
  undefined *puStack_530;
  undefined *puStack_528;
  undefined *puStack_520;
  undefined *puStack_518;
  undefined *puStack_510;
  undefined *puStack_508;
  ulong uStack_500;
  undefined *puStack_4f8;
  undefined8 uStack_4f0;
  long lStack_4e8;
  long *plStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  long lStack_4a8;
  long *plStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  long lStack_468;
  long *plStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined1 uStack_421;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long *plStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined **ppuStack_3d8;
  undefined **ppuStack_3d0;
  code *pcStack_3c8;
  undefined *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined *puStack_3b0;
  undefined8 uStack_3a8;
  code *pcStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  undefined8 *puStack_388;
  undefined8 uStack_380;
  undefined8 *puStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 *puStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 *puStack_100;
  undefined *apuStack_d8 [3];
  long *plStack_c0;
  long *plStack_b8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iStack_5a4 = param_4;
  uStack_558 = param_1;
  _objc_retain();
  puStack_518 = param_3;
  _objc_retain(param_3);
  puStack_5a0 = param_5;
  _objc_retain(param_5);
  lStack_580 = param_6;
  _objc_retain(param_6);
  lStack_588 = param_7;
  _objc_retain(param_7);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puVar14 = puStack_518;
  puStack_560 = param_2;
  if ((param_2 == (undefined *)0x1) && (param_8 != 0)) {
    func_0x00010bf529e0(puStack_518);
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puStack_518;
    uStack_3f8 = 0;
    uStack_400 = 0;
    uStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_418 = 0;
    uStack_420 = 0;
    uStack_408 = 0;
    plStack_410 = (long *)0x0;
    _objc_retain(puStack_518);
    func_0x00010bf52a60();
    if (puVar14 != (undefined *)0x0) {
      lVar17 = *plStack_410;
      do {
        puVar18 = (undefined *)0x0;
        do {
          if (*plStack_410 != lVar17) {
            _objc_enumerationMutation(puStack_518);
          }
          puVar4 = puStack_518;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar4;
          func_0x00010bf529e0();
          if (puVar12 == (undefined *)0x0) {
            func_0x00010c1d0640(puVar3);
          }
          else {
            puVar12 = puVar4;
            FUN_1084d2cc4(puVar4,0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar3);
            _objc_release(puVar12);
          }
          _objc_release(puVar4);
          puVar18 = puVar18 + 1;
        } while (puVar14 != puVar18);
        puVar14 = puStack_518;
        func_0x00010bf52a60();
      } while (puVar14 != (undefined *)0x0);
    }
    _objc_release(puStack_518);
    param_5 = puVar3;
    func_0x00010bf51e00();
    _objc_release(puStack_518);
    _objc_release(puVar3);
    puVar14 = param_5;
  }
  puStack_518 = puVar14;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puStack_560;
  puStack_598 = puVar14;
  func_0x00010bf529e0();
  if (puVar14 == (undefined *)0x0) {
    if (iStack_5a4 != 0) {
      FUN_1084efe2c(uStack_558,puVar3,puStack_5a0);
    }
  }
  else {
    _objc_opt_class(PTR_PTR_1126d5360);
    if (uStack_558 == 0) {
      uStack_330 = 0;
      uStack_348 = 0;
      plStack_350 = (long *)0x0;
      uStack_338 = 0;
      uStack_340 = 0;
      puStack_358 = (undefined8 *)0x0;
      uStack_360 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_360);
    }
    puVar5 = &uStack_421;
    func_0x0001009612e4(puVar5);
    func_0x000100961348(&puStack_3b0,puStack_598);
    func_0x000107c281a0(&ppuStack_120,0xc,puVar5,&puStack_3b0);
    ppuStack_3d8 = (undefined **)0x0;
    ppuStack_3d0 = (undefined **)0x0;
    pcStack_3c8 = (code *)0x0;
    uStack_380 = (ulong)uStack_380._4_4_ << 0x20;
    puVar6 = &uStack_360;
    func_0x000107c310cc(puVar6,&ppuStack_120,&ppuStack_3d8,&uStack_380);
    _objc_retainAutoreleasedReturnValue();
    puStack_540 = puVar6;
    if (ppuStack_3d8 != (undefined **)0x0) {
      ppuStack_3d0 = ppuStack_3d8;
      __ZdlPv();
    }
    plVar2 = plStack_b8;
    ppuStack_120 = &PTR_SUB_110862700;
    plStack_b8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_c0;
    plStack_c0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    ppuStack_3d8 = apuStack_d8;
    func_0x000107c27dd4(&ppuStack_3d8);
    ppuStack_3d8 = &puStack_3b0;
    func_0x000107c27dd4(&ppuStack_3d8);
    func_0x000107c27da8(&uStack_338);
    _objc_release(uStack_348);
    _objc_release(plStack_350);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puStack_540;
    uStack_448 = 0;
    uStack_450 = 0;
    uStack_438 = 0;
    uStack_440 = 0;
    lStack_468 = 0;
    uStack_470 = 0;
    uStack_458 = 0;
    plStack_460 = (long *)0x0;
    puStack_528 = puVar3;
    _objc_retain(puStack_540);
    func_0x00010bf52a60();
    if (puVar6 != (undefined8 *)0x0) {
      lVar17 = *plStack_460;
      do {
        puVar15 = (undefined8 *)0x0;
        do {
          if (*plStack_460 != lVar17) {
            _objc_enumerationMutation(puStack_540);
          }
          param_5 = *(undefined **)(lStack_468 + (long)puVar15 * 8);
          puVar3 = param_5;
          func_0x00010c259cc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar3 != (undefined *)0x0) {
            puVar3 = param_5;
            func_0x00010c259cc0(param_5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puStack_528);
            _objc_release(puVar3);
          }
          func_0x00010c27dd80(param_5);
          puVar15 = (undefined8 *)((long)puVar15 + 1);
        } while (puVar6 != puVar15);
        puVar6 = puStack_540;
        func_0x00010bf52a60();
      } while (puVar6 != (undefined8 *)0x0);
    }
    _objc_release(puStack_540);
    puVar14 = puStack_598;
    uStack_488 = 0;
    uStack_490 = 0;
    uStack_478 = 0;
    uStack_480 = 0;
    lStack_4a8 = 0;
    uStack_4b0 = 0;
    uStack_498 = 0;
    plStack_4a0 = (long *)0x0;
    _objc_retain(puStack_598);
    func_0x00010bf52a60();
    puVar3 = puStack_518;
    puStack_578 = puVar14;
    if (puVar14 != (undefined *)0x0) {
      lStack_590 = *plStack_4a0;
      do {
        puStack_530 = (undefined *)0x0;
        do {
          if (*plStack_4a0 != lStack_590) {
            _objc_enumerationMutation(puStack_598);
          }
          uVar11 = *(undefined8 *)(lStack_4a8 + (long)puStack_530 * 8);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puStack_528;
          puStack_4f8 = puVar3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puStack_4f8;
          func_0x00010bf529e0();
          puStack_548 = puVar14;
          if (puVar3 == (undefined *)0x0) {
            if (puVar14 != (undefined *)0x0) {
              puVar3 = PTR_PTR_1126d9eb0;
              FUN_1085210b0(PTR_PTR_1126d9eb0,puVar14);
              _objc_retainAutoreleasedReturnValue();
              puStack_550 = puVar3;
              func_0x00010c25ed40(uStack_558);
              _objc_unsafeClaimAutoreleasedReturnValue();
              goto LAB_1084ef7a4;
            }
          }
          else {
            puStack_358 = (undefined8 *)0x0;
            uStack_360 = 0;
            uStack_348 = 0;
            plStack_350 = (long *)0x0;
            uStack_338 = 0;
            uStack_340 = 0;
            uStack_328 = 0;
            uStack_330 = 0;
            puVar3 = puStack_4f8;
            puStack_538 = (undefined *)uVar11;
            func_0x00010c140180();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar3;
            func_0x00010bf52a60();
            if (puVar14 != (undefined *)0x0) {
              lVar17 = *plStack_350;
              do {
                puVar18 = (undefined *)0x0;
                do {
                  if (*plStack_350 != lVar17) {
                    _objc_enumerationMutation(puVar3);
                  }
                  puVar12 = (undefined *)puStack_358[(long)puVar18];
                  puVar4 = puVar12;
                  func_0x00010c26d760();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  if (puVar4 != (undefined *)0x0) {
                    func_0x00010c26d760();
                    _objc_retainAutoreleasedReturnValue();
                    puStack_550 = puVar12;
                    goto LAB_1084eef1c;
                  }
                  puVar18 = puVar18 + 1;
                } while (puVar14 != puVar18);
                puVar14 = puVar3;
                func_0x00010bf52a60();
              } while (puVar14 != (undefined *)0x0);
            }
            puStack_550 = (undefined *)0x0;
LAB_1084eef1c:
            _objc_release(puVar3);
            puVar3 = puStack_4f8;
            func_0x000100504554(puStack_4f8,&PTR___NSConcreteGlobalBlock_110a4ffa0);
            uVar7 = uStack_558;
            func_0x000100aac27c(uStack_558,puVar3);
            _objc_retainAutoreleasedReturnValue();
            uStack_500 = uVar7;
            _objc_release(puVar3);
            puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            _objc_opt_new();
            puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            puStack_510 = puVar3;
            _objc_opt_new();
            puVar3 = puStack_4f8;
            dVar20 = 0.0;
            uStack_4c8 = 0;
            uStack_4d0 = 0;
            uStack_4b8 = 0;
            uStack_4c0 = 0;
            lStack_4e8 = 0;
            uStack_4f0 = 0;
            uStack_4d8 = 0;
            plStack_4e0 = (long *)0x0;
            puStack_508 = puVar14;
            _objc_retain(puStack_4f8);
            func_0x00010bf52a60();
            lVar19 = 0;
            lVar17 = 0;
            if (puVar3 == (undefined *)0x0) {
              dVar22 = 0.0;
              dVar21 = 0.0;
              dVar23 = 0.0;
            }
            else {
              lVar10 = *plStack_4e0;
              dVar22 = 0.0;
              dVar21 = 0.0;
              dVar23 = 0.0;
              do {
                puVar14 = (undefined *)0x0;
                dVar24 = dVar23;
                do {
                  if (*plStack_4e0 != lVar10) {
                    _objc_enumerationMutation(puStack_4f8);
                  }
                  uVar13 = *(ulong *)(lStack_4e8 + (long)puVar14 * 8);
                  uVar7 = uVar13;
                  func_0x00010c15f2e0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar8 = uVar7;
                  func_0x00010bfda7c0();
                  _objc_release(uVar7);
                  dVar23 = dVar24;
                  if ((uVar8 & 1) == 0) {
                    uVar7 = uVar13;
                    func_0x00010c26f2a0(uVar13);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf9c720();
                    dVar23 = dVar20;
                    if (dVar22 <= dVar20) {
                      uVar8 = uVar13;
                      func_0x00010c26f2a0(uVar13);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010bf9c720();
                      dVar23 = dVar20;
                      _objc_release(uVar8);
                      dVar22 = dVar20;
                    }
                    _objc_release(uVar7);
                    uVar7 = uVar13;
                    func_0x00010c15f2e0(uVar13);
                    _objc_retainAutoreleasedReturnValue();
                    uVar8 = uStack_500;
                    func_0x00010c0e00e0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release();
                    _objc_release(uVar7);
                    lVar17 = lVar17 + 1;
                    if (uVar8 == 0) {
                      uVar7 = uVar13;
                      func_0x00010c15f2e0();
                      _objc_retainAutoreleasedReturnValue();
                      uVar8 = uVar7;
                      func_0x00010c08fa60();
                      _objc_release(uVar7);
                      if (uVar8 != 0) {
                        uVar7 = uVar13;
                        func_0x00010c15f2e0(uVar13);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010befa120(puStack_510);
                        _objc_release(uVar7);
                      }
                      func_0x00010c26f2a0(uVar13);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c2709c0();
                      dVar20 = dVar23;
                      _objc_release(uVar13);
                      func_0x00010befa120(puStack_508);
                      lVar19 = lVar19 + 1;
                    }
                    else {
                      func_0x00010c26f2a0(uVar13);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c2709c0();
                      dVar20 = dVar23;
                      _objc_release(uVar13);
                      dVar21 = dVar23;
                      dVar23 = dVar24;
                    }
                  }
                  puVar14 = puVar14 + 1;
                  dVar24 = dVar23;
                } while (puVar3 != puVar14);
                puVar3 = puStack_4f8;
                func_0x00010bf52a60();
              } while (puVar3 != (undefined *)0x0);
            }
            _objc_release(puStack_4f8);
            puVar3 = PTR_PTR_1126d9eb0;
            if (puStack_548 == (undefined *)0x0) {
              puStack_520 = (undefined *)0x0;
              FUN_108520e40();
              _objc_retainAutoreleasedReturnValue();
              if (puVar3 != (undefined *)0x0) {
                puStack_520 = puVar3;
                _objc_setProperty_nonatomic_copy(puVar3);
                goto LAB_1084ef224;
              }
LAB_1084ef7e0:
              puStack_520 = (undefined *)0x0;
            }
            else {
              puStack_520 = (undefined *)0x0;
              func_0x000100aad504();
              _objc_retainAutoreleasedReturnValue();
              if (puVar3 == (undefined *)0x0) goto LAB_1084ef7e0;
LAB_1084ef224:
              *(undefined **)(puVar3 + 0x28) = puStack_560;
              puStack_520 = puVar3;
            }
            lVar10 = lStack_580;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar10 != 0) {
              lVar10 = lStack_580;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              lVar9 = lVar10;
              func_0x00010c282800();
              if (puStack_520 != (undefined *)0x0) {
                *(long *)(puStack_520 + 0x88) = lVar9;
              }
              _objc_release(lVar10);
            }
            lVar10 = lStack_588;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar10 != 0) {
              lVar10 = lStack_588;
              func_0x00010c0e00e0(lStack_588);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfb2c80();
              if (puStack_520 != (undefined *)0x0) {
                *(int *)(puStack_520 + 0x18) = SUB84(dVar20,0);
              }
              _objc_release(lVar10);
            }
            puVar3 = puStack_508;
            func_0x00010bf529e0();
            if (puVar3 == (undefined *)0x0) {
              puStack_570 = (undefined *)0x0;
              puStack_568 = (undefined *)0x0;
            }
            else {
              puVar3 = PTR_PTR_1126d5358;
              _objc_alloc();
              puVar14 = puStack_508;
              func_0x00010c0dfd20(puStack_508);
              _objc_retainAutoreleasedReturnValue();
              puVar18 = puVar3;
              func_0x00010c0f4380();
              puStack_568 = puVar18;
              _objc_release(puVar14);
              _objc_release(puVar3);
              puVar3 = PTR_PTR_1126d5358;
              _objc_alloc();
              puVar14 = puVar3;
              func_0x00010c0f43a0();
              puStack_570 = puVar14;
              _objc_release(puVar3);
            }
            puVar14 = puStack_4f8;
            func_0x00010c089820();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar14;
            func_0x000100aad290();
            _objc_retainAutoreleasedReturnValue();
            puStack_538 = puVar3;
            _objc_retain(puStack_4f8);
            puVar3 = puStack_4f8;
            uVar11 = 0;
            if ((long)puStack_560 < 3) {
              if (puStack_560 == (undefined *)0x1) {
                uStack_380 = 0;
                uStack_370 = 0x2020000000;
                uStack_368 = 0;
                dVar20 = 0.0;
                puStack_358 = (undefined8 *)0x0;
                uStack_360 = 0;
                uStack_348 = 0;
                plStack_350 = (long *)0x0;
                uStack_338 = 0;
                uStack_340 = 0;
                uStack_328 = 0;
                uStack_330 = 0;
                puStack_378 = &uStack_380;
                _objc_retain(puStack_4f8);
                func_0x00010bf52a60();
                if (puVar3 != (undefined *)0x0) {
                  lVar10 = *plStack_350;
                  do {
                    puVar18 = (undefined *)0x0;
                    do {
                      if (*plStack_350 != lVar10) {
                        _objc_enumerationMutation(puStack_4f8);
                      }
                      uVar16 = puStack_358[(long)puVar18];
                      uVar11 = uVar16;
                      func_0x00010bf0e700(uVar16);
                      _objc_retainAutoreleasedReturnValue();
                      puStack_3b0 = PTR___NSConcreteStackBlock_11034bd00;
                      uStack_3a8 = 0xc2000000;
                      pcStack_3a0 = FUN_1084f2bf0;
                      puStack_398 = &UNK_110a500c0;
                      puStack_3b8 = &uStack_380;
                      ppuStack_3d8 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
                      ppuStack_3d0 = (undefined **)0xc2000000;
                      pcStack_3c8 = FUN_1084f2c34;
                      puStack_3c0 = &UNK_110a4fbc0;
                      uStack_390 = uVar16;
                      puStack_388 = puStack_3b8;
                      func_0x00010c0c1340();
                      _objc_release(uVar11);
                      puVar18 = puVar18 + 1;
                    } while (puVar3 != puVar18);
                    puVar3 = puStack_4f8;
                    func_0x00010bf52a60();
                  } while (puVar3 != (undefined *)0x0);
                }
                _objc_release(puStack_4f8);
                uVar11 = puStack_378[3];
                __Block_object_dispose(&uStack_380,8);
              }
              else if (puStack_560 == (undefined *)0x2) {
                func_0x00010c089820(puStack_4f8);
                _objc_retainAutoreleasedReturnValue();
                uStack_360 = 0;
                plStack_350 = (long *)0x2020000000;
                uStack_348 = 2;
                puVar18 = puVar3;
                puStack_358 = &uStack_360;
                func_0x00010bf0e700();
                _objc_retainAutoreleasedReturnValue();
                ppuStack_120 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
                uStack_118 = 0xc2000000;
                pcStack_110 = FUN_1084f2b58;
                puStack_108 = &UNK_110a4fbc0;
                puStack_100 = &uStack_360;
                func_0x00010c0c1340();
                _objc_release(puVar18);
                uVar11 = puStack_358[3];
                __Block_object_dispose(&uStack_360,8);
                _objc_release(puVar3);
              }
            }
            else if (puStack_560 == (undefined *)0x3) {
              uVar11 = 1;
            }
            else if (puStack_560 == (undefined *)0x5) {
              dVar20 = 0.0;
              uStack_338 = 0;
              uStack_340 = 0;
              uStack_328 = 0;
              uStack_330 = 0;
              puStack_358 = (undefined8 *)0x0;
              uStack_360 = 0;
              uStack_348 = 0;
              plStack_350 = (long *)0x0;
              _objc_retain(puStack_4f8);
              func_0x00010bf52a60();
              if (puVar3 != (undefined *)0x0) {
                lVar10 = *plStack_350;
                do {
                  puVar18 = (undefined *)0x0;
                  do {
                    if (*plStack_350 != lVar10) {
                      _objc_enumerationMutation(puStack_4f8);
                    }
                    lVar9 = puStack_358[(long)puVar18];
                    func_0x00010c25b820();
                    if (lVar9 == 1) {
                      _objc_release(puStack_4f8);
                      uVar11 = 0x100;
                      goto LAB_1084ef684;
                    }
                    puVar18 = puVar18 + 1;
                  } while (puVar3 != puVar18);
                  puVar3 = puStack_4f8;
                  func_0x00010bf52a60();
                } while (puVar3 != (undefined *)0x0);
              }
              _objc_release(puStack_4f8);
              uVar11 = 0x80;
            }
            else if (puStack_560 == (undefined *)0x6) {
              uVar11 = 0x200;
            }
LAB_1084ef684:
            _objc_release(puStack_4f8);
            puVar3 = puStack_520;
            if (puStack_520 != (undefined *)0x0) {
              *(undefined8 *)(puStack_520 + 0x60) = uVar11;
              _objc_setProperty_nonatomic_copy(puStack_520);
              *(double *)(puVar3 + 0x38) = dVar22;
              *(long *)(puVar3 + 0x40) = lVar17;
              puVar3[0x14] = dVar23 != 0.0;
            }
            puVar18 = puVar14;
            func_0x00010c26f2a0(puVar14);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2709c0();
            if (puVar3 == (undefined *)0x0) {
              _objc_release(puVar18);
            }
            else {
              *(double *)(puVar3 + 0x48) = dVar20;
              _objc_release(puVar18);
              *(double *)(puStack_520 + 0x50) = dVar23;
              *(double *)(puStack_520 + 0x58) = dVar21;
              *(long *)(puStack_520 + 0x68) = lVar19;
            }
            puVar3 = puStack_520;
            puVar18 = puVar14;
            func_0x00010c12fc80(puVar14);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar18;
            func_0x00010bf30620();
            _objc_retainAutoreleasedReturnValue();
            if (puVar3 == (undefined *)0x0) {
              _objc_release(puVar4);
              _objc_release(puVar18);
            }
            else {
              _objc_setProperty_nonatomic_copy(puVar3);
              _objc_release(puVar4);
              _objc_release(puVar18);
              *(undefined **)(puStack_520 + 0x78) = puStack_568;
              *(undefined **)(puStack_520 + 0x80) = puStack_570;
              _objc_setProperty_nonatomic_copy(puStack_520);
            }
            func_0x00010c25ed40(uStack_558);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puStack_538);
            _objc_release(puVar14);
            _objc_release(puStack_520);
            _objc_release(puStack_508);
            _objc_release(puStack_510);
            _objc_release(uStack_500);
LAB_1084ef7a4:
            _objc_release(puStack_550);
          }
          param_5 = puStack_548;
          _objc_release(puStack_548);
          _objc_release(puStack_4f8);
          puVar3 = puStack_518;
          puStack_530 = puStack_530 + 1;
        } while (puStack_530 != puStack_578);
        puVar14 = puStack_598;
        func_0x00010bf52a60();
        puStack_578 = puVar14;
      } while (puVar14 != (undefined *)0x0);
    }
    _objc_release(puStack_598);
    if (iStack_5a4 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160();
      param_5 = puVar3;
      func_0x00010bf00560();
      _objc_retainAutoreleasedReturnValue();
      FUN_1084efe2c(uStack_558,puStack_560,param_5);
      _objc_release(param_5);
      _objc_release(puVar3);
    }
    _objc_release(puStack_528);
    _objc_release(puStack_540);
  }
  _objc_release(puStack_598);
  _objc_release(lStack_588);
  _objc_release(lStack_580);
  _objc_release(puStack_5a0);
  _objc_release(puStack_518);
  uVar7 = uStack_558;
  _objc_release(uStack_558);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return uVar7;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  _objc_release(puVar3);
  _objc_release(puStack_528);
  _objc_release(puStack_540);
  _objc_release(puStack_598);
  _objc_release(lStack_588);
  _objc_release(lStack_580);
  _objc_release(puStack_5a0);
  _objc_release(puStack_518);
  _objc_release(uStack_558);
  __Unwind_Resume(uVar7);
  pcStack_5b8 = FUN_1084efcbc;
  puStack_5e8 = &uStack_5f0;
  uStack_5f0 = 0;
  uStack_5e0 = 0x2020000000;
  uStack_5d8 = 0;
  puStack_5d0 = param_5;
  puStack_5c8 = puVar3;
  puStack_5c0 = &stack0xfffffffffffffff0;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1340();
  _objc_release(uVar7);
  bVar1 = *(byte *)(puStack_5e8 + 3);
  __Block_object_dispose(&uStack_5f0,8);
  return (ulong)bVar1;
}



/* Entry: 1084efcbc; end: 1084efd97;  */

undefined1 FUN_1084efcbc(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1340();
  _objc_release(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 1084efd98; end: 1084efe2b;  */

void FUN_1084efd98(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c27dd80();
  if (((lVar2 == 6) || (lVar2 = param_2, func_0x00010c27dd80(), lVar2 == 2)) ||
     (lVar2 = param_2, func_0x00010c27dd80(), lVar2 == 7)) {
    bVar1 = true;
  }
  else {
    lVar2 = param_2;
    func_0x00010c27dd80();
    bVar1 = lVar2 == 10;
  }
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = bVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1084efe2c; end: 1084f02ab;  */

void FUN_1084efe2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined ***pppuVar7;
  undefined8 *puVar8;
  undefined4 uStack_324;
  long lStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined **ppuStack_308;
  undefined4 uStack_300;
  undefined4 uStack_2f0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  undefined1 uStack_291;
  undefined **ppuStack_290;
  undefined4 uStack_288;
  undefined2 uStack_278;
  byte bStack_276;
  byte bStack_275;
  undefined1 *puStack_258;
  undefined ***pppuStack_250;
  long lStack_248;
  long lStack_240;
  undefined8 uStack_238;
  long *plStack_230;
  long *plStack_228;
  undefined *apuStack_220 [3];
  undefined1 uStack_201;
  undefined **appuStack_200 [3];
  byte bStack_1e6;
  byte bStack_1e5;
  undefined *apuStack_1b8 [3];
  long *plStack_1a0;
  long *plStack_198;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  byte bStack_176;
  byte bStack_175;
  undefined ***pppuStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  _objc_opt_class(PTR_PTR_1126d5360);
  if (param_1 == 0) {
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_120,param_1);
  }
  puVar2 = &uStack_201;
  func_0x0001009612e4(puVar2);
  func_0x000100961348(apuStack_220,param_3);
  func_0x000107c281a0(appuStack_200,0xd,puVar2,apuStack_220);
  puVar2 = &uStack_291;
  FUN_108520b90();
  uStack_300 = 0xf;
  uStack_2f0 = 0x100;
  ppuStack_308 = &PTR_DAT_110a50120;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  lStack_2b8 = 0;
  lStack_2c0 = 0;
  plStack_2a8 = (long *)0x0;
  uStack_2b0 = 0;
  plStack_2a0 = (long *)0x0;
  bStack_276 = puVar2[0x1a];
  bStack_275 = puVar2[0x1b];
  uStack_288 = 10;
  uStack_278 = 0x100;
  ppuStack_290 = &PTR_FUN_110a4fff0;
  pppuStack_250 = &ppuStack_308;
  plStack_228 = (long *)0x0;
  lStack_240 = 0;
  lStack_248 = 0;
  plStack_230 = (long *)0x0;
  uStack_238 = 0;
  bStack_176 = bStack_1e6 | bStack_276;
  bStack_175 = bStack_1e5 & bStack_275;
  uStack_188 = 4;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_DAT_1108629c8;
  pppuStack_150 = &ppuStack_290;
  uStack_140 = 0;
  lStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  lStack_320 = 0;
  lStack_318 = 0;
  uStack_310 = 0;
  uStack_324 = 0;
  puVar3 = &uStack_120;
  pppuVar7 = &ppuStack_190;
  uStack_2d8 = param_2;
  puStack_258 = puVar2;
  pppuStack_158 = appuStack_200;
  func_0x000107c310cc(puVar3,pppuVar7,&lStack_320,&uStack_324);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_320 != 0) {
    lStack_318 = lStack_320;
    __ZdlPv();
  }
  plVar1 = plStack_128;
  ppuStack_190 = &PTR_DAT_1108629c8;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_148 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_228;
  ppuStack_290 = &PTR_FUN_110a4fff0;
  plStack_228 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_230;
  plStack_230 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_248 != 0) {
    lStack_240 = lStack_248;
    __ZdlPv();
  }
  plVar1 = plStack_2a0;
  ppuStack_308 = &PTR_DAT_110a50120;
  plStack_2a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_2a8;
  plStack_2a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2c0 != 0) {
    lStack_2b8 = lStack_2c0;
    __ZdlPv();
  }
  plVar1 = plStack_198;
  appuStack_200[0] = &PTR_SUB_110862700;
  plStack_198 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a0;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_290 = apuStack_1b8;
  func_0x000107c27dd4(&ppuStack_290);
  ppuStack_290 = apuStack_220;
  func_0x000107c27dd4(&ppuStack_290);
  func_0x000107c27da8(&uStack_f8);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  func_0x00010bf529e0(puVar3);
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar4 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(puVar3);
      }
      pppuVar7 = *(undefined ****)((long)puVar8 * 8);
      puVar5 = PTR_PTR_1126d9eb0;
      FUN_1085210b0(PTR_PTR_1126d9eb0,pppuVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar8 = (undefined8 *)((long)puVar8 + 1);
    } while (puVar4 != puVar8);
    puVar4 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(param_3);
  lVar6 = param_1;
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release(param_1);
  __Unwind_Resume(lVar6);
  func_0x00010c15f2e0(pppuVar7);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1084f02ac; end: 1084f02cb;  */

void FUN_1084f02ac(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c15f2e0(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1084f02cc; end: 1084f0803;  */

undefined ***
FUN_1084f02cc(undefined ***param_1,undefined8 *param_2,undefined **param_3,undefined ***param_4)

{
  long *plVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined ***pppuVar6;
  undefined1 *puVar7;
  undefined ***pppuVar8;
  undefined *puVar9;
  undefined ***pppuVar10;
  undefined **ppuVar11;
  undefined ***pppuVar12;
  undefined1 uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined ***pppuVar16;
  undefined8 *unaff_x21;
  undefined **unaff_x23;
  undefined ***unaff_x26;
  undefined ***unaff_x27;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined4 uStack_44c;
  undefined1 *puStack_448;
  undefined1 *puStack_440;
  undefined8 uStack_438;
  undefined1 auStack_430 [31];
  undefined1 uStack_411;
  undefined **appuStack_410 [9];
  undefined1 auStack_3c8 [24];
  long *plStack_3b0;
  long *plStack_3a8;
  undefined **ppuStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined ***pppuStack_360;
  long lStack_358;
  undefined ***pppuStack_350;
  undefined ***pppuStack_348;
  undefined ***pppuStack_340;
  undefined ***pppuStack_338;
  undefined ***pppuStack_330;
  undefined8 *puStack_328;
  undefined ***pppuStack_320;
  undefined8 *puStack_318;
  undefined1 *puStack_310;
  code *pcStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined ***pppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined4 uStack_25c;
  undefined1 *puStack_258;
  undefined1 *puStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [31];
  undefined1 uStack_221;
  undefined **appuStack_220 [9];
  undefined1 auStack_1d8 [24];
  long *plStack_1c0;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_2f0 = param_1;
  _objc_retain();
  puStack_300 = param_2;
  _objc_retain(param_2);
  ppuStack_2e8 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_opt_class(PTR_PTR_1126d5360);
  if (pppuStack_2f0 == (undefined ***)0x0) {
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_1b0);
  }
  pppuVar16 = (undefined ***)&uStack_221;
  func_0x0001009612e4();
  func_0x000100961348(auStack_240,puStack_300);
  func_0x000107c281a0(appuStack_220,0xc,pppuVar16,auStack_240);
  puStack_258 = (undefined1 *)0x0;
  puStack_250 = (undefined1 *)0x0;
  uStack_248 = 0;
  uStack_25c = 0;
  puVar15 = &uStack_1b0;
  pppuVar8 = appuStack_220;
  func_0x000107c310cc(puVar15,pppuVar8,&puStack_258,&uStack_25c);
  _objc_retainAutoreleasedReturnValue();
  puStack_2f8 = puVar15;
  if (puStack_258 != (undefined1 *)0x0) {
    puStack_250 = puStack_258;
    __ZdlPv();
  }
  plVar1 = plStack_1b8;
  appuStack_220[0] = &PTR_SUB_110862700;
  plStack_1b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1c0;
  plStack_1c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_258 = auStack_1d8;
  func_0x000107c27dd4(&puStack_258);
  puStack_258 = auStack_240;
  func_0x000107c27dd4(&puStack_258);
  func_0x000107c27da8(&uStack_188);
  _objc_release(uStack_198);
  _objc_release(uStack_1a0);
  pppuVar2 = (undefined ***)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puStack_2f8;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  lStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  plStack_290 = (long *)0x0;
  _objc_retain(puStack_2f8);
  func_0x00010bf52a60();
  if (puVar15 != (undefined8 *)0x0) {
    lVar14 = *plStack_290;
    do {
      unaff_x21 = (undefined8 *)0x0;
      do {
        if (*plStack_290 != lVar14) {
          _objc_enumerationMutation(puStack_2f8);
        }
        unaff_x26 = *(undefined ****)(lStack_298 + (long)unaff_x21 * 8);
        pppuVar3 = unaff_x26;
        func_0x00010c259cc0();
        _objc_retainAutoreleasedReturnValue();
        pppuVar16 = (undefined ***)(ulong)(pppuVar3 == (undefined ***)0x0);
        _objc_release();
        if (pppuVar3 != (undefined ***)0x0) {
          pppuVar16 = unaff_x26;
          func_0x00010c259cc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(pppuVar2);
          _objc_release(pppuVar16);
        }
        unaff_x21 = (undefined8 *)((long)unaff_x21 + 1);
      } while (puVar15 != unaff_x21);
      puVar15 = puStack_2f8;
      func_0x00010bf52a60();
    } while (puVar15 != (undefined8 *)0x0);
  }
  _objc_release(puStack_2f8);
  puVar15 = puStack_300;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  puStack_2d0 = (undefined8 *)0x0;
  _objc_retain(puStack_300);
  uVar13 = SUB81(&uStack_2e0,0);
  puVar4 = puVar15;
  func_0x00010bf52a60();
  if (puVar4 != (undefined8 *)0x0) {
    puVar15 = (undefined8 *)*puStack_2d0;
    unaff_x23 = &PTR_PTR_1126d9000;
    do {
      unaff_x21 = (undefined8 *)0x0;
      do {
        if ((undefined8 *)*puStack_2d0 != puVar15) {
          _objc_enumerationMutation(puStack_300);
        }
        unaff_x26 = pppuVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x26 != (undefined ***)0x0) {
          unaff_x27 = (undefined ***)PTR_PTR_1126d9eb0;
          pppuVar8 = unaff_x26;
          func_0x000100aad504();
          _objc_retainAutoreleasedReturnValue();
          ppuVar11 = ppuStack_2e8;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (ppuVar11 != (undefined **)0x0) {
            ppuVar11 = ppuStack_2e8;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar5 = ppuVar11;
            func_0x00010c282800();
            if (unaff_x27 != (undefined ***)0x0) {
              unaff_x27[0x11] = ppuVar5;
            }
            _objc_release(ppuVar11);
          }
          pppuVar3 = param_4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          pppuVar16 = (undefined ***)(ulong)(pppuVar3 == (undefined ***)0x0);
          _objc_release();
          if (pppuVar3 != (undefined ***)0x0) {
            pppuVar16 = param_4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfb2c80();
            if (unaff_x27 != (undefined ***)0x0) {
              *(uint *)(unaff_x27 + 3) = CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17)));
            }
            _objc_release(pppuVar16);
          }
          func_0x00010c25ed40(pppuStack_2f0);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(unaff_x27);
        }
        _objc_release(unaff_x26);
        unaff_x21 = (undefined8 *)((long)unaff_x21 + 1);
      } while (puVar4 != unaff_x21);
      uVar13 = SUB81(&uStack_2e0,0);
      puVar4 = puStack_300;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined8 *)0x0);
  }
  _objc_release(puStack_300);
  _objc_release(pppuVar2);
  _objc_release(puStack_2f8);
  _objc_release(param_4);
  _objc_release(ppuStack_2e8);
  _objc_release(puStack_300);
  pppuVar3 = pppuStack_2f0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pppuVar3;
  }
  ___stack_chk_fail();
  _objc_release(puStack_300);
  _objc_release(pppuVar2);
  _objc_release(puStack_2f8);
  _objc_release(param_4);
  _objc_release(ppuStack_2e8);
  _objc_release(puStack_300);
  _objc_release(pppuStack_2f0);
  pppuVar6 = pppuVar3;
  __Unwind_Resume();
  pcStack_308 = FUN_1084f0804;
  lStack_358 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar12 = pppuVar8;
  pppuStack_350 = unaff_x26;
  pppuStack_348 = pppuVar3;
  pppuStack_340 = pppuVar2;
  pppuStack_338 = (undefined ***)unaff_x23;
  pppuStack_330 = param_4;
  puStack_328 = unaff_x21;
  pppuStack_320 = pppuVar16;
  puStack_318 = puVar15;
  puStack_310 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(pppuVar8);
  pppuVar16 = pppuVar8;
  func_0x00010c08fa60();
  if (pppuVar16 != (undefined ***)0x0) {
    _objc_opt_class(PTR_PTR_1126d5360);
    pppuVar3 = appuStack_410;
    if (pppuVar6 == (undefined ***)0x0) {
      uStack_370 = 0;
      uStack_388 = 0;
      uStack_390 = 0;
      uStack_378 = 0;
      uStack_380 = 0;
      uStack_398 = 0;
      ppuStack_3a0 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_3a0,pppuVar6);
    }
    puVar7 = &uStack_411;
    func_0x0001009612e4(puVar7);
    unaff_x23 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    pppuStack_360 = pppuVar8;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x000100961348(auStack_430,unaff_x23);
    func_0x000107c281a0(appuStack_410,0xc,puVar7,auStack_430);
    puStack_448 = (undefined1 *)0x0;
    puStack_440 = (undefined1 *)0x0;
    uStack_438 = 0;
    uStack_44c = 0;
    pppuVar16 = &ppuStack_3a0;
    pppuVar12 = appuStack_410;
    func_0x000107c310cc(pppuVar16,pppuVar12,&puStack_448,&uStack_44c);
    _objc_retainAutoreleasedReturnValue();
    param_4 = pppuVar16;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar16);
    if (puStack_448 != (undefined1 *)0x0) {
      puStack_440 = puStack_448;
      __ZdlPv();
    }
    plVar1 = plStack_3a8;
    appuStack_410[0] = &PTR_SUB_110862700;
    plStack_3a8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_3b0;
    plStack_3b0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_448 = auStack_3c8;
    func_0x000107c27dd4(&puStack_448);
    puStack_448 = auStack_430;
    func_0x000107c27dd4(&puStack_448);
    _objc_release(unaff_x23);
    func_0x000107c27da8(&uStack_378);
    _objc_release(uStack_388);
    _objc_release(uStack_390);
    if (param_4 != (undefined ***)0x0) {
      unaff_x23 = (undefined **)PTR_PTR_1126d9eb0;
      pppuVar12 = param_4;
      func_0x000100aad504();
      _objc_retainAutoreleasedReturnValue();
      if ((undefined ***)unaff_x23 != (undefined ***)0x0) {
        *(undefined1 *)((long)unaff_x23 + 0x15) = uVar13;
      }
      func_0x00010c25ed40(pppuVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(unaff_x23);
    }
    _objc_release(param_4);
  }
  _objc_release(pppuVar8);
  pppuVar16 = pppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_358) {
    return pppuVar16;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x23);
  _objc_release(param_4);
  _objc_release(pppuVar8);
  _objc_release(pppuVar6);
  pppuVar8 = pppuVar16;
  __Unwind_Resume();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(pppuVar12);
  if (pppuVar12 != (undefined ***)0x0) {
    pppuVar16 = pppuVar12;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    param_4 = pppuVar8;
    FUN_1084e6550(pppuVar8,puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    unaff_x23 = (undefined **)param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar2 = pppuVar12;
    func_0x00010c15e620();
    _objc_retainAutoreleasedReturnValue();
    pppuVar6 = pppuVar2;
    func_0x00010c08b1c0();
    _objc_release(pppuVar2);
    if ((undefined ***)unaff_x23 == (undefined ***)0x0) {
      pppuVar2 = (undefined ***)PTR_PTR_1126d5c20;
      _objc_alloc(PTR_PTR_1126d5c20);
      pppuVar3 = pppuVar12;
      func_0x00010c2923e0(pppuVar12);
      _objc_retainAutoreleasedReturnValue();
      unaff_x27 = pppuVar12;
      func_0x00010c25b340(pppuVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05bc60(pppuVar2);
      _objc_release(unaff_x27);
      _objc_release(pppuVar3);
      pppuVar3 = (undefined ***)PTR_PTR_1126d67d0;
      FUN_10851b2c0(PTR_PTR_1126d67d0,pppuVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      pppuVar3 = (undefined ***)PTR_PTR_1126d67d0;
      FUN_10851b4f8(PTR_PTR_1126d67d0,unaff_x23);
      _objc_retainAutoreleasedReturnValue();
      pppuVar2 = (undefined ***)unaff_x23;
      func_0x00010c15e620();
      _objc_retainAutoreleasedReturnValue();
      pppuVar10 = pppuVar2;
      func_0x00010c08b1c0();
      unaff_x27 = pppuVar3;
      if ((long)pppuVar6 <= (long)pppuVar10) {
        pppuVar6 = (undefined ***)unaff_x23;
        func_0x00010c15e620(unaff_x23);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08b1c0();
        _objc_release(pppuVar6);
      }
    }
    _objc_release(pppuVar2);
    unaff_x26 = (undefined ***)PTR_PTR_1126d6790;
    _objc_alloc(PTR_PTR_1126d6790);
    func_0x00010c021a40();
    if (pppuVar3 != (undefined ***)0x0) {
      _objc_setProperty_nonatomic_copy(pppuVar3);
    }
    _objc_release(unaff_x26);
    func_0x00010c25ed40(pppuVar8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(pppuVar3);
    _objc_release(unaff_x23);
    _objc_release(param_4);
    _objc_release(pppuVar16);
  }
  _objc_release(pppuVar12);
  pppuVar2 = pppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
    ___stack_chk_fail();
    _objc_release(pppuVar3);
    _objc_release(unaff_x26);
    _objc_release(unaff_x27);
    _objc_release(unaff_x23);
    _objc_release(param_4);
    _objc_release(pppuVar16);
    _objc_release(pppuVar12);
    _objc_release(pppuVar8);
    __Unwind_Resume();
    *pppuVar2 = &PTR_FUN_110a4fff0;
    ppuVar11 = pppuVar2[0xd];
    pppuVar2[0xd] = (undefined **)0x0;
    if (ppuVar11 != (undefined **)0x0) {
      (**(code **)(*ppuVar11 + 8))();
    }
    ppuVar11 = pppuVar2[0xc];
    pppuVar2[0xc] = (undefined **)0x0;
    if (ppuVar11 != (undefined **)0x0) {
      (**(code **)(*ppuVar11 + 8))();
    }
    if (pppuVar2[9] != (undefined **)0x0) {
      pppuVar2[10] = pppuVar2[9];
      __ZdlPv();
    }
    return pppuVar2;
  }
  return pppuVar2;
}



/* Entry: 1084f0804; end: 1084f0ae3;  */

undefined *** FUN_1084f0804(undefined ***param_1,undefined ***param_2,undefined1 param_3)

{
  long *plVar1;
  undefined ***pppuVar2;
  undefined1 *puVar3;
  undefined ***pppuVar4;
  undefined *puVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  undefined ***pppuVar10;
  long lVar11;
  undefined ***unaff_x22;
  undefined ***unaff_x23;
  undefined ***unaff_x25;
  undefined *unaff_x26;
  undefined ***unaff_x27;
  undefined4 uStack_14c;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [31];
  undefined1 uStack_111;
  undefined **appuStack_110 [9];
  undefined1 auStack_c8 [24];
  long *plStack_b0;
  long *plStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined ***pppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar10 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  pppuVar2 = param_2;
  func_0x00010c08fa60();
  if (pppuVar2 != (undefined ***)0x0) {
    _objc_opt_class(PTR_PTR_1126d5360);
    unaff_x25 = appuStack_110;
    if (param_1 == (undefined ***)0x0) {
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      ppuStack_a0 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_a0,param_1);
    }
    puVar3 = &uStack_111;
    func_0x0001009612e4(puVar3);
    unaff_x23 = (undefined ***)PTR__OBJC_CLASS___NSArray_1126ae530;
    pppuStack_60 = param_2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x000100961348(auStack_130,unaff_x23);
    func_0x000107c281a0(appuStack_110,0xc,puVar3,auStack_130);
    puStack_148 = (undefined1 *)0x0;
    puStack_140 = (undefined1 *)0x0;
    uStack_138 = 0;
    uStack_14c = 0;
    pppuVar2 = &ppuStack_a0;
    pppuVar10 = appuStack_110;
    func_0x000107c310cc(pppuVar2,pppuVar10,&puStack_148,&uStack_14c);
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = pppuVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar2);
    if (puStack_148 != (undefined1 *)0x0) {
      puStack_140 = puStack_148;
      __ZdlPv();
    }
    plVar1 = plStack_a8;
    appuStack_110[0] = &PTR_SUB_110862700;
    plStack_a8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_b0;
    plStack_b0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_148 = auStack_c8;
    func_0x000107c27dd4(&puStack_148);
    puStack_148 = auStack_130;
    func_0x000107c27dd4(&puStack_148);
    _objc_release(unaff_x23);
    func_0x000107c27da8(&uStack_78);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    if (unaff_x22 != (undefined ***)0x0) {
      unaff_x23 = (undefined ***)PTR_PTR_1126d9eb0;
      pppuVar10 = unaff_x22;
      func_0x000100aad504();
      _objc_retainAutoreleasedReturnValue();
      if (unaff_x23 != (undefined ***)0x0) {
        *(undefined1 *)((long)unaff_x23 + 0x15) = param_3;
      }
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(unaff_x23);
    }
    _objc_release(unaff_x22);
  }
  _objc_release(param_2);
  pppuVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(param_2);
    _objc_release(param_1);
    pppuVar4 = pppuVar2;
    __Unwind_Resume();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(pppuVar10);
    if (pppuVar10 != (undefined ***)0x0) {
      pppuVar2 = pppuVar10;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = pppuVar4;
      FUN_1084e6550(pppuVar4,puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      unaff_x23 = unaff_x22;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      pppuVar6 = pppuVar10;
      func_0x00010c15e620();
      _objc_retainAutoreleasedReturnValue();
      pppuVar7 = pppuVar6;
      func_0x00010c08b1c0();
      _objc_release(pppuVar6);
      if (unaff_x23 == (undefined ***)0x0) {
        pppuVar6 = (undefined ***)PTR_PTR_1126d5c20;
        _objc_alloc(PTR_PTR_1126d5c20);
        pppuVar7 = pppuVar10;
        func_0x00010c2923e0(pppuVar10);
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = pppuVar10;
        func_0x00010c25b340(pppuVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c05bc60(pppuVar6);
        _objc_release(unaff_x27);
        _objc_release(pppuVar7);
        unaff_x25 = (undefined ***)PTR_PTR_1126d67d0;
        FUN_10851b2c0(PTR_PTR_1126d67d0,pppuVar6);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        unaff_x25 = (undefined ***)PTR_PTR_1126d67d0;
        FUN_10851b4f8(PTR_PTR_1126d67d0,unaff_x23);
        _objc_retainAutoreleasedReturnValue();
        pppuVar6 = unaff_x23;
        func_0x00010c15e620();
        _objc_retainAutoreleasedReturnValue();
        pppuVar8 = pppuVar6;
        func_0x00010c08b1c0();
        unaff_x27 = unaff_x25;
        if ((long)pppuVar7 <= (long)pppuVar8) {
          pppuVar7 = unaff_x23;
          func_0x00010c15e620(unaff_x23);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c08b1c0();
          _objc_release(pppuVar7);
        }
      }
      _objc_release(pppuVar6);
      unaff_x26 = PTR_PTR_1126d6790;
      _objc_alloc(PTR_PTR_1126d6790);
      func_0x00010c021a40();
      if (unaff_x25 != (undefined ***)0x0) {
        _objc_setProperty_nonatomic_copy(unaff_x25);
      }
      _objc_release(unaff_x26);
      func_0x00010c25ed40(pppuVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(unaff_x25);
      _objc_release(unaff_x23);
      _objc_release(unaff_x22);
      _objc_release(pppuVar2);
    }
    _objc_release(pppuVar10);
    pppuVar6 = pppuVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
      ___stack_chk_fail();
      _objc_release(unaff_x25);
      _objc_release(unaff_x26);
      _objc_release(unaff_x27);
      _objc_release(unaff_x23);
      _objc_release(unaff_x22);
      _objc_release(pppuVar2);
      _objc_release(pppuVar10);
      _objc_release(pppuVar4);
      __Unwind_Resume();
      *pppuVar6 = &PTR_FUN_110a4fff0;
      ppuVar9 = pppuVar6[0xd];
      pppuVar6[0xd] = (undefined **)0x0;
      if (ppuVar9 != (undefined **)0x0) {
        (**(code **)(*ppuVar9 + 8))();
      }
      ppuVar9 = pppuVar6[0xc];
      pppuVar6[0xc] = (undefined **)0x0;
      if (ppuVar9 != (undefined **)0x0) {
        (**(code **)(*ppuVar9 + 8))();
      }
      if (pppuVar6[9] != (undefined **)0x0) {
        pppuVar6[10] = pppuVar6[9];
        __ZdlPv();
      }
      return pppuVar6;
    }
    return pppuVar6;
  }
  return pppuVar2;
}



/* Entry: 1084f0ae4; end: 1084f0e63;  */

undefined8 * FUN_1084f0ae4(undefined8 *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 != (undefined *)0x0) {
    unaff_x21 = param_2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = param_1;
    FUN_1084e6550(param_1,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    unaff_x23 = unaff_x22;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_2;
    func_0x00010c15e620();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c08b1c0();
    _objc_release(puVar1);
    if (unaff_x23 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)PTR_PTR_1126d5c20;
      _objc_alloc(PTR_PTR_1126d5c20);
      puVar1 = param_2;
      func_0x00010c2923e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      unaff_x27 = param_2;
      func_0x00010c25b340(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05bc60(puVar4);
      _objc_release(unaff_x27);
      _objc_release(puVar1);
      unaff_x25 = PTR_PTR_1126d67d0;
      FUN_10851b2c0(PTR_PTR_1126d67d0,puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      unaff_x25 = PTR_PTR_1126d67d0;
      FUN_10851b4f8(PTR_PTR_1126d67d0,unaff_x23);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = unaff_x23;
      func_0x00010c15e620();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x00010c08b1c0();
      unaff_x27 = unaff_x25;
      if ((long)puVar2 <= (long)puVar3) {
        puVar3 = unaff_x23;
        func_0x00010c15e620(unaff_x23);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08b1c0();
        _objc_release(puVar3);
      }
    }
    _objc_release(puVar4);
    unaff_x26 = PTR_PTR_1126d6790;
    _objc_alloc(PTR_PTR_1126d6790);
    func_0x00010c021a40();
    if (unaff_x25 != (undefined *)0x0) {
      _objc_setProperty_nonatomic_copy(unaff_x25);
    }
    _objc_release(unaff_x26);
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(unaff_x25);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
  }
  _objc_release(param_2);
  puVar4 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    _objc_release(unaff_x25);
    _objc_release(unaff_x26);
    _objc_release(unaff_x27);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    _objc_release(param_2);
    _objc_release(param_1);
    __Unwind_Resume();
    *puVar4 = &PTR_FUN_110a4fff0;
    plVar5 = (long *)puVar4[0xd];
    puVar4[0xd] = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = (long *)puVar4[0xc];
    puVar4[0xc] = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    if (puVar4[9] != 0) {
      puVar4[10] = puVar4[9];
      __ZdlPv();
    }
    return puVar4;
  }
  return puVar4;
}



/* Entry: 1084f0e64; end: 1084f0fab;  */

undefined8 * FUN_1084f0e64(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110a4fff0;
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
  return param_1;
}



/* Entry: 1084f0fac; end: 1084f1667;  */

void FUN_1084f0fac(long param_1,undefined8 param_2,int *param_3)

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
    goto code_r0x0001084f160c;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x0001084f162c;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x0001084f162c;
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
code_r0x0001084f15a0:
                    /* WARNING: Could not recover jumptable at 0x0001084f15c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x0001084f15a0;
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
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
      goto code_r0x0001084f162c;
    }
    goto code_r0x0001084f1620;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x0001084f1620;
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
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
    goto code_r0x0001084f162c;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x0001084f162c;
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
    goto LAB_1084f163c;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x0001084f160c:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x0001084f1620:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x0001084f162c:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_1084f163c:
  return;
}



/* Entry: 1084f1668; end: 1084f16ef;  */

void FUN_1084f1668(long param_1,undefined8 param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0001084f16dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 1084f16f0; end: 1084f1823;  */

void FUN_1084f16f0(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar3 = *(long **)(param_1 + 0x38);
      if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
      }
      puVar1 = *(undefined8 **)(param_1 + 0x50);
      for (puVar5 = *(undefined8 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar4 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar4);
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
  plVar3 = *(long **)(param_1 + 0x38);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
  }
  plVar3 = *(long **)(param_1 + 0x40);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001084f1818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 1084f1824; end: 1084f1a2f;  */

uint FUN_1084f1824(long param_1,long param_2,long param_3,byte *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
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
        puVar2 = *(undefined8 **)(param_1 + 0x48);
        puVar3 = *(undefined8 **)(param_1 + 0x50);
        if (uVar9 == 0xc) {
          if (puVar2 == puVar3) {
            uVar9 = 0;
          }
          else {
            do {
              puVar7 = puVar2 + 1;
              plVar8 = (long *)*puVar2;
              uVar9 = (uint)(plVar10 == plVar8);
              puVar2 = puVar7;
            } while (plVar10 != plVar8 && puVar7 != puVar3);
          }
        }
        else if (puVar2 == puVar3) {
          uVar9 = 1;
        }
        else {
          do {
            puVar7 = puVar2 + 1;
            plVar8 = (long *)*puVar2;
            uVar9 = (uint)(plVar10 != plVar8);
            puVar2 = puVar7;
          } while (plVar10 != plVar8 && puVar7 != puVar3);
        }
        _objc_release(param_3);
        goto LAB_1084f1a08;
      }
      goto LAB_1084f1954;
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
      goto LAB_1084f1a08;
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
      goto LAB_1084f1a08;
    }
LAB_1084f1954:
    if ((uVar9 & 0xfffffffe) != 10) {
      uVar9 = 0;
      goto LAB_1084f1a08;
    }
    plVar10 = *(long **)(param_1 + 0x38);
    plVar8 = *(long **)(param_1 + 0x40);
    (**(code **)(*plVar10 + 0x28))(plVar10,param_2,param_3,&bStack_41);
    (**(code **)(*plVar8 + 0x28))(plVar8,param_2,param_3,&bStack_42);
    *param_4 = (bStack_41 | bStack_42) & 1;
    bVar5 = uVar9 == 0xb;
    bVar4 = plVar10 == plVar8;
  }
  uVar9 = (uint)(bVar5 ^ bVar4);
LAB_1084f1a08:
  _objc_release(param_3);
  return uVar9 & 1;
}



/* Entry: 1084f1a30; end: 1084f1cab;  */

undefined8 * FUN_1084f1a30(long param_1)

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
        *puVar6 = &PTR_FUN_110a4fff0;
        puVar6[7] = plVar7;
        lVar1 = *(long *)(param_1 + 0x48);
        lVar2 = *(long *)(param_1 + 0x50);
        puVar6[9] = 0;
        puVar6[8] = 0;
        puVar6[0xb] = 0;
        puVar6[10] = 0;
        FUN_1084f1cac(puVar6 + 9,lVar1,lVar2,lVar2 - lVar1 >> 3);
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
    *puVar6 = &PTR_FUN_110a4fff0;
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
    *puVar6 = &PTR_FUN_110a4fff0;
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
      goto LAB_1084f1b58;
    }
  }
  else if ((*(byte *)((long)plVar7 + 0x1b) & 1) != 0) {
    bVar13 = 1;
    goto LAB_1084f1b58;
  }
  bVar13 = *(byte *)((long)plVar8 + 0x1b);
LAB_1084f1b58:
  *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
  *(undefined1 *)(puVar6 + 3) = 0;
  *(byte *)((long)puVar6 + 0x19) = bVar9 & 1;
  *(byte *)((long)puVar6 + 0x1a) = bVar12 & 1;
  *(byte *)((long)puVar6 + 0x1b) = bVar13 & 1;
  *puVar6 = &PTR_FUN_110a4fff0;
  puVar6[7] = plVar7;
  puVar6[8] = plVar8;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = plVar7;
  puVar6[0xd] = plVar8;
  return puVar6;
}



/* Entry: 1084f1cac; end: 1084f1d23;  */

void FUN_1084f1cac(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_1084f1d24(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 1084f1d24; end: 1084f1d5f;  */

void FUN_1084f1d24(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  if (param_2 >> 0x3d == 0) {
    plVar2 = param_1 + 2;
    FUN_1084f1d74();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)(plVar2 + param_2);
    return;
  }
  FUN_1084f1d60();
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  *puVar1 = &PTR_DAT_110a50120;
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



/* Entry: 1084f1d60; end: 1084f1d73;  */

void FUN_1084f1d60(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  *puVar1 = &PTR_DAT_110a50120;
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



/* Entry: 1084f1d74; end: 1084f1e17;  */

void FUN_1084f1d74(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_DAT_110a50120;
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



/* Entry: 1084f1e18; end: 1084f24d3;  */

void FUN_1084f1e18(long param_1,undefined8 param_2,int *param_3)

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
    goto code_r0x0001084f2478;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x0001084f2498;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x0001084f2498;
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
code_r0x0001084f240c:
                    /* WARNING: Could not recover jumptable at 0x0001084f2430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x0001084f240c;
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
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
      goto code_r0x0001084f2498;
    }
    goto code_r0x0001084f248c;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x0001084f248c;
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
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
    goto code_r0x0001084f2498;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x0001084f2498;
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
    goto LAB_1084f24a8;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x0001084f2478:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x0001084f248c:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x0001084f2498:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_1084f24a8:
  return;
}



/* Entry: 1084f24d4; end: 1084f255b;  */

void FUN_1084f24d4(long param_1,undefined8 param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0001084f2548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 1084f255c; end: 1084f268f;  */

void FUN_1084f255c(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar3 = *(long **)(param_1 + 0x38);
      if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
      }
      puVar1 = *(undefined8 **)(param_1 + 0x50);
      for (puVar5 = *(undefined8 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar4 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar4);
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
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined8 *)(param_1 + 0x30));
      return;
    }
  }
  plVar3 = *(long **)(param_1 + 0x38);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
  }
  plVar3 = *(long **)(param_1 + 0x40);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001084f2684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 1084f2690; end: 1084f273f;  */

long FUN_1084f2690(long param_1,long param_2,long param_3,undefined1 *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  _objc_retain(param_3);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 - 1U < 2) {
    lVar3 = 0;
    *param_4 = 0;
  }
  else if (iVar2 - 0xfU < 2) {
    *param_4 = 0;
    lVar3 = *(long *)(param_1 + 0x30);
  }
  else if (iVar2 == 0xe) {
    lVar1 = 0x28;
    lVar3 = param_3;
    if (param_2 != 0) {
      lVar1 = 0x20;
      lVar3 = param_2;
    }
    (**(code **)(param_1 + lVar1))(lVar3,param_4);
  }
  else {
    lVar3 = 0;
  }
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1084f2740; end: 1084f277b;  */

undefined8 FUN_1084f2740(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  __Znwm(0x70);
  FUN_1084f277c(uVar1,param_1);
  return uVar1;
}



/* Entry: 1084f277c; end: 1084f2927;  */

void FUN_1084f277c(undefined8 *param_1,long param_2)

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
      func_0x0001084f29bc(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
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
      func_0x0001084f2928(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_1084f2868:
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
        FUN_1084f2abc(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_1084f2868;
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
      param_1[6] = *(undefined8 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_DAT_110a50120;
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



/* Entry: 1084f2928; end: 1084f2abb;  */

undefined8 * FUN_1084f2928(undefined8 *param_1,int param_2,long *param_3)

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
  *param_1 = &PTR_DAT_110a50120;
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



/* Entry: 1084f2abc; end: 1084f2b53;  */

undefined8 * FUN_1084f2abc(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

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
  *param_1 = &PTR_DAT_110a50120;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_1084f1cac(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 3);
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



/* Entry: 1084f2b54; end: 1084f2b57;  */

void FUN_1084f2b54(void)

{
  return;
}



/* Entry: 1084f2b58; end: 1084f2be7;  */

void FUN_1084f2b58(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c27dd80();
  if (lVar1 == 6) {
    uVar2 = 0x10;
  }
  else {
    lVar1 = param_2;
    func_0x00010c27dd80();
    if (lVar1 == 7) {
      uVar2 = 0x20;
    }
    else {
      lVar1 = param_2;
      func_0x00010c27dd80();
      if (lVar1 != 10) goto LAB_1084f2bc4;
      uVar2 = 0x400;
    }
  }
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar2;
LAB_1084f2bc4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1084f2be8; end: 1084f2bef;  */

void FUN_1084f2be8(void)

{
  return;
}



/* Entry: 1084f2bf0; end: 1084f2c33;  */

void FUN_1084f2bf0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c25b820();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = 0x100;
  if (lVar2 != 1) {
    uVar1 = 1;
  }
  *(ulong *)(lVar3 + 0x18) = *(ulong *)(lVar3 + 0x18) | uVar1;
  return;
}



/* Entry: 1084f2c34; end: 1084f2c8b;  */

void FUN_1084f2c34(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(ulong *)(lVar1 + 0x18) = *(ulong *)(lVar1 + 0x18) | 4;
  return;
}



/* Entry: 1084f2c8c; end: 1084f2def;  */

void FUN_1084f2c8c(long param_1,undefined8 param_2)

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
  undefined *puVar11;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bfdaf40();
  if ((int)lVar1 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar11 = PTR_PTR_1126d9eb8;
    _objc_alloc(PTR_PTR_1126d9eb8);
    lVar1 = param_1;
    func_0x00010c241220(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf9c8a0(param_1);
    lVar3 = param_1;
    func_0x00010c121800(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c2a2640();
    lVar5 = param_1;
    func_0x00010c121800(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c2a2600();
    lVar7 = param_1;
    func_0x00010c121800(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c2a2620();
    lVar9 = param_1;
    func_0x00010c121800(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c2a25e0();
    func_0x00010c0486c0((double)lVar2 / 1000.0,0,puVar11,param_2,lVar1,1,lVar4,lVar6,lVar8,lVar10);
    _objc_release(lVar9);
    _objc_release(lVar7);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1084f2df0; end: 1084f2e7b;  */

void FUN_1084f2df0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d9eb8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0486c0(param_1,0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084f2e7c; end: 1084f300f;  */

void FUN_1084f2e7c(double param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  
  puVar2 = PTR_PTR_1126d9ec0;
  _objc_retain();
  _objc_opt_new(puVar2);
  lVar3 = param_2;
  func_0x00010c11b1e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e5b60(puVar2,param_3,lVar3);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010c259cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20d1a0(puVar2,param_3,lVar3);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010c29f040(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x000100576e9c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c223100(puVar2,param_3,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010c29e4e0(param_2);
  func_0x00010c222d00(puVar2,param_3,(long)param_1);
  lVar3 = param_2;
  func_0x00010c25e5c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20ed20(puVar2,param_3,lVar3);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010c25e5e0(param_2);
  func_0x00010c20ed40(puVar2,param_3,lVar3);
  lVar3 = param_2;
  func_0x00010bf08ca0();
  iVar1 = (int)lVar3;
  if (99 < iVar1) {
    iVar1 = 100;
  }
  func_0x00010c169d00(puVar2,param_3,iVar1);
  lVar3 = param_2;
  func_0x00010bf4dac0();
  uVar5 = 3;
  if (lVar3 != 3) {
    uVar5 = 0;
  }
  if (lVar3 == 1) {
    uVar5 = 1;
  }
  func_0x00010c182a00(puVar2,param_3,uVar5);
  lVar3 = param_2;
  func_0x00010c298be0(param_2);
  func_0x00010c220e20(puVar2,param_3,lVar3);
  lVar3 = param_2;
  func_0x00010c22a980(param_2);
  _objc_release(param_2);
  func_0x00010c1feb60(puVar2,param_3,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1084f3010; end: 1084f3203;  */

void FUN_1084f3010(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d9ec8;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  uVar2 = param_1;
  func_0x00010c241220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204680(puVar1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c2423e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100576e9c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204f80(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x000100576e9c(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c223100(puVar1);
  _objc_release(uVar2);
  func_0x00010c29e4e0(param_1);
  func_0x00010c222d00(puVar1);
  func_0x00010bf9c840(param_1);
  func_0x00010c204500(puVar1);
  uVar2 = param_1;
  func_0x00010c121800(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d9ed0;
  _objc_opt_new(PTR_PTR_1126d9ed0);
  func_0x00010c14b7c0(uVar2);
  func_0x00010c224940(puVar4);
  func_0x00010c151460(uVar2);
  func_0x00010c224960(puVar4);
  func_0x00010c151b40(uVar2);
  func_0x00010c224980(puVar4);
  func_0x00010c1e7ec0(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar2);
  func_0x00010bfb83a0();
  func_0x00010c19fde0(puVar1);
  func_0x00010c25b720();
  func_0x00010c20ddc0(puVar1);
  func_0x00010c22a980(param_1);
  func_0x00010c1feb60(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084f3204; end: 1084f3303; -[SCStoriesSnapReadReceiptObserver storiesReadReceiptViewStatesByIds:completion:] */

void FUN_1084f3204(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1084f3304; end: 1084f337b;  */

void FUN_1084f3304(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010be0f5e0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,lVar1);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1084f337c; end: 1084f33a3; -[SCStoriesSnapReadReceiptObserver storiesReadReceiptViewStatesObservable] */

void FUN_1084f337c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084f33a4; end: 1084f33f3; -[SCStoriesSnapReadReceiptObserver currentStoriesReadReceiptViewStates] */

void FUN_1084f33a4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = *(undefined **)(param_1 + 0x28);
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSDictionary0__struct_11034ab58;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084f33f4; end: 1084f34f3; -[SCStoriesSnapReadReceiptObserver premiumWatchStatesByStoryIds:completion:] */

void FUN_1084f33f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1084f34f4; end: 1084f356b;  */

void FUN_1084f34f4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010be0f6e0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,lVar1);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1084f356c; end: 1084f3817; -[SCStoriesSnapReadReceiptObserver _fetchAndObserveForSnapIds:] */

void FUN_1084f356c(long param_1,undefined1 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **unaff_x24;
  long lVar9;
  long lVar10;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    FUN_1084f75f4(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd77a0(param_1);
    _objc_initWeak(auStack_e8,param_1);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_150 = 0xc2000000;
    pcStack_148 = FUN_1084f3818;
    puStack_140 = &UNK_1108634b8;
    unaff_x24 = &puStack_158;
    param_2 = auStack_e8;
    _objc_copyWeak(auStack_138,param_2);
    func_0x00010c0e0a80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar8;
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_138);
    _objc_destroyWeak(auStack_e8);
    _objc_release(uVar1);
  }
  lVar3 = param_3;
  func_0x00010bf529e0();
  puVar7 = *(undefined **)(param_1 + 0x20);
  if (lVar3 == 0) {
    _objc_retain(puVar7);
  }
  else {
    _objc_retain(param_3);
    _objc_retain(puVar7);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_3);
    lVar3 = param_3;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar9 = *plStack_120;
      do {
        lVar10 = 0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(param_3);
          }
          unaff_x24 = *(undefined ***)(lStack_128 + lVar10 * 8);
          puVar5 = puVar7;
          func_0x00010c0e00e0(puVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar4);
          _objc_release(puVar5);
          lVar10 = lVar10 + 1;
        } while (lVar3 != lVar10);
        lVar3 = param_3;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(param_3);
    puVar5 = puVar4;
    func_0x00010bf51e00();
    _objc_release(puVar4);
    _objc_release(puVar7);
    _objc_release(param_3);
    puVar7 = puVar5;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x24 + 4);
  _objc_destroyWeak(auStack_e8);
  __Unwind_Resume(param_3);
  _objc_retain(param_2);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010bdd77a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1084f3818; end: 1084f385f;  */

void FUN_1084f3818(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd77a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1084f3860; end: 1084f3a0f; -[SCStoriesSnapReadReceiptObserver _fetchAndObserveWatchStatesForStoryIds:] */

void FUN_1084f3860(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    FUN_1084f732c(uVar1,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd77c0(param_1);
    _objc_initWeak(auStack_48,param_1);
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1084f3a10;
    puStack_58 = &UNK_1108634b8;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0e0a80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar1);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  if (param_3 == 0) {
    func_0x00010bf51e00(uVar4);
  }
  else {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    uStack_88 = 0x1084f3a58;
    puStack_80 = &UNK_110894890;
    _objc_retain(param_3);
    lStack_78 = param_3;
    func_0x00010bd869d0(uVar4,&puStack_98,0);
    _objc_release(lStack_78);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1084f3a10; end: 1084f3aaf;  */

void FUN_1084f3a10(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd77c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1084f3ab0; end: 1084f3c53; -[SCStoriesSnapReadReceiptObserver _cacheFetchedViewStates:] */

void FUN_1084f3ab0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar2 = param_3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(lVar2);
      }
      lVar9 = *(long *)(lVar11 * 8);
      lVar10 = lVar9;
      func_0x00010c243260();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar10;
      func_0x00010c08fa60();
      _objc_release(lVar10);
      if (lVar4 != 0) {
        func_0x00010c243260();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(lVar9);
      }
      lVar11 = lVar11 + 1;
    } while (lVar3 != lVar11);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  puVar5 = puVar1;
  func_0x00010bf51e00();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar5;
  _objc_release(uVar8);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar7 = lVar3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar7;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar7);
      }
      uVar8 = *(undefined8 *)(lVar10 * 8);
      func_0x00010c259cc0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(uVar8);
      lVar10 = lVar10 + 1;
    } while (lVar6 != lVar10);
    lVar6 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  puVar5 = puVar1;
  func_0x00010bf51e00();
  uVar8 = *(undefined8 *)(param_3 + 0x38);
  *(undefined **)(param_3 + 0x38) = puVar5;
  _objc_release(uVar8);
  _objc_release(puVar1);
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar3 + 0x38,0);
  _objc_storeStrong(lVar3 + 0x30,0);
  _objc_storeStrong(lVar3 + 0x28,0);
  _objc_storeStrong(lVar3 + 0x20,0);
  _objc_storeStrong(lVar3 + 0x18,0);
  _objc_storeStrong(lVar3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar3 + 8,0);
  return;
}



/* Entry: 1084f3c54; end: 1084f3dc7; -[SCStoriesSnapReadReceiptObserver _cacheFetchedWatchStates:] */

void FUN_1084f3c54(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar3 = param_3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      uVar7 = *(undefined8 *)(lVar8 * 8);
      func_0x00010c259cc0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(uVar7);
      lVar8 = lVar8 + 1;
    } while (lVar4 != lVar8);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  puVar5 = puVar2;
  func_0x00010bf51e00();
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar5;
  _objc_release(uVar7);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x38,0);
  _objc_storeStrong(param_3 + 0x30,0);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 1084f3dc8; end: 1084f3e33; -[SCStoriesSnapReadReceiptObserver .cxx_destruct] */

void FUN_1084f3dc8(long param_1)

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



/* Entry: 1084f3e34; end: 1084f3f4b;  */

void FUN_1084f3e34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar1 = 0x15;
  func_0x000107c312b8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8500(param_1);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 1084f3f4c; end: 1084f4603;  */

void FUN_1084f3f4c(undefined *param_1,undefined *param_2)

{
  long *plVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined *unaff_x20;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x27;
  undefined4 uStack_304;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 uStack_2f0;
  undefined **ppuStack_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2d0;
  undefined **ppuStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long *plStack_288;
  long *plStack_280;
  undefined1 uStack_271;
  undefined **ppuStack_270;
  undefined4 uStack_268;
  undefined2 uStack_258;
  undefined2 uStack_256;
  undefined1 *puStack_238;
  undefined ***pppuStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long *plStack_210;
  long *plStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar3 = param_2;
  puStack_148 = param_2;
  FUN_1084f4604();
  _objc_retainAutoreleasedReturnValue();
  puStack_158 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    unaff_x20 = PTR_PTR_1126d9ed8;
    FUN_1084fd710(PTR_PTR_1126d9ed8,0);
    _objc_retainAutoreleasedReturnValue();
    if (unaff_x20 != (undefined *)0x0) {
      _objc_setProperty_nonatomic_copy(unaff_x20);
    }
    func_0x00010c25ed40(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(unaff_x20);
  }
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x000100504554(uVar5,&PTR___NSConcreteGlobalBlock_110a501a0);
    param_2 = puStack_148;
    unaff_x20 = puStack_148;
    uStack_168 = uVar5;
    func_0x000100aabfbc();
    _objc_retainAutoreleasedReturnValue();
    param_1 = *(undefined **)(param_1 + 0x20);
    _objc_retain();
    _objc_retain(param_1);
    _objc_retain(param_2);
    puVar3 = unaff_x20;
    puStack_160 = unaff_x20;
    puStack_150 = param_1;
    func_0x00010050471c(unaff_x20,&PTR___NSConcreteGlobalBlock_110a50330,
                        &PTR___NSConcreteGlobalBlock_110a50350);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    puStack_138 = puVar3;
    _objc_retain(param_1);
    puVar3 = param_1;
    func_0x00010bf52a60();
    unaff_x25 = (undefined *)0x0;
    if (puVar3 != (undefined *)0x0) {
      lStack_140 = *plStack_120;
      do {
        param_2 = (undefined *)0x0;
        do {
          if (*plStack_120 != lStack_140) {
            _objc_enumerationMutation(puStack_150);
          }
          param_1 = *(undefined **)(lStack_128 + (long)param_2 * 8);
          puVar6 = param_1;
          func_0x00010c241220(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puStack_138;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar6);
          unaff_x20 = PTR_PTR_1126d9ee0;
          if (puVar7 == (undefined *)0x0) {
            FUN_1084f2c8c(param_1);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = unaff_x20;
            FUN_108501940(unaff_x20,param_1);
            _objc_retainAutoreleasedReturnValue();
            unaff_x22 = (undefined *)0x1;
            puVar7 = param_1;
LAB_1084f4354:
            param_1 = unaff_x24;
            _objc_release(unaff_x25);
LAB_1084f4360:
            _objc_release(puVar7);
            func_0x00010c25ed40(puStack_148);
            _objc_unsafeClaimAutoreleasedReturnValue();
            unaff_x24 = param_1;
            unaff_x25 = puVar6;
          }
          else {
            puVar6 = param_1;
            func_0x00010c241220(param_1);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puStack_138;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar6);
            _objc_retain(puVar7);
            _objc_retain(param_1);
            puVar6 = param_1;
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            unaff_x22 = puVar7;
            func_0x00010c243260();
            _objc_retainAutoreleasedReturnValue();
            unaff_x23 = puVar6;
            func_0x00010c0720c0();
            _objc_release(unaff_x22);
            _objc_release(puVar6);
            if (((ulong)unaff_x23 & 1) == 0) {
LAB_1084f4234:
              _objc_release(param_1);
              _objc_release(puVar7);
LAB_1084f4244:
              puVar6 = PTR_PTR_1126d9ee0;
              FUN_108501b78(PTR_PTR_1126d9ee0,puVar7);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(unaff_x25);
              puVar8 = puVar7;
              func_0x00010c29ea60();
              if (((ulong)puVar8 & 1) == 0) {
                puVar8 = param_1;
                func_0x00010bfdaf40();
                uVar2 = SUB81(puVar8,0);
              }
              else {
                uVar2 = 1;
              }
              if (puVar6 != (undefined *)0x0) {
                puVar6[0x14] = uVar2;
              }
              puVar8 = puVar7;
              func_0x00010c151b40();
              if (((ulong)puVar8 & 1) == 0) {
                unaff_x27 = param_1;
                func_0x00010c121800();
                _objc_retainAutoreleasedReturnValue();
                puVar9 = unaff_x27;
                func_0x00010c2a2640();
                uVar2 = SUB81(puVar9,0);
              }
              else {
                uVar2 = 1;
              }
              if (puVar6 != (undefined *)0x0) {
                puVar6[0x15] = uVar2;
              }
              if (((ulong)puVar8 & 1) == 0) {
                _objc_release(unaff_x27);
              }
              unaff_x20 = puVar7;
              func_0x00010c14b7c0();
              if (((ulong)unaff_x20 & 1) == 0) {
                func_0x00010c121800();
                _objc_retainAutoreleasedReturnValue();
                puVar8 = param_1;
                func_0x00010c2a2600();
                uVar2 = SUB81(puVar8,0);
              }
              else {
                uVar2 = 1;
                param_1 = unaff_x24;
              }
              if (puVar6 != (undefined *)0x0) {
                puVar6[0x16] = uVar2;
              }
              unaff_x25 = param_1;
              unaff_x24 = param_1;
              if (((ulong)unaff_x20 & 1) == 0) goto LAB_1084f4354;
              goto LAB_1084f4360;
            }
            puVar6 = puVar7;
            func_0x00010c29ea60();
            puVar8 = param_1;
            func_0x00010bfdaf40();
            if ((int)puVar6 != (int)puVar8) goto LAB_1084f4234;
            puVar6 = puVar7;
            func_0x00010c151b40();
            unaff_x22 = param_1;
            func_0x00010c121800();
            _objc_retainAutoreleasedReturnValue();
            unaff_x23 = unaff_x22;
            func_0x00010c2a2640();
            _objc_release(unaff_x22);
            if ((((uint)puVar6 ^ (uint)unaff_x23) & 1) != 0) goto LAB_1084f4234;
            puVar6 = puVar7;
            func_0x00010c14b7c0();
            unaff_x22 = param_1;
            func_0x00010c121800();
            _objc_retainAutoreleasedReturnValue();
            unaff_x23 = unaff_x22;
            func_0x00010c2a2600();
            _objc_release(unaff_x22);
            if ((((uint)puVar6 ^ (uint)unaff_x23) & 1) != 0) goto LAB_1084f4234;
            unaff_x20 = puVar7;
            func_0x00010c151460();
            unaff_x23 = param_1;
            func_0x00010c121800();
            _objc_retainAutoreleasedReturnValue();
            unaff_x22 = unaff_x23;
            func_0x00010c2a2620();
            _objc_release(unaff_x23);
            _objc_release(param_1);
            _objc_release(puVar7);
            if ((((uint)unaff_x20 ^ (uint)unaff_x22) & 1) != 0) goto LAB_1084f4244;
            _objc_release(puVar7);
          }
          param_2 = param_2 + 1;
        } while (puVar3 != param_2);
        puVar3 = puStack_150;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined *)0x0);
    }
    _objc_release(puStack_150);
    _objc_release(unaff_x25);
    _objc_release(puStack_138);
    _objc_release(puStack_148);
    _objc_release(puStack_150);
    _objc_release(puStack_160);
    _objc_release(puStack_160);
    _objc_release(uStack_168);
  }
  _objc_release(puStack_158);
  puVar3 = puStack_148;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puStack_158);
  _objc_release(puStack_148);
  puVar6 = puVar3;
  __Unwind_Resume();
  pcStack_178 = FUN_1084f4604;
  puStack_1c0 = puVar3;
  puStack_1b8 = unaff_x25;
  puStack_1b0 = unaff_x24;
  puStack_1a8 = unaff_x23;
  puStack_1a0 = unaff_x22;
  puStack_198 = param_1;
  puStack_190 = unaff_x20;
  puStack_188 = param_2;
  puStack_180 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126d9f00);
  if (puVar6 == (undefined *)0x0) {
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_200,puVar6);
  }
  puVar10 = &uStack_271;
  FUN_1084fd4bc();
  uStack_2e0 = 0xf;
  uStack_2d0 = 0x100;
  ppuStack_2b8 = &PTR____CFConstantStringClassReference_110ee0318;
  ppuStack_2e8 = &PTR_DAT_110862760;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  plStack_288 = (long *)0x0;
  uStack_290 = 0;
  plStack_280 = (long *)0x0;
  uStack_256 = *(undefined2 *)(puVar10 + 0x1a);
  uStack_268 = 10;
  uStack_258 = 0x100;
  ppuStack_270 = &PTR_SUB_110862700;
  uStack_220 = 0;
  uStack_228 = 0;
  plStack_210 = (long *)0x0;
  uStack_218 = 0;
  plStack_208 = (long *)0x0;
  puStack_300 = (undefined8 *)0x0;
  puStack_2f8 = (undefined8 *)0x0;
  uStack_2f0 = 0;
  uStack_304 = 0;
  puVar11 = &uStack_200;
  puStack_238 = puVar10;
  pppuStack_230 = &ppuStack_2e8;
  func_0x000107c310cc(puVar11,&ppuStack_270,&puStack_300,&uStack_304);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_300 != (undefined8 *)0x0) {
    puStack_2f8 = puStack_300;
    __ZdlPv();
  }
  plVar1 = plStack_208;
  ppuStack_270 = &PTR_SUB_110862700;
  plStack_208 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_210;
  plStack_210 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_300 = &uStack_228;
  func_0x000107c27dd4(&puStack_300);
  plVar1 = plStack_280;
  ppuStack_2e8 = &PTR_DAT_110862760;
  plStack_280 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_288;
  plStack_288 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_300 = &uStack_2a0;
  func_0x000107c27dd4(&puStack_300);
  _objc_release(ppuStack_2b8);
  func_0x000107c27da8(&uStack_1d8);
  _objc_release(uStack_1e8);
  _objc_release(uStack_1f0);
  puVar12 = puVar11;
  func_0x00010bfb1920(puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1084f4604; end: 1084f4837;  */

void FUN_1084f4604(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_194;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined4 uStack_170;
  undefined4 uStack_160;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126d9f00);
  if (param_1 == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_90,param_1);
  }
  puVar2 = &uStack_101;
  FUN_1084fd4bc();
  uStack_170 = 0xf;
  uStack_160 = 0x100;
  ppuStack_148 = &PTR____CFConstantStringClassReference_110ee0318;
  ppuStack_178 = &PTR_DAT_110862760;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  plStack_110 = (long *)0x0;
  uStack_e6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_f8 = 10;
  uStack_e8 = 0x100;
  ppuStack_100 = &PTR_SUB_110862700;
  uStack_b0 = 0;
  uStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  plStack_98 = (long *)0x0;
  puStack_190 = (undefined8 *)0x0;
  puStack_188 = (undefined8 *)0x0;
  uStack_180 = 0;
  uStack_194 = 0;
  puVar3 = &uStack_90;
  puStack_c8 = puVar2;
  pppuStack_c0 = &ppuStack_178;
  func_0x000107c310cc(puVar3,&ppuStack_100,&puStack_190,&uStack_194);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_190 != (undefined8 *)0x0) {
    puStack_188 = puStack_190;
    __ZdlPv();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_SUB_110862700;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_190 = &uStack_b8;
  func_0x000107c27dd4(&puStack_190);
  plVar1 = plStack_110;
  ppuStack_178 = &PTR_DAT_110862760;
  plStack_110 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_118;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_190 = &uStack_130;
  func_0x000107c27dd4(&puStack_190);
  _objc_release(ppuStack_148);
  func_0x000107c27da8(&uStack_68);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  puVar4 = puVar3;
  func_0x00010bfb1920(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1084f4838; end: 1084f4857;  */

void FUN_1084f4838(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1084f4858; end: 1084f4c2f;  */

undefined ******
FUN_1084f4858(double param_1,undefined ******param_2,undefined ******param_3,undefined ******param_4
             ,undefined ******param_5)

{
  bool bVar1;
  long *plVar2;
  undefined ******ppppppuVar3;
  undefined ******ppppppuVar4;
  undefined ******ppppppuVar5;
  undefined ******ppppppuVar6;
  undefined ******ppppppuVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined ******ppppppuVar10;
  undefined ******ppppppuVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined *****pppppuVar14;
  undefined ******ppppppuVar15;
  long lVar16;
  undefined ******ppppppuVar17;
  undefined ******ppppppuVar18;
  long lVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined ******unaff_x27;
  undefined8 *puVar22;
  undefined ******unaff_x28;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined4 uStack_764;
  long lStack_760;
  long lStack_758;
  undefined8 uStack_750;
  undefined **ppuStack_748;
  undefined4 uStack_740;
  undefined4 uStack_730;
  undefined *****pppppuStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  long lStack_700;
  long lStack_6f8;
  undefined8 uStack_6f0;
  long *plStack_6e8;
  long *plStack_6e0;
  undefined1 uStack_6d1;
  undefined **ppuStack_6d0;
  undefined4 uStack_6c8;
  undefined2 uStack_6b8;
  byte bStack_6b6;
  byte bStack_6b5;
  undefined1 *puStack_698;
  undefined ***pppuStack_690;
  long lStack_688;
  long lStack_680;
  undefined8 uStack_678;
  long *plStack_670;
  long *plStack_668;
  undefined *apuStack_660 [3];
  undefined1 uStack_641;
  undefined **appuStack_640 [3];
  byte bStack_626;
  byte bStack_625;
  undefined *apuStack_5f8 [3];
  long *plStack_5e0;
  long *plStack_5d8;
  undefined **ppuStack_5d0;
  undefined4 uStack_5c8;
  undefined2 uStack_5b8;
  byte bStack_5b6;
  byte bStack_5b5;
  undefined ***pppuStack_598;
  undefined ***pppuStack_590;
  long lStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  long *plStack_570;
  long *plStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  long lStack_4a8;
  undefined *****pppppuStack_4a0;
  undefined *****pppppuStack_498;
  undefined *****pppppuStack_490;
  undefined *puStack_488;
  undefined *****pppppuStack_480;
  undefined *****pppppuStack_478;
  undefined *****pppppuStack_470;
  undefined *****pppppuStack_468;
  undefined *****pppppuStack_460;
  undefined *****pppppuStack_458;
  undefined1 ***pppuStack_450;
  code *pcStack_448;
  undefined *****pppppuStack_440;
  undefined *****pppppuStack_438;
  undefined4 uStack_42c;
  undefined ****ppppuStack_428;
  undefined ****ppppuStack_420;
  undefined8 uStack_418;
  undefined ***apppuStack_410 [3];
  undefined1 uStack_3f1;
  undefined ****appppuStack_3f0 [9];
  undefined ***apppuStack_3a8 [3];
  long *plStack_390;
  long *plStack_388;
  undefined ****ppppuStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined *****pppppuStack_348;
  undefined *****pppppuStack_340;
  long lStack_338;
  undefined1 **ppuStack_2b0;
  code *pcStack_2a8;
  undefined *****pppppuStack_2a0;
  undefined1 *puStack_298;
  undefined ****ppppuStack_290;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_1d0;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined *****pppppuStack_150;
  undefined *****pppppuStack_148;
  undefined ****ppppuStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppppppuVar3 = param_4;
  pppppuStack_150 = (undefined *****)param_4;
  pppppuStack_148 = (undefined *****)param_2;
  func_0x000100aac27c();
  _objc_retainAutoreleasedReturnValue();
  dVar23 = 0.0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  ppppuStack_140 = (undefined ****)0x0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  _objc_retain(param_4);
  ppppppuVar17 = (undefined ******)&ppppuStack_140;
  puVar8 = auStack_100;
  func_0x00010bf52a60();
  if (param_4 != (undefined ******)0x0) {
    lVar19 = *plStack_130;
    do {
      ppppppuVar17 = (undefined ******)0x0;
      do {
        if (*plStack_130 != lVar19) {
          _objc_enumerationMutation(pppppuStack_150);
        }
        uVar21 = *(undefined8 *)(lStack_138 + (long)ppppppuVar17 * 8);
        unaff_x28 = param_2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x28 == (undefined ******)0x0) {
          ppppppuVar3 = param_5;
          func_0x00010c269d40(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b31c0();
          _objc_release(ppppppuVar3);
          unaff_x27 = (undefined ******)PTR_PTR_1126d9ee0;
          ppppppuVar4 = param_3;
          dVar23 = param_1;
          FUN_1084f2df0(param_3,uVar21);
          _objc_retainAutoreleasedReturnValue();
          puVar20 = (undefined *)unaff_x27;
          ppppppuVar3 = ppppppuVar4;
          FUN_108501940();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppppppuVar4);
        }
        else {
          puVar20 = PTR_PTR_1126d9ee0;
          ppppppuVar3 = unaff_x28;
          FUN_108501b78();
          _objc_retainAutoreleasedReturnValue();
          if ((long)param_3 < 2) {
            if (param_3 == (undefined ******)0x0) {
              if (puVar20 != (undefined *)0x0) {
                lVar16 = 0x14;
                goto LAB_1084f4a5c;
              }
            }
            else if ((param_3 == (undefined ******)0x1) && (puVar20 != (undefined *)0x0)) {
              lVar16 = 0x15;
LAB_1084f4a5c:
              puVar20[lVar16] = 1;
            }
          }
          else if (param_3 == (undefined ******)0x2) {
            if (puVar20 != (undefined *)0x0) {
              lVar16 = 0x16;
              goto LAB_1084f4a5c;
            }
          }
          else if ((param_3 == (undefined ******)0x3) && (puVar20 != (undefined *)0x0)) {
            lVar16 = 0x17;
            goto LAB_1084f4a5c;
          }
          unaff_x27 = param_5;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b31c0();
          _objc_release(unaff_x27);
          func_0x00010bf9c880(unaff_x28);
          bVar1 = param_1 < dVar23;
          dVar23 = param_1;
          if (bVar1) {
            func_0x00010bf9c880(unaff_x28);
          }
          if (puVar20 != (undefined *)0x0) {
            *(double *)(puVar20 + 0x28) = dVar23;
          }
        }
        func_0x00010c25ed40(pppppuStack_148);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(unaff_x28);
        _objc_release(puVar20);
        ppppppuVar17 = (undefined ******)((long)ppppppuVar17 + 1);
      } while (param_4 != ppppppuVar17);
      ppppppuVar17 = (undefined ******)&ppppuStack_140;
      puVar8 = auStack_100;
      param_4 = (undefined ******)pppppuStack_150;
      func_0x00010bf52a60();
    } while (param_4 != (undefined ******)0x0);
  }
  puVar20 = (undefined *)0x0;
  _objc_release(pppppuStack_150);
  _objc_release(param_2);
  _objc_release(param_5);
  _objc_release(pppppuStack_150);
  ppppppuVar4 = (undefined ******)pppppuStack_148;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return ppppppuVar4;
  }
  ___stack_chk_fail();
  _objc_release(pppppuStack_150);
  _objc_release(param_2);
  _objc_release(param_5);
  _objc_release(pppppuStack_150);
  _objc_release(pppppuStack_148);
  __Unwind_Resume();
  pcStack_158 = FUN_1084f4c30;
  lStack_1d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(ppppppuVar17);
  puStack_298 = puVar8;
  _objc_retain(puVar8);
  ppppppuVar15 = ppppppuVar17;
  pppppuStack_2a0 = (undefined *****)ppppppuVar4;
  func_0x000100aac27c();
  _objc_retainAutoreleasedReturnValue();
  ppppppuVar5 = (undefined ******)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  dVar24 = 0.0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  lStack_288 = 0;
  ppppuStack_290 = (undefined ****)0x0;
  uStack_278 = 0;
  puStack_280 = (undefined8 *)0x0;
  _objc_retain(ppppppuVar17);
  ppppppuVar7 = (undefined ******)&ppppuStack_290;
  ppppppuVar6 = ppppppuVar17;
  func_0x00010bf52a60();
  if (ppppppuVar6 != (undefined ******)0x0) {
    puVar20 = (undefined *)*puStack_280;
    do {
      unaff_x27 = (undefined ******)0x0;
      do {
        if ((undefined *)*puStack_280 != puVar20) {
          _objc_enumerationMutation(ppppppuVar17);
        }
        unaff_x28 = *(undefined *******)(lStack_288 + (long)unaff_x27 * 8);
        ppppppuVar7 = ppppppuVar4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (ppppppuVar7 == (undefined ******)0x0) {
          puVar8 = puStack_298;
          func_0x00010c269d40(puStack_298);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b31c0();
          _objc_release(puVar8);
          puVar9 = PTR_PTR_1126d9ee0;
          ppppppuVar7 = ppppppuVar3;
          dVar24 = dVar23;
          FUN_1084f2df0(ppppppuVar3,unaff_x28);
          _objc_retainAutoreleasedReturnValue();
          ppppppuVar15 = ppppppuVar7;
          FUN_108501940();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppppppuVar7);
          func_0x00010c25ed40(pppppuStack_2a0);
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010befa120(ppppppuVar5);
          _objc_release(puVar9);
        }
        unaff_x27 = (undefined ******)((long)unaff_x27 + 1);
      } while (ppppppuVar6 != unaff_x27);
      ppppppuVar7 = (undefined ******)&ppppuStack_290;
      ppppppuVar6 = ppppppuVar17;
      func_0x00010bf52a60();
    } while (ppppppuVar6 != (undefined ******)0x0);
  }
  _objc_release(ppppppuVar17);
  ppppppuVar3 = ppppppuVar5;
  func_0x00010bf51e00(ppppppuVar5);
  _objc_release(ppppppuVar5);
  _objc_release(ppppppuVar4);
  _objc_release(puStack_298);
  _objc_release(ppppppuVar17);
  ppppppuVar6 = (undefined ******)pppppuStack_2a0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppppppuVar3);
    return ppppppuVar3;
  }
  ___stack_chk_fail();
  _objc_release(ppppppuVar5);
  _objc_release(ppppppuVar4);
  _objc_release(puStack_298);
  _objc_release(ppppppuVar17);
  _objc_release(pppppuStack_2a0);
  __Unwind_Resume();
  pcStack_2a8 = FUN_1084f4f18;
  lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar17 = ppppppuVar15;
  ppppppuVar3 = ppppppuVar7;
  dVar23 = dVar24;
  ppuStack_2b0 = &puStack_160;
  _objc_retain();
  _objc_retain(ppppppuVar15);
  _objc_retain(ppppppuVar7);
  ppppppuVar4 = ppppppuVar15;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  ppppppuVar18 = ppppppuVar4;
  func_0x00010c08fa60();
  if (ppppppuVar18 == (undefined ******)0x0) {
    ppppppuVar18 = (undefined ******)0x0;
    goto LAB_1084f54f0;
  }
  func_0x00010bf9c840(ppppppuVar15);
  dVar25 = dVar23;
  func_0x00010bf9c840(ppppppuVar15);
  dVar26 = dVar25;
  if (dVar23 <= 0.0) {
    ppppppuVar17 = ppppppuVar7;
    func_0x00010c269d40(ppppppuVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b31c0();
    _objc_release(ppppppuVar17);
    if (0.0 < dVar24) {
      ppppppuVar17 = ppppppuVar7;
      func_0x00010c269d40(ppppppuVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b31c0();
      _objc_release(ppppppuVar17);
      dVar25 = dVar24;
    }
  }
  ppppppuVar17 = ppppppuVar15;
  func_0x00010c121800();
  _objc_retainAutoreleasedReturnValue();
  ppppppuVar3 = &pppppuStack_340;
  puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
  pppppuStack_438 = (undefined *****)ppppppuVar17;
  pppppuStack_340 = (undefined *****)ppppppuVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  ppppppuVar5 = ppppppuVar6;
  func_0x000100aabfbc(ppppppuVar6,puVar20);
  _objc_retainAutoreleasedReturnValue();
  ppppppuVar17 = ppppppuVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  pppppuStack_440 = (undefined *****)ppppppuVar17;
  _objc_release(ppppppuVar5);
  _objc_release(puVar20);
  func_0x00010c25b720(ppppppuVar15);
  if ((undefined ******)pppppuStack_440 == (undefined ******)0x0) {
    ppppppuVar17 = ppppppuVar7;
    func_0x00010c269d40(ppppppuVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b31c0();
    _objc_release(ppppppuVar17);
    ppppppuVar17 = (undefined ******)PTR_PTR_1126d9eb8;
    _objc_alloc(PTR_PTR_1126d9eb8);
    func_0x00010bfbbf40(ppppppuVar15);
    func_0x00010c151b40(pppppuStack_438);
    func_0x00010c14b7c0(pppppuStack_438);
    func_0x00010c151460(pppppuStack_438);
    func_0x00010c29ecc0(ppppppuVar15);
    func_0x00010c0486c0(dVar25 / 1000.0,dVar26,ppppppuVar17);
    puVar20 = PTR_PTR_1126d9ee0;
    FUN_108501940(PTR_PTR_1126d9ee0,ppppppuVar17);
    _objc_retainAutoreleasedReturnValue();
LAB_1084f5258:
    _objc_release(ppppppuVar17);
    func_0x00010c25ed40(ppppppuVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    unaff_x27 = (undefined ******)PTR__OBJC_CLASS___NSArray_1126ae530;
    pppppuStack_348 = (undefined *****)ppppppuVar4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppppppuVar6);
    _objc_retain(unaff_x27);
    _objc_opt_class(PTR_PTR_1126d5338);
    if (ppppppuVar6 == (undefined ******)0x0) {
      uStack_350 = 0;
      uStack_368 = 0;
      uStack_370 = 0;
      uStack_358 = 0;
      uStack_360 = 0;
      uStack_378 = 0;
      ppppuStack_380 = (undefined ****)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppppuStack_380,ppppppuVar6);
    }
    puVar8 = &uStack_3f1;
    FUN_1084ff7d8(puVar8);
    func_0x000100aac340(apppuStack_410,unaff_x27);
    func_0x000107c281a0(appppuStack_3f0,0xc,puVar8,apppuStack_410);
    ppppuStack_428 = (undefined ****)0x0;
    ppppuStack_420 = (undefined ****)0x0;
    uStack_418 = 0;
    uStack_42c = 0;
    ppppppuVar5 = (undefined ******)&ppppuStack_380;
    ppppppuVar17 = (undefined ******)appppuStack_3f0;
    ppppppuVar3 = (undefined ******)&ppppuStack_428;
    func_0x000107c310cc();
    _objc_retainAutoreleasedReturnValue();
    ppppppuVar18 = ppppppuVar5;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppppppuVar5);
    if ((undefined *****)ppppuStack_428 != (undefined *****)0x0) {
      ppppuStack_420 = ppppuStack_428;
      __ZdlPv();
    }
    plVar2 = plStack_388;
    appppuStack_3f0[0] = (undefined ****)&PTR_SUB_110862700;
    plStack_388 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_390;
    plStack_390 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    ppppuStack_428 = apppuStack_3a8;
    func_0x000107c27dd4(&ppppuStack_428);
    ppppuStack_428 = apppuStack_410;
    func_0x000107c27dd4(&ppppuStack_428);
    func_0x000107c27da8(&uStack_358);
    _objc_release(uStack_368);
    _objc_release(uStack_370);
    _objc_release(unaff_x27);
    _objc_release(ppppppuVar6);
    unaff_x28 = ppppppuVar18;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppppppuVar18);
    _objc_release(unaff_x27);
    if (unaff_x28 == (undefined ******)0x0) {
      ppppppuVar18 = (undefined ******)PTR_PTR_1126d9ee8;
      ppppppuVar17 = ppppppuVar15;
      FUN_108500154();
      _objc_retainAutoreleasedReturnValue();
      if ((0.0 < dVar23) || (dVar25 <= 0.0)) {
        if (ppppppuVar18 != (undefined ******)0x0) {
LAB_1084f54b0:
          ppppppuVar3 = ppppppuVar18;
          func_0x00010c25ed40(ppppppuVar6);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(ppppppuVar18);
        }
      }
      else if (ppppppuVar18 != (undefined ******)0x0) {
        ppppppuVar18[6] = (undefined *****)(double)(long)dVar25;
        goto LAB_1084f54b0;
      }
    }
    else {
      ppppppuVar18 = ppppppuVar15;
      func_0x00010c22a980();
      if (ppppppuVar18 != (undefined ******)0x0) {
        ppppppuVar18 = (undefined ******)PTR_PTR_1126d9ee8;
        ppppppuVar17 = unaff_x28;
        FUN_1085004e4();
        _objc_retainAutoreleasedReturnValue();
        ppppppuVar10 = ppppppuVar15;
        func_0x00010c22a980();
        ppppppuVar5 = ppppppuVar18;
        if (ppppppuVar18 != (undefined ******)0x0) {
          ppppppuVar18[0xc] = (undefined *****)((long)ppppppuVar18[0xc] + (long)ppppppuVar10);
          goto LAB_1084f54b0;
        }
      }
    }
    _objc_release(unaff_x28);
    ppppppuVar18 = (undefined ******)0x1;
  }
  else {
    puVar20 = PTR_PTR_1126d9ee0;
    ppppppuVar17 = (undefined ******)pppppuStack_440;
    FUN_108501b78();
    _objc_retainAutoreleasedReturnValue();
    ppppppuVar18 = (undefined ******)pppppuStack_438;
    func_0x00010c151b40();
    if (((int)ppppppuVar18 != 0) &&
       (ppppppuVar18 = (undefined ******)pppppuStack_440, func_0x00010c151b40(),
       ((ulong)ppppppuVar18 & 1) == 0)) {
      ppppppuVar17 = (undefined ******)pppppuStack_438;
      func_0x00010c151b40();
      if (puVar20 != (undefined *)0x0) {
        puVar20[0x15] = (char)ppppppuVar17;
      }
LAB_1084f5234:
      ppppppuVar17 = ppppppuVar7;
      func_0x00010c269d40(ppppppuVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b31c0();
      goto LAB_1084f5258;
    }
    ppppppuVar18 = (undefined ******)pppppuStack_438;
    func_0x00010c151460();
    ppppppuVar10 = (undefined ******)pppppuStack_440;
    func_0x00010c151460();
    if ((int)ppppppuVar18 != (int)ppppppuVar10) {
      ppppppuVar17 = (undefined ******)pppppuStack_438;
      func_0x00010c151460();
      if (puVar20 != (undefined *)0x0) {
        puVar20[0x17] = (char)ppppppuVar17;
      }
      goto LAB_1084f5234;
    }
    ppppppuVar18 = (undefined ******)pppppuStack_438;
    func_0x00010c14b7c0();
    ppppppuVar10 = (undefined ******)pppppuStack_440;
    func_0x00010c14b7c0();
    if ((int)ppppppuVar18 != (int)ppppppuVar10) {
      ppppppuVar17 = (undefined ******)pppppuStack_438;
      func_0x00010c14b7c0();
      if (puVar20 != (undefined *)0x0) {
        puVar20[0x16] = (char)ppppppuVar17;
      }
      goto LAB_1084f5234;
    }
    ppppppuVar18 = (undefined ******)pppppuStack_440;
    func_0x00010c29ea60();
    if ((((ulong)ppppppuVar18 & 1) == 0) &&
       (ppppppuVar18 = ppppppuVar15, func_0x00010bfbbf40(), (int)ppppppuVar18 != 0)) {
      if (puVar20 != (undefined *)0x0) {
        puVar20[0x14] = 1;
      }
      goto LAB_1084f5234;
    }
    ppppppuVar18 = (undefined ******)pppppuStack_440;
    func_0x00010c29ea60();
    if (((int)ppppppuVar18 != 0) &&
       (ppppppuVar18 = (undefined ******)pppppuStack_440, func_0x00010c140640(),
       ((ulong)ppppppuVar18 & 1) == 0)) {
      if (puVar20 != (undefined *)0x0) {
        puVar20[0x18] = 1;
      }
      goto LAB_1084f5234;
    }
    func_0x00010c29ecc0(ppppppuVar15);
    dVar24 = dVar26;
    func_0x00010c29ecc0(pppppuStack_440);
    if (dVar24 < dVar26) {
      func_0x00010c29ecc0(ppppppuVar15);
      if (puVar20 != (undefined *)0x0) {
        *(double *)(puVar20 + 0x30) = dVar24;
      }
      goto LAB_1084f5234;
    }
    ppppppuVar18 = ppppppuVar15;
    func_0x00010c22a980();
    if (ppppppuVar18 != (undefined ******)0x0) goto LAB_1084f5234;
    ppppppuVar18 = (undefined ******)0x0;
  }
  _objc_release(puVar20);
  _objc_release(pppppuStack_440);
  _objc_release(pppppuStack_438);
LAB_1084f54f0:
  _objc_release(ppppppuVar4);
  _objc_release(ppppppuVar7);
  _objc_release(ppppppuVar15);
  ppppppuVar10 = ppppppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_338) {
    return ppppppuVar18;
  }
  ___stack_chk_fail();
  _objc_release(ppppppuVar18);
  _objc_release(ppppppuVar4);
  _objc_release(ppppppuVar7);
  _objc_release(ppppppuVar15);
  _objc_release(ppppppuVar6);
  ppppppuVar11 = ppppppuVar10;
  __Unwind_Resume();
  pcStack_448 = FUN_1084f57a0;
  lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuStack_4a0 = (undefined *****)unaff_x28;
  pppppuStack_498 = (undefined *****)unaff_x27;
  pppppuStack_490 = (undefined *****)ppppppuVar6;
  puStack_488 = puVar20;
  pppppuStack_480 = (undefined *****)ppppppuVar10;
  pppppuStack_478 = (undefined *****)ppppppuVar5;
  pppppuStack_470 = (undefined *****)ppppppuVar4;
  pppppuStack_468 = (undefined *****)ppppppuVar7;
  pppppuStack_460 = (undefined *****)ppppppuVar15;
  pppppuStack_458 = (undefined *****)ppppppuVar18;
  pppuStack_450 = &ppuStack_2b0;
  _objc_retain();
  _objc_retain(ppppppuVar17);
  _objc_opt_class(PTR_PTR_1126d6060);
  if (ppppppuVar11 == (undefined ******)0x0) {
    uStack_530 = 0;
    uStack_548 = 0;
    uStack_550 = 0;
    uStack_538 = 0;
    uStack_540 = 0;
    uStack_558 = 0;
    uStack_560 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_560,ppppppuVar11);
  }
  puVar8 = &uStack_641;
  FUN_1084fde00(puVar8);
  func_0x000100aac340(apuStack_660,ppppppuVar17);
  func_0x000107c281a0(appuStack_640,0xc,puVar8,apuStack_660);
  puVar8 = &uStack_6d1;
  FUN_1084fe0c4();
  uStack_740 = 0xf;
  uStack_730 = 0x100;
  ppuStack_748 = &PTR_SUB_110a504b0;
  uStack_708 = 0;
  uStack_710 = 0;
  lStack_6f8 = 0;
  lStack_700 = 0;
  plStack_6e8 = (long *)0x0;
  uStack_6f0 = 0;
  plStack_6e0 = (long *)0x0;
  bStack_6b6 = puVar8[0x1a];
  bStack_6b5 = puVar8[0x1b];
  uStack_6c8 = 0xb;
  uStack_6b8 = 0x100;
  ppuStack_6d0 = &PTR_FUN_110a50380;
  pppuStack_690 = &ppuStack_748;
  plStack_668 = (long *)0x0;
  lStack_680 = 0;
  lStack_688 = 0;
  plStack_670 = (long *)0x0;
  uStack_678 = 0;
  bStack_5b6 = bStack_626 | bStack_6b6;
  bStack_5b5 = bStack_625 & bStack_6b5;
  uStack_5c8 = 4;
  uStack_5b8 = 0x100;
  ppuStack_5d0 = &PTR_DAT_1108629c8;
  pppuStack_590 = &ppuStack_6d0;
  uStack_580 = 0;
  lStack_588 = 0;
  plStack_570 = (long *)0x0;
  uStack_578 = 0;
  plStack_568 = (long *)0x0;
  lStack_760 = 0;
  lStack_758 = 0;
  uStack_750 = 0;
  uStack_764 = 0;
  puVar12 = &uStack_560;
  pppppuStack_718 = (undefined *****)ppppppuVar3;
  puStack_698 = puVar8;
  pppuStack_598 = appuStack_640;
  func_0x000107c310cc(puVar12,&ppuStack_5d0,&lStack_760,&uStack_764);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_760 != 0) {
    lStack_758 = lStack_760;
    __ZdlPv();
  }
  plVar2 = plStack_568;
  ppuStack_5d0 = &PTR_DAT_1108629c8;
  plStack_568 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_570;
  plStack_570 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_588 != 0) {
    __ZdlPv();
  }
  plVar2 = plStack_668;
  ppuStack_6d0 = &PTR_FUN_110a50380;
  plStack_668 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_670;
  plStack_670 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_688 != 0) {
    lStack_680 = lStack_688;
    __ZdlPv();
  }
  plVar2 = plStack_6e0;
  ppuStack_748 = &PTR_SUB_110a504b0;
  plStack_6e0 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_6e8;
  plStack_6e8 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_700 != 0) {
    lStack_6f8 = lStack_700;
    __ZdlPv();
  }
  plVar2 = plStack_5d8;
  appuStack_640[0] = &PTR_SUB_110862700;
  plStack_5d8 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_5e0;
  plStack_5e0 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  ppuStack_6d0 = apuStack_5f8;
  func_0x000107c27dd4(&ppuStack_6d0);
  ppuStack_6d0 = apuStack_660;
  func_0x000107c27dd4(&ppuStack_6d0);
  func_0x000107c27da8(&uStack_538);
  _objc_release(uStack_548);
  _objc_release(uStack_550);
  _objc_retain(puVar12);
  puVar13 = puVar12;
  func_0x00010bf52a60();
  lVar19 = lRam0000000000000000;
  while (puVar13 != (undefined8 *)0x0) {
    puVar22 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar19) {
        _objc_enumerationMutation(puVar12);
      }
      puVar20 = PTR_PTR_1126d9ef0;
      FUN_1084fe930(PTR_PTR_1126d9ef0,*(undefined8 *)((long)puVar22 * 8));
      _objc_retainAutoreleasedReturnValue();
      if (puVar20 != (undefined *)0x0) {
        *(undefined *******)(puVar20 + 0x50) = ppppppuVar3;
      }
      func_0x00010c25ed40(ppppppuVar11);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar20);
      puVar22 = (undefined8 *)((long)puVar22 + 1);
    } while (puVar13 != puVar22);
    puVar13 = puVar12;
    func_0x00010bf52a60();
  }
  _objc_release(puVar12);
  _objc_release(puVar12);
  _objc_release(ppppppuVar17);
  ppppppuVar3 = ppppppuVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4a8) {
    return ppppppuVar3;
  }
  ___stack_chk_fail();
  _objc_release(puVar12);
  _objc_release(puVar12);
  _objc_release(ppppppuVar17);
  _objc_release(ppppppuVar11);
  __Unwind_Resume();
  *ppppppuVar3 = (undefined *****)&PTR_FUN_110a50380;
  pppppuVar14 = ppppppuVar3[0xd];
  ppppppuVar3[0xd] = (undefined *****)0x0;
  if (pppppuVar14 != (undefined *****)0x0) {
    (*(code *)(*pppppuVar14)[1])();
  }
  pppppuVar14 = ppppppuVar3[0xc];
  ppppppuVar3[0xc] = (undefined *****)0x0;
  if (pppppuVar14 != (undefined *****)0x0) {
    (*(code *)(*pppppuVar14)[1])();
  }
  if (ppppppuVar3[9] != (undefined *****)0x0) {
    ppppppuVar3[10] = ppppppuVar3[9];
    __ZdlPv();
  }
  return ppppppuVar3;
}



/* Entry: 1084f4c30; end: 1084f4f17;  */

undefined ******
FUN_1084f4c30(double param_1,undefined ******param_2,undefined ******param_3,undefined ******param_4
             ,undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  undefined ******ppppppuVar3;
  undefined ******ppppppuVar4;
  undefined ******ppppppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined ******ppppppuVar8;
  undefined ******ppppppuVar9;
  undefined ******ppppppuVar10;
  undefined1 *puVar11;
  undefined ******ppppppuVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined *****pppppuVar15;
  undefined ******ppppppuVar16;
  undefined ******ppppppuVar17;
  undefined ******ppppppuVar18;
  undefined *unaff_x25;
  undefined ******unaff_x27;
  undefined8 *puVar19;
  undefined ******unaff_x28;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined4 uStack_614;
  long lStack_610;
  long lStack_608;
  undefined8 uStack_600;
  undefined **ppuStack_5f8;
  undefined4 uStack_5f0;
  undefined4 uStack_5e0;
  undefined *****pppppuStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  long lStack_5b0;
  long lStack_5a8;
  undefined8 uStack_5a0;
  long *plStack_598;
  long *plStack_590;
  undefined1 uStack_581;
  undefined **ppuStack_580;
  undefined4 uStack_578;
  undefined2 uStack_568;
  byte bStack_566;
  byte bStack_565;
  undefined1 *puStack_548;
  undefined ***pppuStack_540;
  long lStack_538;
  long lStack_530;
  undefined8 uStack_528;
  long *plStack_520;
  long *plStack_518;
  undefined *apuStack_510 [3];
  undefined1 uStack_4f1;
  undefined **appuStack_4f0 [3];
  byte bStack_4d6;
  byte bStack_4d5;
  undefined *apuStack_4a8 [3];
  long *plStack_490;
  long *plStack_488;
  undefined **ppuStack_480;
  undefined4 uStack_478;
  undefined2 uStack_468;
  byte bStack_466;
  byte bStack_465;
  undefined ***pppuStack_448;
  undefined ***pppuStack_440;
  long lStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  long *plStack_420;
  long *plStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  long lStack_358;
  undefined *****pppppuStack_350;
  undefined *****pppppuStack_348;
  undefined *****pppppuStack_340;
  undefined *puStack_338;
  undefined *****pppppuStack_330;
  undefined *****pppppuStack_328;
  undefined *****pppppuStack_320;
  undefined *****pppppuStack_318;
  undefined *****pppppuStack_310;
  undefined *****pppppuStack_308;
  undefined1 **ppuStack_300;
  code *pcStack_2f8;
  undefined *****pppppuStack_2f0;
  undefined *****pppppuStack_2e8;
  undefined4 uStack_2dc;
  undefined ****ppppuStack_2d8;
  undefined ****ppppuStack_2d0;
  undefined8 uStack_2c8;
  undefined ***apppuStack_2c0 [3];
  undefined1 uStack_2a1;
  undefined ****appppuStack_2a0 [9];
  undefined ***apppuStack_258 [3];
  long *plStack_240;
  long *plStack_238;
  undefined ****ppppuStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *****pppppuStack_1f8;
  undefined *****pppppuStack_1f0;
  long lStack_1e8;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined *****pppppuStack_150;
  undefined8 uStack_148;
  undefined ****ppppuStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_4);
  uStack_148 = param_5;
  _objc_retain(param_5);
  ppppppuVar16 = param_4;
  pppppuStack_150 = (undefined *****)param_2;
  func_0x000100aac27c();
  _objc_retainAutoreleasedReturnValue();
  ppppppuVar3 = (undefined ******)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  dVar20 = 0.0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  ppppuStack_140 = (undefined ****)0x0;
  uStack_128 = 0;
  puStack_130 = (undefined8 *)0x0;
  _objc_retain(param_4);
  ppppppuVar5 = (undefined ******)&ppppuStack_140;
  ppppppuVar4 = param_4;
  func_0x00010bf52a60();
  if (ppppppuVar4 != (undefined ******)0x0) {
    unaff_x25 = (undefined *)*puStack_130;
    do {
      unaff_x27 = (undefined ******)0x0;
      do {
        if ((undefined *)*puStack_130 != unaff_x25) {
          _objc_enumerationMutation(param_4);
        }
        unaff_x28 = *(undefined *******)(lStack_138 + (long)unaff_x27 * 8);
        ppppppuVar5 = param_2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (ppppppuVar5 == (undefined ******)0x0) {
          uVar6 = uStack_148;
          func_0x00010c269d40(uStack_148);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b31c0();
          _objc_release(uVar6);
          puVar7 = PTR_PTR_1126d9ee0;
          ppppppuVar5 = param_3;
          dVar20 = param_1;
          FUN_1084f2df0(param_3,unaff_x28);
          _objc_retainAutoreleasedReturnValue();
          ppppppuVar16 = ppppppuVar5;
          FUN_108501940();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppppppuVar5);
          func_0x00010c25ed40(pppppuStack_150);
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010befa120(ppppppuVar3);
          _objc_release(puVar7);
        }
        unaff_x27 = (undefined ******)((long)unaff_x27 + 1);
      } while (ppppppuVar4 != unaff_x27);
      ppppppuVar5 = (undefined ******)&ppppuStack_140;
      ppppppuVar4 = param_4;
      func_0x00010bf52a60();
    } while (ppppppuVar4 != (undefined ******)0x0);
  }
  _objc_release(param_4);
  ppppppuVar4 = ppppppuVar3;
  func_0x00010bf51e00(ppppppuVar3);
  _objc_release(ppppppuVar3);
  _objc_release(param_2);
  _objc_release(uStack_148);
  _objc_release(param_4);
  ppppppuVar8 = (undefined ******)pppppuStack_150;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppppppuVar4);
    return ppppppuVar4;
  }
  ___stack_chk_fail();
  _objc_release(ppppppuVar3);
  _objc_release(param_2);
  _objc_release(uStack_148);
  _objc_release(param_4);
  _objc_release(pppppuStack_150);
  __Unwind_Resume();
  pcStack_158 = FUN_1084f4f18;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar4 = ppppppuVar16;
  ppppppuVar17 = ppppppuVar5;
  dVar21 = dVar20;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(ppppppuVar16);
  _objc_retain(ppppppuVar5);
  ppppppuVar9 = ppppppuVar16;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  ppppppuVar18 = ppppppuVar9;
  func_0x00010c08fa60();
  if (ppppppuVar18 == (undefined ******)0x0) {
    ppppppuVar18 = (undefined ******)0x0;
    goto LAB_1084f54f0;
  }
  func_0x00010bf9c840(ppppppuVar16);
  dVar22 = dVar21;
  func_0x00010bf9c840(ppppppuVar16);
  dVar23 = dVar22;
  if (dVar21 <= 0.0) {
    ppppppuVar3 = ppppppuVar5;
    func_0x00010c269d40(ppppppuVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b31c0();
    _objc_release(ppppppuVar3);
    if (0.0 < dVar20) {
      ppppppuVar3 = ppppppuVar5;
      func_0x00010c269d40(ppppppuVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b31c0();
      _objc_release(ppppppuVar3);
      dVar22 = dVar20;
    }
  }
  ppppppuVar3 = ppppppuVar16;
  func_0x00010c121800();
  _objc_retainAutoreleasedReturnValue();
  ppppppuVar17 = &pppppuStack_1f0;
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  pppppuStack_2e8 = (undefined *****)ppppppuVar3;
  pppppuStack_1f0 = (undefined *****)ppppppuVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  ppppppuVar3 = ppppppuVar8;
  func_0x000100aabfbc(ppppppuVar8,puVar7);
  _objc_retainAutoreleasedReturnValue();
  ppppppuVar4 = ppppppuVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  pppppuStack_2f0 = (undefined *****)ppppppuVar4;
  _objc_release(ppppppuVar3);
  _objc_release(puVar7);
  func_0x00010c25b720(ppppppuVar16);
  if ((undefined ******)pppppuStack_2f0 == (undefined ******)0x0) {
    ppppppuVar3 = ppppppuVar5;
    func_0x00010c269d40(ppppppuVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b31c0();
    _objc_release(ppppppuVar3);
    ppppppuVar3 = (undefined ******)PTR_PTR_1126d9eb8;
    _objc_alloc(PTR_PTR_1126d9eb8);
    func_0x00010bfbbf40(ppppppuVar16);
    func_0x00010c151b40(pppppuStack_2e8);
    func_0x00010c14b7c0(pppppuStack_2e8);
    func_0x00010c151460(pppppuStack_2e8);
    func_0x00010c29ecc0(ppppppuVar16);
    func_0x00010c0486c0(dVar22 / 1000.0,dVar23,ppppppuVar3);
    unaff_x25 = PTR_PTR_1126d9ee0;
    FUN_108501940(PTR_PTR_1126d9ee0,ppppppuVar3);
    _objc_retainAutoreleasedReturnValue();
LAB_1084f5258:
    _objc_release(ppppppuVar3);
    func_0x00010c25ed40(ppppppuVar8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    unaff_x27 = (undefined ******)PTR__OBJC_CLASS___NSArray_1126ae530;
    pppppuStack_1f8 = (undefined *****)ppppppuVar9;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppppppuVar8);
    _objc_retain(unaff_x27);
    _objc_opt_class(PTR_PTR_1126d5338);
    if (ppppppuVar8 == (undefined ******)0x0) {
      uStack_200 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      uStack_208 = 0;
      uStack_210 = 0;
      uStack_228 = 0;
      ppppuStack_230 = (undefined ****)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppppuStack_230,ppppppuVar8);
    }
    puVar11 = &uStack_2a1;
    FUN_1084ff7d8(puVar11);
    func_0x000100aac340(apppuStack_2c0,unaff_x27);
    func_0x000107c281a0(appppuStack_2a0,0xc,puVar11,apppuStack_2c0);
    ppppuStack_2d8 = (undefined ****)0x0;
    ppppuStack_2d0 = (undefined ****)0x0;
    uStack_2c8 = 0;
    uStack_2dc = 0;
    ppppppuVar3 = (undefined ******)&ppppuStack_230;
    ppppppuVar4 = (undefined ******)appppuStack_2a0;
    ppppppuVar17 = (undefined ******)&ppppuStack_2d8;
    func_0x000107c310cc();
    _objc_retainAutoreleasedReturnValue();
    ppppppuVar18 = ppppppuVar3;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppppppuVar3);
    if ((undefined *****)ppppuStack_2d8 != (undefined *****)0x0) {
      ppppuStack_2d0 = ppppuStack_2d8;
      __ZdlPv();
    }
    plVar2 = plStack_238;
    appppuStack_2a0[0] = (undefined ****)&PTR_SUB_110862700;
    plStack_238 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_240;
    plStack_240 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    ppppuStack_2d8 = apppuStack_258;
    func_0x000107c27dd4(&ppppuStack_2d8);
    ppppuStack_2d8 = apppuStack_2c0;
    func_0x000107c27dd4(&ppppuStack_2d8);
    func_0x000107c27da8(&uStack_208);
    _objc_release(uStack_218);
    _objc_release(uStack_220);
    _objc_release(unaff_x27);
    _objc_release(ppppppuVar8);
    unaff_x28 = ppppppuVar18;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppppppuVar18);
    _objc_release(unaff_x27);
    if (unaff_x28 == (undefined ******)0x0) {
      ppppppuVar18 = (undefined ******)PTR_PTR_1126d9ee8;
      ppppppuVar4 = ppppppuVar16;
      FUN_108500154();
      _objc_retainAutoreleasedReturnValue();
      if ((0.0 < dVar21) || (dVar22 <= 0.0)) {
        if (ppppppuVar18 != (undefined ******)0x0) {
LAB_1084f54b0:
          ppppppuVar17 = ppppppuVar18;
          func_0x00010c25ed40(ppppppuVar8);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(ppppppuVar18);
        }
      }
      else if (ppppppuVar18 != (undefined ******)0x0) {
        ppppppuVar18[6] = (undefined *****)(double)(long)dVar22;
        goto LAB_1084f54b0;
      }
    }
    else {
      ppppppuVar18 = ppppppuVar16;
      func_0x00010c22a980();
      if (ppppppuVar18 != (undefined ******)0x0) {
        ppppppuVar18 = (undefined ******)PTR_PTR_1126d9ee8;
        ppppppuVar4 = unaff_x28;
        FUN_1085004e4();
        _objc_retainAutoreleasedReturnValue();
        ppppppuVar10 = ppppppuVar16;
        func_0x00010c22a980();
        ppppppuVar3 = ppppppuVar18;
        if (ppppppuVar18 != (undefined ******)0x0) {
          ppppppuVar18[0xc] = (undefined *****)((long)ppppppuVar18[0xc] + (long)ppppppuVar10);
          goto LAB_1084f54b0;
        }
      }
    }
    _objc_release(unaff_x28);
    ppppppuVar18 = (undefined ******)0x1;
  }
  else {
    unaff_x25 = PTR_PTR_1126d9ee0;
    ppppppuVar4 = (undefined ******)pppppuStack_2f0;
    FUN_108501b78();
    _objc_retainAutoreleasedReturnValue();
    ppppppuVar18 = (undefined ******)pppppuStack_2e8;
    func_0x00010c151b40();
    if (((int)ppppppuVar18 != 0) &&
       (ppppppuVar18 = (undefined ******)pppppuStack_2f0, func_0x00010c151b40(),
       ((ulong)ppppppuVar18 & 1) == 0)) {
      ppppppuVar3 = (undefined ******)pppppuStack_2e8;
      func_0x00010c151b40();
      if (unaff_x25 != (undefined *)0x0) {
        unaff_x25[0x15] = (char)ppppppuVar3;
      }
LAB_1084f5234:
      ppppppuVar3 = ppppppuVar5;
      func_0x00010c269d40(ppppppuVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b31c0();
      goto LAB_1084f5258;
    }
    ppppppuVar18 = (undefined ******)pppppuStack_2e8;
    func_0x00010c151460();
    ppppppuVar10 = (undefined ******)pppppuStack_2f0;
    func_0x00010c151460();
    if ((int)ppppppuVar18 != (int)ppppppuVar10) {
      ppppppuVar3 = (undefined ******)pppppuStack_2e8;
      func_0x00010c151460();
      if (unaff_x25 != (undefined *)0x0) {
        unaff_x25[0x17] = (char)ppppppuVar3;
      }
      goto LAB_1084f5234;
    }
    ppppppuVar18 = (undefined ******)pppppuStack_2e8;
    func_0x00010c14b7c0();
    ppppppuVar10 = (undefined ******)pppppuStack_2f0;
    func_0x00010c14b7c0();
    if ((int)ppppppuVar18 != (int)ppppppuVar10) {
      ppppppuVar3 = (undefined ******)pppppuStack_2e8;
      func_0x00010c14b7c0();
      if (unaff_x25 != (undefined *)0x0) {
        unaff_x25[0x16] = (char)ppppppuVar3;
      }
      goto LAB_1084f5234;
    }
    ppppppuVar18 = (undefined ******)pppppuStack_2f0;
    func_0x00010c29ea60();
    if ((((ulong)ppppppuVar18 & 1) == 0) &&
       (ppppppuVar18 = ppppppuVar16, func_0x00010bfbbf40(), (int)ppppppuVar18 != 0)) {
      if (unaff_x25 != (undefined *)0x0) {
        unaff_x25[0x14] = 1;
      }
      goto LAB_1084f5234;
    }
    ppppppuVar18 = (undefined ******)pppppuStack_2f0;
    func_0x00010c29ea60();
    if (((int)ppppppuVar18 != 0) &&
       (ppppppuVar18 = (undefined ******)pppppuStack_2f0, func_0x00010c140640(),
       ((ulong)ppppppuVar18 & 1) == 0)) {
      if (unaff_x25 != (undefined *)0x0) {
        unaff_x25[0x18] = 1;
      }
      goto LAB_1084f5234;
    }
    func_0x00010c29ecc0(ppppppuVar16);
    dVar20 = dVar23;
    func_0x00010c29ecc0(pppppuStack_2f0);
    if (dVar20 < dVar23) {
      func_0x00010c29ecc0(ppppppuVar16);
      if (unaff_x25 != (undefined *)0x0) {
        *(double *)(unaff_x25 + 0x30) = dVar20;
      }
      goto LAB_1084f5234;
    }
    ppppppuVar18 = ppppppuVar16;
    func_0x00010c22a980();
    if (ppppppuVar18 != (undefined ******)0x0) goto LAB_1084f5234;
    ppppppuVar18 = (undefined ******)0x0;
  }
  _objc_release(unaff_x25);
  _objc_release(pppppuStack_2f0);
  _objc_release(pppppuStack_2e8);
LAB_1084f54f0:
  _objc_release(ppppppuVar9);
  _objc_release(ppppppuVar5);
  _objc_release(ppppppuVar16);
  ppppppuVar10 = ppppppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return ppppppuVar18;
  }
  ___stack_chk_fail();
  _objc_release(ppppppuVar18);
  _objc_release(ppppppuVar9);
  _objc_release(ppppppuVar5);
  _objc_release(ppppppuVar16);
  _objc_release(ppppppuVar8);
  ppppppuVar12 = ppppppuVar10;
  __Unwind_Resume();
  pcStack_2f8 = FUN_1084f57a0;
  lStack_358 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuStack_350 = (undefined *****)unaff_x28;
  pppppuStack_348 = (undefined *****)unaff_x27;
  pppppuStack_340 = (undefined *****)ppppppuVar8;
  puStack_338 = unaff_x25;
  pppppuStack_330 = (undefined *****)ppppppuVar10;
  pppppuStack_328 = (undefined *****)ppppppuVar3;
  pppppuStack_320 = (undefined *****)ppppppuVar9;
  pppppuStack_318 = (undefined *****)ppppppuVar5;
  pppppuStack_310 = (undefined *****)ppppppuVar16;
  pppppuStack_308 = (undefined *****)ppppppuVar18;
  ppuStack_300 = &puStack_160;
  _objc_retain();
  _objc_retain(ppppppuVar4);
  _objc_opt_class(PTR_PTR_1126d6060);
  if (ppppppuVar12 == (undefined ******)0x0) {
    uStack_3e0 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    uStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_408 = 0;
    uStack_410 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_410,ppppppuVar12);
  }
  puVar11 = &uStack_4f1;
  FUN_1084fde00(puVar11);
  func_0x000100aac340(apuStack_510,ppppppuVar4);
  func_0x000107c281a0(appuStack_4f0,0xc,puVar11,apuStack_510);
  puVar11 = &uStack_581;
  FUN_1084fe0c4();
  uStack_5f0 = 0xf;
  uStack_5e0 = 0x100;
  ppuStack_5f8 = &PTR_SUB_110a504b0;
  uStack_5b8 = 0;
  uStack_5c0 = 0;
  lStack_5a8 = 0;
  lStack_5b0 = 0;
  plStack_598 = (long *)0x0;
  uStack_5a0 = 0;
  plStack_590 = (long *)0x0;
  bStack_566 = puVar11[0x1a];
  bStack_565 = puVar11[0x1b];
  uStack_578 = 0xb;
  uStack_568 = 0x100;
  ppuStack_580 = &PTR_FUN_110a50380;
  pppuStack_540 = &ppuStack_5f8;
  plStack_518 = (long *)0x0;
  lStack_530 = 0;
  lStack_538 = 0;
  plStack_520 = (long *)0x0;
  uStack_528 = 0;
  bStack_466 = bStack_4d6 | bStack_566;
  bStack_465 = bStack_4d5 & bStack_565;
  uStack_478 = 4;
  uStack_468 = 0x100;
  ppuStack_480 = &PTR_DAT_1108629c8;
  pppuStack_440 = &ppuStack_580;
  uStack_430 = 0;
  lStack_438 = 0;
  plStack_420 = (long *)0x0;
  uStack_428 = 0;
  plStack_418 = (long *)0x0;
  lStack_610 = 0;
  lStack_608 = 0;
  uStack_600 = 0;
  uStack_614 = 0;
  puVar13 = &uStack_410;
  pppppuStack_5c8 = (undefined *****)ppppppuVar17;
  puStack_548 = puVar11;
  pppuStack_448 = appuStack_4f0;
  func_0x000107c310cc(puVar13,&ppuStack_480,&lStack_610,&uStack_614);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_610 != 0) {
    lStack_608 = lStack_610;
    __ZdlPv();
  }
  plVar2 = plStack_418;
  ppuStack_480 = &PTR_DAT_1108629c8;
  plStack_418 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_420;
  plStack_420 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_438 != 0) {
    __ZdlPv();
  }
  plVar2 = plStack_518;
  ppuStack_580 = &PTR_FUN_110a50380;
  plStack_518 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_520;
  plStack_520 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_538 != 0) {
    lStack_530 = lStack_538;
    __ZdlPv();
  }
  plVar2 = plStack_590;
  ppuStack_5f8 = &PTR_SUB_110a504b0;
  plStack_590 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_598;
  plStack_598 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_5b0 != 0) {
    lStack_5a8 = lStack_5b0;
    __ZdlPv();
  }
  plVar2 = plStack_488;
  appuStack_4f0[0] = &PTR_SUB_110862700;
  plStack_488 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_490;
  plStack_490 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  ppuStack_580 = apuStack_4a8;
  func_0x000107c27dd4(&ppuStack_580);
  ppuStack_580 = apuStack_510;
  func_0x000107c27dd4(&ppuStack_580);
  func_0x000107c27da8(&uStack_3e8);
  _objc_release(uStack_3f8);
  _objc_release(uStack_400);
  _objc_retain(puVar13);
  puVar14 = puVar13;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar14 != (undefined8 *)0x0) {
    puVar19 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar13);
      }
      puVar7 = PTR_PTR_1126d9ef0;
      FUN_1084fe930(PTR_PTR_1126d9ef0,*(undefined8 *)((long)puVar19 * 8));
      _objc_retainAutoreleasedReturnValue();
      if (puVar7 != (undefined *)0x0) {
        *(undefined *******)(puVar7 + 0x50) = ppppppuVar17;
      }
      func_0x00010c25ed40(ppppppuVar12);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar19 = (undefined8 *)((long)puVar19 + 1);
    } while (puVar14 != puVar19);
    puVar14 = puVar13;
    func_0x00010bf52a60();
  }
  _objc_release(puVar13);
  _objc_release(puVar13);
  _objc_release(ppppppuVar4);
  ppppppuVar5 = ppppppuVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_358) {
    return ppppppuVar5;
  }
  ___stack_chk_fail();
  _objc_release(puVar13);
  _objc_release(puVar13);
  _objc_release(ppppppuVar4);
  _objc_release(ppppppuVar12);
  __Unwind_Resume();
  *ppppppuVar5 = (undefined *****)&PTR_FUN_110a50380;
  pppppuVar15 = ppppppuVar5[0xd];
  ppppppuVar5[0xd] = (undefined *****)0x0;
  if (pppppuVar15 != (undefined *****)0x0) {
    (*(code *)(*pppppuVar15)[1])();
  }
  pppppuVar15 = ppppppuVar5[0xc];
  ppppppuVar5[0xc] = (undefined *****)0x0;
  if (pppppuVar15 != (undefined *****)0x0) {
    (*(code *)(*pppppuVar15)[1])();
  }
  if (ppppppuVar5[9] != (undefined *****)0x0) {
    ppppppuVar5[10] = ppppppuVar5[9];
    __ZdlPv();
  }
  return ppppppuVar5;
}



/* Entry: 1084f4f18; end: 1084f579f;  */

undefined ******
FUN_1084f4f18(double param_1,undefined ******param_2,undefined ******param_3,undefined ******param_4
             )

{
  long lVar1;
  long *plVar2;
  undefined ******ppppppuVar3;
  undefined ******ppppppuVar4;
  undefined *puVar5;
  undefined ******ppppppuVar6;
  undefined1 *puVar7;
  undefined ******ppppppuVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined ******ppppppuVar11;
  undefined *****pppppuVar12;
  undefined ******ppppppuVar13;
  undefined ******unaff_x23;
  undefined *unaff_x25;
  undefined *unaff_x27;
  undefined8 *puVar14;
  undefined ******unaff_x28;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uStack_4c4;
  long lStack_4c0;
  long lStack_4b8;
  undefined8 uStack_4b0;
  undefined **ppuStack_4a8;
  undefined4 uStack_4a0;
  undefined4 uStack_490;
  undefined *****pppppuStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long lStack_460;
  long lStack_458;
  undefined8 uStack_450;
  long *plStack_448;
  long *plStack_440;
  undefined1 uStack_431;
  undefined **ppuStack_430;
  undefined4 uStack_428;
  undefined2 uStack_418;
  byte bStack_416;
  byte bStack_415;
  undefined1 *puStack_3f8;
  undefined ***pppuStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  undefined8 uStack_3d8;
  long *plStack_3d0;
  long *plStack_3c8;
  undefined *apuStack_3c0 [3];
  undefined1 uStack_3a1;
  undefined **appuStack_3a0 [3];
  byte bStack_386;
  byte bStack_385;
  undefined *apuStack_358 [3];
  long *plStack_340;
  long *plStack_338;
  undefined **ppuStack_330;
  undefined4 uStack_328;
  undefined2 uStack_318;
  byte bStack_316;
  byte bStack_315;
  undefined ***pppuStack_2f8;
  undefined ***pppuStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long lStack_208;
  undefined *****pppppuStack_200;
  undefined *puStack_1f8;
  undefined *****pppppuStack_1f0;
  undefined *puStack_1e8;
  undefined *****pppppuStack_1e0;
  undefined *****pppppuStack_1d8;
  undefined *****pppppuStack_1d0;
  undefined *****pppppuStack_1c8;
  undefined *****pppppuStack_1c0;
  undefined *****pppppuStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined *****pppppuStack_1a0;
  undefined *****pppppuStack_198;
  undefined4 uStack_18c;
  undefined ****ppppuStack_188;
  undefined ****ppppuStack_180;
  undefined8 uStack_178;
  undefined ***apppuStack_170 [3];
  undefined1 uStack_151;
  undefined ****appppuStack_150 [9];
  undefined ***apppuStack_108 [3];
  long *plStack_f0;
  long *plStack_e8;
  undefined ****ppppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *****pppppuStack_a8;
  undefined *****pppppuStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar4 = param_3;
  ppppppuVar11 = param_4;
  dVar15 = param_1;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppppppuVar3 = param_3;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  ppppppuVar13 = ppppppuVar3;
  func_0x00010c08fa60();
  if (ppppppuVar13 == (undefined ******)0x0) {
    ppppppuVar13 = (undefined ******)0x0;
    goto LAB_1084f54f0;
  }
  func_0x00010bf9c840(param_3);
  dVar16 = dVar15;
  func_0x00010bf9c840(param_3);
  dVar17 = dVar16;
  if (dVar15 <= 0.0) {
    ppppppuVar4 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b31c0();
    _objc_release(ppppppuVar4);
    if (0.0 < param_1) {
      ppppppuVar4 = param_4;
      func_0x00010c269d40(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b31c0();
      _objc_release(ppppppuVar4);
      dVar16 = param_1;
    }
  }
  ppppppuVar4 = param_3;
  func_0x00010c121800();
  _objc_retainAutoreleasedReturnValue();
  ppppppuVar11 = &pppppuStack_a0;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  pppppuStack_198 = (undefined *****)ppppppuVar4;
  pppppuStack_a0 = (undefined *****)ppppppuVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  unaff_x23 = param_2;
  func_0x000100aabfbc(param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  ppppppuVar4 = unaff_x23;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  pppppuStack_1a0 = (undefined *****)ppppppuVar4;
  _objc_release(unaff_x23);
  _objc_release(puVar5);
  func_0x00010c25b720(param_3);
  if ((undefined ******)pppppuStack_1a0 == (undefined ******)0x0) {
    ppppppuVar4 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b31c0();
    _objc_release(ppppppuVar4);
    ppppppuVar4 = (undefined ******)PTR_PTR_1126d9eb8;
    _objc_alloc(PTR_PTR_1126d9eb8);
    func_0x00010bfbbf40(param_3);
    func_0x00010c151b40(pppppuStack_198);
    func_0x00010c14b7c0(pppppuStack_198);
    func_0x00010c151460(pppppuStack_198);
    func_0x00010c29ecc0(param_3);
    func_0x00010c0486c0(dVar16 / 1000.0,dVar17,ppppppuVar4);
    unaff_x25 = PTR_PTR_1126d9ee0;
    FUN_108501940(PTR_PTR_1126d9ee0,ppppppuVar4);
    _objc_retainAutoreleasedReturnValue();
LAB_1084f5258:
    _objc_release(ppppppuVar4);
    func_0x00010c25ed40(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    unaff_x27 = PTR__OBJC_CLASS___NSArray_1126ae530;
    pppppuStack_a8 = (undefined *****)ppppppuVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    _objc_retain(unaff_x27);
    _objc_opt_class(PTR_PTR_1126d5338);
    if (param_2 == (undefined ******)0x0) {
      uStack_b0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_d8 = 0;
      ppppuStack_e0 = (undefined ****)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppppuStack_e0,param_2);
    }
    puVar7 = &uStack_151;
    FUN_1084ff7d8(puVar7);
    func_0x000100aac340(apppuStack_170,unaff_x27);
    func_0x000107c281a0(appppuStack_150,0xc,puVar7,apppuStack_170);
    ppppuStack_188 = (undefined ****)0x0;
    ppppuStack_180 = (undefined ****)0x0;
    uStack_178 = 0;
    uStack_18c = 0;
    unaff_x23 = (undefined ******)&ppppuStack_e0;
    ppppppuVar4 = (undefined ******)appppuStack_150;
    ppppppuVar11 = (undefined ******)&ppppuStack_188;
    func_0x000107c310cc();
    _objc_retainAutoreleasedReturnValue();
    ppppppuVar13 = unaff_x23;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x23);
    if ((undefined *****)ppppuStack_188 != (undefined *****)0x0) {
      ppppuStack_180 = ppppuStack_188;
      __ZdlPv();
    }
    plVar2 = plStack_e8;
    appppuStack_150[0] = (undefined ****)&PTR_SUB_110862700;
    plStack_e8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_f0;
    plStack_f0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    ppppuStack_188 = apppuStack_108;
    func_0x000107c27dd4(&ppppuStack_188);
    ppppuStack_188 = apppuStack_170;
    func_0x000107c27dd4(&ppppuStack_188);
    func_0x000107c27da8(&uStack_b8);
    _objc_release(uStack_c8);
    _objc_release(uStack_d0);
    _objc_release(unaff_x27);
    _objc_release(param_2);
    unaff_x28 = ppppppuVar13;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppppppuVar13);
    _objc_release(unaff_x27);
    if (unaff_x28 == (undefined ******)0x0) {
      ppppppuVar13 = (undefined ******)PTR_PTR_1126d9ee8;
      ppppppuVar4 = param_3;
      FUN_108500154();
      _objc_retainAutoreleasedReturnValue();
      if ((0.0 < dVar15) || (dVar16 <= 0.0)) {
        if (ppppppuVar13 != (undefined ******)0x0) {
LAB_1084f54b0:
          ppppppuVar11 = ppppppuVar13;
          func_0x00010c25ed40(param_2);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(ppppppuVar13);
        }
      }
      else if (ppppppuVar13 != (undefined ******)0x0) {
        ppppppuVar13[6] = (undefined *****)(double)(long)dVar16;
        goto LAB_1084f54b0;
      }
    }
    else {
      ppppppuVar13 = param_3;
      func_0x00010c22a980();
      if (ppppppuVar13 != (undefined ******)0x0) {
        ppppppuVar13 = (undefined ******)PTR_PTR_1126d9ee8;
        ppppppuVar4 = unaff_x28;
        FUN_1085004e4();
        _objc_retainAutoreleasedReturnValue();
        ppppppuVar6 = param_3;
        func_0x00010c22a980();
        unaff_x23 = ppppppuVar13;
        if (ppppppuVar13 != (undefined ******)0x0) {
          ppppppuVar13[0xc] = (undefined *****)((long)ppppppuVar13[0xc] + (long)ppppppuVar6);
          goto LAB_1084f54b0;
        }
      }
    }
    _objc_release(unaff_x28);
    ppppppuVar13 = (undefined ******)0x1;
  }
  else {
    unaff_x25 = PTR_PTR_1126d9ee0;
    ppppppuVar4 = (undefined ******)pppppuStack_1a0;
    FUN_108501b78();
    _objc_retainAutoreleasedReturnValue();
    ppppppuVar13 = (undefined ******)pppppuStack_198;
    func_0x00010c151b40();
    if (((int)ppppppuVar13 != 0) &&
       (ppppppuVar13 = (undefined ******)pppppuStack_1a0, func_0x00010c151b40(),
       ((ulong)ppppppuVar13 & 1) == 0)) {
      ppppppuVar4 = (undefined ******)pppppuStack_198;
      func_0x00010c151b40();
      if (unaff_x25 != (undefined *)0x0) {
        unaff_x25[0x15] = (char)ppppppuVar4;
      }
LAB_1084f5234:
      ppppppuVar4 = param_4;
      func_0x00010c269d40(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b31c0();
      goto LAB_1084f5258;
    }
    ppppppuVar13 = (undefined ******)pppppuStack_198;
    func_0x00010c151460();
    ppppppuVar6 = (undefined ******)pppppuStack_1a0;
    func_0x00010c151460();
    if ((int)ppppppuVar13 != (int)ppppppuVar6) {
      ppppppuVar4 = (undefined ******)pppppuStack_198;
      func_0x00010c151460();
      if (unaff_x25 != (undefined *)0x0) {
        unaff_x25[0x17] = (char)ppppppuVar4;
      }
      goto LAB_1084f5234;
    }
    ppppppuVar13 = (undefined ******)pppppuStack_198;
    func_0x00010c14b7c0();
    ppppppuVar6 = (undefined ******)pppppuStack_1a0;
    func_0x00010c14b7c0();
    if ((int)ppppppuVar13 != (int)ppppppuVar6) {
      ppppppuVar4 = (undefined ******)pppppuStack_198;
      func_0x00010c14b7c0();
      if (unaff_x25 != (undefined *)0x0) {
        unaff_x25[0x16] = (char)ppppppuVar4;
      }
      goto LAB_1084f5234;
    }
    ppppppuVar13 = (undefined ******)pppppuStack_1a0;
    func_0x00010c29ea60();
    if ((((ulong)ppppppuVar13 & 1) == 0) &&
       (ppppppuVar13 = param_3, func_0x00010bfbbf40(), (int)ppppppuVar13 != 0)) {
      if (unaff_x25 != (undefined *)0x0) {
        unaff_x25[0x14] = 1;
      }
      goto LAB_1084f5234;
    }
    ppppppuVar13 = (undefined ******)pppppuStack_1a0;
    func_0x00010c29ea60();
    if (((int)ppppppuVar13 != 0) &&
       (ppppppuVar13 = (undefined ******)pppppuStack_1a0, func_0x00010c140640(),
       ((ulong)ppppppuVar13 & 1) == 0)) {
      if (unaff_x25 != (undefined *)0x0) {
        unaff_x25[0x18] = 1;
      }
      goto LAB_1084f5234;
    }
    func_0x00010c29ecc0(param_3);
    dVar18 = dVar17;
    func_0x00010c29ecc0(pppppuStack_1a0);
    if (dVar18 < dVar17) {
      func_0x00010c29ecc0(param_3);
      if (unaff_x25 != (undefined *)0x0) {
        *(double *)(unaff_x25 + 0x30) = dVar18;
      }
      goto LAB_1084f5234;
    }
    ppppppuVar13 = param_3;
    func_0x00010c22a980();
    if (ppppppuVar13 != (undefined ******)0x0) goto LAB_1084f5234;
    ppppppuVar13 = (undefined ******)0x0;
  }
  _objc_release(unaff_x25);
  _objc_release(pppppuStack_1a0);
  _objc_release(pppppuStack_198);
LAB_1084f54f0:
  _objc_release(ppppppuVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  ppppppuVar6 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return ppppppuVar13;
  }
  ___stack_chk_fail();
  _objc_release(ppppppuVar13);
  _objc_release(ppppppuVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  ppppppuVar8 = ppppppuVar6;
  __Unwind_Resume();
  pcStack_1a8 = FUN_1084f57a0;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuStack_200 = (undefined *****)unaff_x28;
  puStack_1f8 = unaff_x27;
  pppppuStack_1f0 = (undefined *****)param_2;
  puStack_1e8 = unaff_x25;
  pppppuStack_1e0 = (undefined *****)ppppppuVar6;
  pppppuStack_1d8 = (undefined *****)unaff_x23;
  pppppuStack_1d0 = (undefined *****)ppppppuVar3;
  pppppuStack_1c8 = (undefined *****)param_4;
  pppppuStack_1c0 = (undefined *****)param_3;
  pppppuStack_1b8 = (undefined *****)ppppppuVar13;
  puStack_1b0 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(ppppppuVar4);
  _objc_opt_class(PTR_PTR_1126d6060);
  if (ppppppuVar8 == (undefined ******)0x0) {
    uStack_290 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_2c0,ppppppuVar8);
  }
  puVar7 = &uStack_3a1;
  FUN_1084fde00(puVar7);
  func_0x000100aac340(apuStack_3c0,ppppppuVar4);
  func_0x000107c281a0(appuStack_3a0,0xc,puVar7,apuStack_3c0);
  puVar7 = &uStack_431;
  FUN_1084fe0c4();
  uStack_4a0 = 0xf;
  uStack_490 = 0x100;
  ppuStack_4a8 = &PTR_SUB_110a504b0;
  uStack_468 = 0;
  uStack_470 = 0;
  lStack_458 = 0;
  lStack_460 = 0;
  plStack_448 = (long *)0x0;
  uStack_450 = 0;
  plStack_440 = (long *)0x0;
  bStack_416 = puVar7[0x1a];
  bStack_415 = puVar7[0x1b];
  uStack_428 = 0xb;
  uStack_418 = 0x100;
  ppuStack_430 = &PTR_FUN_110a50380;
  pppuStack_3f0 = &ppuStack_4a8;
  plStack_3c8 = (long *)0x0;
  lStack_3e0 = 0;
  lStack_3e8 = 0;
  plStack_3d0 = (long *)0x0;
  uStack_3d8 = 0;
  bStack_316 = bStack_386 | bStack_416;
  bStack_315 = bStack_385 & bStack_415;
  uStack_328 = 4;
  uStack_318 = 0x100;
  ppuStack_330 = &PTR_DAT_1108629c8;
  pppuStack_2f0 = &ppuStack_430;
  uStack_2e0 = 0;
  lStack_2e8 = 0;
  plStack_2d0 = (long *)0x0;
  uStack_2d8 = 0;
  plStack_2c8 = (long *)0x0;
  lStack_4c0 = 0;
  lStack_4b8 = 0;
  uStack_4b0 = 0;
  uStack_4c4 = 0;
  puVar9 = &uStack_2c0;
  pppppuStack_478 = (undefined *****)ppppppuVar11;
  puStack_3f8 = puVar7;
  pppuStack_2f8 = appuStack_3a0;
  func_0x000107c310cc(puVar9,&ppuStack_330,&lStack_4c0,&uStack_4c4);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_4c0 != 0) {
    lStack_4b8 = lStack_4c0;
    __ZdlPv();
  }
  plVar2 = plStack_2c8;
  ppuStack_330 = &PTR_DAT_1108629c8;
  plStack_2c8 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_2d0;
  plStack_2d0 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_2e8 != 0) {
    __ZdlPv();
  }
  plVar2 = plStack_3c8;
  ppuStack_430 = &PTR_FUN_110a50380;
  plStack_3c8 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_3d0;
  plStack_3d0 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_3e8 != 0) {
    lStack_3e0 = lStack_3e8;
    __ZdlPv();
  }
  plVar2 = plStack_440;
  ppuStack_4a8 = &PTR_SUB_110a504b0;
  plStack_440 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_448;
  plStack_448 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_460 != 0) {
    lStack_458 = lStack_460;
    __ZdlPv();
  }
  plVar2 = plStack_338;
  appuStack_3a0[0] = &PTR_SUB_110862700;
  plStack_338 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_340;
  plStack_340 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  ppuStack_430 = apuStack_358;
  func_0x000107c27dd4(&ppuStack_430);
  ppuStack_430 = apuStack_3c0;
  func_0x000107c27dd4(&ppuStack_430);
  func_0x000107c27da8(&uStack_298);
  _objc_release(uStack_2a8);
  _objc_release(uStack_2b0);
  _objc_retain(puVar9);
  puVar10 = puVar9;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar10 != (undefined8 *)0x0) {
    puVar14 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar9);
      }
      puVar5 = PTR_PTR_1126d9ef0;
      FUN_1084fe930(PTR_PTR_1126d9ef0,*(undefined8 *)((long)puVar14 * 8));
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 != (undefined *)0x0) {
        *(undefined *******)(puVar5 + 0x50) = ppppppuVar11;
      }
      func_0x00010c25ed40(ppppppuVar8);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar14 = (undefined8 *)((long)puVar14 + 1);
    } while (puVar10 != puVar14);
    puVar10 = puVar9;
    func_0x00010bf52a60();
  }
  _objc_release(puVar9);
  _objc_release(puVar9);
  _objc_release(ppppppuVar4);
  ppppppuVar11 = ppppppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return ppppppuVar11;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  _objc_release(puVar9);
  _objc_release(ppppppuVar4);
  _objc_release(ppppppuVar8);
  __Unwind_Resume();
  *ppppppuVar11 = (undefined *****)&PTR_FUN_110a50380;
  pppppuVar12 = ppppppuVar11[0xd];
  ppppppuVar11[0xd] = (undefined *****)0x0;
  if (pppppuVar12 != (undefined *****)0x0) {
    (*(code *)(*pppppuVar12)[1])();
  }
  pppppuVar12 = ppppppuVar11[0xc];
  ppppppuVar11[0xc] = (undefined *****)0x0;
  if (pppppuVar12 != (undefined *****)0x0) {
    (*(code *)(*pppppuVar12)[1])();
  }
  if (ppppppuVar11[9] != (undefined *****)0x0) {
    ppppppuVar11[10] = ppppppuVar11[9];
    __ZdlPv();
  }
  return ppppppuVar11;
}



/* Entry: 1084f57a0; end: 1084f5c17;  */

undefined8 * FUN_1084f57a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined4 uStack_324;
  long lStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined **ppuStack_308;
  undefined4 uStack_300;
  undefined4 uStack_2f0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  undefined1 uStack_291;
  undefined **ppuStack_290;
  undefined4 uStack_288;
  undefined2 uStack_278;
  byte bStack_276;
  byte bStack_275;
  undefined1 *puStack_258;
  undefined ***pppuStack_250;
  long lStack_248;
  long lStack_240;
  undefined8 uStack_238;
  long *plStack_230;
  long *plStack_228;
  undefined *apuStack_220 [3];
  undefined1 uStack_201;
  undefined **appuStack_200 [3];
  byte bStack_1e6;
  byte bStack_1e5;
  undefined *apuStack_1b8 [3];
  long *plStack_1a0;
  long *plStack_198;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  byte bStack_176;
  byte bStack_175;
  undefined ***pppuStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126d6060);
  if (param_1 == (undefined8 *)0x0) {
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_120,param_1);
  }
  puVar2 = &uStack_201;
  FUN_1084fde00(puVar2);
  func_0x000100aac340(apuStack_220,param_2);
  func_0x000107c281a0(appuStack_200,0xc,puVar2,apuStack_220);
  puVar2 = &uStack_291;
  FUN_1084fe0c4();
  uStack_300 = 0xf;
  uStack_2f0 = 0x100;
  ppuStack_308 = &PTR_SUB_110a504b0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  lStack_2b8 = 0;
  lStack_2c0 = 0;
  plStack_2a8 = (long *)0x0;
  uStack_2b0 = 0;
  plStack_2a0 = (long *)0x0;
  bStack_276 = puVar2[0x1a];
  bStack_275 = puVar2[0x1b];
  uStack_288 = 0xb;
  uStack_278 = 0x100;
  ppuStack_290 = &PTR_FUN_110a50380;
  pppuStack_250 = &ppuStack_308;
  plStack_228 = (long *)0x0;
  lStack_240 = 0;
  lStack_248 = 0;
  plStack_230 = (long *)0x0;
  uStack_238 = 0;
  bStack_176 = bStack_1e6 | bStack_276;
  bStack_175 = bStack_1e5 & bStack_275;
  uStack_188 = 4;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_DAT_1108629c8;
  pppuStack_150 = &ppuStack_290;
  uStack_140 = 0;
  lStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  lStack_320 = 0;
  lStack_318 = 0;
  uStack_310 = 0;
  uStack_324 = 0;
  puVar3 = &uStack_120;
  uStack_2d8 = param_3;
  puStack_258 = puVar2;
  pppuStack_158 = appuStack_200;
  func_0x000107c310cc(puVar3,&ppuStack_190,&lStack_320,&uStack_324);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_320 != 0) {
    lStack_318 = lStack_320;
    __ZdlPv();
  }
  plVar6 = plStack_128;
  ppuStack_190 = &PTR_DAT_1108629c8;
  plStack_128 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (lStack_148 != 0) {
    __ZdlPv();
  }
  plVar6 = plStack_228;
  ppuStack_290 = &PTR_FUN_110a50380;
  plStack_228 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = plStack_230;
  plStack_230 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (lStack_248 != 0) {
    lStack_240 = lStack_248;
    __ZdlPv();
  }
  plVar6 = plStack_2a0;
  ppuStack_308 = &PTR_SUB_110a504b0;
  plStack_2a0 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = plStack_2a8;
  plStack_2a8 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (lStack_2c0 != 0) {
    lStack_2b8 = lStack_2c0;
    __ZdlPv();
  }
  plVar6 = plStack_198;
  appuStack_200[0] = &PTR_SUB_110862700;
  plStack_198 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = plStack_1a0;
  plStack_1a0 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  ppuStack_290 = apuStack_1b8;
  func_0x000107c27dd4(&ppuStack_290);
  ppuStack_290 = apuStack_220;
  func_0x000107c27dd4(&ppuStack_290);
  func_0x000107c27da8(&uStack_f8);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar4 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar3);
      }
      puVar5 = PTR_PTR_1126d9ef0;
      FUN_1084fe930(PTR_PTR_1126d9ef0,*(undefined8 *)((long)puVar7 * 8));
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 != (undefined *)0x0) {
        *(undefined8 *)(puVar5 + 0x50) = param_3;
      }
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar7 = (undefined8 *)((long)puVar7 + 1);
    } while (puVar4 != puVar7);
    puVar4 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(param_2);
  puVar4 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  *puVar4 = &PTR_FUN_110a50380;
  plVar6 = (long *)puVar4[0xd];
  puVar4[0xd] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = (long *)puVar4[0xc];
  puVar4[0xc] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (puVar4[9] != 0) {
    puVar4[10] = puVar4[9];
    __ZdlPv();
  }
  return puVar4;
}



/* Entry: 1084f5c18; end: 1084f5cf3;  */

undefined8 * FUN_1084f5c18(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110a50380;
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
  return param_1;
}



/* Entry: 1084f5cf4; end: 1084f616b;  */

undefined8 * FUN_1084f5cf4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined ***pppuVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined **ppuVar18;
  undefined4 uStack_644;
  long lStack_640;
  long lStack_638;
  undefined8 uStack_630;
  undefined ***pppuStack_628;
  undefined ***pppuStack_620;
  undefined8 uStack_618;
  undefined4 uStack_610;
  undefined ***pppuStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  long lStack_5e0;
  long lStack_5d8;
  undefined8 uStack_5d0;
  long *plStack_5c8;
  long *plStack_5c0;
  undefined1 uStack_5b1;
  undefined **ppuStack_5b0;
  undefined4 uStack_5a8;
  undefined2 uStack_598;
  byte bStack_596;
  byte bStack_595;
  undefined1 *puStack_578;
  undefined ****ppppuStack_570;
  long lStack_568;
  long lStack_560;
  undefined8 uStack_558;
  long *plStack_550;
  long *plStack_548;
  undefined *apuStack_540 [3];
  undefined1 uStack_521;
  undefined **ppuStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined *apuStack_4d8 [3];
  long *plStack_4c0;
  long *plStack_4b8;
  undefined **ppuStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined **ppuStack_488;
  undefined8 uStack_480;
  undefined **ppuStack_478;
  undefined4 uStack_470;
  undefined2 uStack_460;
  byte bStack_45e;
  byte bStack_45d;
  undefined ***pppuStack_440;
  undefined ***pppuStack_438;
  undefined **ppuStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  long *plStack_418;
  long *plStack_410;
  undefined ***pppuStack_408;
  undefined ***pppuStack_400;
  long lStack_3f8;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined4 uStack_324;
  long lStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined **ppuStack_308;
  undefined4 uStack_300;
  undefined4 uStack_2f0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  undefined1 uStack_291;
  undefined **ppuStack_290;
  undefined4 uStack_288;
  undefined2 uStack_278;
  byte bStack_276;
  byte bStack_275;
  undefined1 *puStack_258;
  undefined ***pppuStack_250;
  long lStack_248;
  long lStack_240;
  undefined8 uStack_238;
  long *plStack_230;
  long *plStack_228;
  undefined *apuStack_220 [3];
  undefined1 uStack_201;
  undefined **appuStack_200 [3];
  byte bStack_1e6;
  byte bStack_1e5;
  undefined *apuStack_1b8 [3];
  long *plStack_1a0;
  long *plStack_198;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  byte bStack_176;
  byte bStack_175;
  undefined ***pppuStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  puVar17 = &uStack_370;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126d5338);
  if (param_1 == (undefined8 *)0x0) {
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_120,param_1);
  }
  puVar2 = &uStack_201;
  FUN_1084ff7d8(puVar2);
  func_0x000100aac340(apuStack_220,param_2);
  func_0x000107c281a0(appuStack_200,0xc,puVar2,apuStack_220);
  puVar2 = &uStack_291;
  FUN_1084fe0c4();
  uStack_300 = 0xf;
  uStack_2f0 = 0x100;
  ppuStack_308 = &PTR_SUB_110a504b0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  lStack_2b8 = 0;
  lStack_2c0 = 0;
  plStack_2a8 = (long *)0x0;
  uStack_2b0 = 0;
  plStack_2a0 = (long *)0x0;
  bStack_276 = puVar2[0x1a];
  bStack_275 = puVar2[0x1b];
  uStack_288 = 0xb;
  uStack_278 = 0x100;
  ppuStack_290 = &PTR_FUN_110a50380;
  pppuStack_250 = &ppuStack_308;
  plStack_228 = (long *)0x0;
  lStack_240 = 0;
  lStack_248 = 0;
  plStack_230 = (long *)0x0;
  uStack_238 = 0;
  bStack_176 = bStack_1e6 | bStack_276;
  bStack_175 = bStack_1e5 & bStack_275;
  uStack_188 = 4;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_DAT_1108629c8;
  pppuStack_150 = &ppuStack_290;
  uStack_140 = 0;
  lStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  lStack_320 = 0;
  lStack_318 = 0;
  uStack_310 = 0;
  uStack_324 = 0;
  puVar15 = &uStack_120;
  pppuVar14 = &ppuStack_190;
  uStack_2d8 = param_3;
  puStack_258 = puVar2;
  pppuStack_158 = appuStack_200;
  func_0x000107c310cc(puVar15,pppuVar14,&lStack_320,&uStack_324);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_320 != 0) {
    lStack_318 = lStack_320;
    __ZdlPv();
  }
  plVar13 = plStack_128;
  ppuStack_190 = &PTR_DAT_1108629c8;
  plStack_128 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  plVar13 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  if (lStack_148 != 0) {
    __ZdlPv();
  }
  plVar13 = plStack_228;
  ppuStack_290 = &PTR_FUN_110a50380;
  plStack_228 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  plVar13 = plStack_230;
  plStack_230 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  if (lStack_248 != 0) {
    lStack_240 = lStack_248;
    __ZdlPv();
  }
  plVar13 = plStack_2a0;
  ppuStack_308 = &PTR_SUB_110a504b0;
  plStack_2a0 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  plVar13 = plStack_2a8;
  plStack_2a8 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  if (lStack_2c0 != 0) {
    lStack_2b8 = lStack_2c0;
    __ZdlPv();
  }
  plVar13 = plStack_198;
  appuStack_200[0] = &PTR_SUB_110862700;
  plStack_198 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  plVar13 = plStack_1a0;
  plStack_1a0 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  ppuStack_290 = apuStack_1b8;
  func_0x000107c27dd4(&ppuStack_290);
  ppuStack_290 = apuStack_220;
  func_0x000107c27dd4(&ppuStack_290);
  func_0x000107c27da8(&uStack_f8);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  lStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  plStack_360 = (long *)0x0;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  _objc_retain(puVar15);
  puVar3 = puVar15;
  func_0x00010bf52a60();
  if (puVar3 != (undefined8 *)0x0) {
    lVar16 = *plStack_360;
    do {
      puVar17 = (undefined8 *)0x0;
      do {
        if (*plStack_360 != lVar16) {
          _objc_enumerationMutation(puVar15);
        }
        pppuVar14 = *(undefined ****)(lStack_368 + (long)puVar17 * 8);
        puVar4 = PTR_PTR_1126d9ee8;
        FUN_1085004e4();
        _objc_retainAutoreleasedReturnValue();
        if (puVar4 != (undefined *)0x0) {
          *(undefined8 *)(puVar4 + 0x58) = param_3;
        }
        func_0x00010c25ed40(param_1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar4);
        puVar17 = (undefined8 *)((long)puVar17 + 1);
      } while (puVar3 != puVar17);
      puVar3 = puVar15;
      puVar17 = &uStack_370;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined8 *)0x0);
  }
  _objc_release(puVar15);
  _objc_release(puVar15);
  _objc_release(param_2);
  puVar3 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(puVar15);
  _objc_release(puVar15);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(pppuVar14);
  _objc_retain(puVar17);
  _objc_opt_class(PTR_PTR_1126cc378);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_480 = 0;
    uStack_498 = 0;
    uStack_4a0 = 0;
    ppuStack_488 = (undefined **)0x0;
    uStack_490 = 0;
    uStack_4a8 = 0;
    ppuStack_4b0 = (undefined **)0x0;
  }
  else {
    func_0x00010bfa6be0(&ppuStack_4b0,puVar3);
  }
  puVar2 = &uStack_521;
  FUN_10850276c(puVar2);
  pppuVar5 = pppuVar14;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  pppuStack_400 = pppuVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100aac340(apuStack_540,puVar4);
  func_0x000107c281a0(&ppuStack_520,0xc,puVar2,apuStack_540);
  puVar2 = &uStack_5b1;
  FUN_1085028e4();
  pppuVar6 = pppuVar14;
  func_0x00010bf4dac0();
  pppuStack_620 = (undefined ***)CONCAT44(pppuStack_620._4_4_,0xf);
  uStack_610 = 0x100;
  pppuStack_628 = (undefined ***)&PTR_DAT_110a50440;
  ppuVar18 = (undefined **)0x0;
  uStack_5e8 = 0;
  uStack_5f0 = 0;
  lStack_5d8 = 0;
  lStack_5e0 = 0;
  plStack_5c8 = (long *)0x0;
  uStack_5d0 = 0;
  plStack_5c0 = (long *)0x0;
  bStack_596 = puVar2[0x1a];
  bStack_595 = puVar2[0x1b];
  uStack_5a8 = 10;
  uStack_598 = 0x100;
  ppuStack_5b0 = &PTR_FUN_110a503e0;
  lStack_560 = 0;
  lStack_568 = 0;
  plStack_550 = (long *)0x0;
  uStack_558 = 0;
  plStack_548 = (long *)0x0;
  bStack_45e = uStack_508._2_1_ | bStack_596;
  bStack_45d = uStack_508._3_1_ & bStack_595;
  uStack_470 = 4;
  uStack_460 = 0x100;
  ppuStack_478 = &PTR_DAT_1108629c8;
  pppuStack_438 = &ppuStack_5b0;
  plStack_410 = (long *)0x0;
  plStack_418 = (long *)0x0;
  uStack_420 = 0;
  uStack_428 = 0;
  ppuStack_430 = (undefined **)0x0;
  lStack_640 = 0;
  lStack_638 = 0;
  uStack_630 = 0;
  uStack_644 = 0;
  pppuVar7 = &ppuStack_4b0;
  pppuStack_5f8 = pppuVar6;
  puStack_578 = puVar2;
  ppppuStack_570 = &pppuStack_628;
  pppuStack_440 = &ppuStack_520;
  func_0x000107c310cc(pppuVar7,&ppuStack_478,&lStack_640,&uStack_644);
  _objc_retainAutoreleasedReturnValue();
  pppuVar6 = pppuVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppuVar7);
  if (lStack_640 != 0) {
    lStack_638 = lStack_640;
    __ZdlPv();
  }
  plVar13 = plStack_410;
  ppuStack_478 = &PTR_DAT_1108629c8;
  plStack_410 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  plVar13 = plStack_418;
  plStack_418 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  if (ppuStack_430 != (undefined **)0x0) {
    __ZdlPv();
  }
  plVar13 = plStack_548;
  ppuStack_5b0 = &PTR_FUN_110a503e0;
  plStack_548 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  plVar13 = plStack_550;
  plStack_550 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  if (lStack_568 != 0) {
    lStack_560 = lStack_568;
    __ZdlPv();
  }
  plVar13 = plStack_5c0;
  pppuStack_628 = (undefined ***)&PTR_DAT_110a50440;
  plStack_5c0 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  plVar13 = plStack_5c8;
  plStack_5c8 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  if (lStack_5e0 != 0) {
    lStack_5d8 = lStack_5e0;
    __ZdlPv();
  }
  plVar13 = plStack_4b8;
  ppuStack_520 = &PTR_SUB_110862700;
  plStack_4b8 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  plVar13 = plStack_4c0;
  plStack_4c0 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  ppuStack_5b0 = apuStack_4d8;
  func_0x000107c27dd4(&ppuStack_5b0);
  ppuStack_5b0 = apuStack_540;
  func_0x000107c27dd4(&ppuStack_5b0);
  _objc_release(puVar4);
  _objc_release(pppuVar5);
  func_0x000107c27da8(&ppuStack_488);
  _objc_release(uStack_498);
  _objc_release(uStack_4a0);
  if (pppuVar6 == (undefined ***)0x0) {
    puVar4 = PTR_PTR_1126cc378;
    _objc_alloc(PTR_PTR_1126cc378);
    pppuVar7 = pppuVar14;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c298be0(pppuVar14);
    func_0x00010bf4dac0(pppuVar14);
    func_0x00010c29e4e0(pppuVar14);
    pppuVar5 = pppuVar14;
    func_0x00010c25e5c0(pppuVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25e5e0(pppuVar14);
    func_0x00010bf08ca0(pppuVar14);
    pppuVar9 = pppuVar14;
    func_0x00010c11b1e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04dd20(puVar4);
    _objc_release(pppuVar9);
    _objc_release(pppuVar5);
    _objc_release(pppuVar7);
    puVar10 = PTR_PTR_1126d9ef8;
    FUN_108502e60(PTR_PTR_1126d9ef8,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  else {
    pppuVar7 = pppuVar14;
    func_0x00010bf08ca0();
    pppuVar5 = pppuVar6;
    func_0x00010bf08ca0();
    if ((int)pppuVar7 <= (int)pppuVar5) {
      pppuVar7 = pppuVar14;
      func_0x00010bf08ca0();
      pppuVar5 = pppuVar6;
      func_0x00010bf08ca0();
      if ((int)pppuVar7 == (int)pppuVar5) {
        pppuVar7 = pppuVar14;
        func_0x00010c25e5e0();
        pppuVar5 = pppuVar6;
        func_0x00010c25e5e0();
        if ((int)pppuVar5 < (int)pppuVar7) goto LAB_1084f66fc;
      }
      pppuVar7 = pppuVar14;
      func_0x00010c25e5c0();
      _objc_retainAutoreleasedReturnValue();
      pppuVar5 = pppuVar6;
      func_0x00010c25e5c0(pppuVar6);
      _objc_retainAutoreleasedReturnValue();
      pppuVar9 = pppuVar7;
      func_0x00010c0720c0();
      if ((int)pppuVar9 != 0) {
        pppuVar9 = pppuVar14;
        func_0x00010c298be0();
        pppuVar8 = pppuVar6;
        func_0x00010c298be0();
        if (pppuVar9 == pppuVar8) {
          pppuVar9 = pppuVar14;
          func_0x00010c22a980();
          _objc_release(pppuVar5);
          _objc_release(pppuVar7);
          if (pppuVar9 == (undefined ***)0x0) {
            puVar15 = (undefined8 *)0x0;
            goto LAB_1084f6ab8;
          }
          goto LAB_1084f66fc;
        }
      }
      _objc_release(pppuVar5);
      _objc_release(pppuVar7);
    }
LAB_1084f66fc:
    puVar10 = PTR_PTR_1126d9ef8;
    FUN_108503140(PTR_PTR_1126d9ef8,pppuVar6);
    _objc_retainAutoreleasedReturnValue();
    pppuVar5 = pppuVar14;
    func_0x00010bf08ca0();
    pppuVar9 = pppuVar6;
    func_0x00010bf08ca0();
    pppuVar7 = pppuVar14;
    if ((int)pppuVar5 <= (int)pppuVar9) {
      pppuVar7 = pppuVar6;
    }
    uVar1 = SUB84(pppuVar7,0);
    func_0x00010bf08ca0();
    if (puVar10 != (undefined *)0x0) {
      *(undefined4 *)(puVar10 + 0x18) = uVar1;
    }
    func_0x00010c29e4e0(pppuVar14);
    if (puVar10 != (undefined *)0x0) {
      *(undefined ***)(puVar10 + 0x38) = ppuVar18;
    }
    pppuVar7 = pppuVar14;
    func_0x00010c25e5c0(pppuVar14);
    _objc_retainAutoreleasedReturnValue();
    if (puVar10 != (undefined *)0x0) {
      _objc_setProperty_nonatomic_copy(puVar10);
    }
    _objc_release(pppuVar7);
    pppuVar7 = pppuVar14;
    func_0x00010c25e5e0();
    if (puVar10 != (undefined *)0x0) {
      *(int *)(puVar10 + 0x14) = (int)pppuVar7;
    }
    pppuVar7 = pppuVar14;
    func_0x00010c298be0();
    if (puVar10 != (undefined *)0x0) {
      *(undefined ****)(puVar10 + 0x28) = pppuVar7;
    }
  }
  puVar2 = (undefined1 *)puVar17;
  func_0x00010c269d40(puVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b31c0();
  _objc_release(puVar2);
  func_0x00010c25ed40(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  pppuVar7 = pppuVar14;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  pppuStack_408 = pppuVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar3);
  _objc_retain(puVar4);
  _objc_opt_class(PTR_PTR_1126d6060);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_4f0 = 0;
    ppuVar18 = (undefined **)0x0;
    uStack_508 = 0;
    uStack_510 = 0;
    uStack_4f8 = 0;
    uStack_500 = 0;
    uStack_518 = 0;
    ppuStack_520 = (undefined **)0x0;
  }
  else {
    func_0x00010bfa6be0(&ppuStack_520,puVar3);
  }
  ppuVar11 = apuStack_540;
  FUN_1084fde00(ppuVar11);
  func_0x000100aac340(&ppuStack_5b0,puVar4);
  func_0x000107c281a0(&ppuStack_478,0xc,ppuVar11,&ppuStack_5b0);
  pppuStack_628 = (undefined ***)0x0;
  pppuStack_620 = (undefined ***)0x0;
  uStack_618 = 0;
  ppuStack_4b0 = (undefined **)((ulong)ppuStack_4b0 & 0xffffffff00000000);
  pppuVar5 = &ppuStack_520;
  func_0x000107c310cc(pppuVar5,&ppuStack_478,&pppuStack_628,&ppuStack_4b0);
  _objc_retainAutoreleasedReturnValue();
  pppuVar9 = pppuVar5;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppuVar5);
  if (pppuStack_628 != (undefined ***)0x0) {
    pppuStack_620 = pppuStack_628;
    __ZdlPv();
  }
  plVar13 = plStack_410;
  ppuStack_478 = &PTR_SUB_110862700;
  plStack_410 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  plVar13 = plStack_418;
  plStack_418 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  pppuStack_628 = &ppuStack_430;
  func_0x000107c27dd4(&pppuStack_628);
  pppuStack_628 = &ppuStack_5b0;
  func_0x000107c27dd4(&pppuStack_628);
  func_0x000107c27da8(&uStack_4f8);
  _objc_release(uStack_508);
  _objc_release(uStack_510);
  _objc_release(puVar4);
  _objc_release(puVar3);
  pppuVar5 = pppuVar9;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppuVar9);
  _objc_release(puVar4);
  _objc_release(pppuVar7);
  pppuVar7 = (undefined ***)PTR_PTR_1126d9ef0;
  if (pppuVar5 == (undefined ***)0x0) {
    FUN_1084fe5ac(PTR_PTR_1126d9ef0,pppuVar14);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_1084fe930(PTR_PTR_1126d9ef0,pppuVar5);
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = pppuVar14;
    func_0x00010c25e5c0(pppuVar14);
    _objc_retainAutoreleasedReturnValue();
    if (pppuVar7 != (undefined ***)0x0) {
      _objc_setProperty_nonatomic_copy(pppuVar7);
    }
    _objc_release(pppuVar9);
    pppuVar9 = pppuVar14;
    func_0x00010c25e5e0();
    if (pppuVar7 != (undefined ***)0x0) {
      *(int *)((long)pppuVar7 + 0x14) = (int)pppuVar9;
    }
    pppuVar9 = pppuVar14;
    func_0x00010c298be0();
    if (pppuVar7 != (undefined ***)0x0) {
      pppuVar7[0xb] = (undefined **)pppuVar9;
    }
    pppuVar9 = pppuVar14;
    func_0x00010bf08ca0();
    if (pppuVar7 != (undefined ***)0x0) {
      *(int *)(pppuVar7 + 3) = (int)pppuVar9;
    }
    func_0x00010c29e4e0(pppuVar14);
    if (pppuVar7 != (undefined ***)0x0) {
      pppuVar7[7] = ppuVar18;
    }
    pppuVar9 = pppuVar14;
    func_0x00010c22a980();
    if (pppuVar7 != (undefined ***)0x0) {
      pppuVar7[0xd] = (undefined **)((long)pppuVar7[0xd] + (long)pppuVar9);
    }
  }
  func_0x00010c25ed40(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pppuVar7);
  _objc_release(pppuVar5);
  _objc_release(puVar10);
  puVar15 = (undefined8 *)0x1;
LAB_1084f6ab8:
  _objc_release(pppuVar6);
  _objc_release(puVar17);
  _objc_release(pppuVar14);
  puVar12 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3f8) {
    ___stack_chk_fail();
    _objc_release(pppuVar7);
    _objc_release(pppuVar6);
    _objc_release(puVar17);
    _objc_release(pppuVar14);
    _objc_release(puVar3);
    __Unwind_Resume();
    *puVar12 = &PTR_FUN_110a503e0;
    plVar13 = (long *)puVar12[0xd];
    puVar12[0xd] = 0;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    plVar13 = (long *)puVar12[0xc];
    puVar12[0xc] = 0;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    if (puVar12[9] != 0) {
      puVar12[10] = puVar12[9];
      __ZdlPv();
    }
    return puVar12;
  }
  return puVar15;
}



/* Entry: 1084f616c; end: 1084f6d3b;  */

undefined8 * FUN_1084f616c(undefined8 *param_1,ulong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  undefined *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined4 uStack_2d4;
  long lStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined ***pppuStack_2b8;
  undefined ***pppuStack_2b0;
  undefined8 uStack_2a8;
  undefined4 uStack_2a0;
  ulong *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_270;
  long lStack_268;
  undefined8 uStack_260;
  long *plStack_258;
  long *plStack_250;
  undefined1 uStack_241;
  undefined **ppuStack_240;
  undefined4 uStack_238;
  undefined2 uStack_228;
  byte bStack_226;
  byte bStack_225;
  undefined1 *puStack_208;
  undefined ****ppppuStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  undefined *apuStack_1d0 [3];
  undefined1 uStack_1b1;
  undefined **ppuStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *apuStack_168 [3];
  long *plStack_150;
  long *plStack_148;
  ulong auStack_140 [7];
  undefined **ppuStack_108;
  undefined4 uStack_100;
  undefined2 uStack_f0;
  byte bStack_ee;
  byte bStack_ed;
  undefined ***pppuStack_d0;
  undefined ***pppuStack_c8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  ulong *puStack_98;
  ulong *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_opt_class(PTR_PTR_1126cc378);
  if (param_1 == (undefined8 *)0x0) {
    auStack_140[6] = 0;
    auStack_140[3] = 0;
    auStack_140[2] = 0;
    auStack_140[5] = 0;
    auStack_140[4] = 0;
    auStack_140[1] = 0;
    auStack_140[0] = 0;
  }
  else {
    func_0x00010bfa6be0(auStack_140,param_1);
  }
  puVar2 = &uStack_1b1;
  FUN_10850276c(puVar2);
  puVar3 = param_2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100aac340(apuStack_1d0,puVar4);
  func_0x000107c281a0(&ppuStack_1b0,0xc,puVar2,apuStack_1d0);
  puVar2 = &uStack_241;
  FUN_1085028e4();
  puVar5 = param_2;
  func_0x00010bf4dac0();
  pppuStack_2b0 = (undefined ***)CONCAT44(pppuStack_2b0._4_4_,0xf);
  uStack_2a0 = 0x100;
  pppuStack_2b8 = (undefined ***)&PTR_DAT_110a50440;
  uVar17 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  lStack_268 = 0;
  lStack_270 = 0;
  plStack_258 = (long *)0x0;
  uStack_260 = 0;
  plStack_250 = (long *)0x0;
  bStack_226 = puVar2[0x1a];
  bStack_225 = puVar2[0x1b];
  uStack_238 = 10;
  uStack_228 = 0x100;
  ppuStack_240 = &PTR_FUN_110a503e0;
  lStack_1f0 = 0;
  lStack_1f8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1e8 = 0;
  plStack_1d8 = (long *)0x0;
  bStack_ee = uStack_198._2_1_ | bStack_226;
  bStack_ed = uStack_198._3_1_ & bStack_225;
  uStack_100 = 4;
  uStack_f0 = 0x100;
  ppuStack_108 = &PTR_DAT_1108629c8;
  pppuStack_c8 = &ppuStack_240;
  plStack_a0 = (long *)0x0;
  plStack_a8 = (long *)0x0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  ppuStack_c0 = (undefined **)0x0;
  lStack_2d0 = 0;
  lStack_2c8 = 0;
  uStack_2c0 = 0;
  uStack_2d4 = 0;
  puVar6 = auStack_140;
  puStack_288 = puVar5;
  puStack_208 = puVar2;
  ppppuStack_200 = &pppuStack_2b8;
  pppuStack_d0 = &ppuStack_1b0;
  func_0x000107c310cc(puVar6,&ppuStack_108,&lStack_2d0,&uStack_2d4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  if (lStack_2d0 != 0) {
    lStack_2c8 = lStack_2d0;
    __ZdlPv();
  }
  plVar15 = plStack_a0;
  ppuStack_108 = &PTR_DAT_1108629c8;
  plStack_a0 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 8))();
  }
  plVar15 = plStack_a8;
  plStack_a8 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 8))();
  }
  if (ppuStack_c0 != (undefined **)0x0) {
    __ZdlPv();
  }
  plVar15 = plStack_1d8;
  ppuStack_240 = &PTR_FUN_110a503e0;
  plStack_1d8 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 8))();
  }
  plVar15 = plStack_1e0;
  plStack_1e0 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 8))();
  }
  if (lStack_1f8 != 0) {
    lStack_1f0 = lStack_1f8;
    __ZdlPv();
  }
  plVar15 = plStack_250;
  pppuStack_2b8 = (undefined ***)&PTR_DAT_110a50440;
  plStack_250 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 8))();
  }
  plVar15 = plStack_258;
  plStack_258 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 8))();
  }
  if (lStack_270 != 0) {
    lStack_268 = lStack_270;
    __ZdlPv();
  }
  plVar15 = plStack_148;
  ppuStack_1b0 = &PTR_SUB_110862700;
  plStack_148 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 8))();
  }
  plVar15 = plStack_150;
  plStack_150 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 8))();
  }
  ppuStack_240 = apuStack_168;
  func_0x000107c27dd4(&ppuStack_240);
  ppuStack_240 = apuStack_1d0;
  func_0x000107c27dd4(&ppuStack_240);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x000107c27da8(auStack_140 + 5);
  _objc_release(auStack_140[3]);
  _objc_release(auStack_140[2]);
  if (puVar5 == (ulong *)0x0) {
    puVar4 = PTR_PTR_1126cc378;
    _objc_alloc(PTR_PTR_1126cc378);
    puVar6 = param_2;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c298be0(param_2);
    func_0x00010bf4dac0(param_2);
    func_0x00010c29e4e0(param_2);
    puVar3 = param_2;
    func_0x00010c25e5c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25e5e0(param_2);
    func_0x00010bf08ca0(param_2);
    puVar8 = param_2;
    func_0x00010c11b1e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04dd20(puVar4);
    _objc_release(puVar8);
    _objc_release(puVar3);
    _objc_release(puVar6);
    puVar9 = PTR_PTR_1126d9ef8;
    FUN_108502e60(PTR_PTR_1126d9ef8,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  else {
    puVar6 = param_2;
    func_0x00010bf08ca0();
    puVar3 = puVar5;
    func_0x00010bf08ca0();
    if ((int)puVar6 <= (int)puVar3) {
      puVar6 = param_2;
      func_0x00010bf08ca0();
      puVar3 = puVar5;
      func_0x00010bf08ca0();
      if ((int)puVar6 == (int)puVar3) {
        puVar6 = param_2;
        func_0x00010c25e5e0();
        puVar3 = puVar5;
        func_0x00010c25e5e0();
        if ((int)puVar3 < (int)puVar6) goto LAB_1084f66fc;
      }
      puVar6 = param_2;
      func_0x00010c25e5c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar5;
      func_0x00010c25e5c0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      func_0x00010c0720c0();
      if ((int)puVar8 != 0) {
        puVar8 = param_2;
        func_0x00010c298be0();
        puVar7 = puVar5;
        func_0x00010c298be0();
        if (puVar8 == puVar7) {
          puVar8 = param_2;
          func_0x00010c22a980();
          _objc_release(puVar3);
          _objc_release(puVar6);
          if (puVar8 == (ulong *)0x0) {
            puVar16 = (undefined8 *)0x0;
            goto LAB_1084f6ab8;
          }
          goto LAB_1084f66fc;
        }
      }
      _objc_release(puVar3);
      _objc_release(puVar6);
    }
LAB_1084f66fc:
    puVar9 = PTR_PTR_1126d9ef8;
    FUN_108503140(PTR_PTR_1126d9ef8,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_2;
    func_0x00010bf08ca0();
    puVar8 = puVar5;
    func_0x00010bf08ca0();
    puVar6 = param_2;
    if ((int)puVar3 <= (int)puVar8) {
      puVar6 = puVar5;
    }
    uVar1 = SUB84(puVar6,0);
    func_0x00010bf08ca0();
    if (puVar9 != (undefined *)0x0) {
      *(undefined4 *)(puVar9 + 0x18) = uVar1;
    }
    func_0x00010c29e4e0(param_2);
    if (puVar9 != (undefined *)0x0) {
      *(ulong *)(puVar9 + 0x38) = uVar17;
    }
    puVar6 = param_2;
    func_0x00010c25e5c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar9 != (undefined *)0x0) {
      _objc_setProperty_nonatomic_copy(puVar9);
    }
    _objc_release(puVar6);
    puVar6 = param_2;
    func_0x00010c25e5e0();
    if (puVar9 != (undefined *)0x0) {
      *(int *)(puVar9 + 0x14) = (int)puVar6;
    }
    puVar6 = param_2;
    func_0x00010c298be0();
    if (puVar9 != (undefined *)0x0) {
      *(ulong **)(puVar9 + 0x28) = puVar6;
    }
  }
  uVar10 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b31c0();
  _objc_release(uVar10);
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar6 = param_2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  _objc_retain(puVar4);
  _objc_opt_class(PTR_PTR_1126d6060);
  if (param_1 == (undefined8 *)0x0) {
    uStack_180 = 0;
    uVar17 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    ppuStack_1b0 = (undefined **)0x0;
  }
  else {
    func_0x00010bfa6be0(&ppuStack_1b0,param_1);
  }
  ppuVar11 = apuStack_1d0;
  FUN_1084fde00(ppuVar11);
  func_0x000100aac340(&ppuStack_240,puVar4);
  func_0x000107c281a0(&ppuStack_108,0xc,ppuVar11,&ppuStack_240);
  pppuStack_2b8 = (undefined ***)0x0;
  pppuStack_2b0 = (undefined ***)0x0;
  uStack_2a8 = 0;
  auStack_140[0] = auStack_140[0] & 0xffffffff00000000;
  pppuVar12 = &ppuStack_1b0;
  func_0x000107c310cc(pppuVar12,&ppuStack_108,&pppuStack_2b8,auStack_140);
  _objc_retainAutoreleasedReturnValue();
  pppuVar13 = pppuVar12;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppuVar12);
  if (pppuStack_2b8 != (undefined ***)0x0) {
    pppuStack_2b0 = pppuStack_2b8;
    __ZdlPv();
  }
  plVar15 = plStack_a0;
  ppuStack_108 = &PTR_SUB_110862700;
  plStack_a0 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 8))();
  }
  plVar15 = plStack_a8;
  plStack_a8 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 8))();
  }
  pppuStack_2b8 = &ppuStack_c0;
  func_0x000107c27dd4(&pppuStack_2b8);
  pppuStack_2b8 = &ppuStack_240;
  func_0x000107c27dd4(&pppuStack_2b8);
  func_0x000107c27da8(&uStack_188);
  _objc_release(uStack_198);
  _objc_release(uStack_1a0);
  _objc_release(puVar4);
  _objc_release(param_1);
  pppuVar12 = pppuVar13;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppuVar13);
  _objc_release(puVar4);
  _objc_release(puVar6);
  puVar6 = (ulong *)PTR_PTR_1126d9ef0;
  if (pppuVar12 == (undefined ***)0x0) {
    FUN_1084fe5ac(PTR_PTR_1126d9ef0,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_1084fe930(PTR_PTR_1126d9ef0,pppuVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_2;
    func_0x00010c25e5c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 != (ulong *)0x0) {
      _objc_setProperty_nonatomic_copy(puVar6);
    }
    _objc_release(puVar3);
    puVar3 = param_2;
    func_0x00010c25e5e0();
    if (puVar6 != (ulong *)0x0) {
      *(int *)((long)puVar6 + 0x14) = (int)puVar3;
    }
    puVar3 = param_2;
    func_0x00010c298be0();
    if (puVar6 != (ulong *)0x0) {
      puVar6[0xb] = (ulong)puVar3;
    }
    puVar3 = param_2;
    func_0x00010bf08ca0();
    if (puVar6 != (ulong *)0x0) {
      *(int *)(puVar6 + 3) = (int)puVar3;
    }
    func_0x00010c29e4e0(param_2);
    if (puVar6 != (ulong *)0x0) {
      puVar6[7] = uVar17;
    }
    puVar3 = param_2;
    func_0x00010c22a980();
    if (puVar6 != (ulong *)0x0) {
      puVar6[0xd] = (ulong)(puVar6[0xd] + (long)puVar3);
    }
  }
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(pppuVar12);
  _objc_release(puVar9);
  puVar16 = (undefined8 *)0x1;
LAB_1084f6ab8:
  _objc_release(puVar5);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar14 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_release(param_1);
    __Unwind_Resume();
    *puVar14 = &PTR_FUN_110a503e0;
    plVar15 = (long *)puVar14[0xd];
    puVar14[0xd] = 0;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 8))();
    }
    plVar15 = (long *)puVar14[0xc];
    puVar14[0xc] = 0;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 8))();
    }
    if (puVar14[9] != 0) {
      puVar14[10] = puVar14[9];
      __ZdlPv();
    }
    return puVar14;
  }
  return puVar16;
}



/* Entry: 1084f6d3c; end: 1084f6e17;  */

undefined8 * FUN_1084f6d3c(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110a503e0;
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
  return param_1;
}



/* Entry: 1084f6e18; end: 1084f7013;  */

void FUN_1084f6e18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(puVar1);
  func_0x00010c0f8500(param_1);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 1084f7014; end: 1084f732b;  */

void FUN_1084f7014(long param_1,undefined **param_2)

{
  double dVar1;
  long *plVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined ***pppuVar12;
  undefined **ppuVar13;
  long unaff_x20;
  undefined **ppuVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined4 uStack_27c;
  undefined4 *puStack_278;
  undefined4 *puStack_270;
  undefined8 uStack_268;
  undefined4 auStack_260 [7];
  undefined1 uStack_241;
  undefined **ppuStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined4 auStack_1f8 [6];
  long *plStack_1e0;
  long *plStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  long lStack_170;
  undefined **ppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  ppuStack_148 = param_2;
  func_0x00010bf002e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  FUN_1084f732c(param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  ppuVar6 = param_2;
  ppuStack_150 = param_2;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = &PTR___NSConcreteGlobalBlock_110a501c0;
  ppuVar7 = ppuVar6;
  func_0x00010050471c();
  _objc_release(ppuVar6);
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  ppuVar14 = *(undefined ***)(param_1 + 0x20);
  _objc_retain(ppuVar14);
  ppuVar6 = ppuVar14;
  func_0x00010bf52a60();
  if (ppuVar6 != (undefined **)0x0) {
    unaff_x20 = *plStack_130;
    do {
      param_2 = (undefined **)0x0;
      do {
        if (*plStack_130 != unaff_x20) {
          _objc_enumerationMutation(ppuVar14);
        }
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c0e00e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar7;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar8 == (undefined **)0x0) {
LAB_1084f7178:
          lVar9 = *(long *)(param_1 + 0x30);
          if ((lVar9 != 0) &&
             (ppuVar13 = ppuVar8, (**(code **)(lVar9 + 0x10))(lVar9,ppuVar8,uVar5), (int)lVar9 == 0)
             ) goto LAB_1084f71dc;
          ppuVar13 = (undefined **)0x0;
          uVar10 = uVar5;
          FUN_10850368c(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40(ppuStack_148);
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28));
          _objc_release(uVar10);
        }
        else {
          func_0x00010c270aa0(ppuVar8);
          dVar1 = (double)CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(
                                                  uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))
                                                  ));
          func_0x00010c270aa0(uVar5);
          bVar3 = false;
          bVar4 = true;
          if (!NAN(dVar1) &&
              !NAN((double)CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(
                                                  uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))
                                                  )))) {
            bVar3 = dVar1 == (double)CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19
                                                  ,CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,
                                                  uVar15)))))));
            bVar4 = (double)CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13
                                                  (uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))))
                                                  ))) <= dVar1;
          }
          if (!bVar4 || bVar3) goto LAB_1084f7178;
LAB_1084f71dc:
          func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28));
        }
        _objc_release(ppuVar8);
        _objc_release(uVar5);
        param_2 = (undefined **)((long)param_2 + 1);
      } while (ppuVar6 != param_2);
      ppuVar6 = ppuVar14;
      func_0x00010bf52a60();
    } while (ppuVar6 != (undefined **)0x0);
  }
  _objc_release(ppuVar14);
  _objc_release(ppuVar7);
  _objc_release(ppuStack_150);
  ppuVar6 = ppuStack_148;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar14);
  _objc_release(ppuVar7);
  _objc_release(ppuStack_150);
  _objc_release(ppuStack_148);
  ppuVar8 = ppuVar6;
  __Unwind_Resume();
  pcStack_158 = FUN_1084f732c;
  uStack_190 = 0;
  ppuStack_188 = ppuVar6;
  ppuStack_180 = ppuVar14;
  ppuStack_178 = ppuVar7;
  lStack_170 = unaff_x20;
  ppuStack_168 = param_2;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(ppuVar13);
  if (ppuVar13 == (undefined **)0x0) {
    _objc_opt_class(PTR_PTR_1126cc378);
    if (ppuVar8 == (undefined **)0x0) {
      uStack_210 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      uStack_238 = 0;
      ppuStack_240 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_240,ppuVar8);
    }
    ppuStack_1d0 = (undefined **)0x0;
    ppuStack_1c8 = (undefined **)0x0;
    uStack_1c0 = 0;
    auStack_260[0] = 0;
    pppuVar12 = &ppuStack_240;
    func_0x00010054c81c(pppuVar12,&ppuStack_1d0,auStack_260);
    _objc_retainAutoreleasedReturnValue();
    if (ppuStack_1d0 != (undefined **)0x0) {
      ppuStack_1c8 = ppuStack_1d0;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_218);
    _objc_release(uStack_228);
    uVar5 = uStack_230;
  }
  else {
    _objc_opt_class(PTR_PTR_1126cc378);
    if (ppuVar8 == (undefined **)0x0) {
      uStack_1a0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      ppuStack_1c8 = (undefined **)0x0;
      ppuStack_1d0 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_1d0,ppuVar8);
    }
    puVar11 = &uStack_241;
    FUN_10850276c(puVar11);
    func_0x000100aac340(auStack_260,ppuVar13);
    func_0x000107c281a0(&ppuStack_240,0xc,puVar11,auStack_260);
    puStack_278 = (undefined4 *)0x0;
    puStack_270 = (undefined4 *)0x0;
    uStack_268 = 0;
    uStack_27c = 0;
    pppuVar12 = &ppuStack_1d0;
    func_0x000107c310cc(pppuVar12,&ppuStack_240,&puStack_278,&uStack_27c);
    _objc_retainAutoreleasedReturnValue();
    if (puStack_278 != (undefined4 *)0x0) {
      puStack_270 = puStack_278;
      __ZdlPv();
    }
    plVar2 = plStack_1d8;
    ppuStack_240 = &PTR_SUB_110862700;
    plStack_1d8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_1e0;
    plStack_1e0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    puStack_278 = auStack_1f8;
    func_0x000107c27dd4(&puStack_278);
    puStack_278 = auStack_260;
    func_0x000107c27dd4(&puStack_278);
    func_0x000107c27da8(&uStack_1a8);
    _objc_release(uStack_1b8);
    uVar5 = uStack_1c0;
  }
  _objc_release(uVar5);
  _objc_release(ppuVar13);
  _objc_release(ppuVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar12);
  return;
}



/* Entry: 1084f732c; end: 1084f754b;  */

void FUN_1084f732c(long param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined ***pppuVar3;
  undefined8 uVar4;
  undefined4 uStack_12c;
  undefined4 *puStack_128;
  undefined4 *puStack_120;
  undefined8 uStack_118;
  undefined4 auStack_110 [7];
  undefined1 uStack_f1;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 auStack_a8 [6];
  long *plStack_90;
  long *plStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 == 0) {
    _objc_opt_class(PTR_PTR_1126cc378);
    if (param_1 == 0) {
      uStack_c0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_e8 = 0;
      ppuStack_f0 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_f0,param_1);
    }
    ppuStack_80 = (undefined **)0x0;
    ppuStack_78 = (undefined **)0x0;
    uStack_70 = 0;
    auStack_110[0] = 0;
    pppuVar3 = &ppuStack_f0;
    func_0x00010054c81c(pppuVar3,&ppuStack_80,auStack_110);
    _objc_retainAutoreleasedReturnValue();
    if (ppuStack_80 != (undefined **)0x0) {
      ppuStack_78 = ppuStack_80;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_c8);
    _objc_release(uStack_d8);
    uVar4 = uStack_e0;
  }
  else {
    _objc_opt_class(PTR_PTR_1126cc378);
    if (param_1 == 0) {
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      ppuStack_78 = (undefined **)0x0;
      ppuStack_80 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_80,param_1);
    }
    puVar2 = &uStack_f1;
    FUN_10850276c(puVar2);
    func_0x000100aac340(auStack_110,param_2);
    func_0x000107c281a0(&ppuStack_f0,0xc,puVar2,auStack_110);
    puStack_128 = (undefined4 *)0x0;
    puStack_120 = (undefined4 *)0x0;
    uStack_118 = 0;
    uStack_12c = 0;
    pppuVar3 = &ppuStack_80;
    func_0x000107c310cc(pppuVar3,&ppuStack_f0,&puStack_128,&uStack_12c);
    _objc_retainAutoreleasedReturnValue();
    if (puStack_128 != (undefined4 *)0x0) {
      puStack_120 = puStack_128;
      __ZdlPv();
    }
    plVar1 = plStack_88;
    ppuStack_f0 = &PTR_SUB_110862700;
    plStack_88 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_90;
    plStack_90 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_128 = auStack_a8;
    func_0x000107c27dd4(&puStack_128);
    puStack_128 = auStack_110;
    func_0x000107c27dd4(&puStack_128);
    func_0x000107c27da8(&uStack_58);
    _objc_release(uStack_68);
    uVar4 = uStack_70;
  }
  _objc_release(uVar4);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar3);
  return;
}



/* Entry: 1084f754c; end: 1084f756b;  */

void FUN_1084f754c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c259cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1084f756c; end: 1084f7593;  */

void FUN_1084f756c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1084f7594; end: 1084f75f3;  */

void FUN_1084f7594(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf51e00(uVar1);
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1084f75f4; end: 1084f76cb;  */

void FUN_1084f75f4(long param_1)

{
  undefined8 *puVar1;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126d9eb8);
  if (param_1 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_70,param_1);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  puVar1 = &uStack_70;
  func_0x00010054c81c(puVar1,&lStack_88,&uStack_8c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084f76cc; end: 1084f76eb;  */

void FUN_1084f76cc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c243260(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1084f76ec; end: 1084f7713;  */

void FUN_1084f76ec(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1084f7714; end: 1084f7a03;  */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x0001084f862c */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined8 * FUN_1084f7714(undefined8 *param_1,undefined4 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined ***pppuVar7;
  undefined4 uVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  double dVar15;
  double dVar16;
  undefined4 uStack_100c;
  long lStack_1008;
  long lStack_1000;
  undefined8 uStack_ff8;
  undefined **ppuStack_ff0;
  undefined8 uStack_fe8;
  long *plStack_fe0;
  undefined8 uStack_fd8;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  double dStack_fc0;
  undefined8 uStack_fb8;
  undefined8 uStack_fb0;
  long lStack_fa8;
  long lStack_fa0;
  undefined8 uStack_f98;
  long *plStack_f90;
  long *plStack_f88;
  undefined1 uStack_f71;
  undefined8 uStack_f70;
  undefined8 uStack_f68;
  undefined8 uStack_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  undefined8 uStack_f48;
  undefined8 uStack_f40;
  undefined **ppuStack_f38;
  undefined4 uStack_f30;
  undefined2 uStack_f20;
  undefined2 uStack_f1e;
  undefined1 *puStack_f00;
  undefined ***pppuStack_ef8;
  long lStack_ef0;
  long lStack_ee8;
  undefined8 uStack_ee0;
  long *plStack_ed8;
  long *plStack_ed0;
  long lStack_eb8;
  undefined4 uStack_dec;
  undefined1 *puStack_de8;
  undefined1 *puStack_de0;
  undefined8 uStack_dd8;
  undefined1 auStack_dd0 [31];
  undefined1 uStack_db1;
  undefined **appuStack_db0 [9];
  undefined1 auStack_d68 [24];
  long *plStack_d50;
  long *plStack_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d30;
  undefined8 uStack_d28;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  long lStack_c88;
  undefined4 uStack_bdc;
  undefined1 *puStack_bd8;
  undefined1 *puStack_bd0;
  undefined8 uStack_bc8;
  undefined1 auStack_bc0 [31];
  undefined1 uStack_ba1;
  undefined **appuStack_ba0 [9];
  undefined1 auStack_b58 [24];
  long *plStack_b40;
  long *plStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  long lStack_a78;
  undefined4 uStack_9c4;
  long lStack_9c0;
  long lStack_9b8;
  undefined8 uStack_9b0;
  undefined **ppuStack_9a8;
  undefined4 uStack_9a0;
  undefined4 uStack_990;
  double dStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  long lStack_960;
  long lStack_958;
  undefined8 uStack_950;
  long *plStack_948;
  long *plStack_940;
  undefined1 uStack_931;
  undefined **ppuStack_930;
  undefined4 uStack_928;
  undefined2 uStack_918;
  undefined2 uStack_916;
  undefined1 *puStack_8f8;
  undefined ***pppuStack_8f0;
  long lStack_8e8;
  long lStack_8e0;
  undefined8 uStack_8d8;
  long *plStack_8d0;
  long *plStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  long lStack_808;
  undefined4 uStack_744;
  long lStack_740;
  long lStack_738;
  undefined8 uStack_730;
  undefined **ppuStack_728;
  undefined4 uStack_720;
  undefined4 uStack_710;
  double dStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  long lStack_6e0;
  long lStack_6d8;
  undefined8 uStack_6d0;
  long *plStack_6c8;
  long *plStack_6c0;
  undefined1 uStack_6b1;
  undefined **ppuStack_6b0;
  undefined4 uStack_6a8;
  undefined2 uStack_698;
  undefined2 uStack_696;
  undefined1 *puStack_678;
  undefined ***pppuStack_670;
  long lStack_668;
  long lStack_660;
  undefined8 uStack_658;
  long *plStack_650;
  long *plStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  long lStack_588;
  undefined4 uStack_508;
  undefined1 uStack_501;
  long lStack_500;
  long lStack_4f8;
  undefined8 uStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  undefined **ppuStack_4d0;
  undefined4 uStack_4c8;
  undefined4 uStack_4b8;
  double dStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  long lStack_488;
  long lStack_480;
  undefined8 uStack_478;
  long *plStack_470;
  long *plStack_468;
  undefined1 uStack_459;
  undefined **ppuStack_458;
  undefined4 uStack_450;
  undefined2 uStack_440;
  byte bStack_43e;
  byte bStack_43d;
  undefined1 *puStack_420;
  undefined ***pppuStack_418;
  long lStack_410;
  long lStack_408;
  undefined8 uStack_400;
  long *plStack_3f8;
  long *plStack_3f0;
  undefined **ppuStack_3e8;
  undefined4 uStack_3e0;
  undefined4 uStack_3d0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  long lStack_3a0;
  long lStack_398;
  undefined8 uStack_390;
  long *plStack_388;
  long *plStack_380;
  undefined1 uStack_371;
  undefined **ppuStack_370;
  undefined4 uStack_368;
  undefined2 uStack_358;
  undefined2 uStack_356;
  undefined1 *puStack_338;
  undefined ***pppuStack_330;
  long lStack_328;
  long lStack_320;
  undefined8 uStack_318;
  long *plStack_310;
  long *plStack_308;
  undefined **ppuStack_300;
  undefined4 uStack_2f8;
  undefined2 uStack_2e8;
  byte bStack_2e6;
  byte bStack_2e5;
  undefined ***pppuStack_2c8;
  undefined ***pppuStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 uStack_250;
  undefined1 uStack_24f;
  undefined4 uStack_24c;
  code *pcStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined4 uStack_1c0;
  undefined1 uStack_1b9;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined4 uStack_5c;
  code *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126d6060);
  if (param_1 == (undefined8 *)0x0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_1);
  }
  puVar2 = &uStack_111;
  FUN_1084fe0c4();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  uStack_158 = 0;
  ppuStack_188 = &PTR_SUB_110a504b0;
  dVar16 = 0.0;
  uStack_148 = 0;
  uStack_150 = 0;
  lStack_138 = 0;
  lStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_108 = 10;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_FUN_110a50380;
  pppuStack_d0 = &ppuStack_188;
  lStack_c0 = 0;
  lStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  puVar3 = &uStack_1b9;
  puStack_d8 = puVar2;
  FUN_1084fdf78();
  uStack_68 = *(undefined8 *)(puVar3 + 0x10);
  uStack_60 = puVar3[0x19];
  uStack_5f = puVar3[0x18];
  uStack_50 = *(undefined8 *)(puVar3 + 0x28);
  uStack_5c = 0;
  pcStack_58 = FUN_1084fd408;
  lStack_1b0 = 0;
  uStack_1a8 = 0;
  lStack_1b8 = 0;
  func_0x000100c435d0(&lStack_1b8,&uStack_68,&lStack_48,1);
  func_0x000100c436b8(&lStack_1a0,&lStack_1b8);
  puVar4 = &uStack_a0;
  pppuVar10 = &ppuStack_110;
  uStack_1c0 = param_2;
  func_0x000107c310cc(puVar4,pppuVar10,&lStack_1a0,&uStack_1c0);
  uVar8 = SUB84(pppuVar10,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (lStack_1a0 != 0) {
    lStack_198 = lStack_1a0;
    __ZdlPv();
  }
  if (lStack_1b8 != 0) {
    lStack_1b0 = lStack_1b8;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_FUN_110a50380;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_c8 != 0) {
    lStack_c0 = lStack_c8;
    __ZdlPv();
  }
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_SUB_110a504b0;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_140 != 0) {
    lStack_138 = lStack_140;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  puVar11 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(puVar4);
    if (lStack_1a0 != 0) {
      lStack_198 = lStack_1a0;
      __ZdlPv();
    }
    if (lStack_1b8 != 0) {
      lStack_1b0 = lStack_1b8;
      __ZdlPv();
    }
    FUN_1084f5c18(&ppuStack_110);
    func_0x0001084f5c84(&ppuStack_188);
    func_0x000104d96620(&uStack_a0);
    _objc_release(param_1);
    __Unwind_Resume();
    lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined *)0x0) {
      dVar16 = 0.0;
    }
    else {
      func_0x00010c26f320(puVar6);
      dVar16 = (double)(long)(dVar16 * 1000.0);
    }
    _objc_release(puVar6);
    _objc_opt_class(PTR_PTR_1126d5338);
    if (puVar11 == (undefined8 *)0x0) {
      uStack_260 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_290,puVar11);
    }
    puVar2 = &uStack_371;
    FUN_1084ffbe8();
    uStack_3e0 = 0xf;
    uStack_3d0 = 0x100;
    ppuStack_3e8 = &PTR_SUB_110a504b0;
    uStack_3a8 = 0;
    uStack_3b0 = 0;
    lStack_398 = 0;
    lStack_3a0 = 0;
    plStack_388 = (long *)0x0;
    uStack_390 = 0;
    uStack_3b8 = 0;
    plStack_380 = (long *)0x0;
    uStack_356 = *(undefined2 *)(puVar2 + 0x1a);
    uStack_368 = 10;
    uStack_358 = 0x100;
    ppuStack_370 = &PTR_FUN_110a50380;
    pppuStack_330 = &ppuStack_3e8;
    lStack_320 = 0;
    lStack_328 = 0;
    plStack_310 = (long *)0x0;
    uStack_318 = 0;
    plStack_308 = (long *)0x0;
    puVar3 = &uStack_459;
    puStack_338 = puVar2;
    FUN_1084ff950();
    uStack_4c8 = 0xf;
    uStack_4b8 = 0x100;
    ppuStack_4d0 = &PTR_DAT_11086d7d0;
    dVar15 = 0.0;
    uStack_490 = 0;
    uStack_498 = 0;
    lStack_480 = 0;
    lStack_488 = 0;
    plStack_470 = (long *)0x0;
    uStack_478 = 0;
    plStack_468 = (long *)0x0;
    bStack_43e = puVar3[0x1a];
    bStack_43d = puVar3[0x1b];
    uStack_450 = 9;
    uStack_440 = 0x100;
    ppuStack_458 = &PTR_DAT_11089b010;
    pppuStack_418 = &ppuStack_4d0;
    plStack_3f0 = (long *)0x0;
    lStack_408 = 0;
    lStack_410 = 0;
    plStack_3f8 = (long *)0x0;
    uStack_400 = 0;
    bStack_2e6 = (byte)uStack_356 | bStack_43e;
    bStack_2e5 = uStack_356._1_1_ & bStack_43d;
    uStack_2f8 = 4;
    uStack_2e8 = 0x100;
    ppuStack_300 = &PTR_DAT_1108629c8;
    pppuStack_2c8 = &ppuStack_370;
    pppuStack_2c0 = &ppuStack_458;
    uStack_2b0 = 0;
    lStack_2b8 = 0;
    plStack_2a0 = (long *)0x0;
    uStack_2a8 = 0;
    plStack_298 = (long *)0x0;
    puVar2 = &uStack_501;
    dStack_4a0 = dVar16;
    puStack_420 = puVar3;
    FUN_1084ffa9c();
    uStack_258 = *(undefined8 *)(puVar2 + 0x10);
    uStack_250 = puVar2[0x19];
    uStack_24f = puVar2[0x18];
    uStack_240 = *(undefined8 *)(puVar2 + 0x28);
    uStack_24c = 0;
    pcStack_248 = FUN_1084fd408;
    lStack_4f8 = 0;
    uStack_4f0 = 0;
    lStack_500 = 0;
    func_0x000100c435d0(&lStack_500,&uStack_258,&lStack_238,1);
    func_0x000100c436b8(&lStack_4e8,&lStack_500);
    puVar4 = &uStack_290;
    pppuVar10 = &ppuStack_300;
    uStack_508 = uVar8;
    func_0x000107c310cc(puVar4,pppuVar10,&lStack_4e8,&uStack_508);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    if (lStack_4e8 != 0) {
      lStack_4e0 = lStack_4e8;
      __ZdlPv();
    }
    if (lStack_500 != 0) {
      lStack_4f8 = lStack_500;
      __ZdlPv();
    }
    plVar1 = plStack_298;
    ppuStack_300 = &PTR_DAT_1108629c8;
    plStack_298 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_2a0;
    plStack_2a0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_2b8 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_3f0;
    ppuStack_458 = &PTR_DAT_11089b010;
    plStack_3f0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_3f8;
    plStack_3f8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_410 != 0) {
      lStack_408 = lStack_410;
      __ZdlPv();
    }
    plVar1 = plStack_468;
    ppuStack_4d0 = &PTR_DAT_11086d7d0;
    plStack_468 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_470;
    plStack_470 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_488 != 0) {
      lStack_480 = lStack_488;
      __ZdlPv();
    }
    plVar1 = plStack_308;
    ppuStack_370 = &PTR_FUN_110a50380;
    plStack_308 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_310;
    plStack_310 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_328 != 0) {
      lStack_320 = lStack_328;
      __ZdlPv();
    }
    plVar1 = plStack_380;
    ppuStack_3e8 = &PTR_SUB_110a504b0;
    plStack_380 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_388;
    plStack_388 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_3a0 != 0) {
      lStack_398 = lStack_3a0;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_268);
    _objc_release(uStack_278);
    _objc_release(uStack_280);
    puVar12 = puVar11;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_238) {
      ___stack_chk_fail();
      _objc_release(puVar4);
      _objc_release(puVar11);
      __Unwind_Resume();
      lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain();
      _objc_retain(pppuVar10);
      puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      _objc_release(puVar6);
      _objc_opt_class(PTR_PTR_1126d9eb8);
      if (puVar12 == (undefined8 *)0x0) {
        uStack_610 = 0;
        uStack_628 = 0;
        uStack_630 = 0;
        uStack_618 = 0;
        uStack_620 = 0;
        uStack_638 = 0;
        uStack_640 = 0;
      }
      else {
        func_0x00010bfa6be0(&uStack_640,puVar12);
      }
      puVar2 = &uStack_6b1;
      FUN_1085015b8();
      uStack_720 = 0xf;
      uStack_710 = 0x100;
      ppuStack_728 = &PTR_DAT_11086d7d0;
      dVar16 = 0.0;
      uStack_6e8 = 0;
      uStack_6f0 = 0;
      lStack_6d8 = 0;
      lStack_6e0 = 0;
      plStack_6c8 = (long *)0x0;
      uStack_6d0 = 0;
      plStack_6c0 = (long *)0x0;
      uStack_696 = *(undefined2 *)(puVar2 + 0x1a);
      uStack_6a8 = 6;
      uStack_698 = 0x100;
      ppuStack_6b0 = &PTR_DAT_11089b010;
      pppuStack_670 = &ppuStack_728;
      lStack_660 = 0;
      lStack_668 = 0;
      plStack_650 = (long *)0x0;
      uStack_658 = 0;
      plStack_648 = (long *)0x0;
      lStack_740 = 0;
      lStack_738 = 0;
      uStack_730 = 0;
      uStack_744 = 0;
      puVar5 = &uStack_640;
      pppuVar9 = &ppuStack_6b0;
      dStack_6f8 = dVar15 + -3600.0;
      puStack_678 = puVar2;
      func_0x000107c310cc(puVar5,pppuVar9,&lStack_740,&uStack_744);
      _objc_retainAutoreleasedReturnValue();
      if (lStack_740 != 0) {
        lStack_738 = lStack_740;
        __ZdlPv();
      }
      plVar1 = plStack_648;
      ppuStack_6b0 = &PTR_DAT_11089b010;
      plStack_648 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_650;
      plStack_650 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_668 != 0) {
        lStack_660 = lStack_668;
        __ZdlPv();
      }
      plVar1 = plStack_6c0;
      ppuStack_728 = &PTR_DAT_11086d7d0;
      plStack_6c0 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_6c8;
      plStack_6c8 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_6e0 != 0) {
        lStack_6d8 = lStack_6e0;
        __ZdlPv();
      }
      func_0x000107c27da8(&uStack_618);
      _objc_release(uStack_628);
      _objc_release(uStack_630);
      puVar4 = puVar5;
      func_0x00010bf529e0();
      if (puVar4 != (undefined8 *)0x0) {
        pppuVar7 = pppuVar10;
        func_0x00010c269d40(pppuVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b31c0();
        _objc_release(pppuVar7);
        pppuVar7 = pppuVar10;
        func_0x00010c269d40(pppuVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0(puVar5);
        func_0x00010c0ad6a0(pppuVar7);
        _objc_release(pppuVar7);
        dVar16 = 0.0;
        _objc_retain(puVar5);
        puVar11 = puVar5;
        func_0x00010bf52a60();
        lVar13 = lRam0000000000000000;
        while (puVar11 != (undefined8 *)0x0) {
          puVar14 = (undefined8 *)0x0;
          do {
            if (lRam0000000000000000 != lVar13) {
              _objc_enumerationMutation(puVar5);
            }
            pppuVar9 = *(undefined ****)((long)puVar14 * 8);
            puVar6 = PTR_PTR_1126d9ee0;
            FUN_108501fe8();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25ed40(puVar12);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar6);
            puVar14 = (undefined8 *)((long)puVar14 + 1);
          } while (puVar11 != puVar14);
          puVar11 = puVar5;
          func_0x00010bf52a60();
        }
        _objc_release(puVar5);
      }
      _objc_release(puVar5);
      _objc_release(pppuVar10);
      puVar11 = puVar12;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_588) {
        return (undefined8 *)(ulong)(puVar4 != (undefined8 *)0x0);
      }
      ___stack_chk_fail();
      _objc_release(puVar5);
      _objc_release(puVar5);
      _objc_release(pppuVar10);
      _objc_release(puVar12);
      __Unwind_Resume();
      lStack_808 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain();
      _objc_retain(pppuVar9);
      puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      _objc_release(puVar6);
      _objc_opt_class(PTR_PTR_1126cc378);
      if (puVar11 == (undefined8 *)0x0) {
        uStack_890 = 0;
        uStack_8a8 = 0;
        uStack_8b0 = 0;
        uStack_898 = 0;
        uStack_8a0 = 0;
        uStack_8b8 = 0;
        uStack_8c0 = 0;
      }
      else {
        func_0x00010bfa6be0(&uStack_8c0,puVar11);
      }
      puVar2 = &uStack_931;
      FUN_108502a2c();
      uStack_9a0 = 0xf;
      dStack_978 = dVar16 * 1000.0 + -25200000.0;
      uStack_990 = 0x100;
      ppuStack_9a8 = &PTR_DAT_11086d7d0;
      uStack_968 = 0;
      uStack_970 = 0;
      lStack_958 = 0;
      lStack_960 = 0;
      plStack_948 = (long *)0x0;
      uStack_950 = 0;
      plStack_940 = (long *)0x0;
      uStack_916 = *(undefined2 *)(puVar2 + 0x1a);
      uStack_928 = 6;
      uStack_918 = 0x100;
      ppuStack_930 = &PTR_DAT_11089b010;
      pppuStack_8f0 = &ppuStack_9a8;
      lStack_8e0 = 0;
      lStack_8e8 = 0;
      plStack_8d0 = (long *)0x0;
      uStack_8d8 = 0;
      plStack_8c8 = (long *)0x0;
      lStack_9c0 = 0;
      lStack_9b8 = 0;
      uStack_9b0 = 0;
      uStack_9c4 = 0;
      puVar5 = &uStack_8c0;
      pppuVar10 = &ppuStack_930;
      puStack_8f8 = puVar2;
      func_0x000107c310cc(puVar5,pppuVar10,&lStack_9c0,&uStack_9c4);
      _objc_retainAutoreleasedReturnValue();
      if (lStack_9c0 != 0) {
        lStack_9b8 = lStack_9c0;
        __ZdlPv();
      }
      plVar1 = plStack_8c8;
      ppuStack_930 = &PTR_DAT_11089b010;
      plStack_8c8 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_8d0;
      plStack_8d0 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_8e8 != 0) {
        lStack_8e0 = lStack_8e8;
        __ZdlPv();
      }
      plVar1 = plStack_940;
      ppuStack_9a8 = &PTR_DAT_11086d7d0;
      plStack_940 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_948;
      plStack_948 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_960 != 0) {
        lStack_958 = lStack_960;
        __ZdlPv();
      }
      func_0x000107c27da8(&uStack_898);
      _objc_release(uStack_8a8);
      _objc_release(uStack_8b0);
      puVar4 = puVar5;
      func_0x00010bf529e0();
      if (puVar4 != (undefined8 *)0x0) {
        pppuVar7 = pppuVar9;
        func_0x00010c269d40(pppuVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b31c0();
        _objc_release(pppuVar7);
        pppuVar7 = pppuVar9;
        func_0x00010c269d40(pppuVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0(puVar5);
        func_0x00010c0ad6a0(pppuVar7);
        _objc_release(pppuVar7);
        _objc_retain(puVar5);
        puVar12 = puVar5;
        func_0x00010bf52a60();
        lVar13 = lRam0000000000000000;
        while (puVar12 != (undefined8 *)0x0) {
          puVar14 = (undefined8 *)0x0;
          do {
            if (lRam0000000000000000 != lVar13) {
              _objc_enumerationMutation(puVar5);
            }
            pppuVar10 = *(undefined ****)((long)puVar14 * 8);
            puVar6 = PTR_PTR_1126d9ef8;
            FUN_108503618();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25ed40(puVar11);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar6);
            puVar14 = (undefined8 *)((long)puVar14 + 1);
          } while (puVar12 != puVar14);
          puVar12 = puVar5;
          func_0x00010bf52a60();
        }
        _objc_release(puVar5);
      }
      _objc_release(puVar5);
      _objc_release(pppuVar9);
      puVar12 = puVar11;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_808) {
        return (undefined8 *)(ulong)(puVar4 != (undefined8 *)0x0);
      }
      ___stack_chk_fail();
      _objc_release(puVar5);
      _objc_release(puVar5);
      _objc_release(pppuVar9);
      _objc_release(puVar11);
      __Unwind_Resume();
      lStack_a78 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain();
      _objc_retain(pppuVar10);
      _objc_opt_class(PTR_PTR_1126d6060);
      if (puVar12 == (undefined8 *)0x0) {
        uStack_b00 = 0;
        uStack_b18 = 0;
        uStack_b20 = 0;
        uStack_b08 = 0;
        uStack_b10 = 0;
        uStack_b28 = 0;
        uStack_b30 = 0;
      }
      else {
        func_0x00010bfa6be0(&uStack_b30,puVar12);
      }
      puVar2 = &uStack_ba1;
      FUN_1084fde00(puVar2);
      func_0x000100aac340(auStack_bc0,pppuVar10);
      func_0x000107c281a0(appuStack_ba0,0xc,puVar2,auStack_bc0);
      puStack_bd8 = (undefined1 *)0x0;
      puStack_bd0 = (undefined1 *)0x0;
      uStack_bc8 = 0;
      uStack_bdc = 0;
      puVar5 = &uStack_b30;
      pppuVar9 = appuStack_ba0;
      func_0x000107c310cc(puVar5,pppuVar9,&puStack_bd8,&uStack_bdc);
      _objc_retainAutoreleasedReturnValue();
      if (puStack_bd8 != (undefined1 *)0x0) {
        puStack_bd0 = puStack_bd8;
        __ZdlPv();
      }
      plVar1 = plStack_b38;
      appuStack_ba0[0] = &PTR_SUB_110862700;
      plStack_b38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_b40;
      plStack_b40 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      puStack_bd8 = auStack_b58;
      func_0x000107c27dd4(&puStack_bd8);
      puStack_bd8 = auStack_bc0;
      func_0x000107c27dd4(&puStack_bd8);
      func_0x000107c27da8(&uStack_b08);
      _objc_release(uStack_b18);
      _objc_release(uStack_b20);
      _objc_retain(puVar5);
      puVar4 = puVar5;
      func_0x00010bf52a60();
      lVar13 = lRam0000000000000000;
      while (puVar4 != (undefined8 *)0x0) {
        puVar11 = (undefined8 *)0x0;
        do {
          if (lRam0000000000000000 != lVar13) {
            _objc_enumerationMutation(puVar5);
          }
          pppuVar9 = *(undefined ****)((long)puVar11 * 8);
          puVar6 = PTR_PTR_1126d9ef0;
          FUN_1084fee94();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40(puVar12);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar6);
          puVar11 = (undefined8 *)((long)puVar11 + 1);
        } while (puVar4 != puVar11);
        puVar4 = puVar5;
        func_0x00010bf52a60();
      }
      _objc_release(puVar5);
      _objc_release(puVar5);
      _objc_release(pppuVar10);
      puVar4 = puVar12;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a78) {
        return puVar4;
      }
      ___stack_chk_fail();
      _objc_release(puVar5);
      _objc_release(puVar5);
      _objc_release(pppuVar10);
      _objc_release(puVar12);
      __Unwind_Resume();
      lStack_c88 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain();
      _objc_retain(pppuVar9);
      _objc_opt_class(PTR_PTR_1126d5338);
      if (puVar4 == (undefined8 *)0x0) {
        uStack_d10 = 0;
        uStack_d28 = 0;
        uStack_d30 = 0;
        uStack_d18 = 0;
        uStack_d20 = 0;
        uStack_d38 = 0;
        uStack_d40 = 0;
      }
      else {
        func_0x00010bfa6be0(&uStack_d40,puVar4);
      }
      puVar2 = &uStack_db1;
      FUN_1084ff7d8(puVar2);
      func_0x000100aac340(auStack_dd0,pppuVar9);
      func_0x000107c281a0(appuStack_db0,0xc,puVar2,auStack_dd0);
      puStack_de8 = (undefined1 *)0x0;
      puStack_de0 = (undefined1 *)0x0;
      uStack_dd8 = 0;
      uStack_dec = 0;
      puVar5 = &uStack_d40;
      func_0x000107c310cc(puVar5,appuStack_db0,&puStack_de8,&uStack_dec);
      _objc_retainAutoreleasedReturnValue();
      if (puStack_de8 != (undefined1 *)0x0) {
        puStack_de0 = puStack_de8;
        __ZdlPv();
      }
      plVar1 = plStack_d48;
      appuStack_db0[0] = &PTR_SUB_110862700;
      plStack_d48 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_d50;
      plStack_d50 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      puStack_de8 = auStack_d68;
      func_0x000107c27dd4(&puStack_de8);
      puStack_de8 = auStack_dd0;
      func_0x000107c27dd4(&puStack_de8);
      func_0x000107c27da8(&uStack_d18);
      _objc_release(uStack_d28);
      _objc_release(uStack_d30);
      dVar16 = 0.0;
      _objc_retain(puVar5);
      puVar11 = puVar5;
      func_0x00010bf52a60();
      lVar13 = lRam0000000000000000;
      while (puVar11 != (undefined8 *)0x0) {
        puVar12 = (undefined8 *)0x0;
        do {
          if (lRam0000000000000000 != lVar13) {
            _objc_enumerationMutation(puVar5);
          }
          puVar6 = PTR_PTR_1126d9ee8;
          FUN_108500a60(PTR_PTR_1126d9ee8,*(undefined8 *)((long)puVar12 * 8));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40(puVar4);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar6);
          puVar12 = (undefined8 *)((long)puVar12 + 1);
        } while (puVar11 != puVar12);
        puVar11 = puVar5;
        func_0x00010bf52a60();
      }
      _objc_release(puVar5);
      _objc_release(puVar5);
      _objc_release(pppuVar9);
      puVar11 = puVar4;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c88) {
        return puVar11;
      }
      ___stack_chk_fail();
      _objc_release(puVar5);
      _objc_release(puVar5);
      _objc_release(pppuVar9);
      _objc_release(puVar4);
      __Unwind_Resume();
      lStack_eb8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain();
      _objc_retain(puVar11);
      puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      _objc_release(puVar6);
      _objc_opt_class(PTR_PTR_1126d5338);
      if (puVar11 == (undefined8 *)0x0) {
        uStack_f40 = 0;
        uStack_f58 = 0;
        uStack_f60 = 0;
        uStack_f48 = 0;
        uStack_f50 = 0;
        uStack_f68 = 0;
        uStack_f70 = 0;
      }
      else {
        func_0x00010bfa6be0(&uStack_f70,puVar11);
      }
      puVar2 = &uStack_f71;
      FUN_1084ff950();
      uStack_fe8 = CONCAT44(uStack_fe8._4_4_,0xf);
      uStack_fd8 = CONCAT44(uStack_fd8._4_4_,0x100);
      ppuStack_ff0 = &PTR_DAT_11086d7d0;
      uStack_fb0 = 0;
      uStack_fb8 = 0;
      lStack_fa0 = 0;
      lStack_fa8 = 0;
      plStack_f90 = (long *)0x0;
      uStack_f98 = 0;
      plStack_f88 = (long *)0x0;
      uStack_f1e = *(undefined2 *)(puVar2 + 0x1a);
      uStack_f30 = 6;
      uStack_f20 = 0x100;
      ppuStack_f38 = &PTR_DAT_11089b010;
      lStack_ee8 = 0;
      lStack_ef0 = 0;
      plStack_ed8 = (long *)0x0;
      uStack_ee0 = 0;
      plStack_ed0 = (long *)0x0;
      lStack_1008 = 0;
      lStack_1000 = 0;
      uStack_ff8 = 0;
      uStack_100c = 0;
      puVar5 = &uStack_f70;
      dStack_fc0 = dVar16 * 1000.0;
      puStack_f00 = puVar2;
      pppuStack_ef8 = &ppuStack_ff0;
      func_0x000107c310cc(puVar5,&ppuStack_f38,&lStack_1008,&uStack_100c);
      _objc_retainAutoreleasedReturnValue();
      if (lStack_1008 != 0) {
        lStack_1000 = lStack_1008;
        __ZdlPv();
      }
      plVar1 = plStack_ed0;
      ppuStack_f38 = &PTR_DAT_11089b010;
      plStack_ed0 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_ed8;
      plStack_ed8 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_ef0 != 0) {
        lStack_ee8 = lStack_ef0;
        __ZdlPv();
      }
      plVar1 = plStack_f88;
      ppuStack_ff0 = &PTR_DAT_11086d7d0;
      plStack_f88 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_f90;
      plStack_f90 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_fa8 != 0) {
        lStack_fa0 = lStack_fa8;
        __ZdlPv();
      }
      func_0x000107c27da8(&uStack_f48);
      _objc_release(uStack_f58);
      _objc_release(uStack_f60);
      uStack_fe8 = 0;
      ppuStack_ff0 = (undefined **)0x0;
      uStack_fd8 = 0;
      plStack_fe0 = (long *)0x0;
      uStack_fc8 = 0;
      uStack_fd0 = 0;
      uStack_fb8 = 0;
      dStack_fc0 = 0.0;
      _objc_retain(puVar5);
      puVar4 = puVar5;
      func_0x00010bf52a60();
      if (puVar4 != (undefined8 *)0x0) {
        lVar13 = *plStack_fe0;
        do {
          puVar12 = (undefined8 *)0x0;
          do {
            if (*plStack_fe0 != lVar13) {
              _objc_enumerationMutation(puVar5);
            }
            puVar6 = PTR_PTR_1126d9ee8;
            FUN_108500a60(PTR_PTR_1126d9ee8,*(undefined8 *)(uStack_fe8 + (long)puVar12 * 8));
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25ed40(puVar11);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar6);
            puVar12 = (undefined8 *)((long)puVar12 + 1);
          } while (puVar4 != puVar12);
          puVar4 = puVar5;
          func_0x00010bf52a60();
        } while (puVar4 != (undefined8 *)0x0);
      }
      _objc_release(puVar5);
      _objc_release(puVar5);
      _objc_release(puVar11);
      _objc_opt_class(PTR_PTR_1126d5338);
      if (puVar11 == (undefined8 *)0x0) {
        uStack_f40 = 0;
        uStack_f58 = 0;
        uStack_f60 = 0;
        uStack_f48 = 0;
        uStack_f50 = 0;
        uStack_f68 = 0;
        uStack_f70 = 0;
      }
      else {
        func_0x00010bfa6be0(&uStack_f70,puVar11);
      }
      puVar2 = &uStack_f71;
      FUN_1084ffbe8();
      uStack_fe8 = CONCAT44(uStack_fe8._4_4_,0xf);
      uStack_fd8 = CONCAT44(uStack_fd8._4_4_,0x100);
      dStack_fc0 = 4.94065645841247e-324;
      ppuStack_ff0 = &PTR_SUB_110a504b0;
      uStack_fb0 = 0;
      uStack_fb8 = 0;
      lStack_fa0 = 0;
      lStack_fa8 = 0;
      plStack_f90 = (long *)0x0;
      uStack_f98 = 0;
      plStack_f88 = (long *)0x0;
      uStack_f1e = *(undefined2 *)(puVar2 + 0x1a);
      uStack_f30 = 10;
      uStack_f20 = 0x100;
      ppuStack_f38 = &PTR_FUN_110a50380;
      pppuStack_ef8 = &ppuStack_ff0;
      lStack_ee8 = 0;
      lStack_ef0 = 0;
      plStack_ed8 = (long *)0x0;
      uStack_ee0 = 0;
      plStack_ed0 = (long *)0x0;
      lStack_1008 = 0;
      lStack_1000 = 0;
      uStack_ff8 = 0;
      uStack_100c = 0;
      puVar4 = &uStack_f70;
      puStack_f00 = puVar2;
      func_0x000107c310cc(puVar4,&ppuStack_f38,&lStack_1008,&uStack_100c);
      _objc_retainAutoreleasedReturnValue();
      if (lStack_1008 != 0) {
        lStack_1000 = lStack_1008;
        __ZdlPv();
      }
      plVar1 = plStack_ed0;
      ppuStack_f38 = &PTR_FUN_110a50380;
      plStack_ed0 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_ed8;
      plStack_ed8 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_ef0 != 0) {
        lStack_ee8 = lStack_ef0;
        __ZdlPv();
      }
      plVar1 = plStack_f88;
      ppuStack_ff0 = &PTR_SUB_110a504b0;
      plStack_f88 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_f90;
      plStack_f90 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_fa8 != 0) {
        lStack_fa0 = lStack_fa8;
        __ZdlPv();
      }
      func_0x000107c27da8(&uStack_f48);
      _objc_release(uStack_f58);
      _objc_release(uStack_f60);
      puVar12 = puVar4;
      func_0x00010bf0a540(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar12;
      func_0x000100504554();
      _objc_release(puVar12);
      FUN_1084f5cf4(puVar11,puVar5,0);
      _objc_release(puVar5);
      _objc_release(puVar4);
      puVar12 = puVar11;
      _objc_release(puVar11);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_eb8) {
        return puVar12;
      }
      ___stack_chk_fail();
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar11);
      __Unwind_Resume(puVar12);
      func_0x00010c241220(puVar5);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar5;
}



/* Entry: 1084f7a04; end: 1084f7f23;  */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x0001084f862c */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined8 * FUN_1084f7a04(double param_1,undefined8 *param_2,undefined4 param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  double dVar14;
  double dVar15;
  undefined4 uStack_e4c;
  long lStack_e48;
  long lStack_e40;
  undefined8 uStack_e38;
  undefined **ppuStack_e30;
  undefined8 uStack_e28;
  long *plStack_e20;
  undefined8 uStack_e18;
  undefined8 uStack_e10;
  undefined8 uStack_e08;
  double dStack_e00;
  undefined8 uStack_df8;
  undefined8 uStack_df0;
  long lStack_de8;
  long lStack_de0;
  undefined8 uStack_dd8;
  long *plStack_dd0;
  long *plStack_dc8;
  undefined1 uStack_db1;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined **ppuStack_d78;
  undefined4 uStack_d70;
  undefined2 uStack_d60;
  undefined2 uStack_d5e;
  undefined1 *puStack_d40;
  undefined ***pppuStack_d38;
  long lStack_d30;
  long lStack_d28;
  undefined8 uStack_d20;
  long *plStack_d18;
  long *plStack_d10;
  long lStack_cf8;
  undefined4 uStack_c2c;
  undefined1 *puStack_c28;
  undefined1 *puStack_c20;
  undefined8 uStack_c18;
  undefined1 auStack_c10 [31];
  undefined1 uStack_bf1;
  undefined **appuStack_bf0 [9];
  undefined1 auStack_ba8 [24];
  long *plStack_b90;
  long *plStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  long lStack_ac8;
  undefined4 uStack_a1c;
  undefined1 *puStack_a18;
  undefined1 *puStack_a10;
  undefined8 uStack_a08;
  undefined1 auStack_a00 [31];
  undefined1 uStack_9e1;
  undefined **appuStack_9e0 [9];
  undefined1 auStack_998 [24];
  long *plStack_980;
  long *plStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  long lStack_8b8;
  undefined4 uStack_804;
  long lStack_800;
  long lStack_7f8;
  undefined8 uStack_7f0;
  undefined **ppuStack_7e8;
  undefined4 uStack_7e0;
  undefined4 uStack_7d0;
  double dStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  long lStack_7a0;
  long lStack_798;
  undefined8 uStack_790;
  long *plStack_788;
  long *plStack_780;
  undefined1 uStack_771;
  undefined **ppuStack_770;
  undefined4 uStack_768;
  undefined2 uStack_758;
  undefined2 uStack_756;
  undefined1 *puStack_738;
  undefined ***pppuStack_730;
  long lStack_728;
  long lStack_720;
  undefined8 uStack_718;
  long *plStack_710;
  long *plStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  long lStack_648;
  undefined4 uStack_584;
  long lStack_580;
  long lStack_578;
  undefined8 uStack_570;
  undefined **ppuStack_568;
  undefined4 uStack_560;
  undefined4 uStack_550;
  double dStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  long lStack_520;
  long lStack_518;
  undefined8 uStack_510;
  long *plStack_508;
  long *plStack_500;
  undefined1 uStack_4f1;
  undefined **ppuStack_4f0;
  undefined4 uStack_4e8;
  undefined2 uStack_4d8;
  undefined2 uStack_4d6;
  undefined1 *puStack_4b8;
  undefined ***pppuStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  undefined8 uStack_498;
  long *plStack_490;
  long *plStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  long lStack_3c8;
  undefined4 uStack_348;
  undefined1 uStack_341;
  long lStack_340;
  long lStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long lStack_320;
  undefined **ppuStack_310;
  undefined4 uStack_308;
  undefined4 uStack_2f8;
  double dStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  long *plStack_2b0;
  long *plStack_2a8;
  undefined1 uStack_299;
  undefined **ppuStack_298;
  undefined4 uStack_290;
  undefined2 uStack_280;
  byte bStack_27e;
  byte bStack_27d;
  undefined1 *puStack_260;
  undefined ***pppuStack_258;
  long lStack_250;
  long lStack_248;
  undefined8 uStack_240;
  long *plStack_238;
  long *plStack_230;
  undefined **ppuStack_228;
  undefined4 uStack_220;
  undefined4 uStack_210;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  undefined1 uStack_1b1;
  undefined **ppuStack_1b0;
  undefined4 uStack_1a8;
  undefined2 uStack_198;
  undefined2 uStack_196;
  undefined1 *puStack_178;
  undefined ***pppuStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined **ppuStack_140;
  undefined4 uStack_138;
  undefined2 uStack_128;
  byte bStack_126;
  byte bStack_125;
  undefined ***pppuStack_108;
  undefined ***pppuStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined4 uStack_8c;
  code *pcStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    dVar15 = 0.0;
  }
  else {
    func_0x00010c26f320(puVar2);
    dVar15 = (double)(long)(param_1 * 1000.0);
  }
  _objc_release(puVar2);
  _objc_opt_class(PTR_PTR_1126d5338);
  if (param_2 == (undefined8 *)0x0) {
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_d0,param_2);
  }
  puVar3 = &uStack_1b1;
  FUN_1084ffbe8();
  uStack_220 = 0xf;
  uStack_210 = 0x100;
  ppuStack_228 = &PTR_SUB_110a504b0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  lStack_1d8 = 0;
  lStack_1e0 = 0;
  plStack_1c8 = (long *)0x0;
  uStack_1d0 = 0;
  uStack_1f8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_196 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_1a8 = 10;
  uStack_198 = 0x100;
  ppuStack_1b0 = &PTR_FUN_110a50380;
  pppuStack_170 = &ppuStack_228;
  lStack_160 = 0;
  lStack_168 = 0;
  plStack_150 = (long *)0x0;
  uStack_158 = 0;
  plStack_148 = (long *)0x0;
  puVar4 = &uStack_299;
  puStack_178 = puVar3;
  FUN_1084ff950();
  uStack_308 = 0xf;
  uStack_2f8 = 0x100;
  ppuStack_310 = &PTR_DAT_11086d7d0;
  dVar14 = 0.0;
  uStack_2d0 = 0;
  uStack_2d8 = 0;
  lStack_2c0 = 0;
  lStack_2c8 = 0;
  plStack_2b0 = (long *)0x0;
  uStack_2b8 = 0;
  plStack_2a8 = (long *)0x0;
  bStack_27e = puVar4[0x1a];
  bStack_27d = puVar4[0x1b];
  uStack_290 = 9;
  uStack_280 = 0x100;
  ppuStack_298 = &PTR_DAT_11089b010;
  pppuStack_258 = &ppuStack_310;
  plStack_230 = (long *)0x0;
  lStack_248 = 0;
  lStack_250 = 0;
  plStack_238 = (long *)0x0;
  uStack_240 = 0;
  bStack_126 = (byte)uStack_196 | bStack_27e;
  bStack_125 = uStack_196._1_1_ & bStack_27d;
  uStack_138 = 4;
  uStack_128 = 0x100;
  ppuStack_140 = &PTR_DAT_1108629c8;
  pppuStack_108 = &ppuStack_1b0;
  pppuStack_100 = &ppuStack_298;
  uStack_f0 = 0;
  lStack_f8 = 0;
  plStack_e0 = (long *)0x0;
  uStack_e8 = 0;
  plStack_d8 = (long *)0x0;
  puVar3 = &uStack_341;
  dStack_2e0 = dVar15;
  puStack_260 = puVar4;
  FUN_1084ffa9c();
  uStack_98 = *(undefined8 *)(puVar3 + 0x10);
  uStack_90 = puVar3[0x19];
  uStack_8f = puVar3[0x18];
  uStack_80 = *(undefined8 *)(puVar3 + 0x28);
  uStack_8c = 0;
  pcStack_88 = FUN_1084fd408;
  lStack_338 = 0;
  uStack_330 = 0;
  lStack_340 = 0;
  func_0x000100c435d0(&lStack_340,&uStack_98,&lStack_78,1);
  func_0x000100c436b8(&lStack_328,&lStack_340);
  puVar5 = &uStack_d0;
  pppuVar10 = &ppuStack_140;
  uStack_348 = param_3;
  func_0x000107c310cc(puVar5,pppuVar10,&lStack_328,&uStack_348);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (lStack_328 != 0) {
    lStack_320 = lStack_328;
    __ZdlPv();
  }
  if (lStack_340 != 0) {
    lStack_338 = lStack_340;
    __ZdlPv();
  }
  plVar1 = plStack_d8;
  ppuStack_140 = &PTR_DAT_1108629c8;
  plStack_d8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_e0;
  plStack_e0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_f8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_230;
  ppuStack_298 = &PTR_DAT_11089b010;
  plStack_230 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_238;
  plStack_238 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_250 != 0) {
    lStack_248 = lStack_250;
    __ZdlPv();
  }
  plVar1 = plStack_2a8;
  ppuStack_310 = &PTR_DAT_11086d7d0;
  plStack_2a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_2b0;
  plStack_2b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2c8 != 0) {
    lStack_2c0 = lStack_2c8;
    __ZdlPv();
  }
  plVar1 = plStack_148;
  ppuStack_1b0 = &PTR_FUN_110a50380;
  plStack_148 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_150;
  plStack_150 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_168 != 0) {
    lStack_160 = lStack_168;
    __ZdlPv();
  }
  plVar1 = plStack_1c0;
  ppuStack_228 = &PTR_SUB_110a504b0;
  plStack_1c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1c8;
  plStack_1c8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1e0 != 0) {
    lStack_1d8 = lStack_1e0;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_a8);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  puVar7 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    _objc_release(puVar5);
    _objc_release(param_2);
    __Unwind_Resume();
    lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(pppuVar10);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar2);
    _objc_opt_class(PTR_PTR_1126d9eb8);
    if (puVar7 == (undefined8 *)0x0) {
      uStack_450 = 0;
      uStack_468 = 0;
      uStack_470 = 0;
      uStack_458 = 0;
      uStack_460 = 0;
      uStack_478 = 0;
      uStack_480 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_480,puVar7);
    }
    puVar3 = &uStack_4f1;
    FUN_1085015b8();
    uStack_560 = 0xf;
    uStack_550 = 0x100;
    ppuStack_568 = &PTR_DAT_11086d7d0;
    dVar15 = 0.0;
    uStack_528 = 0;
    uStack_530 = 0;
    lStack_518 = 0;
    lStack_520 = 0;
    plStack_508 = (long *)0x0;
    uStack_510 = 0;
    plStack_500 = (long *)0x0;
    uStack_4d6 = *(undefined2 *)(puVar3 + 0x1a);
    uStack_4e8 = 6;
    uStack_4d8 = 0x100;
    ppuStack_4f0 = &PTR_DAT_11089b010;
    pppuStack_4b0 = &ppuStack_568;
    lStack_4a0 = 0;
    lStack_4a8 = 0;
    plStack_490 = (long *)0x0;
    uStack_498 = 0;
    plStack_488 = (long *)0x0;
    lStack_580 = 0;
    lStack_578 = 0;
    uStack_570 = 0;
    uStack_584 = 0;
    puVar6 = &uStack_480;
    pppuVar9 = &ppuStack_4f0;
    dStack_538 = dVar14 + -3600.0;
    puStack_4b8 = puVar3;
    func_0x000107c310cc(puVar6,pppuVar9,&lStack_580,&uStack_584);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_580 != 0) {
      lStack_578 = lStack_580;
      __ZdlPv();
    }
    plVar1 = plStack_488;
    ppuStack_4f0 = &PTR_DAT_11089b010;
    plStack_488 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_490;
    plStack_490 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_4a8 != 0) {
      lStack_4a0 = lStack_4a8;
      __ZdlPv();
    }
    plVar1 = plStack_500;
    ppuStack_568 = &PTR_DAT_11086d7d0;
    plStack_500 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_508;
    plStack_508 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_520 != 0) {
      lStack_518 = lStack_520;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_458);
    _objc_release(uStack_468);
    _objc_release(uStack_470);
    puVar5 = puVar6;
    func_0x00010bf529e0();
    if (puVar5 != (undefined8 *)0x0) {
      pppuVar8 = pppuVar10;
      func_0x00010c269d40(pppuVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b31c0();
      _objc_release(pppuVar8);
      pppuVar8 = pppuVar10;
      func_0x00010c269d40(pppuVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0(puVar6);
      func_0x00010c0ad6a0(pppuVar8);
      _objc_release(pppuVar8);
      dVar15 = 0.0;
      _objc_retain(puVar6);
      puVar11 = puVar6;
      func_0x00010bf52a60();
      lVar12 = lRam0000000000000000;
      while (puVar11 != (undefined8 *)0x0) {
        puVar13 = (undefined8 *)0x0;
        do {
          if (lRam0000000000000000 != lVar12) {
            _objc_enumerationMutation(puVar6);
          }
          pppuVar9 = *(undefined ****)((long)puVar13 * 8);
          puVar2 = PTR_PTR_1126d9ee0;
          FUN_108501fe8();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40(puVar7);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar2);
          puVar13 = (undefined8 *)((long)puVar13 + 1);
        } while (puVar11 != puVar13);
        puVar11 = puVar6;
        func_0x00010bf52a60();
      }
      _objc_release(puVar6);
    }
    _objc_release(puVar6);
    _objc_release(pppuVar10);
    puVar11 = puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
      return (undefined8 *)(ulong)(puVar5 != (undefined8 *)0x0);
    }
    ___stack_chk_fail();
    _objc_release(puVar6);
    _objc_release(puVar6);
    _objc_release(pppuVar10);
    _objc_release(puVar7);
    __Unwind_Resume();
    lStack_648 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(pppuVar9);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar2);
    _objc_opt_class(PTR_PTR_1126cc378);
    if (puVar11 == (undefined8 *)0x0) {
      uStack_6d0 = 0;
      uStack_6e8 = 0;
      uStack_6f0 = 0;
      uStack_6d8 = 0;
      uStack_6e0 = 0;
      uStack_6f8 = 0;
      uStack_700 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_700,puVar11);
    }
    puVar3 = &uStack_771;
    FUN_108502a2c();
    uStack_7e0 = 0xf;
    dStack_7b8 = dVar15 * 1000.0 + -25200000.0;
    uStack_7d0 = 0x100;
    ppuStack_7e8 = &PTR_DAT_11086d7d0;
    uStack_7a8 = 0;
    uStack_7b0 = 0;
    lStack_798 = 0;
    lStack_7a0 = 0;
    plStack_788 = (long *)0x0;
    uStack_790 = 0;
    plStack_780 = (long *)0x0;
    uStack_756 = *(undefined2 *)(puVar3 + 0x1a);
    uStack_768 = 6;
    uStack_758 = 0x100;
    ppuStack_770 = &PTR_DAT_11089b010;
    pppuStack_730 = &ppuStack_7e8;
    lStack_720 = 0;
    lStack_728 = 0;
    plStack_710 = (long *)0x0;
    uStack_718 = 0;
    plStack_708 = (long *)0x0;
    lStack_800 = 0;
    lStack_7f8 = 0;
    uStack_7f0 = 0;
    uStack_804 = 0;
    puVar6 = &uStack_700;
    pppuVar10 = &ppuStack_770;
    puStack_738 = puVar3;
    func_0x000107c310cc(puVar6,pppuVar10,&lStack_800,&uStack_804);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_800 != 0) {
      lStack_7f8 = lStack_800;
      __ZdlPv();
    }
    plVar1 = plStack_708;
    ppuStack_770 = &PTR_DAT_11089b010;
    plStack_708 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_710;
    plStack_710 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_728 != 0) {
      lStack_720 = lStack_728;
      __ZdlPv();
    }
    plVar1 = plStack_780;
    ppuStack_7e8 = &PTR_DAT_11086d7d0;
    plStack_780 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_788;
    plStack_788 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_7a0 != 0) {
      lStack_798 = lStack_7a0;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_6d8);
    _objc_release(uStack_6e8);
    _objc_release(uStack_6f0);
    puVar5 = puVar6;
    func_0x00010bf529e0();
    if (puVar5 != (undefined8 *)0x0) {
      pppuVar8 = pppuVar9;
      func_0x00010c269d40(pppuVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b31c0();
      _objc_release(pppuVar8);
      pppuVar8 = pppuVar9;
      func_0x00010c269d40(pppuVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0(puVar6);
      func_0x00010c0ad6a0(pppuVar8);
      _objc_release(pppuVar8);
      _objc_retain(puVar6);
      puVar7 = puVar6;
      func_0x00010bf52a60();
      lVar12 = lRam0000000000000000;
      while (puVar7 != (undefined8 *)0x0) {
        puVar13 = (undefined8 *)0x0;
        do {
          if (lRam0000000000000000 != lVar12) {
            _objc_enumerationMutation(puVar6);
          }
          pppuVar10 = *(undefined ****)((long)puVar13 * 8);
          puVar2 = PTR_PTR_1126d9ef8;
          FUN_108503618();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40(puVar11);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar2);
          puVar13 = (undefined8 *)((long)puVar13 + 1);
        } while (puVar7 != puVar13);
        puVar7 = puVar6;
        func_0x00010bf52a60();
      }
      _objc_release(puVar6);
    }
    _objc_release(puVar6);
    _objc_release(pppuVar9);
    puVar7 = puVar11;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_648) {
      return (undefined8 *)(ulong)(puVar5 != (undefined8 *)0x0);
    }
    ___stack_chk_fail();
    _objc_release(puVar6);
    _objc_release(puVar6);
    _objc_release(pppuVar9);
    _objc_release(puVar11);
    __Unwind_Resume();
    lStack_8b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(pppuVar10);
    _objc_opt_class(PTR_PTR_1126d6060);
    if (puVar7 == (undefined8 *)0x0) {
      uStack_940 = 0;
      uStack_958 = 0;
      uStack_960 = 0;
      uStack_948 = 0;
      uStack_950 = 0;
      uStack_968 = 0;
      uStack_970 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_970,puVar7);
    }
    puVar3 = &uStack_9e1;
    FUN_1084fde00(puVar3);
    func_0x000100aac340(auStack_a00,pppuVar10);
    func_0x000107c281a0(appuStack_9e0,0xc,puVar3,auStack_a00);
    puStack_a18 = (undefined1 *)0x0;
    puStack_a10 = (undefined1 *)0x0;
    uStack_a08 = 0;
    uStack_a1c = 0;
    puVar6 = &uStack_970;
    pppuVar9 = appuStack_9e0;
    func_0x000107c310cc(puVar6,pppuVar9,&puStack_a18,&uStack_a1c);
    _objc_retainAutoreleasedReturnValue();
    if (puStack_a18 != (undefined1 *)0x0) {
      puStack_a10 = puStack_a18;
      __ZdlPv();
    }
    plVar1 = plStack_978;
    appuStack_9e0[0] = &PTR_SUB_110862700;
    plStack_978 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_980;
    plStack_980 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_a18 = auStack_998;
    func_0x000107c27dd4(&puStack_a18);
    puStack_a18 = auStack_a00;
    func_0x000107c27dd4(&puStack_a18);
    func_0x000107c27da8(&uStack_948);
    _objc_release(uStack_958);
    _objc_release(uStack_960);
    _objc_retain(puVar6);
    puVar5 = puVar6;
    func_0x00010bf52a60();
    lVar12 = lRam0000000000000000;
    while (puVar5 != (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(puVar6);
        }
        pppuVar9 = *(undefined ****)((long)puVar11 * 8);
        puVar2 = PTR_PTR_1126d9ef0;
        FUN_1084fee94();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(puVar7);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar2);
        puVar11 = (undefined8 *)((long)puVar11 + 1);
      } while (puVar5 != puVar11);
      puVar5 = puVar6;
      func_0x00010bf52a60();
    }
    _objc_release(puVar6);
    _objc_release(puVar6);
    _objc_release(pppuVar10);
    puVar5 = puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8b8) {
      return puVar5;
    }
    ___stack_chk_fail();
    _objc_release(puVar6);
    _objc_release(puVar6);
    _objc_release(pppuVar10);
    _objc_release(puVar7);
    __Unwind_Resume();
    lStack_ac8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(pppuVar9);
    _objc_opt_class(PTR_PTR_1126d5338);
    if (puVar5 == (undefined8 *)0x0) {
      uStack_b50 = 0;
      uStack_b68 = 0;
      uStack_b70 = 0;
      uStack_b58 = 0;
      uStack_b60 = 0;
      uStack_b78 = 0;
      uStack_b80 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_b80,puVar5);
    }
    puVar3 = &uStack_bf1;
    FUN_1084ff7d8(puVar3);
    func_0x000100aac340(auStack_c10,pppuVar9);
    func_0x000107c281a0(appuStack_bf0,0xc,puVar3,auStack_c10);
    puStack_c28 = (undefined1 *)0x0;
    puStack_c20 = (undefined1 *)0x0;
    uStack_c18 = 0;
    uStack_c2c = 0;
    puVar6 = &uStack_b80;
    func_0x000107c310cc(puVar6,appuStack_bf0,&puStack_c28,&uStack_c2c);
    _objc_retainAutoreleasedReturnValue();
    if (puStack_c28 != (undefined1 *)0x0) {
      puStack_c20 = puStack_c28;
      __ZdlPv();
    }
    plVar1 = plStack_b88;
    appuStack_bf0[0] = &PTR_SUB_110862700;
    plStack_b88 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_b90;
    plStack_b90 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_c28 = auStack_ba8;
    func_0x000107c27dd4(&puStack_c28);
    puStack_c28 = auStack_c10;
    func_0x000107c27dd4(&puStack_c28);
    func_0x000107c27da8(&uStack_b58);
    _objc_release(uStack_b68);
    _objc_release(uStack_b70);
    dVar15 = 0.0;
    _objc_retain(puVar6);
    puVar7 = puVar6;
    func_0x00010bf52a60();
    lVar12 = lRam0000000000000000;
    while (puVar7 != (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(puVar6);
        }
        puVar2 = PTR_PTR_1126d9ee8;
        FUN_108500a60(PTR_PTR_1126d9ee8,*(undefined8 *)((long)puVar11 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(puVar5);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar2);
        puVar11 = (undefined8 *)((long)puVar11 + 1);
      } while (puVar7 != puVar11);
      puVar7 = puVar6;
      func_0x00010bf52a60();
    }
    _objc_release(puVar6);
    _objc_release(puVar6);
    _objc_release(pppuVar9);
    puVar7 = puVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_ac8) {
      return puVar7;
    }
    ___stack_chk_fail();
    _objc_release(puVar6);
    _objc_release(puVar6);
    _objc_release(pppuVar9);
    _objc_release(puVar5);
    __Unwind_Resume();
    lStack_cf8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(puVar7);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar2);
    _objc_opt_class(PTR_PTR_1126d5338);
    if (puVar7 == (undefined8 *)0x0) {
      uStack_d80 = 0;
      uStack_d98 = 0;
      uStack_da0 = 0;
      uStack_d88 = 0;
      uStack_d90 = 0;
      uStack_da8 = 0;
      uStack_db0 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_db0,puVar7);
    }
    puVar3 = &uStack_db1;
    FUN_1084ff950();
    uStack_e28 = CONCAT44(uStack_e28._4_4_,0xf);
    uStack_e18 = CONCAT44(uStack_e18._4_4_,0x100);
    ppuStack_e30 = &PTR_DAT_11086d7d0;
    uStack_df0 = 0;
    uStack_df8 = 0;
    lStack_de0 = 0;
    lStack_de8 = 0;
    plStack_dd0 = (long *)0x0;
    uStack_dd8 = 0;
    plStack_dc8 = (long *)0x0;
    uStack_d5e = *(undefined2 *)(puVar3 + 0x1a);
    uStack_d70 = 6;
    uStack_d60 = 0x100;
    ppuStack_d78 = &PTR_DAT_11089b010;
    lStack_d28 = 0;
    lStack_d30 = 0;
    plStack_d18 = (long *)0x0;
    uStack_d20 = 0;
    plStack_d10 = (long *)0x0;
    lStack_e48 = 0;
    lStack_e40 = 0;
    uStack_e38 = 0;
    uStack_e4c = 0;
    puVar6 = &uStack_db0;
    dStack_e00 = dVar15 * 1000.0;
    puStack_d40 = puVar3;
    pppuStack_d38 = &ppuStack_e30;
    func_0x000107c310cc(puVar6,&ppuStack_d78,&lStack_e48,&uStack_e4c);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_e48 != 0) {
      lStack_e40 = lStack_e48;
      __ZdlPv();
    }
    plVar1 = plStack_d10;
    ppuStack_d78 = &PTR_DAT_11089b010;
    plStack_d10 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_d18;
    plStack_d18 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_d30 != 0) {
      lStack_d28 = lStack_d30;
      __ZdlPv();
    }
    plVar1 = plStack_dc8;
    ppuStack_e30 = &PTR_DAT_11086d7d0;
    plStack_dc8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_dd0;
    plStack_dd0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_de8 != 0) {
      lStack_de0 = lStack_de8;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_d88);
    _objc_release(uStack_d98);
    _objc_release(uStack_da0);
    uStack_e28 = 0;
    ppuStack_e30 = (undefined **)0x0;
    uStack_e18 = 0;
    plStack_e20 = (long *)0x0;
    uStack_e08 = 0;
    uStack_e10 = 0;
    uStack_df8 = 0;
    dStack_e00 = 0.0;
    _objc_retain(puVar6);
    puVar5 = puVar6;
    func_0x00010bf52a60();
    if (puVar5 != (undefined8 *)0x0) {
      lVar12 = *plStack_e20;
      do {
        puVar11 = (undefined8 *)0x0;
        do {
          if (*plStack_e20 != lVar12) {
            _objc_enumerationMutation(puVar6);
          }
          puVar2 = PTR_PTR_1126d9ee8;
          FUN_108500a60(PTR_PTR_1126d9ee8,*(undefined8 *)(uStack_e28 + (long)puVar11 * 8));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40(puVar7);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar2);
          puVar11 = (undefined8 *)((long)puVar11 + 1);
        } while (puVar5 != puVar11);
        puVar5 = puVar6;
        func_0x00010bf52a60();
      } while (puVar5 != (undefined8 *)0x0);
    }
    _objc_release(puVar6);
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_opt_class(PTR_PTR_1126d5338);
    if (puVar7 == (undefined8 *)0x0) {
      uStack_d80 = 0;
      uStack_d98 = 0;
      uStack_da0 = 0;
      uStack_d88 = 0;
      uStack_d90 = 0;
      uStack_da8 = 0;
      uStack_db0 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_db0,puVar7);
    }
    puVar3 = &uStack_db1;
    FUN_1084ffbe8();
    uStack_e28 = CONCAT44(uStack_e28._4_4_,0xf);
    uStack_e18 = CONCAT44(uStack_e18._4_4_,0x100);
    dStack_e00 = 4.94065645841247e-324;
    ppuStack_e30 = &PTR_SUB_110a504b0;
    uStack_df0 = 0;
    uStack_df8 = 0;
    lStack_de0 = 0;
    lStack_de8 = 0;
    plStack_dd0 = (long *)0x0;
    uStack_dd8 = 0;
    plStack_dc8 = (long *)0x0;
    uStack_d5e = *(undefined2 *)(puVar3 + 0x1a);
    uStack_d70 = 10;
    uStack_d60 = 0x100;
    ppuStack_d78 = &PTR_FUN_110a50380;
    pppuStack_d38 = &ppuStack_e30;
    lStack_d28 = 0;
    lStack_d30 = 0;
    plStack_d18 = (long *)0x0;
    uStack_d20 = 0;
    plStack_d10 = (long *)0x0;
    lStack_e48 = 0;
    lStack_e40 = 0;
    uStack_e38 = 0;
    uStack_e4c = 0;
    puVar5 = &uStack_db0;
    puStack_d40 = puVar3;
    func_0x000107c310cc(puVar5,&ppuStack_d78,&lStack_e48,&uStack_e4c);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_e48 != 0) {
      lStack_e40 = lStack_e48;
      __ZdlPv();
    }
    plVar1 = plStack_d10;
    ppuStack_d78 = &PTR_FUN_110a50380;
    plStack_d10 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_d18;
    plStack_d18 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_d30 != 0) {
      lStack_d28 = lStack_d30;
      __ZdlPv();
    }
    plVar1 = plStack_dc8;
    ppuStack_e30 = &PTR_SUB_110a504b0;
    plStack_dc8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_dd0;
    plStack_dd0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_de8 != 0) {
      lStack_de0 = lStack_de8;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_d88);
    _objc_release(uStack_d98);
    _objc_release(uStack_da0);
    puVar11 = puVar5;
    func_0x00010bf0a540(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar11;
    func_0x000100504554();
    _objc_release(puVar11);
    FUN_1084f5cf4(puVar7,puVar6,0);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar11 = puVar7;
    _objc_release(puVar7);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_cf8) {
      return puVar11;
    }
    ___stack_chk_fail();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar7);
    __Unwind_Resume(puVar11);
    func_0x00010c241220(puVar6);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar6;
}



/* Entry: 1084f7f24; end: 1084f8363;  */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x0001084f862c */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined8 * FUN_1084f7f24(double param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  double dVar14;
  undefined4 uStack_afc;
  long lStack_af8;
  long lStack_af0;
  undefined8 uStack_ae8;
  undefined **ppuStack_ae0;
  undefined8 uStack_ad8;
  long *plStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  double dStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  long lStack_a98;
  long lStack_a90;
  undefined8 uStack_a88;
  long *plStack_a80;
  long *plStack_a78;
  undefined1 uStack_a61;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined **ppuStack_a28;
  undefined4 uStack_a20;
  undefined2 uStack_a10;
  undefined2 uStack_a0e;
  undefined1 *puStack_9f0;
  undefined ***pppuStack_9e8;
  long lStack_9e0;
  long lStack_9d8;
  undefined8 uStack_9d0;
  long *plStack_9c8;
  long *plStack_9c0;
  long lStack_9a8;
  undefined4 uStack_8dc;
  undefined1 *puStack_8d8;
  undefined1 *puStack_8d0;
  undefined8 uStack_8c8;
  undefined1 auStack_8c0 [31];
  undefined1 uStack_8a1;
  undefined **appuStack_8a0 [9];
  undefined1 auStack_858 [24];
  long *plStack_840;
  long *plStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  long lStack_778;
  undefined4 uStack_6cc;
  undefined1 *puStack_6c8;
  undefined1 *puStack_6c0;
  undefined8 uStack_6b8;
  undefined1 auStack_6b0 [31];
  undefined1 uStack_691;
  undefined **appuStack_690 [9];
  undefined1 auStack_648 [24];
  long *plStack_630;
  long *plStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  long lStack_568;
  undefined4 uStack_4b4;
  long lStack_4b0;
  long lStack_4a8;
  undefined8 uStack_4a0;
  undefined **ppuStack_498;
  undefined4 uStack_490;
  undefined4 uStack_480;
  double dStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  long lStack_450;
  long lStack_448;
  undefined8 uStack_440;
  long *plStack_438;
  long *plStack_430;
  undefined1 uStack_421;
  undefined **ppuStack_420;
  undefined4 uStack_418;
  undefined2 uStack_408;
  undefined2 uStack_406;
  undefined1 *puStack_3e8;
  undefined ***pppuStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  undefined8 uStack_3c8;
  long *plStack_3c0;
  long *plStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long lStack_2f8;
  undefined4 uStack_234;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined **ppuStack_218;
  undefined4 uStack_210;
  undefined4 uStack_200;
  double dStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  undefined1 uStack_1a1;
  undefined **ppuStack_1a0;
  undefined4 uStack_198;
  undefined2 uStack_188;
  undefined2 uStack_186;
  undefined1 *puStack_168;
  undefined ***pppuStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  _objc_opt_class(PTR_PTR_1126d9eb8);
  if (param_2 == (undefined8 *)0x0) {
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_130,param_2);
  }
  puVar3 = &uStack_1a1;
  FUN_1085015b8();
  uStack_210 = 0xf;
  uStack_200 = 0x100;
  ppuStack_218 = &PTR_DAT_11086d7d0;
  dVar14 = 0.0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  lStack_1c8 = 0;
  lStack_1d0 = 0;
  plStack_1b8 = (long *)0x0;
  uStack_1c0 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_186 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_198 = 6;
  uStack_188 = 0x100;
  ppuStack_1a0 = &PTR_DAT_11089b010;
  pppuStack_160 = &ppuStack_218;
  lStack_150 = 0;
  lStack_158 = 0;
  plStack_140 = (long *)0x0;
  uStack_148 = 0;
  plStack_138 = (long *)0x0;
  lStack_230 = 0;
  lStack_228 = 0;
  uStack_220 = 0;
  uStack_234 = 0;
  puVar4 = &uStack_130;
  pppuVar8 = &ppuStack_1a0;
  dStack_1e8 = param_1 + -3600.0;
  puStack_168 = puVar3;
  func_0x000107c310cc(puVar4,pppuVar8,&lStack_230,&uStack_234);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_230 != 0) {
    lStack_228 = lStack_230;
    __ZdlPv();
  }
  plVar1 = plStack_138;
  ppuStack_1a0 = &PTR_DAT_11089b010;
  plStack_138 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_140;
  plStack_140 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_158 != 0) {
    lStack_150 = lStack_158;
    __ZdlPv();
  }
  plVar1 = plStack_1b0;
  ppuStack_218 = &PTR_DAT_11086d7d0;
  plStack_1b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1b8;
  plStack_1b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1d0 != 0) {
    lStack_1c8 = lStack_1d0;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_108);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  puVar5 = puVar4;
  func_0x00010bf529e0();
  if (puVar5 != (undefined8 *)0x0) {
    uVar6 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b31c0();
    _objc_release(uVar6);
    uVar6 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(puVar4);
    func_0x00010c0ad6a0(uVar6);
    _objc_release(uVar6);
    dVar14 = 0.0;
    _objc_retain(puVar4);
    puVar10 = puVar4;
    func_0x00010bf52a60();
    lVar11 = lRam0000000000000000;
    while (puVar10 != (undefined8 *)0x0) {
      puVar12 = (undefined8 *)0x0;
      do {
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(puVar4);
        }
        pppuVar8 = *(undefined ****)((long)puVar12 * 8);
        puVar2 = PTR_PTR_1126d9ee0;
        FUN_108501fe8();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(param_2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar2);
        puVar12 = (undefined8 *)((long)puVar12 + 1);
      } while (puVar10 != puVar12);
      puVar10 = puVar4;
      func_0x00010bf52a60();
    }
    _objc_release(puVar4);
  }
  _objc_release(puVar4);
  _objc_release(param_3);
  puVar10 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return (undefined8 *)(ulong)(puVar5 != (undefined8 *)0x0);
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(pppuVar8);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  _objc_opt_class(PTR_PTR_1126cc378);
  if (puVar10 == (undefined8 *)0x0) {
    uStack_380 = 0;
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_388 = 0;
    uStack_390 = 0;
    uStack_3a8 = 0;
    uStack_3b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_3b0,puVar10);
  }
  puVar3 = &uStack_421;
  FUN_108502a2c();
  uStack_490 = 0xf;
  dStack_468 = dVar14 * 1000.0 + -25200000.0;
  uStack_480 = 0x100;
  ppuStack_498 = &PTR_DAT_11086d7d0;
  uStack_458 = 0;
  uStack_460 = 0;
  lStack_448 = 0;
  lStack_450 = 0;
  plStack_438 = (long *)0x0;
  uStack_440 = 0;
  plStack_430 = (long *)0x0;
  uStack_406 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_418 = 6;
  uStack_408 = 0x100;
  ppuStack_420 = &PTR_DAT_11089b010;
  pppuStack_3e0 = &ppuStack_498;
  lStack_3d0 = 0;
  lStack_3d8 = 0;
  plStack_3c0 = (long *)0x0;
  uStack_3c8 = 0;
  plStack_3b8 = (long *)0x0;
  lStack_4b0 = 0;
  lStack_4a8 = 0;
  uStack_4a0 = 0;
  uStack_4b4 = 0;
  puVar4 = &uStack_3b0;
  pppuVar9 = &ppuStack_420;
  puStack_3e8 = puVar3;
  func_0x000107c310cc(puVar4,pppuVar9,&lStack_4b0,&uStack_4b4);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_4b0 != 0) {
    lStack_4a8 = lStack_4b0;
    __ZdlPv();
  }
  plVar1 = plStack_3b8;
  ppuStack_420 = &PTR_DAT_11089b010;
  plStack_3b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_3c0;
  plStack_3c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_3d8 != 0) {
    lStack_3d0 = lStack_3d8;
    __ZdlPv();
  }
  plVar1 = plStack_430;
  ppuStack_498 = &PTR_DAT_11086d7d0;
  plStack_430 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_438;
  plStack_438 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_450 != 0) {
    lStack_448 = lStack_450;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_388);
  _objc_release(uStack_398);
  _objc_release(uStack_3a0);
  puVar5 = puVar4;
  func_0x00010bf529e0();
  if (puVar5 != (undefined8 *)0x0) {
    pppuVar7 = pppuVar8;
    func_0x00010c269d40(pppuVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b31c0();
    _objc_release(pppuVar7);
    pppuVar7 = pppuVar8;
    func_0x00010c269d40(pppuVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(puVar4);
    func_0x00010c0ad6a0(pppuVar7);
    _objc_release(pppuVar7);
    _objc_retain(puVar4);
    puVar12 = puVar4;
    func_0x00010bf52a60();
    lVar11 = lRam0000000000000000;
    while (puVar12 != (undefined8 *)0x0) {
      puVar13 = (undefined8 *)0x0;
      do {
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(puVar4);
        }
        pppuVar9 = *(undefined ****)((long)puVar13 * 8);
        puVar2 = PTR_PTR_1126d9ef8;
        FUN_108503618();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(puVar10);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar2);
        puVar13 = (undefined8 *)((long)puVar13 + 1);
      } while (puVar12 != puVar13);
      puVar12 = puVar4;
      func_0x00010bf52a60();
    }
    _objc_release(puVar4);
  }
  _objc_release(puVar4);
  _objc_release(pppuVar8);
  puVar12 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f8) {
    return (undefined8 *)(ulong)(puVar5 != (undefined8 *)0x0);
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(pppuVar8);
  _objc_release(puVar10);
  __Unwind_Resume();
  lStack_568 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(pppuVar9);
  _objc_opt_class(PTR_PTR_1126d6060);
  if (puVar12 == (undefined8 *)0x0) {
    uStack_5f0 = 0;
    uStack_608 = 0;
    uStack_610 = 0;
    uStack_5f8 = 0;
    uStack_600 = 0;
    uStack_618 = 0;
    uStack_620 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_620,puVar12);
  }
  puVar3 = &uStack_691;
  FUN_1084fde00(puVar3);
  func_0x000100aac340(auStack_6b0,pppuVar9);
  func_0x000107c281a0(appuStack_690,0xc,puVar3,auStack_6b0);
  puStack_6c8 = (undefined1 *)0x0;
  puStack_6c0 = (undefined1 *)0x0;
  uStack_6b8 = 0;
  uStack_6cc = 0;
  puVar4 = &uStack_620;
  pppuVar8 = appuStack_690;
  func_0x000107c310cc(puVar4,pppuVar8,&puStack_6c8,&uStack_6cc);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_6c8 != (undefined1 *)0x0) {
    puStack_6c0 = puStack_6c8;
    __ZdlPv();
  }
  plVar1 = plStack_628;
  appuStack_690[0] = &PTR_SUB_110862700;
  plStack_628 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_630;
  plStack_630 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_6c8 = auStack_648;
  func_0x000107c27dd4(&puStack_6c8);
  puStack_6c8 = auStack_6b0;
  func_0x000107c27dd4(&puStack_6c8);
  func_0x000107c27da8(&uStack_5f8);
  _objc_release(uStack_608);
  _objc_release(uStack_610);
  _objc_retain(puVar4);
  puVar5 = puVar4;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  while (puVar5 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar11) {
        _objc_enumerationMutation(puVar4);
      }
      pppuVar8 = *(undefined ****)((long)puVar10 * 8);
      puVar2 = PTR_PTR_1126d9ef0;
      FUN_1084fee94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(puVar12);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar10 = (undefined8 *)((long)puVar10 + 1);
    } while (puVar5 != puVar10);
    puVar5 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(pppuVar9);
  puVar5 = puVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_568) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(pppuVar9);
  _objc_release(puVar12);
  __Unwind_Resume();
  lStack_778 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(pppuVar8);
  _objc_opt_class(PTR_PTR_1126d5338);
  if (puVar5 == (undefined8 *)0x0) {
    uStack_800 = 0;
    uStack_818 = 0;
    uStack_820 = 0;
    uStack_808 = 0;
    uStack_810 = 0;
    uStack_828 = 0;
    uStack_830 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_830,puVar5);
  }
  puVar3 = &uStack_8a1;
  FUN_1084ff7d8(puVar3);
  func_0x000100aac340(auStack_8c0,pppuVar8);
  func_0x000107c281a0(appuStack_8a0,0xc,puVar3,auStack_8c0);
  puStack_8d8 = (undefined1 *)0x0;
  puStack_8d0 = (undefined1 *)0x0;
  uStack_8c8 = 0;
  uStack_8dc = 0;
  puVar4 = &uStack_830;
  func_0x000107c310cc(puVar4,appuStack_8a0,&puStack_8d8,&uStack_8dc);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_8d8 != (undefined1 *)0x0) {
    puStack_8d0 = puStack_8d8;
    __ZdlPv();
  }
  plVar1 = plStack_838;
  appuStack_8a0[0] = &PTR_SUB_110862700;
  plStack_838 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_840;
  plStack_840 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_8d8 = auStack_858;
  func_0x000107c27dd4(&puStack_8d8);
  puStack_8d8 = auStack_8c0;
  func_0x000107c27dd4(&puStack_8d8);
  func_0x000107c27da8(&uStack_808);
  _objc_release(uStack_818);
  _objc_release(uStack_820);
  dVar14 = 0.0;
  _objc_retain(puVar4);
  puVar10 = puVar4;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  while (puVar10 != (undefined8 *)0x0) {
    puVar12 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar11) {
        _objc_enumerationMutation(puVar4);
      }
      puVar2 = PTR_PTR_1126d9ee8;
      FUN_108500a60(PTR_PTR_1126d9ee8,*(undefined8 *)((long)puVar12 * 8));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(puVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar12 = (undefined8 *)((long)puVar12 + 1);
    } while (puVar10 != puVar12);
    puVar10 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(pppuVar8);
  puVar10 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_778) {
    return puVar10;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(pppuVar8);
  _objc_release(puVar5);
  __Unwind_Resume();
  lStack_9a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(puVar10);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  _objc_opt_class(PTR_PTR_1126d5338);
  if (puVar10 == (undefined8 *)0x0) {
    uStack_a30 = 0;
    uStack_a48 = 0;
    uStack_a50 = 0;
    uStack_a38 = 0;
    uStack_a40 = 0;
    uStack_a58 = 0;
    uStack_a60 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a60,puVar10);
  }
  puVar3 = &uStack_a61;
  FUN_1084ff950();
  uStack_ad8 = CONCAT44(uStack_ad8._4_4_,0xf);
  uStack_ac8 = CONCAT44(uStack_ac8._4_4_,0x100);
  ppuStack_ae0 = &PTR_DAT_11086d7d0;
  uStack_aa0 = 0;
  uStack_aa8 = 0;
  lStack_a90 = 0;
  lStack_a98 = 0;
  plStack_a80 = (long *)0x0;
  uStack_a88 = 0;
  plStack_a78 = (long *)0x0;
  uStack_a0e = *(undefined2 *)(puVar3 + 0x1a);
  uStack_a20 = 6;
  uStack_a10 = 0x100;
  ppuStack_a28 = &PTR_DAT_11089b010;
  lStack_9d8 = 0;
  lStack_9e0 = 0;
  plStack_9c8 = (long *)0x0;
  uStack_9d0 = 0;
  plStack_9c0 = (long *)0x0;
  lStack_af8 = 0;
  lStack_af0 = 0;
  uStack_ae8 = 0;
  uStack_afc = 0;
  puVar4 = &uStack_a60;
  dStack_ab0 = dVar14 * 1000.0;
  puStack_9f0 = puVar3;
  pppuStack_9e8 = &ppuStack_ae0;
  func_0x000107c310cc(puVar4,&ppuStack_a28,&lStack_af8,&uStack_afc);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_af8 != 0) {
    lStack_af0 = lStack_af8;
    __ZdlPv();
  }
  plVar1 = plStack_9c0;
  ppuStack_a28 = &PTR_DAT_11089b010;
  plStack_9c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_9c8;
  plStack_9c8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_9e0 != 0) {
    lStack_9d8 = lStack_9e0;
    __ZdlPv();
  }
  plVar1 = plStack_a78;
  ppuStack_ae0 = &PTR_DAT_11086d7d0;
  plStack_a78 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a80;
  plStack_a80 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_a98 != 0) {
    lStack_a90 = lStack_a98;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_a38);
  _objc_release(uStack_a48);
  _objc_release(uStack_a50);
  uStack_ad8 = 0;
  ppuStack_ae0 = (undefined **)0x0;
  uStack_ac8 = 0;
  plStack_ad0 = (long *)0x0;
  uStack_ab8 = 0;
  uStack_ac0 = 0;
  uStack_aa8 = 0;
  dStack_ab0 = 0.0;
  _objc_retain(puVar4);
  puVar5 = puVar4;
  func_0x00010bf52a60();
  if (puVar5 != (undefined8 *)0x0) {
    lVar11 = *plStack_ad0;
    do {
      puVar12 = (undefined8 *)0x0;
      do {
        if (*plStack_ad0 != lVar11) {
          _objc_enumerationMutation(puVar4);
        }
        puVar2 = PTR_PTR_1126d9ee8;
        FUN_108500a60(PTR_PTR_1126d9ee8,*(undefined8 *)(uStack_ad8 + (long)puVar12 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(puVar10);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar2);
        puVar12 = (undefined8 *)((long)puVar12 + 1);
      } while (puVar5 != puVar12);
      puVar5 = puVar4;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined8 *)0x0);
  }
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(puVar10);
  _objc_opt_class(PTR_PTR_1126d5338);
  if (puVar10 == (undefined8 *)0x0) {
    uStack_a30 = 0;
    uStack_a48 = 0;
    uStack_a50 = 0;
    uStack_a38 = 0;
    uStack_a40 = 0;
    uStack_a58 = 0;
    uStack_a60 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a60,puVar10);
  }
  puVar3 = &uStack_a61;
  FUN_1084ffbe8();
  uStack_ad8 = CONCAT44(uStack_ad8._4_4_,0xf);
  uStack_ac8 = CONCAT44(uStack_ac8._4_4_,0x100);
  dStack_ab0 = 4.94065645841247e-324;
  ppuStack_ae0 = &PTR_SUB_110a504b0;
  uStack_aa0 = 0;
  uStack_aa8 = 0;
  lStack_a90 = 0;
  lStack_a98 = 0;
  plStack_a80 = (long *)0x0;
  uStack_a88 = 0;
  plStack_a78 = (long *)0x0;
  uStack_a0e = *(undefined2 *)(puVar3 + 0x1a);
  uStack_a20 = 10;
  uStack_a10 = 0x100;
  ppuStack_a28 = &PTR_FUN_110a50380;
  pppuStack_9e8 = &ppuStack_ae0;
  lStack_9d8 = 0;
  lStack_9e0 = 0;
  plStack_9c8 = (long *)0x0;
  uStack_9d0 = 0;
  plStack_9c0 = (long *)0x0;
  lStack_af8 = 0;
  lStack_af0 = 0;
  uStack_ae8 = 0;
  uStack_afc = 0;
  puVar4 = &uStack_a60;
  puStack_9f0 = puVar3;
  func_0x000107c310cc(puVar4,&ppuStack_a28,&lStack_af8,&uStack_afc);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_af8 != 0) {
    lStack_af0 = lStack_af8;
    __ZdlPv();
  }
  plVar1 = plStack_9c0;
  ppuStack_a28 = &PTR_FUN_110a50380;
  plStack_9c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_9c8;
  plStack_9c8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_9e0 != 0) {
    lStack_9d8 = lStack_9e0;
    __ZdlPv();
  }
  plVar1 = plStack_a78;
  ppuStack_ae0 = &PTR_SUB_110a504b0;
  plStack_a78 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a80;
  plStack_a80 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_a98 != 0) {
    lStack_a90 = lStack_a98;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_a38);
  _objc_release(uStack_a48);
  _objc_release(uStack_a50);
  puVar5 = puVar4;
  func_0x00010bf0a540(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar5;
  func_0x000100504554();
  _objc_release(puVar5);
  FUN_1084f5cf4(puVar10,puVar12,0);
  _objc_release(puVar12);
  _objc_release(puVar4);
  puVar5 = puVar10;
  _objc_release(puVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9a8) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_release(puVar12);
  _objc_release(puVar4);
  _objc_release(puVar10);
  __Unwind_Resume(puVar5);
  func_0x00010c241220(puVar12);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar12;
}



/* Entry: 1084f8364; end: 1084f87af;  */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x0001084f862c */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined8 * FUN_1084f8364(double param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  long lVar10;
  undefined8 *puVar11;
  double dVar12;
  undefined4 uStack_87c;
  long lStack_878;
  long lStack_870;
  undefined8 uStack_868;
  undefined **ppuStack_860;
  undefined8 uStack_858;
  long *plStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  double dStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  long lStack_818;
  long lStack_810;
  undefined8 uStack_808;
  long *plStack_800;
  long *plStack_7f8;
  undefined1 uStack_7e1;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined **ppuStack_7a8;
  undefined4 uStack_7a0;
  undefined2 uStack_790;
  undefined2 uStack_78e;
  undefined1 *puStack_770;
  undefined ***pppuStack_768;
  long lStack_760;
  long lStack_758;
  undefined8 uStack_750;
  long *plStack_748;
  long *plStack_740;
  long lStack_728;
  undefined4 uStack_65c;
  undefined1 *puStack_658;
  undefined1 *puStack_650;
  undefined8 uStack_648;
  undefined1 auStack_640 [31];
  undefined1 uStack_621;
  undefined **appuStack_620 [9];
  undefined1 auStack_5d8 [24];
  long *plStack_5c0;
  long *plStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  long lStack_4f8;
  undefined4 uStack_44c;
  undefined1 *puStack_448;
  undefined1 *puStack_440;
  undefined8 uStack_438;
  undefined1 auStack_430 [31];
  undefined1 uStack_411;
  undefined **appuStack_410 [9];
  undefined1 auStack_3c8 [24];
  long *plStack_3b0;
  long *plStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  long lStack_2e8;
  undefined4 uStack_234;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined **ppuStack_218;
  undefined4 uStack_210;
  undefined4 uStack_200;
  double dStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  undefined1 uStack_1a1;
  undefined **ppuStack_1a0;
  undefined4 uStack_198;
  undefined2 uStack_188;
  undefined2 uStack_186;
  undefined1 *puStack_168;
  undefined ***pppuStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  _objc_opt_class(PTR_PTR_1126cc378);
  if (param_2 == (undefined8 *)0x0) {
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_130,param_2);
  }
  puVar3 = &uStack_1a1;
  FUN_108502a2c();
  uStack_210 = 0xf;
  dStack_1e8 = param_1 * 1000.0 + -25200000.0;
  uStack_200 = 0x100;
  ppuStack_218 = &PTR_DAT_11086d7d0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  lStack_1c8 = 0;
  lStack_1d0 = 0;
  plStack_1b8 = (long *)0x0;
  uStack_1c0 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_186 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_198 = 6;
  uStack_188 = 0x100;
  ppuStack_1a0 = &PTR_DAT_11089b010;
  pppuStack_160 = &ppuStack_218;
  lStack_150 = 0;
  lStack_158 = 0;
  plStack_140 = (long *)0x0;
  uStack_148 = 0;
  plStack_138 = (long *)0x0;
  lStack_230 = 0;
  lStack_228 = 0;
  uStack_220 = 0;
  uStack_234 = 0;
  puVar4 = &uStack_130;
  pppuVar8 = &ppuStack_1a0;
  puStack_168 = puVar3;
  func_0x000107c310cc(puVar4,pppuVar8,&lStack_230,&uStack_234);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_230 != 0) {
    lStack_228 = lStack_230;
    __ZdlPv();
  }
  plVar1 = plStack_138;
  ppuStack_1a0 = &PTR_DAT_11089b010;
  plStack_138 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_140;
  plStack_140 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_158 != 0) {
    lStack_150 = lStack_158;
    __ZdlPv();
  }
  plVar1 = plStack_1b0;
  ppuStack_218 = &PTR_DAT_11086d7d0;
  plStack_1b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1b8;
  plStack_1b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1d0 != 0) {
    lStack_1c8 = lStack_1d0;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_108);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  puVar5 = puVar4;
  func_0x00010bf529e0();
  if (puVar5 != (undefined8 *)0x0) {
    uVar6 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b31c0();
    _objc_release(uVar6);
    uVar6 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(puVar4);
    func_0x00010c0ad6a0(uVar6);
    _objc_release(uVar6);
    _objc_retain(puVar4);
    puVar7 = puVar4;
    func_0x00010bf52a60();
    lVar10 = lRam0000000000000000;
    while (puVar7 != (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
      do {
        if (lRam0000000000000000 != lVar10) {
          _objc_enumerationMutation(puVar4);
        }
        pppuVar8 = *(undefined ****)((long)puVar11 * 8);
        puVar2 = PTR_PTR_1126d9ef8;
        FUN_108503618();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(param_2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar2);
        puVar11 = (undefined8 *)((long)puVar11 + 1);
      } while (puVar7 != puVar11);
      puVar7 = puVar4;
      func_0x00010bf52a60();
    }
    _objc_release(puVar4);
  }
  _objc_release(puVar4);
  _objc_release(param_3);
  puVar7 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return (undefined8 *)(ulong)(puVar5 != (undefined8 *)0x0);
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(pppuVar8);
  _objc_opt_class(PTR_PTR_1126d6060);
  if (puVar7 == (undefined8 *)0x0) {
    uStack_370 = 0;
    uStack_388 = 0;
    uStack_390 = 0;
    uStack_378 = 0;
    uStack_380 = 0;
    uStack_398 = 0;
    uStack_3a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_3a0,puVar7);
  }
  puVar3 = &uStack_411;
  FUN_1084fde00(puVar3);
  func_0x000100aac340(auStack_430,pppuVar8);
  func_0x000107c281a0(appuStack_410,0xc,puVar3,auStack_430);
  puStack_448 = (undefined1 *)0x0;
  puStack_440 = (undefined1 *)0x0;
  uStack_438 = 0;
  uStack_44c = 0;
  puVar4 = &uStack_3a0;
  pppuVar9 = appuStack_410;
  func_0x000107c310cc(puVar4,pppuVar9,&puStack_448,&uStack_44c);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_448 != (undefined1 *)0x0) {
    puStack_440 = puStack_448;
    __ZdlPv();
  }
  plVar1 = plStack_3a8;
  appuStack_410[0] = &PTR_SUB_110862700;
  plStack_3a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_3b0;
  plStack_3b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_448 = auStack_3c8;
  func_0x000107c27dd4(&puStack_448);
  puStack_448 = auStack_430;
  func_0x000107c27dd4(&puStack_448);
  func_0x000107c27da8(&uStack_378);
  _objc_release(uStack_388);
  _objc_release(uStack_390);
  _objc_retain(puVar4);
  puVar5 = puVar4;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (puVar5 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(puVar4);
      }
      pppuVar9 = *(undefined ****)((long)puVar11 * 8);
      puVar2 = PTR_PTR_1126d9ef0;
      FUN_1084fee94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar11 = (undefined8 *)((long)puVar11 + 1);
    } while (puVar5 != puVar11);
    puVar5 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(pppuVar8);
  puVar5 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(pppuVar8);
  _objc_release(puVar7);
  __Unwind_Resume();
  lStack_4f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(pppuVar9);
  _objc_opt_class(PTR_PTR_1126d5338);
  if (puVar5 == (undefined8 *)0x0) {
    uStack_580 = 0;
    uStack_598 = 0;
    uStack_5a0 = 0;
    uStack_588 = 0;
    uStack_590 = 0;
    uStack_5a8 = 0;
    uStack_5b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_5b0,puVar5);
  }
  puVar3 = &uStack_621;
  FUN_1084ff7d8(puVar3);
  func_0x000100aac340(auStack_640,pppuVar9);
  func_0x000107c281a0(appuStack_620,0xc,puVar3,auStack_640);
  puStack_658 = (undefined1 *)0x0;
  puStack_650 = (undefined1 *)0x0;
  uStack_648 = 0;
  uStack_65c = 0;
  puVar4 = &uStack_5b0;
  func_0x000107c310cc(puVar4,appuStack_620,&puStack_658,&uStack_65c);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_658 != (undefined1 *)0x0) {
    puStack_650 = puStack_658;
    __ZdlPv();
  }
  plVar1 = plStack_5b8;
  appuStack_620[0] = &PTR_SUB_110862700;
  plStack_5b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_5c0;
  plStack_5c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_658 = auStack_5d8;
  func_0x000107c27dd4(&puStack_658);
  puStack_658 = auStack_640;
  func_0x000107c27dd4(&puStack_658);
  func_0x000107c27da8(&uStack_588);
  _objc_release(uStack_598);
  _objc_release(uStack_5a0);
  dVar12 = 0.0;
  _objc_retain(puVar4);
  puVar7 = puVar4;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (puVar7 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(puVar4);
      }
      puVar2 = PTR_PTR_1126d9ee8;
      FUN_108500a60(PTR_PTR_1126d9ee8,*(undefined8 *)((long)puVar11 * 8));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(puVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar11 = (undefined8 *)((long)puVar11 + 1);
    } while (puVar7 != puVar11);
    puVar7 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(pppuVar9);
  puVar7 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4f8) {
    ___stack_chk_fail();
    _objc_release(puVar4);
    _objc_release(puVar4);
    _objc_release(pppuVar9);
    _objc_release(puVar5);
    __Unwind_Resume();
    lStack_728 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(puVar7);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar2);
    _objc_opt_class(PTR_PTR_1126d5338);
    if (puVar7 == (undefined8 *)0x0) {
      uStack_7b0 = 0;
      uStack_7c8 = 0;
      uStack_7d0 = 0;
      uStack_7b8 = 0;
      uStack_7c0 = 0;
      uStack_7d8 = 0;
      uStack_7e0 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_7e0,puVar7);
    }
    puVar3 = &uStack_7e1;
    FUN_1084ff950();
    uStack_858 = CONCAT44(uStack_858._4_4_,0xf);
    uStack_848 = CONCAT44(uStack_848._4_4_,0x100);
    ppuStack_860 = &PTR_DAT_11086d7d0;
    uStack_820 = 0;
    uStack_828 = 0;
    lStack_810 = 0;
    lStack_818 = 0;
    plStack_800 = (long *)0x0;
    uStack_808 = 0;
    plStack_7f8 = (long *)0x0;
    uStack_78e = *(undefined2 *)(puVar3 + 0x1a);
    uStack_7a0 = 6;
    uStack_790 = 0x100;
    ppuStack_7a8 = &PTR_DAT_11089b010;
    lStack_758 = 0;
    lStack_760 = 0;
    plStack_748 = (long *)0x0;
    uStack_750 = 0;
    plStack_740 = (long *)0x0;
    lStack_878 = 0;
    lStack_870 = 0;
    uStack_868 = 0;
    uStack_87c = 0;
    puVar4 = &uStack_7e0;
    dStack_830 = dVar12 * 1000.0;
    puStack_770 = puVar3;
    pppuStack_768 = &ppuStack_860;
    func_0x000107c310cc(puVar4,&ppuStack_7a8,&lStack_878,&uStack_87c);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_878 != 0) {
      lStack_870 = lStack_878;
      __ZdlPv();
    }
    plVar1 = plStack_740;
    ppuStack_7a8 = &PTR_DAT_11089b010;
    plStack_740 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_748;
    plStack_748 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_760 != 0) {
      lStack_758 = lStack_760;
      __ZdlPv();
    }
    plVar1 = plStack_7f8;
    ppuStack_860 = &PTR_DAT_11086d7d0;
    plStack_7f8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_800;
    plStack_800 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_818 != 0) {
      lStack_810 = lStack_818;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_7b8);
    _objc_release(uStack_7c8);
    _objc_release(uStack_7d0);
    uStack_858 = 0;
    ppuStack_860 = (undefined **)0x0;
    uStack_848 = 0;
    plStack_850 = (long *)0x0;
    uStack_838 = 0;
    uStack_840 = 0;
    uStack_828 = 0;
    dStack_830 = 0.0;
    _objc_retain(puVar4);
    puVar5 = puVar4;
    func_0x00010bf52a60();
    if (puVar5 != (undefined8 *)0x0) {
      lVar10 = *plStack_850;
      do {
        puVar11 = (undefined8 *)0x0;
        do {
          if (*plStack_850 != lVar10) {
            _objc_enumerationMutation(puVar4);
          }
          puVar2 = PTR_PTR_1126d9ee8;
          FUN_108500a60(PTR_PTR_1126d9ee8,*(undefined8 *)(uStack_858 + (long)puVar11 * 8));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40(puVar7);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar2);
          puVar11 = (undefined8 *)((long)puVar11 + 1);
        } while (puVar5 != puVar11);
        puVar5 = puVar4;
        func_0x00010bf52a60();
      } while (puVar5 != (undefined8 *)0x0);
    }
    _objc_release(puVar4);
    _objc_release(puVar4);
    _objc_release(puVar7);
    _objc_opt_class(PTR_PTR_1126d5338);
    if (puVar7 == (undefined8 *)0x0) {
      uStack_7b0 = 0;
      uStack_7c8 = 0;
      uStack_7d0 = 0;
      uStack_7b8 = 0;
      uStack_7c0 = 0;
      uStack_7d8 = 0;
      uStack_7e0 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_7e0,puVar7);
    }
    puVar3 = &uStack_7e1;
    FUN_1084ffbe8();
    uStack_858 = CONCAT44(uStack_858._4_4_,0xf);
    uStack_848 = CONCAT44(uStack_848._4_4_,0x100);
    dStack_830 = 4.94065645841247e-324;
    ppuStack_860 = &PTR_SUB_110a504b0;
    uStack_820 = 0;
    uStack_828 = 0;
    lStack_810 = 0;
    lStack_818 = 0;
    plStack_800 = (long *)0x0;
    uStack_808 = 0;
    plStack_7f8 = (long *)0x0;
    uStack_78e = *(undefined2 *)(puVar3 + 0x1a);
    uStack_7a0 = 10;
    uStack_790 = 0x100;
    ppuStack_7a8 = &PTR_FUN_110a50380;
    pppuStack_768 = &ppuStack_860;
    lStack_758 = 0;
    lStack_760 = 0;
    plStack_748 = (long *)0x0;
    uStack_750 = 0;
    plStack_740 = (long *)0x0;
    lStack_878 = 0;
    lStack_870 = 0;
    uStack_868 = 0;
    uStack_87c = 0;
    puVar4 = &uStack_7e0;
    puStack_770 = puVar3;
    func_0x000107c310cc(puVar4,&ppuStack_7a8,&lStack_878,&uStack_87c);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_878 != 0) {
      lStack_870 = lStack_878;
      __ZdlPv();
    }
    plVar1 = plStack_740;
    ppuStack_7a8 = &PTR_FUN_110a50380;
    plStack_740 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_748;
    plStack_748 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_760 != 0) {
      lStack_758 = lStack_760;
      __ZdlPv();
    }
    plVar1 = plStack_7f8;
    ppuStack_860 = &PTR_SUB_110a504b0;
    plStack_7f8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_800;
    plStack_800 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_818 != 0) {
      lStack_810 = lStack_818;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_7b8);
    _objc_release(uStack_7c8);
    _objc_release(uStack_7d0);
    puVar5 = puVar4;
    func_0x00010bf0a540(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar5;
    func_0x000100504554();
    _objc_release(puVar5);
    FUN_1084f5cf4(puVar7,puVar11,0);
    _objc_release(puVar11);
    _objc_release(puVar4);
    puVar5 = puVar7;
    _objc_release(puVar7);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_728) {
      return puVar5;
    }
    ___stack_chk_fail();
    _objc_release(puVar11);
    _objc_release(puVar4);
    _objc_release(puVar7);
    __Unwind_Resume(puVar5);
    func_0x00010c241220(puVar11);
    _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar11;
  }
  return puVar7;
}



/* Entry: 1084f87b0; end: 1084f8a7b;  */

void FUN_1084f87b0(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined ***pppuVar7;
  undefined8 *puVar8;
  long lVar9;
  double dVar10;
  undefined4 uStack_5fc;
  long lStack_5f8;
  long lStack_5f0;
  undefined8 uStack_5e8;
  undefined **ppuStack_5e0;
  undefined8 uStack_5d8;
  long *plStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  double dStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  long lStack_598;
  long lStack_590;
  undefined8 uStack_588;
  long *plStack_580;
  long *plStack_578;
  undefined1 uStack_561;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined **ppuStack_528;
  undefined4 uStack_520;
  undefined2 uStack_510;
  undefined2 uStack_50e;
  undefined1 *puStack_4f0;
  undefined ***pppuStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  undefined8 uStack_4d0;
  long *plStack_4c8;
  long *plStack_4c0;
  long lStack_4a8;
  undefined4 uStack_3dc;
  undefined1 *puStack_3d8;
  undefined1 *puStack_3d0;
  undefined8 uStack_3c8;
  undefined1 auStack_3c0 [31];
  undefined1 uStack_3a1;
  undefined **appuStack_3a0 [9];
  undefined1 auStack_358 [24];
  long *plStack_340;
  long *plStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long lStack_278;
  undefined4 uStack_1cc;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [31];
  undefined1 uStack_191;
  undefined **appuStack_190 [9];
  undefined1 auStack_148 [24];
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126d6060);
  if (param_1 == 0) {
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_120,param_1);
  }
  puVar2 = &uStack_191;
  FUN_1084fde00(puVar2);
  func_0x000100aac340(auStack_1b0,param_2);
  func_0x000107c281a0(appuStack_190,0xc,puVar2,auStack_1b0);
  puStack_1c8 = (undefined1 *)0x0;
  puStack_1c0 = (undefined1 *)0x0;
  uStack_1b8 = 0;
  uStack_1cc = 0;
  puVar3 = &uStack_120;
  pppuVar7 = appuStack_190;
  func_0x000107c310cc(puVar3,pppuVar7,&puStack_1c8,&uStack_1cc);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1c8 != (undefined1 *)0x0) {
    puStack_1c0 = puStack_1c8;
    __ZdlPv();
  }
  plVar1 = plStack_128;
  appuStack_190[0] = &PTR_SUB_110862700;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1c8 = auStack_148;
  func_0x000107c27dd4(&puStack_1c8);
  puStack_1c8 = auStack_1b0;
  func_0x000107c27dd4(&puStack_1c8);
  func_0x000107c27da8(&uStack_f8);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (puVar4 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(puVar3);
      }
      pppuVar7 = *(undefined ****)((long)puVar8 * 8);
      puVar5 = PTR_PTR_1126d9ef0;
      FUN_1084fee94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar8 = (undefined8 *)((long)puVar8 + 1);
    } while (puVar4 != puVar8);
    puVar4 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(param_2);
  lVar9 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(pppuVar7);
  _objc_opt_class(PTR_PTR_1126d5338);
  if (lVar9 == 0) {
    uStack_300 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_330,lVar9);
  }
  puVar2 = &uStack_3a1;
  FUN_1084ff7d8(puVar2);
  func_0x000100aac340(auStack_3c0,pppuVar7);
  func_0x000107c281a0(appuStack_3a0,0xc,puVar2,auStack_3c0);
  puStack_3d8 = (undefined1 *)0x0;
  puStack_3d0 = (undefined1 *)0x0;
  uStack_3c8 = 0;
  uStack_3dc = 0;
  puVar3 = &uStack_330;
  func_0x000107c310cc(puVar3,appuStack_3a0,&puStack_3d8,&uStack_3dc);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_3d8 != (undefined1 *)0x0) {
    puStack_3d0 = puStack_3d8;
    __ZdlPv();
  }
  plVar1 = plStack_338;
  appuStack_3a0[0] = &PTR_SUB_110862700;
  plStack_338 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_340;
  plStack_340 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_3d8 = auStack_358;
  func_0x000107c27dd4(&puStack_3d8);
  puStack_3d8 = auStack_3c0;
  func_0x000107c27dd4(&puStack_3d8);
  func_0x000107c27da8(&uStack_308);
  _objc_release(uStack_318);
  _objc_release(uStack_320);
  dVar10 = 0.0;
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar4 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(puVar3);
      }
      puVar5 = PTR_PTR_1126d9ee8;
      FUN_108500a60(PTR_PTR_1126d9ee8,*(undefined8 *)((long)puVar8 * 8));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(lVar9);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar8 = (undefined8 *)((long)puVar8 + 1);
    } while (puVar4 != puVar8);
    puVar4 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(pppuVar7);
  lVar6 = lVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(pppuVar7);
  _objc_release(lVar9);
  __Unwind_Resume();
  lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(lVar6);
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar5);
  _objc_opt_class(PTR_PTR_1126d5338);
  if (lVar6 == 0) {
    uStack_530 = 0;
    uStack_548 = 0;
    uStack_550 = 0;
    uStack_538 = 0;
    uStack_540 = 0;
    uStack_558 = 0;
    uStack_560 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_560,lVar6);
  }
  puVar2 = &uStack_561;
  FUN_1084ff950();
  uStack_5d8 = CONCAT44(uStack_5d8._4_4_,0xf);
  uStack_5c8 = CONCAT44(uStack_5c8._4_4_,0x100);
  ppuStack_5e0 = &PTR_DAT_11086d7d0;
  uStack_5a0 = 0;
  uStack_5a8 = 0;
  lStack_590 = 0;
  lStack_598 = 0;
  plStack_580 = (long *)0x0;
  uStack_588 = 0;
  plStack_578 = (long *)0x0;
  uStack_50e = *(undefined2 *)(puVar2 + 0x1a);
  uStack_520 = 6;
  uStack_510 = 0x100;
  ppuStack_528 = &PTR_DAT_11089b010;
  lStack_4d8 = 0;
  lStack_4e0 = 0;
  plStack_4c8 = (long *)0x0;
  uStack_4d0 = 0;
  plStack_4c0 = (long *)0x0;
  lStack_5f8 = 0;
  lStack_5f0 = 0;
  uStack_5e8 = 0;
  uStack_5fc = 0;
  puVar3 = &uStack_560;
  dStack_5b0 = dVar10 * 1000.0;
  puStack_4f0 = puVar2;
  pppuStack_4e8 = &ppuStack_5e0;
  func_0x000107c310cc(puVar3,&ppuStack_528,&lStack_5f8,&uStack_5fc);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_5f8 != 0) {
    lStack_5f0 = lStack_5f8;
    __ZdlPv();
  }
  plVar1 = plStack_4c0;
  ppuStack_528 = &PTR_DAT_11089b010;
  plStack_4c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_4c8;
  plStack_4c8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_4e0 != 0) {
    lStack_4d8 = lStack_4e0;
    __ZdlPv();
  }
  plVar1 = plStack_578;
  ppuStack_5e0 = &PTR_DAT_11086d7d0;
  plStack_578 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_580;
  plStack_580 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_598 != 0) {
    lStack_590 = lStack_598;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_538);
  _objc_release(uStack_548);
  _objc_release(uStack_550);
  uStack_5d8 = 0;
  ppuStack_5e0 = (undefined **)0x0;
  uStack_5c8 = 0;
  plStack_5d0 = (long *)0x0;
  uStack_5b8 = 0;
  uStack_5c0 = 0;
  uStack_5a8 = 0;
  dStack_5b0 = 0.0;
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined8 *)0x0) {
    lVar9 = *plStack_5d0;
    do {
      puVar8 = (undefined8 *)0x0;
      do {
        if (*plStack_5d0 != lVar9) {
          _objc_enumerationMutation(puVar3);
        }
        puVar5 = PTR_PTR_1126d9ee8;
        FUN_108500a60(PTR_PTR_1126d9ee8,*(undefined8 *)(uStack_5d8 + (long)puVar8 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(lVar6);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar5);
        puVar8 = (undefined8 *)((long)puVar8 + 1);
      } while (puVar4 != puVar8);
      puVar4 = puVar3;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined8 *)0x0);
  }
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(lVar6);
  _objc_opt_class(PTR_PTR_1126d5338);
  if (lVar6 == 0) {
    uStack_530 = 0;
    uStack_548 = 0;
    uStack_550 = 0;
    uStack_538 = 0;
    uStack_540 = 0;
    uStack_558 = 0;
    uStack_560 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_560,lVar6);
  }
  puVar2 = &uStack_561;
  FUN_1084ffbe8();
  uStack_5d8 = CONCAT44(uStack_5d8._4_4_,0xf);
  uStack_5c8 = CONCAT44(uStack_5c8._4_4_,0x100);
  dStack_5b0 = 4.94065645841247e-324;
  ppuStack_5e0 = &PTR_SUB_110a504b0;
  uStack_5a0 = 0;
  uStack_5a8 = 0;
  lStack_590 = 0;
  lStack_598 = 0;
  plStack_580 = (long *)0x0;
  uStack_588 = 0;
  plStack_578 = (long *)0x0;
  uStack_50e = *(undefined2 *)(puVar2 + 0x1a);
  uStack_520 = 10;
  uStack_510 = 0x100;
  ppuStack_528 = &PTR_FUN_110a50380;
  pppuStack_4e8 = &ppuStack_5e0;
  lStack_4d8 = 0;
  lStack_4e0 = 0;
  plStack_4c8 = (long *)0x0;
  uStack_4d0 = 0;
  plStack_4c0 = (long *)0x0;
  lStack_5f8 = 0;
  lStack_5f0 = 0;
  uStack_5e8 = 0;
  uStack_5fc = 0;
  puVar3 = &uStack_560;
  puStack_4f0 = puVar2;
  func_0x000107c310cc(puVar3,&ppuStack_528,&lStack_5f8,&uStack_5fc);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_5f8 != 0) {
    lStack_5f0 = lStack_5f8;
    __ZdlPv();
  }
  plVar1 = plStack_4c0;
  ppuStack_528 = &PTR_FUN_110a50380;
  plStack_4c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_4c8;
  plStack_4c8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_4e0 != 0) {
    lStack_4d8 = lStack_4e0;
    __ZdlPv();
  }
  plVar1 = plStack_578;
  ppuStack_5e0 = &PTR_SUB_110a504b0;
  plStack_578 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_580;
  plStack_580 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_598 != 0) {
    lStack_590 = lStack_598;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_538);
  _objc_release(uStack_548);
  _objc_release(uStack_550);
  puVar4 = puVar3;
  func_0x00010bf0a540(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar4;
  func_0x000100504554();
  _objc_release(puVar4);
  FUN_1084f5cf4(lVar6,puVar8,0);
  _objc_release(puVar8);
  _objc_release(puVar3);
  lVar9 = lVar6;
  _objc_release(lVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar3);
  _objc_release(lVar6);
  __Unwind_Resume(lVar9);
  func_0x00010c241220(puVar8);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1084f8a7c; end: 1084f8d47;  */

void FUN_1084f8a7c(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  double dVar9;
  undefined4 uStack_3ec;
  long lStack_3e8;
  long lStack_3e0;
  undefined8 uStack_3d8;
  undefined **ppuStack_3d0;
  undefined8 uStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  double dStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long lStack_380;
  undefined8 uStack_378;
  long *plStack_370;
  long *plStack_368;
  undefined1 uStack_351;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined **ppuStack_318;
  undefined4 uStack_310;
  undefined2 uStack_300;
  undefined2 uStack_2fe;
  undefined1 *puStack_2e0;
  undefined ***pppuStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  long *plStack_2b8;
  long *plStack_2b0;
  long lStack_298;
  undefined4 uStack_1cc;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [31];
  undefined1 uStack_191;
  undefined **appuStack_190 [9];
  undefined1 auStack_148 [24];
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126d5338);
  if (param_1 == 0) {
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_120,param_1);
  }
  puVar2 = &uStack_191;
  FUN_1084ff7d8(puVar2);
  func_0x000100aac340(auStack_1b0,param_2);
  func_0x000107c281a0(appuStack_190,0xc,puVar2,auStack_1b0);
  puStack_1c8 = (undefined1 *)0x0;
  puStack_1c0 = (undefined1 *)0x0;
  uStack_1b8 = 0;
  uStack_1cc = 0;
  puVar3 = &uStack_120;
  func_0x000107c310cc(puVar3,appuStack_190,&puStack_1c8,&uStack_1cc);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1c8 != (undefined1 *)0x0) {
    puStack_1c0 = puStack_1c8;
    __ZdlPv();
  }
  plVar1 = plStack_128;
  appuStack_190[0] = &PTR_SUB_110862700;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1c8 = auStack_148;
  func_0x000107c27dd4(&puStack_1c8);
  puStack_1c8 = auStack_1b0;
  func_0x000107c27dd4(&puStack_1c8);
  func_0x000107c27da8(&uStack_f8);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  dVar9 = 0.0;
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar4 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(puVar3);
      }
      puVar5 = PTR_PTR_1126d9ee8;
      FUN_108500a60(PTR_PTR_1126d9ee8,*(undefined8 *)((long)puVar7 * 8));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar7 = (undefined8 *)((long)puVar7 + 1);
    } while (puVar4 != puVar7);
    puVar4 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(param_2);
  lVar6 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(lVar6);
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar5);
  _objc_opt_class(PTR_PTR_1126d5338);
  if (lVar6 == 0) {
    uStack_320 = 0;
    uStack_338 = 0;
    uStack_340 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_350,lVar6);
  }
  puVar2 = &uStack_351;
  FUN_1084ff950();
  uStack_3c8 = CONCAT44(uStack_3c8._4_4_,0xf);
  uStack_3b8 = CONCAT44(uStack_3b8._4_4_,0x100);
  ppuStack_3d0 = &PTR_DAT_11086d7d0;
  uStack_390 = 0;
  uStack_398 = 0;
  lStack_380 = 0;
  lStack_388 = 0;
  plStack_370 = (long *)0x0;
  uStack_378 = 0;
  plStack_368 = (long *)0x0;
  uStack_2fe = *(undefined2 *)(puVar2 + 0x1a);
  uStack_310 = 6;
  uStack_300 = 0x100;
  ppuStack_318 = &PTR_DAT_11089b010;
  lStack_2c8 = 0;
  lStack_2d0 = 0;
  plStack_2b8 = (long *)0x0;
  uStack_2c0 = 0;
  plStack_2b0 = (long *)0x0;
  lStack_3e8 = 0;
  lStack_3e0 = 0;
  uStack_3d8 = 0;
  uStack_3ec = 0;
  puVar3 = &uStack_350;
  dStack_3a0 = dVar9 * 1000.0;
  puStack_2e0 = puVar2;
  pppuStack_2d8 = &ppuStack_3d0;
  func_0x000107c310cc(puVar3,&ppuStack_318,&lStack_3e8,&uStack_3ec);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_3e8 != 0) {
    lStack_3e0 = lStack_3e8;
    __ZdlPv();
  }
  plVar1 = plStack_2b0;
  ppuStack_318 = &PTR_DAT_11089b010;
  plStack_2b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_2b8;
  plStack_2b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2d0 != 0) {
    lStack_2c8 = lStack_2d0;
    __ZdlPv();
  }
  plVar1 = plStack_368;
  ppuStack_3d0 = &PTR_DAT_11086d7d0;
  plStack_368 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_370;
  plStack_370 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_388 != 0) {
    lStack_380 = lStack_388;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_328);
  _objc_release(uStack_338);
  _objc_release(uStack_340);
  uStack_3c8 = 0;
  ppuStack_3d0 = (undefined **)0x0;
  uStack_3b8 = 0;
  plStack_3c0 = (long *)0x0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_398 = 0;
  dStack_3a0 = 0.0;
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined8 *)0x0) {
    lVar8 = *plStack_3c0;
    do {
      puVar7 = (undefined8 *)0x0;
      do {
        if (*plStack_3c0 != lVar8) {
          _objc_enumerationMutation(puVar3);
        }
        puVar5 = PTR_PTR_1126d9ee8;
        FUN_108500a60(PTR_PTR_1126d9ee8,*(undefined8 *)(uStack_3c8 + (long)puVar7 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(lVar6);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar5);
        puVar7 = (undefined8 *)((long)puVar7 + 1);
      } while (puVar4 != puVar7);
      puVar4 = puVar3;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined8 *)0x0);
  }
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(lVar6);
  _objc_opt_class(PTR_PTR_1126d5338);
  if (lVar6 == 0) {
    uStack_320 = 0;
    uStack_338 = 0;
    uStack_340 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_350,lVar6);
  }
  puVar2 = &uStack_351;
  FUN_1084ffbe8();
  uStack_3c8 = CONCAT44(uStack_3c8._4_4_,0xf);
  uStack_3b8 = CONCAT44(uStack_3b8._4_4_,0x100);
  dStack_3a0 = 4.94065645841247e-324;
  ppuStack_3d0 = &PTR_SUB_110a504b0;
  uStack_390 = 0;
  uStack_398 = 0;
  lStack_380 = 0;
  lStack_388 = 0;
  plStack_370 = (long *)0x0;
  uStack_378 = 0;
  plStack_368 = (long *)0x0;
  uStack_2fe = *(undefined2 *)(puVar2 + 0x1a);
  uStack_310 = 10;
  uStack_300 = 0x100;
  ppuStack_318 = &PTR_FUN_110a50380;
  pppuStack_2d8 = &ppuStack_3d0;
  lStack_2c8 = 0;
  lStack_2d0 = 0;
  plStack_2b8 = (long *)0x0;
  uStack_2c0 = 0;
  plStack_2b0 = (long *)0x0;
  lStack_3e8 = 0;
  lStack_3e0 = 0;
  uStack_3d8 = 0;
  uStack_3ec = 0;
  puVar3 = &uStack_350;
  puStack_2e0 = puVar2;
  func_0x000107c310cc(puVar3,&ppuStack_318,&lStack_3e8,&uStack_3ec);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_3e8 != 0) {
    lStack_3e0 = lStack_3e8;
    __ZdlPv();
  }
  plVar1 = plStack_2b0;
  ppuStack_318 = &PTR_FUN_110a50380;
  plStack_2b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_2b8;
  plStack_2b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2d0 != 0) {
    lStack_2c8 = lStack_2d0;
    __ZdlPv();
  }
  plVar1 = plStack_368;
  ppuStack_3d0 = &PTR_SUB_110a504b0;
  plStack_368 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_370;
  plStack_370 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_388 != 0) {
    lStack_380 = lStack_388;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_328);
  _objc_release(uStack_338);
  _objc_release(uStack_340);
  puVar4 = puVar3;
  func_0x00010bf0a540(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x000100504554();
  _objc_release(puVar4);
  FUN_1084f5cf4(lVar6,puVar7,0);
  _objc_release(puVar7);
  _objc_release(puVar3);
  lVar8 = lVar6;
  _objc_release(lVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(lVar6);
  __Unwind_Resume(lVar8);
  func_0x00010c241220(puVar7);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1084f8d48; end: 1084f92f3;  */

void FUN_1084f8d48(double param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 uStack_1dc;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined **ppuStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  double dStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined1 uStack_141;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined **ppuStack_108;
  undefined4 uStack_100;
  undefined2 uStack_f0;
  undefined2 uStack_ee;
  undefined1 *puStack_d0;
  undefined ***pppuStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  _objc_opt_class(PTR_PTR_1126d5338);
  if (param_2 == 0) {
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_140,param_2);
  }
  puVar3 = &uStack_141;
  FUN_1084ff950();
  lStack_1b8 = CONCAT44(lStack_1b8._4_4_,0xf);
  uStack_1a8 = CONCAT44(uStack_1a8._4_4_,0x100);
  ppuStack_1c0 = &PTR_DAT_11086d7d0;
  uStack_180 = 0;
  uStack_188 = 0;
  lStack_170 = 0;
  lStack_178 = 0;
  plStack_160 = (long *)0x0;
  uStack_168 = 0;
  plStack_158 = (long *)0x0;
  uStack_ee = *(undefined2 *)(puVar3 + 0x1a);
  uStack_100 = 6;
  uStack_f0 = 0x100;
  ppuStack_108 = &PTR_DAT_11089b010;
  lStack_b8 = 0;
  lStack_c0 = 0;
  plStack_a8 = (long *)0x0;
  uStack_b0 = 0;
  plStack_a0 = (long *)0x0;
  lStack_1d8 = 0;
  lStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1dc = 0;
  puVar4 = &uStack_140;
  dStack_190 = param_1 * 1000.0;
  puStack_d0 = puVar3;
  pppuStack_c8 = &ppuStack_1c0;
  func_0x000107c310cc(puVar4,&ppuStack_108,&lStack_1d8,&uStack_1dc);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_1d8 != 0) {
    lStack_1d0 = lStack_1d8;
    __ZdlPv();
  }
  plVar1 = plStack_a0;
  ppuStack_108 = &PTR_DAT_11089b010;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a8;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_c0 != 0) {
    lStack_b8 = lStack_c0;
    __ZdlPv();
  }
  plVar1 = plStack_158;
  ppuStack_1c0 = &PTR_DAT_11086d7d0;
  plStack_158 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_160;
  plStack_160 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_178 != 0) {
    lStack_170 = lStack_178;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_118);
  _objc_release(uStack_128);
  _objc_release(uStack_130);
  lStack_1b8 = 0;
  ppuStack_1c0 = (undefined **)0x0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  dStack_190 = 0.0;
  _objc_retain(puVar4);
  puVar5 = puVar4;
  func_0x00010bf52a60();
  if (puVar5 != (undefined8 *)0x0) {
    lVar6 = *plStack_1b0;
    do {
      puVar7 = (undefined8 *)0x0;
      do {
        if (*plStack_1b0 != lVar6) {
          _objc_enumerationMutation(puVar4);
        }
        puVar2 = PTR_PTR_1126d9ee8;
        FUN_108500a60(PTR_PTR_1126d9ee8,*(undefined8 *)(lStack_1b8 + (long)puVar7 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(param_2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar2);
        puVar7 = (undefined8 *)((long)puVar7 + 1);
      } while (puVar5 != puVar7);
      puVar5 = puVar4;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined8 *)0x0);
  }
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(param_2);
  _objc_opt_class(PTR_PTR_1126d5338);
  if (param_2 == 0) {
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_140,param_2);
  }
  puVar3 = &uStack_141;
  FUN_1084ffbe8();
  lStack_1b8 = CONCAT44(lStack_1b8._4_4_,0xf);
  uStack_1a8 = CONCAT44(uStack_1a8._4_4_,0x100);
  dStack_190 = 4.94065645841247e-324;
  ppuStack_1c0 = &PTR_SUB_110a504b0;
  uStack_180 = 0;
  uStack_188 = 0;
  lStack_170 = 0;
  lStack_178 = 0;
  plStack_160 = (long *)0x0;
  uStack_168 = 0;
  plStack_158 = (long *)0x0;
  uStack_ee = *(undefined2 *)(puVar3 + 0x1a);
  uStack_100 = 10;
  uStack_f0 = 0x100;
  ppuStack_108 = &PTR_FUN_110a50380;
  pppuStack_c8 = &ppuStack_1c0;
  lStack_b8 = 0;
  lStack_c0 = 0;
  plStack_a8 = (long *)0x0;
  uStack_b0 = 0;
  plStack_a0 = (long *)0x0;
  lStack_1d8 = 0;
  lStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1dc = 0;
  puVar4 = &uStack_140;
  puStack_d0 = puVar3;
  func_0x000107c310cc(puVar4,&ppuStack_108,&lStack_1d8,&uStack_1dc);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_1d8 != 0) {
    lStack_1d0 = lStack_1d8;
    __ZdlPv();
  }
  plVar1 = plStack_a0;
  ppuStack_108 = &PTR_FUN_110a50380;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a8;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_c0 != 0) {
    lStack_b8 = lStack_c0;
    __ZdlPv();
  }
  plVar1 = plStack_158;
  ppuStack_1c0 = &PTR_SUB_110a504b0;
  plStack_158 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_160;
  plStack_160 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_178 != 0) {
    lStack_170 = lStack_178;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_118);
  _objc_release(uStack_128);
  _objc_release(uStack_130);
  puVar5 = puVar4;
  func_0x00010bf0a540(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x000100504554();
  _objc_release(puVar5);
  FUN_1084f5cf4(param_2,puVar7,0);
  _objc_release(puVar7);
  _objc_release(puVar4);
  lVar6 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(param_2);
  __Unwind_Resume(lVar6);
  func_0x00010c241220(puVar7);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1084f92f4; end: 1084f9313;  */

void FUN_1084f92f4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1084f9314; end: 1084f98ab;  */

void FUN_1084f9314(double param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 uStack_234;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined **ppuStack_218;
  undefined4 uStack_210;
  undefined4 uStack_200;
  double dStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  undefined1 uStack_1a1;
  undefined **ppuStack_1a0;
  undefined4 uStack_198;
  undefined2 uStack_188;
  undefined2 uStack_186;
  undefined1 *puStack_168;
  undefined ***pppuStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  _objc_opt_class(PTR_PTR_1126d6060);
  if (param_2 == 0) {
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_130,param_2);
  }
  puVar3 = &uStack_1a1;
  FUN_1084fdf78();
  uStack_210 = 0xf;
  dStack_1e8 = param_1 * 1000.0 + -25200000.0;
  uStack_200 = 0x100;
  ppuStack_218 = &PTR_DAT_11086d7d0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  lStack_1c8 = 0;
  lStack_1d0 = 0;
  plStack_1b8 = (long *)0x0;
  uStack_1c0 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_186 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_198 = 6;
  uStack_188 = 0x100;
  ppuStack_1a0 = &PTR_DAT_11089b010;
  pppuStack_160 = &ppuStack_218;
  lStack_150 = 0;
  lStack_158 = 0;
  plStack_140 = (long *)0x0;
  uStack_148 = 0;
  plStack_138 = (long *)0x0;
  lStack_230 = 0;
  lStack_228 = 0;
  uStack_220 = 0;
  uStack_234 = 0;
  puVar4 = &uStack_130;
  puStack_168 = puVar3;
  func_0x000107c310cc(puVar4,&ppuStack_1a0,&lStack_230,&uStack_234);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_230 != 0) {
    lStack_228 = lStack_230;
    __ZdlPv();
  }
  plVar1 = plStack_138;
  ppuStack_1a0 = &PTR_DAT_11089b010;
  plStack_138 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_140;
  plStack_140 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_158 != 0) {
    lStack_150 = lStack_158;
    __ZdlPv();
  }
  plVar1 = plStack_1b0;
  ppuStack_218 = &PTR_DAT_11086d7d0;
  plStack_1b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1b8;
  plStack_1b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1d0 != 0) {
    lStack_1c8 = lStack_1d0;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_108);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  _objc_retain(puVar4);
  puVar5 = puVar4;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar5 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(puVar4);
      }
      puVar2 = PTR_PTR_1126d9ef0;
      FUN_1084fee94(PTR_PTR_1126d9ef0,*(undefined8 *)((long)puVar8 * 8));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar8 = (undefined8 *)((long)puVar8 + 1);
    } while (puVar5 != puVar8);
    puVar5 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  _objc_opt_class(PTR_PTR_1126d6060);
  if (param_2 == 0) {
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_130,param_2);
  }
  puVar3 = &uStack_1a1;
  FUN_1084fe0c4();
  uStack_210 = 0xf;
  uStack_200 = 0x100;
  ppuStack_218 = &PTR_SUB_110a504b0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  lStack_1c8 = 0;
  lStack_1d0 = 0;
  plStack_1b8 = (long *)0x0;
  uStack_1c0 = 0;
  dStack_1e8 = 4.94065645841247e-324;
  plStack_1b0 = (long *)0x0;
  uStack_186 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_198 = 10;
  uStack_188 = 0x100;
  ppuStack_1a0 = &PTR_FUN_110a50380;
  pppuStack_160 = &ppuStack_218;
  lStack_150 = 0;
  lStack_158 = 0;
  plStack_140 = (long *)0x0;
  uStack_148 = 0;
  plStack_138 = (long *)0x0;
  lStack_230 = 0;
  lStack_228 = 0;
  uStack_220 = 0;
  uStack_234 = 0;
  puVar5 = &uStack_130;
  puStack_168 = puVar3;
  func_0x000107c310cc(puVar5,&ppuStack_1a0,&lStack_230,&uStack_234);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_230 != 0) {
    lStack_228 = lStack_230;
    __ZdlPv();
  }
  plVar1 = plStack_138;
  ppuStack_1a0 = &PTR_FUN_110a50380;
  plStack_138 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_140;
  plStack_140 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_158 != 0) {
    lStack_150 = lStack_158;
    __ZdlPv();
  }
  plVar1 = plStack_1b0;
  ppuStack_218 = &PTR_SUB_110a504b0;
  plStack_1b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1b8;
  plStack_1b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1d0 != 0) {
    lStack_1c8 = lStack_1d0;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_108);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  puVar8 = puVar5;
  func_0x00010bf0a540(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar8;
  func_0x000100504554();
  _objc_release(puVar8);
  FUN_1084f57a0(param_2,puVar6,0);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  lVar7 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_2);
  __Unwind_Resume(lVar7);
  func_0x00010c259cc0(puVar6);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1084f98ac; end: 1084f98cb;  */

void FUN_1084f98ac(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c259cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1084f98cc; end: 1084f9b97;  */

void FUN_1084f98cc(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined ***pppuVar7;
  undefined8 *puVar8;
  undefined4 uStack_1cc;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [31];
  undefined1 uStack_191;
  undefined **appuStack_190 [9];
  undefined1 auStack_148 [24];
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126cc378);
  if (param_1 == 0) {
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_120,param_1);
  }
  puVar2 = &uStack_191;
  FUN_10850276c(puVar2);
  func_0x000100aac340(auStack_1b0,param_2);
  func_0x000107c281a0(appuStack_190,0xc,puVar2,auStack_1b0);
  puStack_1c8 = (undefined1 *)0x0;
  puStack_1c0 = (undefined1 *)0x0;
  uStack_1b8 = 0;
  uStack_1cc = 0;
  puVar3 = &uStack_120;
  pppuVar7 = appuStack_190;
  func_0x000107c310cc(puVar3,pppuVar7,&puStack_1c8,&uStack_1cc);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1c8 != (undefined1 *)0x0) {
    puStack_1c0 = puStack_1c8;
    __ZdlPv();
  }
  plVar1 = plStack_128;
  appuStack_190[0] = &PTR_SUB_110862700;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1c8 = auStack_148;
  func_0x000107c27dd4(&puStack_1c8);
  puStack_1c8 = auStack_1b0;
  func_0x000107c27dd4(&puStack_1c8);
  func_0x000107c27da8(&uStack_f8);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar4 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(puVar3);
      }
      pppuVar7 = *(undefined ****)((long)puVar8 * 8);
      puVar5 = PTR_PTR_1126d9ef8;
      FUN_108503618(PTR_PTR_1126d9ef8,pppuVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar8 = (undefined8 *)((long)puVar8 + 1);
    } while (puVar4 != puVar8);
    puVar4 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(param_2);
  lVar6 = param_1;
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume(lVar6);
  func_0x00010c243260(pppuVar7);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1084f9b98; end: 1084f9bb7;  */

void FUN_1084f9b98(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c243260(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1084f9bb8; end: 1084f9c4f;  */

void FUN_1084f9bb8(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1084f9c50; end: 1084fa30b;  */

void FUN_1084f9c50(long param_1,undefined8 param_2,int *param_3)

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
    goto code_r0x0001084fa2b0;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x0001084fa2d0;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x0001084fa2d0;
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
code_r0x0001084fa244:
                    /* WARNING: Could not recover jumptable at 0x0001084fa268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x0001084fa244;
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
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
      goto code_r0x0001084fa2d0;
    }
    goto code_r0x0001084fa2c4;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x0001084fa2c4;
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
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
    goto code_r0x0001084fa2d0;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x0001084fa2d0;
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
    goto LAB_1084fa2e0;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x0001084fa2b0:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x0001084fa2c4:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x0001084fa2d0:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_1084fa2e0:
  return;
}



/* Entry: 1084fa30c; end: 1084fa393;  */

void FUN_1084fa30c(long param_1,undefined8 param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0001084fa380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 1084fa394; end: 1084fa4c7;  */

void FUN_1084fa394(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar3 = *(long **)(param_1 + 0x38);
      if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
      }
      puVar1 = *(undefined8 **)(param_1 + 0x50);
      for (puVar5 = *(undefined8 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar4 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar4);
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
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined8 *)(param_1 + 0x30));
      return;
    }
  }
  plVar3 = *(long **)(param_1 + 0x38);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
  }
  plVar3 = *(long **)(param_1 + 0x40);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001084fa4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 1084fa4c8; end: 1084fa577;  */

long FUN_1084fa4c8(long param_1,long param_2,long param_3,undefined1 *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  _objc_retain(param_3);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 - 1U < 2) {
    lVar3 = 0;
    *param_4 = 0;
  }
  else if (iVar2 - 0xfU < 2) {
    *param_4 = 0;
    lVar3 = *(long *)(param_1 + 0x30);
  }
  else if (iVar2 == 0xe) {
    lVar1 = 0x28;
    lVar3 = param_3;
    if (param_2 != 0) {
      lVar1 = 0x20;
      lVar3 = param_2;
    }
    (**(code **)(param_1 + lVar1))(lVar3,param_4);
  }
  else {
    lVar3 = 0;
  }
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1084fa578; end: 1084fa5b3;  */

undefined8 FUN_1084fa578(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  __Znwm(0x70);
  FUN_1084fa5b4(uVar1,param_1);
  return uVar1;
}



/* Entry: 1084fa5b4; end: 1084fa75f;  */

void FUN_1084fa5b4(undefined8 *param_1,long param_2)

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
      func_0x0001084fa7f4(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
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
      func_0x0001084fa760(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_1084fa6a0:
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
        FUN_1084fa8f4(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_1084fa6a0;
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
      param_1[6] = *(undefined8 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_SUB_110a504b0;
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


