/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1057f195c; end: 1057f19d3;  */

void FUN_1057f195c(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_1057f19d4(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 1057f19d4; end: 1057f1a0f;  */

void FUN_1057f19d4(long *param_1,long param_2)

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
  FUN_1057f1a10();
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  *puVar2 = &PTR_FUN_1108b4cd8;
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



/* Entry: 1057f1a10; end: 1057f1a23;  */

void FUN_1057f1a10(void)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  *puVar1 = &PTR_FUN_1108b4cd8;
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



/* Entry: 1057f1a24; end: 1057f1a8f;  */

void FUN_1057f1a24(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_1108b4cd8;
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



/* Entry: 1057f1a90; end: 1057f214b;  */

void FUN_1057f1a90(long param_1,undefined8 param_2,int *param_3)

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
    goto code_r0x0001057f20f0;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x0001057f2110;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x0001057f2110;
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
code_r0x0001057f2084:
                    /* WARNING: Could not recover jumptable at 0x0001057f20a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x0001057f2084;
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
      goto code_r0x0001057f2110;
    }
    goto code_r0x0001057f2104;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x0001057f2104;
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
    goto code_r0x0001057f2110;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x0001057f2110;
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
    goto LAB_1057f2120;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x0001057f20f0:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x0001057f2104:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x0001057f2110:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_1057f2120:
  return;
}



/* Entry: 1057f214c; end: 1057f21d3;  */

void FUN_1057f214c(long param_1,undefined8 param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0001057f21c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 1057f21d4; end: 1057f230b;  */

void FUN_1057f21d4(long param_1,undefined8 param_2,int *param_3)

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
                    /* WARNING: Could not recover jumptable at 0x0001057f2300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 1057f230c; end: 1057f251f;  */

uint FUN_1057f230c(long param_1,long param_2,long param_3,byte *param_4)

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
        goto LAB_1057f24f8;
      }
      goto LAB_1057f2440;
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
      goto LAB_1057f24f8;
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
      goto LAB_1057f24f8;
    }
LAB_1057f2440:
    if ((uVar9 & 0xfffffffe) != 10) {
      uVar9 = 0;
      goto LAB_1057f24f8;
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
LAB_1057f24f8:
  _objc_release(param_3);
  return uVar9 & 1;
}



/* Entry: 1057f2520; end: 1057f2797;  */

undefined8 * FUN_1057f2520(long param_1)

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
        *puVar6 = &PTR_FUN_1108b4cd8;
        puVar6[7] = plVar7;
        lVar1 = *(long *)(param_1 + 0x48);
        lVar2 = *(long *)(param_1 + 0x50);
        puVar6[9] = 0;
        puVar6[8] = 0;
        puVar6[0xb] = 0;
        puVar6[10] = 0;
        FUN_1057f195c(puVar6 + 9,lVar1,lVar2,lVar2 - lVar1);
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
    *puVar6 = &PTR_FUN_1108b4cd8;
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
    *puVar6 = &PTR_FUN_1108b4cd8;
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
      goto LAB_1057f2644;
    }
  }
  else if ((*(byte *)((long)plVar7 + 0x1b) & 1) != 0) {
    bVar13 = 1;
    goto LAB_1057f2644;
  }
  bVar13 = *(byte *)((long)plVar8 + 0x1b);
LAB_1057f2644:
  *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
  *(undefined1 *)(puVar6 + 3) = 0;
  *(byte *)((long)puVar6 + 0x19) = bVar9 & 1;
  *(byte *)((long)puVar6 + 0x1a) = bVar12 & 1;
  *(byte *)((long)puVar6 + 0x1b) = bVar13 & 1;
  *puVar6 = &PTR_FUN_1108b4cd8;
  puVar6[7] = plVar7;
  puVar6[8] = plVar8;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = plVar7;
  puVar6[0xd] = plVar8;
  return puVar6;
}



/* Entry: 1057f2798; end: 1057f2803;  */

void FUN_1057f2798(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_DAT_1108b4d38;
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



/* Entry: 1057f2804; end: 1057f2ebf;  */

void FUN_1057f2804(long param_1,undefined8 param_2,int *param_3)

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
    goto code_r0x0001057f2e64;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x0001057f2e84;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x0001057f2e84;
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
code_r0x0001057f2df8:
                    /* WARNING: Could not recover jumptable at 0x0001057f2e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x0001057f2df8;
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
      goto code_r0x0001057f2e84;
    }
    goto code_r0x0001057f2e78;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x0001057f2e78;
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
    goto code_r0x0001057f2e84;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x0001057f2e84;
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
    goto LAB_1057f2e94;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x0001057f2e64:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x0001057f2e78:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x0001057f2e84:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_1057f2e94:
  return;
}



/* Entry: 1057f2ec0; end: 1057f2f47;  */

void FUN_1057f2ec0(long param_1,undefined8 param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0001057f2f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 1057f2f48; end: 1057f307f;  */

void FUN_1057f2f48(long param_1,undefined8 param_2,int *param_3)

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
                    /* WARNING: Could not recover jumptable at 0x0001057f3074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 1057f3080; end: 1057f3293;  */

uint FUN_1057f3080(long param_1,long param_2,long param_3,byte *param_4)

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
        goto LAB_1057f326c;
      }
      goto LAB_1057f31b4;
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
      goto LAB_1057f326c;
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
      goto LAB_1057f326c;
    }
LAB_1057f31b4:
    if ((uVar9 & 0xfffffffe) != 10) {
      uVar9 = 0;
      goto LAB_1057f326c;
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
LAB_1057f326c:
  _objc_release(param_3);
  return uVar9 & 1;
}



