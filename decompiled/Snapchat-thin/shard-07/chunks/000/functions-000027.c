/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10507947c; end: 10507951b; -[SCProfileChatAttachmentSequenceNumberEntry isEqual:] */

long FUN_10507947c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105079500;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_105079500;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_105079500;
    }
  }
  lVar3 = 1;
LAB_105079500:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10507951c; end: 105079523; -[SCProfileChatAttachmentSequenceNumberEntry participant] */

undefined8 FUN_10507951c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105079524; end: 10507952b; -[SCProfileChatAttachmentSequenceNumberEntry sequenceNumber] */

undefined8 FUN_105079524(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10507952c; end: 105079537; -[SCProfileChatAttachmentSequenceNumberEntry .cxx_destruct] */

void FUN_10507952c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105079538; end: 10507959b;  */

undefined ** FUN_105079538(void)

{
  int iVar1;
  
  if ((bRam0000000113817d98 & 1) == 0) {
    iVar1 = 0x13817d98;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_1130c1f40,0x100000000);
      ___cxa_guard_release(0x113817d98);
    }
  }
  return &PTR_PTR_1130c1f40;
}



/* Entry: 10507959c; end: 105079623;  */

void FUN_10507959c(uint *param_1,undefined1 *param_2)

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



/* Entry: 105079624; end: 1050796af;  */

void FUN_105079624(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c0f0700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c0f0700(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1050796b0; end: 105079767;  */

undefined8 FUN_1050796b0(void)

{
  int iVar1;
  
  if ((bRam0000000113817e10 & 1) == 0) {
    iVar1 = 0x13817e10;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113817da8 = 0xe;
      pcRam0000000113817db0 = "expirationTimestamp";
      uRam0000000113817db8 = 0x100;
      pcRam0000000113817dc0 = FUN_105079768;
      pcRam0000000113817dc8 = FUN_1050797a0;
      ppuRam0000000113817da0 = &PTR_DAT_110864b98;
      uRam0000000113817de0 = 0;
      uRam0000000113817dd8 = 0;
      uRam0000000113817df0 = 0;
      uRam0000000113817de8 = 0;
      uRam0000000113817e00 = 0;
      uRam0000000113817df8 = 0;
      uRam0000000113817e08 = 0;
      ___cxa_atexit(0x105077cd4,0x113817da0,0x100000000);
      ___cxa_guard_release(0x113817e10);
    }
  }
  return 0x113817da0;
}



/* Entry: 105079768; end: 10507979f;  */

undefined8 FUN_105079768(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((8 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar2 != 0)) {
    return *(undefined8 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 1050797a0; end: 1050797f3;  */

undefined8 FUN_1050797a0(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010bf9c880(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1050797f4; end: 1050798d3;  */

undefined8 * FUN_1050797f4(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110864c08;
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



/* Entry: 1050798d4; end: 105079f8f;  */

void FUN_1050798d4(long param_1,undefined8 param_2,int *param_3)

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
    goto code_r0x000105079f34;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x000105079f54;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x000105079f54;
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
code_r0x000105079ec8:
                    /* WARNING: Could not recover jumptable at 0x000105079eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x000105079ec8;
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
      goto code_r0x000105079f54;
    }
    goto code_r0x000105079f48;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x000105079f48;
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
    goto code_r0x000105079f54;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x000105079f54;
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
    goto LAB_105079f64;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x000105079f34:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x000105079f48:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x000105079f54:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_105079f64:
  return;
}



/* Entry: 105079f90; end: 10507a0c7;  */

void FUN_105079f90(long param_1,undefined8 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  int *piVar5;
  
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
      piVar1 = *(int **)(param_1 + 0x50);
      for (piVar5 = *(int **)(param_1 + 0x48); piVar5 != piVar1; piVar5 = piVar5 + 1) {
        iVar3 = *piVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,(long)iVar3);
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
      _sqlite3_bind_int64(param_2,iVar2 + 1,(long)*(int *)(param_1 + 0x30));
      return;
    }
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010507a0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 10507a0c8; end: 10507a3d7;  */

long * FUN_10507a0c8(long param_1,long *param_2,long *param_3,byte *param_4)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  byte bVar7;
  long *plVar8;
  uint uStack_5c;
  uint uStack_58;
  byte bStack_52;
  byte bStack_51;
  
  _objc_retain(param_3);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xe) {
    if (iVar2 - 1U < 2) {
      plVar8 = (long *)0x0;
      *param_4 = 0;
      goto LAB_10507a3ac;
    }
    if (iVar2 - 0xcU < 2) {
      plVar8 = (long *)0x0;
      goto LAB_10507a3ac;
    }
  }
  else {
    if (iVar2 - 0xfU < 2) {
      *param_4 = 0;
      plVar8 = (long *)(ulong)*(uint *)(param_1 + 0x30);
      goto LAB_10507a3ac;
    }
    if (iVar2 == 0xe) {
      lVar1 = 0x28;
      plVar8 = param_3;
      if (param_2 != (long *)0x0) {
        lVar1 = 0x20;
        plVar8 = param_2;
      }
      (**(code **)(param_1 + lVar1))(plVar8,param_4);
      goto LAB_10507a3ac;
    }
  }
  plVar5 = *(long **)(param_1 + 0x38);
  plVar6 = *(long **)(param_1 + 0x40);
  _objc_retain(param_3);
  plVar8 = (long *)0x0;
  if (iVar2 < 5) {
    if (iVar2 == 0) {
      (**(code **)(*plVar5 + 0x28))(plVar5,param_2,param_3,param_4);
      plVar8 = (long *)(ulong)((int)plVar5 == 0);
    }
    else if (iVar2 == 3) {
      (**(code **)(*plVar5 + 0x28))(plVar5,param_2,param_3,&uStack_58);
      (**(code **)(*plVar6 + 0x28))(plVar6,param_2,param_3,&uStack_5c);
      *param_4 = ((byte)uStack_58 | (byte)uStack_5c) & 1;
      iVar2 = 0;
      iVar4 = (int)plVar6;
      if (iVar4 != 0) {
        iVar2 = (int)plVar5 / iVar4;
      }
      plVar8 = (long *)(ulong)(uint)((int)plVar5 - iVar2 * iVar4);
    }
    else if (iVar2 == 4) {
      (**(code **)(*plVar5 + 0x28))(plVar5,param_2,param_3,&uStack_58);
      (**(code **)(*plVar6 + 0x28))(plVar6,param_2,param_3,&uStack_5c);
      if (((int)plVar5 == 0) && (bVar7 = (byte)uStack_5c, (uStack_58 & 1) == 0)) {
LAB_10507a280:
        bVar7 = (byte)uStack_58 & bVar7;
      }
      else {
        if (((int)plVar6 == 0) && ((uStack_5c & 1) == 0)) {
          bVar7 = 0;
          goto LAB_10507a280;
        }
        bVar7 = (byte)uStack_58 | (byte)uStack_5c;
      }
      *param_4 = bVar7 & 1;
      bVar3 = (int)plVar5 == 0 || (int)plVar6 == 0;
      goto LAB_10507a3a0;
    }
  }
  else if (iVar2 - 6U < 6) {
    plVar8 = plVar5;
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2,param_3,&bStack_51);
    uStack_58 = (uint)plVar8;
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2,param_3,&bStack_52);
    uStack_5c = (uint)plVar6;
    *param_4 = (bStack_51 | bStack_52) & 1;
    FUN_10507a3d8(plVar5,&uStack_58,&uStack_5c,iVar2,0);
    plVar8 = plVar5;
  }
  else if (iVar2 == 5) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2,param_3,&uStack_58);
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2,param_3,&uStack_5c);
    if (((int)plVar5 == 0) || (bVar7 = (byte)uStack_5c, (uStack_58 & 1) != 0)) {
      if (((int)plVar6 != 0) && ((uStack_5c & 1) == 0)) {
        bVar7 = 0;
        goto LAB_10507a2e8;
      }
      bVar7 = (byte)uStack_58 | (byte)uStack_5c;
    }
    else {
LAB_10507a2e8:
      bVar7 = (byte)uStack_58 & bVar7;
    }
    *param_4 = bVar7 & 1;
    bVar3 = (int)plVar5 == 0 && (int)plVar6 == 0;
LAB_10507a3a0:
    plVar8 = (long *)(ulong)!bVar3;
  }
  _objc_release(param_3);
LAB_10507a3ac:
  _objc_release(param_3);
  return plVar8;
}



/* Entry: 10507a3d8; end: 10507a48b;  */

bool FUN_10507a3d8(undefined8 param_1,int *param_2,int *param_3,int param_4)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_4 < 9) {
    if (param_4 == 6) {
      return *param_2 < *param_3;
    }
    if (param_4 == 7) {
      return *param_2 <= *param_3;
    }
    if (param_4 == 8) {
      return *param_3 < *param_2;
    }
  }
  else {
    if (param_4 == 9) {
      return *param_3 <= *param_2;
    }
    if (param_4 == 10) {
      bVar1 = *param_2 == *param_3;
    }
    else if (param_4 == 0xb) {
      return *param_2 != *param_3;
    }
  }
  return bVar1;
}



/* Entry: 10507a48c; end: 10507a61f;  */

undefined8 * FUN_10507a48c(undefined8 *param_1,int param_2,long *param_3)

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
  *param_1 = &PTR_FUN_110864c08;
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



/* Entry: 10507a620; end: 10507a6b7;  */

