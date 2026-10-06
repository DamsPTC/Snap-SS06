/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1056437e0; end: 1056438fb;  */

void FUN_1056437e0(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_1a0 [112];
  undefined1 auStack_130 [88];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [80];
  undefined1 auStack_70 [64];
  
  FUN_105643a24(auStack_70,&UNK_10f2e06f5,0,0);
  FUN_105643a94(auStack_c0,param_2,auStack_70);
  FUN_1056438fc(auStack_130);
  iVar2 = 2;
  do {
    FUN_105643950(auStack_1a0,auStack_c0);
    puVar1 = auStack_130;
    FUN_105643938(puVar1,auStack_1a0);
    FUN_105643990(auStack_1a0);
    if (((ulong)puVar1 & 1) == 0) {
      func_0x000105644014();
      func_0x00010002b838(param_1,&UNK_10f2e06f7);
LAB_105643898:
      func_0x000105644000();
      func_0x0001056439b8(auStack_70);
      return;
    }
    if (iVar2 == 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1,auStack_d8);
      func_0x000105644014();
      goto LAB_105643898;
    }
    FUN_105643f6c(auStack_130);
    iVar2 = iVar2 + -1;
  } while( true );
}



/* Entry: 1056438fc; end: 105643937;  */

void FUN_1056438fc(void)

{
  func_0x000105643fb4();
  FUN_105643b3c();
  func_0x000105643fd8();
  return;
}



/* Entry: 105643938; end: 10564394f;  */

uint FUN_105643938(uint param_1)

{
  FUN_105643f24();
  return param_1 ^ 1;
}



/* Entry: 105643950; end: 10564398f;  */

void FUN_105643950(void)

{
  func_0x000105643fb4();
  FUN_105643b3c();
  func_0x000105643fd8();
  return;
}



/* Entry: 105643990; end: 1056439df;  */

void FUN_105643990(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 1056439e0; end: 105643a23;  */

void FUN_1056439e0(ulong *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = param_2;
  _strlen(param_2);
  if ((*param_1 & 3) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm_1103462b8)
              (*param_1 & 0xfffffffffffffffc);
    return;
  }
  if (param_3 == 0) {
    func_0x000107c39894(param_2,uVar1);
  }
  else {
    func_0x00010b4bf054();
    param_2 = param_3;
  }
  *param_1 = param_2;
  return;
}



/* Entry: 105643a24; end: 105643a93;  */

undefined8 * FUN_105643a24(undefined8 *param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x00010002b838(param_1 + 3);
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined4 *)((long)param_1 + 0x34) = param_4;
  *(undefined1 *)(param_1 + 7) = 0;
  if (param_3 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(param_1,param_3);
  }
  return param_1;
}



/* Entry: 105643a94; end: 105643aef;  */

undefined8 * FUN_105643a94(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  puVar1 = (undefined8 *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    puVar1 = param_2;
  }
  *param_1 = puVar1;
  uVar2 = param_2[1];
  puVar1 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar1 = param_2;
  }
  param_1[1] = (long)puVar1 + uVar2;
  FUN_105643af0(param_1 + 2,param_3);
  return param_1;
}



/* Entry: 105643af0; end: 105643b3b;  */

long FUN_105643af0(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (lVar1 + 0x18,param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  return param_1;
}



/* Entry: 105643b3c; end: 105643b9b;  */

long FUN_105643b3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_105643af0();
  *(undefined8 *)(lVar1 + 0x40) = param_3;
  *(undefined8 *)(lVar1 + 0x48) = param_4;
  *(undefined1 *)(lVar1 + 0x50) = 0;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  *(undefined8 *)(lVar1 + 0x68) = 0;
  FUN_105643b9c();
  return param_1;
}



/* Entry: 105643b9c; end: 105643be7;  */

void FUN_105643b9c(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    if (*(long *)(param_1 + 0x40) == *(long *)(param_1 + 0x48)) {
      uVar1 = 0;
    }
    else {
      lVar2 = param_1;
      FUN_105643be8();
      uVar1 = (undefined1)lVar2;
    }
    *(undefined1 *)(param_1 + 0x50) = uVar1;
  }
  return;
}



/* Entry: 105643be8; end: 105643d6f;  */

undefined8 FUN_105643be8(ulong param_1,long *param_2,char *param_3,undefined8 param_4)

