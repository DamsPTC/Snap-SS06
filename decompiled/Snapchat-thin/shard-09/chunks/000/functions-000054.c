/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1068ce63c; end: 1068cecf7;  */

void FUN_1068ce63c(long param_1,undefined8 param_2,int *param_3)

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
    goto code_r0x0001068cec9c;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x0001068cecbc;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x0001068cecbc;
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
code_r0x0001068cec30:
                    /* WARNING: Could not recover jumptable at 0x0001068cec54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x0001068cec30;
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
      goto code_r0x0001068cecbc;
    }
    goto code_r0x0001068cecb0;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x0001068cecb0;
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
    goto code_r0x0001068cecbc;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x0001068cecbc;
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
    goto LAB_1068ceccc;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x0001068cec9c:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x0001068cecb0:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x0001068cecbc:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_1068ceccc:
  return;
}



/* Entry: 1068cecf8; end: 1068ced7f;  */

void FUN_1068cecf8(long param_1,undefined8 param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0001068ced6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 1068ced80; end: 1068ceeb3;  */

void FUN_1068ced80(long param_1,undefined8 param_2,int *param_3)

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
                    /* WARNING: Could not recover jumptable at 0x0001068ceea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 1068ceeb4; end: 1068cf0bf;  */

uint FUN_1068ceeb4(long param_1,long param_2,long param_3,byte *param_4)

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
        goto LAB_1068cf098;
      }
      goto LAB_1068cefe4;
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
      goto LAB_1068cf098;
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
      goto LAB_1068cf098;
    }
LAB_1068cefe4:
    if ((uVar9 & 0xfffffffe) != 10) {
      uVar9 = 0;
      goto LAB_1068cf098;
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
LAB_1068cf098:
  _objc_release(param_3);
  return uVar9 & 1;
}



/* Entry: 1068cf0c0; end: 1068cf33b;  */

undefined8 * FUN_1068cf0c0(long param_1)

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
        *puVar6 = &PTR_FUN_110948310;
        puVar6[7] = plVar7;
        lVar1 = *(long *)(param_1 + 0x48);
        lVar2 = *(long *)(param_1 + 0x50);
        puVar6[9] = 0;
        puVar6[8] = 0;
        puVar6[0xb] = 0;
        puVar6[10] = 0;
        FUN_1068ce4d4(puVar6 + 9,lVar1,lVar2,lVar2 - lVar1 >> 3);
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
    *puVar6 = &PTR_FUN_110948310;
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
    *puVar6 = &PTR_FUN_110948310;
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
      goto LAB_1068cf1e8;
    }
  }
  else if ((*(byte *)((long)plVar7 + 0x1b) & 1) != 0) {
    bVar13 = 1;
    goto LAB_1068cf1e8;
  }
  bVar13 = *(byte *)((long)plVar8 + 0x1b);
LAB_1068cf1e8:
  *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
  *(undefined1 *)(puVar6 + 3) = 0;
  *(byte *)((long)puVar6 + 0x19) = bVar9 & 1;
  *(byte *)((long)puVar6 + 0x1a) = bVar12 & 1;
  *(byte *)((long)puVar6 + 0x1b) = bVar13 & 1;
  *puVar6 = &PTR_FUN_110948310;
  puVar6[7] = plVar7;
  puVar6[8] = plVar8;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = plVar7;
  puVar6[0xd] = plVar8;
  return puVar6;
}



/* Entry: 1068cf33c; end: 1068cf3af;  */

undefined8 * FUN_1068cf33c(undefined8 *param_1,long param_2,long *param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  
  uVar2 = *(undefined2 *)(param_2 + 0x19);
  uVar1 = *(undefined1 *)(param_2 + 0x1b);
  *(undefined4 *)(param_1 + 1) = 0xc;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_DAT_110866be0;
  param_1[7] = param_2;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  func_0x00010069997c(param_1 + 9,*param_3,param_3[1],param_3[1] - *param_3 >> 2);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return param_1;
}



/* Entry: 1068cf3b0; end: 1068cf467;  */

undefined8 FUN_1068cf3b0(void)

{
  int iVar1;
  
  if ((bRam000000011381b178 & 1) == 0) {
    iVar1 = 0x1381b178;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011381b110 = 0xe;
      puRam000000011381b118 = &UNK_10f3a01a3;
      uRam000000011381b120 = 0x10001;
      pcRam000000011381b128 = FUN_1068cf468;
      pcRam000000011381b130 = FUN_1068cf4a0;
      ppuRam000000011381b108 = &PTR_DAT_110948370;
      uRam000000011381b148 = 0;
      uRam000000011381b140 = 0;
      uRam000000011381b158 = 0;
      uRam000000011381b150 = 0;
      uRam000000011381b168 = 0;
      uRam000000011381b160 = 0;
      uRam000000011381b170 = 0;
      ___cxa_atexit(0x1068cd13c,0x11381b108,0x100000000);
      ___cxa_guard_release(0x11381b178);
    }
  }
  return 0x11381b108;
}



/* Entry: 1068cf468; end: 1068cf49f;  */

undefined4 FUN_1068cf468(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((4 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar2 != 0)) {
    return *(undefined4 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 1068cf4a0; end: 1068cf4f3;  */

undefined8 FUN_1068cf4a0(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010c0f1e60(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1068cf4f4; end: 1068cf4ff; +[SCDiscoverFeedPage table] */

undefined * FUN_1068cf4f4(void)

{
  return &UNK_10f3a01ac;
}



/* Entry: 1068cf500; end: 1068cf66b; +[SCDiscoverFeedPage immutableObjectParse:bufferSize:] */

void FUN_1068cf500(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ushort *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint *puVar8;
  uint *puVar9;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126cecd8;
  _objc_alloc(PTR_PTR_1126cecd8);
  puVar5 = (ushort *)((long)piVar1 - (long)*piVar1);
  if (*puVar5 < 5) {
    uVar7 = 0;
  }
  else {
    if ((ulong)puVar5[2] == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)((long)piVar1 + (ulong)puVar5[2]);
    }
    if ((6 < *puVar5) && ((ulong)puVar5[3] != 0)) {
      puVar2 = (uint *)((long)piVar1 + (ulong)puVar5[3]);
      puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar2 + 1;
      if (*puVar2 != 0) {
        do {
          puVar9 = puVar8 + 1;
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*puVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar4,param_2,puVar6);
          _objc_release(puVar6);
          puVar8 = puVar9;
        } while (puVar9 != puVar2 + 1 + *puVar2);
      }
      puVar6 = puVar4;
      func_0x00010bf51e00(puVar4);
      _objc_release(puVar4);
      goto LAB_1068cf608;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_1068cf608:
  func_0x00010c0333a0(puVar3,param_2,uVar7,puVar6);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1068cf66c; end: 1068cf68f; +[SCDiscoverFeedPage objectClassFunctionPointer] */

undefined1  [16] FUN_1068cf66c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1068cf688;
  auVar1._0_8_ = 0x1068cf680;
  return auVar1;
}



/* Entry: 1068cf690; end: 1068cf733;  */

undefined1 * FUN_1068cf690(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_4);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_1126f3b60;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_4;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_4);
  return puVar3;
}



/* Entry: 1068cf734; end: 1068cfb97;  */

void FUN_1068cf734(long param_1,undefined1 *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  puVar7 = PTR_PTR_1126cece0;
  _objc_retain(param_1);
  _objc_opt_self(puVar7);
  _objc_retain(param_1);
  if (param_1 == 0) {
LAB_1068cfa00:
    lVar1 = 0;
LAB_1068cfa04:
    _objc_release(lVar1);
  }
  else {
    lVar1 = param_1;
    func_0x00010c1422e0();
    if (lVar1 < 0) {
      puVar7 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar7;
      func_0x00010bf636c0();
      _objc_release(puVar7);
      func_0x0001001b9e08(puVar2,&UNK_10f3a01c7);
      lVar1 = param_1;
      if (puVar2 != (undefined *)0x0) {
        lVar3 = param_1;
        func_0x00010c0f1e60(param_1);
        _sqlite3_bind_int64(puVar2,1,lVar3);
        puVar7 = puVar2;
        _sqlite3_step();
        if ((int)puVar7 == 100) {
          puVar7 = puVar2;
          _sqlite3_column_int64(puVar2,0);
          puVar4 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126cecd8);
          _sqlite3_column_blob(puVar2,1);
          _sqlite3_column_bytes(puVar2,1);
          puVar5 = puVar4;
          func_0x00010c0dfea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_1);
          _objc_release(puVar4);
          _sqlite3_reset(puVar2);
          if (puVar5 == (undefined *)0x0) goto LAB_1068cfa00;
          puVar2 = PTR_PTR_1126cece0;
          _objc_alloc();
          puVar4 = puVar5;
          func_0x00010c0f1e60(puVar5);
          puVar6 = puVar5;
          func_0x00010bfa43a0(puVar5);
          _objc_retainAutoreleasedReturnValue();
          FUN_1068cf690(puVar2,puVar7,puVar4,puVar6);
          goto LAB_1068cf838;
        }
      }
      goto LAB_1068cfa04;
    }
    lVar1 = param_1;
    func_0x00010c1422e0(param_1);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126cecd8);
    puVar5 = puVar7;
    func_0x00010c0dfea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(puVar7);
    if (puVar5 == (undefined *)0x0) goto LAB_1068cfa00;
    puVar2 = PTR_PTR_1126cece0;
    _objc_alloc();
    puVar7 = puVar5;
    func_0x00010c0f1e60(puVar5);
    puVar6 = puVar5;
    func_0x00010bfa43a0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    FUN_1068cf690(puVar2,lVar1,puVar7,puVar6);
LAB_1068cf838:
    _objc_release(puVar6);
    _objc_release(puVar5);
    if (puVar2 != (undefined *)0x0) {
      *(undefined4 *)(puVar2 + 0x10) = 2;
      _objc_release(param_1);
      if (param_2 != (undefined1 *)0x0) {
        *param_2 = 0;
      }
      lVar1 = param_1;
      func_0x00010c0f1e60();
      *(long *)(puVar2 + 0x18) = lVar1;
      lVar1 = param_1;
      func_0x00010bfa43a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar2);
      _objc_release(lVar1);
      _objc_retain(puVar2);
      puVar7 = puVar2;
      goto LAB_1068cfaa8;
    }
  }
  _objc_release(param_1);
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 1;
  }
  puVar7 = PTR_PTR_1126cece0;
  _objc_retain(param_1);
  _objc_opt_self(puVar7);
  puVar2 = PTR_PTR_1126cece0;
  if (param_1 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_1;
    func_0x00010c0f1e60(param_1);
    lVar3 = param_1;
    func_0x00010bfa43a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    FUN_1068cf690(puVar2,0xffffffffffffffff,lVar1,lVar3);
    _objc_release(lVar3);
  }
  *(undefined4 *)(puVar2 + 0x10) = 1;
  _objc_release(param_1);
  puVar7 = (undefined *)0x0;
LAB_1068cfaa8:
  _objc_release(puVar7);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1068cfb98; end: 1068cfbf7;  */

void FUN_1068cfb98(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126cecd8;
    _objc_alloc(PTR_PTR_1126cecd8);
    func_0x00010c0333a0();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1068cfbf8; end: 1068cfc03; -[SCDiscoverFeedPageChangeRequest .cxx_destruct] */

void FUN_1068cfbf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 1068cfc04; end: 1068cfc0f; -[SCDiscoverFeedPageChangeRequest table] */

undefined * FUN_1068cfc04(void)

{
  return &UNK_10f3a01ac;
}



/* Entry: 1068cfc10; end: 1068cfc57; -[SCDiscoverFeedPageChangeRequest createTableWithSQLite:] */

void FUN_1068cfc10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10dde2ad3,0x8d,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 1068cfc58; end: 1068cffef; -[SCDiscoverFeedPageChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_1068cfc58(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  uint *puVar10;
  
  iVar2 = *(int *)(param_1 + 0x10);
  puVar4 = param_1;
  if (iVar2 == 1) {
    FUN_1068cfb98(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    FUN_1068cfff0(param_4,puVar4);
    func_0x0001001ce6fc(param_4,lVar5,0,0);
    puVar10 = *(uint **)(param_4 + 0x30);
    uVar3 = *puVar10;
    lVar5 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f3a0247);
    if (lVar5 == 0) goto LAB_1068cff8c;
    _sqlite3_bind_blob(lVar5,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar10 + (ulong)uVar3);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
       (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar7 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)((long)piVar1 + uVar7);
    }
    _sqlite3_bind_int64(lVar5,2,uVar6);
    _sqlite3_step();
    if ((int)lVar5 != 0x65) goto LAB_1068cff8c;
    uVar9 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar9;
    func_0x00010c1eeb60(puVar4);
    puVar8 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126cecd8);
    func_0x00010c21c9a0(puVar8);
LAB_1068cff74:
    _objc_release(puVar8);
    _objc_retain(puVar4);
    puVar8 = puVar4;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f3a0211);
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
            _objc_opt_class(PTR_PTR_1126cecd8);
            func_0x00010c21c9a0(puVar4);
            _objc_release(puVar8);
            _objc_release(puVar4);
            puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1068cff98;
          }
        }
      }
      puVar8 = (undefined *)0x0;
      goto LAB_1068cff98;
    }
    FUN_1068cfb98(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    FUN_1068cfff0(param_4,puVar4);
    func_0x0001001ce6fc(param_4,lVar5,0,0);
    puVar10 = *(uint **)(param_4 + 0x30);
    uVar3 = *puVar10;
    uVar9 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f3a028c);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar9);
      piVar1 = (int *)((long)puVar10 + (ulong)uVar3);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar7 == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)((long)piVar1 + uVar7);
      }
      _sqlite3_bind_int64(param_3,3,uVar6);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar8 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126cecd8);
        func_0x00010c21c9a0(puVar8);
        goto LAB_1068cff74;
      }
    }