undefined8 * FUN_10507a620(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

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
  *param_1 = &PTR_FUN_110864c08;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  func_0x00010069997c(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 2);
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



/* Entry: 10507a6b8; end: 10507a6cb;  */

char * FUN_10507a6b8(void)

{
  func_0x000104bd47e8("vector");
  return "profilechatattachment__datamodel_draft";
}



/* Entry: 10507a6cc; end: 10507a6d7; +[SCProfileChatAttachmentDataModel table] */

char * FUN_10507a6cc(void)

{
  return "profilechatattachment__datamodel_draft";
}



/* Entry: 10507a6d8; end: 10507ae53; +[SCProfileChatAttachmentDataModel immutableObjectParse:bufferSize:] */

void FUN_10507a6d8(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  ushort uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar5 = PTR_PTR_1126b45c8;
  _objc_alloc();
  iVar8 = *piVar1;
  lVar9 = (long)iVar8;
  uVar10 = *(ushort *)((long)piVar1 - lVar9);
  if (uVar10 < 5) {
    puVar16 = (undefined *)0x0;
LAB_10507a7c8:
    puVar19 = (undefined *)0x0;
LAB_10507a7cc:
    uVar6 = 0;
LAB_10507a7d0:
    puVar13 = (undefined *)0x0;
LAB_10507a7d4:
    uVar7 = 0;
LAB_10507a7d8:
    puVar15 = (undefined *)0x0;
LAB_10507a7dc:
    puVar18 = (undefined *)0x0;
LAB_10507a7e0:
    uVar12 = 0;
LAB_10507a7e4:
    puVar21 = (undefined *)0x0;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar1 - lVar9))[2];
    if (uVar11 == 0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = (long)*piVar1;
      uVar10 = *(ushort *)((long)piVar1 - lVar9);
    }
    iVar8 = (int)lVar9;
    lVar9 = -lVar9;
    if (uVar10 < 7) goto LAB_10507a7c8;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 6);
    if (uVar11 == 0) {
      puVar19 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puVar19 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      iVar8 = *piVar1;
      lVar9 = -(long)iVar8;
      uVar10 = *(ushort *)((long)piVar1 - (long)iVar8);
    }
    if (uVar10 < 9) goto LAB_10507a7cc;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 8);
    if (uVar11 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)((long)piVar1 + uVar11);
    }
    if (uVar10 < 0xb) goto LAB_10507a7d0;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 10);
    if (uVar11 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      iVar8 = *piVar1;
      lVar9 = -(long)iVar8;
      uVar10 = *(ushort *)((long)piVar1 - (long)iVar8);
    }
    if (uVar10 < 0xd) goto LAB_10507a7d4;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 0xc);
    if (uVar11 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)((long)piVar1 + uVar11);
    }
    if (uVar10 < 0xf) goto LAB_10507a7d8;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 0xe);
    if (uVar11 == 0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      iVar8 = *piVar1;
      lVar9 = -(long)iVar8;
      uVar10 = *(ushort *)((long)piVar1 - (long)iVar8);
    }
    if (uVar10 < 0x11) goto LAB_10507a7dc;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 0x10);
    if (uVar11 == 0) {
      puVar18 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      iVar8 = *piVar1;
      lVar9 = -(long)iVar8;
      uVar10 = *(ushort *)((long)piVar1 - (long)iVar8);
    }
    if (uVar10 < 0x13) goto LAB_10507a7e0;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 0x12);
    if (uVar11 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined8 *)((long)piVar1 + uVar11);
    }
    if ((uVar10 < 0x15) || (uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 0x14), uVar11 == 0))
    goto LAB_10507a7e4;
    puVar2 = (uint *)((long)piVar1 + uVar11);
    uVar4 = *puVar2;
    puVar21 = PTR_PTR_1126b45e8;
    _objc_alloc();
    piVar3 = (int *)((long)puVar2 + (ulong)uVar4);
    lVar9 = (long)*piVar3;
    uVar10 = *(ushort *)((long)piVar3 - lVar9);
    if (uVar10 < 5) {
      puVar17 = (undefined *)0x0;
      puVar22 = (undefined *)0x0;
      puVar14 = (undefined *)0x0;
    }
    else {
      uVar11 = (ulong)((ushort *)((long)piVar3 - lVar9))[2];
      if (uVar11 == 0) {
        puVar14 = (undefined *)0x0;
      }
      else {
        puVar2 = (uint *)((long)piVar3 + uVar11);
        puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar2 + (ulong)*puVar2 + 4);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = (long)*piVar3;
        uVar10 = *(ushort *)((long)piVar3 - lVar9);
      }
      lVar9 = -lVar9;
      if (uVar10 < 7) {
        puVar17 = (undefined *)0x0;
        puVar22 = (undefined *)0x0;
      }
      else {
        uVar11 = (ulong)*(ushort *)((long)piVar3 + lVar9 + 6);
        if (uVar11 == 0) {
          puVar22 = (undefined *)0x0;
        }
        else {
          puVar2 = (uint *)((long)piVar3 + uVar11);
          puVar22 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar2 + (ulong)*puVar2 + 4);
          _objc_retainAutoreleasedReturnValue();
          lVar9 = -(long)*piVar3;
          uVar10 = *(ushort *)((long)piVar3 - (long)*piVar3);
        }
        if ((uVar10 < 9) || (uVar11 = (ulong)*(ushort *)((long)piVar3 + lVar9 + 8), uVar11 == 0)) {
          puVar17 = (undefined *)0x0;
        }
        else {
          puVar2 = (uint *)((long)piVar3 + uVar11);
          puVar17 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar2 + (ulong)*puVar2 + 4);
          _objc_retainAutoreleasedReturnValue();
        }
      }
    }
    func_0x00010c0493e0(puVar21,param_2,puVar14,puVar22,puVar17);
    _objc_release(puVar17);
    _objc_release(puVar22);
    _objc_release(puVar14);
    iVar8 = *piVar1;
  }
  if ((*(ushort *)((long)piVar1 - (long)iVar8) < 0x17) ||
     (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)iVar8))[0xb], uVar11 == 0)) {
    puVar14 = (undefined *)0x0;
    goto LAB_10507aa34;
  }
  puVar2 = (uint *)((long)piVar1 + uVar11);
  uVar4 = *puVar2;
  puVar14 = PTR_PTR_1126b45f0;
  _objc_alloc();
  piVar1 = (int *)((long)puVar2 + (ulong)uVar4);
  lVar9 = (long)*piVar1;
  uVar10 = *(ushort *)((long)piVar1 - lVar9);
  if (uVar10 < 5) {
    puVar22 = (undefined *)0x0;
LAB_10507a924:
    puVar20 = (undefined *)0x0;
    puVar17 = (undefined *)0x0;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar1 - lVar9))[2];
    if (uVar11 == 0) {
      puVar22 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puVar22 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = (long)*piVar1;
      uVar10 = *(ushort *)((long)piVar1 - lVar9);
    }
    lVar9 = -lVar9;
    if (uVar10 < 7) goto LAB_10507a924;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 6);
    if (uVar11 == 0) {
      puVar17 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puVar17 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = -(long)*piVar1;
      uVar10 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if ((((uVar10 < 9) || (uVar10 < 0xb)) || (uVar10 < 0xd)) ||
       (uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 0xc), uVar11 == 0)) {
      puVar20 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  func_0x00010c0515c0();
  _objc_release(puVar20);
  _objc_release(puVar17);
  _objc_release(puVar22);
LAB_10507aa34:
  func_0x00010c032a80(puVar5,param_2,puVar16,puVar19,uVar6,puVar13,uVar7,puVar15,puVar18,uVar12,
                      puVar21,puVar14);
  _objc_release(puVar14);
  _objc_release(puVar21);
  _objc_release(puVar18);
  _objc_release(puVar15);
  _objc_release(puVar13);
  _objc_release(puVar19);
  _objc_release(puVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10507ae54; end: 10507ae67; +[SCProfileChatAttachmentDataModel objectClassFunctionPointer] */

undefined1  [16] FUN_10507ae54(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = FUN_10507ae90;
  auVar1._0_8_ = FUN_10507ae68;
  return auVar1;
}



/* Entry: 10507ae68; end: 10507ae8f;  */

int FUN_10507ae68(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 0xf289c08;
  _strcmp("expirationTimestamp",param_1);
  return -(uint)(iVar1 != 0);
}



/* Entry: 10507ae90; end: 10507af2f;  */

bool FUN_10507ae90(int param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (param_1 != 0) {
    return false;
  }
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  func_0x0001001b9e08(param_2,
                      "INSERT INTO index_profilechatattachment__datamodel_draftexpirationTimestamp (rowid, expirationTimestamp) VALUES (?1, ?2)"
                     );
  _sqlite3_bind_int64();
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar3 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)((long)piVar1 + uVar3);
  }
  _sqlite3_bind_int64(param_2,2,uVar2);
  _sqlite3_step(param_2);
  return (int)param_2 == 0x65;
}



/* Entry: 10507af30; end: 10507b123;  */

long * FUN_10507af30(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                    long param_7,long param_8,long param_9,long param_10,long param_11,long param_12
                    )

{
  long *plVar1;
  long lVar2;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_11);
  _objc_retain(param_12);
  plVar1 = (long *)0x0;
  if (param_1 != 0) {
    puStack_68 = PTR_PTR_1126e5db0;
    plVar1 = &lStack_70;
    lStack_70 = param_1;
    _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      plVar1[1] = param_2;
      _objc_retain(param_3);
      lVar2 = plVar1[3];
      plVar1[3] = param_3;
      _objc_release(lVar2);
      _objc_retain(param_4);
      lVar2 = plVar1[4];
      plVar1[4] = param_4;
      _objc_release(lVar2);
      plVar1[5] = param_5;
      _objc_retain(param_6);
      lVar2 = plVar1[6];
      plVar1[6] = param_6;
      _objc_release(lVar2);
      plVar1[7] = param_7;
      _objc_retain(param_8);
      lVar2 = plVar1[8];
      plVar1[8] = param_8;
      _objc_release(lVar2);
      _objc_retain(param_9);
      lVar2 = plVar1[9];
      plVar1[9] = param_9;
      _objc_release(lVar2);
      plVar1[10] = param_10;
      _objc_retain(param_11);
      lVar2 = plVar1[0xb];
      plVar1[0xb] = param_11;
      _objc_release(lVar2);
      _objc_retain(param_12);
      lVar2 = plVar1[0xc];
      plVar1[0xc] = param_12;
      _objc_release(lVar2);
    }
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return plVar1;
}



/* Entry: 10507b124; end: 10507b6eb;  */