{
  ulong uVar1;
  char *pcVar2;
  char *extraout_x8;
  char *extraout_x8_00;
  char *pcVar3;
  
  pcVar3 = (char *)*param_2;
  uVar1 = param_1;
  if (*(int *)(param_1 + 0x34) == 0) {
    while (pcVar3 != param_3) {
      uVar1 = param_1;
      FUN_105643d70(param_1,(long)*pcVar3);
      pcVar3 = (char *)*param_2;
      if ((int)uVar1 == 0) break;
      pcVar3 = pcVar3 + 1;
      *param_2 = (long)pcVar3;
    }
    if (*(int *)(param_1 + 0x34) == 0) {
      if (pcVar3 == param_3) {
        return 0;
      }
      func_0x000105643fc8();
      pcVar2 = (char *)*param_2;
      if ((uVar1 & 1) == 0) {
        while (((pcVar2 != param_3 && (func_0x000105643f9c(), (uVar1 & 1) == 0)) &&
               (func_0x000105643fc8(), (uVar1 & 1) == 0))) {
          func_0x000105643fe8();
          pcVar2 = extraout_x8_00;
        }
      }
      else {
        *param_2 = (long)(pcVar2 + 1);
      }
      goto LAB_105643cac;
    }
  }
  if (pcVar3 == param_3) {
    if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x38) = 1;
    FUN_105643e64(param_4,pcVar3,pcVar3);
    return 1;
  }
  func_0x000105643fc8();
  if ((int)uVar1 == 0) {
    if (((*(byte *)(param_1 + 0x38) & 1) != 0) || (func_0x000105643f9c(*param_2), (int)uVar1 == 0))
    {
      func_0x000105643f9c(*param_2);
      pcVar2 = (char *)*param_2;
      if ((int)uVar1 != 0) {
        pcVar2 = pcVar2 + 1;
        *param_2 = (long)pcVar2;
        pcVar3 = pcVar2;
      }
      while (((pcVar2 != param_3 && (func_0x000105643f9c(), (uVar1 & 1) == 0)) &&
             (func_0x000105643fc8(), (uVar1 & 1) == 0))) {
        func_0x000105643fe8();
        pcVar2 = extraout_x8;
      }
    }
  }
  else if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    func_0x000105643fe8();
    *(undefined1 *)(param_1 + 0x38) = 0;
    goto LAB_105643cac;
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
LAB_105643cac:
  FUN_105643e64(param_4,pcVar3,*param_2);
  return 1;
}



/* Entry: 105643d70; end: 105643e1f;  */

bool FUN_105643d70(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = (long)*(char *)(param_1 + 0x2f);
  if (lVar2 < 0) {
    lVar2 = *(long *)(param_1 + 0x20);
  }
  if (lVar2 == 0) {
    if (*(char *)(param_1 + 0x31) != '\x01') {
      return false;
    }
    func_0x00010054bf9c(param_2);
    bVar1 = (int)param_2 == 0;
  }
  else {
    param_1 = param_1 + 0x18;
    __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm(param_1,param_2,0);
    bVar1 = param_1 == -1;
  }
  return !bVar1;
}



/* Entry: 105643e20; end: 105643e63;  */

long FUN_105643e20(long param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  
  if (param_2 < param_4) {
    return -1;
  }
  lVar1 = param_1 + param_4;
  func_0x0001003b0798(lVar1,param_3,param_2 - param_4);
  param_1 = lVar1 - param_1;
  if (lVar1 == 0) {
    param_1 = -1;
  }
  return param_1;
}



/* Entry: 105643e64; end: 105643f23;  */

undefined8 * FUN_105643e64(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  uVar5 = (long)param_3 - (long)param_2;
  lVar3 = (long)*(char *)((long)param_1 + 0x17);
  puVar4 = param_1;
  if (lVar3 < 0) {
    uVar2 = (param_1[2] & 0x7fffffffffffffff) - 1;
    if (uVar2 < uVar5) {
      lVar3 = param_1[1];
      goto LAB_105643eb8;
    }
    cVar1 = (char)((ulong)param_1[2] >> 0x38);
  }
  else {
    if (uVar5 < 0x17) goto LAB_105643ef4;
    uVar2 = 0x16;
LAB_105643eb8:
    func_0x0001000644b8(param_1,uVar2,uVar5 - uVar2,lVar3,0,lVar3,0);
    cVar1 = *(char *)((long)param_1 + 0x17);
  }
  if (cVar1 < '\0') {
    puVar4 = (undefined8 *)*param_1;
  }
LAB_105643ef4:
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *(undefined1 *)puVar4 = *param_2;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  }
  *(undefined1 *)puVar4 = 0;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_1[1] = uVar5;
  }
  else {
    *(byte *)((long)param_1 + 0x17) = (byte)uVar5 & 0x7f;
  }
  return param_1;
}



/* Entry: 105643f24; end: 105643f6b;  */

bool FUN_105643f24(long param_1,long param_2)

{
  bool bVar1;
  
  if ((*(char *)(param_2 + 0x50) == '\x01') && (*(char *)(param_1 + 0x50) != '\0')) {
    if (*(long *)(param_2 + 0x40) != *(long *)(param_1 + 0x40)) {
      return false;
    }
    bVar1 = *(long *)(param_2 + 0x48) == *(long *)(param_1 + 0x48);
  }
  else {
    bVar1 = *(char *)(param_2 + 0x50) == *(char *)(param_1 + 0x50);
  }
  return bVar1;
}



/* Entry: 105643f6c; end: 105643f9b;  */

void FUN_105643f6c(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)param_1;
  FUN_105643be8(uVar1,param_1 + 0x40,*(undefined8 *)(param_1 + 0x48),param_1 + 0x58);
  *(char *)(param_1 + 0x50) = (char)uVar1;
  return;
}