LAB_1068cff8c:
    puVar8 = (undefined *)0x0;
  }
  _objc_release(puVar4);
LAB_1068cff98:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1068cfff0; end: 1068d023b;  */

ulong FUN_1068cfff0(ulong param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined4 uStack_124;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar5 = param_2;
  func_0x00010bfa43a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lStack_138 = 0;
  uStack_130 = 0;
  lStack_140 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(uVar5);
  uVar6 = uVar5;
  func_0x00010bf52a60();
  if (uVar6 != 0) {
    lVar7 = *plStack_110;
    do {
      uVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(uVar5);
        }
        uVar3 = (int)*(undefined8 *)(lStack_118 + uVar8 * 8);
        func_0x00010c0b4fe0();
        uStack_124 = uVar3;
        func_0x00010568a8b4(&lStack_140,&uStack_124);
        uVar8 = uVar8 + 1;
      } while (uVar6 != uVar8);
      uVar6 = uVar5;
      func_0x00010bf52a60();
    } while (uVar6 != 0);
  }
  _objc_release(uVar5);
  _objc_release(uVar5);
  _objc_release(uVar5);
  uVar5 = param_2;
  func_0x00010c0f1e60(param_2);
  lVar7 = 0x11315b168;
  if (lStack_138 - lStack_140 != 0) {
    lVar7 = lStack_140;
  }
  uVar6 = param_1;
  func_0x0001067363a0(param_1,lVar7,lStack_138 - lStack_140 >> 2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar4 = *(int *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x28);
  func_0x0001001ce1c8(param_1,4,uVar5 & 0xffffffff,0);
  func_0x0001067362cc(param_1,6,uVar6 & 0xffffffff);
  func_0x0001001ce548(param_1,(iVar4 - iVar1) + iVar2);
  if (lStack_140 != 0) {
    lStack_138 = lStack_140;
    __ZdlPv();
  }
  uVar6 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_release(uVar5);
  if (lStack_140 != 0) {
    lStack_138 = lStack_140;
    __ZdlPv();
  }
  _objc_release(uVar5);
  _objc_release(uVar5);
  _objc_release(param_2);
  __Unwind_Resume(uVar6);
  if ((bRam000000011381b1f0 & 1) == 0) {
    iVar4 = 0x1381b1f0;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      uRam000000011381b188 = 0xe;
      puRam000000011381b190 = &UNK_10f3a02db;
      uRam000000011381b198 = 0x10001;
      pcRam000000011381b1a0 = FUN_1068d02f4;
      pcRam000000011381b1a8 = FUN_1068d032c;
      ppuRam000000011381b180 = &PTR_DAT_110864c08;
      uRam000000011381b1c0 = 0;
      uRam000000011381b1b8 = 0;
      uRam000000011381b1d0 = 0;
      uRam000000011381b1c8 = 0;
      uRam000000011381b1e0 = 0;
      uRam000000011381b1d8 = 0;
      uRam000000011381b1e8 = 0;
      ___cxa_atexit(&DAT_1050797f4,0x11381b180,0x100000000);
      ___cxa_guard_release(0x11381b1f0);
    }
  }
  return 0x11381b180;
}



/* Entry: 1068d023c; end: 1068d02f3;  */

undefined8 FUN_1068d023c(void)

{
  int iVar1;
  
  if ((bRam000000011381b1f0 & 1) == 0) {
    iVar1 = 0x1381b1f0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011381b188 = 0xe;
      puRam000000011381b190 = &UNK_10f3a02db;
      uRam000000011381b198 = 0x10001;
      pcRam000000011381b1a0 = FUN_1068d02f4;
      pcRam000000011381b1a8 = FUN_1068d032c;
      ppuRam000000011381b180 = &PTR_DAT_110864c08;
      uRam000000011381b1c0 = 0;
      uRam000000011381b1b8 = 0;
      uRam000000011381b1d0 = 0;
      uRam000000011381b1c8 = 0;
      uRam000000011381b1e0 = 0;
      uRam000000011381b1d8 = 0;
      uRam000000011381b1e8 = 0;
      ___cxa_atexit(&DAT_1050797f4,0x11381b180,0x100000000);
      ___cxa_guard_release(0x11381b1f0);
    }
  }
  return 0x11381b180;
}



/* Entry: 1068d02f4; end: 1068d032b;  */

undefined4 FUN_1068d02f4(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((4 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar2 != 0)) {
    return *(undefined4 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 1068d032c; end: 1068d037f;  */

undefined8 FUN_1068d032c(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010bfa4340(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1068d0380; end: 1068d0417;  */

long FUN_1068d0380(int *param_1)

{
  uint *puVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)((long)param_1 - (long)*param_1);
  if ((((0x10 < *puVar2) && ((ulong)puVar2[8] != 0)) &&
      (0x12 < *puVar2 && *(char *)((long)param_1 + (ulong)puVar2[8]) == '\x01')) &&
     ((ulong)puVar2[9] != 0)) {
    puVar1 = (uint *)((long)param_1 + (ulong)puVar2[9]);
    return (long)puVar1 + (ulong)*puVar1;
  }
  return 0;
}



/* Entry: 1068d0418; end: 1068d0423; +[SCDiscoverFeedSection table] */

undefined * FUN_1068d0418(void)

{
  return &UNK_10f3a02e4;
}



/* Entry: 1068d0424; end: 1068d0d1b; +[SCDiscoverFeedSection immutableObjectParse:bufferSize:] */

void FUN_1068d0424(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  int *piVar7;
  int *piVar8;
  ushort uVar9;
  int iVar10;
  long lVar11;
  ushort *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  ulong uVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined8 uStack_98;
  undefined4 uStack_8c;
  
  uVar3 = *param_3;
  piVar1 = (int *)((long)param_3 + (ulong)uVar3);
  puVar6 = PTR_PTR_1126cecc8;
  _objc_alloc();
  iVar10 = *piVar1;
  lVar11 = (long)iVar10;
  puVar12 = (ushort *)((long)piVar1 - lVar11);
  uVar9 = *puVar12;
  if (uVar9 < 5) {
    uStack_8c = 0;
LAB_1068d05f8:
    puVar13 = (undefined *)0x0;
LAB_1068d05fc:
    puVar15 = (undefined *)0x0;
LAB_1068d0600:
    puVar18 = (undefined *)0x0;
LAB_1068d0604:
    puVar19 = (undefined *)0x0;
LAB_1068d0608:
    uStack_98 = 0;
LAB_1068d060c:
    bVar4 = false;
LAB_1068d0610:
    puVar21 = (undefined *)0x0;
  }
  else {
    if ((ulong)puVar12[2] == 0) {
      uStack_8c = 0;
    }
    else {
      uStack_8c = *(undefined4 *)((long)piVar1 + (ulong)puVar12[2]);
    }
    if (uVar9 < 7) goto LAB_1068d05f8;
    uVar16 = (ulong)puVar12[3];
    if (uVar16 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      uVar20 = (ulong)*(uint *)((long)piVar1 + uVar16);
      puVar2 = (uint *)((long)((long)piVar1 + uVar16) + uVar20);
      puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar2);
      _objc_retainAutoreleasedReturnValue();
      if (*puVar2 != 0) {
        param_3 = (uint *)((long)param_3 + uVar20 + uVar16 + (ulong)uVar3 + 8);
        do {
          uVar16 = (ulong)param_3[-1];
          puVar13 = PTR_PTR_1126cece8;
          _objc_alloc(PTR_PTR_1126cece8);
          lVar11 = uVar16 - (long)*(int *)((long)param_3 + (uVar16 - 4));
          uVar9 = *(ushort *)((long)param_3 + lVar11 + -4);
          if (uVar9 < 5) {
            uVar17 = 0;
LAB_1068d0584:
            puVar18 = (undefined *)0x0;
          }
          else {
            if ((ulong)*(ushort *)((long)param_3 + lVar11) == 0) {
              uVar17 = 0;
            }
            else {
              uVar17 = *(undefined8 *)
                        ((long)param_3 + uVar16 + *(ushort *)((long)param_3 + lVar11) + -4);
            }
            if ((uVar9 < 7) ||
               (uVar20 = (ulong)*(ushort *)((long)param_3 + lVar11 + 2), uVar20 == 0))
            goto LAB_1068d0584;
            lVar11 = uVar16 + uVar20;
            puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                (long)param_3 +
                                (ulong)*(uint *)((long)param_3 + lVar11 + -4) + lVar11);
            _objc_retainAutoreleasedReturnValue();
          }
          func_0x00010c04d560(puVar13,param_2,uVar17,puVar18);
          _objc_release(puVar18);
          func_0x00010befa120(puVar15,param_2,puVar13);
          _objc_release(puVar13);
          bVar4 = param_3 != puVar2 + (ulong)*puVar2 + 1;
          param_3 = param_3 + 1;
        } while (bVar4);
      }
      puVar13 = puVar15;
      func_0x00010bf51e00(puVar15);
      _objc_release(puVar15);
      lVar11 = (long)*piVar1;
      uVar9 = *(ushort *)((long)piVar1 - lVar11);
    }
    iVar10 = (int)lVar11;
    lVar11 = -lVar11;
    if (uVar9 < 9) goto LAB_1068d05fc;
    uVar16 = (ulong)*(ushort *)((long)piVar1 + lVar11 + 8);
    if (uVar16 == 0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar16);
      puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      iVar10 = *piVar1;
      lVar11 = -(long)iVar10;
      uVar9 = *(ushort *)((long)piVar1 - (long)iVar10);
    }
    if (uVar9 < 0xb) goto LAB_1068d0600;
    uVar16 = (ulong)*(ushort *)((long)piVar1 + lVar11 + 10);
    if (uVar16 == 0) {
      puVar18 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar16);
      puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      iVar10 = *piVar1;
      lVar11 = -(long)iVar10;
      uVar9 = *(ushort *)((long)piVar1 - (long)iVar10);
    }
    if (uVar9 < 0xd) goto LAB_1068d0604;
    if (*(short *)((long)piVar1 + lVar11 + 0xc) == 0) {
      puVar19 = (undefined *)0x0;
    }
    else {
      puVar19 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x00010bffa160();
      iVar10 = *piVar1;
      lVar11 = -(long)iVar10;
      uVar9 = *(ushort *)((long)piVar1 - (long)iVar10);
    }
    if (uVar9 < 0xf) goto LAB_1068d0608;
    uVar16 = (ulong)*(ushort *)((long)piVar1 + lVar11 + 0xe);
    if (uVar16 == 0) {
      uStack_98 = 0;
    }
    else {
      uStack_98 = *(undefined8 *)((long)piVar1 + uVar16);
    }
    if (uVar9 < 0x11) goto LAB_1068d060c;
    uVar16 = (ulong)*(ushort *)((long)piVar1 + lVar11 + 0x10);
    if (uVar16 == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = *(char *)((long)piVar1 + uVar16) != '\0';
    }
    if ((uVar9 < 0x13) || (uVar16 = (ulong)*(ushort *)((long)piVar1 + lVar11 + 0x12), uVar16 == 0))
    goto LAB_1068d0610;
    puVar2 = (uint *)((long)piVar1 + uVar16);
    uVar3 = *puVar2;
    puVar21 = PTR_PTR_1126cecf0;
    _objc_alloc();
    piVar8 = (int *)((long)puVar2 + (ulong)uVar3);
    puVar12 = (ushort *)((long)piVar8 - (long)*piVar8);
    uVar9 = *puVar12;
    uVar25 = 0;
    if (uVar9 < 5) {
      bVar5 = false;
LAB_1068d0ac4:
      uVar24 = 0;
LAB_1068d0ac8:
      uVar26 = 0;
LAB_1068d0acc:
      uVar27 = 0;
LAB_1068d0ad0:
      uVar28 = 0;
    }
    else {
      if ((ulong)puVar12[2] == 0) {
        bVar5 = false;
      }
      else {
        bVar5 = *(char *)((long)piVar8 + (ulong)puVar12[2]) != '\0';
      }
      if (uVar9 < 7) goto LAB_1068d0ac4;
      if ((ulong)puVar12[3] == 0) {
        uVar24 = 0;
      }
      else {
        uVar24 = *(undefined4 *)((long)piVar8 + (ulong)puVar12[3]);
      }
      if (uVar9 < 9) goto LAB_1068d0ac8;
      uVar26 = 0;
      if ((ulong)puVar12[4] != 0) {
        uVar26 = *(undefined4 *)((long)piVar8 + (ulong)puVar12[4]);
      }
      if (uVar9 < 0xb) goto LAB_1068d0acc;
      uVar27 = 0;
      if ((ulong)puVar12[5] != 0) {
        uVar27 = *(undefined4 *)((long)piVar8 + (ulong)puVar12[5]);
      }
      if (uVar9 < 0xd) goto LAB_1068d0ad0;
      uVar28 = 0;
      if ((ulong)puVar12[6] != 0) {
        uVar25 = *(undefined4 *)((long)piVar8 + (ulong)puVar12[6]);
      }
      if ((0xe < uVar9) && ((ulong)puVar12[7] != 0)) {
        uVar28 = *(undefined4 *)((long)piVar8 + (ulong)puVar12[7]);
      }
    }
    piVar7 = piVar8;
    FUN_1068d0380();
    func_0x0001068d03cc();
    puVar22 = PTR_PTR_1126cecf8;
    if (piVar7 == (int *)0x0) {
      if (piVar8 != (int *)0x0) {
        puVar23 = PTR_PTR_1126ced08;
        _objc_alloc(PTR_PTR_1126ced08);
        func_0x00010c055880();
        func_0x00010bfe4360(puVar22,param_2,puVar23);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1068d0ba8;
      }
      puVar22 = (undefined *)0x0;
    }
    else {
      puVar23 = PTR_PTR_1126ced00;
      _objc_alloc(PTR_PTR_1126ced00);
      func_0x00010c055880();
      func_0x00010c299040(puVar22,param_2,puVar23);
      _objc_retainAutoreleasedReturnValue();
LAB_1068d0ba8:
      _objc_release(puVar23);
    }
    func_0x00010c0461c0(uVar26,uVar27,uVar25,uVar28,puVar21,param_2,bVar5,uVar24,puVar22);
    _objc_release(puVar22);
    iVar10 = *piVar1;
  }
  uVar9 = *(ushort *)((long)piVar1 - (long)iVar10);
  if (uVar9 < 0x15) {
    puVar22 = (undefined *)0x0;
LAB_1068d0814:
    puVar23 = (undefined *)0x0;
  }
  else {
    uVar16 = (ulong)((ushort *)((long)piVar1 - (long)iVar10))[10];
    if (uVar16 == 0) {
      puVar22 = (undefined *)0x0;
      lVar11 = (long)iVar10;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar16);
      uVar3 = *puVar2;
      puVar22 = PTR_PTR_1126ced10;
      _objc_alloc();
      piVar8 = (int *)((long)puVar2 + (ulong)uVar3);
      lVar11 = (long)*piVar8;
      uVar9 = *(ushort *)((long)piVar8 - lVar11);
      if (uVar9 < 5) {
        puVar23 = (undefined *)0x0;
LAB_1068d0788:
        uVar25 = 0;
LAB_1068d0794:
        bVar5 = false;
        uVar24 = 0;
      }
      else {
        uVar16 = (ulong)((ushort *)((long)piVar8 - lVar11))[2];
        if (uVar16 == 0) {
          puVar23 = (undefined *)0x0;
        }
        else {
          puVar2 = (uint *)((long)piVar8 + uVar16);
          puVar23 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar2 + (ulong)*puVar2 + 4);
          _objc_retainAutoreleasedReturnValue();
          lVar11 = (long)*piVar8;
          uVar9 = *(ushort *)((long)piVar8 - lVar11);
        }
        if (uVar9 < 7) goto LAB_1068d0788;
        uVar16 = (ulong)*(ushort *)((long)piVar8 + (6 - lVar11));
        uVar25 = 0;
        if (uVar16 != 0) {
          uVar25 = *(undefined4 *)((long)piVar8 + uVar16);
        }
        if (uVar9 < 9) goto LAB_1068d0794;
        uVar16 = (ulong)*(ushort *)((long)piVar8 + (8 - lVar11));
        uVar24 = 0;
        if (uVar16 != 0) {
          uVar24 = *(undefined4 *)((long)piVar8 + uVar16);
        }
        if (((uVar9 < 0xb) || (uVar9 < 0xd)) ||
           (uVar16 = (ulong)*(ushort *)((long)piVar8 + (0xc - lVar11)), uVar16 == 0)) {
          bVar5 = false;
        }
        else {
          bVar5 = *(char *)((long)piVar8 + uVar16) != '\0';
        }
      }
      func_0x00010bff47c0(uVar25,uVar24,puVar22,param_2,puVar23,bVar5);
      _objc_release(puVar23);
      lVar11 = (long)*piVar1;
      uVar9 = *(ushort *)((long)piVar1 - lVar11);
    }
    lVar11 = -lVar11;
    if (uVar9 < 0x17) goto LAB_1068d0814;
    if (*(short *)((long)piVar1 + lVar11 + 0x16) == 0) {
      puVar23 = (undefined *)0x0;
    }
    else {
      puVar23 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc();
      func_0x00010bffa160();
      lVar11 = -(long)*piVar1;
      uVar9 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (((0x18 < uVar9) && (0x1a < uVar9)) && (*(short *)((long)piVar1 + lVar11 + 0x1a) != 0)) {
      puVar14 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc();
      func_0x00010bffa160();
      goto LAB_1068d0820;
    }
  }
  puVar14 = (undefined *)0x0;