void FUN_10507b124(undefined *param_1)

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
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_1;
      func_0x00010c0f0700();
      _objc_retainAutoreleasedReturnValue();
      if (puVar1 != (undefined *)0x0) {
        puVar13 = param_1;
        func_0x00010bf35ee0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar1);
        if (puVar13 != (undefined *)0x0) {
          puVar1 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar1;
          func_0x00010bf636c0();
          _objc_release(puVar1);
          func_0x0001001b9e08(puVar13,
                              "SELECT rowid, p FROM profilechatattachment__datamodel_draft WHERE ownerId=?1 AND chatAttachmentId=?2 LIMIT 1"
                             );
          if (puVar13 != (undefined *)0x0) {
            puVar1 = param_1;
            func_0x00010c0f0700(param_1);
            _objc_retainAutoreleasedReturnValue();
            _objc_retain();
            puVar2 = puVar1;
            _objc_retainAutorelease(puVar1);
            func_0x00010bdc3520();
            _sqlite3_bind_text(puVar13,1,puVar2,0xffffffff,0xffffffffffffffff);
            _objc_release(puVar1);
            _objc_release(puVar1);
            puVar1 = param_1;
            func_0x00010bf35ee0(param_1);
            _objc_retainAutoreleasedReturnValue();
            _objc_retain();
            puVar2 = puVar1;
            _objc_retainAutorelease(puVar1);
            func_0x00010bdc3520();
            _sqlite3_bind_text(puVar13,2,puVar2,0xffffffff,0xffffffffffffffff);
            _objc_release(puVar1);
            _objc_release(puVar1);
            puVar1 = puVar13;
            _sqlite3_step();
            if ((int)puVar1 == 100) {
              puVar1 = puVar13;
              _sqlite3_column_int64(puVar13,0);
              puVar2 = PTR_PTR_1126b04a8;
              func_0x00010bf877e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_opt_class(PTR_PTR_1126b45c8);
              _sqlite3_column_blob(puVar13,1);
              _sqlite3_column_bytes(puVar13,1);
              puVar3 = puVar2;
              func_0x00010c0dfea0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(param_1);
              _objc_release(puVar2);
              _sqlite3_reset(puVar13);
              if (puVar3 == (undefined *)0x0) goto LAB_10507b5c4;
              puVar13 = PTR_PTR_1126b45d0;
              _objc_alloc(PTR_PTR_1126b45d0);
              puVar2 = puVar3;
              func_0x00010c0f0700();
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar3;
              func_0x00010bf35ee0();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar3;
              func_0x00010bf9c880(puVar3);
              puVar6 = puVar3;
              func_0x00010c0cb5a0();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar3;
              func_0x00010c27dd80(puVar3);
              puVar8 = puVar3;
              func_0x00010c15df60(puVar3);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar3;
              func_0x00010bf50280();
              _objc_retainAutoreleasedReturnValue();
              puVar10 = puVar3;
              func_0x00010c0cb980();
              puVar11 = puVar3;
              func_0x00010c244280();
              _objc_retainAutoreleasedReturnValue();
              puVar12 = puVar3;
              func_0x00010bfed8e0();
              _objc_retainAutoreleasedReturnValue();
              FUN_10507af30(puVar13,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7,puVar8,puVar9,puVar10,
                            puVar11,puVar12);
              goto LAB_10507b2c4;
            }
          }
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar13 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126b45c8);
      puVar3 = puVar13;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar13);
      if (puVar3 != (undefined *)0x0) {
        puVar13 = PTR_PTR_1126b45d0;
        _objc_alloc(PTR_PTR_1126b45d0);
        puVar2 = puVar3;
        func_0x00010c0f0700();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf35ee0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010bf9c880(puVar3);
        puVar6 = puVar3;
        func_0x00010c0cb5a0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c27dd80(puVar3);
        puVar8 = puVar3;
        func_0x00010c15df60(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar3;
        func_0x00010bf50280();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar3;
        func_0x00010c0cb980();
        puVar11 = puVar3;
        func_0x00010c244280();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar3;
        func_0x00010bfed8e0();
        _objc_retainAutoreleasedReturnValue();
        FUN_10507af30(puVar13,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7,puVar8,puVar9,puVar10,
                      puVar11,puVar12);
LAB_10507b2c4:
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar6);
        _objc_release(puVar4);
        _objc_release(puVar2);
        param_1 = puVar3;
        goto LAB_10507b5cc;
      }
LAB_10507b5c4:
      param_1 = (undefined *)0x0;
    }
  }
  puVar13 = (undefined *)0x0;
LAB_10507b5cc:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 10507b6ec; end: 10507b75f;  */

void FUN_10507b6ec(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_10507b124();
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



/* Entry: 10507b760; end: 10507bbc7;  */

void FUN_10507b760(undefined *param_1,undefined1 *param_2)

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
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b45d0;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_10507b124();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar12 = PTR_PTR_1126b45d0;
    _objc_retain(param_1);
    _objc_opt_self(puVar12);
    puVar12 = PTR_PTR_1126b45d0;
    if (param_1 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar12 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_1;
      func_0x00010c0f0700();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010bf35ee0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      func_0x00010bf9c880(param_1);
      puVar5 = param_1;
      func_0x00010c0cb5a0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_1;
      func_0x00010c27dd80(param_1);
      puVar7 = param_1;
      func_0x00010c15df60();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_1;
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = param_1;
      func_0x00010c0cb980();
      puVar10 = param_1;
      func_0x00010c244280();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = param_1;
      func_0x00010bfed8e0();
      _objc_retainAutoreleasedReturnValue();
      FUN_10507af30(puVar12,0xffffffffffffffff,puVar2,puVar3,puVar4,puVar5,puVar6,puVar7,puVar8,
                    puVar9,puVar10,puVar11);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar12 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    puVar12 = param_1;
    func_0x00010c0f0700(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar12);
    puVar12 = param_1;
    func_0x00010bf35ee0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar12);
    puVar12 = param_1;
    func_0x00010bf9c880();
    *(undefined **)(puVar1 + 0x28) = puVar12;
    puVar12 = param_1;
    func_0x00010c0cb5a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar12);
    puVar12 = param_1;
    func_0x00010c27dd80();
    *(undefined **)(puVar1 + 0x38) = puVar12;
    puVar12 = param_1;
    func_0x00010c15df60(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar12);
    puVar12 = param_1;
    func_0x00010bf50280(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar12);
    puVar12 = param_1;
    func_0x00010c0cb980();
    *(undefined **)(puVar1 + 0x50) = puVar12;
    puVar12 = param_1;
    func_0x00010c244280(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar12);
    puVar12 = param_1;
    func_0x00010bfed8e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar12);
    _objc_retain(puVar1);
    puVar12 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10507bbc8; end: 10507bc47;  */

void FUN_10507bbc8(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b45c8;
    _objc_alloc(PTR_PTR_1126b45c8);
    func_0x00010c032a80();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10507bc48; end: 10507bcb3; -[SCProfileChatAttachmentDataModelChangeRequest .cxx_destruct] */

void FUN_10507bc48(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10507bcb4; end: 10507bcbf; -[SCProfileChatAttachmentDataModelChangeRequest table] */

char * FUN_10507bcb4(void)

{
  return "profilechatattachment__datamodel_draft";
}



/* Entry: 10507bcc0; end: 10507bd73; -[SCProfileChatAttachmentDataModelChangeRequest createTableWithSQLite:] */

void FUN_10507bcc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dd8e10f,0xc1,&uStack_28,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_28);
    _sqlite3_finalize(uStack_28);
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dd8e1d0,0x94,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    _sqlite3_prepare_v2(param_3,&UNK_10dd8e264,0xc1,&uStack_38,0);
    if ((int)param_3 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  return;
}



/* Entry: 10507bd74; end: 10507c363; -[SCProfileChatAttachmentDataModelChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_10507bd74(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar6 = param_1;
  if (iVar3 == 1) {
    FUN_10507bbc8(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    FUN_10507c364(param_4,puVar6);
    func_0x0001001ce6fc(param_4,lVar7,0,0);
    puVar13 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar13;
    puVar11 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar11;
    func_0x00010bf636c0();
    FUN_10507cae4();
    _objc_release(puVar11);
    lVar7 = param_3;
    func_0x0001001b9e08(param_3,
                        "INSERT INTO profilechatattachment__datamodel_draft (p, ownerId, chatAttachmentId) VALUES (?1, ?2, ?3)"
                       );
    if (lVar7 == 0) goto LAB_10507c2c0;
    _sqlite3_bind_blob(lVar7,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar13 + (ulong)uVar4);
    puVar13 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
    _sqlite3_bind_text(lVar7,2,puVar2 + 1,*puVar2,0);
    puVar13 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
    _sqlite3_bind_text(lVar7,3,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar7 != 0x65) goto LAB_10507c2c0;
    uVar12 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    if (((ulong)puVar8 & 1) != 0) {
      func_0x0001001b9e08(param_3,
                          "INSERT INTO index_profilechatattachment__datamodel_draftexpirationTimestamp (rowid, expirationTimestamp) VALUES (?1, ?2)"
                         );
      _sqlite3_bind_int64();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
         (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar10 == 0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)((long)piVar1 + uVar10);
      }
      _sqlite3_bind_int64(param_3,2,uVar9);
      _sqlite3_step();
      if ((int)param_3 != 0x65) goto LAB_10507c2c0;
    }
    *(undefined8 *)(param_1 + 8) = uVar12;
    func_0x00010c1eeb60(puVar6);
    puVar11 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b45c8);
    func_0x00010c21c9a0(puVar11);
LAB_10507c298:
    _objc_release(puVar11);
    _objc_retain(puVar6);
    puVar11 = puVar6;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        lVar7 = param_3;
        func_0x0001001b9e08(param_3,
                            "DELETE FROM profilechatattachment__datamodel_draft WHERE rowid=?1");
        if (lVar7 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)lVar7 == 0x65) {
            func_0x0001001b9e08(param_3,
                                "DELETE FROM index_profilechatattachment__datamodel_draftexpirationTimestamp WHERE rowid=?1"
                               );
            if (param_3 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)param_3 != 0x65) goto LAB_10507bea0;
            }
            puVar6 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126b45c8);
            func_0x00010c21c9a0(puVar6);
            _objc_release(puVar11);
            _objc_release(puVar6);
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10507c2cc;
          }
        }
      }
LAB_10507bea0:
      puVar11 = (undefined *)0x0;
      goto LAB_10507c2cc;
    }
    FUN_10507bbc8();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    FUN_10507c364(param_4,puVar6);
    func_0x0001001ce6fc(param_4,lVar7,0,0);
    puVar13 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar13;
    uVar12 = *(undefined8 *)(param_1 + 8);
    _objc_retain(puVar6);
    lVar7 = param_3;
    func_0x0001001b9e08(param_3,
                        "UPDATE profilechatattachment__datamodel_draft SET p=?1, ownerId=?3, chatAttachmentId=?4 WHERE rowid=?2 LIMIT 1"
                       );
    if (lVar7 != 0) {
      _sqlite3_bind_blob(lVar7,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(lVar7,2,uVar12);
      piVar1 = (int *)((long)puVar13 + (ulong)uVar4);
      puVar13 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
      _sqlite3_bind_text(lVar7,3,puVar2 + 1,*puVar2,0);
      puVar13 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
      _sqlite3_bind_text(lVar7,4,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)lVar7 == 0x65) {
        puVar11 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126b45c8);
        puVar8 = puVar11;
        func_0x00010c0dfea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        puVar11 = puVar8;
        func_0x00010bf9c880();
        puVar5 = puVar6;
        func_0x00010bf9c880();
        if (puVar11 != puVar5) {
          func_0x0001001b9e08(param_3,
                              "UPDATE index_profilechatattachment__datamodel_draftexpirationTimestamp SET expirationTimestamp=?1 WHERE rowid=?2 LIMIT 1"
                             );
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
             (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar10 == 0)) {
            uVar9 = 0;
          }
          else {
            uVar9 = *(undefined8 *)((long)piVar1 + uVar10);
          }
          _sqlite3_bind_int64(param_3,1,uVar9);
          _sqlite3_bind_int64(param_3,2,uVar12);
          _sqlite3_step();
          if ((int)param_3 != 0x65) {
            _objc_release(puVar8);
            goto LAB_10507c2b8;
          }
        }
        _objc_release(puVar8);
        _objc_release(puVar6);
        puVar11 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126b45c8);
        func_0x00010c21c9a0(puVar11);
        goto LAB_10507c298;
      }
    }
LAB_10507c2b8:
    _objc_release(puVar6);
LAB_10507c2c0:
    puVar11 = (undefined *)0x0;
  }
  _objc_release(puVar6);
LAB_10507c2cc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10507c364; end: 10507c9b3;  */

ulong FUN_10507c364(ulong param_1,ulong param_2)

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
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == 0) {
    uStack_68 = 0;
  }
  else {
    uVar17 = param_2;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar5 = uVar17;
    func_0x00010c244480();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
    FUN_10507c9b4(param_1,uVar5);
    uVar7 = uVar17;
    func_0x00010c244740(uVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    FUN_10507c9b4(param_1,uVar7);
    uVar9 = uVar17;
    func_0x00010c2443e0(uVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_1;
    FUN_10507c9b4(param_1,uVar9);
    *(undefined1 *)(param_1 + 0x46) = 1;
    iVar1 = *(int *)(param_1 + 0x20);
    iVar2 = *(int *)(param_1 + 0x30);
    iVar3 = *(int *)(param_1 + 0x28);
    func_0x0001001ce2e4(param_1,8,uVar10 & 0xffffffff);
    func_0x0001001ce2e4(param_1,6,uVar8 & 0xffffffff);
    func_0x0001001ce2e4(param_1,4,uVar6 & 0xffffffff);
    uStack_68 = param_1;
    func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar17);
    _objc_release(uVar17);
    uStack_68 = uStack_68 & 0xffffffff;
  }
  _objc_release(uVar4);
  uVar4 = param_2;
  func_0x00010bfed8e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == 0) {
    uVar17 = 0;
  }
  else {
    uVar5 = param_2;
    func_0x00010bfed8e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar6 = uVar5;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = param_1;
    FUN_10507c9b4(param_1,uVar6);
    uVar7 = uVar5;
    func_0x00010c120360();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    FUN_10507c9b4(param_1,uVar7);
    uVar9 = uVar5;
    func_0x00010c1203a0(uVar5);
    uVar10 = uVar5;
    func_0x00010c120380(uVar5);
    uVar11 = uVar5;
    func_0x00010c28f340(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_1;
    FUN_10507c9b4(param_1,uVar11);
    *(undefined1 *)(param_1 + 0x46) = 1;
    iVar1 = *(int *)(param_1 + 0x20);
    iVar2 = *(int *)(param_1 + 0x30);
    iVar3 = *(int *)(param_1 + 0x28);
    func_0x0001001ce2e4(param_1,0xc,uVar12 & 0xffffffff);
    func_0x000100c3b024(param_1,10,uVar10,0);
    func_0x000100c3b024(param_1,8,uVar9,0);
    func_0x0001001ce2e4(param_1,6,uVar8 & 0xffffffff);
    func_0x0001001ce2e4(param_1,4,uVar17 & 0xffffffff);
    uVar17 = param_1;
    func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
    _objc_release(uVar11);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar5);
    uVar17 = uVar17 & 0xffffffff;
  }
  _objc_release(uVar4);
  uVar4 = param_2;
  func_0x00010c0f0700();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_10507c9b4(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010bf35ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_10507c9b4(param_1,uVar6);
  uVar8 = param_2;
  func_0x00010bf9c880(param_2);
  uVar9 = param_2;
  func_0x00010c0cb5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  FUN_10507c9b4(param_1,uVar9);
  uVar11 = param_2;
  func_0x00010c27dd80(param_2);
  uVar12 = param_2;
  func_0x00010c15df60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_1;
  FUN_10507c9b4(param_1,uVar12);
  uVar14 = param_2;
  func_0x00010bf50280(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_1;
  FUN_10507c9b4(param_1,uVar14);
  uVar16 = param_2;
  func_0x00010c0cb980(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce170(param_1,0x12,uVar16,0);
  func_0x0001001ce1c8(param_1,0xc,uVar11 & 0xffffffff,0);
  func_0x0001001ce170(param_1,8,uVar8,0);
  if (uVar17 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,0x16,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uVar17) + 4,0);
  }
  if (uStack_68 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,0x14,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uStack_68) + 4,0);
  }
  func_0x0001001ce2e4(param_1,0x10,uVar15 & 0xffffffff);
  func_0x0001001ce2e4(param_1,0xe,uVar13 & 0xffffffff);
  func_0x0001001ce2e4(param_1,10,uVar10 & 0xffffffff);
  func_0x0001001ce2e4(param_1,6,uVar7 & 0xffffffff);
  func_0x0001001ce2e4(param_1,4,uVar5 & 0xffffffff);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar14);
  _objc_release(uVar12);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10507c9b4; end: 10507cae3;  */