/* Entry: 105643f9c; end: 105644027;  */

bool FUN_105643f9c(char *param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar2 = (long)*param_1;
  lVar3 = (long)*(char *)(unaff_x22 + 0x2f);
  if (lVar3 < 0) {
    lVar3 = *(long *)(unaff_x22 + 0x20);
  }
  if (lVar3 == 0) {
    if (*(char *)(unaff_x22 + 0x31) != '\x01') {
      return false;
    }
    func_0x00010054bf9c(lVar2);
    bVar1 = (int)lVar2 == 0;
  }
  else {
    lVar3 = unaff_x22 + 0x18;
    __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm(lVar3,lVar2,0);
    bVar1 = lVar3 == -1;
  }
  return !bVar1;
}



/* Entry: 105644028; end: 105644137;  */

undefined8 * FUN_105644028(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [24];
  undefined1 uStack_b8;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined1 uStack_60;
  undefined1 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_d8 = 0x100000000;
  func_0x00010002b838(auStack_d0,&UNK_10f2e0c4c);
  uStack_b8 = 0;
  uStack_88 = 0;
  uStack_80 = 0x200000001;
  func_0x00010002b838(auStack_78,&UNK_10f2e0e41);
  uStack_60 = 0;
  uStack_30 = 0;
  uVar3 = 2;
  func_0x00010054ae4c(param_1,2,&UNK_10f2e06f8,&uStack_d8,2);
  lVar4 = 0x58;
  do {
    puVar1 = (undefined8 *)(auStack_d0 + lVar4 + -8);
    func_0x00010054b180();
    lVar4 = lVar4 + -0x58;
  } while (lVar4 != -0x58);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar2 = &uStack_80;
  lVar4 = -0xb0;
  do {
    func_0x00010054b180(puVar2);
    puVar2 = puVar2 + -0xb;
    lVar4 = lVar4 + 0x58;
  } while (lVar4 != 0);
  __Unwind_Resume();
  *puVar1 = &PTR_FUN_1108a2f48;
  puVar1[1] = uVar3;
  FUN_105644170(puVar1 + 2,uVar3);
  return puVar1;
}



/* Entry: 105644138; end: 10564416f;  */

undefined8 * FUN_105644138(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_1108a2f48;
  param_1[1] = param_2;
  FUN_105644170(param_1 + 2,param_2);
  return param_1;
}



/* Entry: 105644170; end: 1056441c3;  */

void FUN_105644170(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x498;
  __Znwm();
  FUN_105644440();
  *param_1 = uVar1;
  return;
}



/* Entry: 1056441c4; end: 105644247;  */

undefined8 * FUN_1056441c4(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1108a2f48;
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    func_0x00010054c360(lVar1 + 0x410);
    func_0x00010054c360(lVar1 + 0x388);
    func_0x00010054c360(lVar1 + 0x300);
    func_0x00010054c360(lVar1 + 0x278);
    func_0x00010054c360(lVar1 + 0x1f0);
    func_0x00010054c360(lVar1 + 0x168);
    FUN_105644260(lVar1 + 0xf0);
    func_0x0001056442e4(lVar1 + 0x78);
    func_0x000105644368(lVar1);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 105644248; end: 10564424b;  */

undefined8 * FUN_105644248(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1108a2f48;
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    func_0x00010054c360(lVar1 + 0x410);
    func_0x00010054c360(lVar1 + 0x388);
    func_0x00010054c360(lVar1 + 0x300);
    func_0x00010054c360(lVar1 + 0x278);
    func_0x00010054c360(lVar1 + 0x1f0);
    func_0x00010054c360(lVar1 + 0x168);
    FUN_105644260(lVar1 + 0xf0);
    func_0x0001056442e4(lVar1 + 0x78);
    func_0x000105644368(lVar1);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10564424c; end: 10564425f;  */

void FUN_10564424c(void)

{
  FUN_1056441c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105644260; end: 105644287;  */

void FUN_105644260(long param_1)

{
  FUN_105644288(param_1 + 0x60);
  func_0x000105644438();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 105644288; end: 1056442c7;  */

void FUN_105644288(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1056443ec();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_1056442c8();
    }
  }
  return;
}



/* Entry: 1056442c8; end: 10564430b;  */

void FUN_1056442c8(void)

{
  func_0x00010564440c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10564430c; end: 10564434b;  */

void FUN_10564430c(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1056443ec();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_10564434c();
    }
  }
  return;
}



/* Entry: 10564434c; end: 10564438f;  */

void FUN_10564434c(void)

{
  func_0x00010564440c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105644390; end: 1056443cf;  */

void FUN_105644390(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1056443ec();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_1056443d0();
    }
  }
  return;
}



/* Entry: 1056443d0; end: 1056443eb;  */

void FUN_1056443d0(void)