LAB_1068d0820:
  func_0x00010c012780(puVar6,param_2,uStack_8c,puVar13,puVar15,puVar18,puVar19,uStack_98,bVar4);
  _objc_release(puVar14);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar15);
  _objc_release(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1068d0d1c; end: 1068d0d3f; +[SCDiscoverFeedSection objectClassFunctionPointer] */

undefined1  [16] FUN_1068d0d1c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1068d0d38;
  auVar1._0_8_ = 0x1068d0d30;
  return auVar1;
}



/* Entry: 1068d0d40; end: 1068d0f7f;  */

long * FUN_1068d0d40(long param_1,long param_2,undefined4 param_3,long param_4,long param_5,
                    long param_6,long param_7,long param_8,undefined1 param_9,undefined4 param_10,
                    long param_11,long param_12,long param_13,undefined1 param_14,
                    undefined4 param_15,long param_16)

{
  long *plVar1;
  long lVar2;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_16);
  plVar1 = (long *)0x0;
  if (param_1 != 0) {
    puStack_68 = PTR_PTR_1126f3b68;
    plVar1 = &lStack_70;
    lStack_70 = param_1;
    _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      plVar1[1] = param_2;
      *(undefined4 *)(plVar1 + 3) = param_3;
      _objc_retain(param_4);
      lVar2 = plVar1[4];
      plVar1[4] = param_4;
      _objc_release(lVar2);
      _objc_retain(param_5);
      lVar2 = plVar1[5];
      plVar1[5] = param_5;
      _objc_release(lVar2);
      _objc_retain(param_6);
      lVar2 = plVar1[6];
      plVar1[6] = param_6;
      _objc_release(lVar2);
      _objc_retain(param_7);
      lVar2 = plVar1[7];
      plVar1[7] = param_7;
      _objc_release(lVar2);
      plVar1[8] = param_8;
      *(undefined1 *)((long)plVar1 + 0x14) = param_9;
      _objc_retain(param_11);
      lVar2 = plVar1[9];
      plVar1[9] = param_11;
      _objc_release(lVar2);
      _objc_retain(param_12);
      lVar2 = plVar1[10];
      plVar1[10] = param_12;
      _objc_release(lVar2);
      _objc_retain(param_13);
      lVar2 = plVar1[0xb];
      plVar1[0xb] = param_13;
      _objc_release(lVar2);
      *(undefined1 *)((long)plVar1 + 0x15) = param_14;
      _objc_retain(param_16);
      lVar2 = plVar1[0xc];
      plVar1[0xc] = param_16;
      _objc_release(lVar2);
    }
  }
  _objc_release(param_16);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return plVar1;
}



/* Entry: 1068d0f80; end: 1068d14ef;  */

void FUN_1068d0f80(undefined *param_1)

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
  undefined *puStack_68;
  
  _objc_retain();
  if (param_1 == (undefined *)0x0) {
LAB_1068d13d0:
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar13 < 0) {
      puVar13 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar13;
      func_0x00010bf636c0();
      _objc_release(puVar13);
      func_0x0001001b9e08(puVar1,&UNK_10f3a0300);
      puVar13 = (undefined *)0x0;
      if (puVar1 == (undefined *)0x0) goto LAB_1068d13d4;
      puVar13 = param_1;
      func_0x00010bfa4340(param_1);
      _sqlite3_bind_int64(puVar1,1,(long)(int)puVar13);
      puVar13 = puVar1;
      _sqlite3_step();
      if ((int)puVar13 != 100) goto LAB_1068d13d0;
      puVar2 = puVar1;
      _sqlite3_column_int64(puVar1,0);
      puVar13 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126cecc8);
      _sqlite3_column_blob(puVar1,1);
      _sqlite3_column_bytes(puVar1,1);
      puVar3 = puVar13;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar13);
      _sqlite3_reset(puVar1);
      if (puVar3 == (undefined *)0x0) goto LAB_1068d13cc;
      puVar13 = PTR_PTR_1126cecd0;
      _objc_alloc(PTR_PTR_1126cecd0);
      puVar1 = puVar3;
      func_0x00010bfa4340(puVar3);
      puVar4 = puVar3;
      func_0x00010c259d20();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010bf86660();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010c0b3b40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      func_0x00010c25c6c0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar3;
      func_0x00010bfab800(puVar3);
      puVar9 = puVar3;
      func_0x00010bfd9420();
      puStack_68 = puVar3;
      func_0x00010c08cb80();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar3;
      func_0x00010c137ca0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar3;
      func_0x00010c0cc060();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd93a0();
      puVar12 = puVar3;
      func_0x00010bfbb3c0();
      _objc_retainAutoreleasedReturnValue();
      FUN_1068d0d40(puVar13,puVar2,puVar1,puVar4,puVar5,puVar6,puVar7,puVar8,(char)puVar9);
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar13 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126cecc8);
      puVar3 = puVar13;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar13);
      if (puVar3 == (undefined *)0x0) {
LAB_1068d13cc:
        param_1 = (undefined *)0x0;
        goto LAB_1068d13d0;
      }
      puVar13 = PTR_PTR_1126cecd0;
      _objc_alloc(PTR_PTR_1126cecd0);
      puVar2 = puVar3;
      func_0x00010bfa4340(puVar3);
      puVar4 = puVar3;
      func_0x00010c259d20();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010bf86660();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010c0b3b40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      func_0x00010c25c6c0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar3;
      func_0x00010bfab800(puVar3);
      puVar9 = puVar3;
      func_0x00010bfd9420();
      puStack_68 = puVar3;
      func_0x00010c08cb80();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar3;
      func_0x00010c137ca0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar3;
      func_0x00010c0cc060();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd93a0();
      puVar12 = puVar3;
      func_0x00010bfbb3c0();
      _objc_retainAutoreleasedReturnValue();
      FUN_1068d0d40(puVar13,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7,puVar8,(char)puVar9);
    }
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puStack_68);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    param_1 = puVar3;
  }
LAB_1068d13d4:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 1068d14f0; end: 1068d1563;  */

void FUN_1068d14f0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_1068d0f80();
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



/* Entry: 1068d1564; end: 1068d1a5b;  */