undefined8 FUN_10507c9b4(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_10507ca94;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_10507ca94;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_10507ca54;
    param_1 = 0;
  }
  else {
LAB_10507ca54:
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
LAB_10507ca94:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10507cae4; end: 10507cd6f;  */

bool FUN_10507cae4(long param_1,undefined8 ****param_2,undefined8 ***param_3)

{
  int iVar1;
  undefined8 **ppuVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 ****ppppuVar6;
  undefined8 ***pppuVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 ****ppppuVar10;
  undefined8 ***pppuStack_78;
  undefined8 ***pppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined1 uStack_49;
  undefined8 ***pppuStack_48;
  
  if (param_1 == 0) {
    return false;
  }
  pppuStack_70 = (undefined8 ****)0x0;
  uStack_68 = 0;
  uStack_60 = 0;
  pppuStack_48 = &pppuStack_78;
  lVar4 = param_1 + 0x60;
  pppuStack_78 = param_2;
  ppuStack_58 = param_3;
  func_0x0001000e9dd8(lVar4,&pppuStack_78,&UNK_10dd5b8f9,&pppuStack_48,&uStack_49);
  lVar5 = lVar4 + 0x18;
  func_0x00010055a52c(lVar5,&ppuStack_58);
  if (lVar5 == 0) {
    func_0x000100042ef0(&pppuStack_70,"SELECT MAX(rowid) FROM ");
    ppppuVar10 = param_2;
    _strlen(param_2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&pppuStack_70,param_2,ppppuVar10);
    iVar1 = (int)uStack_68;
    ppppuVar10 = (undefined8 ****)pppuStack_70;
    if (-1 < uStack_60._7_1_) {
      iVar1 = (int)uStack_60._7_1_;
      ppppuVar10 = &pppuStack_70;
    }
    _sqlite3_prepare_v2(*(undefined8 *)(param_1 + 0x58),ppppuVar10,iVar1,&pppuStack_48,0);
    ppppuVar10 = (undefined8 ****)pppuStack_48;
    _sqlite3_step();
    if ((int)ppppuVar10 == 100) {
      ppppuVar10 = (undefined8 ****)pppuStack_48;
      _sqlite3_column_int64(pppuStack_48,0);
    }
    else {
      ppppuVar10 = (undefined8 ****)0x0;
    }
    _sqlite3_finalize(pppuStack_48);
    if ((long)uStack_60 < 0) {
      *(undefined1 *)pppuStack_70 = 0;
      uStack_68 = 0;
    }
    else {
      pppuStack_70 = (undefined8 ***)((ulong)pppuStack_70 & 0xffffffffffffff00);
      uStack_60 = uStack_60 & 0xffffffffffffff;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&pppuStack_70,"SELECT MAX(rowid) FROM index_",0x1d);
    ppppuVar6 = param_2;
    _strlen(param_2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&pppuStack_70,param_2,ppppuVar6);
    ppuVar2 = ppuStack_58;
    pppuVar7 = (undefined8 ***)ppuStack_58;
    _strlen(ppuStack_58);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&pppuStack_70,ppuVar2,pppuVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x58);
    iVar1 = (int)uStack_68;
    ppppuVar6 = (undefined8 ****)pppuStack_70;
    if (-1 < uStack_60._7_1_) {
      iVar1 = (int)uStack_60._7_1_;
      ppppuVar6 = &pppuStack_70;
    }
    _sqlite3_prepare_v2(uVar8,ppppuVar6,iVar1,&pppuStack_78,0);
    if ((int)uVar8 == 0) {
      if ((undefined8 ****)pppuStack_78 != (undefined8 ****)0x0) {
        ppppuVar6 = (undefined8 ****)pppuStack_78;
        _sqlite3_step();
        if ((int)ppppuVar6 == 100) {
          ppppuVar6 = (undefined8 ****)pppuStack_78;
          _sqlite3_column_int64(pppuStack_78,0);
          bVar3 = ppppuVar6 == ppppuVar10;
        }
        else {
          bVar3 = ppppuVar10 == (undefined8 ****)0x0;
        }
        _sqlite3_finalize(pppuStack_78);
        pppuStack_48 = &ppuStack_58;
        lVar4 = lVar4 + 0x18;
        FUN_10507ce00(lVar4,&ppuStack_58,&UNK_10dd5b8f9,&pppuStack_48,&uStack_49);
        uVar9 = 1;
        if (bVar3 != false) {
          uVar9 = 2;
        }
        *(undefined4 *)(lVar4 + 0x18) = uVar9;
        goto LAB_10507cd1c;
      }
    }
    else {
      pppuStack_78 = (undefined8 ****)0x0;
    }
    pppuStack_48 = &ppuStack_58;
    lVar4 = lVar4 + 0x18;
    FUN_10507ce00(lVar4,&ppuStack_58,&UNK_10dd5b8f9,&pppuStack_48,&uStack_49);
    bVar3 = false;
    *(undefined4 *)(lVar4 + 0x18) = 0;
  }
  else {
    bVar3 = *(int *)(lVar5 + 0x18) == 2;
  }
LAB_10507cd1c:
  if ((long)uStack_60 < 0) {
    __ZdlPv(pppuStack_70);
  }
  return bVar3;
}



/* Entry: 10507cd70; end: 10507cdff;  */