/* Entry: 1057f3294; end: 1057f350b;  */

undefined8 * FUN_1057f3294(long param_1)

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
        *puVar6 = &PTR_DAT_1108b4d38;
        puVar6[7] = plVar7;
        lVar1 = *(long *)(param_1 + 0x48);
        lVar2 = *(long *)(param_1 + 0x50);
        puVar6[9] = 0;
        puVar6[8] = 0;
        puVar6[0xb] = 0;
        puVar6[10] = 0;
        FUN_1057f0ae8(puVar6 + 9,lVar1,lVar2,lVar2 - lVar1);
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
    *puVar6 = &PTR_DAT_1108b4d38;
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
    *puVar6 = &PTR_DAT_1108b4d38;
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
      goto LAB_1057f33b8;
    }
  }
  else if ((*(byte *)((long)plVar7 + 0x1b) & 1) != 0) {
    bVar13 = 1;
    goto LAB_1057f33b8;
  }
  bVar13 = *(byte *)((long)plVar8 + 0x1b);
LAB_1057f33b8:
  *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
  *(undefined1 *)(puVar6 + 3) = 0;
  *(byte *)((long)puVar6 + 0x19) = bVar9 & 1;
  *(byte *)((long)puVar6 + 0x1a) = bVar12 & 1;
  *(byte *)((long)puVar6 + 0x1b) = bVar13 & 1;
  *puVar6 = &PTR_DAT_1108b4d38;
  puVar6[7] = plVar7;
  puVar6[8] = plVar8;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = plVar7;
  puVar6[0xd] = plVar8;
  return puVar6;
}



/* Entry: 1057f350c; end: 1057f3537; +[SCGrapheneFavoritesMetric addFavorite] */

void FUN_1057f350c(void)