{
  func_0x00010564440c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1056443ec; end: 10564443f;  */

void FUN_1056443ec(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(*param_1 + 8);
  lVar2 = *(long *)param_1[1];
  *(long **)(lVar2 + 8) = plVar1;
  *plVar1 = lVar2;
  param_1[2] = 0;
  return;
}



/* Entry: 105644440; end: 1056445af;  */

long FUN_105644440(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_105644a04(param_1,param_2,&UNK_10f2e1188,0xb9);
  FUN_105644a30(lVar1 + 0x78,param_2,&UNK_10f2e1242,0x8f);
  FUN_105644a5c(param_1 + 0xf0,param_2,&UNK_10f2e12d2,0x6b);
  func_0x00010054bfa4(param_1 + 0x168,param_2,&UNK_10f2e133e,0x77);
  func_0x00010054bfa4(param_1 + 0x1f0,param_2,&UNK_10f2e13b6,0x38);
  func_0x00010054bfa4(param_1 + 0x278,param_2,&UNK_10f2e13ef,0x166);
  func_0x00010054bfa4(param_1 + 0x300,param_2,&UNK_10f2e1556,0x69);
  func_0x00010054bfa4(param_1 + 0x388,param_2,&UNK_10f2e15c0,0x3f);
  func_0x00010054bfa4(param_1 + 0x410,param_2,&UNK_10f2e1600,0x58);
  return param_1;
}



/* Entry: 1056445b0; end: 1056445d3;  */

void FUN_1056445b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_3;
  uStack_18 = param_2;
  FUN_1056445d4(param_1,&uStack_18,&uStack_20);
  return;
}



/* Entry: 1056445d4; end: 1056445ff;  */

void FUN_1056445d4(void)

{
  undefined8 extraout_x8;
  
  func_0x000105645680();
  FUN_105644a88();
  func_0x00010564566c();
  FUN_105644be4();
  FUN_105644c38(extraout_x8,&stack0xffffffffffffffd8);
  return;
}



/* Entry: 105644600; end: 105644633;  */

void FUN_105644600(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_5;
  uStack_20 = param_3;
  uStack_18 = param_2;
  FUN_105644634(param_1 + 0x78,&uStack_18,&uStack_20,param_4,&uStack_28);
  return;
}



/* Entry: 105644634; end: 105644687;  */

void FUN_105644634(undefined8 param_1)

{
  FUN_105644da8();
  FUN_105644f04();
  FUN_105644f6c(param_1,&stack0xffffffffffffffd8);
  return;
}



/* Entry: 105644688; end: 1056446af;  */

void FUN_105644688(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_3;
  uStack_18 = param_2;
  FUN_1056446b0(param_1 + 0xf0,&uStack_18,&uStack_20);
  return;
}



/* Entry: 1056446b0; end: 1056446db;  */

void FUN_1056446b0(void)

{
  undefined8 extraout_x8;
  
  func_0x000105645680();
  FUN_10564501c();
  func_0x00010564566c();
  FUN_105644be4();
  func_0x000105645178(extraout_x8,&stack0xffffffffffffffd8);
  return;
}



/* Entry: 1056446dc; end: 105644797;  */

void FUN_1056446dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = param_1 + 0x168;
  __ZNSt3__15mutex4lockEv(param_1 + 0x180);
  FUN_1056453dc(lVar1,1,param_2);
  func_0x0001005edcd4(lVar1,2,param_3);
  func_0x0001005edcd4(lVar1,3,param_4);
  func_0x0001056455f0();
  func_0x0001005ecd44();
  func_0x0001056455d8();
  __ZNSt3__15mutex6unlockEv(param_1 + 0x180);
  func_0x000100621554();
  return;
}



/* Entry: 105644798; end: 1056447bb;  */

void FUN_105644798(long param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  func_0x000100852678(param_1 + 0x1f0,&uStack_18);
  return;
}



/* Entry: 1056447bc; end: 1056447c3;  */

void FUN_1056447bc(long param_1)

{
  func_0x000107c60d88(param_1 + 0x290);
  func_0x00010054c3a4(param_1 + 0x278);
  func_0x00010062154c();
  func_0x000100621554();
  return;
}



/* Entry: 1056447c4; end: 105644843;  */

void FUN_1056447c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uStack_48 = param_3;
  uStack_40 = param_2;
  lStack_38 = param_1 + 0x300;
  __ZNSt3__15mutex4lockEv(param_1 + 0x318);
  FUN_105644be4(param_1 + 0x300,&uStack_40,&uStack_48,param_4);
  func_0x0001056455d8();
  __ZNSt3__15mutex6unlockEv(param_1 + 0x318);
  func_0x00010062155c(&lStack_38);
  return;
}



/* Entry: 105644844; end: 1056448fb;  */

void FUN_105644844(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x388;
  __ZNSt3__15mutex4lockEv(param_1 + 0x3a0);
  func_0x0001056455c8();
  func_0x0001056455b8();
  func_0x0001056455a8();
  func_0x0001056455f0();
  func_0x0001005ecd44();
  func_0x00010564563c();
  func_0x000105645660();
  func_0x000100867974(lVar1,7,param_2 + 0x60);
  FUN_1056453dc(lVar1,8,*(undefined4 *)(param_2 + 0x78));
  func_0x0001056453e4(lVar1,9,param_2 + 0x7c);
  func_0x0001056455d8();
  __ZNSt3__15mutex6unlockEv(param_1 + 0x3a0);
  func_0x000100621554();
  return;
}