void FUN_10507cd70(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010507cdb8(lVar1 + 0x18);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10507ce00; end: 10507d03f;  */

undefined1  [16] FUN_10507ce00(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong unaff_x24;
  undefined1 auVar12 [16];
  
  uVar3 = *param_2;
  uVar7 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
  uVar7 = (uVar3 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  uVar11 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar5 = uVar7 - 1;
    if ((uVar7 & uVar5) == 0) {
      unaff_x24 = uVar11 & uVar5;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar7 <= uVar11) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar11 / uVar7;
        }
        unaff_x24 = uVar11 - uVar9 * uVar7;
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (plVar10 = (long *)*puVar8; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        uVar9 = plVar10[1];
        if (uVar9 == uVar11) {
          if (plVar10[2] == uVar3) {
            uVar2 = 0;
            goto LAB_10507d00c;
          }
        }
        else {
          if ((uVar7 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (uVar7 <= uVar9) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar9 / uVar7;
            }
            uVar9 = uVar9 - uVar1 * uVar7;
          }
          if (uVar9 != unaff_x24) break;
        }
      }
    }
  }
  plVar10 = (long *)0x20;
  __Znwm();
  *plVar10 = 0;
  plVar10[1] = uVar11;
  plVar10[2] = *(long *)*param_4;
  *(undefined4 *)(plVar10 + 3) = 0;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar7) {
      uVar3 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar3 = uVar3 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar7) {
      uVar3 = uVar7;
    }
    FUN_10507d040(param_1,uVar3);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & uVar11;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar7 <= uVar11) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar11 / uVar7;
        }
        unaff_x24 = uVar11 - uVar3 * uVar7;
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + unaff_x24 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *plVar10 = *plVar6;
    *plVar6 = (long)plVar10;
    *(long **)(lVar4 + unaff_x24 * 8) = plVar6;
    if (*plVar10 != 0) {
      uVar3 = *(ulong *)(*plVar10 + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar3 = uVar3 & uVar7 - 1;
      }
      else if (uVar7 <= uVar3) {
        uVar11 = 0;
        if (uVar7 != 0) {
          uVar11 = uVar3 / uVar7;
        }
        uVar3 = uVar3 - uVar11 * uVar7;
      }
      *(long **)(lVar4 + uVar3 * 8) = plVar10;
    }
  }
  else {
    *plVar10 = *plVar6;
    *plVar6 = (long)plVar10;
  }
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_10507d00c:
  auVar12._8_8_ = uVar2;
  auVar12._0_8_ = plVar10;
  return auVar12;
}



/* Entry: 10507d040; end: 10507d243;  */

undefined ** FUN_10507d040(undefined **param_1,undefined **param_2)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  long *plVar6;
  undefined **ppuVar7;
  long *plVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  
  ppuVar4 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (undefined **)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    ppuVar4 = param_2;
  }
  ppuVar11 = (undefined **)param_1[1];
  if (ppuVar11 < param_2) {
LAB_10507d088:
    if (param_2 == (undefined **)0x0) {
      ppuVar4 = (undefined **)*param_1;
      *param_1 = (undefined *)0x0;
      if (ppuVar4 != (undefined **)0x0) {
        __ZdlPv();
      }
      param_1[1] = (undefined *)0x0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        func_0x000104bd35f4();
        if ((bRam0000000113817e18 & 1) == 0) {
          iVar2 = 0x13817e18;
          ___cxa_guard_acquire();
          if (iVar2 != 0) {
            ___cxa_atexit(0x105004938,&PTR_PTR_1130c1fb0,0x100000000);
            ___cxa_guard_release(0x113817e18);
          }
        }
        return &PTR_PTR_1130c1fb0;
      }
      ppuVar11 = (undefined **)((long)param_2 << 3);
      __Znwm();
      puVar3 = *param_1;
      *param_1 = (undefined *)ppuVar11;
      if (puVar3 != (undefined *)0x0) {
        __ZdlPv();
        ppuVar11 = (undefined **)*param_1;
      }
      param_1[1] = (undefined *)param_2;
      ppuVar4 = ppuVar11;
      _bzero(ppuVar11,(undefined **)((long)param_2 << 3));
      plVar6 = (long *)param_1[2];
      if (plVar6 != (long *)0x0) {
        ppuVar7 = (undefined **)plVar6[1];
        uVar5 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar5) == 0) {
          ppuVar7 = (undefined **)((ulong)ppuVar7 & uVar5);
        }
        else if (param_2 <= ppuVar7) {
          uVar1 = 0;
          if (param_2 != (undefined **)0x0) {
            uVar1 = (ulong)ppuVar7 / (ulong)param_2;
          }
          ppuVar7 = (undefined **)((long)ppuVar7 - uVar1 * (long)param_2);
        }
        ppuVar11[(long)ppuVar7] = (undefined *)(param_1 + 2);
        plVar8 = (long *)*plVar6;
        while (plVar8 != (long *)0x0) {
          ppuVar10 = (undefined **)plVar8[1];
          if (((ulong)param_2 & uVar5) == 0) {
            ppuVar10 = (undefined **)((ulong)ppuVar10 & uVar5);
          }
          else if (param_2 <= ppuVar10) {
            uVar1 = 0;
            if (param_2 != (undefined **)0x0) {
              uVar1 = (ulong)ppuVar10 / (ulong)param_2;
            }
            ppuVar10 = (undefined **)((long)ppuVar10 - uVar1 * (long)param_2);
          }
          plVar9 = plVar8;
          if (ppuVar10 != ppuVar7) {
            if (ppuVar11[(long)ppuVar10] == (undefined *)0x0) {
              ppuVar11[(long)ppuVar10] = (undefined *)plVar6;
              ppuVar7 = ppuVar10;
            }
            else {
              *plVar6 = *plVar8;
              *plVar8 = *(undefined8 *)ppuVar11[(long)ppuVar10];
              *(long **)ppuVar11[(long)ppuVar10] = plVar8;
              plVar9 = plVar6;
            }
          }
          plVar6 = plVar9;
          plVar8 = (long *)*plVar9;
        }
      }
    }
    return ppuVar4;
  }
  if (param_2 < ppuVar11) {
    ppuVar4 = (undefined **)(long)((float)param_1[3] / *(float *)(param_1 + 4));
    if ((ppuVar11 < (undefined **)0x3) || (((ulong)ppuVar11 & (long)ppuVar11 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((undefined **)0x1 < ppuVar4) {
      ppuVar4 = (undefined **)(1L << (-LZCOUNT((long)ppuVar4 + -1) & 0x3fU));
    }
    if (param_2 <= ppuVar4) {
      param_2 = ppuVar4;
    }
    if (param_2 < ppuVar11) goto LAB_10507d088;
  }
  return ppuVar4;
}



/* Entry: 10507d244; end: 10507d2a7;  */

undefined ** FUN_10507d244(void)

{
  int iVar1;
  
  if ((bRam0000000113817e18 & 1) == 0) {
    iVar1 = 0x13817e18;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_1130c1fb0,0x100000000);
      ___cxa_guard_release(0x113817e18);
    }
  }
  return &PTR_PTR_1130c1fb0;
}



/* Entry: 10507d2a8; end: 10507d32f;  */

void FUN_10507d2a8(uint *param_1,undefined1 *param_2)

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



/* Entry: 10507d330; end: 10507d3bb;  */

void FUN_10507d330(long param_1,undefined1 *param_2)

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



/* Entry: 10507d3bc; end: 10507d473;  */

undefined8 FUN_10507d3bc(void)

{
  int iVar1;
  
  if ((bRam0000000113817e90 & 1) == 0) {
    iVar1 = 0x13817e90;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113817e28 = 0xe;
      pcRam0000000113817e30 = "expirationTimestamp";
      uRam0000000113817e38 = 0x100;
      pcRam0000000113817e40 = FUN_10507d474;
      pcRam0000000113817e48 = FUN_10507d4ac;
      ppuRam0000000113817e20 = &PTR_DAT_110864b98;
      uRam0000000113817e60 = 0;
      uRam0000000113817e58 = 0;
      uRam0000000113817e70 = 0;
      uRam0000000113817e68 = 0;
      uRam0000000113817e80 = 0;
      uRam0000000113817e78 = 0;
      uRam0000000113817e88 = 0;
      ___cxa_atexit(0x105077cd4,0x113817e20,0x100000000);
      ___cxa_guard_release(0x113817e90);
    }
  }
  return 0x113817e20;
}



/* Entry: 10507d474; end: 10507d4ab;  */

undefined8 FUN_10507d474(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((10 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar2 != 0)) {
    return *(undefined8 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 10507d4ac; end: 10507d4ff;  */

undefined8 FUN_10507d4ac(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010bf9c880(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10507d500; end: 10507d50b; +[SCProfileChatAttachmentFetchMetadata table] */

char * FUN_10507d500(void)

{
  return "profilechatattachment__fetchmetadata_draft";
}



/* Entry: 10507d50c; end: 10507d86b; +[SCProfileChatAttachmentFetchMetadata immutableObjectParse:bufferSize:] */

void FUN_10507d50c(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ushort uVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  
  uVar4 = *param_3;
  piVar1 = (int *)((long)param_3 + (ulong)uVar4);
  puVar5 = PTR_PTR_1126b45d8;
  _objc_alloc();
  lVar9 = (long)*piVar1;
  uVar8 = *(ushort *)((long)piVar1 - lVar9);
  if (uVar8 < 5) {
    puVar15 = (undefined *)0x0;
LAB_10507d600:
    puVar14 = (undefined *)0x0;
LAB_10507d604:
    puVar16 = (undefined *)0x0;
  }
  else {
    uVar12 = (ulong)((ushort *)((long)piVar1 - lVar9))[2];
    if (uVar12 == 0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar12);
      puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = (long)*piVar1;
      uVar8 = *(ushort *)((long)piVar1 - lVar9);
    }
    lVar9 = -lVar9;
    if (uVar8 < 7) goto LAB_10507d600;
    uVar12 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 6);
    if (uVar12 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar12);
      puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = -(long)*piVar1;
      uVar8 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar8 < 9) goto LAB_10507d604;
    uVar12 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 8);
    if (uVar12 == 0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      uVar13 = (ulong)*(uint *)((long)piVar1 + uVar12);
      puVar2 = (uint *)((long)((long)piVar1 + uVar12) + uVar13);
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar2);
      _objc_retainAutoreleasedReturnValue();
      if (*puVar2 != 0) {
        lVar9 = (long)param_3 + uVar13 + uVar12 + (ulong)uVar4 + 10;
        do {
          uVar12 = (ulong)*(uint *)(lVar9 + -6);
          puVar16 = PTR_PTR_1126b45c0;
          _objc_alloc(PTR_PTR_1126b45c0);
          lVar10 = (long)*(int *)(lVar9 + uVar12 + -6);
          lVar3 = lVar9 + (uVar12 - lVar10);
          uVar8 = *(ushort *)(lVar3 + -6);
          if (uVar8 < 5) {
            puVar17 = (undefined *)0x0;
LAB_10507d770:
            uVar7 = 0;
          }
          else {
            uVar13 = (ulong)*(ushort *)(lVar3 + -2);
            if (uVar13 == 0) {
              puVar17 = (undefined *)0x0;
            }
            else {
              lVar3 = lVar9 + uVar12 + uVar13;
              puVar17 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                  lVar3 + (ulong)*(uint *)(lVar3 + -6) + -2);
              _objc_retainAutoreleasedReturnValue();
              lVar10 = (long)*(int *)(lVar9 + uVar12 + -6);
              uVar8 = *(ushort *)(lVar9 + (uVar12 - lVar10) + -6);
            }
            if ((uVar8 < 7) || (uVar13 = (ulong)*(ushort *)(lVar9 + (uVar12 - lVar10)), uVar13 == 0)
               ) goto LAB_10507d770;
            uVar7 = *(undefined8 *)(lVar9 + uVar12 + uVar13 + -6);
          }
          func_0x00010c034240(puVar16,param_2,puVar17,uVar7);
          _objc_release(puVar17);
          func_0x00010befa120(puVar6,param_2,puVar16);
          _objc_release(puVar16);
          puVar11 = (uint *)(lVar9 + -2);
          lVar9 = lVar9 + 4;
        } while (puVar11 != puVar2 + (ulong)*puVar2 + 1);
      }
      puVar16 = puVar6;
      func_0x00010bf51e00(puVar6);
      _objc_release(puVar6);
      lVar9 = -(long)*piVar1;
      uVar8 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if ((10 < uVar8) && (uVar12 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 10), uVar12 != 0)) {
      uVar7 = *(undefined8 *)((long)piVar1 + uVar12);
      goto LAB_10507d60c;
    }
  }
  uVar7 = 0;
