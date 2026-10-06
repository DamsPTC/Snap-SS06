/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104ca5f90; end: 104ca6103;  */

void FUN_104ca5f90(long param_1,char *param_2,undefined8 param_3)

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
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110846d20,&uStack_80,param_3);
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
  pcStack_88 = FUN_104ca6104;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_110846d70,&uStack_c0,pcVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 104ca6104; end: 104ca617b;  */

void FUN_104ca6104(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110846d70,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104ca617c; end: 104ca62ef;  */

void FUN_104ca617c(long param_1,char *param_2,undefined8 param_3)

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
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110846dc0,&uStack_80,param_3);
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
  pcStack_88 = FUN_104ca62f0;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_110846e10,&uStack_c0,pcVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 104ca62f0; end: 104ca6367;  */

void FUN_104ca62f0(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110846e10,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104ca6368; end: 104ca64db;  */

void FUN_104ca6368(double param_1,long param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar3 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "\x01";
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110846e60,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    FUN_104ca6368(pcVar2,pcVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
  return;
}



/* Entry: 104ca64dc; end: 104ca6547;  */

void FUN_104ca64dc(double param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_104ca6368(param_2,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ca6548; end: 104ca66bb;  */

void FUN_104ca6548(double param_1,long param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar3 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "\x01";
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110846eb0,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    FUN_104ca6548(pcVar2,pcVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
  return;
}



/* Entry: 104ca66bc; end: 104ca6727;  */

void FUN_104ca66bc(double param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_104ca6548(param_2,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ca6728; end: 104ca689b;  */

void FUN_104ca6728(double param_1,long param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar3 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "\x01";
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110846f00,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    FUN_104ca6728(pcVar2,pcVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
  return;
}



/* Entry: 104ca689c; end: 104ca6907;  */

void FUN_104ca689c(double param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_104ca6728(param_2,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ca6908; end: 104ca6a7b;  */

void FUN_104ca6908(double param_1,long param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar3 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "\x01";
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110846f50,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    FUN_104ca6908(pcVar2,pcVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
  return;
}



/* Entry: 104ca6a7c; end: 104ca6ae7;  */

void FUN_104ca6a7c(double param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_104ca6908(param_2,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ca6ae8; end: 104ca6c5b;  */

void FUN_104ca6ae8(double param_1,long param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar3 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "\x01";
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110846fa0,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    FUN_104ca6ae8(pcVar2,pcVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
  return;
}



/* Entry: 104ca6c5c; end: 104ca6cc7;  */

void FUN_104ca6c5c(double param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_104ca6ae8(param_2,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ca6cc8; end: 104ca6e3b;  */

void FUN_104ca6cc8(double param_1,long param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar3 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "\x01";
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110846ff0,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    FUN_104ca6cc8(pcVar2,pcVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
  return;
}



/* Entry: 104ca6e3c; end: 104ca6ea7;  */

void FUN_104ca6e3c(double param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_104ca6cc8(param_2,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ca6ea8; end: 104ca6f1b; -[SCGraphenePasskeyLoginAlertMetric2 init] */

undefined1 * FUN_104ca6ea8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3998;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104ca6f1c; end: 104ca708f;  */

void FUN_104ca6f1c(undefined8 param_1,long param_2,char *param_3,undefined1 *param_4)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar7 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108470f0,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  pcVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume(pcVar1);
  _objc_retain(puVar5);
  puVar2 = PTR_PTR_1126aed08;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  *(undefined8 *)(puVar3 + 8) = 5;
  uVar4 = *(undefined8 *)(puVar3 + 0x58);
  *(undefined1 **)(puVar3 + 0x58) = puVar5;
  _objc_release(uVar4);
  *(undefined8 *)(puVar3 + 0x60) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104ca7090; end: 104ca710b; +[SCPasskeyLoginGrapheneMetric createCredentialFailureWithReason:latency:] */

void FUN_104ca7090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126aed08;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  uVar3 = *(undefined8 *)(puVar2 + 0x58);
  *(undefined8 *)(puVar2 + 0x58) = param_4;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x60) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ca710c; end: 104ca717b; +[SCPasskeyLoginGrapheneMetric createCredentialStartedWithFetchOptionsTriggered:latency:overallLatency:] */

void FUN_104ca710c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aed08;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  puVar2[0x40] = param_5;
  *(undefined8 *)(puVar2 + 0x48) = param_1;
  *(undefined8 *)(puVar2 + 0x50) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ca717c; end: 104ca71fb; +[SCPasskeyLoginGrapheneMetric fetchOptionsFailureWithReason:latency:overallLatency:] */

void FUN_104ca717c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126aed08;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x30) = param_1;
  *(undefined8 *)(puVar2 + 0x38) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ca71fc; end: 104ca7257; +[SCPasskeyLoginGrapheneMetric fetchOptionsFromServerStartedWithLatency:] */

void FUN_104ca71fc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aed08;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ca7258; end: 104ca72b7; +[SCPasskeyLoginGrapheneMetric loginSucceededWithLatency:overallLatency:] */

void FUN_104ca7258(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aed08;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xc;
  *(undefined8 *)(puVar2 + 0xd8) = param_1;
  *(undefined8 *)(puVar2 + 0xe0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ca72b8; end: 104ca7317; +[SCPasskeyLoginGrapheneMetric queryOptionsEmptyWithLatency:overallLatency:] */

void FUN_104ca72b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aed08;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ca7318; end: 104ca735f; +[SCPasskeyLoginGrapheneMetric started] */

void FUN_104ca7318(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aed08;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ca7360; end: 104ca73cf; +[SCPasskeyLoginGrapheneMetric verifyCredentialAccountLockedWithIsAppealable:latency:overallLatency:] */

void FUN_104ca7360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aed08;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 8;
  puVar2[0x88] = param_5;
  *(undefined8 *)(puVar2 + 0x90) = param_1;
  *(undefined8 *)(puVar2 + 0x98) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ca73d0; end: 104ca742f; +[SCPasskeyLoginGrapheneMetric verifyCredentialCosChallengedWithLatency:overallLatency:] */

void FUN_104ca73d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aed08;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 10;
  *(undefined8 *)(puVar2 + 0xb0) = param_1;
  *(undefined8 *)(puVar2 + 0xb8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ca7430; end: 104ca74af; +[SCPasskeyLoginGrapheneMetric verifyCredentialFailureWithReason:latency:overallLatency:] */

void FUN_104ca7430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126aed08;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xb;
  uVar3 = *(undefined8 *)(puVar2 + 0xc0);
  *(undefined8 *)(puVar2 + 0xc0) = param_5;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 200) = param_1;
  *(undefined8 *)(puVar2 + 0xd0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ca74b0; end: 104ca750f; +[SCPasskeyLoginGrapheneMetric verifyCredentialLoginOptionsExpiredWithLatency:overallLatency:] */

void FUN_104ca74b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aed08;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 9;
  *(undefined8 *)(puVar2 + 0xa0) = param_1;
  *(undefined8 *)(puVar2 + 0xa8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ca7510; end: 104ca757f; +[SCPasskeyLoginGrapheneMetric verifyCredentialReactivationNeededWithNeedsConfirmation:latency:overallLatency:] */

void FUN_104ca7510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aed08;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 7;
  puVar2[0x70] = param_5;
  *(undefined8 *)(puVar2 + 0x78) = param_1;
  *(undefined8 *)(puVar2 + 0x80) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ca7580; end: 104ca75db; +[SCPasskeyLoginGrapheneMetric verifyCredentialStartedWithLatency:] */

void FUN_104ca7580(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aed08;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
  *(undefined8 *)(puVar2 + 0x68) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ca75dc; end: 104ca75ff; -[SCPasskeyLoginGrapheneMetric copyWithZone:] */

undefined8 FUN_104ca75dc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104ca7600; end: 104ca793f; -[SCPasskeyLoginGrapheneMetric hash] */

void FUN_104ca7600(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_118 = *(undefined8 *)(param_1 + 8);
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_110 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_110 = uStack_110 ^ uStack_110 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_108 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_108 = uStack_108 ^ uStack_108 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_100 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_100 = uStack_100 ^ uStack_100 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_f0 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_f0 = uStack_f0 ^ uStack_f0 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_e8 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_e8 = uStack_e8 ^ uStack_e8 >> 0x16;
  uStack_e0 = (ulong)*(byte *)(param_1 + 0x40);
  uVar5 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_d8 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_d8 = uStack_d8 ^ uStack_d8 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_d0 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_d0 = uStack_d0 ^ uStack_d0 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uStack_f8 = uVar2;
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + 0x60) + *(ulong *)(param_1 + 0x60) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_c0 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_c0 = uStack_c0 ^ uStack_c0 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x68) + *(ulong *)(param_1 + 0x68) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_b8 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_b8 = uStack_b8 ^ uStack_b8 >> 0x16;
  uStack_b0 = (ulong)*(byte *)(param_1 + 0x70);
  uVar5 = ~*(ulong *)(param_1 + 0x78) + *(ulong *)(param_1 + 0x78) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_a8 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_a8 = uStack_a8 ^ uStack_a8 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x80) + *(ulong *)(param_1 + 0x80) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_a0 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_a0 = uStack_a0 ^ uStack_a0 >> 0x16;
  uStack_98 = (ulong)*(byte *)(param_1 + 0x88);
  uVar5 = ~*(ulong *)(param_1 + 0x90) + *(ulong *)(param_1 + 0x90) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_90 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_90 = uStack_90 ^ uStack_90 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x98) + *(ulong *)(param_1 + 0x98) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_88 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_88 = uStack_88 ^ uStack_88 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0xa0) + *(ulong *)(param_1 + 0xa0) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_80 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_80 = uStack_80 ^ uStack_80 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0xa8) + *(ulong *)(param_1 + 0xa8) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0xb0) + *(ulong *)(param_1 + 0xb0) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_78 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_70 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0xb8) + *(ulong *)(param_1 + 0xb8) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_68 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  uStack_c8 = uVar3;
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + 200) + *(ulong *)(param_1 + 200) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_58 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0xd0) + *(ulong *)(param_1 + 0xd0) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0xd8) + *(ulong *)(param_1 + 0xd8) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_50 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_48 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0xe0) + *(ulong *)(param_1 + 0xe0) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_40 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  puVar4 = &uStack_118;
  uStack_60 = uVar2;
  func_0x000100505190(puVar4,0x1c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  uStack_140 = 0x15;
  pcStack_128 = FUN_104ca7940;
  lStack_138 = param_1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain();
  puStack_148 = PTR_PTR_1126e39a0;
  puStack_150 = puVar4;
  _objc_msgSendSuper2(&puStack_150,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ca7940; end: 104ca7983; -[SCPasskeyLoginGrapheneMetric internalInit] */

void FUN_104ca7940(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e39a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ca7984; end: 104ca7f0f; -[SCPasskeyLoginGrapheneMetric isEqual:] */

long FUN_104ca7984(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104ca7ee8:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104ca7ef4;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
          (*(char *)(param_1 + 0x40) == *(char *)(param_3 + 0x40))) &&
         (*(char *)(param_1 + 0x70) == *(char *)(param_3 + 0x70))) &&
        (*(char *)(param_1 + 0x88) == *(char *)(param_3 + 0x88))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
        dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (bVar1) {
          dVar5 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
          if ((dVar5 < 2.2250738585072014e-308) ||
             (dVar5 < ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                      2.220446049250313e-16)) {
            dVar5 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
            if ((dVar5 < 2.2250738585072014e-308) ||
               (dVar5 < ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) *
                        2.220446049250313e-16)) {
              dVar5 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
              if ((dVar5 < 2.2250738585072014e-308) ||
                 (dVar5 < ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) *
                          2.220446049250313e-16)) {
                dVar5 = ABS(*(double *)(param_1 + 0x48) - *(double *)(param_3 + 0x48));
                if ((dVar5 < 2.2250738585072014e-308) ||
                   (dVar5 < ABS(*(double *)(param_1 + 0x48) + *(double *)(param_3 + 0x48)) *
                            2.220446049250313e-16)) {
                  dVar5 = ABS(*(double *)(param_1 + 0x50) - *(double *)(param_3 + 0x50));
                  if ((dVar5 < 2.2250738585072014e-308) ||
                     (dVar5 < ABS(*(double *)(param_1 + 0x50) + *(double *)(param_3 + 0x50)) *
                              2.220446049250313e-16)) {
                    dVar5 = ABS(*(double *)(param_1 + 0x60) - *(double *)(param_3 + 0x60));
                    if ((dVar5 < 2.2250738585072014e-308) ||
                       (dVar5 < ABS(*(double *)(param_1 + 0x60) + *(double *)(param_3 + 0x60)) *
                                2.220446049250313e-16)) {
                      dVar5 = ABS(*(double *)(param_1 + 0x68) - *(double *)(param_3 + 0x68));
                      if ((dVar5 < 2.2250738585072014e-308) ||
                         (dVar5 < ABS(*(double *)(param_1 + 0x68) + *(double *)(param_3 + 0x68)) *
                                  2.220446049250313e-16)) {
                        dVar5 = ABS(*(double *)(param_1 + 0x78) - *(double *)(param_3 + 0x78));
                        if ((dVar5 < 2.2250738585072014e-308) ||
                           (dVar5 < ABS(*(double *)(param_1 + 0x78) + *(double *)(param_3 + 0x78)) *
                                    2.220446049250313e-16)) {
                          dVar5 = ABS(*(double *)(param_1 + 0x80) - *(double *)(param_3 + 0x80));
                          if ((dVar5 < 2.2250738585072014e-308) ||
                             (dVar5 < ABS(*(double *)(param_1 + 0x80) + *(double *)(param_3 + 0x80))
                                      * 2.220446049250313e-16)) {
                            dVar5 = ABS(*(double *)(param_1 + 0x90) - *(double *)(param_3 + 0x90));
                            if ((dVar5 < 2.2250738585072014e-308) ||
                               (dVar5 < ABS(*(double *)(param_1 + 0x90) +
                                            *(double *)(param_3 + 0x90)) * 2.220446049250313e-16)) {
                              dVar5 = ABS(*(double *)(param_1 + 0x98) - *(double *)(param_3 + 0x98))
                              ;
                              if ((dVar5 < 2.2250738585072014e-308) ||
                                 (dVar5 < ABS(*(double *)(param_1 + 0x98) +
                                              *(double *)(param_3 + 0x98)) * 2.220446049250313e-16))
                              {
                                dVar5 = ABS(*(double *)(param_1 + 0xa0) -
                                            *(double *)(param_3 + 0xa0));
                                if ((dVar5 < 2.2250738585072014e-308) ||
                                   (dVar5 < ABS(*(double *)(param_1 + 0xa0) +
                                                *(double *)(param_3 + 0xa0)) * 2.220446049250313e-16
                                   )) {
                                  dVar5 = ABS(*(double *)(param_1 + 0xa8) -
                                              *(double *)(param_3 + 0xa8));
                                  if ((dVar5 < 2.2250738585072014e-308) ||
                                     (dVar5 < ABS(*(double *)(param_1 + 0xa8) +
                                                  *(double *)(param_3 + 0xa8)) *
                                              2.220446049250313e-16)) {
                                    dVar5 = ABS(*(double *)(param_1 + 0xb0) -
                                                *(double *)(param_3 + 0xb0));
                                    if ((dVar5 < 2.2250738585072014e-308) ||
                                       (dVar5 < ABS(*(double *)(param_1 + 0xb0) +
                                                    *(double *)(param_3 + 0xb0)) *
                                                2.220446049250313e-16)) {
                                      dVar5 = ABS(*(double *)(param_1 + 0xb8) -
                                                  *(double *)(param_3 + 0xb8));
                                      if ((dVar5 < 2.2250738585072014e-308) ||
                                         (dVar5 < ABS(*(double *)(param_1 + 0xb8) +
                                                      *(double *)(param_3 + 0xb8)) *
                                                  2.220446049250313e-16)) {
                                        dVar5 = ABS(*(double *)(param_1 + 200) -
                                                    *(double *)(param_3 + 200));
                                        if ((dVar5 < 2.2250738585072014e-308) ||
                                           (dVar5 < ABS(*(double *)(param_1 + 200) +
                                                        *(double *)(param_3 + 200)) *
                                                    2.220446049250313e-16)) {
                                          dVar5 = ABS(*(double *)(param_1 + 0xd0) -
                                                      *(double *)(param_3 + 0xd0));
                                          if ((dVar5 < 2.2250738585072014e-308) ||
                                             (dVar5 < ABS(*(double *)(param_1 + 0xd0) +
                                                          *(double *)(param_3 + 0xd0)) *
                                                      2.220446049250313e-16)) {
                                            dVar5 = ABS(*(double *)(param_1 + 0xd8) -
                                                        *(double *)(param_3 + 0xd8));
                                            if ((dVar5 < 2.2250738585072014e-308) ||
                                               (dVar5 < ABS(*(double *)(param_1 + 0xd8) +
                                                            *(double *)(param_3 + 0xd8)) *
                                                        2.220446049250313e-16)) {
                                              dVar5 = ABS(*(double *)(param_1 + 0xe0) -
                                                          *(double *)(param_3 + 0xe0));
                                              if ((((dVar5 < 2.2250738585072014e-308) ||
                                                   (dVar5 < ABS(*(double *)(param_1 + 0xe0) +
                                                                *(double *)(param_3 + 0xe0)) *
                                                            2.220446049250313e-16)) &&
                                                  ((lVar4 = *(long *)(param_1 + 0x28),
                                                   lVar4 == *(long *)(param_3 + 0x28) ||
                                                   (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
                                                 ((lVar4 = *(long *)(param_1 + 0x58),
                                                  lVar4 == *(long *)(param_3 + 0x58) ||
                                                  (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
                                                lVar4 = *(long *)(param_1 + 0xc0);
                                                if (lVar4 != *(long *)(param_3 + 0xc0)) {
                                                  func_0x00010c071ae0();
                                                  goto LAB_104ca7ef4;
                                                }
                                                goto LAB_104ca7ee8;
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
    lVar4 = 0;
  }
LAB_104ca7ef4:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 104ca7f10; end: 104ca81b7; -[SCPasskeyLoginGrapheneMetric matchStarted:queryOptionsEmpty:fetchOptionsFromServerStarted:fetchOptionsFailure:createCredentialStarted:createCredentialFailure:verifyCredentialStarted:verifyCredentialReactivationNeeded:verifyCredentialAccountLocked:verifyCredentialLoginOptionsExpired:verifyCredentialCosChallenged:verifyCredentialFailure:loginSucceeded:] */

void FUN_104ca7f10(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10,long param_11,
                  long param_12,long param_13,long param_14,long param_15)

{
  long lVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
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
  switch(*(undefined8 *)(param_1 + 8)) {
  case 0:
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))();
    }
    break;
  case 1:
    if (param_4 == 0) break;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    lVar1 = param_4;
    goto code_r0x000104ca80c8;
  case 2:
    if (param_5 == 0) break;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar1 = param_5;
    goto code_r0x000104ca80fc;
  case 3:
    if (param_6 == 0) break;
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    pcVar3 = *(code **)(param_6 + 0x10);
    lVar1 = param_6;
    goto code_r0x000104ca8098;
  case 4:
    if (param_7 == 0) break;
    uVar2 = *(undefined1 *)(param_1 + 0x40);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    pcVar3 = *(code **)(param_7 + 0x10);
    lVar1 = param_7;
    goto code_r0x000104ca8130;
  case 5:
    if (param_8 != 0) {
      (**(code **)(param_8 + 0x10))
                (*(undefined8 *)(param_1 + 0x60),param_8,*(undefined8 *)(param_1 + 0x58));
    }
    break;
  case 6:
    if (param_9 == 0) break;
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    pcVar3 = *(code **)(param_9 + 0x10);
    lVar1 = param_9;
code_r0x000104ca80fc:
    (*pcVar3)(uVar4,lVar1);
    break;
  case 7:
    if (param_10 == 0) break;
    uVar2 = *(undefined1 *)(param_1 + 0x70);
    uVar4 = *(undefined8 *)(param_1 + 0x78);
    uVar6 = *(undefined8 *)(param_1 + 0x80);
    pcVar3 = *(code **)(param_10 + 0x10);
    lVar1 = param_10;
    goto code_r0x000104ca8130;
  case 8:
    if (param_11 == 0) break;
    uVar2 = *(undefined1 *)(param_1 + 0x88);
    uVar4 = *(undefined8 *)(param_1 + 0x90);
    uVar6 = *(undefined8 *)(param_1 + 0x98);
    pcVar3 = *(code **)(param_11 + 0x10);
    lVar1 = param_11;
code_r0x000104ca8130:
    (*pcVar3)(uVar4,uVar6,lVar1,uVar2);
    break;
  case 9:
    if (param_12 == 0) break;
    uVar4 = *(undefined8 *)(param_1 + 0xa0);
    uVar6 = *(undefined8 *)(param_1 + 0xa8);
    pcVar3 = *(code **)(param_12 + 0x10);
    lVar1 = param_12;
    goto code_r0x000104ca8114;
  case 10:
    if (param_13 == 0) break;
    uVar4 = *(undefined8 *)(param_1 + 0xb0);
    uVar6 = *(undefined8 *)(param_1 + 0xb8);
    pcVar3 = *(code **)(param_13 + 0x10);
    lVar1 = param_13;
    goto code_r0x000104ca8114;
  case 0xb:
    if (param_14 == 0) break;
    uVar4 = *(undefined8 *)(param_1 + 0xc0);
    uVar6 = *(undefined8 *)(param_1 + 200);
    uVar5 = *(undefined8 *)(param_1 + 0xd0);
    pcVar3 = *(code **)(param_14 + 0x10);
    lVar1 = param_14;
code_r0x000104ca8098:
    (*pcVar3)(uVar6,uVar5,lVar1,uVar4);
    break;
  case 0xc:
    if (param_15 == 0) break;
    uVar4 = *(undefined8 *)(param_1 + 0xd8);
    uVar6 = *(undefined8 *)(param_1 + 0xe0);
    lVar1 = param_15;
code_r0x000104ca80c8:
    pcVar3 = *(code **)(lVar1 + 0x10);
code_r0x000104ca8114:
    (*pcVar3)(uVar4,uVar6,lVar1);
  }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ca81b8; end: 104ca81f3; -[SCPasskeyLoginGrapheneMetric .cxx_destruct] */

void FUN_104ca81b8(long param_1)

{
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0x58,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 104ca81f4; end: 104ca824b; +[SCPasskeyLoginAlertGrapheneMetric loginOptionsUpdatedAlertResponseWithAccepted:] */

void FUN_104ca81f4(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aed10;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[0x10] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ca824c; end: 104ca826f; -[SCPasskeyLoginAlertGrapheneMetric copyWithZone:] */

undefined8 FUN_104ca824c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104ca8270; end: 104ca82cb; -[SCPasskeyLoginAlertGrapheneMetric hash] */

void FUN_104ca8270(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uStack_20 = (ulong)*(byte *)(param_1 + 0x10);
  puVar1 = &uStack_28;
  func_0x000100505190(puVar1,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126e39a8;
  puStack_60 = puVar1;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ca82cc; end: 104ca830f; -[SCPasskeyLoginAlertGrapheneMetric internalInit] */

void FUN_104ca82cc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e39a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ca8310; end: 104ca83a7; -[SCPasskeyLoginAlertGrapheneMetric isEqual:] */

bool FUN_104ca8310(ulong param_1,undefined8 param_2,ulong param_3)

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
        bVar1 = *(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 104ca83a8; end: 104ca83c7; -[SCPasskeyLoginAlertGrapheneMetric matchLoginOptionsUpdatedAlertResponse:] */

void FUN_104ca83a8(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 0) && (*(long *)(param_1 + 8) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000104ca83c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,*(undefined1 *)(param_1 + 0x10));
    return;
  }
  return;
}



/* Entry: 104ca83c8; end: 104ca8413; +[SCLoginOptionsGrapheneMetric expireOptions] */

void FUN_104ca83c8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aed18;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ca8414; end: 104ca845f; +[SCLoginOptionsGrapheneMetric expiredOptionsUpdated] */

void FUN_104ca8414(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aed18;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ca8460; end: 104ca8507; +[SCLoginOptionsGrapheneMetric fetchOptionsFailureWithTrigger:reason:latency:] */

void FUN_104ca8460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126aed18;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  *(undefined8 *)(puVar2 + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ca8508; end: 104ca856b; +[SCLoginOptionsGrapheneMetric fetchOptionsStartedWithTrigger:] */

void FUN_104ca8508(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aed18;
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



/* Entry: 104ca856c; end: 104ca85e7; +[SCLoginOptionsGrapheneMetric fetchOptionsSuccessWithTrigger:latency:] */

void FUN_104ca856c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126aed18;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x38) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ca85e8; end: 104ca8643; +[SCLoginOptionsGrapheneMetric queryResultWithExists:] */

void FUN_104ca85e8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aed18;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  puVar2[0x40] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ca8644; end: 104ca8667; -[SCLoginOptionsGrapheneMetric copyWithZone:] */

undefined8 FUN_104ca8644(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104ca8668; end: 104ca8743; -[SCLoginOptionsGrapheneMetric hash] */

void FUN_104ca8668(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_48 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uStack_50 = uVar3;
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_30 = (ulong)*(byte *)(param_1 + 0x40);
  puVar4 = &uStack_68;
  uStack_40 = uVar1;
  func_0x000100505190(puVar4,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  uStack_90 = 0x15;
  pcStack_78 = FUN_104ca8744;
  lStack_88 = param_1;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain();
  puStack_98 = PTR_PTR_1126e39b0;
  puStack_a0 = puVar4;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ca8744; end: 104ca8787; -[SCLoginOptionsGrapheneMetric internalInit] */

void FUN_104ca8744(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e39b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ca8788; end: 104ca88e7; -[SCLoginOptionsGrapheneMetric isEqual:] */

long FUN_104ca8788(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104ca88c0:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104ca88cc;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(char *)(param_1 + 0x40) == *(char *)(param_3 + 0x40))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
      dVar5 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
        dVar5 = ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if ((((bVar1) &&
             ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
            ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + 0x30);
          if (lVar4 != *(long *)(param_3 + 0x30)) {
            func_0x00010c071ae0();
            goto LAB_104ca88cc;
          }
          goto LAB_104ca88c0;
        }
      }
    }
    lVar4 = 0;
  }
LAB_104ca88cc:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 104ca88e8; end: 104ca8a4f; -[SCLoginOptionsGrapheneMetric matchFetchOptionsStarted:fetchOptionsFailure:fetchOptionsSuccess:expireOptions:queryResult:expiredOptionsUpdated:] */

void FUN_104ca88e8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 3) {
    if (lVar1 == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
      }
    }
    else if (lVar1 == 1) {
      if (param_4 != 0) {
        (**(code **)(param_4 + 0x10))
                  (*(undefined8 *)(param_1 + 0x28),param_4,*(undefined8 *)(param_1 + 0x18),
                   *(undefined8 *)(param_1 + 0x20));
      }
    }
    else if ((lVar1 == 2) && (param_5 != 0)) {
      (**(code **)(param_5 + 0x10))
                (*(undefined8 *)(param_1 + 0x38),param_5,*(undefined8 *)(param_1 + 0x30));
    }
    goto LAB_104ca8a0c;
  }
  if (lVar1 == 3) {
    if (param_6 == 0) goto LAB_104ca8a0c;
    pcVar2 = *(code **)(param_6 + 0x10);
    lVar1 = param_6;
  }
  else {
    if (lVar1 == 4) {
      if (param_7 != 0) {
        (**(code **)(param_7 + 0x10))(param_7,*(undefined1 *)(param_1 + 0x40));
      }
      goto LAB_104ca8a0c;
    }
    if ((lVar1 != 5) || (param_8 == 0)) goto LAB_104ca8a0c;
    pcVar2 = *(code **)(param_8 + 0x10);
    lVar1 = param_8;
  }
  (*pcVar2)(lVar1);
LAB_104ca8a0c:
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



/* Entry: 104ca8a50; end: 104ca8a97; -[SCLoginOptionsGrapheneMetric .cxx_destruct] */

void FUN_104ca8a50(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104ca8a98; end: 104ca8b0b; -[SCPasskeyLoginOptionsServices initWithLoginOptionsProvider:] */

undefined1 * FUN_104ca8a98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e39b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ca8b0c; end: 104ca8b13; -[SCPasskeyLoginOptionsServices loginOptionsProvider] */

undefined8 FUN_104ca8b0c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104ca8b14; end: 104ca8b1f; -[SCPasskeyLoginOptionsServices .cxx_destruct] */

void FUN_104ca8b14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ca8b20; end: 104ca8b97; -[SCPasskeyCredentialDescriptor initWithCredentialId:] */

undefined1 * FUN_104ca8b20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e39c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ca8b98; end: 104ca8bbb; -[SCPasskeyCredentialDescriptor copyWithZone:] */

undefined8 FUN_104ca8b98(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104ca8bbc; end: 104ca8bc3; -[SCPasskeyCredentialDescriptor hash] */

void FUN_104ca8bbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 104ca8bc4; end: 104ca8c53; -[SCPasskeyCredentialDescriptor isEqual:] */

long FUN_104ca8bc4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104ca8c38;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_104ca8c38;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_104ca8c38;
    }
  }
  lVar3 = 1;
LAB_104ca8c38:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104ca8c54; end: 104ca8c5b; -[SCPasskeyCredentialDescriptor credentialId] */

undefined8 FUN_104ca8c54(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104ca8c5c; end: 104ca8c67; -[SCPasskeyCredentialDescriptor .cxx_destruct] */

void FUN_104ca8c5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ca8c68; end: 104ca8d9f; -[SCPasskeyLoginOptions initWithRelyingPartyId:nonce:userVerificationRequirement:allowedCredentials:expirationDate:] */

undefined1 *
FUN_104ca8c68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e39c8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ca8da0; end: 104ca8dc3; -[SCPasskeyLoginOptions copyWithZone:] */

undefined8 FUN_104ca8da0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104ca8dc4; end: 104ca8e5b; -[SCPasskeyLoginOptions hash] */

undefined8 * FUN_104ca8dc4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_104ca8f24:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_104ca8f30;
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
              puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
              if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_104ca8f30;
              }
              goto LAB_104ca8f24;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_104ca8f30:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 104ca8e5c; end: 104ca8f4b; -[SCPasskeyLoginOptions isEqual:] */

long FUN_104ca8e5c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104ca8f24:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104ca8f30;
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
              if (lVar3 != *(long *)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_104ca8f30;
              }
              goto LAB_104ca8f24;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_104ca8f30:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104ca8f4c; end: 104ca8f53; -[SCPasskeyLoginOptions relyingPartyId] */

undefined8 FUN_104ca8f4c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104ca8f54; end: 104ca8f5b; -[SCPasskeyLoginOptions nonce] */

undefined8 FUN_104ca8f54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104ca8f5c; end: 104ca8f63; -[SCPasskeyLoginOptions userVerificationRequirement] */

undefined8 FUN_104ca8f5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104ca8f64; end: 104ca8f6b; -[SCPasskeyLoginOptions allowedCredentials] */

undefined8 FUN_104ca8f64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104ca8f6c; end: 104ca8f73; -[SCPasskeyLoginOptions expirationDate] */

undefined8 FUN_104ca8f6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104ca8f74; end: 104ca8fc7; -[SCPasskeyLoginOptions .cxx_destruct] */

void FUN_104ca8f74(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ca8fc8; end: 104ca91ab; -[SCSettingsPasskeyEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ca8fc8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = param_1 + _DAT_1127101d0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x000106b24440();
  if ((int)lVar1 != 0) {
    puVar3 = PTR_PTR_1126aeae0;
    func_0x00010c15f9e0(PTR_PTR_1126aeae0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126aeaf0;
    _objc_alloc(PTR_PTR_1126aeaf0);
    puVar5 = puVar4;
    func_0x000106b24630();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c053ba0(puVar4);
    _objc_release(puVar5);
    _objc_initWeak(auStack_58,param_1);
    puVar5 = PTR_PTR_1126aeae8;
    _objc_alloc(PTR_PTR_1126aeae8);
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c0435e0(puVar5);
    param_1 = param_1 + _DAT_1127101d4;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 104ca91ac; end: 104ca91f3;  */

void FUN_104ca91ac(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b740();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ca91f4; end: 104ca922f; -[SCSettingsPasskeyEntryPoint end] */

void FUN_104ca91f4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e39d0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ca9230; end: 104ca9233; -[SCSettingsPasskeyEntryPoint passkeyManagementExited] */

void FUN_104ca9230(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be70930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__passkeyManagementRemoveScope_112579be8);
  return;
}



/* Entry: 104ca9234; end: 104ca93d7; -[SCSettingsPasskeyEntryPoint _onSettingsRowHandleContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ca9234(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_1127101d8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c071800();
  if (iVar1 != 0) {
    _objc_initWeak(auStack_68,param_1);
    puVar2 = PTR_PTR_1126aeaf8;
    _objc_alloc(PTR_PTR_1126aeaf8);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_104ca93d8;
    puStack_78 = &UNK_110845c10;
    _objc_retain(param_3);
    uStack_70 = param_3;
    _objc_retain(param_3);
    _objc_copyWeak(auStack_98,auStack_68);
    func_0x00010c0311a0(puVar2);
    lVar3 = param_1 + _DAT_1127101dc;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bf23000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar5));
    _objc_release(lVar4);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_98);
    _objc_release(param_3);
    _objc_release(uStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104ca93d8; end: 104ca942b;  */

void FUN_104ca93d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0d66a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ca942c; end: 104ca94b3;  */

void FUN_104ca942c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d66a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (param_2 != 0) {
    (**(code **)(param_2 + 0x10))(param_2);
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be70920();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ca94b4; end: 104ca950b; -[SCSettingsPasskeyEntryPoint _passkeyManagementRemoveScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ca94b4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127101d8;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104ca950c; end: 104ca955f; -[SCSettingsPasskeyEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ca950c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127101d8,0);
  _objc_destroyWeak(param_1 + _DAT_1127101dc);
  _objc_destroyWeak(param_1 + _DAT_1127101d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127101d4);
  return;
}



/* Entry: 104ca9560; end: 104ca9663; -[SCManagePermissionSettingsServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ca9560(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127101e0);
  puVar2 = PTR_PTR_1126aed20;
  _objc_alloc(PTR_PTR_1126aed20);
  func_0x00010c0355e0();
  func_0x00010bf9d660(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104ca9664; end: 104ca96a3;  */

void FUN_104ca9664(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf1360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104ca96a4; end: 104ca985f; -[SCManagePermissionSettingsServicesEntryPoint _createPermissionsController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ca96a4(long param_1,undefined8 param_2)

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
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar1 = PTR_PTR_1126aed28;
  _objc_alloc(PTR_PTR_1126aed28);
  lVar2 = param_1 + _DAT_1127101e4;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_1127101e8;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf49f80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_1127101ec;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_1127101f0;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010c292d20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_1127101f8;
    _objc_loadWeakRetained(lVar12);
  }
  lVar10 = lVar12;
  func_0x00010bf10e60(lVar12);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_1127101f4;
  _objc_loadWeakRetained(param_1);
  lVar11 = param_1;
  func_0x00010c0dc400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff5500(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar10,lVar11);
  _objc_release(lVar11);
  _objc_release(param_1);
  _objc_release(lVar10);
  _objc_release(lVar12);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ca9860; end: 104ca98d7; -[SCManagePermissionSettingsServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ca9860(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127101e0,0);
  _objc_destroyWeak(param_1 + _DAT_1127101f4);
  _objc_destroyWeak(param_1 + _DAT_1127101f8);
  _objc_destroyWeak(param_1 + _DAT_1127101f0);
  _objc_destroyWeak(param_1 + _DAT_1127101ec);
  _objc_destroyWeak(param_1 + _DAT_1127101e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127101e4);
  return;
}



/* Entry: 104ca98d8; end: 104ca9a2b; -[SCPermissionsControllerImpl initWithAudioSession:contactPermissionManager:featureSettingsService:locationPermissionsManager:captureDeviceAuthorizationChecker:notificationOSSettingsRetriever:] */

undefined1 *
FUN_104ca98d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e39d8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ca9a2c; end: 104ca9bcb; -[SCPermissionsControllerImpl hasAnyPermissionDenied] */

void FUN_104ca9a2c(ulong param_1)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uVar2 = *(ulong *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0831a0();
  _objc_release(uVar2);
  if ((uVar4 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    func_0x00010c136400(uVar3);
    bVar1 = *(byte *)(puStack_48 + 3);
    __Block_object_dispose(&uStack_50,8);
    _objc_release(uVar3);
    _objc_release(uVar3);
    if ((bVar1 & 1) == 0) {
      uVar4 = *(ulong *)(param_1 + 0x30);
      func_0x00010c079e00();
      if ((((uVar4 & 1) == 0) &&
          (puVar5 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30, func_0x00010bf10fa0(),
          puVar5 != (undefined *)0x2)) &&
         (puVar5 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30, func_0x00010bf10fa0(),
         puVar5 != (undefined *)0x1)) {
        lVar6 = *(long *)(param_1 + 0x10);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bf10fa0();
        _objc_release(lVar6);
        if (lVar7 != 3) {
          uVar2 = *(ulong *)(param_1 + 0x18);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar2;
          func_0x00010bfd6380();
          _objc_release(uVar2);
          if (((uVar4 & 1) == 0) && (uVar4 = param_1, func_0x00010c06ea00(), (uVar4 & 1) == 0)) {
            func_0x00010c07db80(param_1);
          }
        }
      }
    }
  }
  return;
}



/* Entry: 104ca9bcc; end: 104ca9c47; -[SCPermissionsControllerImpl isClipboardPermissionDenied] */

uint FUN_104ca9bcc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c159460();
  if ((int)uVar2 == 0) {
    uVar4 = 1;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf01780();
    _objc_release(uVar3);
    uVar4 = (uint)uVar2 ^ 1;
  }
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 104ca9c48; end: 104ca9c87; -[SCPermissionsControllerImpl isShareIntentsPermissionDenied] */

uint FUN_104ca9c48(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf91040();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 104ca9c88; end: 104ca9ce7; -[SCPermissionsControllerImpl .cxx_destruct] */

void FUN_104ca9c88(long param_1)

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



/* Entry: 104ca9ce8; end: 104ca9cfb;  */

void FUN_104ca9ce8(long param_1,byte param_2)

{
  *(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2 ^ 1;
  return;
}



/* Entry: 104ca9cfc; end: 104caa077; -[SCPermissionSettingsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ca9cfc(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126aed38;
  _objc_alloc(PTR_PTR_1126aed38);
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_112710218;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar15;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_11271021c;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar16;
  func_0x00010bf49f80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_104caa078();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0f9c20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  FUN_104caa078();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf2a280();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  FUN_104caa078();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0dccc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_112710228;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar17;
  func_0x00010bf10e60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_11271022c;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar18;
  func_0x00010c292d20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_112710220;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar19;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_112710230;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar20;
  func_0x00010c0f9e00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_112710234;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar21;
  func_0x00010c0dc400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d480(puVar1,param_2,lVar2,lVar3,lVar5,lVar7,lVar9,lVar10,lVar11,lVar12,lVar13,
                      lVar14);
  _objc_release(lVar14);
  _objc_release(lVar21);
  _objc_release(lVar13);
  _objc_release(lVar20);
  _objc_release(lVar12);
  _objc_release(lVar19);
  _objc_release(lVar11);
  _objc_release(lVar18);
  _objc_release(lVar10);
  _objc_release(lVar17);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar16);
  _objc_release(lVar2);
  _objc_release(lVar15);
  lVar15 = param_1;
  func_0x000104caa09c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar15;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar15);
  func_0x000104caa09c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar15);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104caa078; end: 104caa0bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104caa078(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112710224);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104caa0c0; end: 104caa14b; -[SCPermissionSettingsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104caa0c0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112710234);
  _objc_destroyWeak(param_1 + _DAT_112710230);
  _objc_destroyWeak(param_1 + _DAT_11271022c);
  _objc_destroyWeak(param_1 + _DAT_112710228);
  _objc_destroyWeak(param_1 + _DAT_112710224);
  _objc_destroyWeak(param_1 + _DAT_112710220);
  _objc_destroyWeak(param_1 + _DAT_11271021c);
  _objc_destroyWeak(param_1 + _DAT_112710218);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112710214);
  return;
}



/* Entry: 104caa14c; end: 104caa3e3; -[SCPermissionsViewController initWithUserSession:contactPermissionManager:permissionRequestService:cameraPermissionRequester:notificationPermissionRequester:captureDeviceAuthorizationChecker:locationPermissionsManager:featureSettingsService:permissionsController:notificationOSSettingsRetriever:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104caa14c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
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
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126e39e0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar3 = (long)_DAT_11271023c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112710240;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112710244;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112710248;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11271024c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112710250;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112710254;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112710258;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11271025c;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112710260;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_12;
    _objc_release(uVar2);
  }
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



/* Entry: 104caa3e4; end: 104caa6eb; -[SCPermissionsViewController loadView] */

void FUN_104caa3e4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e39e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_loadView_112604be0);
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc(PTR__OBJC_CLASS___UITableView_1126aed40);
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c2116c0(param_1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189840();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e9a0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2026e0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167740();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7b20();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18));
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcde0();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  func_0x00010c1f75c0(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 104caa6ec; end: 104caa85b;  */

void FUN_104caa6ec(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfdef60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(lVar6,uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104caa85c; end: 104caa91b; -[SCPermissionsViewController viewDidLoad] */

void FUN_104caa85c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e39e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  return;
}