{
  _objc_alloc(PTR_PTR_1126be9c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057f3538; end: 1057f3563; +[SCGrapheneFavoritesMetric removeFavorite] */

void FUN_1057f3538(void)

{
  _objc_alloc(PTR_PTR_1126be9c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057f3564; end: 1057f3603; -[SCGrapheneFavoritesMetric description] */

void FUN_1057f3564(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e04238;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e04238,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126ea610;
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



/* Entry: 1057f3604; end: 1057f374f; -[SCGrapheneRegistry favoritesGraphene] */

void FUN_1057f3604(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1057f368c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c07a8 != -1) {
    func_0x00010002a2fc(0x1136c07a8,&puStack_48);
  }
  uVar1 = uRam00000001136c07a0;
  _objc_retain(uRam00000001136c07a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1057f3750; end: 1057f377b; +[SCGrapheneUserdataMetric recentsMigrationSuccess] */

void FUN_1057f3750(void)

{
  _objc_alloc(PTR_PTR_1126be9c8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057f377c; end: 1057f37a7; +[SCGrapheneUserdataMetric recentsMigrationFailure] */

void FUN_1057f377c(void)

{
  _objc_alloc(PTR_PTR_1126be9c8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057f37a8; end: 1057f37d3; +[SCGrapheneUserdataMetric userdataUpdateJobSuccess] */

void FUN_1057f37a8(void)

{
  _objc_alloc(PTR_PTR_1126be9c8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057f37d4; end: 1057f37ff; +[SCGrapheneUserdataMetric userdataUpdateJobFailure] */

void FUN_1057f37d4(void)

{
  _objc_alloc(PTR_PTR_1126be9c8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057f3800; end: 1057f389f; -[SCGrapheneUserdataMetric description] */

void FUN_1057f3800(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e04298;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e04298,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126ea618;
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



/* Entry: 1057f38a0; end: 1057f39ff; -[SCGrapheneRegistry userdataGraphene] */

void FUN_1057f38a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1057f3928;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c07b8 != -1) {
    func_0x00010002a2fc(0x1136c07b8,&puStack_48);
  }
  uVar1 = uRam00000001136c07b0;
  _objc_retain(uRam00000001136c07b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1057f3a00; end: 1057f3acb; -[SCCTPUserDataUpdate initWithExternalId:category:entityType:updateType:attempts:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1057f3a00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1126ea620;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112729ff4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112729ff4) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112729ff8) = param_4;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112729ffc) = param_5;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11272a000) = param_6;
    *(undefined4 *)((long)puVar1 + (long)_DAT_11272a004) = param_7;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057f3acc; end: 1057f3aef; -[SCCTPUserDataUpdate copyWithZone:] */

undefined8 FUN_1057f3acc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1057f3af0; end: 1057f3b83; -[SCCTPUserDataUpdate hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1057f3af0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112729ff4);
  func_0x00010bfde980();
  lStack_48 = (long)*(char *)(param_1 + _DAT_112729ff8);
  lStack_40 = (long)*(char *)(param_1 + _DAT_112729ffc);
  lStack_38 = (long)*(char *)(param_1 + _DAT_11272a000);
  uStack_30 = (ulong)*(uint *)(param_1 + _DAT_11272a004);
  uStack_50 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1057f3c60;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if (((((ulong)puVar3 & 1) == 0) ||
        (((*(char *)((long)puVar2 + (long)_DAT_112729ff8) != param_3[_DAT_112729ff8] ||
          (*(char *)((long)puVar2 + (long)_DAT_112729ffc) != param_3[_DAT_112729ffc])) ||
         (*(char *)((long)puVar2 + (long)_DAT_11272a000) != param_3[_DAT_11272a000])))) ||
       (*(int *)((long)puVar2 + (long)_DAT_11272a004) != *(int *)(param_3 + _DAT_11272a004))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_1057f3c60;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + (long)_DAT_112729ff4);
    if (puVar4 != *(undefined1 **)(param_3 + _DAT_112729ff4)) {
      func_0x00010c071ae0();
      goto LAB_1057f3c60;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_1057f3c60:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 1057f3b84; end: 1057f3c7b; -[SCCTPUserDataUpdate isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1057f3b84(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1057f3c60;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) == 0) ||
        (((*(char *)(param_1 + (long)_DAT_112729ff8) != *(char *)(param_3 + (long)_DAT_112729ff8) ||
          (*(char *)(param_1 + (long)_DAT_112729ffc) != *(char *)(param_3 + (long)_DAT_112729ffc)))
         || (*(char *)(param_1 + (long)_DAT_11272a000) != *(char *)(param_3 + (long)_DAT_11272a000))
         ))) || (*(int *)(param_1 + (long)_DAT_11272a004) !=
                 *(int *)(param_3 + (long)_DAT_11272a004))) {
      lVar3 = 0;
      goto LAB_1057f3c60;
    }
    lVar3 = *(long *)(param_1 + (long)_DAT_112729ff4);
    if (lVar3 != *(long *)(param_3 + (long)_DAT_112729ff4)) {
      func_0x00010c071ae0();
      goto LAB_1057f3c60;
    }
  }
  lVar3 = 1;
LAB_1057f3c60:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1057f3c7c; end: 1057f3c8b; -[SCCTPUserDataUpdate externalId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1057f3c7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112729ff4);
}



/* Entry: 1057f3c8c; end: 1057f3c9b; -[SCCTPUserDataUpdate category] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1057f3c8c(long param_1)

{
  return (long)*(char *)(param_1 + _DAT_112729ff8);
}



/* Entry: 1057f3c9c; end: 1057f3cab; -[SCCTPUserDataUpdate entityType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1057f3c9c(long param_1)

{
  return (long)*(char *)(param_1 + _DAT_112729ffc);
}



/* Entry: 1057f3cac; end: 1057f3cbb; -[SCCTPUserDataUpdate updateType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1057f3cac(long param_1)

{
  return (long)*(char *)(param_1 + _DAT_11272a000);
}



/* Entry: 1057f3cbc; end: 1057f3ccb; -[SCCTPUserDataUpdate attempts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1057f3cbc(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11272a004);
}



/* Entry: 1057f3ccc; end: 1057f3cdf; -[SCCTPUserDataUpdate .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057f3ccc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112729ff4,0);
  return;
}



/* Entry: 1057f3ce0; end: 1057f3d9b;  */

undefined8 FUN_1057f3ce0(void)

{
  int iVar1;
  
  if ((bRam000000011381a240 & 1) == 0) {
    iVar1 = 0x1381a240;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011381a1d8 = 0xe;
      puRam000000011381a1e0 = &UNK_10f2fc2f7;
      uRam000000011381a1e8 = 0x1010000;
      pcRam000000011381a1f0 = FUN_1057f3d9c;
      pcRam000000011381a1f8 = FUN_1057f3dd8;
      ppuRam000000011381a1d0 = &PTR_DAT_1108b4d98;
      uRam000000011381a210 = 0;
      uRam000000011381a208 = 0;
      uRam000000011381a220 = 0;
      uRam000000011381a218 = 0;
      uRam000000011381a230 = 0;
      uRam000000011381a228 = 0;
      uRam000000011381a238 = 0;
      ___cxa_atexit(0x1057eef80,0x11381a1d0,0x100000000);
      ___cxa_guard_release(0x11381a240);
    }
  }
  return 0x11381a1d0;
}



/* Entry: 1057f3d9c; end: 1057f3dd7;  */

int FUN_1057f3d9c(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  char cVar2;
  ulong uVar3;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar3 == 0)) {
    cVar2 = '\0';
  }
  else {
    cVar2 = *(char *)((long)piVar1 + uVar3);
  }
  return (int)cVar2;
}



/* Entry: 1057f3dd8; end: 1057f3e2b;  */

undefined8 FUN_1057f3dd8(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010bf33240(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1057f3e2c; end: 1057f3ee7;  */

undefined8 FUN_1057f3e2c(void)

{
  int iVar1;
  
  if ((bRam000000011381a2b8 & 1) == 0) {
    iVar1 = 0x1381a2b8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011381a250 = 0xe;
      puRam000000011381a258 = &UNK_10f2fc300;
      uRam000000011381a260 = 0x1010000;
      pcRam000000011381a268 = FUN_1057f3ee8;
      pcRam000000011381a270 = FUN_1057f3f24;
      ppuRam000000011381a248 = &PTR_DAT_1108b4e08;
      uRam000000011381a288 = 0;
      uRam000000011381a280 = 0;
      uRam000000011381a298 = 0;
      uRam000000011381a290 = 0;
      uRam000000011381a2a8 = 0;
      uRam000000011381a2a0 = 0;
      uRam000000011381a2b0 = 0;
      ___cxa_atexit(0x1057ef05c,0x11381a248,0x100000000);
      ___cxa_guard_release(0x11381a2b8);
    }
  }
  return 0x11381a248;
}



/* Entry: 1057f3ee8; end: 1057f3f23;  */

int FUN_1057f3ee8(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  char cVar2;
  ulong uVar3;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xb) ||
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar3 == 0)) {
    cVar2 = '\0';
  }
  else {
    cVar2 = *(char *)((long)piVar1 + uVar3);
  }
  return (int)cVar2;
}



/* Entry: 1057f3f24; end: 1057f3f77;  */

undefined8 FUN_1057f3f24(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010c28b680(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1057f3f78; end: 1057f3f83; +[SCCTPUserDataUpdate table] */

undefined * FUN_1057f3f78(void)

{
  return &UNK_10f2fc30b;
}



/* Entry: 1057f3f84; end: 1057f40d7; +[SCCTPUserDataUpdate immutableObjectParse:bufferSize:] */

void FUN_1057f3f84(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  char cVar6;
  long lVar7;
  char cVar8;
  ulong uVar9;
  char cVar10;
  undefined *puVar11;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126be9f0;
  _objc_alloc(PTR_PTR_1126be9f0);
  lVar7 = (long)*piVar1;
  uVar3 = *(ushort *)((long)piVar1 - lVar7);
  if (uVar3 < 5) {
    puVar11 = (undefined *)0x0;
LAB_1057f406c:
    cVar6 = '\0';
LAB_1057f4074:
    cVar10 = '\0';
    cVar8 = '\0';
  }
  else {
    uVar9 = (ulong)((ushort *)((long)piVar1 - lVar7))[2];
    if (uVar9 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar9);
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = (long)*piVar1;
      uVar3 = *(ushort *)((long)piVar1 - lVar7);
    }
    if (uVar3 < 7) goto LAB_1057f406c;
    uVar9 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar7));
    cVar6 = '\0';
    if (uVar9 != 0) {
      cVar6 = *(char *)((long)piVar1 + uVar9);
    }
    if (uVar3 < 9) goto LAB_1057f4074;
    uVar9 = (ulong)*(ushort *)((long)piVar1 + (8 - lVar7));
    cVar8 = '\0';
    if (uVar9 != 0) {
      cVar8 = *(char *)((long)piVar1 + uVar9);
    }
    if (uVar3 < 0xb) {
      cVar10 = '\0';
    }
    else {
      uVar9 = (ulong)*(ushort *)((long)piVar1 + (10 - lVar7));
      cVar10 = '\0';
      if (uVar9 != 0) {
        cVar10 = *(char *)((long)piVar1 + uVar9);
      }
      if ((0xc < uVar3) && (uVar9 = (ulong)*(ushort *)((long)piVar1 + (0xc - lVar7)), uVar9 != 0)) {
        uVar5 = *(undefined4 *)((long)piVar1 + uVar9);
        goto LAB_1057f407c;
      }
    }
  }
  uVar5 = 0;
LAB_1057f407c:
  func_0x00010c011240(puVar4,param_2,puVar11,(int)cVar6,(int)cVar8,(int)cVar10,uVar5);
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1057f40d8; end: 1057f40fb; +[SCCTPUserDataUpdate objectClassFunctionPointer] */

undefined1  [16] FUN_1057f40d8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1057f40f4;
  auVar1._0_8_ = 0x1057f40ec;
  return auVar1;
}



/* Entry: 1057f40fc; end: 1057f41c7;  */

undefined1 *
FUN_1057f40fc(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined4 param_7)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_60;
  undefined *puStack_58;
  
  plVar1 = &lStack_60;
  _objc_retain(param_3);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_58 = PTR_PTR_1126ea628;
    lStack_60 = param_1;
    _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_3;
      _objc_release(uVar2);
      *(undefined1 *)((long)plVar1 + 0x14) = param_4;
      *(undefined1 *)((long)plVar1 + 0x15) = param_5;
      *(undefined1 *)((long)plVar1 + 0x16) = param_6;
      *(undefined4 *)((long)plVar1 + 0x18) = param_7;
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 1057f41c8; end: 1057f423b;  */

void FUN_1057f41c8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_1057f423c();
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



/* Entry: 1057f423c; end: 1057f45c7;  */

void FUN_1057f423c(undefined *param_1)

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
      func_0x00010bf9e140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar8,&UNK_10f2fc31f);
        if (puVar8 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010bf9e140(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar8,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar8;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar8;
            _sqlite3_column_int64(puVar8,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126be9f0);
            _sqlite3_column_blob(puVar8,1);
            _sqlite3_column_bytes(puVar8,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar8);
            if (puVar3 == (undefined *)0x0) goto LAB_1057f4528;
            puVar8 = PTR_PTR_1126be9f8;
            _objc_alloc(PTR_PTR_1126be9f8);
            puVar2 = puVar3;
            func_0x00010bf9e140(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010bf33240(puVar3);
            puVar5 = puVar3;
            func_0x00010bf96f00(puVar3);
            puVar6 = puVar3;
            func_0x00010c28b680(puVar3);
            puVar7 = puVar3;
            func_0x00010bf0dc20(puVar3);
            FUN_1057f40fc(puVar8,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7);
            param_1 = puVar3;
            goto LAB_1057f434c;
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
      _objc_opt_class(PTR_PTR_1126be9f0);
      puVar3 = puVar8;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar8);
      if (puVar3 != (undefined *)0x0) {
        puVar8 = PTR_PTR_1126be9f8;
        _objc_alloc(PTR_PTR_1126be9f8);
        puVar2 = puVar3;
        func_0x00010bf9e140(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf33240(puVar3);
        puVar5 = puVar3;
        func_0x00010bf96f00(puVar3);
        puVar6 = puVar3;
        func_0x00010c28b680(puVar3);
        puVar7 = puVar3;
        func_0x00010bf0dc20(puVar3);
        FUN_1057f40fc(puVar8,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7);
        param_1 = puVar3;
LAB_1057f434c:
        _objc_release(puVar2);
        goto LAB_1057f4530;
      }
LAB_1057f4528:
      param_1 = (undefined *)0x0;
    }
  }
  puVar8 = (undefined *)0x0;
LAB_1057f4530:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1057f45c8; end: 1057f463b;  */

void FUN_1057f45c8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_1057f423c();
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



/* Entry: 1057f463c; end: 1057f4833;  */

void FUN_1057f463c(long param_1,undefined1 *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126be9f8;
  FUN_1057f41c8(PTR_PTR_1126be9f8,param_1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar7 = PTR_PTR_1126be9f8;
    _objc_retain(param_1);
    _objc_opt_self(puVar7);
    puVar7 = PTR_PTR_1126be9f8;
    if (param_1 == 0) {
      _objc_opt_new();
      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      lVar2 = param_1;
      func_0x00010bf9e140(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bf33240(param_1);
      lVar4 = param_1;
      func_0x00010bf96f00(param_1);
      lVar5 = param_1;
      func_0x00010c28b680(param_1);
      lVar6 = param_1;
      func_0x00010bf0dc20(param_1);
      FUN_1057f40fc(puVar7,0xffffffffffffffff,lVar2,lVar3,lVar4,lVar5,lVar6);
      _objc_release(lVar2);
    }
    *(undefined4 *)(puVar7 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    lVar2 = param_1;
    func_0x00010bf9e140(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bf33240();
    puVar1[0x14] = (char)lVar2;
    lVar2 = param_1;
    func_0x00010bf96f00();
    puVar1[0x15] = (char)lVar2;
    lVar2 = param_1;
    func_0x00010c28b680();
    puVar1[0x16] = (char)lVar2;
    lVar2 = param_1;
    func_0x00010bf0dc20();
    *(int *)(puVar1 + 0x18) = (int)lVar2;
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



/* Entry: 1057f4834; end: 1057f48a3;  */

void FUN_1057f4834(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126be9f0;
    _objc_alloc(PTR_PTR_1126be9f0);
    func_0x00010c011240();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057f48a4; end: 1057f48af; -[SCCTPUserDataUpdateChangeRequest .cxx_destruct] */

void FUN_1057f48a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 1057f48b0; end: 1057f48bb; -[SCCTPUserDataUpdateChangeRequest table] */

undefined * FUN_1057f48b0(void)

{
  return &UNK_10f2fc30b;
}



/* Entry: 1057f48bc; end: 1057f4903; -[SCCTPUserDataUpdateChangeRequest createTableWithSQLite:] */

void FUN_1057f48bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10ddbeaa0,0x89,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 1057f4904; end: 1057f4c8b; -[SCCTPUserDataUpdateChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_1057f4904(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_1057f4834(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1057f4c8c(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f2fc393);
    if (lVar6 == 0) goto LAB_1057f4c28;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_1057f4c28;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126be9f0);
    func_0x00010c21c9a0(puVar7);
LAB_1057f4c10:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f2fc364);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126be9f0);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1057f4c34;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_1057f4c34;
    }
    FUN_1057f4834(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1057f4c8c(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f2fc3d3);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
      puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126be9f0);
        func_0x00010c21c9a0(puVar7);
        goto LAB_1057f4c10;
      }
    }
LAB_1057f4c28:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_1057f4c34:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1057f4c8c; end: 1057f4ecf;  */

ulong FUN_1057f4c8c(ulong param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  
  _objc_retain(param_2);
  pcVar4 = param_2;
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar4 == (char *)0x0) {
    uVar9 = 0;
    goto LAB_1057f4d90;
  }
  pcVar5 = pcVar4;
  _CFStringGetCStringPtr(pcVar4,0x8000100);
  uVar9 = param_1;
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5;
    _strlen(pcVar5);
    func_0x0001001cde08(param_1,pcVar5,pcVar6);
    goto LAB_1057f4d90;
  }
  pcVar5 = pcVar4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar5 == (char *)0x0) {
    pcVar5 = pcVar4;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar5 != (char *)0x0) goto LAB_1057f4d50;
    uVar9 = 0;
  }
  else {
LAB_1057f4d50:
    pcVar7 = pcVar5;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar8 = pcVar5;
    func_0x00010c08fa60(pcVar5);
    pcVar6 = "";
    if (pcVar7 != (char *)0x0) {
      pcVar6 = pcVar7;
    }
    func_0x0001001cde08(param_1,pcVar6,pcVar8);
  }
  _objc_release(pcVar5);
LAB_1057f4d90:
  _objc_release(pcVar4);
  pcVar5 = param_2;
  func_0x00010bf33240(param_2);
  pcVar6 = param_2;
  func_0x00010bf96f00(param_2);
  pcVar7 = param_2;
  func_0x00010c28b680(param_2);
  pcVar8 = param_2;
  func_0x00010bf0dc20(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce354(param_1,0xc,pcVar8,0);
  func_0x0001001ce2e4(param_1,4,uVar9 & 0xffffffff);
  func_0x0001001ce42c(param_1,10,pcVar7,0);
  func_0x0001001ce42c(param_1,8,pcVar6,0);
  func_0x0001001ce42c(param_1,6,pcVar5,0);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(pcVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1057f4ed0; end: 1057f4f4b;  */

undefined * FUN_1057f4ed0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c07c0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e04338,
                        &UNK_10ddbeb2c,&UNK_10ddbeb5c,6,FUN_1057f4f4c,0);
    do {
      if (puRam00000001136c07c0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c07c0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c07c0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c07c0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c07c0;
}



/* Entry: 1057f4f4c; end: 1057f4f63;  */

uint FUN_1057f4f4c(uint param_1)

{
  return (uint)(param_1 < 7) & 0x77U >> (ulong)(param_1 & 0x1f);
}



/* Entry: 1057f4f64; end: 1057f4fef; +[SCCTPCTComputeBackendData descriptor] */

undefined * FUN_1057f4f64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c07c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6c740,
                        &PTR____CFConstantStringClassReference_110e04358,&PTR_DAT_1131018e8,
                        &PTR_DAT_113101920,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001136c07c8 = puVar1;
  }
  return puRam00000001136c07c8;
}



/* Entry: 1057f4ff0; end: 1057f506b; +[SCCTPCTComputeBackendData_RequestedFeed descriptor] */

undefined * FUN_1057f4ff0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c07d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6c790,
                        &PTR____CFConstantStringClassReference_110e04378,&PTR_DAT_1131018e8,
                        &PTR_s_requestId_1131019c0,5,0x28,0x1c);
    func_0x00010c228780();
    puRam00000001136c07d0 = puVar1;
  }
  return puRam00000001136c07d0;
}



