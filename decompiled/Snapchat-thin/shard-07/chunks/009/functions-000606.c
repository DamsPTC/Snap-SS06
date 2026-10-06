/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105b41774; end: 105b41787;  */

void FUN_105b41774(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  *puVar1 = &PTR_FUN_1108d65e8;
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



/* Entry: 105b41788; end: 105b41827;  */

void FUN_105b41788(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_1108d65e8;
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



/* Entry: 105b41828; end: 105b41ee3;  */

void FUN_105b41828(long param_1,undefined8 param_2,int *param_3)

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
    goto code_r0x000105b41e88;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x000105b41ea8;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x000105b41ea8;
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
code_r0x000105b41e1c:
                    /* WARNING: Could not recover jumptable at 0x000105b41e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x000105b41e1c;
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
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
      goto code_r0x000105b41ea8;
    }
    goto code_r0x000105b41e9c;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x000105b41e9c;
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
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
    goto code_r0x000105b41ea8;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x000105b41ea8;
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
    goto LAB_105b41eb8;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x000105b41e88:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x000105b41e9c:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x000105b41ea8:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_105b41eb8:
  return;
}



/* Entry: 105b41ee4; end: 105b41f6b;  */

void FUN_105b41ee4(long param_1,undefined8 param_2)

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
                    /* WARNING: Could not recover jumptable at 0x000105b41f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 105b41f6c; end: 105b4209f;  */

void FUN_105b41f6c(long param_1,undefined8 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  
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
      puVar1 = *(undefined4 **)(param_1 + 0x50);
      for (puVar5 = *(undefined4 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar3 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar3);
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
                    /* WARNING: Could not recover jumptable at 0x000105b42094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 105b420a0; end: 105b422ab;  */

uint FUN_105b420a0(long param_1,long param_2,long param_3,byte *param_4)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  uint uVar11;
  long *plVar12;
  byte bStack_43;
  byte bStack_42;
  byte bStack_41;
  
  _objc_retain(param_3);
  uVar11 = *(uint *)(param_1 + 8);
  if ((int)uVar11 < 0xe) {
    if (1 < uVar11 - 1) {
      if (uVar11 - 0xc < 2) {
        plVar12 = *(long **)(param_1 + 0x38);
        _objc_retain(param_3);
        (**(code **)(*plVar12 + 0x28))(plVar12,param_2,param_3,param_4);
        piVar2 = *(int **)(param_1 + 0x48);
        piVar3 = *(int **)(param_1 + 0x50);
        iVar7 = (int)plVar12;
        if (uVar11 == 0xc) {
          if (piVar2 == piVar3) {
            uVar11 = 0;
          }
          else {
            do {
              piVar10 = piVar2 + 1;
              iVar4 = *piVar2;
              uVar11 = (uint)(iVar7 == iVar4);
              piVar2 = piVar10;
            } while (iVar7 != iVar4 && piVar10 != piVar3);
          }
        }
        else if (piVar2 == piVar3) {
          uVar11 = 1;
        }
        else {
          do {
            piVar10 = piVar2 + 1;
            iVar4 = *piVar2;
            uVar11 = (uint)(iVar7 != iVar4);
            piVar2 = piVar10;
          } while (iVar7 != iVar4 && piVar10 != piVar3);
        }
        _objc_release(param_3);
        goto LAB_105b42284;
      }
      goto LAB_105b421d0;
    }
    *param_4 = 0;
    bStack_43 = 0;
    (**(code **)(**(long **)(param_1 + 0x38) + 0x28))
              (*(long **)(param_1 + 0x38),param_2,param_3,&bStack_43);
    bVar6 = uVar11 != 1;
    bVar5 = bStack_43;
  }
  else {
    if (uVar11 - 0xf < 2) {
      *param_4 = 0;
      uVar11 = (uint)*(byte *)(param_1 + 0x30);
      goto LAB_105b42284;
    }
    if (uVar11 == 0xe) {
      lVar1 = 0x28;
      lVar8 = param_3;
      if (param_2 != 0) {
        lVar1 = 0x20;
        lVar8 = param_2;
      }
      (**(code **)(param_1 + lVar1))(lVar8,param_4);
      uVar11 = (uint)lVar8;
      goto LAB_105b42284;
    }
LAB_105b421d0:
    if ((uVar11 & 0xfffffffe) != 10) {
      uVar11 = 0;
      goto LAB_105b42284;
    }
    plVar12 = *(long **)(param_1 + 0x38);
    plVar9 = *(long **)(param_1 + 0x40);
    (**(code **)(*plVar12 + 0x28))(plVar12,param_2,param_3,&bStack_41);
    (**(code **)(*plVar9 + 0x28))(plVar9,param_2,param_3,&bStack_42);
    *param_4 = (bStack_41 | bStack_42) & 1;
    bVar6 = uVar11 == 0xb;
    bVar5 = (int)plVar12 == (int)plVar9;
  }
  uVar11 = (uint)(bVar6 ^ bVar5);
LAB_105b42284:
  _objc_release(param_3);
  return uVar11 & 1;
}



/* Entry: 105b422ac; end: 105b42527;  */

undefined8 * FUN_105b422ac(long param_1)

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
        *puVar6 = &PTR_FUN_1108d65e8;
        puVar6[7] = plVar7;
        lVar1 = *(long *)(param_1 + 0x48);
        lVar2 = *(long *)(param_1 + 0x50);
        puVar6[9] = 0;
        puVar6[8] = 0;
        puVar6[0xb] = 0;
        puVar6[10] = 0;
        FUN_105b416c0(puVar6 + 9,lVar1,lVar2,lVar2 - lVar1 >> 2);
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
    *puVar6 = &PTR_FUN_1108d65e8;
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
    *puVar6 = &PTR_FUN_1108d65e8;
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
      goto LAB_105b423d4;
    }
  }
  else if ((*(byte *)((long)plVar7 + 0x1b) & 1) != 0) {
    bVar13 = 1;
    goto LAB_105b423d4;
  }
  bVar13 = *(byte *)((long)plVar8 + 0x1b);
LAB_105b423d4:
  *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
  *(undefined1 *)(puVar6 + 3) = 0;
  *(byte *)((long)puVar6 + 0x19) = bVar9 & 1;
  *(byte *)((long)puVar6 + 0x1a) = bVar12 & 1;
  *(byte *)((long)puVar6 + 0x1b) = bVar13 & 1;
  *puVar6 = &PTR_FUN_1108d65e8;
  puVar6[7] = plVar7;
  puVar6[8] = plVar8;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = plVar7;
  puVar6[0xd] = plVar8;
  return puVar6;
}



