/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00496adc; end: 00496b23;  */

void FUN_00496adc(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00499b7c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00499c68();
    }
    func_0x00499f08();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00499bc4();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00496b24; end: 00496c8f;  */

void FUN_00496b24(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x00499980();
  if ((unaff_x22 & 1) != 0) {
    func_0x00499d74();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    func_0x00499ec4();
    if (!(bool)in_ZR) {
      if (unaff_w24 != 0) {
        param_1 = unaff_x21;
        func_0x004973e0();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (unaff_w24 == iVar1) {
        func_0x00499ab0();
        func_0x00499f50();
        FUN_00496f44();
        goto LAB_00496c74;
      }
      func_0x00499ca0();
      func_0x004996dc();
      break;
    case 2:
      if (unaff_w24 == iVar1) {
        func_0x00499ab0();
        func_0x00499e88();
        FUN_00496f8c();
        goto LAB_00496c74;
      }
      func_0x00499ca0();
      FUN_00499734();
      break;
    case 3:
      if (unaff_w24 == iVar1) {
        func_0x00499ab0();
        func_0x00499e88();
        func_0x00497050();
        goto LAB_00496c74;
      }
      func_0x00499ca0();
      FUN_00499784();
      break;
    case 4:
      if (unaff_w24 == iVar1) {
        func_0x00499ab0();
        func_0x00497114();
        goto LAB_00496c74;
      }
      func_0x00499ca0();
      FUN_004997d4();
      break;
    case 5:
      if (unaff_w24 == iVar1) {
        func_0x00499ab0();
        func_0x004973b0();
        goto LAB_00496c74;
      }
      func_0x00499ca0();
      FUN_0049982c();
      break;
    default:
      goto LAB_00496c74;
    }
    unaff_x21[2] = (ulong)param_1;
  }
LAB_00496c74:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004999e0();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00496c90; end: 00496cb7;  */

undefined8 FUN_00496c90(undefined8 param_1)

{
  func_0x00499bbc();
  func_0x00499f10();
  return param_1;
}



/* Entry: 00496cb8; end: 00496ccb;  */

void FUN_00496cb8(void)

{
  FUN_00496c90();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00496ccc; end: 00496cd7;  */

undefined ** FUN_00496ccc(void)

{
  return &PTR_DAT_009eb048;
}



/* Entry: 00496cd8; end: 00496d03;  */

void FUN_00496cd8(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00499cd8();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 00496d04; end: 00496d8b;  */

long * FUN_00496d04(long param_1,long param_2,long *param_3)

{
  long lVar1;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  long *plVar3;
  int iVar4;
  
  plVar3 = param_3;
  func_0x00499d80();
  func_0x00499c8c(*(undefined8 *)(param_1 + 0x10));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_00496d54;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_00496d54;
  func_0x00499c10();
  func_0x00499e5c();
  unaff_x19 = unaff_x22;
LAB_00496d54:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x19;
  }
  func_0x00499bf0();
  if ((long)plVar3 < 0) {
    lVar1 = *(long *)(extraout_x8 + 8);
    plVar3 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar1 = extraout_x8 + 8;
  }
  if (*param_3 - (long)unaff_x19 < (long)(int)plVar3) {
    while( true ) {
      iVar4 = ((int)*param_3 - (int)unaff_x19) + 0x10;
      iVar2 = (int)plVar3;
      plVar3 = (long *)(ulong)(uint)(iVar2 - iVar4);
      if (iVar2 - iVar4 == 0 || iVar2 < iVar4) break;
      func_0x0054f690();
      lVar1 = (long)unaff_x19 + (long)iVar4;
      unaff_x19 = param_3;
      func_0x0054ed58(param_3,lVar1);
    }
    func_0x0054f690();
    return (long *)((long)unaff_x19 + (long)iVar2);
  }
  _memcpy(unaff_x19,lVar1,(ulong)plVar3 & 0xffffffff);
  return (long *)((long)unaff_x19 + (long)(int)plVar3);
}



/* Entry: 00496d8c; end: 00496de3;  */

void FUN_00496d8c(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00499c44();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_0048910c();
    iVar1 = (int)param_1 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00499ff8();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 00496de4; end: 00496de7;  */

void FUN_00496de4(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00499b7c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00499c68();
    }
    func_0x00499f08();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00499bc4();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00496de8; end: 00496e0f;  */

undefined8 FUN_00496de8(undefined8 param_1)

{
  func_0x00499bbc();
  func_0x00499f10();
  return param_1;
}



/* Entry: 00496e10; end: 00496e13;  */

undefined8 FUN_00496e10(undefined8 param_1)

{
  func_0x00499bbc();
  func_0x00499f10();
  return param_1;
}



/* Entry: 00496e14; end: 00496e27;  */

void FUN_00496e14(void)

{
  FUN_00496de8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00496e28; end: 00496e33;  */

undefined ** FUN_00496e28(void)

{
  return &PTR_DAT_009eb088;
}



/* Entry: 00496e34; end: 00496e5f;  */

void FUN_00496e34(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00499cd8();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 00496e60; end: 00496ee7;  */

long * FUN_00496e60(long param_1,long param_2,long *param_3)

{
  long lVar1;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  long *plVar3;
  int iVar4;
  
  plVar3 = param_3;
  func_0x00499d80();
  func_0x00499c8c(*(undefined8 *)(param_1 + 0x10));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_00496eb0;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_00496eb0;
  func_0x00499c10();
  func_0x00499e5c();
  unaff_x19 = unaff_x22;
LAB_00496eb0:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x19;
  }
  func_0x00499bf0();
  if ((long)plVar3 < 0) {
    lVar1 = *(long *)(extraout_x8 + 8);
    plVar3 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar1 = extraout_x8 + 8;
  }
  if (*param_3 - (long)unaff_x19 < (long)(int)plVar3) {
    while( true ) {
      iVar4 = ((int)*param_3 - (int)unaff_x19) + 0x10;
      iVar2 = (int)plVar3;
      plVar3 = (long *)(ulong)(uint)(iVar2 - iVar4);
      if (iVar2 - iVar4 == 0 || iVar2 < iVar4) break;
      func_0x0054f690();
      lVar1 = (long)unaff_x19 + (long)iVar4;
      unaff_x19 = param_3;
      func_0x0054ed58(param_3,lVar1);
    }
    func_0x0054f690();
    return (long *)((long)unaff_x19 + (long)iVar2);
  }
  _memcpy(unaff_x19,lVar1,(ulong)plVar3 & 0xffffffff);
  return (long *)((long)unaff_x19 + (long)(int)plVar3);
}



/* Entry: 00496ee8; end: 00496f3f;  */

void FUN_00496ee8(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00499c44();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_0048910c();
    iVar1 = (int)param_1 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00499ff8();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 00496f40; end: 00496f43;  */

void FUN_00496f40(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00499b7c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00499c68();
    }
    func_0x00499f08();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00499bc4();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00496f44; end: 00496f8b;  */

void FUN_00496f44(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00499b7c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00499c68();
    }
    func_0x00499f08();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00499bc4();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00496f8c; end: 00496f97;  */

void FUN_00496f8c(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00496f98; end: 00496fbb;  */

undefined8 FUN_00496f98(undefined8 param_1)

{
  func_0x00499bbc();
  return param_1;
}



/* Entry: 00496fbc; end: 00496fbf;  */

undefined8 FUN_00496fbc(undefined8 param_1)

{
  func_0x00499bbc();
  return param_1;
}



/* Entry: 00496fc0; end: 00496fd3;  */

void FUN_00496fc0(void)

{
  FUN_00496f98();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00496fd4; end: 0049705b;  */

undefined ** FUN_00496fd4(void)

{
  return &PTR_DAT_009eb0e0;
}



/* Entry: 0049705c; end: 0049707f;  */

undefined8 FUN_0049705c(undefined8 param_1)

{
  func_0x00499bbc();
  return param_1;
}



/* Entry: 00497080; end: 00497083;  */

undefined8 FUN_00497080(undefined8 param_1)

{
  func_0x00499bbc();
  return param_1;
}



/* Entry: 00497084; end: 00497097;  */

void FUN_00497084(void)

{
  FUN_0049705c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00497098; end: 00497133;  */

undefined ** FUN_00497098(void)

{
  return &PTR_DAT_009eb128;
}



/* Entry: 00497134; end: 00497157;  */

undefined8 FUN_00497134(undefined8 param_1)

{
  func_0x00499bbc();
  return param_1;
}



/* Entry: 00497158; end: 0049715b;  */

undefined8 FUN_00497158(undefined8 param_1)

{
  func_0x00499bbc();
  return param_1;
}



/* Entry: 0049715c; end: 0049716f;  */

void FUN_0049715c(void)

{
  FUN_00497134();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00497170; end: 0049718f;  */

undefined ** FUN_00497170(void)

{
  return &PTR_DAT_009eb178;
}



/* Entry: 00497190; end: 00497217;  */

long * FUN_00497190(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00499a00();
  if ((int)param_1[2] != 0) {
    func_0x00499fc0();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00499bf0();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x0054f690();
      param_4 = unaff_x19;
      func_0x0054ed58();
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 00497218; end: 0049724b;  */

long FUN_00497218(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x0049a0ac();
  lVar1 = extraout_x8;
  if ((extraout_x9 & 1) != 0) {
    lVar1 = (long)*(char *)((extraout_x9 & 0xfffffffffffffffe) + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)((extraout_x9 & 0xfffffffffffffffe) + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 0049724c; end: 00497277;  */

long FUN_0049724c(long param_1)

{
  func_0x00499bbc();
  FUN_0048ed64(param_1 + 0x10);
  return param_1;
}



/* Entry: 00497278; end: 0049727b;  */

long FUN_00497278(long param_1)

{
  func_0x00499bbc();
  FUN_0048ed64(param_1 + 0x10);
  return param_1;
}



/* Entry: 0049727c; end: 0049728f;  */

void FUN_0049727c(void)

{
  FUN_0049724c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00497290; end: 004972af;  */

undefined ** FUN_00497290(void)

{
  return &PTR_DAT_009eb1c8;
}



/* Entry: 004972b0; end: 00497353;  */

long * FUN_004972b0(undefined1 *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int *piVar4;
  int iVar5;
  int *unaff_x22;
  int iVar6;
  
  func_0x00499a00();
  uVar1 = *(uint *)(param_1 + 0x20);
  piVar4 = (int *)(ulong)uVar1;
  if (0 < (int)uVar1) {
    func_0x00499b38();
    *param_1 = 10;
    while (0x7f < uVar1) {
      func_0x0049a044();
    }
    func_0x0049a030();
    do {
      func_0x00499b38();
      uVar3 = (ulong)*piVar4;
      param_4 = (long *)(param_1 + 1);
      while (0x7f < uVar3) {
        func_0x0049a01c();
        uVar3 = extraout_x8;
      }
      piVar4 = piVar4 + 1;
      *(char *)((long)param_4 + -1) = (char)uVar3;
    } while (piVar4 < unaff_x22);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00499bf0();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar2 = extraout_x8_00 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar5 = (int)param_3;
        uVar1 = iVar5 - iVar6;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar5 < iVar6) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar5);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 00497354; end: 004973ab;  */

void FUN_00497354(long param_1)

{
  int iVar1;
  int extraout_w8;
  long extraout_x8;
  long lVar2;
  long extraout_x9;
  
  lVar2 = param_1 + 0x10;
  FUN_0054de38();
  *(int *)(param_1 + 0x20) = (int)lVar2;
  func_0x00499f20((long)(int)lVar2);
  iVar1 = 0;
  if (lVar2 != 0) {
    iVar1 = extraout_w8 + 1;
  }
  iVar1 = iVar1 + (int)lVar2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00499ff8();
    lVar2 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(param_1 + 0x24) = iVar1;
  return;
}



/* Entry: 004973ac; end: 004973af;  */

void FUN_004973ac(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00499c18();
  func_0x00499f70();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00499bc4();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004973b0; end: 004974e7;  */

void FUN_004973b0(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00499c18();
  func_0x00499f70();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00499bc4();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004974e8; end: 0049751b;  */

long FUN_004974e8(long param_1)

{
  func_0x00499bbc();
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x004973e0(param_1);
  }
  return param_1;
}



/* Entry: 0049751c; end: 0049752f;  */

void FUN_0049751c(void)

{
  FUN_004974e8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00497530; end: 0049753b;  */

undefined ** FUN_00497530(void)

{
  return &PTR_DAT_009eb220;
}



/* Entry: 0049753c; end: 0049767b;  */

void FUN_0049753c(long param_1)

{
  ulong *puVar1;
  
  func_0x004973e0();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 0049767c; end: 0049767f;  */

void FUN_0049767c(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x00499980();
  if ((unaff_x22 & 1) != 0) {
    func_0x00499d74();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    func_0x00499ec4();
    if (!(bool)in_ZR) {
      if (unaff_w24 != 0) {
        param_1 = unaff_x21;
        func_0x004973e0();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (unaff_w24 == iVar1) {
        func_0x00499ab0();
        func_0x00499f50();
        FUN_00496f44();
        goto LAB_00496c74;
      }
      func_0x00499ca0();
      func_0x004996dc();
      break;
    case 2:
      if (unaff_w24 == iVar1) {
        func_0x00499ab0();
        func_0x00499e88();
        FUN_00496f8c();
        goto LAB_00496c74;
      }
      func_0x00499ca0();
      FUN_00499734();
      break;
    case 3:
      if (unaff_w24 == iVar1) {
        func_0x00499ab0();
        func_0x00499e88();
        func_0x00497050();
        goto LAB_00496c74;
      }
      func_0x00499ca0();
      FUN_00499784();
      break;
    case 4:
      if (unaff_w24 == iVar1) {
        func_0x00499ab0();
        func_0x00497114();
        goto LAB_00496c74;
      }
      func_0x00499ca0();
      FUN_004997d4();
      break;
    case 5:
      if (unaff_w24 == iVar1) {
        func_0x00499ab0();
        func_0x004973b0();
        goto LAB_00496c74;
      }
      func_0x00499ca0();
      FUN_0049982c();
      break;
    default:
      goto LAB_00496c74;
    }
    unaff_x21[2] = (ulong)param_1;
  }
LAB_00496c74:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004999e0();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00497680; end: 004976ff;  */

void FUN_00497680(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  if (*(int *)(param_1 + 0x24) == 3) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00499c38();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_004976dc;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_004978a8();
    }
  }
  else {
    if (*(int *)(param_1 + 0x24) != 2) goto LAB_004976dc;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00499c38();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_004976dc;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_0049795c();
    }
  }
  __ZdlPv();
LAB_004976dc:
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 00497700; end: 00497733;  */

long FUN_00497700(long param_1)

{
  func_0x00499bbc();
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00497680(param_1);
  }
  return param_1;
}



/* Entry: 00497734; end: 00497737;  */

long FUN_00497734(long param_1)

{
  func_0x00499bbc();
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00497680(param_1);
  }
  return param_1;
}



/* Entry: 00497738; end: 0049774b;  */

void FUN_00497738(void)

{
  FUN_00497700();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0049774c; end: 0049775f;  */

undefined8 FUN_0049774c(undefined8 param_1)

{
  func_0x00499bbc();
  return param_1;
}



/* Entry: 00497760; end: 004977fb;  */

long * FUN_00497760(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00499a00();
  if ((char)param_1[2] == '\x01') {
    func_0x00499b38();
    func_0x00499f9c();
    func_0x00499fb4();
    param_4 = param_1;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x24);
  plVar2 = (long *)(ulong)uVar1;
  if (uVar1 == 2) {
    lVar3 = 0x14;
  }
  else {
    if (uVar1 != 3) goto LAB_004977c8;
    lVar3 = 0x10;
  }
  param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + lVar3);
  func_0x00499b9c();
  param_4 = plVar2;
LAB_004977c8:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00499bf0();
  if ((long)param_3 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar5 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar4 = (int)param_3;
      uVar1 = iVar4 - iVar5;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar4 < iVar5) break;
      func_0x0054f690();
      param_4 = unaff_x19;
      func_0x0054ed58();
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar4);
  }
  _memcpy(param_4,lVar3,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 004977fc; end: 00497877;  */

long FUN_004977fc(long param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  
  lVar2 = (ulong)*(byte *)(param_1 + 0x10) * 2;
  if (*(int *)(param_1 + 0x24) == 3) {
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x0049792c();
  }
  else {
    if (*(int *)(param_1 + 0x24) != 2) goto LAB_0049784c;
    lVar1 = *(long *)(param_1 + 0x18);
    FUN_00497a08();
  }
  func_0x00499948();
  lVar2 = lVar1 + lVar2 + extraout_x8 + 1;
LAB_0049784c:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00499ff8();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(param_1 + 0x20) = (int)lVar2;
  return lVar2;
}



/* Entry: 00497878; end: 004978a7;  */

void FUN_00497878(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x00499980();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00499d74();
  }
  if (*(char *)(unaff_x20 + 0x10) == '\x01') {
    *(undefined1 *)(unaff_x21 + 2) = 1;
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 == 0) goto LAB_00493908;
  iVar2 = *(int *)((long)unaff_x21 + 0x24);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_00497680();
    }
    *(int *)((long)unaff_x21 + 0x24) = iVar1;
  }
  if (iVar1 == 3) {
    if (iVar2 == 3) {
      param_1 = (ulong *)unaff_x21[3];
      func_0x00499e88(*(undefined4 *)(unaff_x20 + 0x24));
      func_0x0049789c();
      goto LAB_00493908;
    }
    FUN_004998d4();
  }
  else {
    if (iVar1 != 2) goto LAB_00493908;
    if (iVar2 == 2) {
      param_1 = (ulong *)unaff_x21[3];
      func_0x00499edc(*(undefined4 *)(unaff_x20 + 0x24));
      FUN_00497878();
      goto LAB_00493908;
    }
    FUN_0049987c();
  }
  unaff_x21[3] = (ulong)unaff_x22;
  param_1 = unaff_x22;
LAB_00493908:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004999e0();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004978a8; end: 004978cb;  */

undefined8 FUN_004978a8(undefined8 param_1)

{
  func_0x00499bbc();
  return param_1;
}



/* Entry: 004978cc; end: 004978df;  */

void FUN_004978cc(void)

{
  FUN_004978a8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004978e0; end: 0049795b;  */

undefined ** FUN_004978e0(void)

{
  return &PTR_DAT_009eb2a8;
}



/* Entry: 0049795c; end: 0049797f;  */

undefined8 FUN_0049795c(undefined8 param_1)

{
  func_0x00499bbc();
  return param_1;
}



/* Entry: 00497980; end: 00497993;  */

void FUN_00497980(void)

{
  FUN_0049795c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00497994; end: 004979b3;  */

undefined ** FUN_00497994(void)

{
  return &PTR_DAT_009eb2e8;
}



/* Entry: 004979b4; end: 00497a07;  */

long * FUN_004979b4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00499a00();
  if ((int)param_1[2] != 0) {
    func_0x00499fc0();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00499bf0();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x0054f690();
      param_4 = unaff_x19;
      func_0x0054ed58();
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 00497a08; end: 00497a3b;  */

long FUN_00497a08(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x0049a0ac();
  lVar1 = extraout_x8;
  if ((extraout_x9 & 1) != 0) {
    lVar1 = (long)*(char *)((extraout_x9 & 0xfffffffffffffffe) + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)((extraout_x9 & 0xfffffffffffffffe) + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 00497a3c; end: 00497a5f;  */

undefined8 FUN_00497a3c(undefined8 param_1)

{
  func_0x00499bbc();
  return param_1;
}



/* Entry: 00497a60; end: 00497a63;  */

undefined8 FUN_00497a60(undefined8 param_1)

{
  func_0x00499bbc();
  return param_1;
}



/* Entry: 00497a64; end: 00497a77;  */

void FUN_00497a64(void)

{
  FUN_00497a3c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00497a78; end: 00497a83;  */

undefined ** FUN_00497a78(void)

{
  return &PTR_DAT_009eb330;
}



/* Entry: 00497a84; end: 00497aeb;  */

long * FUN_00497a84(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00499a00();
  if ((int)param_1[2] != 0) {
    func_0x00499b38();
    func_0x00499f9c();
    func_0x00499e00();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00499bf0();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x0054f690();
      param_4 = unaff_x19;
      func_0x0054ed58();
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 00497aec; end: 00497c87;  */

long FUN_00497aec(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 00497c88; end: 00497cb7;  */

long * FUN_00497c88(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0054cf94(param_1);
  }
  return param_1;
}



/* Entry: 00497cb8; end: 0049863b;  */

void FUN_00497cb8(long param_1)

{
  if (param_1 == 0) {
    func_0x00499c08();
  }
  else {
    func_0x00499ad8();
  }
  func_0x00499e70(&PTR_FUN_009e99f8);
  return;
}



/* Entry: 0049863c; end: 00498903;  */

void FUN_0049863c(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x00499de8();
  if (param_1 == 0) {
    __Znwm(0x40);
  }
  else {
    func_0x005510c4();
  }
  func_0x00499e50();
  func_0x00499e44(&PTR_FUN_009ea678);
  if ((extraout_x8 & 1) != 0) {
    func_0x004999b4();
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x21 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  lVar2 = unaff_x21 + 0x18;
  func_0x00499e18();
  *(long *)(unaff_x19 + 0x18) = lVar2;
  *(undefined4 *)(unaff_x19 + 0x38) = *(undefined4 *)(unaff_x21 + 0x38);
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    func_0x0049a088();
    func_0x004987a8();
  }
  *(long *)(unaff_x19 + 0x20) = lVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x20;
    func_0x00498874();
  }
  *(undefined8 *)(unaff_x19 + 0x28) = uVar3;
  if (*(int *)(unaff_x19 + 0x38) == 2) {
    FUN_00498954();
  }
  else {
    if (*(int *)(unaff_x19 + 0x38) != 1) {
      return;
    }
    FUN_00498904();
  }
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 00498904; end: 00498953;  */

long FUN_00498904(long param_1)

{
  func_0x00499d80();
  if (param_1 == 0) {
    func_0x00499c08();
  }
  else {
    func_0x00499ac0();
  }
  func_0x00499bac(&PTR_FUN_009e99f8);
  FUN_00492208();
  return param_1;
}



/* Entry: 00498954; end: 00498b0b;  */

qword * FUN_00498954(long param_1)

{
  uint uVar1;
  qword *pqVar2;
  long lVar3;
  qword *pqVar4;
  long unaff_x19;
  qword *unaff_x21;
  
  func_0x00499d80();
  if (param_1 == 0) {
    pqVar2 = &section_00000068.size;
    __Znwm();
  }
  else {
    pqVar2 = unaff_x21;
    func_0x005510c4();
  }
  pqVar2[1] = (qword)unaff_x21;
  *pqVar2 = (qword)&PTR_DAT_009ea628;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004999b4();
  }
  *(dword *)(pqVar2 + 2) = *(dword *)(unaff_x19 + 0x10);
  *(undefined8 *)((long)pqVar2 + 0x1c) = 0;
  *(undefined8 *)((long)pqVar2 + 0x14) = 0;
  *(dword *)((long)pqVar2 + 0x24) = 0;
  pqVar2[5] = (qword)unaff_x21;
  FUN_00493610(pqVar2 + 3,unaff_x19 + 0x18);
  lVar3 = unaff_x19 + 0x30;
  func_0x00487c6c();
  pqVar2[6] = lVar3;
  lVar3 = unaff_x19 + 0x38;
  func_0x00487c6c();
  pqVar2[7] = lVar3;
  uVar1 = *(uint *)(pqVar2 + 2);
  if ((uVar1 & 1) == 0) {
    pqVar4 = (qword *)0x0;
  }
  else {
    pqVar4 = unaff_x21;
    func_0x00498b0c();
  }
  pqVar2[8] = (qword)pqVar4;
  if ((uVar1 >> 1 & 1) == 0) {
    pqVar4 = (qword *)0x0;
  }
  else {
    pqVar4 = unaff_x21;
    func_0x00498cb0();
  }
  pqVar2[9] = (qword)pqVar4;
  if ((uVar1 >> 2 & 1) == 0) {
    pqVar4 = (qword *)0x0;
  }
  else {
    pqVar4 = unaff_x21;
    func_0x00498d14();
  }
  pqVar2[10] = (qword)pqVar4;
  if ((uVar1 >> 3 & 1) == 0) {
    pqVar4 = (qword *)0x0;
  }
  else {
    pqVar4 = unaff_x21;
    func_0x00498d88();
  }
  pqVar2[0xb] = (qword)pqVar4;
  if ((uVar1 >> 4 & 1) == 0) {
    pqVar4 = (qword *)0x0;
  }
  else {
    pqVar4 = unaff_x21;
    FUN_0048db2c();
  }
  pqVar2[0xc] = (qword)pqVar4;
  if ((uVar1 >> 5 & 1) == 0) {
    pqVar4 = (qword *)0x0;
  }
  else {
    pqVar4 = unaff_x21;
    FUN_0048db2c();
  }
  pqVar2[0xd] = (qword)pqVar4;
  if ((uVar1 >> 6 & 1) == 0) {
    pqVar4 = (qword *)0x0;
  }
  else {
    pqVar4 = unaff_x21;
    func_0x00498e2c();
  }
  pqVar2[0xe] = (qword)pqVar4;
  if ((uVar1 >> 7 & 1) == 0) {
    pqVar4 = (qword *)0x0;
  }
  else {
    pqVar4 = unaff_x21;
    FUN_00498eb8();
  }
  pqVar2[0xf] = (qword)pqVar4;
  if ((uVar1 >> 8 & 1) == 0) {
    unaff_x21 = (qword *)0x0;
  }
  else {
    FUN_00498f10();
  }
  pqVar2[0x10] = (qword)unaff_x21;
  pqVar2[0x11] = *(undefined8 *)(unaff_x19 + 0x88);
  return pqVar2;
}



/* Entry: 00498b0c; end: 00498eb7;  */

void FUN_00498b0c(long param_1)

{
  int extraout_w8;
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x00499de8();
  if (param_1 == 0) {
    func_0x00499be8();
  }
  else {
    func_0x00499bdc();
  }
  func_0x00499e50();
  func_0x00499e44(&PTR_FUN_009ea308);
  if ((extraout_x8 & 1) != 0) {
    func_0x004999b4();
  }
  func_0x00499d28();
  if (extraout_w8 == 2) {
    func_0x00499d8c();
    func_0x00499020();
  }
  else {
    if (extraout_w8 != 1) {
      return;
    }
    func_0x00499d8c();
    func_0x00498f80();
  }
  *(long *)(unaff_x19 + 0x10) = param_1;
  return;
}



/* Entry: 00498eb8; end: 00498f0f;  */

undefined8 * FUN_00498eb8(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x00499d80();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00499c08();
  }
  else {
    func_0x00499ac0();
  }
  *param_1 = &PTR_FUN_009e9c78;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  FUN_00493924();
  return param_1;
}



/* Entry: 00498f10; end: 00499357;  */

undefined8 * FUN_00498f10(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00499d64();
  }
  else {
    func_0x00499d6c();
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_009ea4e8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x004999b4();
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  FUN_00496880(puVar1 + 2,param_2 + 0x10);
  *(undefined4 *)(puVar1 + 5) = 0;
  return puVar1;
}



/* Entry: 00499358; end: 004993a7;  */

long FUN_00499358(long param_1)

{
  func_0x00499d80();
  if (param_1 == 0) {
    func_0x00499c08();
  }
  else {
    func_0x00499ac0();
  }
  func_0x00499bac(&PTR_FUN_009e9e58);
  FUN_0049591c();
  return param_1;
}



/* Entry: 004993a8; end: 004993f7;  */

long FUN_004993a8(long param_1)

{
  func_0x00499d80();
  if (param_1 == 0) {
    func_0x00499c08();
  }
  else {
    func_0x00499ac0();
  }
  func_0x00499bac(&PTR_FUN_009e9ea8);
  func_0x004959e4();
  return param_1;
}



/* Entry: 004993f8; end: 004994ff;  */

void FUN_004993f8(long param_1)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  func_0x00499c18();
  if (param_1 == 0) {
    func_0x00499be8();
  }
  else {
    func_0x004999d4();
  }
  func_0x00499d00();
  func_0x00499cf4(&PTR_FUN_009ea178);
  if ((extraout_x8 & 1) != 0) {
    func_0x004999b4();
  }
  func_0x00499db8();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00499df4();
  }
  func_0x0049a058();
  return;
}



/* Entry: 00499500; end: 0049954f;  */

long FUN_00499500(long param_1)

{
  func_0x00499d80();
  if (param_1 == 0) {
    func_0x00499c08();
  }
  else {
    func_0x00499ac0();
  }
  func_0x00499bac(&PTR_FUN_009e9db8);
  FUN_00495c48();
  return param_1;
}



/* Entry: 00499550; end: 00499733;  */

void FUN_00499550(long param_1)

{
  int extraout_w8;
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x00499de8();
  if (param_1 == 0) {
    func_0x00499be8();
  }
  else {
    func_0x00499bdc();
  }
  func_0x00499e50();
  func_0x00499e44(&PTR_FUN_009ea268);
  if ((extraout_x8 & 1) != 0) {
    func_0x004999b4();
  }
  func_0x00499d28();
  if (extraout_w8 == 3) {
    func_0x00499d8c();
    func_0x004994b0();
  }
  else if (extraout_w8 == 2) {
    func_0x00499d8c();
    func_0x00499454();
  }
  else {
    if (extraout_w8 != 1) {
      return;
    }
    func_0x00499d8c();
    FUN_004993f8();
  }
  *(long *)(unaff_x19 + 0x10) = param_1;
  return;
}



/* Entry: 00499734; end: 00499783;  */

long FUN_00499734(long param_1)

{
  func_0x00499d80();
  if (param_1 == 0) {
    func_0x00499c08();
  }
  else {
    func_0x00499ac0();
  }
  func_0x00499bac(&PTR_FUN_009e9b88);
  FUN_00496f8c();
  return param_1;
}



/* Entry: 00499784; end: 004997d3;  */

long FUN_00499784(long param_1)

{
  func_0x00499d80();
  if (param_1 == 0) {
    func_0x00499c08();
  }
  else {
    func_0x00499ac0();
  }
  func_0x00499bac(&PTR_FUN_009e9ae8);
  func_0x00497050();
  return param_1;
}



/* Entry: 004997d4; end: 0049982b;  */

undefined8 * FUN_004997d4(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x00499d80();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00499c08();
  }
  else {
    func_0x00499ac0();
  }
  *param_1 = &PTR_FUN_009e9a48;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  func_0x00497114();
  return param_1;
}



/* Entry: 0049982c; end: 0049987b;  */

void FUN_0049982c(long param_1)

{
  ulong extraout_x8;
  long unaff_x21;
  
  func_0x00499c18();
  if (param_1 == 0) {
    func_0x00499c98();
  }
  else {
    func_0x00499aa4();
  }
  func_0x00499d00();
  func_0x00499cf4(&PTR_FUN_009e9b38);
  if ((extraout_x8 & 1) != 0) {
    func_0x004999b4();
  }
  func_0x00499eb4();
  *(undefined8 *)(unaff_x21 + 0x20) = 0;
  return;
}



/* Entry: 0049987c; end: 004998d3;  */

undefined8 * FUN_0049987c(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x00499d80();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00499c08();
  }
  else {
    func_0x00499ac0();
  }
  *param_1 = &PTR_FUN_009e9d18;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  FUN_00497878();
  return param_1;
}



/* Entry: 004998d4; end: 00499923;  */

long FUN_004998d4(long param_1)

{
  func_0x00499d80();
  if (param_1 == 0) {
    func_0x00499c08();
  }
  else {
    func_0x00499ac0();
  }
  func_0x00499bac(&PTR_DAT_009e9bd8);
  func_0x0049789c();
  return param_1;
}



/* Entry: 00499924; end: 0049a0d3;  */

void FUN_00499924(void)

{
  return;
}



/* Entry: 0049a0d4; end: 0049a12b;  */

undefined8 * FUN_0049a0d4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_009eb878;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x0049ac80();
  }
  FUN_0049a9d0(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



/* Entry: 0049a12c; end: 0049a157;  */

long FUN_0049a12c(long param_1)

{
  func_0x0049ac68();
  FUN_0049a9fc(param_1 + 0x10);
  return param_1;
}



/* Entry: 0049a158; end: 0049a15b;  */

long FUN_0049a158(long param_1)

{
  func_0x0049ac68();
  FUN_0049a9fc(param_1 + 0x10);
  return param_1;
}



/* Entry: 0049a15c; end: 0049a16f;  */

void FUN_0049a15c(void)

{
  FUN_0049a12c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0049a170; end: 0049a17b;  */

undefined ** FUN_0049a170(void)

{
  return &PTR_DAT_009eb8b8;
}



/* Entry: 0049a17c; end: 0049a1bb;  */

void FUN_0049a17c(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    FUN_00437de0(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 0049a1bc; end: 0049a25f;  */

long * FUN_0049a1bc(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x0049ac70();
  lVar2 = param_1[3];
  for (iVar5 = 0; (int)lVar2 != iVar5; iVar5 = iVar5 + 1) {
    func_0x0049ac58();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  uVar4 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
  uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
  if ((long)uVar3 < 0) {
    lVar2 = *(long *)(uVar4 + 8);
    uVar3 = *(ulong *)(uVar4 + 0x10);
  }
  else {
    lVar2 = uVar4 + 8;
  }
  if ((long)(int)uVar3 <= *unaff_x19 - (long)param_4) {
    _memcpy(param_4,lVar2,uVar3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar3);
  }
  while( true ) {
    iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
    iVar5 = (int)uVar3;
    uVar1 = iVar5 - iVar6;
    uVar3 = (ulong)uVar1;
    if (uVar1 == 0 || iVar5 < iVar6) break;
    func_0x0054f690();
    param_4 = unaff_x19;
    func_0x0054ed58();
  }
  func_0x0054f690();
  return (long *)((long)param_4 + (long)iVar5);
}



/* Entry: 0049a260; end: 0049a2d7;  */

long FUN_0049a260(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar3 = (long)*(int *)(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    puVar1 = (ulong *)(uVar2 + 7);
  }
  for (lVar4 = lVar3 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    uVar2 = *puVar1;
    FUN_0049a2d8();
    lVar3 = uVar2 + lVar3;
    puVar1 = puVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 0049a2d8; end: 0049a2ef;  */

void FUN_0049a2d8(void)

{
  func_0x0049a538();
  FUN_0049ac14();
  return;
}



/* Entry: 0049a2f0; end: 0049a2f3;  */

void FUN_0049a2f0(long param_1,long param_2)

{
  FUN_0049a33c(param_1 + 0x10,param_2 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 0049a2f4; end: 0049a33b;  */

void FUN_0049a2f4(long param_1,long param_2)

{
  FUN_0049a33c(param_1 + 0x10,param_2 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 0049a33c; end: 0049a34b;  */

void FUN_0049a33c(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  FUN_0054d5a8();
  plVar2 = param_1;
  func_0x0054d67c();
  plVar3 = (long *)*unaff_x25;
  func_0x0054d6a8();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x0054d6b0();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x0054d694();
    param_1 = param_1 + 1;
  }
  func_0x0054d60c();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}