/* Entry: 1057f506c; end: 1057f50e7; +[SCCTPCTComputeBackendData_RequestedFeed_ClientFeatures descriptor] */

undefined * FUN_1057f506c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c07d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6c7e0,
                        &PTR____CFConstantStringClassReference_110debf78,&PTR_DAT_1131018e8,
                        &PTR_DAT_113101900,1,8,0x1c);
    func_0x00010c228780();
    puRam00000001136c07d8 = puVar1;
  }
  return puRam00000001136c07d8;
}



/* Entry: 1057f50e8; end: 1057f51df; +[SCCTPCTComputeBackendData_ChatRecentsOptions descriptor] */

undefined * FUN_1057f50e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c07e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6c830,
                        &PTR____CFConstantStringClassReference_110e04398,&PTR_DAT_1131018e8,
                        &PTR_DAT_113101960,3,0xc,0x1c);
    func_0x00010c228780();
    puRam00000001136c07e0 = puVar1;
  }
  return puRam00000001136c07e0;
}



/* Entry: 1057f51e0; end: 1057f51eb;  */

bool FUN_1057f51e0(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 1057f51ec; end: 1057f5253; +[SCCTPCTRequestParams descriptor] */

void FUN_1057f51ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c07f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6c920,
                        &PTR____CFConstantStringClassReference_110e043d8,&PTR_DAT_113101a68,
                        &PTR_DAT_113101b80,9,0x50,0x1c);
    puRam00000001136c07f0 = puVar1;
  }
  return;
}