/* Entry: 105b42528; end: 105b425b3;  */

void FUN_105b42528(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  FUN_105b425b4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105b425b4; end: 105b4264f;  */

void FUN_105b425b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfe2ee0(param_1);
  uVar2 = param_1;
  func_0x00010c0b5940(param_1);
  func_0x000100c4a928(uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105b42650; end: 105b42947; -[SCFindFriendsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b42650(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  
  puVar1 = PTR_PTR_1126c2848;
  _objc_alloc();
  lVar20 = (long)_DAT_11273045c;
  lVar2 = param_1 + lVar20;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_112730460;
  _objc_loadWeakRetained(lVar19);
  lVar4 = lVar19;
  func_0x00010bf49f40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112730464;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0041c0(puVar1,param_2,lVar3,lVar4,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar19);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar7 = PTR_PTR_1126c2850;
  _objc_alloc();
  lVar2 = param_1 + lVar20;
  _objc_loadWeakRetained();
  lVar8 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_112730468;
  _objc_loadWeakRetained();
  lVar9 = lVar19;
  func_0x00010beffd00();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + _DAT_11273046c);
  uVar17 = *(undefined8 *)(param_1 + _DAT_112730470);
  lVar5 = param_1 + _DAT_112730474;
  _objc_loadWeakRetained(lVar5);
  uVar18 = *(undefined8 *)(param_1 + _DAT_112730478);
  lVar3 = param_1 + lVar20;
  _objc_loadWeakRetained();
  lVar10 = lVar3;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c247980();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar20;
  _objc_loadWeakRetained();
  lVar12 = lVar4;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bf4f1a0();
  lVar6 = param_1 + lVar20;
  _objc_loadWeakRetained();
  lVar14 = lVar6;
  func_0x00010c136720();
  func_0x00010c056540(puVar7,param_2,lVar8,lVar9,uVar16,uVar17,lVar5,uVar18,lVar11,lVar13,lVar14);
  _objc_release(lVar6);
  _objc_release(lVar12);
  _objc_release(lVar4);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar3);
  _objc_release(lVar5);
  _objc_release(lVar9);
  _objc_release(lVar19);
  _objc_release(lVar8);
  _objc_release(lVar2);
  puVar15 = PTR_PTR_1126c2858;
  _objc_alloc();
  lVar20 = param_1 + lVar20;
  _objc_loadWeakRetained(lVar20);
  lVar2 = lVar20;
  func_0x00010bfaf3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040840(puVar15,param_2,puVar7,puVar1,lVar2);
  lVar19 = (long)_DAT_11273047c;
  uVar16 = *(undefined8 *)(param_1 + lVar19);
  *(undefined **)(param_1 + lVar19) = puVar15;
  _objc_release(uVar16);
  _objc_release(lVar2);
  _objc_release(lVar20);
  func_0x00010bf192c0(*(undefined8 *)(param_1 + lVar19));
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b42948; end: 105b429e3; -[SCFindFriendsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b42948(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112730478,0);
  _objc_destroyWeak(param_1 + _DAT_112730468);
  _objc_storeStrong(param_1 + _DAT_112730470,0);
  _objc_destroyWeak(param_1 + _DAT_112730474);
  _objc_storeStrong(param_1 + _DAT_11273046c,0);
  _objc_destroyWeak(param_1 + _DAT_112730464);
  _objc_destroyWeak(param_1 + _DAT_112730460);
  _objc_destroyWeak(param_1 + _DAT_11273045c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273047c,0);
  return;
}



/* Entry: 105b429e4; end: 105b42acf; -[SCFindFriendsModuleExecutionOrder initWithContext:contactPermissionInfoProvider:circumstanceEngine:] */

undefined1 *
FUN_105b429e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ec018;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010be0bea0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010bf4f1a0();
    *(undefined8 *)((long)puVar1 + 0x28) = uVar3;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105b42ad0; end: 105b42b5f; -[SCFindFriendsModuleExecutionOrder currentModuleType] */

long FUN_105b42ad0(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_1 + 0x20);
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010bf529e0();
  if ((ulong)(long)iVar1 < uVar2) {
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010c0dfd40(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c067fc0();
    _objc_release(lVar3);
  }
  else {
    lVar4 = -1;
  }
  lVar3 = param_1;
  func_0x00010be61100();
  if ((int)lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be6ed70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__overrideModuleTypeWithContactPe_1125794f8,lVar4);
    return param_1;
  }
  return lVar4;
}



/* Entry: 105b42b60; end: 105b42b6f; -[SCFindFriendsModuleExecutionOrder moveToNextModule] */

void FUN_105b42b60(long param_1)

{
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bf5f510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_currentModuleType_1125b56e8);
  return;
}



/* Entry: 105b42b70; end: 105b42bf3; -[SCFindFriendsModuleExecutionOrder _executionOrderForContext:] */

undefined ** FUN_105b42b70(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c073d80();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010bf4f1a0();
    if (uVar1 == 3) {
      ppuVar2 = &PTR__OBJC_CLASS___NSConstantArray_11117f2d0;
    }
    else {
      uVar1 = param_3;
      func_0x00010c083000();
      ppuVar2 = &PTR__OBJC_CLASS___NSConstantArray_11117f2e8;
      if ((int)uVar1 == 0) {
        ppuVar2 = &PTR__OBJC_CLASS___NSConstantArray_11117f300;
      }
    }
  }
  else {
    ppuVar2 = &PTR__OBJC_CLASS___NSConstantArray_11117f2b8;
  }
  _objc_release(param_3);
  return ppuVar2;
}