void FUN_1068d1564(undefined *param_1,undefined1 *param_2)

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
  
  _objc_retain();
  puVar1 = PTR_PTR_1126cecd0;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_1068d0f80();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar13 = PTR_PTR_1126cecd0;
    _objc_retain(param_1);
    _objc_opt_self(puVar13);
    puVar13 = PTR_PTR_1126cecd0;
    if (param_1 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_1;
      func_0x00010bfa4340(param_1);
      puVar3 = param_1;
      func_0x00010c259d20();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      func_0x00010bf86660();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_1;
      func_0x00010c0b3b40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_1;
      func_0x00010c25c6c0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_1;
      func_0x00010bfab800(param_1);
      puVar8 = param_1;
      func_0x00010bfd9420();
      puVar9 = param_1;
      func_0x00010c08cb80();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = param_1;
      func_0x00010c137ca0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = param_1;
      func_0x00010c0cc060();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd93a0();
      puVar12 = param_1;
      func_0x00010bfbb3c0();
      _objc_retainAutoreleasedReturnValue();
      FUN_1068d0d40(puVar13,0xffffffffffffffff,puVar2,puVar3,puVar4,puVar5,puVar6,puVar7,
                    (char)puVar8);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    *(undefined4 *)(puVar13 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    puVar13 = param_1;
    func_0x00010bfa4340();
    *(int *)(puVar1 + 0x18) = (int)puVar13;
    puVar13 = param_1;
    func_0x00010c259d20(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar13);
    puVar13 = param_1;
    func_0x00010bf86660(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar13);
    puVar13 = param_1;
    func_0x00010c0b3b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar13);
    puVar13 = param_1;
    func_0x00010c25c6c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar13);
    puVar13 = param_1;
    func_0x00010bfab800();
    *(undefined **)(puVar1 + 0x40) = puVar13;
    puVar13 = param_1;
    func_0x00010bfd9420();
    puVar1[0x14] = (char)puVar13;
    puVar13 = param_1;
    func_0x00010c08cb80(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar13);
    puVar13 = param_1;
    func_0x00010c137ca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar13);
    puVar13 = param_1;
    func_0x00010c0cc060(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar13);
    puVar13 = param_1;
    func_0x00010bfd93a0();
    puVar1[0x15] = (char)puVar13;
    puVar13 = param_1;
    func_0x00010bfbb3c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar13);
    _objc_retain(puVar1);
    puVar13 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 1068d1a5c; end: 1068d1af3;  */

void FUN_1068d1a5c(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126cecc8;
    _objc_alloc(PTR_PTR_1126cecc8);
    func_0x00010c012780();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1068d1af4; end: 1068d1b6b; -[SCDiscoverFeedSectionChangeRequest .cxx_destruct] */

void FUN_1068d1af4(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 1068d1b6c; end: 1068d1b77; -[SCDiscoverFeedSectionChangeRequest table] */

undefined * FUN_1068d1b6c(void)

{
  return &UNK_10f3a02e4;
}



/* Entry: 1068d1b78; end: 1068d1bbf; -[SCDiscoverFeedSectionChangeRequest createTableWithSQLite:] */

void FUN_1068d1b78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10dde2b60,0x8e,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 1068d1bc0; end: 1068d1f57; -[SCDiscoverFeedSectionChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_1068d1bc0(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  uint *puVar10;
  
  iVar2 = *(int *)(param_1 + 0x10);
  puVar4 = param_1;
  if (iVar2 == 1) {
    FUN_1068d1a5c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    FUN_1068d1f58(param_4,puVar4);
    func_0x0001001ce6fc(param_4,lVar5,0,0);
    puVar10 = *(uint **)(param_4 + 0x30);
    uVar3 = *puVar10;
    lVar5 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f3a03de);
    if (lVar5 == 0) goto LAB_1068d1ef4;
    _sqlite3_bind_blob(lVar5,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar10 + (ulong)uVar3);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
       (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar7 == 0)) {
      lVar6 = 0;
    }
    else {
      lVar6 = (long)*(int *)((long)piVar1 + uVar7);
    }
    _sqlite3_bind_int64(lVar5,2,lVar6);
    _sqlite3_step();
    if ((int)lVar5 != 0x65) goto LAB_1068d1ef4;
    uVar9 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar9;
    func_0x00010c1eeb60(puVar4);
    puVar8 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126cecc8);
    func_0x00010c21c9a0(puVar8);
LAB_1068d1edc:
    _objc_release(puVar8);
    _objc_retain(puVar4);
    puVar8 = puVar4;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f3a034b);
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
            _objc_opt_class(PTR_PTR_1126cecc8);
            func_0x00010c21c9a0(puVar4);
            _objc_release(puVar8);
            _objc_release(puVar4);
            puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1068d1f00;
          }
        }
      }
      puVar8 = (undefined *)0x0;
      goto LAB_1068d1f00;
    }
    FUN_1068d1a5c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    FUN_1068d1f58(param_4,puVar4);
    func_0x0001001ce6fc(param_4,lVar5,0,0);
    puVar10 = *(uint **)(param_4 + 0x30);
    uVar3 = *puVar10;
    uVar9 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f3a0424);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar9);
      piVar1 = (int *)((long)puVar10 + (ulong)uVar3);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar7 == 0)) {
        lVar5 = 0;
      }
      else {
        lVar5 = (long)*(int *)((long)piVar1 + uVar7);
      }
      _sqlite3_bind_int64(param_3,3,lVar5);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar8 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126cecc8);
        func_0x00010c21c9a0(puVar8);
        goto LAB_1068d1edc;
      }
    }
LAB_1068d1ef4:
    puVar8 = (undefined *)0x0;
  }
  _objc_release(puVar4);
LAB_1068d1f00:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1068d1f58; end: 1068d2b9b;  */

ulong FUN_1068d1f58(ulong param_1,ulong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  ulong uVar7;
  undefined ***pppuVar8;
  long lVar9;
  ulong uVar10;
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
  long lVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined4 *puVar24;
  ulong uVar25;
  undefined *puVar26;
  long lVar27;
  ulong uVar28;
  undefined4 *puVar29;
  undefined4 *puVar30;
  ulong uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined4 uStack_21c;
  ulong uStack_200;
  ulong uStack_1f8;
  undefined4 *puStack_1d8;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined **ppuStack_130;
  code *pcStack_128;
  undefined ***pppuStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  char *pcStack_e8;
  undefined4 uStack_e0;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  ppuStack_130 = &PTR_FUN_1109483e0;
  pcStack_128 = FUN_1068d2b9c;
  pppuStack_118 = &ppuStack_130;
  uVar7 = param_2;
  func_0x00010c259d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar32 = 0;
  _objc_retain(uVar7);
  uVar20 = uVar7;
  func_0x00010bf52a60();
  lVar21 = lRam0000000000000000;
  if (uVar20 == 0) {
    puStack_1d8 = (undefined4 *)0x0;
    puVar30 = (undefined4 *)0x0;
  }
  else {
    puStack_1d8 = (undefined4 *)0x0;
    puVar30 = (undefined4 *)0x0;
    puVar24 = (undefined4 *)0x0;
    do {
      uVar25 = 0;
      do {
        if (lRam0000000000000000 != lVar21) {
          _objc_enumerationMutation(uVar7);
        }
        puVar26 = *(undefined **)(uVar25 * 8);
        _objc_retain(puVar26);
        _objc_retain(puVar26);
        puStack_188 = puVar26;
        if (pppuStack_118 == (undefined ***)0x0) {
          func_0x000104bfeb48();
          goto LAB_1068d29b4;
        }
        pppuVar8 = pppuStack_118;
        (*(code *)(*pppuStack_118)[6])(pppuStack_118,param_1,&puStack_188);
        _objc_release(puStack_188);
        if (puVar30 < puVar24) {
          *puVar30 = (int)pppuVar8;
          puVar29 = puStack_1d8;
        }
        else {
          lVar27 = (long)puVar30 - (long)puStack_1d8;
          uVar10 = (lVar27 >> 2) + 1;
          if (uVar10 >> 0x3e != 0) {
            FUN_1068d2dc0();
LAB_1068d29b4:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1068d29b8);
            (*pcVar6)();
          }
          uVar23 = (long)puVar24 - (long)puStack_1d8 >> 1;
          if (uVar23 <= uVar10) {
            uVar23 = uVar10;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar24 - (long)puStack_1d8)) {
            uVar23 = 0x3fffffffffffffff;
          }
          if (uVar23 >> 0x3e != 0) {
            func_0x000104bd35f4();
            goto LAB_1068d29b4;
          }
          lVar9 = uVar23 << 2;
          __Znwm();
          puVar30 = (undefined4 *)(lVar9 + lVar27);
          puVar24 = (undefined4 *)(lVar9 + uVar23 * 4);
          puVar29 = puVar30 + -(lVar27 >> 2);
          *puVar30 = (int)pppuVar8;
          _memcpy(puVar29,puStack_1d8,lVar27);
          if (puStack_1d8 != (undefined4 *)0x0) {
            __ZdlPv(puStack_1d8);
          }
        }
        puStack_1d8 = puVar29;
        puVar30 = puVar30 + 1;
        _objc_release(puVar26);
        uVar25 = uVar25 + 1;
      } while (uVar20 != uVar25);
      uVar20 = uVar7;
      func_0x00010bf52a60();
    } while (uVar20 != 0);
  }
  _objc_release(uVar7);
  _objc_release(uVar7);
  _objc_release(uVar7);
  if (pppuStack_118 == &ppuStack_130) {
    lVar21 = 0x20;
  }
  else {
    if (pppuStack_118 == (undefined ***)0x0) goto LAB_1068d2198;
    lVar21 = 0x28;
  }
  (**(code **)((long)*pppuStack_118 + lVar21))();