/* Entry: 1057f5254; end: 1057f52df; +[SCCTPCTRequestOptions descriptor] */

undefined * FUN_1057f5254(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c07f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6c9e8,
                        &PTR____CFConstantStringClassReference_110e043f8,&PTR_DAT_113101a68,
                        &PTR_DAT_113101aa0,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001136c07f8 = puVar1;
  }
  return puRam00000001136c07f8;
}



/* Entry: 1057f52e0; end: 1057f535b; +[SCCTPCTRequestOptions_Cameos descriptor] */

undefined * FUN_1057f52e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0800 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6c998,
                        &PTR____CFConstantStringClassReference_110e04418,&PTR_DAT_113101a68,
                        &PTR_DAT_113101ae0,5,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001136c0800 = puVar1;
  }
  return puRam00000001136c0800;
}



/* Entry: 1057f535c; end: 1057f53df; +[SCCTPCTRequestOptions_Bitmoji descriptor] */

undefined * FUN_1057f535c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0808 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6ca10,
                        &PTR____CFConstantStringClassReference_110dec718,&PTR_DAT_113101a68,
                        &PTR_DAT_113101a80,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136c0808 = puVar1;
  }
  return puRam00000001136c0808;
}



/* Entry: 1057f53e0; end: 1057f5447; +[SCCTPAcceptLanguagesEntry descriptor] */