/* Entry: 105b42bf4; end: 105b42c7b; -[SCFindFriendsModuleExecutionOrder _overrideModuleTypeWithContactPermissionCheck:] */

long FUN_105b42bf4(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 == 1) {
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf4a260();
    _objc_release(lVar2);
    if (lVar3 == 1 || lVar3 == 4) {
      iVar1 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      param_3 = 2;
      if (iVar1 != 0) {
        param_3 = 3;
      }
    }
    else {
      param_3 = 1;
      if (lVar3 == 3) {
        param_3 = 3;
      }
    }
  }
  return param_3;
}



/* Entry: 105b42c7c; end: 105b42c8b; -[SCFindFriendsModuleExecutionOrder _moduleTypeNeedsContactPermissionCheck] */

bool FUN_105b42c7c(long param_1)

{
  return *(long *)(param_1 + 0x28) != 3;
}



/* Entry: 105b42c8c; end: 105b42cc7; -[SCFindFriendsModuleExecutionOrder .cxx_destruct] */

void FUN_105b42c8c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b42cc8; end: 105b42e87; -[SCFindFriendsNavRouter initWithUIContainer:allContactsLauncher:contactPermissionRequestScopeExposer:contactPermissionResumeScopeExposer:contactPermissionResumeScopeServices:userPhoneVerificationScopeExposer:sourcePage:contextSource:requestSource:] */

undefined1 *
FUN_105b42cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  puStack_68 = PTR_PTR_1126ec020;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x48) = param_10;
    *(undefined8 *)((long)puVar1 + 0x50) = param_11;
    puVar3 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
    func_0x00010c1c8b80(*(undefined8 *)((long)puVar1 + 0x58));
    func_0x00010c1cb760(*(undefined8 *)((long)puVar1 + 0x58));
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



/* Entry: 105b42e88; end: 105b42f5f; -[SCFindFriendsNavRouter startContactPermissionRequestWorkflow:] */

void FUN_105b42e88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aeb30;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1;
  func_0x00010be40440(param_1);
  func_0x00010c01f0a0(puVar1,param_2,0,lVar2,0,1);
  puVar3 = PTR_PTR_1126aeb38;
  _objc_alloc(PTR_PTR_1126aeb38);
  lVar2 = param_1;
  func_0x00010be1e680(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c056700(puVar3,param_2,lVar2,puVar1,param_3,*(undefined8 *)(param_1 + 0x50));
  _objc_release(param_3);
  _objc_release(lVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b42f60; end: 105b42f7f; -[SCFindFriendsNavRouter endContactPermissionRequestWorkflow] */

void FUN_105b42f60(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105b42f80; end: 105b4302f; -[SCFindFriendsNavRouter startContactPermissionResumeWorkflow:] */

void FUN_105b42f80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be1e680(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae5f8;
  func_0x00010bfcfbc0(PTR_PTR_1126ae5f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf23c00(uVar3,param_2,lVar1,puVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105b43030; end: 105b4304f; -[SCFindFriendsNavRouter endContactPermissionResumeWorkflow] */

void FUN_105b43030(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105b43050; end: 105b4310b; -[SCFindFriendsNavRouter startAllContactPageWorkflow:] */

void FUN_105b43050(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126aeb20;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c004720();
  puVar2 = PTR_PTR_1126aeb28;
  _objc_alloc();
  lVar3 = param_1;
  func_0x00010be1e680(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0581a0(puVar2,param_2,lVar3,param_3,puVar1);
  _objc_release(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar2;
  _objc_release(uVar4);
  _objc_release(lVar3);
  func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x28),
                      param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b4310c; end: 105b4313b; -[SCFindFriendsNavRouter endAllContactPageWorkflow] */

void FUN_105b4310c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf94c80(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b4313c; end: 105b43223; -[SCFindFriendsNavRouter startPhoneVerificationWorkflow:] */

void FUN_105b4313c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  func_0x00010c0720c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110f59bb8);
  puVar1 = PTR_PTR_1126c2860;
  if ((int)uVar4 == 0) {
    func_0x00010bfbadc0(PTR_PTR_1126c2860);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfbabc0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126c2868;
  _objc_alloc(PTR_PTR_1126c2868);
  lVar3 = param_1;
  func_0x00010be1e680(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c056720(puVar2,param_2,lVar3,puVar1,param_3);
  _objc_release(param_3);
  _objc_release(lVar3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x38),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b43224; end: 105b43243; -[SCFindFriendsNavRouter endPhoneVerificationWorkflow] */

void FUN_105b43224(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105b43244; end: 105b4330b; -[SCFindFriendsNavRouter _getCustomUIContainer] */

void FUN_105b43244(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0311a0(puVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105b4330c; end: 105b43353;  */

void FUN_105b4330c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7ed40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b43354; end: 105b43367;  */

void FUN_105b43354(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105b43360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 0x10))(param_2);
    return;
  }
  return;
}



/* Entry: 105b43368; end: 105b4349f; -[SCFindFriendsNavRouter _presentSubViewController:] */

undefined8 FUN_105b43368(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c27acc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b20(*(undefined8 *)(param_1 + 0x58),param_2,uVar3);
  _objc_release(uVar3);
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_40 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2224a0(uVar3,param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010bf0c980(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x58));
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_48 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_48,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2224c0(uVar3,param_2,puVar2,1);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_3;
  }
  ___stack_chk_fail();
  return 0;
}



/* Entry: 105b434a0; end: 105b434a7; -[SCFindFriendsNavRouter _isExplicitUserLevelPermissionDialogNeeded] */

undefined8 FUN_105b434a0(void)

{
  return 0;
}



/* Entry: 105b434a8; end: 105b4352b; -[SCFindFriendsNavRouter .cxx_destruct] */

void FUN_105b434a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 105b4352c; end: 105b435ef; -[SCFindFriendsWorkFlow initWithRouter:excutionOrder:delegate:] */

undefined1 *
FUN_105b4352c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ec028;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105b435f0; end: 105b4361b; -[SCFindFriendsWorkFlow beginWorkflow] */

void FUN_105b435f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf5f500(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be6d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__openSubModuleWithModuleType__112578f60,uVar1);
  return;
}



/* Entry: 105b4361c; end: 105b43677; -[SCFindFriendsWorkFlow _openSubModuleWithModuleType:] */

void FUN_105b4361c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 < 2) {
    if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c24fdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 8),PTR_s_startPhoneVerificationWorkflow__112671998,
                 param_1);
      return;
    }
    if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010c24e5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 8),PTR_s_startContactPermissionRequestWor_1126713a0,
                 param_1);
      return;
    }
  }
  else {
    if (param_3 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010c24e610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 8),PTR_s_startContactPermissionResumeWork_1126713a8,
                 param_1);
      return;
    }
    if (param_3 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010c24db10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 8),PTR_s_startAllContactPageWorkflow__1126710e8,param_1);
      return;
    }
  }
  return;
}