LAB_1068d2198:
  uVar7 = param_2;
  func_0x00010c08cb80();
  _objc_retainAutoreleasedReturnValue();
  if (uVar7 == 0) {
    uStack_1f8 = 0;
  }
  else {
    uVar20 = param_2;
    func_0x00010c08cb80(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar25 = uVar20;
    func_0x00010c08d100(uVar20);
    _objc_retainAutoreleasedReturnValue();
    puStack_168 = &uStack_150;
    uStack_150 = 0;
    uStack_140 = 0x2020000000;
    uStack_138 = 0;
    puStack_160 = &uStack_110;
    uStack_110 = 0;
    uStack_100 = 0x3812000000;
    uStack_f8 = 0x1068d2e98;
    uStack_f0 = 0x1068d2ea4;
    pcStack_e8 = "";
    uStack_e0 = 0;
    uVar32 = 0xc2000000;
    puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_180 = 0xc2000000;
    pcStack_178 = FUN_1068d2f6c;
    puStack_170 = &UNK_1109484b0;
    uStack_158 = param_1;
    puStack_148 = puStack_168;
    puStack_108 = puStack_160;
    func_0x00010c0c1440();
    uVar1 = *(uint *)(puStack_148 + 3);
    uVar2 = *(undefined4 *)(puStack_108 + 6);
    __Block_object_dispose(&uStack_110,8);
    __Block_object_dispose(&uStack_150,8);
    _objc_release(uVar25);
    uVar25 = uVar20;
    func_0x00010c233900(uVar20);
    uVar10 = uVar20;
    func_0x00010c154d40(uVar20);
    func_0x00010c2744e0(uVar20);
    uVar33 = uVar32;
    func_0x00010c08e800(uVar20);
    uVar22 = uVar33;
    func_0x00010bf201c0(uVar20);
    uVar34 = uVar22;
    func_0x00010c140c20(uVar20);
    *(undefined1 *)(param_1 + 0x46) = 1;
    iVar3 = *(int *)(param_1 + 0x20);
    iVar4 = *(int *)(param_1 + 0x30);
    iVar5 = *(int *)(param_1 + 0x28);
    func_0x0001001ce1c8(param_1,6,uVar10 & 0xffffffff,0);
    func_0x000100c3b11c(param_1,0x12,uVar2);
    func_0x0001001ce290(uVar34,0,param_1,0xe);
    func_0x0001001ce290(uVar22,0,param_1,0xc);
    func_0x0001001ce290(uVar33,0,param_1,10);
    func_0x0001001ce290(uVar32,0,param_1,8);
    func_0x000100ab13ac(param_1,0x10,uVar1 & 0xff,0);
    func_0x000100ab13ac(param_1,4,uVar25,0);
    uStack_1f8 = param_1;
    func_0x0001001ce548(param_1,(iVar3 - iVar4) + iVar5);
    _objc_release(uVar20);
    _objc_release(uVar20);
    uStack_1f8 = uStack_1f8 & 0xffffffff;
  }
  _objc_release(uVar7);
  uVar7 = param_2;
  func_0x00010c137ca0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar7 == 0) {
    uStack_200 = 0;
  }
  else {
    uVar20 = param_2;
    func_0x00010c137ca0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar25 = uVar20;
    func_0x00010bf0bf20(uVar20);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_1;
    FUN_1068d2c90(param_1,uVar25);
    func_0x00010c0c3e60(uVar20);
    uVar33 = uVar32;
    func_0x00010c25af40(uVar20);
    uVar22 = uVar33;
    func_0x00010befe7c0(uVar20);
    uVar23 = uVar20;
    func_0x00010c232660(uVar20);
    *(undefined1 *)(param_1 + 0x46) = 1;
    iVar3 = *(int *)(param_1 + 0x20);
    iVar4 = *(int *)(param_1 + 0x30);
    iVar5 = *(int *)(param_1 + 0x28);
    func_0x0001001ce290(uVar22,0,param_1,10);
    func_0x0001001ce290(uVar33,0,param_1,8);
    func_0x0001001ce290(uVar32,0,param_1,6);
    func_0x0001001ce2e4(param_1,4,uVar10 & 0xffffffff);
    func_0x000100ab13ac(param_1,0xc,uVar23,0);
    uStack_200 = param_1;
    func_0x0001001ce548(param_1,(iVar3 - iVar4) + iVar5);
    _objc_release(uVar25);
    _objc_release(uVar20);
    _objc_release(uVar20);
    uStack_200 = uStack_200 & 0xffffffff;
  }
  _objc_release(uVar7);
  uVar20 = param_2;
  func_0x00010bfa4340();
  uVar7 = (long)puVar30 - (long)puStack_1d8;
  puVar24 = (undefined4 *)&UNK_10dde2dff;
  if (uVar7 != 0) {
    puVar24 = puStack_1d8;
  }
  *(undefined1 *)(param_1 + 0x46) = 1;
  func_0x0001001cddd0(param_1,uVar7,4);
  func_0x0001001cddd0(param_1,uVar7,4);
  if (puStack_1d8 != puVar30) {
    lVar21 = (long)uVar7 >> 2;
    do {
      iVar3 = puVar24[lVar21 + -1];
      func_0x0001001ce088(param_1,4);
      func_0x0001001ce0bc(param_1,(((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                                   *(int *)(param_1 + 0x28)) - iVar3) + 4);
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
  }
  *(undefined1 *)(param_1 + 0x46) = 0;
  uVar25 = param_1;
  func_0x0001001ce0bc(param_1,uVar7 >> 2);
  uVar7 = param_2;
  func_0x00010bf86660();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  FUN_1068d2c90();
  uVar23 = param_2;
  func_0x00010c0b3b40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  FUN_1068d2c90();
  uVar12 = param_2;
  func_0x00010c25c6c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (uVar12 == 0) {
    uStack_21c = 0;
  }
  else {
    _objc_retainAutorelease(uVar12);
    uVar13 = uVar12;
    func_0x00010bf25f00(uVar12);
    uVar14 = uVar12;
    func_0x00010c08fa60(uVar12);
    uVar15 = param_1;
    func_0x0001001d1030(param_1,uVar13,uVar14);
    uStack_21c = (undefined4)uVar15;
  }
  _objc_release(uVar12);
  uVar13 = param_2;
  func_0x00010bfab800(param_2);
  uVar14 = param_2;
  func_0x00010bfd9420();
  uVar15 = param_2;
  func_0x00010c0cc060();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (uVar15 == 0) {
    uVar28 = 0;
  }
  else {
    _objc_retainAutorelease(uVar15);
    uVar16 = uVar15;
    func_0x00010bf25f00(uVar15);
    uVar17 = uVar15;
    func_0x00010c08fa60(uVar15);
    uVar28 = param_1;
    func_0x0001001d1030(param_1,uVar16,uVar17);
  }
  _objc_release(uVar15);
  uVar16 = param_2;
  func_0x00010bfd93a0();
  uVar17 = param_2;
  func_0x00010bfbb3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (uVar17 == 0) {
    uVar31 = 0;
  }
  else {
    _objc_retainAutorelease(uVar17);
    uVar18 = uVar17;
    func_0x00010bf25f00(uVar17);
    uVar19 = uVar17;
    func_0x00010c08fa60(uVar17);
    uVar31 = param_1;
    func_0x0001001d1030(param_1,uVar18,uVar19);
  }
  _objc_release(uVar17);
  *(undefined1 *)(param_1 + 0x46) = 1;
  uVar22 = *(undefined8 *)(param_1 + 0x30);
  uVar32 = *(undefined8 *)(param_1 + 0x20);
  uVar33 = *(undefined8 *)(param_1 + 0x28);
  func_0x0001001ce1c8(param_1,0xe,uVar13,0);
  func_0x0001001ce220(param_1,0x1a,uVar31 & 0xffffffff);
  func_0x0001001ce220(param_1,0x16,uVar28 & 0xffffffff);
  if (uStack_200 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,0x14,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uStack_200) + 4,0);
  }
  if (uStack_1f8 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,0x12,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uStack_1f8) + 4,0);
  }
  func_0x0001001ce220(param_1,0xc,uStack_21c);
  func_0x0001001ce2e4(param_1,10,uVar11 & 0xffffffff);
  func_0x0001001ce2e4(param_1,8,uVar10 & 0xffffffff);
  if ((int)uVar25 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,6,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uVar25) + 4,0);
  }
  func_0x000100c3b024(param_1,4,uVar20,0);
  func_0x000100ab13ac(param_1,0x18,uVar16,0);
  func_0x000100ab13ac(param_1,0x10,uVar14 & 0xffffffff,0);
  uVar20 = (ulong)(uint)(((int)uVar32 - (int)uVar22) + (int)uVar33);
  func_0x0001001ce548(param_1,uVar20);
  _objc_release(uVar17);
  _objc_release(uVar15);
  _objc_release(uVar12);
  _objc_release(uVar23);
  _objc_release(uVar7);
  if (puStack_1d8 != (undefined4 *)0x0) {
    __ZdlPv();
  }
  uVar7 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    _objc_release(uVar17);
    _objc_release(uVar17);
    _objc_release(uVar23);
    if (puStack_1d8 != (undefined4 *)0x0) {
      __ZdlPv(puStack_1d8);
    }
    _objc_release(param_2);
    __Unwind_Resume();
    _objc_retain(uVar20);
    uVar25 = uVar20;
    func_0x00010c259740(uVar20);
    uVar10 = uVar20;
    func_0x00010bf454e0(uVar20);
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar7;
    FUN_1068d2c90(uVar7,uVar10);
    *(undefined1 *)(uVar7 + 0x46) = 1;
    iVar3 = *(int *)(uVar7 + 0x20);
    iVar4 = *(int *)(uVar7 + 0x30);
    iVar5 = *(int *)(uVar7 + 0x28);
    func_0x0001001ce170(uVar7,4,uVar25,0);
    func_0x0001001ce2e4(uVar7,6,uVar23 & 0xffffffff);
    func_0x0001001ce548(uVar7,(iVar3 - iVar4) + iVar5);
    _objc_release(uVar10);
    _objc_release(uVar20);
    return uVar7;
  }
  return param_1;
}



/* Entry: 1068d2b9c; end: 1068d2c8f;  */

ulong FUN_1068d2b9c(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c259740(param_2);
  uVar5 = param_2;
  func_0x00010bf454e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  FUN_1068d2c90(param_1,uVar5);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce170(param_1,4,uVar4,0);
  func_0x0001001ce2e4(param_1,6,uVar6 & 0xffffffff);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar5);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1068d2c90; end: 1068d2dbf;  */