void FUN_1057f53e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0810 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6cab0,
                        &PTR____CFConstantStringClassReference_110e04438,&PTR_DAT_113101ca0,
                        &PTR_DAT_113101cb8,2,0x10,0x1c);
    puRam00000001136c0810 = puVar1;
  }
  return;
}



/* Entry: 1057f5448; end: 1057f552b; +[SCCTPCaptionsRequest descriptor] */

void FUN_1057f5448(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0818 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6cb50,
                        &PTR____CFConstantStringClassReference_110e04458,&PTR_DAT_113101cf8,
                        &PTR_DAT_113101d10,1,0x10,0x1c);
    puRam00000001136c0818 = puVar1;
  }
  return;
}



/* Entry: 1057f552c; end: 1057f5537;  */

bool FUN_1057f552c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1057f5538; end: 1057f559f; +[SCCTPUserInfo descriptor] */

void FUN_1057f5538(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0828 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6cbf0,
                        &PTR____CFConstantStringClassReference_110e00738,&PTR_DAT_113101d30,
                        &PTR_DAT_113101d48,0xf,0x58,0x1c);
    puRam00000001136c0828 = puVar1;
  }
  return;
}



/* Entry: 1057f55a0; end: 1057f5607; +[SCCTPGeoLocation descriptor] */

void FUN_1057f55a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0830 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6cc90,
                        &PTR____CFConstantStringClassReference_110e04498,&PTR_DAT_113101f28,
                        &PTR_s_latitude_113101f60,4,0x28,0x1c);
    puRam00000001136c0830 = puVar1;
  }
  return;
}



/* Entry: 1057f5608; end: 1057f566f; +[SCCTPTimeZone descriptor] */

void FUN_1057f5608(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0838 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6cce0,
                        &PTR____CFConstantStringClassReference_110e044b8,&PTR_DAT_113101f28,
                        &PTR_DAT_113101f40,1,8,0x1c);
    puRam00000001136c0838 = puVar1;
  }
  return;
}