/* Entry: 1056448fc; end: 105644a03;  */

void FUN_1056448fc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x410;
  __ZNSt3__15mutex4lockEv(param_1 + 0x428);
  func_0x0001056455c8();
  func_0x0001056455b8();
  func_0x0001056455a8();
  func_0x0001056455f0();
  func_0x0001005edccc();
  func_0x00010564563c();
  func_0x000105645660();
  FUN_1056453f4(lVar1,7,param_2 + 0x50);
  FUN_1056453f4(lVar1,8,param_2 + 0x70);
  func_0x0001005ecd44(lVar1,9,param_2 + 0x90);
  func_0x0001005edccc(lVar1,10,param_2 + 0xa8);
  func_0x0001005ecd44(lVar1,0xb,param_2 + 0xb0);
  func_0x0001056453ec(lVar1,0xc,param_2 + 200);
  func_0x0001005ecd44(lVar1,0xd,param_2 + 0xd0);
  func_0x0001005ecd44(lVar1,0xe,param_2 + 0xe8);
  func_0x0001056455d8();
  __ZNSt3__15mutex6unlockEv(param_1 + 0x428);
  func_0x000100621554();
  return;
}



/* Entry: 105644a04; end: 105644a2f;  */

void FUN_105644a04(void)

{
  func_0x000105645474();
  func_0x000105645548();
  func_0x000105645574();
  return;
}



/* Entry: 105644a30; end: 105644a5b;  */

void FUN_105644a30(void)

{
  func_0x000105645474();
  func_0x000105645548();
  func_0x000105645574();
  return;
}



/* Entry: 105644a5c; end: 105644a87;  */

void FUN_105644a5c(void)

{
  func_0x000105645474();
  func_0x000105645548();
  func_0x000105645574();
  return;
}



/* Entry: 105644a88; end: 105644b47;  */

long FUN_105644a88(undefined8 param_1)

{
  undefined1 uVar1;
  long lVar2;
  long extraout_x8;
  long *plVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_108;
  
  func_0x000105645450();
  plVar3 = (long *)(unaff_x19 + 0x68);
  do {
    lVar2 = *plVar3;
    uVar1 = lVar2 == unaff_x19 + 0x60;
    if ((bool)uVar1) {
      func_0x00010564561c();
      func_0x00010564562c();
      func_0x000105645614();
      func_0x00010564560c();
      func_0x0001056454e8();
      func_0x000105645420();
      goto LAB_105644b14;
    }
    plVar3 = (long *)(lVar2 + 8);
  } while (*(long *)(lVar2 + 0x98) != 0);
  uVar1 = unaff_x19 + 0x60 == *plVar3;
  if (!(bool)uVar1) {
    func_0x0001056454ac();
  }
LAB_105644b14:
  func_0x000105645518();
  func_0x000105645528();
  if ((bool)uVar1) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x000105645560();
  func_0x000105645540();
  FUN_105644be4();
  lVar2 = extraout_x8;
  uStack_108 = param_1;
  FUN_105644c38(extraout_x8,&uStack_108);
  return lVar2;
}



/* Entry: 105644b48; end: 105644bab;  */

void FUN_105644b48(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  FUN_105644be4();
  uStack_28 = param_2;
  FUN_105644c38(param_1,&uStack_28);
  return;
}



/* Entry: 105644bac; end: 105644baf;  */

undefined8 * FUN_105644bac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 105644bb0; end: 105644bc3;  */

void FUN_105644bb0(void)

{
  func_0x00010054c360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105644bc4; end: 105644be3;  */

void FUN_105644bc4(void)

{
  long unaff_x19;
  
  func_0x000105645508();
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 105644be4; end: 105644c37;  */

void FUN_105644be4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  
  func_0x0001005edccc(param_1,1,param_2);
  func_0x0001005edccc(param_1,2,param_3);
  uVar1 = param_4[1];
  puVar2 = (undefined8 *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_4 + 0x17);
    puVar2 = param_4;
  }
  func_0x00010054c7ec(param_1,3,puVar2,uVar1);
  iVar3 = (int)param_1;
  func_0x0001005ecddc();
  func_0x000107c61338();
  if (iVar3 != 0) {
    func_0x000107c3a514();
    func_0x000107c3a50c();
    func_0x000107c3a524();
    func_0x0001003a91d4(&UNK_10f82fa61);
    func_0x000107c3a51c();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 105644c38; end: 105644c5f;  */

void FUN_105644c38(void)

{
  func_0x0001056454d0();
  func_0x0001056455e0();
  FUN_105644c60();
  return;
}



/* Entry: 105644c60; end: 105644c9f;  */

void FUN_105644c60(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x0001056454d0();
  *param_1 = extraout_x8;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  FUN_105644ca0();
  return;
}



/* Entry: 105644ca0; end: 105644da7;  */

void FUN_105644ca0(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long unaff_x19;
  undefined1 auStack_88 [24];
  long lStack_70;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined4 uStack_38;
  
  func_0x00010054c0ec();
  if ((param_1 != 0) && (func_0x00010054c3a4(), (int)param_1 != 0)) {
    func_0x000105645624();
    lVar2 = param_1;
    func_0x0001005ecf0c(auStack_88);
    func_0x000105645648();
    lStack_70 = lVar2;
    func_0x000105645654(auStack_68);
    func_0x00010061f5a8(auStack_50,param_1,3);
    uVar1 = (undefined4)param_1;
    func_0x0001056455f0();
    func_0x00010054c8f4();
    uStack_38 = uVar1;
    if (*(char *)(unaff_x19 + 0x60) == '\x01') {
      FUN_10563a964(unaff_x19 + 8,auStack_88);
    }
    else {
      FUN_10563a924(unaff_x19 + 8,auStack_88);
    }
    FUN_10563aa14(auStack_88);
    return;
  }
  lVar2 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0x60) == '\x01') {
    FUN_10563aa14();
    *(undefined1 *)(lVar2 + 0x58) = 0;
  }
  return;
}