LAB_10507d60c:
  func_0x00010c032b20(puVar5,param_2,puVar15,puVar14,puVar16,uVar7);
  _objc_release(puVar16);
  _objc_release(puVar14);
  _objc_release(puVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10507d86c; end: 10507d87f; +[SCProfileChatAttachmentFetchMetadata objectClassFunctionPointer] */

undefined1  [16] FUN_10507d86c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = FUN_10507d8a8;
  auVar1._0_8_ = FUN_10507d880;
  return auVar1;
}



/* Entry: 10507d880; end: 10507d8a7;  */

int FUN_10507d880(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 0xf289c08;
  _strcmp("expirationTimestamp",param_1);
  return -(uint)(iVar1 != 0);
}



/* Entry: 10507d8a8; end: 10507d947;  */

bool FUN_10507d8a8(int param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (param_1 != 0) {
    return false;
  }
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  func_0x0001001b9e08(param_2,
                      "INSERT INTO index_profilechatattachment__fetchmetadata_draftexpirationTimestamp (rowid, expirationTimestamp) VALUES (?1, ?2)"
                     );
  _sqlite3_bind_int64();
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xb) ||
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar3 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)((long)piVar1 + uVar3);
  }
  _sqlite3_bind_int64(param_2,2,uVar2);
  _sqlite3_step(param_2);
  return (int)param_2 == 0x65;
}



/* Entry: 10507d948; end: 10507da53;  */

undefined1 *
FUN_10507d948(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_1126e5db8;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      _objc_release(uVar2);
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_4;
      _objc_release(uVar2);
      _objc_retain(param_5);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = param_5;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x30) = param_6;
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10507da54; end: 10507dac7;  */