/* Entry: 1057f5670; end: 1057f572b; -[SCCreativeToolsSnapReplyServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057f5670(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126bea00;
  _objc_alloc(PTR_PTR_1126bea00);
  lVar2 = param_1 + _DAT_11272a024;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c2542a0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11272a028;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c084e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04c900(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057f572c; end: 1057f576f; -[SCCreativeToolsSnapReplyServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057f572c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272a028);
  _objc_destroyWeak(param_1 + _DAT_11272a024);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272a02c);
  return;
}



/* Entry: 1057f5770; end: 1057f5907; -[SCSmartReplySearchTagServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057f5770(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_11272a038;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar5;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11272a034;
    _objc_loadWeakRetained();
  }
  lVar5 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126ae720;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1057f5908;
  puStack_68 = &UNK_1108b4e80;
  lStack_60 = lVar5;
  lStack_58 = lVar1;
  _objc_retain(lVar1);
  _objc_retain(lVar5);
  func_0x00010bf11fe0(puVar2,param_2,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = puVar3;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x1057f5990;
  puStack_90 = &UNK_1108b4eb0;
  puVar3 = PTR_PTR_1126ae720;
  puStack_88 = puVar2;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_a8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bea18;
  _objc_alloc(PTR_PTR_1126bea18);
  func_0x00010c042c40();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lStack_58);
  _objc_release(lStack_60);
  _objc_release(lVar1);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1057f5908; end: 1057f59c3;  */

void FUN_1057f5908(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110e044f8,0,0);
  puVar3 = (undefined *)0x0;
  if ((int)uVar1 != 0) {
    puVar3 = PTR_PTR_1126ae790;
    func_0x00010bfcd0e0(PTR_PTR_1126ae790,param_2,0,&PTR____CFConstantStringClassReference_110e044d8
                       );
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126bea08;
  _objc_alloc(PTR_PTR_1126bea08);
  func_0x00010c0033c0();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1057f59c4; end: 1057f5a07; -[SCSmartReplySearchTagServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057f59c4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272a038);
  _objc_destroyWeak(param_1 + _DAT_11272a034);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272a030);
  return;
}



/* Entry: 1057f5a08; end: 1057f5aaf; -[SCSmartReplySearchTagsModelProviderImpl initWithContentDelivery:withPerformer:] */

undefined1 *
FUN_1057f5a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ea630;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x38) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057f5ab0; end: 1057f5bcb; -[SCSmartReplySearchTagsModelProviderImpl prepareModelWithPath:withConfiguration:] */