/* Entry: 105b43678; end: 105b436af; -[SCFindFriendsWorkFlow contactPermissionWorkflowSkipped] */

void FUN_105b43678(long param_1)

{
  func_0x00010bf944e0(*(undefined8 *)(param_1 + 8));
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfaf3a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b436b0; end: 105b436f3; -[SCFindFriendsWorkFlow contactPermissionWorkflowCompletedWithPermissionGranted:] */

void FUN_105b436b0(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf944e0(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  if (param_3 == 0) {
    func_0x00010bf5f500(uVar1);
  }
  else {
    func_0x00010c0d1860();
  }
                    /* WARNING: Could not recover jumptable at 0x00010be6d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__openSubModuleWithModuleType__112578f60,uVar1);
  return;
}



/* Entry: 105b436f4; end: 105b436f7; -[SCFindFriendsWorkFlow contactPermissionWorkflowCompletedWithGoToSettings:] */

void FUN_105b436f4(void)

{
  return;
}



/* Entry: 105b436f8; end: 105b4372f; -[SCFindFriendsWorkFlow allContactsWorkflowCompleted] */

void FUN_105b436f8(long param_1)

{
  func_0x00010bf94140(*(undefined8 *)(param_1 + 8));
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfaf3a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b43730; end: 105b43767; -[SCFindFriendsWorkFlow contactPermissionResumeWorkflowSkipped] */

void FUN_105b43730(long param_1)

{
  func_0x00010bf94500(*(undefined8 *)(param_1 + 8));
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfaf3a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b43768; end: 105b4376b; -[SCFindFriendsWorkFlow contactPermissionResumeWorkflowOSSettingsOpened] */

void FUN_105b43768(void)

{
  return;
}



/* Entry: 105b4376c; end: 105b4379f; -[SCFindFriendsWorkFlow userPhoneVerificationCompleted] */

void FUN_105b4376c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf95040(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0d1860(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be6d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__openSubModuleWithModuleType__112578f60,uVar1);
  return;
}



/* Entry: 105b437a0; end: 105b437d7; -[SCFindFriendsWorkFlow userPhoneVerificationExited] */

void FUN_105b437a0(long param_1)

{
  func_0x00010bf95040(*(undefined8 *)(param_1 + 8));
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfaf3a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b437d8; end: 105b4380f; -[SCFindFriendsWorkFlow .cxx_destruct] */

void FUN_105b437d8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b43810; end: 105b438e3; -[SCContactPermissionRequestScope initWithUIContainer:context:contactPermissionRequestWorkflowDelegate:requestSource:] */

undefined1 *
FUN_105b43810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126ec030;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105b438e4; end: 105b438eb; -[SCContactPermissionRequestScope context] */

undefined8 FUN_105b438e4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105b438ec; end: 105b438f3; -[SCContactPermissionRequestScope uiContainer] */

undefined8 FUN_105b438ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105b438f4; end: 105b4390b; -[SCContactPermissionRequestScope contactPermissionRequestWorkflowDelegate] */

void FUN_105b438f4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b4390c; end: 105b43913; -[SCContactPermissionRequestScope requestSource] */

undefined8 FUN_105b4390c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105b43914; end: 105b4394b; -[SCContactPermissionRequestScope .cxx_destruct] */

void FUN_105b43914(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b4394c; end: 105b439b3; -[SCContactPermissionRequestContext initWithIsFromRegistration:isExplicitUserLevelPermissionDialogNeeded:shouldDisplayGoToSystemSettingsDialog:shouldDisplayInterstitialPage:] */

void FUN_105b4394c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ec038;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
    *(undefined1 *)((long)puVar1 + 0xb) = param_6;
  }
  return;
}



/* Entry: 105b439b4; end: 105b439d7; -[SCContactPermissionRequestContext copyWithZone:] */

undefined8 FUN_105b439b4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105b439d8; end: 105b43a53; -[SCContactPermissionRequestContext hash] */

ulong * FUN_105b439d8(long param_1,undefined8 param_2,ulong *param_3)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ushort uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  ulong uVar8;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(undefined4 *)(param_1 + 8);
  uVar7 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar6 >> 0x18),
                                          (uint6)(byte)((uint)uVar6 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar6) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar6 >> 8),(short)uVar7);
  uVar8 = CONCAT44((int)(uVar7 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar7 = CONCAT26((short)(uVar8 >> 0x30),CONCAT24((short)(uVar7 >> 0x20),(int)uVar8)) &
          0xff01ff01ffffffff;
  uVar5 = (ushort)(uVar7 >> 0x30);
  uStack_38 = (ulong)uVar1 & 0xff;
  uStack_30 = uVar7 >> 0x10 & 0xff;
  uStack_28 = (ulong)CONCAT24(uVar5,(uint)(ushort)(uVar7 >> 0x20)) & 0xffffffff;
  uStack_20 = (ulong)uVar5;
  puVar2 = &uStack_38;
  func_0x000100505190(puVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == param_3) {
    puVar4 = (ulong *)0x1;
  }
  else {
    puVar4 = (ulong *)0x0;
    if ((puVar2 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar4 = puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((ulong)puVar3 & 1) == 0) ||
         ((((char)puVar2[1] != (char)param_3[1] ||
           (*(char *)((long)puVar2 + 9) != *(char *)((long)param_3 + 9))) ||
          (*(char *)((long)puVar2 + 10) != *(char *)((long)param_3 + 10))))) {
        puVar4 = (ulong *)0x0;
      }
      else {
        puVar4 = (ulong *)(ulong)(*(char *)((long)puVar2 + 0xb) == *(char *)((long)param_3 + 0xb));
      }
    }
  }
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 105b43a54; end: 105b43b0b; -[SCContactPermissionRequestContext isEqual:] */

bool FUN_105b43a54(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) == 0) ||
         (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
           (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
          (*(char *)(param_1 + 10) != *(char *)(param_3 + 10))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105b43b0c; end: 105b43b13; -[SCContactPermissionRequestContext isFromRegistration] */

undefined1 FUN_105b43b0c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105b43b14; end: 105b43b1b; -[SCContactPermissionRequestContext isExplicitUserLevelPermissionDialogNeeded] */

undefined1 FUN_105b43b14(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105b43b1c; end: 105b43b23; -[SCContactPermissionRequestContext shouldDisplayGoToSystemSettingsDialog] */

undefined1 FUN_105b43b1c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 105b43b24; end: 105b43b2b; -[SCContactPermissionRequestContext shouldDisplayInterstitialPage] */

undefined1 FUN_105b43b24(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 105b43b2c; end: 105b44423; -[SCFriendingSuggestionTakeoverComposerViewController initWithCurrentPageTracker:context:suggestionTakeoverLogger:valdiRuntimeProvider:suggetionTakeoverDelegate:friendStoreFactory:suggestedFriendStoringFactory:incomingFriendStoringFactory:circumstanceEngine:recentlyActiveStore:selectedSuggestionsRepository:snapchattersDataMutator:cofStore:viewedIncomingFriendsTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105b43b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9,
             long param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
             undefined8 param_14,undefined8 param_15,long param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_1b0 [8];
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_80 = PTR_PTR_1126ec040;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127304ec,param_7);
    lVar12 = (long)_DAT_1127304f0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_5;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_1127304f4;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined8 *)((long)puVar1 + lVar14) = param_11;
    _objc_release(uVar2);
    lVar12 = (long)_DAT_1127304f8;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_14;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b1538;
    _objc_alloc(PTR_PTR_1126b1538);
    func_0x000108c07454(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010c033420(puVar3);
    lVar12 = param_9;
    (**(code **)(param_9 + 0x10))(param_9,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b0c98;
    _objc_alloc();
    func_0x00010c0368e0();
    lVar14 = param_8;
    (**(code **)(param_8 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar14);
    puVar6 = PTR_PTR_1126b1530;
    _objc_alloc();
    func_0x00010c0460e0();
    lVar14 = param_10;
    (**(code **)(param_10 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1abec0(param_4);
    _objc_release(lVar13);
    lVar13 = (long)_DAT_1127304fc;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined8 *)((long)puVar1 + lVar13) = param_13;
    _objc_release(uVar2);
    puVar7 = PTR_PTR_1126ae820;
    _objc_opt_new();
    lVar15 = (long)_DAT_112730500;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined **)((long)puVar1 + lVar15) = puVar7;
    _objc_release(uVar2);
    func_0x00010c1a0100(param_4);
    lVar13 = lVar12;
    func_0x00010c269d40(lVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20f980(param_4);
    _objc_release(lVar13);
    _objc_initWeak(auStack_90,puVar1);
    puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105b44424;
    puStack_a0 = &UNK_1108434b0;
    _objc_copyWeak(auStack_98,auStack_90);
    func_0x00010c1d1b40(param_4);
    uVar2 = param_12;
    func_0x00010c269d40(param_12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e85c0(param_4);
    _objc_release(uVar2);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000108c07454(param_11);
    func_0x00010c0df6e0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fad80(param_4);
    _objc_release(puVar8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010c272120(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173560(param_4);
    _objc_release(uVar2);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c201f00(param_4);
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126c2870;
    _objc_alloc_init(PTR_PTR_1126c2870);
    puStack_e0 = puVar7;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x105b44450;
    puStack_c8 = &UNK_110855460;
    _objc_copyWeak(auStack_c0,auStack_90);
    func_0x00010c1d2700(puVar8);
    puStack_108 = puVar7;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x105b44498;
    puStack_f0 = &UNK_110855430;
    _objc_copyWeak(auStack_e8,auStack_90);
    func_0x00010c1d26c0(puVar8);
    puStack_130 = puVar7;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_105b444e0;
    puStack_118 = &UNK_110855490;
    _objc_copyWeak(auStack_110,auStack_90);
    func_0x00010c1d1640(puVar8);
    puStack_158 = puVar7;
    uStack_150 = 0xc2000000;
    pcStack_148 = FUN_105b44560;
    puStack_140 = &UNK_110855260;
    _objc_copyWeak(auStack_138,auStack_90);
    func_0x00010c1d2f80(puVar8);
    puStack_180 = puVar7;
    uStack_178 = 0xc2000000;
    uStack_170 = 0x105b445a8;
    puStack_168 = &UNK_110855260;
    _objc_copyWeak(auStack_160,auStack_90);
    func_0x00010c1d2fc0(puVar8);
    puStack_1a8 = puVar7;
    uStack_1a0 = 0xc2000000;
    pcStack_198 = FUN_105b445f0;
    puStack_190 = &UNK_1108d6708;
    _objc_copyWeak(auStack_188,auStack_90);
    func_0x00010c1d3440(puVar8);
    _objc_copyWeak(auStack_1b0,auStack_90);
    func_0x00010c1d19a0(puVar8);
    func_0x00010c1a90a0(param_4);
    func_0x00010c17df40(param_4);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar13 = param_16;
    func_0x00010c269d40(param_16);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar13;
    func_0x00010bfebee0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar15;
    func_0x00010c0b4ca0();
    func_0x00010c0df720(((double)lVar9 / 1000.0) * 1000.0,puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b83e0(param_4);
    _objc_release(puVar7);
    _objc_release(lVar15);
    _objc_release(lVar13);
    puVar7 = PTR_PTR_1126c2878;
    _objc_alloc();
    uVar2 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar2;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c061d40();
    uVar10 = *(undefined8 *)((long)puVar1 + (long)_DAT_112730504);
    *(undefined **)((long)puVar1 + (long)_DAT_112730504) = puVar7;
    _objc_release(uVar10);
    _objc_release(uVar11);
    _objc_release();
    func_0x00010b8373e4();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = (long)_DAT_112730508;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined8 *)((long)puVar1 + lVar13) = uVar2;
    _objc_release(uVar11);
    func_0x00010c1797c0(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010c19efc0(0x3ff0000000000000,*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010c219b20(puVar1);
    func_0x00010c1c8b80(puVar1);
    func_0x00010c189400(puVar1);
    func_0x00010bec8380(puVar1);
    _objc_destroyWeak(auStack_1b0);
    _objc_destroyWeak(auStack_188);
    _objc_destroyWeak(auStack_160);
    _objc_destroyWeak(auStack_138);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_release(puVar8);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
    _objc_release(lVar14);
    _objc_release(puVar6);
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_release(lVar12);
    _objc_release(puVar3);
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
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
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105b44424; end: 105b444df;  */

void FUN_105b44424(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebc720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b444e0; end: 105b4455f;  */

void FUN_105b444e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c075680(param_2);
  _objc_release(param_2);
  func_0x00010beeaec0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b44560; end: 105b445ef;  */

void FUN_105b44560(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6c460();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b445f0; end: 105b44657;  */

void FUN_105b445f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6c540();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b44658; end: 105b44683;  */

void FUN_105b44658(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6c380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b44684; end: 105b44907; -[SCFriendingSuggestionTakeoverComposerViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b44684(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  double dVar7;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_78 = PTR_PTR_1126ec040;
  lStack_80 = param_5;
  _objc_msgSendSuper2(&lStack_80,PTR_s_viewDidLoad_112684cd8);
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4c20();
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar7 = param_4 * 0.25;
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar6 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(lVar6);
  _objc_release(lVar1);
  lVar6 = (long)_DAT_112730504;
  func_0x00010c19f0e0(0,dVar7,param_3,param_4 - dVar7,*(undefined8 *)(param_5 + lVar6));
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar6));
  func_0x00010bf199e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar6));
  func_0x00010c19f0e0(puVar3);
  _objc_retainAutorelease(puVar2);
  func_0x00010bdc1040();
  func_0x00010c1d9820(puVar3);
  uVar4 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2c00();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar4);
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_5 + _DAT_112730508);
  uStack_70 = *(undefined8 *)(param_5 + lVar6);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067a20(uVar4);
  _objc_release(puVar5);
  func_0x00010c24fc40(*(undefined8 *)(param_5 + _DAT_11273050c));
  _objc_release(puVar3);
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_105b44908;
  puStack_a8 = PTR_PTR_1126ec040;
  puStack_b0 = puVar3;
  puStack_a0 = puVar2;
  lStack_98 = param_5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_viewDidAppear__112684bd0);
  uVar4 = *(undefined8 *)(puVar3 + _DAT_1127304f0);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ac760();
  _objc_release(uVar4);
  func_0x00010bf03400(0x3fe0000000000000,PTR__OBJC_CLASS___UIView_1126aec20);
  return;
}



/* Entry: 105b44908; end: 105b44a13; -[SCFriendingSuggestionTakeoverComposerViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b44908(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ec040;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127304f0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ac760();
  _objc_release(uVar1);
  func_0x00010bf03400(0x3fe0000000000000,PTR__OBJC_CLASS___UIView_1126aec20);
  return;
}



/* Entry: 105b44a14; end: 105b44a1f; -[SCFriendingSuggestionTakeoverComposerViewController defaultProjectNameV2] */

undefined ** FUN_105b44a14(void)

{
  return &PTR____CFConstantStringClassReference_110db7938;
}



/* Entry: 105b44a20; end: 105b44a27; -[SCFriendingSuggestionTakeoverComposerViewController pageViewName] */

undefined8 FUN_105b44a20(void)

{
  return 0x144;
}



/* Entry: 105b44a28; end: 105b44a2b; -[SCFriendingSuggestionTakeoverComposerViewController cardToExpandTransition] */

void FUN_105b44a28(void)

{
  return;
}



/* Entry: 105b44a2c; end: 105b44a37; -[SCFriendingSuggestionTakeoverComposerViewController cardTransitionWillBeginWithView:] */

void FUN_105b44a2c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105b44a38; end: 105b44b03; -[SCFriendingSuggestionTakeoverComposerViewController cardTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_105b44a38(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_3 + _DAT_112730504);
  if ((param_5 == uVar1) && (func_0x00010bf2d520(param_1,param_2,uVar1,param_4,1), (uVar1 & 1) != 0)
     ) {
    uVar3 = 0;
  }
  else {
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_4,0xd6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_3,param_4,puVar2);
    _objc_release(puVar2);
    _objc_release(param_3);
    uVar3 = 1;
  }
  _objc_release(param_5);
  return uVar3;
}



/* Entry: 105b44b04; end: 105b44b9f; -[SCFriendingSuggestionTakeoverComposerViewController cardTransitionEndedWithView:transitionType:] */

void FUN_105b44b04(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_1,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(param_1);
  }
  else if (param_4 == 1) {
    func_0x00010bee6c00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b44ba0; end: 105b44c07; -[SCFriendingSuggestionTakeoverComposerViewController _userDismissedThePage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b44ba0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127304f0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5360();
  _objc_release(uVar1);
  param_1 = param_1 + _DAT_1127304ec;
  _objc_loadWeakRetained(param_1);
  func_0x00010c262680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b44c08; end: 105b44cab; -[SCFriendingSuggestionTakeoverComposerViewController _skipOrContinueButtonClicked] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b44c08(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + _DAT_112730510);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127304f0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  if (cVar1 == '\x01') {
    func_0x00010c0a3f20();
    _objc_release(uVar2);
    param_1 = param_1 + _DAT_1127304ec;
    _objc_loadWeakRetained(param_1);
    func_0x00010c262640();
  }
  else {
    func_0x00010c0aa080();
    _objc_release(uVar2);
    param_1 = param_1 + _DAT_1127304ec;
    _objc_loadWeakRetained(param_1);
    func_0x00010c262660();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b44cac; end: 105b44d63; -[SCFriendingSuggestionTakeoverComposerViewController _onUserOpenCamera:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b44cac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b15c8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c040e60();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x000107cf1ac8(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112730514);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar4,param_2,param_1,puVar2,lVar3);
  _objc_release(lVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b44d64; end: 105b44e1b; -[SCFriendingSuggestionTakeoverComposerViewController _onUserOpenChat:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b44d64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b15c8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c040e60();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x000107cf1b4c(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112730518);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar4,param_2,param_1,puVar2,lVar3);
  _objc_release(lVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b44e1c; end: 105b44ee3; -[SCFriendingSuggestionTakeoverComposerViewController _onUserClickedBottomCTAButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b44e1c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11273051c;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x000100504554(uVar2,&PTR___NSConcreteGlobalBlock_1108d6738);
    puVar3 = PTR_PTR_1126ae5c0;
    func_0x00010c0d1b80(PTR_PTR_1126ae5c0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127304f8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd2960();
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010bf529e0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be03790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__dismissTakeoverFromBottomCTABut_11255e780,lVar1 != 0);
  return;
}



/* Entry: 105b44ee4; end: 105b44f5b;  */

void FUN_105b44ee4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  func_0x00010bfebe20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR_PTR_1126b1940;
  _objc_alloc(PTR_PTR_1126b1940);
  func_0x00010c048c40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105b44f5c; end: 105b45023; -[SCFriendingSuggestionTakeoverComposerViewController _dismissTakeoverFromBottomCTAButtonClick:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b44f5c(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273051c);
  func_0x000100504554(uVar1,&PTR___NSConcreteGlobalBlock_1108d6758);
  lVar3 = (long)_DAT_1127304f0;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aa780();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a6f00();
  _objc_release(uVar2);
  param_1 = param_1 + _DAT_1127304ec;
  _objc_loadWeakRetained(param_1);
  if (param_3 == 0) {
    func_0x00010c262660();
  }
  else {
    func_0x00010c262640();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b45024; end: 105b4502b;  */

void FUN_105b45024(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 105b4502c; end: 105b450cf; -[SCFriendingSuggestionTakeoverComposerViewController _onUserToggledSuggestion:completionBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b4502c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127304fc);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c293f60(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  (**(code **)(param_4 + 0x10))(param_4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105b450d0; end: 105b4521b; -[SCFriendingSuggestionTakeoverComposerViewController _subscribeToSelectedSuggestionsIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b450d0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_1127304f4);
  func_0x000108c07454();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + _DAT_112730520);
    *(undefined **)(param_1 + _DAT_112730520) = puVar2;
    _objc_release(uVar5);
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127304fc);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c15a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar4 = uVar5;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 105b4521c; end: 105b45263;  */

void FUN_105b4521c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdffa00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b45264; end: 105b4537b; -[SCFriendingSuggestionTakeoverComposerViewController _didReceiveSelectedSuggestedSnapchatters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b45264(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11273051c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  *(long *)(param_1 + lVar5) = param_3;
  _objc_release(uVar1);
  lVar5 = param_3;
  func_0x00010bf529e0();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112730500);
  if (lVar5 == 0) {
    func_0x000105b46018();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar1,param_2,lVar5);
  }
  else {
    FUN_105b46000();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar2 = param_3;
    func_0x00010bf529e0(param_3);
    func_0x00010c0df840(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar1,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b4537c; end: 105b454bf; -[SCFriendingSuggestionTakeoverComposerViewController _willShowSuggestedFriend:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b4537c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_1127304f0;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c07be00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a8140(uVar4,param_2,lVar1,lVar2 != 0);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(uVar4);
  lVar1 = param_3;
  func_0x00010699eb74(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfec9e0(param_3);
  func_0x00010c0df720(puVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c07be00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0bbbc0(uVar4,param_2,lVar1,puVar3,lVar2);
  _objc_release(lVar2);
  _objc_release(puVar3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b454c0; end: 105b4561f; -[SCFriendingSuggestionTakeoverComposerViewController _willShowIncomingFriend:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b454c0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_1127304f0;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c07be00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a8120(uVar4,param_2,lVar1,lVar2 != 0);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126b15c8;
  _objc_alloc(PTR_PTR_1126b15c8);
  lVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c05c0e0(puVar3,param_2,lVar1,0,&PTR____CFConstantStringClassReference_110daafd8,0,0,0,
                      0,0);
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb700();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105b45620; end: 105b4569f; -[SCFriendingSuggestionTakeoverComposerViewController _willAddFriend:isIncoming:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b45620(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + _DAT_112730510) = 1;
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127304f0);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    func_0x00010c0a0da0();
  }
  else {
    func_0x00010c0a0d80();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b456a0; end: 105b456af; -[SCFriendingSuggestionTakeoverComposerViewController openChatActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105b456a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112730518);
}



/* Entry: 105b456b0; end: 105b456ef; -[SCFriendingSuggestionTakeoverComposerViewController setOpenChatActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b456b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112730518;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b456f0; end: 105b456ff; -[SCFriendingSuggestionTakeoverComposerViewController openCameraActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105b456f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112730514);
}



/* Entry: 105b45700; end: 105b4573f; -[SCFriendingSuggestionTakeoverComposerViewController setOpenCameraActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b45700(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112730514;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b45740; end: 105b4582b; -[SCFriendingSuggestionTakeoverComposerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b45740(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112730514,0);
  _objc_storeStrong(param_1 + _DAT_112730518,0);
  _objc_storeStrong(param_1 + _DAT_1127304f8,0);
  _objc_storeStrong(param_1 + _DAT_11273051c,0);
  _objc_storeStrong(param_1 + _DAT_112730520,0);
  _objc_storeStrong(param_1 + _DAT_112730500,0);
  _objc_storeStrong(param_1 + _DAT_1127304fc,0);
  _objc_storeStrong(param_1 + _DAT_1127304f4,0);
  _objc_storeStrong(param_1 + _DAT_112730508,0);
  _objc_storeStrong(param_1 + _DAT_112730504,0);
  _objc_storeStrong(param_1 + _DAT_1127304f0,0);
  _objc_storeStrong(param_1 + _DAT_11273050c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127304ec);
  return;
}



/* Entry: 105b4582c; end: 105b45c6f; -[SCFriendingSuggestionTakeoverFeatureEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b4582c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined *puVar25;
  undefined *puVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined8 uVar30;
  
  lVar1 = param_1 + _DAT_112730524;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf3f680();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126c2880;
  _objc_alloc();
  lVar1 = param_1 + _DAT_112730528;
  _objc_loadWeakRetained();
  lVar5 = lVar1;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c2888;
  _objc_opt_new();
  lVar7 = param_1;
  func_0x00010bdf4540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_11273052c;
  _objc_loadWeakRetained();
  lVar8 = lVar2;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = (long)_DAT_112730530;
  lVar9 = param_1 + lVar27;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c262620();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = (long)_DAT_112730534;
  lVar11 = param_1 + lVar28;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bfb8b80();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + lVar28;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010c261ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + lVar28;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010bfebe60();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_112730538;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + lVar28;
  _objc_loadWeakRetained();
  lVar19 = lVar28;
  func_0x00010c122800();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_11273053c;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010c15a160();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = (long)_DAT_112730540;
  lVar22 = param_1 + lVar29;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + lVar29;
  _objc_loadWeakRetained();
  lVar24 = lVar29;
  func_0x00010c29ec60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0071a0(puVar4,param_2,lVar5,puVar6,lVar7,lVar8,lVar10,lVar12,lVar14,lVar16,lVar18,
                      lVar19,lVar21,lVar23,lVar3,lVar24);
  _objc_release(lVar24);
  _objc_release(lVar29);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar28);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126c2890;
  _objc_alloc(PTR_PTR_1126c2890);
  uVar30 = *(undefined8 *)(param_1 + _DAT_112730544);
  lVar1 = param_1 + _DAT_112730560;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bffd980(puVar6,param_2,uVar30,lVar1,puVar4);
  _objc_release(lVar1);
  func_0x00010c1d4d00(puVar4,param_2,puVar6);
  puVar25 = PTR_PTR_1126b3530;
  _objc_alloc(PTR_PTR_1126b3530);
  func_0x00010c038f40();
  puVar26 = PTR_PTR_1126c2898;
  _objc_alloc();
  uVar30 = *(undefined8 *)(param_1 + _DAT_112730548);
  lVar1 = param_1 + _DAT_11273054c;
  _objc_loadWeakRetained();
  func_0x00010bffde60(puVar26,param_2,uVar30,lVar1,puVar25);
  _objc_release(lVar1);
  func_0x00010c1d4d40(puVar4,param_2,puVar26);
  param_1 = param_1 + lVar27;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar6);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105b45c70; end: 105b45ddf; -[SCFriendingSuggestionTakeoverFeatureEntryPoint _createSuggestionTakeoverLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b45c70(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  lVar1 = param_1 + _DAT_112730550;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112730554;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112730558;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010c11e240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdef220(param_1,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126b4a50;
  _objc_alloc();
  func_0x00010c05f0c0();
  puVar6 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105b45de0;
  puStack_68 = &UNK_1108d6778;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  lStack_50 = param_1;
  puStack_48 = puVar5;
  _objc_retain();
  func_0x00010bf11fe0(puVar6,param_2,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_48);
  _objc_release(puVar5);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105b45de0; end: 105b45e2b;  */

void FUN_105b45de0(void)

{
  _objc_alloc(PTR_PTR_1126c28a0);
  func_0x00010bff87a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b45e2c; end: 105b45f17; -[SCFriendingSuggestionTakeoverFeatureEntryPoint _createLazyQuickAddLoggerWithQuickAddCreator:] */

void FUN_105b45e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105b45ec4;
  puStack_30 = &UNK_1108b6340;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105b45f18; end: 105b45fff; -[SCFriendingSuggestionTakeoverFeatureEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b45f18(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273054c);
  _objc_storeStrong(param_1 + _DAT_112730548,0);
  _objc_destroyWeak(param_1 + _DAT_112730560);
  _objc_storeStrong(param_1 + _DAT_112730544,0);
  _objc_destroyWeak(param_1 + _DAT_112730558);
  _objc_destroyWeak(param_1 + _DAT_112730540);
  _objc_destroyWeak(param_1 + _DAT_112730524);
  _objc_destroyWeak(param_1 + _DAT_112730538);
  _objc_destroyWeak(param_1 + _DAT_11273053c);
  _objc_destroyWeak(param_1 + _DAT_112730534);
  _objc_destroyWeak(param_1 + _DAT_112730554);
  _objc_destroyWeak(param_1 + _DAT_112730550);
  _objc_destroyWeak(param_1 + _DAT_11273052c);
  _objc_destroyWeak(param_1 + _DAT_112730528);
  _objc_destroyWeak(param_1 + _DAT_112730530);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273055c);
  return;
}



/* Entry: 105b46000; end: 105b4602f;  */

void FUN_105b46000(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1f238;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e1f238,
                      &PTR____CFConstantStringClassReference_110e1f258,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105b46030; end: 105b4603b; +[SCCSuggestionTakeoverView componentPath] */

undefined ** FUN_105b46030(void)

{
  return &PTR____CFConstantStringClassReference_110e1f298;
}