undefined8 FUN_1068d2c90(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_1068d2d70;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_1068d2d70;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_1068d2d30;
    param_1 = 0;
  }
  else {
LAB_1068d2d30:
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
LAB_1068d2d70:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1068d2dc0; end: 1068d2dd3;  */

void FUN_1068d2dc0(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  return;
}



/* Entry: 1068d2dd4; end: 1068d2ddb;  */

void FUN_1068d2dd4(void)

{
  return;
}



/* Entry: 1068d2ddc; end: 1068d2e0f;  */

void FUN_1068d2ddc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1109483e0;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1068d2e10; end: 1068d2e4f;  */

void FUN_1068d2e10(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109483e0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1068d2e50; end: 1068d2e8b;  */

long FUN_1068d2e50(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110948450);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1068d2e8c; end: 1068d2ea7;  */

undefined ** FUN_1068d2e8c(void)

{
  return &PTR_DAT_110948450;
}



/* Entry: 1068d2ea8; end: 1068d2f6b;  */

void FUN_1068d2ea8(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  lVar4 = *(long *)(param_1 + 0x30);
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x00010c27dd80(param_2);
  *(undefined1 *)(lVar4 + 0x46) = 1;
  uVar1 = *(undefined8 *)(lVar4 + 0x28);
  uVar2 = *(undefined8 *)(lVar4 + 0x30);
  uVar5 = *(undefined8 *)(lVar4 + 0x20);
  func_0x0001001ce1c8(lVar4,4,uVar3 & 0xffffffff,0);
  func_0x0001001ce548(lVar4,((int)uVar5 - (int)uVar2) + (int)uVar1);
  _objc_release(param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068d2f6c; end: 1068d3033;  */

void FUN_1068d2f6c(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 2;
  lVar4 = *(long *)(param_1 + 0x30);
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x00010c27dd80(param_2);
  *(undefined1 *)(lVar4 + 0x46) = 1;
  uVar1 = *(undefined8 *)(lVar4 + 0x28);
  uVar2 = *(undefined8 *)(lVar4 + 0x30);
  uVar5 = *(undefined8 *)(lVar4 + 0x20);
  func_0x0001001ce1c8(lVar4,4,uVar3 & 0xffffffff,0);
  func_0x0001001ce548(lVar4,((int)uVar5 - (int)uVar2) + (int)uVar1);
  _objc_release(param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068d3034; end: 1068d303f; +[SCDiscoverFeedDataStore announcerIdentifier] */

undefined ** FUN_1068d3034(void)

{
  return &PTR____CFConstantStringClassReference_110e642f8;
}



/* Entry: 1068d3040; end: 1068d3047; -[SCDiscoverFeedDataStore addUpdateListener:] */

void FUN_1068d3040(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x90),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1068d3048; end: 1068d304f; -[SCDiscoverFeedDataStore removeUpdateListener:] */

void FUN_1068d3048(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x90),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1068d3050; end: 1068d3057; -[SCDiscoverFeedDataStore addListener:] */

void FUN_1068d3050(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xc0),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1068d3058; end: 1068d305f; -[SCDiscoverFeedDataStore removeListener:] */

void FUN_1068d3058(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xc0),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1068d3060; end: 1068d3757; -[SCDiscoverFeedDataStore initWithDocObjectContext:discoverFeedRanker:interactionHistoryManager:snapReadReceiptCoordinator:creatorSettingsDataTracker:creatorSettingsFetcher:creatorSettingsMutator:circumstanceEngine:networkConnectivityMonitor:storiesConfigProvider:contentFeedRepository:storiesBlizzardLogger:discoverCrashLogger:spotlightUsageTracker:userPreferences:] */

undefined8 *
FUN_1068d3060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
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
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_70 = PTR_PTR_1126f3b70;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = puVar2[1];
    puVar2[1] = param_3;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ced18;
    _objc_alloc();
    puVar5 = PTR_PTR_1126ced20;
    func_0x00010bf38d00(PTR_PTR_1126ced20);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126bfb50;
    func_0x00010c22b6a0(PTR_PTR_1126bfb50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffa6e0();
    uVar3 = puVar2[0xc];
    puVar2[0xc] = puVar4;
    _objc_release(uVar3);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar4 = PTR_PTR_1126b45a0;
    _objc_opt_new();
    uVar3 = puVar2[0x12];
    puVar2[0x12] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar3 = puVar2[0xe];
    puVar2[0xe] = puVar4;
    _objc_release(uVar3);
    _objc_release(puVar5);
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar3 = puVar2[0xf];
    puVar2[0xf] = puVar4;
    _objc_release(uVar3);
    _objc_release(puVar5);
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar3 = puVar2[0x11];
    puVar2[0x11] = puVar4;
    _objc_release(uVar3);
    _objc_release(puVar5);
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar3 = puVar2[0x10];
    puVar2[0x10] = puVar4;
    _objc_release(uVar3);
    _objc_release(puVar5);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar2[0x15];
    puVar2[0x15] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = puVar2[0x1a];
    puVar2[0x1a] = puVar4;
    _objc_release(uVar3);
    func_0x00010c18f2a0(puVar2);
    _objc_retain(param_12);
    uVar3 = puVar2[0x1e];
    puVar2[0x1e] = param_12;
    _objc_release(uVar3);
    puVar7 = puVar2;
    func_0x00010bdf9420();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[4];
    puVar2[4] = puVar7;
    _objc_release(uVar3);
    puVar7 = puVar2;
    func_0x00010bdf9700();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[3];
    puVar2[3] = puVar7;
    _objc_release(uVar3);
    puVar4 = PTR____NSDictionary0__struct_11034ab58;
    uVar3 = puVar2[2];
    puVar2[2] = PTR____NSDictionary0__struct_11034ab58;
    _objc_release(uVar3);
    uVar3 = puVar2[6];
    puVar2[6] = puVar4;
    _objc_release(uVar3);
    uVar3 = puVar2[7];
    puVar2[7] = puVar4;
    _objc_release(uVar3);
    _objc_retain(param_14);
    uVar3 = puVar2[0x13];
    puVar2[0x13] = param_14;
    _objc_release(uVar3);
    _objc_retain(param_15);
    uVar3 = puVar2[0x22];
    puVar2[0x22] = param_15;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar3 = puVar2[5];
    puVar2[5] = puVar4;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar2[0xb];
    puVar2[0xb] = param_10;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar3 = puVar2[8];
    puVar2[8] = puVar4;
    _objc_release(uVar3);
    _objc_retain(param_16);
    uVar3 = puVar2[0x21];
    puVar2[0x21] = param_16;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ced28;
    _objc_alloc();
    func_0x00010c02f160();
    uVar3 = puVar2[0x24];
    puVar2[0x24] = puVar4;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar2[0x1b];
    puVar2[0x1b] = param_7;
    _objc_release(uVar3);
    uVar3 = puVar2[0x1b];
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar2[0x1c];
    puVar2[0x1c] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar2[0x1d];
    puVar2[0x1d] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar2[0x16];
    puVar2[0x16] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar2[0x17];
    puVar2[0x17] = param_5;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = puVar2[0x18];
    puVar2[0x18] = puVar4;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar2[0x19];
    puVar2[0x19] = param_6;
    _objc_release(uVar3);
    uVar3 = puVar2[0x19];
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar3);
    uVar1 = (undefined1)puVar2[0xb];
    func_0x00010bf1f440();
    *(undefined1 *)((long)puVar2 + 0xa1) = uVar1;
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = puVar2[0x1f];
    puVar2[0x1f] = puVar4;
    _objc_release(uVar3);
    _objc_retain(param_13);
    uVar3 = puVar2[0xd];
    puVar2[0xd] = param_13;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126c1088;
    _objc_alloc_init();
    uVar3 = puVar2[0x20];
    puVar2[0x20] = puVar4;
    _objc_release(uVar3);
    _objc_retain(param_17);
    uVar3 = puVar2[0x23];
    puVar2[0x23] = param_17;
    _objc_release(uVar3);
  }
  _objc_release(param_17);
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
  return puVar2;
}



/* Entry: 1068d3758; end: 1068d377f; -[SCDiscoverFeedDataStore diskCacheLoadingStateObservable] */

void FUN_1068d3758(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068d3780; end: 1068d384b; -[SCDiscoverFeedDataStore sectionMetadataByFeedType] */

void FUN_1068d3780(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1068d384c;
  uStack_30 = 0x1068d385c;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1068d3864;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x70),param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068d384c; end: 1068d3863;  */

void FUN_1068d384c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1068d3864; end: 1068d38af;  */

void FUN_1068d3864(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010bd869d0(uVar1,&PTR___NSConcreteGlobalBlock_110948500,
                      &PTR___NSConcreteGlobalBlock_110948540);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1068d38b0; end: 1068d38b7;  */

void FUN_1068d38b0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa4350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_feedType_1125c6a78);
  return;
}



/* Entry: 1068d38b8; end: 1068d38df;  */

void FUN_1068d38b8(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1068d38e0; end: 1068d39ab; -[SCDiscoverFeedDataStore sectionDataModelsByFeedType] */

void FUN_1068d38e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1068d384c;
  uStack_30 = 0x1068d385c;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1068d39ac;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x70),param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068d39ac; end: 1068d39f7;  */

void FUN_1068d39ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010bd869d0(uVar1,&PTR___NSConcreteGlobalBlock_110948560,
                      &PTR___NSConcreteGlobalBlock_1109485a0);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1068d39f8; end: 1068d39ff;  */

void FUN_1068d39f8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa4350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_feedType_1125c6a78);
  return;
}



/* Entry: 1068d3a00; end: 1068d3a27;  */

void FUN_1068d3a00(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1068d3a28; end: 1068d3af3; -[SCDiscoverFeedDataStore feedTypes] */

void FUN_1068d3a28(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1068d384c;
  uStack_30 = 0x1068d385c;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1068d3af4;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x70),param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068d3af4; end: 1068d3b37;  */

void FUN_1068d3af4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x000100504554(uVar1,&PTR___NSConcreteGlobalBlock_1109485c0);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1068d3b38; end: 1068d3b3f;  */

void FUN_1068d3b38(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa4350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_feedType_1125c6a78);
  return;
}



/* Entry: 1068d3b40; end: 1068d3c0b; -[SCDiscoverFeedDataStore feedIdentifiers] */

void FUN_1068d3b40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1068d384c;
  uStack_30 = 0x1068d385c;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1068d3c0c;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x70),param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068d3c0c; end: 1068d3c47;  */

void FUN_1068d3c0c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010bf51e00();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1068d3c48; end: 1068d3c6b; -[SCDiscoverFeedDataStore _defaultFeedIdentifiers] */

void FUN_1068d3c48(void)

{
  func_0x000100504554(&PTR__OBJC_CLASS___NSConstantArray_111180ce0,
                      &PTR___NSConcreteGlobalBlock_110948600);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068d3c6c; end: 1068d3cb7;  */

void FUN_1068d3c6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ced30;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c0126a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1068d3cb8; end: 1068d3f33; -[SCDiscoverFeedDataStore _defaultSectionMetadataForFeedIdentifiers:] */

void FUN_1068d3cb8(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined1 *puStack_290;
  undefined *puStack_288;
  undefined1 **ppuStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar5 = &uStack_150;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar11 = PTR_PTR_1126ced30;
  _objc_alloc();
  func_0x00010c0126a0();
  puVar8 = PTR_PTR_1126ced30;
  _objc_alloc();
  func_0x00010c0126a0();
  puVar10 = PTR_PTR_1126c2248;
  puStack_88 = puVar11;
  _objc_alloc();
  puVar2 = puVar10;
  func_0x00010b0aeb1c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0126e0();
  puVar3 = PTR_PTR_1126c2248;
  puStack_80 = puVar8;
  puStack_78 = puVar10;
  _objc_alloc();
  puVar12 = puVar3;
  func_0x00010b0aeb34();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0126e0();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release(puVar11);
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  puStack_140 = (undefined8 *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  _objc_retain(param_3);
  puVar11 = param_3;
  func_0x00010bf52a60();
  if (puVar11 != (undefined *)0x0) {
    puVar10 = (undefined *)*puStack_140;
    do {
      puVar12 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_140 != puVar10) {
          _objc_enumerationMutation(param_3);
        }
        puVar8 = *(undefined **)(lStack_148 + (long)puVar12 * 8);
        puVar2 = puVar4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(puVar2);
        puVar12 = puVar12 + 1;
      } while (puVar11 != puVar12);
      puVar11 = param_3;
      puVar5 = &uStack_150;
      func_0x00010bf52a60();
    } while (puVar11 != (undefined *)0x0);
  }
  _objc_release(param_3);
  puVar11 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar4);
  _objc_release(puVar1);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_158 = FUN_1068d3f34;
    lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_1a0 = puVar12;
    puStack_198 = puVar10;
    puStack_190 = puVar2;
    puStack_188 = puVar8;
    puStack_180 = puVar11;
    puStack_178 = puVar4;
    puStack_170 = puVar1;
    puStack_168 = param_3;
    puStack_160 = &stack0xfffffffffffffff0;
    func_0x00010c0d3c80();
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    puVar12 = puVar3;
    func_0x00010bdf9420();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar12;
    func_0x00010bf52a60();
    if (puVar1 != (undefined *)0x0) {
      lVar9 = *plStack_260;
      do {
        puVar11 = (undefined *)0x0;
        do {
          if (*plStack_260 != lVar9) {
            _objc_enumerationMutation(puVar12);
          }
          puVar6 = (undefined1 *)puVar5;
          func_0x00010bf4b900();
          if (((ulong)puVar6 & 1) == 0) {
            func_0x00010befa120(puVar5);
          }
          puVar11 = puVar11 + 1;
        } while (puVar1 != puVar11);
        puVar1 = puVar12;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined *)0x0);
    }
    _objc_release(puVar12);
    puVar6 = (undefined1 *)puVar5;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)(puVar3 + 0x20);
    *(undefined1 **)(puVar3 + 0x20) = puVar6;
    _objc_release(uVar7);
    puVar6 = (undefined1 *)puVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
      return;
    }
    ___stack_chk_fail();
    pcStack_278 = FUN_1068d4078;
    puStack_2b8 = &uStack_2c0;
    uStack_2c0 = 0;
    uStack_2b0 = 0x3032000000;
    pcStack_2a8 = FUN_1068d384c;
    uStack_2a0 = 0x1068d385c;
    puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_290 = (undefined1 *)puVar5;
    puStack_288 = puVar3;
    ppuStack_280 = &puStack_160;
    _objc_opt_new();
    puStack_298 = puVar12;
    func_0x00010c0f8240(*(undefined8 *)(puVar6 + 0x70));
    puVar11 = (undefined *)puStack_2b8[5];
    func_0x00010bf51e00(puVar11);
    __Block_object_dispose(&uStack_2c0,8);
    _objc_release(puStack_298);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1068d3f34; end: 1068d4077; -[SCDiscoverFeedDataStore _setFeedIdentifiers:] */

void FUN_1068d3f34(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  ulong uStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0d3c80();
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = param_1;
  func_0x00010bdf9420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(lVar1);
        }
        uVar3 = param_3;
        func_0x00010bf4b900();
        if ((uVar3 & 1) == 0) {
          func_0x00010befa120(param_3);
        }
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  uVar3 = param_3;
  func_0x00010bf51e00();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  *(ulong *)(param_1 + 0x20) = uVar3;
  _objc_release(uVar5);
  uVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_1068d4078;
  puStack_168 = &uStack_170;
  uStack_170 = 0;
  uStack_160 = 0x3032000000;
  pcStack_158 = FUN_1068d384c;
  uStack_150 = 0x1068d385c;
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uStack_140 = param_3;
  lStack_138 = param_1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_opt_new();
  puStack_148 = puVar4;
  func_0x00010c0f8240(*(undefined8 *)(uVar3 + 0x70));
  uVar5 = puStack_168[5];
  func_0x00010bf51e00(uVar5);
  __Block_object_dispose(&uStack_170,8);
  _objc_release(puStack_148);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1068d4078; end: 1068d414f; -[SCDiscoverFeedDataStore sections] */