void FUN_1057f5ab0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x30) == 0) {
    func_0x00010be78b80(param_1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057f5bcc; end: 1057f5c07;  */

void FUN_1057f5bcc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be78b80(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1057f5c08; end: 1057f5d83; -[SCSmartReplySearchTagsModelProviderImpl model] */

void FUN_1057f5c08(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c08fa60();
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar2 = PTR_PTR_1126ae558;
  if (lVar1 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    param_4 = 1;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    puVar6 = puVar4;
    func_0x00010bfe9c80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release();
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x38);
    puVar2 = PTR_PTR_1126ae560;
    _objc_alloc_init();
    puVar6 = *(undefined **)(param_1 + 0x10);
    if (puVar6 == (undefined *)0x0) {
      puVar8 = *(undefined **)(param_1 + 0x18);
      _objc_retain(puVar8);
    }
    else {
      func_0x00010bf43d60(puVar2);
      puVar8 = puVar2;
      func_0x00010bfbc3e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar2);
    puVar3 = param_1 + 0x38;
    _os_unfair_lock_unlock();
    puVar2 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(puVar2 + 0x38);
  __Unwind_Resume();
  _objc_retain(puVar6);
  _objc_retain(param_4);
  puVar2 = puVar6;
  func_0x00010c0720c0();
  if (((ulong)puVar2 & 1) == 0) {
    _os_unfair_lock_lock(puVar3 + 0x38);
    _objc_retain(puVar6);
    uVar5 = *(undefined8 *)(puVar3 + 8);
    *(undefined **)(puVar3 + 8) = puVar6;
    _objc_release(uVar5);
    if (*(long *)(puVar3 + 0x20) != 0) {
      func_0x00010bf2dba0();
    }
    uVar5 = *(undefined8 *)(puVar3 + 0x10);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126ae560;
    _objc_alloc_init();
    _objc_initWeak(auStack_98,puVar3);
    _objc_copyWeak(auStack_a0,auStack_98);
    _objc_retain(param_4);
    _objc_retain(puVar2);
    puVar4 = puVar3;
    func_0x00010be4dfa0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(puVar3 + 0x20);
    *(undefined **)(puVar3 + 0x20) = puVar4;
    _objc_release(uVar5);
    puVar4 = puVar2;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(puVar3 + 0x18);
    *(undefined **)(puVar3 + 0x18) = puVar4;
    _objc_release(uVar5);
    _objc_release(puVar2);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_98);
    _objc_release(puVar2);
    _os_unfair_lock_unlock(puVar3 + 0x38);
  }
  _objc_release(param_4);
  _objc_release(puVar6);
  return;
}



/* Entry: 1057f5d84; end: 1057f5f3f; -[SCSmartReplySearchTagsModelProviderImpl _prepareModelWithPath:withConfiguration:] */

void FUN_1057f5d84(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((uVar1 & 1) == 0) {
    _os_unfair_lock_lock(param_1 + 0x38);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(ulong *)(param_1 + 8) = param_3;
    _objc_release(uVar2);
    if (*(long *)(param_1 + 0x20) != 0) {
      func_0x00010bf2dba0();
    }
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae560;
    _objc_alloc_init();
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    _objc_retain(puVar3);
    lVar4 = param_1;
    func_0x00010be4dfa0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar4;
    _objc_release(uVar2);
    puVar5 = puVar3;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar5;
    _objc_release(uVar2);
    _objc_release(puVar3);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar3);
    _os_unfair_lock_unlock(param_1 + 0x38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057f5f40; end: 1057f6047;  */

void FUN_1057f5f40(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    func_0x00010c0c0800(param_2);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1057f6048; end: 1057f6177;  */

void FUN_1057f6048(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x00010c14d260();
  uVar1 = param_2;
  if ((int)uVar3 != 0) {
    func_0x00010c14df40(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
  puVar2 = PTR_PTR_1126bea20;
  func_0x00010bfbaa00(PTR_PTR_1126bea20);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c0c0800(puVar2);
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057f6178; end: 1057f6267;  */

void FUN_1057f6178(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bde2b20(uVar1);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1057f6268; end: 1057f6467; -[SCSmartReplySearchTagsModelProviderImpl _loadModelDataWithPath:withCompletion:] */

void FUN_1057f6268(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b08b8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0295e0();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf64e40(0x4143c68000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b1058;
  _objc_alloc();
  func_0x00010c01b360();
  puVar4 = PTR_PTR_1126b1050;
  _objc_alloc(PTR_PTR_1126b1050);
  uVar8 = param_3;
  func_0x00010c05a200();
  _objc_release(param_3);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1057f6468;
  puStack_60 = &UNK_110852c80;
  uStack_58 = param_4;
  _objc_retain(param_4);
  uVar7 = uVar5;
  func_0x00010c1267e0(uVar5,param_2,puVar1,puVar4,0,0,puVar6,puVar3,uVar8 & 0xffffffffffffff00,
                      &puStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 1057f6468; end: 1057f65cb;  */

void FUN_1057f6468(long param_1,undefined *param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar4 = PTR_PTR_1126af5d0;
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = *(undefined **)(param_1 + 0x20);
  if (param_3 == 0) {
    uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_40 = &PTR____CFConstantStringClassReference_110e04598;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&uStack_48,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    param_2 = puVar3;
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(puVar5 + 0x10))(puVar5,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
  }
  else {
    puVar3 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(puVar5 + 0x10))(puVar5,puVar3);
    puVar2 = puVar5;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar3);
      return;
    }
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  iVar1 = (int)puVar2 + 0x38;
  _os_unfair_lock_trylock();
  uVar6 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined **)(puVar2 + 0x10) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = 0;
  _objc_release(uVar6);
  _objc_release(param_2);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__os_unfair_lock_unlock_11034c790)(puVar2 + 0x38);
    return;
  }
  return;
}



/* Entry: 1057f65cc; end: 1057f664b; -[SCSmartReplySearchTagsModelProviderImpl _completeCurrentLoadingWithModel:] */

void FUN_1057f65cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  iVar1 = (int)param_1 + 0x38;
  _os_unfair_lock_trylock();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar2);
  _objc_release(param_3);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x38);
    return;
  }
  return;
}



/* Entry: 1057f664c; end: 1057f66ab; -[SCSmartReplySearchTagsModelProviderImpl .cxx_destruct] */

void FUN_1057f664c(long param_1)

{
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



/* Entry: 1057f66ac; end: 1057f6773; -[SCSmartReplySearchTagsProviderImpl initWithModelDataLoader:withExecutionPerformer:] */

undefined1 *
FUN_1057f66ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ea638;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    if (param_4 == (undefined *)0x0) {
      param_4 = PTR_PTR_1126ae720;
      func_0x00010bf11fe0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057f6774; end: 1057f678b;  */

void FUN_1057f6774(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfcd0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae790,PTR_s_globalQueuePerformer_contextStat_1125d0de0,0x15,
             &PTR____CFConstantStringClassReference_110e045b8);
  return;
}



/* Entry: 1057f678c; end: 1057f685b; -[SCSmartReplySearchTagsProviderImpl setupConfiguration:] */

void FUN_1057f678c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 8);
  uVar1 = param_3;
  func_0x00010c23ecc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(uVar3,param_2,uVar1);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c23ecc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar1;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c23ecc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c109bc0(uVar2,param_2,uVar1,param_3);
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057f685c; end: 1057f6987; -[SCSmartReplySearchTagsProviderImpl searchTagsForQuery:] */

void FUN_1057f685c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1057f6988;
  puStack_58 = &UNK_1108b4f60;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  puStack_50 = puVar1;
  uStack_48 = param_3;
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar3,param_2,&puStack_70,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(puStack_50);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1057f6988; end: 1057f6a7f;  */

void FUN_1057f6988(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
  func_0x00010c2684a0(param_2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1057f6a80; end: 1057f6a97;  */

void FUN_1057f6a80(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 1057f6a98; end: 1057f6bc3; -[SCSmartReplySearchTagsProviderImpl bestSearchTagForQuery:] */

void FUN_1057f6a98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1057f6bc4;
  puStack_58 = &UNK_1108b4f60;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  puStack_50 = puVar1;
  uStack_48 = param_3;
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar3,param_2,&puStack_70,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(puStack_50);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1057f6bc4; end: 1057f6cbb;  */

void FUN_1057f6bc4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
  func_0x00010bf19820(param_2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1057f6cbc; end: 1057f6cd3;  */

void FUN_1057f6cbc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 1057f6cd4; end: 1057f6d0f; -[SCSmartReplySearchTagsProviderImpl .cxx_destruct] */

void FUN_1057f6cd4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057f6d10; end: 1057f6d6f; +[SCNSmartReplyConfiguration from:] */

void FUN_1057f6d10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bea28;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c080a20(param_3);
  _objc_release(param_3);
  func_0x00010c01f9a0(puVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