void FUN_10507da54(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_10507dac8();
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



/* Entry: 10507dac8; end: 10507de83;  */

void FUN_10507dac8(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
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
                            "SELECT rowid, p FROM profilechatattachment__fetchmetadata_draft WHERE ownerIdentifier=?1 LIMIT 1"
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
          puVar1 = puVar7;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar7;
            _sqlite3_column_int64(puVar7,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126b45d8);
            _sqlite3_column_blob(puVar7,1);
            _sqlite3_column_bytes(puVar7,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar7);
            if (puVar3 == (undefined *)0x0) goto LAB_10507ddc0;
            puVar7 = PTR_PTR_1126b45e0;
            _objc_alloc(PTR_PTR_1126b45e0);
            puVar2 = puVar3;
            func_0x00010c0f0720(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010bf38a80(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010c0f2860(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar3;
            func_0x00010bf9c880(puVar3);
            FUN_10507d948(puVar7,puVar1,puVar2,puVar4,puVar5,puVar6);
            param_1 = puVar3;
            goto LAB_10507dbd4;
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
      _objc_opt_class(PTR_PTR_1126b45d8);
      puVar3 = puVar7;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar7);
      if (puVar3 != (undefined *)0x0) {
        puVar7 = PTR_PTR_1126b45e0;
        _objc_alloc(PTR_PTR_1126b45e0);
        puVar2 = puVar3;
        func_0x00010c0f0720(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf38a80(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c0f2860(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010bf9c880(puVar3);
        FUN_10507d948(puVar7,puVar1,puVar2,puVar4,puVar5,puVar6);
        param_1 = puVar3;
LAB_10507dbd4:
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_10507ddc8;
      }
LAB_10507ddc0:
      param_1 = (undefined *)0x0;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_10507ddc8:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10507de84; end: 10507def7;  */

void FUN_10507de84(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_10507dac8();
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



/* Entry: 10507def8; end: 10507e153;  */

void FUN_10507def8(long param_1,undefined1 *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b45e0;
  FUN_10507da54(PTR_PTR_1126b45e0,param_1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar6 = PTR_PTR_1126b45e0;
    _objc_retain(param_1);
    _objc_opt_self(puVar6);
    puVar6 = PTR_PTR_1126b45e0;
    if (param_1 == 0) {
      _objc_opt_new();
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      lVar2 = param_1;
      func_0x00010c0f0720(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bf38a80(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010c0f2860(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010bf9c880(param_1);
      FUN_10507d948(puVar6,0xffffffffffffffff,lVar2,lVar3,lVar4,lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    *(undefined4 *)(puVar6 + 0x10) = 1;
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
    func_0x00010bf38a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c0f2860(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bf9c880();
    *(long *)(puVar1 + 0x30) = lVar2;
    _objc_retain(puVar1);
    puVar6 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10507e154; end: 10507e1b7;  */

void FUN_10507e154(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b45d8;
    _objc_alloc(PTR_PTR_1126b45d8);
    func_0x00010c032b20();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10507e1b8; end: 10507e1f3; -[SCProfileChatAttachmentFetchMetadataChangeRequest .cxx_destruct] */

void FUN_10507e1b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10507e1f4; end: 10507e1ff; -[SCProfileChatAttachmentFetchMetadataChangeRequest table] */

char * FUN_10507e1f4(void)

{
  return "profilechatattachment__fetchmetadata_draft";
}



/* Entry: 10507e200; end: 10507e2b3; -[SCProfileChatAttachmentFetchMetadataChangeRequest createTableWithSQLite:] */

void FUN_10507e200(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dd8e325,0xaa,&uStack_28,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_28);
    _sqlite3_finalize(uStack_28);
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dd8e3cf,0x98,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    _sqlite3_prepare_v2(param_3,&UNK_10dd8e467,0xc9,&uStack_38,0);
    if ((int)param_3 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  return;
}



/* Entry: 10507e2b4; end: 10507e84b; -[SCProfileChatAttachmentFetchMetadataChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_10507e2b4(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar6 = param_1;
  if (iVar3 == 1) {
    FUN_10507e154(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    FUN_10507e84c(param_4,puVar6);
    func_0x0001001ce6fc(param_4,lVar7,0,0);
    puVar13 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar13;
    puVar11 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar11;
    func_0x00010bf636c0();
    FUN_10507cae4();
    _objc_release(puVar11);
    lVar7 = param_3;
    func_0x0001001b9e08(param_3,
                        "INSERT INTO profilechatattachment__fetchmetadata_draft (p, ownerIdentifier) VALUES (?1, ?2)"
                       );
    if (lVar7 == 0) goto LAB_10507e7a8;
    _sqlite3_bind_blob(lVar7,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar13 + (ulong)uVar4);
    puVar13 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
    _sqlite3_bind_text(lVar7,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar7 != 0x65) goto LAB_10507e7a8;
    uVar12 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    if (((ulong)puVar8 & 1) != 0) {
      func_0x0001001b9e08(param_3,
                          "INSERT INTO index_profilechatattachment__fetchmetadata_draftexpirationTimestamp (rowid, expirationTimestamp) VALUES (?1, ?2)"
                         );
      _sqlite3_bind_int64();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xb) ||
         (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar10 == 0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)((long)piVar1 + uVar10);
      }
      _sqlite3_bind_int64(param_3,2,uVar9);
      _sqlite3_step();
      if ((int)param_3 != 0x65) goto LAB_10507e7a8;
    }
    *(undefined8 *)(param_1 + 8) = uVar12;
    func_0x00010c1eeb60(puVar6);
    puVar11 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b45d8);
    func_0x00010c21c9a0(puVar11);
LAB_10507e780:
    _objc_release(puVar11);
    _objc_retain(puVar6);
    puVar11 = puVar6;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        lVar7 = param_3;
        func_0x0001001b9e08(param_3,
                            "DELETE FROM profilechatattachment__fetchmetadata_draft WHERE rowid=?1")
        ;
        if (lVar7 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)lVar7 == 0x65) {
            func_0x0001001b9e08(param_3,
                                "DELETE FROM index_profilechatattachment__fetchmetadata_draftexpirationTimestamp WHERE rowid=?1"
                               );
            if (param_3 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)param_3 != 0x65) goto LAB_10507e3e0;
            }
            puVar6 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126b45d8);
            func_0x00010c21c9a0(puVar6);
            _objc_release(puVar11);
            _objc_release(puVar6);
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10507e7b4;
          }
        }
      }
LAB_10507e3e0:
      puVar11 = (undefined *)0x0;
      goto LAB_10507e7b4;
    }
    FUN_10507e154();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    FUN_10507e84c(param_4,puVar6);
    func_0x0001001ce6fc(param_4,lVar7,0,0);
    puVar13 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar13;
    uVar12 = *(undefined8 *)(param_1 + 8);
    _objc_retain(puVar6);
    lVar7 = param_3;
    func_0x0001001b9e08(param_3,
                        "UPDATE profilechatattachment__fetchmetadata_draft SET p=?1, ownerIdentifier=?3 WHERE rowid=?2 LIMIT 1"
                       );
    if (lVar7 != 0) {
      _sqlite3_bind_blob(lVar7,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(lVar7,2,uVar12);
      piVar1 = (int *)((long)puVar13 + (ulong)uVar4);
      puVar13 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
      _sqlite3_bind_text(lVar7,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)lVar7 == 0x65) {
        puVar11 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126b45d8);
        puVar8 = puVar11;
        func_0x00010c0dfea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        puVar11 = puVar8;
        func_0x00010bf9c880();
        puVar5 = puVar6;
        func_0x00010bf9c880();
        if (puVar11 != puVar5) {
          func_0x0001001b9e08(param_3,
                              "UPDATE index_profilechatattachment__fetchmetadata_draftexpirationTimestamp SET expirationTimestamp=?1 WHERE rowid=?2 LIMIT 1"
                             );
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xb) ||
             (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar10 == 0)) {
            uVar9 = 0;
          }
          else {
            uVar9 = *(undefined8 *)((long)piVar1 + uVar10);
          }
          _sqlite3_bind_int64(param_3,1,uVar9);
          _sqlite3_bind_int64(param_3,2,uVar12);
          _sqlite3_step();
          if ((int)param_3 != 0x65) {
            _objc_release(puVar8);
            goto LAB_10507e7a0;
          }
        }
        _objc_release(puVar8);
        _objc_release(puVar6);
        puVar11 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126b45d8);
        func_0x00010c21c9a0(puVar11);
        goto LAB_10507e780;
      }
    }
LAB_10507e7a0:
    _objc_release(puVar6);
LAB_10507e7a8:
    puVar11 = (undefined *)0x0;
  }
  _objc_release(puVar6);
LAB_10507e7b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10507e84c; end: 10507ed77;  */

ulong FUN_10507e84c(ulong param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  ulong uVar5;
  undefined ***pppuVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puStack_168;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  code *pcStack_108;
  undefined ***pppuStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  ppuStack_110 = &PTR_FUN_110864c78;
  pcStack_108 = FUN_10507ed78;
  pppuStack_f8 = &ppuStack_110;
  uVar10 = param_2;
  func_0x00010c0f2860();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(uVar10);
  uVar5 = uVar10;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  if (uVar5 == 0) {
    puStack_168 = (undefined4 *)0x0;
    puVar18 = (undefined4 *)0x0;
  }
  else {
    puStack_168 = (undefined4 *)0x0;
    puVar18 = (undefined4 *)0x0;
    puVar14 = (undefined4 *)0x0;
    do {
      uVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(uVar10);
        }
        uVar15 = *(undefined8 *)(uVar13 * 8);
        _objc_retain(uVar15);
        _objc_retain(uVar15);
        uStack_118 = uVar15;
        if (pppuStack_f8 == (undefined ***)0x0) {
          func_0x000104bfeb48();
          goto LAB_10507ec84;
        }
        pppuVar6 = pppuStack_f8;
        (*(code *)(*pppuStack_f8)[6])(pppuStack_f8,param_1,&uStack_118);
        _objc_release(uStack_118);
        if (puVar18 < puVar14) {
          *puVar18 = (int)pppuVar6;
          puVar17 = puStack_168;
        }
        else {
          lVar16 = (long)puVar18 - (long)puStack_168;
          uVar8 = (lVar16 >> 2) + 1;
          if (uVar8 >> 0x3e != 0) {
            FUN_10507ef98();
LAB_10507ec84:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10507ec88);
            (*pcVar4)();
          }
          uVar12 = (long)puVar14 - (long)puStack_168 >> 1;
          if (uVar12 <= uVar8) {
            uVar12 = uVar8;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar14 - (long)puStack_168)) {
            uVar12 = 0x3fffffffffffffff;
          }
          if (uVar12 >> 0x3e != 0) {
            func_0x000104bd35f4();
            goto LAB_10507ec84;
          }
          lVar7 = uVar12 << 2;
          __Znwm();
          puVar18 = (undefined4 *)(lVar7 + lVar16);
          puVar14 = (undefined4 *)(lVar7 + uVar12 * 4);
          puVar17 = puVar18 + -(lVar16 >> 2);
          *puVar18 = (int)pppuVar6;
          _memcpy(puVar17,puStack_168,lVar16);
          if (puStack_168 != (undefined4 *)0x0) {
            __ZdlPv(puStack_168);
          }
        }
        puStack_168 = puVar17;
        puVar18 = puVar18 + 1;
        _objc_release(uVar15);
        uVar13 = uVar13 + 1;
      } while (uVar5 != uVar13);
      uVar5 = uVar10;
      func_0x00010bf52a60();
    } while (uVar5 != 0);
  }
  _objc_release(uVar10);
  _objc_release(uVar10);
  _objc_release(uVar10);
  if (pppuStack_f8 == &ppuStack_110) {
    lVar11 = 0x20;
  }
  else {
    if (pppuStack_f8 == (undefined ***)0x0) goto LAB_10507ea7c;
    lVar11 = 0x28;
  }
  (**(code **)((long)*pppuStack_f8 + lVar11))();
LAB_10507ea7c:
  uVar5 = param_2;
  func_0x00010c0f0720();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_1;
  FUN_10507ee68(param_1,uVar5);
  uVar8 = param_2;
  func_0x00010bf38a80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  FUN_10507ee68(param_1,uVar8);
  uVar10 = (long)puVar18 - (long)puStack_168;
  puVar14 = (undefined4 *)&UNK_10dd8e7a9;
  if (uVar10 != 0) {
    puVar14 = puStack_168;
  }
  *(undefined1 *)(param_1 + 0x46) = 1;
  func_0x0001001cddd0(param_1,uVar10,4);
  func_0x0001001cddd0(param_1,uVar10,4);
  if (puStack_168 != puVar18) {
    lVar11 = (long)uVar10 >> 2;
    do {
      iVar3 = puVar14[lVar11 + -1];
      func_0x0001001ce088(param_1,4);
      func_0x0001001ce0bc(param_1,(((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                                   *(int *)(param_1 + 0x28)) - iVar3) + 4);
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  *(undefined1 *)(param_1 + 0x46) = 0;
  uVar9 = param_1;
  func_0x0001001ce0bc(param_1,uVar10 >> 2);
  uVar10 = param_2;
  func_0x00010bf9c880(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar3 = *(int *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x28);
  func_0x0001001ce170(param_1,10,uVar10,0);
  if ((int)uVar9 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,8,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uVar9) + 4,0);
  }
  func_0x0001001ce2e4(param_1,6,uVar12 & 0xffffffff);
  func_0x0001001ce2e4(param_1,4,uVar13 & 0xffffffff);
  uVar10 = (ulong)(uint)((iVar3 - iVar1) + iVar2);
  func_0x0001001ce548(param_1,uVar10);
  _objc_release(uVar8);
  _objc_release(uVar5);
  if (puStack_168 != (undefined4 *)0x0) {
    __ZdlPv();
  }
  uVar5 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (puStack_168 != (undefined4 *)0x0) {
      __ZdlPv(puStack_168);
    }
    _objc_release(param_2);
    __Unwind_Resume();
    _objc_retain(uVar10);
    uVar13 = uVar10;
    func_0x00010c0f49c0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    FUN_10507ee68(uVar5,uVar13);
    uVar12 = uVar10;
    func_0x00010c15e680(uVar10);
    *(undefined1 *)(uVar5 + 0x46) = 1;
    iVar3 = *(int *)(uVar5 + 0x20);
    iVar1 = *(int *)(uVar5 + 0x30);
    iVar2 = *(int *)(uVar5 + 0x28);
    func_0x0001001ce1c8(uVar5,6,uVar12,0);
    func_0x0001001ce2e4(uVar5,4,uVar8 & 0xffffffff);
    func_0x0001001ce548(uVar5,(iVar3 - iVar1) + iVar2);
    _objc_release(uVar13);
    _objc_release(uVar10);
    return uVar5;
  }
  return param_1;
}



/* Entry: 10507ed78; end: 10507ee67;  */

ulong FUN_10507ed78(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c0f49c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_10507ee68(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010c15e680(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce1c8(param_1,6,uVar6,0);
  func_0x0001001ce2e4(param_1,4,uVar5 & 0xffffffff);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10507ee68; end: 10507ef97;  */

undefined8 FUN_10507ee68(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_10507ef48;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_10507ef48;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_10507ef08;
    param_1 = 0;
  }
  else {
LAB_10507ef08:
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
LAB_10507ef48:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10507ef98; end: 10507efab;  */

void FUN_10507ef98(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  return;
}



/* Entry: 10507efac; end: 10507efb3;  */

void FUN_10507efac(void)

{
  return;
}



/* Entry: 10507efb4; end: 10507efe7;  */

void FUN_10507efb4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110864c78;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10507efe8; end: 10507f027;  */

void FUN_10507efe8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110864c78;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10507f028; end: 10507f063;  */

long FUN_10507f028(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110864ce8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10507f064; end: 10507f06f;  */

undefined ** FUN_10507f064(void)

{
  return &PTR_DAT_110864ce8;
}



/* Entry: 10507f070; end: 10507f13b; -[SCProfileChatMediaCardActionMenuDataProvider initWithProfileChatMediaDataSource:userSession:chatMediaDataModel:] */

undefined1 *
FUN_10507f070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e5dc0;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10507f13c; end: 10507f317; -[SCProfileChatMediaCardActionMenuDataProvider updateViewModelWithCompletionBlock:] */

void FUN_10507f13c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  _objc_opt_new(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c2923e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  FUN_10508d370(uVar4,uVar3);
  _objc_release(uVar3);
  if ((int)uVar4 != 0) {
    lVar5 = param_1;
    func_0x00010bdf9b80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(lVar5);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c2923e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  FUN_10508d21c(uVar4,uVar3);
  _objc_release(uVar3);
  lVar5 = param_1;
  if ((int)uVar4 == 0) {
    func_0x00010be99340(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bed1ea0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010befa120(puVar2);
  _objc_release(lVar5);
  lVar5 = param_1;
  func_0x00010be9a180(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2);
  _objc_release(lVar5);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  FUN_10508d570();
  if (iVar1 != 0) {
    func_0x00010bed53c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(param_1);
  }
  puVar6 = PTR_PTR_1126b1210;
  _objc_alloc(PTR_PTR_1126b1210);
  ppuVar7 = &PTR____CFConstantStringClassReference_110ebaeb8;
  func_0x000107d4bf04(&PTR____CFConstantStringClassReference_110ebaeb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019f60(puVar6);
  _objc_release(ppuVar7);
  (**(code **)(param_3 + 0x10))(param_3,puVar6);
  _objc_release(param_3);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10507f318; end: 10507f3ef; -[SCProfileChatMediaCardActionMenuDataProvider _unsaveInChat] */

void FUN_10507f318(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010c0cb2a0();
  ppuVar3 = &PTR____CFConstantStringClassReference_110dbdd38;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbdd38,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  FUN_10507f3f0(uVar4,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar3;
  if (lVar2 == 10) {
    func_0x000107d4bd58();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000107d4bc38(ppuVar3,puVar1,uVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 10507f3f0; end: 10507f753;  */

void FUN_10507f3f0(long param_1,undefined **param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined **ppuVar11;
  int iVar12;
  long lVar13;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined **ppuStack_138;
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
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar8 = param_1;
  func_0x00010c14b860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar8;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar13 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(lVar8);
        }
        iVar12 = (int)*(undefined8 *)(lStack_128 + lVar10 * 8);
        puVar3 = param_3;
        func_0x00010bf50740();
        _objc_retainAutoreleasedReturnValue();
        if (puVar3 != (undefined *)0x0) {
          ppuVar11 = param_2;
          func_0x00010c2923e0(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0720c0();
          _objc_release(ppuVar11);
          if (iVar12 == 0) {
            func_0x00010befa120(puVar1);
          }
          else {
            func_0x00010c066b00();
          }
        }
        _objc_release(puVar3);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar8;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar8);
  puVar3 = param_3;
  func_0x00010bf507c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf529e0();
  puVar5 = puVar1;
  func_0x00010bf529e0();
  _objc_release(puVar3);
  ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar4 == puVar5) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110dc4118;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4118,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = &PTR____CFConstantStringClassReference_110dc4138;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4138,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(ppuVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
  }
  else {
    puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_150 = 0xc2000000;
    pcStack_148 = FUN_10507fa5c;
    puStack_140 = &UNK_1108535c0;
    _objc_retain(param_2);
    puVar3 = puVar1;
    ppuStack_138 = param_2;
    func_0x000100504554(puVar1,&puStack_158);
    puVar4 = puVar3;
    func_0x00010bf529e0();
    ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar4 == (undefined *)0x0) {
      ppuVar11 = (undefined **)0x0;
    }
    else {
      ppuVar6 = &PTR____CFConstantStringClassReference_110dc4118;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4118,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = &PTR____CFConstantStringClassReference_110dc4178;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4178,0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf446e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(ppuVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(ppuVar7);
      _objc_release(ppuVar6);
    }
    _objc_release(puVar3);
    ppuVar6 = ppuStack_138;
  }
  _objc_release(ppuVar6);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    lVar8 = *(long *)(param_1 + 0x18);
    func_0x00010c0cb2a0();
    ppuVar6 = &PTR____CFConstantStringClassReference_110dbdd58;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbdd58,0);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    FUN_10507f3f0(uVar9,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar6;
    if (lVar8 == 10) {
      func_0x000107d4bd58();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000107d4bc38(ppuVar6,puVar1,uVar9);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar9);
    _objc_release(ppuVar6);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar11);
  return;
}



/* Entry: 10507f754; end: 10507f82b; -[SCProfileChatMediaCardActionMenuDataProvider _saveInChat] */

void FUN_10507f754(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010c0cb2a0();
  ppuVar3 = &PTR____CFConstantStringClassReference_110dbdd58;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbdd58,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  FUN_10507f3f0(uVar4,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar3;
  if (lVar2 == 10) {
    func_0x000107d4bd58();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000107d4bc38(ppuVar3,puVar1,uVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 10507f82c; end: 10507f8af; -[SCProfileChatMediaCardActionMenuDataProvider _updateChatWallpaper] */

void FUN_10507f82c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  puVar2 = puVar1;
  FUN_10509ac14();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000107d4bc38();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10507f8b0; end: 10507f963; -[SCProfileChatMediaCardActionMenuDataProvider _delete] */

void FUN_10507f8b0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010c0cb2a0();
  ppuVar3 = &PTR____CFConstantStringClassReference_110dc40d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc40d8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  if (lVar2 == 10) {
    func_0x000107d4bd58();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000107d4bde8();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 10507f964; end: 10507f9f3; -[SCProfileChatMediaCardActionMenuDataProvider _saveToCameraRoll] */

void FUN_10507f964(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  ppuVar2 = &PTR____CFConstantStringClassReference_110dc40f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc40f8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x000107d4bc38();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10507f9f4; end: 10507fa0b; -[SCProfileChatMediaCardActionMenuDataProvider delegate] */

void FUN_10507f9f4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10507fa0c; end: 10507fa17; -[SCProfileChatMediaCardActionMenuDataProvider setDelegate:] */

void FUN_10507fa0c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 10507fa18; end: 10507fa5b; -[SCProfileChatMediaCardActionMenuDataProvider .cxx_destruct] */

void FUN_10507fa18(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10507fa5c; end: 10507fb0f;  */

void FUN_10507fa5c(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_2);
  ppuVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c0720c0();
  if (((ulong)ppuVar3 & 1) == 0) {
    ppuVar3 = param_2;
    func_0x00010901d7c4(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110dc4158;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4158,0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10507fb10; end: 10507fc0f;  */

void FUN_10507fb10(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010bf38e60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf16300(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bf20c00(uVar1);
  _CGRectGetWidth();
  dVar5 = 6.0;
  if (0.0 < param_1) {
    func_0x00010bf20c00(uVar2);
    _CGRectGetWidth();
    dVar5 = param_1;
    func_0x00010bf20c00(uVar1);
    _CGRectGetWidth();
    dVar5 = (param_1 / dVar5) * 6.0;
  }
  uVar3 = uVar2;
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0bc120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10507fc10; end: 10507fc9f;  */

void FUN_10507fc10(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  _objc_retain(param_1);
  func_0x00010c0b8600(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10507fca0; end: 10507ffe3;  */

undefined1  [16] FUN_10507fca0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar17 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar17);
  FUN_10508ce40();
  lVar1 = param_4;
  FUN_10508cf44();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c0cb2a0();
  lVar3 = param_4;
  if (lVar2 == 0x24) {
    func_0x00010c0c5d60();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c15df40();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar4 = uVar17;
  func_0x00010bf50740(uVar17,lVar3,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar17);
  puVar5 = PTR_PTR_1126b45f8;
  func_0x00010bf1e720();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar4;
  func_0x00010c2923e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf1bae0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010bf1bae0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf1c0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b19f8;
  func_0x00010c1164a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar17;
  func_0x000108fec430(uVar17,uVar7,uVar9,puVar11,0,1,0,5,0,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar17);
  puVar10 = PTR_PTR_1126b4600;
  _objc_alloc(PTR_PTR_1126b4600);
  func_0x00010bff7e80();
  puVar11 = PTR_PTR_1126b4608;
  _objc_alloc(PTR_PTR_1126b4608);
  func_0x00010bff7b20();
  puVar13 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  puVar14 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  puVar15 = PTR_PTR_1126b4610;
  _objc_alloc(PTR_PTR_1126b4610);
  func_0x00010bffdbe0();
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(uVar12);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
    auVar18._8_8_ = param_2;
    auVar18._0_8_ = param_1;
    return auVar18;
  }
  ___stack_chk_fail();
  return *(undefined1 (*) [16])(param_4 + 0x10);
}



/* Entry: 10507ffe4; end: 10507ffeb; -[SCSavedInChatEntryLayout size] */

undefined1  [16] FUN_10507ffe4(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x10);
}



/* Entry: 10507ffec; end: 10507fff3; -[SCSavedInChatEntryLayout setSize:] */

void FUN_10507ffec(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x10) = param_1;
  *(undefined8 *)(param_3 + 0x18) = param_2;
  return;
}



/* Entry: 10507fff4; end: 10507fffb; -[SCSavedInChatEntryLayout corner] */

undefined8 FUN_10507fff4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10507fffc; end: 105080003; -[SCSavedInChatEntryLayout setCorner:] */

void FUN_10507fffc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 105080004; end: 10508006f; -[SCSavedInChatCollectionViewLayoutCalculator init] */

undefined1 * FUN_105080004(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e5dc8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = 0x3fe2000000000000;
    *(undefined1 *)((long)puVar1 + 0x18) = 1;
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 8) = 0x4000000000000000;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105080070; end: 10508008b; -[SCSavedInChatCollectionViewLayoutCalculator setCollectionViewWidth:] */

void FUN_105080070(double param_1,long param_2)

{
  if (*(double *)(param_2 + 0x28) != param_1) {
    *(double *)(param_2 + 0x28) = param_1;
    *(undefined1 *)(param_2 + 0x18) = 1;
  }
  return;
}



/* Entry: 10508008c; end: 1050800a7; -[SCSavedInChatCollectionViewLayoutCalculator setEntriesCount:] */

void FUN_10508008c(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 0x30) != param_3) {
    *(long *)(param_1 + 0x30) = param_3;
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return;
}



/* Entry: 1050800a8; end: 10508011b; -[SCSavedInChatCollectionViewLayoutCalculator sizeForDataModelAtIndex:] */

undefined1  [16]
FUN_1050800a8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if (*(char *)(param_3 + 0x18) == '\x01') {
    func_0x00010bdd86e0(param_3);
    *(undefined1 *)(param_3 + 0x18) = 0;
  }
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c0dfd40(uVar1,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(uVar1);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10508011c; end: 10508017f; -[SCSavedInChatCollectionViewLayoutCalculator cornerForDataModelAtIndex:] */

undefined8 FUN_10508011c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010bdd86e0(param_1);
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0dfd40(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf524c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105080180; end: 10508025f; -[SCSavedInChatCollectionViewLayoutCalculator _calculateLayout] */

void FUN_105080180(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(ulong *)(param_1 + 0x30);
  if (uVar5 != 0) {
    uVar7 = 0;
    do {
      lVar2 = param_1;
      func_0x00010be495c0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      if (uVar5 - uVar7 < 4) {
        func_0x00010c25e980(lVar2,param_2,0,uVar5 - uVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
      }
      func_0x00010befa160(puVar1,param_2,lVar3);
      lVar2 = lVar3;
      func_0x00010bf529e0();
      uVar7 = lVar2 + uVar7;
      _objc_release(lVar3);
      uVar5 = *(ulong *)(param_1 + 0x30);
    } while (uVar7 < uVar5);
  }
  puVar4 = puVar1;
  func_0x00010bf51e00();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar4;
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105080260; end: 1050803c3; -[SCSavedInChatCollectionViewLayoutCalculator _layoutRowWithFourEntries] */

double FUN_105080260(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar6 = (double)(float)(int)((*(double *)(param_1 + 0x28) + *(double *)(param_1 + 8) * -3.0) *
                              0.25);
  dVar7 = (double)(float)(int)((1.0 / *(double *)(param_1 + 0x10)) * dVar6);
  puVar1 = PTR_PTR_1126b4618;
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126b4618;
  _objc_alloc_init();
  puVar3 = PTR_PTR_1126b4618;
  _objc_alloc_init();
  puVar4 = PTR_PTR_1126b4618;
  _objc_alloc_init();
  func_0x00010c202c80(dVar6,dVar7,puVar1);
  func_0x00010c202c80(dVar6,dVar7,puVar2);
  func_0x00010c202c80(dVar6,dVar7,puVar3);
  func_0x00010c202c80(dVar6,dVar7,puVar4);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar1;
  puStack_70 = puVar2;
  puStack_68 = puVar3;
  puStack_60 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return dVar6;
  }
  ___stack_chk_fail();
  return *(double *)(puVar1 + 0x28);
}



/* Entry: 1050803c4; end: 1050803cb; -[SCSavedInChatCollectionViewLayoutCalculator collectionViewWidth] */

undefined8 FUN_1050803c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1050803cc; end: 1050803d3; -[SCSavedInChatCollectionViewLayoutCalculator entriesCount] */

undefined8 FUN_1050803cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1050803d4; end: 1050803df; -[SCSavedInChatCollectionViewLayoutCalculator .cxx_destruct] */

void FUN_1050803d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 1050803e0; end: 10508048b; -[SCSavedInChatFolderBottomLoadingViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1050803e0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e5dd0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    lVar5 = (long)_DAT_11271b298;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c24dbc0(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10508048c; end: 1050804ff; -[SCSavedInChatFolderBottomLoadingViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10508048c(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e5dd0;
  lStack_30 = param_4;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_4);
  func_0x00010c19f0e0((param_3 + -30.0) * 0.5,0x4034000000000000,0x403e000000000000,
                      0x403e000000000000,*(undefined8 *)(param_4 + _DAT_11271b298));
  return;
}



/* Entry: 105080500; end: 105080513; -[SCSavedInChatFolderBottomLoadingViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105080500(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271b298,0);
  return;
}