/* Entry: 105644da8; end: 105644e67;  */

long FUN_105644da8(undefined8 param_1)

{
  undefined1 uVar1;
  long lVar2;
  long extraout_x8;
  long *plVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_108;
  
  func_0x000105645450();
  plVar3 = (long *)(unaff_x19 + 0x68);
  do {
    lVar2 = *plVar3;
    uVar1 = lVar2 == unaff_x19 + 0x60;
    if ((bool)uVar1) {
      func_0x00010564561c();
      func_0x00010564562c();
      func_0x000105645614();
      func_0x00010564560c();
      func_0x0001056454e8();
      func_0x000105645420();
      goto LAB_105644e34;
    }
    plVar3 = (long *)(lVar2 + 8);
  } while (*(long *)(lVar2 + 0x98) != 0);
  uVar1 = unaff_x19 + 0x60 == *plVar3;
  if (!(bool)uVar1) {
    func_0x0001056454ac();
  }
LAB_105644e34:
  func_0x000105645518();
  func_0x000105645528();
  if ((bool)uVar1) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x000105645560();
  func_0x000105645540();
  FUN_105644f04();
  lVar2 = extraout_x8;
  uStack_108 = param_1;
  FUN_105644f6c(extraout_x8,&uStack_108);
  return lVar2;
}



/* Entry: 105644e68; end: 105644ecb;  */

void FUN_105644e68(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  FUN_105644f04();
  uStack_28 = param_2;
  FUN_105644f6c(param_1,&uStack_28);
  return;
}



/* Entry: 105644ecc; end: 105644ecf;  */

undefined8 * FUN_105644ecc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 105644ed0; end: 105644ee3;  */

void FUN_105644ed0(void)