void FUN_1068d4078(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1068d384c;
  uStack_30 = 0x1068d385c;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_28 = puVar1;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x70));
  uVar2 = puStack_48[5];
  func_0x00010bf51e00(uVar2);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(puStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1068d4150; end: 1068d42a7;  */

void FUN_1068d4150(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  undefined1 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  _objc_retain(lVar5);
  puVar4 = auStack_d8;
  lVar1 = lVar5;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar8 = *plStack_110;
    do {
      lVar9 = 0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(lVar5);
        }
        uVar6 = *(undefined8 *)(lStack_118 + lVar9 * 8);
        lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
        func_0x00010c0e00e0(lVar2,param_2,uVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        unaff_x22 = uVar6;
        if (lVar2 != 0) {
          uVar7 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
          unaff_x22 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
          func_0x00010c0e00e0(unaff_x22,param_2,uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(uVar7,param_2,unaff_x22);
          _objc_release(unaff_x22);
        }
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      puVar4 = auStack_d8;
      lVar1 = lVar5;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar1 != 0);
  }
  lVar1 = lVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_1068d42a8;
  uStack_150 = unaff_x22;
  uStack_148 = unaff_x21;
  lStack_140 = lVar5;
  lStack_138 = param_1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  _objc_retain(puVar4);
  uVar6 = *(undefined8 *)(lVar1 + 0x70);
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  pcStack_178 = FUN_1068d4360;
  puStack_170 = &UNK_11084a9e8;
  lStack_168 = lVar1;
  puStack_160 = (undefined1 *)puVar3;
  puStack_158 = puVar4;
  _objc_retain(puVar4);
  _objc_retain(puVar3);
  func_0x00010c0f7fc0(uVar6,param_2,&puStack_188);
  _objc_release(puStack_158);
  _objc_release(puStack_160);
  _objc_release(puVar4);
  _objc_release(puVar3);
  return;
}



/* Entry: 1068d42a8; end: 1068d435f; -[SCDiscoverFeedDataStore querySectionMetadataWithCompletionQueue:completion:] */

void FUN_1068d42a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1068d4360;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068d4360; end: 1068d452f;  */

void FUN_1068d4360(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  _objc_retain(lVar6);
  lVar5 = lVar6;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar6);
        }
        lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar3 != 0) {
          uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
          func_0x00010c0e00e0(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(uVar4);
        }
        lVar8 = lVar8 + 1;
      } while (lVar5 != lVar8);
      lVar5 = lVar6;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(lVar6);
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_1068d4530;
  puStack_148 = &UNK_11084aaa8;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  puStack_140 = puVar2;
  uStack_138 = uVar1;
  _objc_retain(puVar2);
  func_0x00010007380c(uVar4,&puStack_160);
  _objc_release(puStack_140);
  _objc_release(uStack_138);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)(puVar2 + 0x28);
  if (lVar5 != 0) {
    uVar4 = *(undefined8 *)(puVar2 + 0x20);
    func_0x00010bf51e00(uVar4);
    (**(code **)(lVar5 + 0x10))(lVar5,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 1068d4530; end: 1068d457b;  */

void FUN_1068d4530(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf51e00(uVar1);
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1068d457c; end: 1068d4653; -[SCDiscoverFeedDataStore setSections:] */

void FUN_1068d457c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1068d4654; end: 1068d4687;  */

void FUN_1068d4654(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea7120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068d4688; end: 1068d47a7; -[SCDiscoverFeedDataStore updateWithSectionMetadata:allFeedTypesToKeep:completionQueue:completion:] */

void FUN_1068d4688(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_110948620);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain();
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 1068d47a8; end: 1068d47f3;  */

void FUN_1068d47a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ced30;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c0126a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1068d47f4; end: 1068d4ba7;  */

/* WARNING: Possible PIC construction at 0x0001068d4a74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001068d4a98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001068d4a78) */
/* WARNING: Removing unreachable block (ram,0x0001068d4a8c) */
/* WARNING: Removing unreachable block (ram,0x0001068d4a9c) */
/* WARNING: Removing unreachable block (ram,0x0001068d4ac0) */
/* WARNING: Removing unreachable block (ram,0x0001068d4acc) */
/* WARNING: Removing unreachable block (ram,0x0001068d4a5c) */

void FUN_1068d47f4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  long lStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_178 = *(long *)(param_1 + 0x20);
  lVar1 = *(long *)(lStack_178 + 0x20);
  puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_190 = 0xc2000000;
  pcStack_188 = FUN_1068d4ba8;
  puStack_180 = &UNK_110948640;
  func_0x000100504554(lVar1,&puStack_198);
  lVar7 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar7);
  _objc_retain(lVar1);
  if (lVar7 == lVar1) {
    _objc_release(lVar1);
    _objc_release(lVar7);
LAB_1068d48c4:
    lVar7 = *(long *)(param_1 + 0x40);
    if (lVar7 != 0) {
      func_0x00010007380c(*(undefined8 *)(param_1 + 0x30));
    }
  }
  else {
    if (lVar1 == 0) {
      _objc_release(lVar7);
    }
    else {
      lVar2 = lVar7;
      func_0x00010c071ae0();
      _objc_release(lVar1);
      _objc_release(lVar7);
      if ((int)lVar2 != 0) goto LAB_1068d48c4;
    }
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf529e0(lVar1);
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = *(long *)(param_1 + 0x28);
    _objc_retain(lVar8);
    lVar7 = lVar8;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar7 != 0) {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar8);
        }
        uVar10 = *(undefined8 *)(lVar6 * 8);
        puVar3 = PTR_PTR_1126ced30;
        _objc_alloc(PTR_PTR_1126ced30);
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bfa4340(uVar10);
        func_0x00010c0df840(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0126a0(puVar3);
        _objc_release(puVar4);
        func_0x00010c1d0640(puVar5);
        _objc_release(puVar3);
        lVar6 = lVar6 + 1;
      } while (lVar7 != lVar6);
      lVar7 = lVar8;
      func_0x00010bf52a60();
    }
    _objc_release(lVar8);
    lVar8 = *(long *)(param_1 + 0x38);
    _objc_retain(lVar8);
    lVar2 = lVar8;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    if (lVar2 != 0) goto code_r0x00010c0e00e0;
    _objc_release(lVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf51e00(uVar10);
    func_0x00010bea3e80(uVar9);
    _objc_release(uVar10);
    puVar4 = puVar5;
    func_0x00010bf51e00();
    uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    *(undefined **)(*(long *)(param_1 + 0x20) + 0x18) = puVar4;
    _objc_release(uVar10);
    func_0x00010be03d20(*(undefined8 *)(param_1 + 0x20));
    lVar7 = *(long *)(param_1 + 0x40);
    if (lVar7 != 0) {
      func_0x00010007380c(*(undefined8 *)(param_1 + 0x30));
    }
    _objc_release(puVar5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = *(undefined **)(*(long *)(lVar1 + 0x20) + 0x18);
code_r0x00010c0e00e0:
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar5,PTR_s_objectForKeyedSubscript__112615a50,lVar7);
  return;
}



/* Entry: 1068d4ba8; end: 1068d4bb7;  */

void FUN_1068d4ba8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),
             PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 1068d4bb8; end: 1068d4cf7; -[SCDiscoverFeedDataStore sectionDataModelForFeedType:] */

void FUN_1068d4bb8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126ced30;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0126a0();
  _objc_release(puVar2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1068d384c;
  uStack_40 = 0x1068d385c;
  uStack_38 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(puVar1);
  func_0x00010c0f8240(uVar3);
  uVar3 = puStack_58[5];
  _objc_retain(uVar3);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1068d4cf8; end: 1068d4d3b;  */

void FUN_1068d4cf8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c0e00e0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1068d4d3c; end: 1068d4d6f; -[SCDiscoverFeedDataStore indexForStory:inFeedType:] */

void FUN_1068d4d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c259740(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bfecbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_indexForStoryDedupeFp_inFeedType_1125d8cb8,param_3,param_4);
  return;
}



/* Entry: 1068d4d70; end: 1068d4e9b; -[SCDiscoverFeedDataStore indexForStoryDedupeFp:inFeedType:] */

undefined8 FUN_1068d4d70(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126ced30;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0126a0();
  _objc_release(puVar2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0x7fffffffffffffff;
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(puVar1);
  func_0x00010c0f8240(uVar3);
  uVar3 = puStack_58[3];
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puVar1);
  return uVar3;
}



/* Entry: 1068d4e9c; end: 1068d4f17;  */

void FUN_1068d4e9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010c0e00e0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068d4f18; end: 1068d4f6b;  */

void FUN_1068d4f18(long param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  func_0x00010c282800();
  if (param_2 == *(long *)(param_1 + 0x28)) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_3;
    *param_4 = 1;
  }
  return;
}



/* Entry: 1068d4f6c; end: 1068d506b; -[SCDiscoverFeedDataStore loadCachedStoriesForAllFeedTypesWithQuerySource:completion:] */

void FUN_1068d4f6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068d506c; end: 1068d509f;  */

void FUN_1068d506c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4cc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068d50a0; end: 1068d50c7; -[SCDiscoverFeedDataStore fullyViewedPromotedStoriesObservable] */

void FUN_1068d50a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068d50c8; end: 1068d5737; -[SCDiscoverFeedDataStore _loadCachedStoriesForAllFeedTypesWithQuerySource:completion:] */