{
  func_0x00010054c360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105644ee4; end: 105644f03;  */

void FUN_105644ee4(void)

{
  long unaff_x19;
  
  func_0x000105645508();
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 105644f04; end: 105644f6b;  */

/* WARNING: Possible PIC construction at 0x000105644f2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105644f30) */

void FUN_105644f04(undefined8 param_1)

{
  int iVar1;
  
  func_0x0001005edd44(param_1,1);
  iVar1 = (int)param_1;
  func_0x000107c6132c();
  if (iVar1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 105644f6c; end: 10564501b;  */

void FUN_105644f6c(void)

{
  func_0x0001056454d0();
  func_0x0001056455e0();
  func_0x000105644f94();
  return;
}



/* Entry: 10564501c; end: 1056450db;  */

long FUN_10564501c(undefined8 param_1)

{
  undefined1 uVar1;
  long lVar2;
  long extraout_x8;
  long *plVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_108;
  
  func_0x000105645450();
  plVar3 = (long *)(unaff_x19 + 0x68);
  do {
    lVar2 = *plVar3;
    uVar1 = lVar2 == unaff_x19 + 0x60;
    if ((bool)uVar1) {
      func_0x00010564561c();
      func_0x00010564562c();
      func_0x000105645614();
      func_0x00010564560c();
      func_0x0001056454e8();
      func_0x000105645420();
      goto LAB_1056450a8;
    }
    plVar3 = (long *)(lVar2 + 8);
  } while (*(long *)(lVar2 + 0x98) != 0);
  uVar1 = unaff_x19 + 0x60 == *plVar3;
  if (!(bool)uVar1) {
    func_0x0001056454ac();
  }
LAB_1056450a8:
  func_0x000105645518();
  func_0x000105645528();
  if ((bool)uVar1) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x000105645560();
  func_0x000105645540();
  FUN_105644be4();
  lVar2 = extraout_x8;
  uStack_108 = param_1;
  func_0x000105645178(extraout_x8,&uStack_108);
  return lVar2;
}



/* Entry: 1056450dc; end: 10564513f;  */

void FUN_1056450dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  FUN_105644be4();
  uStack_28 = param_2;
  func_0x000105645178(param_1,&uStack_28);
  return;
}



/* Entry: 105645140; end: 105645143;  */

undefined8 * FUN_105645140(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 105645144; end: 105645157;  */

void FUN_105645144(void)

{
  func_0x00010054c360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105645158; end: 10564519f;  */

void FUN_105645158(void)

{
  long unaff_x19;
  
  func_0x000105645508();
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1056451a0; end: 1056451df;  */

void FUN_1056451a0(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x0001056454d0();
  *param_1 = extraout_x8;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  FUN_1056451e0();
  return;
}



/* Entry: 1056451e0; end: 1056453db;  */

void FUN_1056451e0(long param_1)

{
  long lVar1;
  long unaff_x19;
  long lStack_150;
  long lStack_148;
  undefined1 auStack_140 [24];
  long lStack_128;
  long lStack_120;
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [24];
  long lStack_a8;
  undefined1 auStack_a0 [24];
  undefined4 uStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x00010054c0ec();
  if ((param_1 != 0) && (func_0x00010054c3a4(), (int)param_1 != 0)) {
    func_0x000105645624();
    lVar1 = param_1;
    func_0x00010054c8f4();
    lStack_150 = lVar1;
    func_0x000105645648();
    lStack_148 = lVar1;
    func_0x000105645654(auStack_140);
    lVar1 = param_1;
    func_0x00010054c8f4(param_1,3);
    lStack_128 = lVar1;
    func_0x0001056455f0();
    func_0x00010054c8f4();
    lStack_120 = lVar1;
    func_0x0001005ecf0c(auStack_118,param_1,5);
    func_0x00010062258c(auStack_100,param_1,6);
    func_0x00010062258c(auStack_e0,param_1,7);
    func_0x0001005ecf0c(auStack_c0,param_1,8);
    lVar1 = param_1;
    func_0x00010054c8f4(param_1,9);
    lStack_a8 = lVar1;
    func_0x0001005ecf0c(auStack_a0,param_1,10);
    lVar1 = param_1;
    func_0x00010054c8f4(param_1,0xb);
    uStack_88 = (undefined4)lVar1;
    func_0x0001005ecf0c(auStack_80,param_1,0xc);
    func_0x0001005ecf0c(auStack_68,param_1,0xd);
    if (*(char *)(unaff_x19 + 0x108) == '\x01') {
      FUN_10563acc4(unaff_x19 + 8,&lStack_150);
    }
    else {
      FUN_10563ac84(unaff_x19 + 8,&lStack_150);
    }
    FUN_10563ae80(&lStack_150);
    return;
  }
  lVar1 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0x108) == '\x01') {
    FUN_10563ae80();
    *(undefined1 *)(lVar1 + 0x100) = 0;
  }
  return;
}



/* Entry: 1056453dc; end: 1056453f3;  */

void FUN_1056453dc(int param_1)

{
  func_0x0001005edd44();
  func_0x000107c6132c();
  if (param_1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 1056453f4; end: 10564541f;  */

void FUN_1056453f4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (*(char *)(param_3 + 3) != '\x01') {
    func_0x00010bccb8cc(param_1,param_2,&stack0xffffffffffffffef);
    return;
  }
  uVar1 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar2 = param_3;
  }
  func_0x00010054c7ec(param_1,param_2,puVar2,uVar1);
  iVar3 = (int)param_1;
  func_0x0001005ecddc();
  func_0x000107c61338();
  if (iVar3 != 0) {
    func_0x000107c3a514();
    func_0x000107c3a50c();
    func_0x000107c3a524();
    func_0x0001003a91d4(&UNK_10f82fa61);
    func_0x000107c3a51c();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 105645420; end: 105645693;  */

undefined1 * FUN_105645420(void)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined **ppuStack0000000000000018;
  long in_stack_000000a0;
  
  unaff_x20[1] = unaff_x21;
  unaff_x20[2] = unaff_x22;
  unaff_x20[0x13] = in_stack_000000a0;
  lVar1 = *(long *)(unaff_x19 + 0x60);
  *unaff_x20 = lVar1;
  *(long **)(lVar1 + 8) = unaff_x20;
  *(long **)(unaff_x19 + 0x60) = unaff_x20;
  *(long *)(unaff_x19 + 0x70) = *(long *)(unaff_x19 + 0x70) + 1;
  ppuStack0000000000000018 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(&stack0x00000070);
  func_0x000107c60d94(&stack0x00000030);
  return (undefined1 *)&stack0x00000018;
}



/* Entry: 105645694; end: 10564570b; -[SCNUploadCdnPopProviderCppProxy initWithCpp:] */

undefined1 * FUN_105645694(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e9770;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000105645ca8();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000105645c74(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10564570c; end: 105645793; -[SCNUploadCdnPopProviderCppProxy getLastCloudFrontPop] */

void FUN_10564570c(long param_1)

{
  undefined1 auStack_40 [32];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(auStack_40);
  func_0x0001006a7df8(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  FUN_105645c9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105645794; end: 10564581b; -[SCNUploadCdnPopProviderCppProxy getLastGooglePop] */

void FUN_105645794(long param_1)

{
  undefined1 auStack_40 [32];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(auStack_40);
  func_0x0001006a7df8(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  FUN_105645c9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10564581c; end: 105645917;  */

void FUN_10564581c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_1126bc710;
    _objc_opt_class(PTR_PTR_1126bc710);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_1108a31b0;
      uStack_40 = param_2;
      func_0x0001000de59c(&uStack_30,&ppuStack_38,&uStack_40,FUN_1056459b4);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      func_0x0001000df524(&uStack_30);
      _objc_release(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_105645c4c(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          func_0x000105645ca8();
        } while (extraout_w10 != 0);
      }
    }
  }
  _objc_release(param_2);
  return;
}



/* Entry: 105645918; end: 105645973; -[SCNUploadCdnPopProviderCppProxy .cxx_destruct] */

void FUN_105645918(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1108a3290;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x000105645c74((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 105645974; end: 1056459b3; -[SCNUploadCdnPopProviderCppProxy .cxx_construct] */

undefined8 * FUN_105645974(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000105645ca8();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 1056459b4; end: 105645aa7;  */

void FUN_1056459b4(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_1108a31f0;
  puVar1[3] = &PTR_DAT_1108a3270;
  puVar2 = puVar5;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  func_0x0001000de520();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      func_0x000105645ca8();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_1108a3240;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_105645c4c(&uStack_50);
  return;
}



/* Entry: 105645aa8; end: 105645aab;  */

void FUN_105645aa8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a31f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105645aac; end: 105645abf;  */

void FUN_105645aac(void)

{
  FUN_105645c3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105645ac0; end: 105645acb;  */

long FUN_105645ac0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1108a31b0;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 105645acc; end: 105645b07;  */

void FUN_105645acc(void)

{
  func_0x000105645ce8();
  return;
}



/* Entry: 105645b08; end: 105645b57;  */

void FUN_105645b08(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000105645cd0();
  func_0x00010bfc6c60(*(undefined8 *)(unaff_x20 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  func_0x000100114864();
  func_0x000105645cc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 105645b58; end: 105645ba7;  */

void FUN_105645b58(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000105645cd0();
  func_0x00010bfc6d00(*(undefined8 *)(unaff_x20 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  func_0x000100114864();
  func_0x000105645cc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 105645ba8; end: 105645c3b;  */

long FUN_105645ba8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1108a31b0;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 105645c3c; end: 105645c4b;  */

void FUN_105645c3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a31f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105645c4c; end: 105645c9b;  */

long FUN_105645c4c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 105645c9c; end: 105645cff;  */

void FUN_105645c9c(void)

{
  char in_stack_00000018;
  
  if (in_stack_00000018 == '\x01') {
    func_0x000107c60ca0();
  }
  return;
}



/* Entry: 105645d00; end: 105645d77; -[SCNUploadUploadLocationCallbackCppProxy initWithCpp:] */

undefined1 * FUN_105645d00(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e9778;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_105646358();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000105646330(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105645d78; end: 105645e0f; -[SCNUploadUploadLocationCallbackCppProxy onSuccess:] */

void FUN_105645d78(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_68 [56];
  
  func_0x000105646388();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  FUN_105646be4(auStack_68);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_68);
  func_0x000105646034(auStack_68);
  func_0x000105646368();
  return;
}



/* Entry: 105645e10; end: 105645ea7; -[SCNUploadUploadLocationCallbackCppProxy onError:] */

void FUN_105645e10(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_70 [64];
  
  func_0x000105646388();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x00010bcc1b7c(auStack_70);
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_70);
  FUN_1052a03ac(auStack_70);
  func_0x000105646368();
  return;
}



/* Entry: 105645ea8; end: 105645f97;  */

void FUN_105645ea8(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_1126bc718;
    _objc_opt_class(PTR_PTR_1126bc718);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_1108a32f8;
      uStack_40 = param_2;
      func_0x0001000de59c(&uStack_30,&ppuStack_38,&uStack_40,FUN_105646060);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      func_0x0001000df524(&uStack_30);
      _objc_release(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_105646308(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_105646358();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x000105646368();
  return;
}



/* Entry: 105645f98; end: 105645ff3; -[SCNUploadUploadLocationCallbackCppProxy .cxx_destruct] */

void FUN_105645f98(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1108a33d8;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x000105646330((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 105645ff4; end: 10564605f; -[SCNUploadUploadLocationCallbackCppProxy .cxx_construct] */

undefined8 * FUN_105645ff4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_105646358();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 105646060; end: 105646153;  */

void FUN_105646060(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_1108a3338;
  puVar1[3] = &PTR_DAT_1108a33b8;
  puVar2 = puVar5;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  func_0x0001000de520();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_105646358();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_1108a3388;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_105646308(&uStack_50);
  return;
}



/* Entry: 105646154; end: 105646157;  */

void FUN_105646154(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a3338;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105646158; end: 10564616b;  */

void FUN_105646158(void)

{
  FUN_1056462f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