void FUN_1068d50c8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 uStack_1e0;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined **ppuStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17ba0();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  lVar5 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0();
  if (lVar5 == 0) {
    uStack_1e0 = 0;
  }
  else {
    dVar20 = 0.0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    lStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    plStack_170 = (long *)0x0;
    lVar16 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar16);
    lVar5 = lVar16;
    func_0x00010bf52a60();
    if (lVar5 == 0) {
      uStack_1e0 = 1;
    }
    else {
      lVar15 = *plStack_170;
      uStack_1e0 = 1;
      do {
        lVar17 = 0;
        do {
          if (*plStack_170 != lVar15) {
            _objc_enumerationMutation(lVar16);
          }
          uVar18 = *(undefined8 *)(lStack_178 + lVar17 * 8);
          func_0x00010bfa4340();
          _objc_retainAutoreleasedReturnValue();
          uVar19 = uVar18;
          func_0x00010c2827c0();
          _objc_release(uVar18);
          lVar6 = *(long *)(param_1 + 0x10);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010bfab800();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = *(long *)(param_1 + 0x30);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar8;
          func_0x00010bf51e00();
          uVar18 = *(undefined8 *)(param_1 + 0x38);
          _objc_retain(uVar18);
          puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_130 = 0xc2000000;
          pcStack_128 = FUN_1068eaa54;
          puStack_120 = &UNK_1109488b0;
          uStack_118 = uVar18;
          _objc_retain(uVar18);
          lVar10 = lVar9;
          func_0x000100504554(lVar9,&puStack_138);
          _objc_release(uStack_118);
          _objc_release(uVar18);
          _objc_release(lVar9);
          _objc_release(lVar8);
          func_0x00010befa160(puVar3);
          if ((int)uVar19 == 2) {
            if ((lVar6 == 0) || (lVar9 = lVar10, func_0x00010bf529e0(), lVar9 == 0)) {
              uVar18 = *(undefined8 *)(param_1 + 0xf0);
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              puVar11 = PTR_PTR_1126c2320;
              func_0x00010bf81600(PTR_PTR_1126c2320);
              _objc_retainAutoreleasedReturnValue();
              uVar19 = uVar18;
              func_0x00010bf1f320();
              _objc_release(puVar11);
              _objc_release(uVar18);
              dVar23 = dVar20;
              if ((int)uVar19 != 0) {
                lVar9 = param_1;
                func_0x00010be1fee0();
                _objc_retainAutoreleasedReturnValue();
                dVar23 = dVar20;
                if (lVar9 != 0) {
                  _objc_release(lVar7);
                  lVar7 = lVar9;
                  goto LAB_1068d5394;
                }
              }
              puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(ppuVar4);
              _objc_release(puVar11);
              uVar19 = *(undefined8 *)(param_1 + 0x100);
              puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
              _objc_retainAutoreleasedReturnValue();
              ppuVar13 = &PTR____CFConstantStringClassReference_110e64358;
              if (lVar6 != 0) {
                ppuVar13 = &PTR____CFConstantStringClassReference_110e64338;
              }
LAB_1068d5548:
              func_0x00010852f058(uVar19,puVar11,ppuVar13,1);
              _objc_release(puVar11);
              uStack_1e0 = 0;
              dVar20 = dVar23;
            }
            else {
LAB_1068d5394:
              func_0x00010bf6a620(*(undefined8 *)(param_1 + 0x120));
              dVar21 = dVar20;
              func_0x00010c0f7ba0(*(undefined8 *)(param_1 + 0x120));
              puVar11 = PTR__OBJC_CLASS___NSDate_1126ae770;
              dVar22 = dVar21;
              func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c26f380();
              dVar23 = dVar22;
              _objc_release(puVar11);
              if (0.0 <= dVar21) {
                ppuVar13 = &PTR____CFConstantStringClassReference_110e64378;
                dVar20 = dVar21;
              }
              else {
                ppuVar13 = &PTR____CFConstantStringClassReference_110e64398;
              }
              bVar2 = dVar20 <= dVar22;
              dVar20 = dVar23;
              if (bVar2) {
                puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(ppuVar4);
                _objc_release(puVar11);
                uVar19 = *(undefined8 *)(param_1 + 0x100);
                goto LAB_1068d5524;
              }
            }
          }
          else {
            if ((int)uVar19 == 3) {
              if (lVar6 == 0) {
                ppuVar13 = &PTR____CFConstantStringClassReference_110e64358;
                dVar23 = dVar20;
              }
              else {
                lVar9 = lVar10;
                func_0x00010bf529e0();
                if (lVar9 != 0) goto LAB_1068d5394;
                ppuVar13 = &PTR____CFConstantStringClassReference_110e64338;
                dVar23 = dVar20;
              }
              puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(ppuVar4);
              _objc_release(puVar11);
              uVar19 = *(undefined8 *)(param_1 + 0x100);
LAB_1068d5524:
              puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
              _objc_retainAutoreleasedReturnValue();
              goto LAB_1068d5548;
            }
            if (lVar6 != 0) goto LAB_1068d5394;
          }
          _objc_release(lVar10);
          _objc_release(lVar7);
          _objc_release(lVar6);
          lVar17 = lVar17 + 1;
        } while (lVar5 != lVar17);
        lVar5 = lVar16;
        func_0x00010bf52a60();
      } while (lVar5 != 0);
    }
    _objc_release(lVar16);
  }
  ppuVar12 = ppuVar4;
  func_0x00010bf529e0();
  ppuVar13 = ppuVar4;
  if ((undefined **)0x1 < ppuVar12) {
    ppuVar13 = &PTR__OBJC_CLASS___NSConstantArray_111180cf8;
    func_0x00010c0d3c80();
    _objc_release(ppuVar4);
    uVar19 = *(undefined8 *)(param_1 + 0x100);
    puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010852f058(uVar19,puVar11,&PTR____CFConstantStringClassReference_110e643b8,1);
    _objc_release(puVar11);
  }
  uVar19 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1b8 = 0xc2000000;
  pcStack_1b0 = FUN_1068d5738;
  puStack_1a8 = &UNK_110864938;
  puStack_1a0 = puVar3;
  ppuStack_198 = ppuVar13;
  uStack_190 = param_4;
  uStack_188 = uStack_1e0;
  _objc_retain(ppuVar13);
  _objc_retain(puVar3);
  _objc_retain(param_4);
  func_0x00010007380c(uVar19,&puStack_1c0);
  _objc_release(uVar19);
  _objc_release(ppuStack_198);
  _objc_release(puStack_1a0);
  _objc_release(uStack_190);
  _objc_release(ppuVar13);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)(param_3 + 0x30);
  if (lVar5 != 0) {
    lVar16 = *(long *)(param_3 + 0x20);
    func_0x00010bf529e0();
    if (lVar16 == 0) {
      uVar19 = 0;
    }
    else {
      uVar19 = *(undefined8 *)(param_3 + 0x20);
      func_0x00010bf51e00(uVar19);
    }
    uVar1 = *(undefined1 *)(param_3 + 0x38);
    uVar14 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010bf00560(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar14;
    func_0x00010c0d3c80();
    (**(code **)(lVar5 + 0x10))(lVar5,uVar19,uVar1,uVar18);
    _objc_release(uVar18);
    _objc_release(uVar14);
    if (lVar16 != 0) {
      _objc_release(uVar19);
    }
  }
  puVar3 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1068d5738; end: 1068d580b;  */

void FUN_1068d5738(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x30);
  if (lVar7 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf51e00(uVar3);
    }
    uVar1 = *(undefined1 *)(param_1 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf00560(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0d3c80();
    (**(code **)(lVar7 + 0x10))(lVar7,uVar3,uVar1,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
    if (lVar2 != 0) {
      _objc_release(uVar3);
    }
  }
  puVar6 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1068d580c; end: 1068d593b; -[SCDiscoverFeedDataStore loadCachedStoriesForFeedType:querySource:completion:] */

void FUN_1068d580c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068d593c; end: 1068d5973;  */

void FUN_1068d593c(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4cc20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068d5974; end: 1068d5e77; -[SCDiscoverFeedDataStore _loadCachedStoriesForFeedType:querySource:completion:] */

void FUN_1068d5974(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined1 uStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 auStack_118 [16];
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_3;
  puVar6 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    func_0x0001000819a8();
    _objc_retainAutoreleasedReturnValue();
    puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_168 = 0xc2000000;
    pcStack_160 = FUN_1068d5e78;
    puStack_158 = &UNK_11084aaa8;
    _objc_retain(param_5);
    puStack_148 = param_5;
    _objc_retain(param_3);
    puStack_150 = param_3;
    func_0x00010007380c(lVar2,&puStack_170);
    _objc_release(lVar2);
    _objc_release(puStack_150);
    puVar12 = puStack_148;
  }
  else {
    dVar16 = 0.0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    lVar13 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar13);
    puVar10 = &uStack_1b0;
    puVar6 = auStack_118;
    lVar2 = lVar13;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar15 = *plStack_1a0;
      do {
        lVar11 = 0;
        do {
          if (*plStack_1a0 != lVar15) {
            _objc_enumerationMutation(lVar13);
          }
          puVar12 = *(undefined8 **)(lStack_1a8 + lVar11 * 8);
          puVar9 = puVar12;
          func_0x00010bfa4340();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar9;
          puVar10 = param_3;
          func_0x00010c071f40();
          _objc_release(puVar9);
          if (((ulong)puVar3 & 1) != 0) {
            _objc_retain(puVar12);
            _objc_release(lVar13);
            if (puVar12 == (undefined8 *)0x0) goto LAB_1068d5c84;
            uVar4 = *(undefined8 *)(param_1 + 0x30);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar4;
            func_0x00010bf51e00();
            uVar14 = *(undefined8 *)(param_1 + 0x38);
            _objc_retain(uVar14);
            puVar1 = PTR___NSConcreteStackBlock_11034bd00;
            puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_138 = 0xc2000000;
            pcStack_130 = FUN_1068eaa54;
            puStack_128 = &UNK_1109488b0;
            uStack_120 = uVar14;
            _objc_retain(uVar14);
            uVar5 = uVar8;
            func_0x000100504554(uVar8,&puStack_140);
            _objc_release(uStack_120);
            _objc_release(uVar14);
            _objc_release(uVar8);
            _objc_release(uVar4);
            puVar10 = puVar12;
            func_0x00010bfa4340();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar10;
            func_0x00010c2827c0();
            _objc_release(puVar10);
            func_0x00010c13b0a0(*(undefined8 *)(param_1 + 0x120));
            puVar9 = *(undefined8 **)(param_1 + 0x10);
            puVar10 = puVar12;
            dVar17 = dVar16;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar9 == (undefined8 *)0x0) {
              puVar3 = puVar9;
              func_0x0001000819a8();
              _objc_retainAutoreleasedReturnValue();
              puStack_218 = puVar1;
              uStack_210 = 0xc2000000;
              pcStack_208 = FUN_1068d5fb8;
              puStack_200 = &UNK_11084a9e8;
              _objc_retain(param_5);
              uStack_1f8 = uVar5;
              puStack_1e8 = param_5;
              _objc_retain(param_3);
              puStack_1f0 = param_3;
              _objc_retain(uVar5);
              func_0x00010007380c(puVar3,&puStack_218);
              _objc_release(puVar3);
              _objc_release(puStack_1f0);
              _objc_release(uStack_1f8);
              puVar3 = puStack_1e8;
            }
            else {
              puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
              func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = puVar9;
              func_0x00010bfab800();
              _objc_retainAutoreleasedReturnValue();
              puVar10 = puVar3;
              func_0x00010c26f380(puVar7);
              _objc_release(puVar3);
              _objc_release(puVar7);
              uVar8 = 0;
              func_0x0001000819a8(0,0);
              _objc_retainAutoreleasedReturnValue();
              puStack_258 = puVar1;
              uStack_250 = 0xc2000000;
              uStack_248 = 0x1068d605c;
              puStack_240 = &UNK_110864938;
              _objc_retain(param_5);
              uStack_238 = uVar5;
              puStack_228 = param_5;
              uStack_220 = dVar17 < dVar16;
              _objc_retain(param_3);
              puStack_230 = param_3;
              _objc_retain(uVar5);
              func_0x00010007380c(uVar8,&puStack_258);
              _objc_release(uVar8);
              _objc_release(puStack_230);
              _objc_release(uStack_238);
              puVar3 = puStack_228;
            }
            _objc_release(puVar3);
            _objc_release(uVar5);
            _objc_release(puVar9);
            goto LAB_1068d5e14;
          }
          lVar11 = lVar11 + 1;
        } while (lVar2 != lVar11);
        puVar10 = &uStack_1b0;
        puVar6 = auStack_118;
        lVar2 = lVar13;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar13);
LAB_1068d5c84:
    uVar8 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_1e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1d8 = 0xc2000000;
    uStack_1d0 = 0x1068d5f18;
    puStack_1c8 = &UNK_11084aaa8;
    _objc_retain(param_5);
    puStack_1b8 = param_5;
    _objc_retain(param_3);
    puStack_1c0 = param_3;
    func_0x00010007380c(uVar8,&puStack_1e0);
    _objc_release(uVar8);
    _objc_release(puStack_1c0);
    puVar12 = puStack_1b8;
  }
LAB_1068d5e14:
  _objc_release(puVar12);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = param_3[5];
  if (lVar13 != 0) {
    param_3 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = (undefined8 *)0x0;
    puVar6 = param_3;
    (**(code **)(lVar13 + 0x10))(lVar13,PTR____NSArray0__struct_11034ab48);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = param_3[5];
  if (lVar13 != 0) {
    param_3 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = (undefined8 *)0x0;
    puVar6 = param_3;
    (**(code **)(lVar13 + 0x10))(lVar13,PTR____NSArray0__struct_11034ab48);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = param_3[6];
  if (lVar13 != 0) {
    uVar8 = param_3[4];
    param_3 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = (undefined8 *)0x0;
    puVar6 = param_3;
    (**(code **)(lVar13 + 0x10))(lVar13,uVar8);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar2) {
    ___stack_chk_fail();
    lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar12 = (undefined8 *)param_3[6];
    if (puVar12 != (undefined8 *)0x0) {
      lVar13 = param_3[4];
      func_0x00010bf529e0();
      if (lVar13 == 0) {
        puVar9 = (undefined8 *)0x0;
      }
      else {
        puVar9 = (undefined8 *)param_3[4];
        func_0x00010bf51e00();
      }
      if (*(char *)(param_3 + 7) == '\x01') {
        puVar10 = (undefined8 *)0x1;
        puVar6 = (undefined8 *)PTR____NSArray0__struct_11034ab48;
        (*(code *)puVar12[2])(puVar12,puVar9);
        param_3 = puVar12;
      }
      else {
        param_3 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = (undefined8 *)0x0;
        puVar6 = param_3;
        (*(code *)puVar12[2])(puVar12,puVar9);
        _objc_release();
      }
      if (lVar13 != 0) {
        _objc_release();
        param_3 = puVar9;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
      return;
    }
    ___stack_chk_fail();
    _objc_retain(puVar10);
    _objc_retain(puVar6);
    uVar8 = param_3[0xe];
    _objc_retain(puVar6);
    _objc_retain(puVar10);
    func_0x00010c0f7fc0(uVar8);
    _objc_release(puVar6);
    _objc_release(puVar10);
    _objc_release(puVar6);
    _objc_release(puVar10);
    return;
  }
  return;
}



/* Entry: 1068d5e78; end: 1068d5fb7;  */

void FUN_1068d5e78(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    uStack_30 = *(undefined8 *)(param_1 + 0x20);
    param_1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_30,1);
    _objc_retainAutoreleasedReturnValue();
    param_3 = 0;
    param_4 = param_1;
    (**(code **)(lVar2 + 0x10))(lVar2,PTR____NSArray0__struct_11034ab48);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    param_1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = 0;
    param_4 = param_1;
    (**(code **)(lVar3 + 0x10))(lVar3,PTR____NSArray0__struct_11034ab48);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    param_1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = 0;
    param_4 = param_1;
    (**(code **)(lVar3 + 0x10))(lVar3,uVar5);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = *(undefined **)(param_1 + 0x30);
  if (puVar4 != (undefined *)0x0) {
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if (lVar3 == 0) {
      puVar1 = (undefined *)0x0;
    }
    else {
      puVar1 = *(undefined **)(param_1 + 0x20);
      func_0x00010bf51e00();
    }
    if (param_1[0x38] == '\x01') {
      param_3 = 1;
      param_4 = PTR____NSArray0__struct_11034ab48;
      (**(code **)(puVar4 + 0x10))(puVar4,puVar1);
      param_1 = puVar4;
    }
    else {
      param_1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      param_3 = 0;
      param_4 = param_1;
      (**(code **)(puVar4 + 0x10))(puVar4,puVar1);
      _objc_release();
    }
    if (lVar3 != 0) {
      _objc_release();
      param_1 = puVar1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068d5fb8; end: 1068d6163;  */

void FUN_1068d5fb8(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uStack_40 = *(undefined8 *)(param_1 + 0x28);
    param_1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    param_3 = 0;
    param_4 = param_1;
    (**(code **)(lVar3 + 0x10))(lVar3,uVar5);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = *(undefined **)(param_1 + 0x30);
  if (puVar4 != (undefined *)0x0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = *(undefined **)(param_1 + 0x20);
      func_0x00010bf51e00();
    }
    if (param_1[0x38] == '\x01') {
      param_3 = 1;
      param_4 = PTR____NSArray0__struct_11034ab48;
      (**(code **)(puVar4 + 0x10))(puVar4,puVar2);
      param_1 = puVar4;
    }
    else {
      param_1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      param_3 = 0;
      param_4 = param_1;
      (**(code **)(puVar4 + 0x10))(puVar4,puVar2);
      _objc_release();
    }
    if (lVar1 != 0) {
      _objc_release();
      param_1 = puVar2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068d6164; end: 1068d621b; -[SCDiscoverFeedDataStore queryStoryDeltaInfoWithCompletionQueue:completion:] */

void FUN_1068d6164(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1068d621c;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}


