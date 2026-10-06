/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1088f78cc; end: 1088f78f7;  */

undefined8 FUN_1088f78cc(undefined8 param_1)

{
  func_0x000107c348e0();
  FUN_1088f78f8(param_1);
  return param_1;
}



/* Entry: 1088f78f8; end: 1088f7927;  */

undefined8 FUN_1088f78f8(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  func_0x000107c34910(param_1 + 0x18);
  if (extraout_x8 != 0) {
    func_0x000107c348f4();
  }
  return unaff_x19;
}



/* Entry: 1088f7928; end: 1088f792b;  */

undefined8 FUN_1088f7928(undefined8 param_1)

{
  func_0x000107c348e0();
  FUN_1088f78f8(param_1);
  return param_1;
}



/* Entry: 1088f792c; end: 1088f793f;  */

void FUN_1088f792c(void)

{
  FUN_1088f78cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f7940; end: 1088f794b;  */

undefined ** FUN_1088f7940(void)

{
  return &PTR_DAT_110a8db78;
}



/* Entry: 1088f794c; end: 1088f7993;  */

void FUN_1088f794c(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088f86e0();
  if (in_NG == in_OV) {
    func_0x0001088f8744();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_1088bf358(*(undefined8 *)(unaff_x19 + 0x30));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1088f7994; end: 1088f7a83;  */

long * FUN_1088f7994(long *param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar3;
  int iVar4;
  
  func_0x0001088f8438();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0x30);
    func_0x0001088f8458();
    param_4 = param_1;
  }
  func_0x0001088f85a4();
  while (unaff_w22 != unaff_w21) {
    func_0x0001088f8364();
    param_3 = (ulong)*(uint *)(param_2 + 0x28);
    func_0x0001088f84e8(2);
    func_0x0001088f85f0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001088f8544();
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
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 1088f7a84; end: 1088f7a87;  */

void FUN_1088f7a84(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x0001088f84a4();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088f8670();
  }
  func_0x0001088f8714();
  FUN_1088f7af0();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x30);
    if (param_1 == (ulong *)0x0) {
      func_0x0001088f85e8();
      *(ulong **)(unaff_x21 + 0x30) = param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  func_0x0001088f8490();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f84c4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088f7a88; end: 1088f7aef;  */

void FUN_1088f7a88(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x0001088f84a4();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088f8670();
  }
  func_0x0001088f8714();
  FUN_1088f7af0();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x30);
    if (param_1 == (ulong *)0x0) {
      func_0x0001088f85e8();
      *(ulong **)(unaff_x21 + 0x30) = param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  func_0x0001088f8490();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f84c4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088f7af0; end: 1088f7aff;  */

void FUN_1088f7af0(long *param_1,long param_2)

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
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 1088f7b00; end: 1088f7b5b;  */

void FUN_1088f7b00(ulong *param_1,ulong *param_2)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x0001088f857c();
  FUN_1088f794c();
  func_0x0001088f863c();
  func_0x0001088f84a4();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088f8670();
  }
  func_0x0001088f8714();
  FUN_1088f7af0();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x30);
    if (param_1 == (ulong *)0x0) {
      func_0x0001088f85e8();
      *(ulong **)(unaff_x21 + 0x30) = param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  func_0x0001088f8490();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f84c4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088f7b5c; end: 1088f7b97;  */

long FUN_1088f7b5c(long param_1)

{
  func_0x000107c348e0();
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  return param_1;
}



/* Entry: 1088f7b98; end: 1088f7b9b;  */

long FUN_1088f7b98(long param_1)

{
  func_0x000107c348e0();
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  return param_1;
}



/* Entry: 1088f7b9c; end: 1088f7baf;  */

void FUN_1088f7b9c(void)

{
  FUN_1088f7b5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f7bb0; end: 1088f7bbb;  */

undefined ** FUN_1088f7bb0(void)

{
  return &PTR_DAT_110a8dbc8;
}



/* Entry: 1088f7bbc; end: 1088f7de3;  */

void FUN_1088f7bbc(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088f872c();
  func_0x000107c3025c();
  func_0x000107c3025c(unaff_x19 + 0x18);
  func_0x000107c3025c(unaff_x19 + 0x20);
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1088f7de4; end: 1088f7e43;  */

void FUN_1088f7de4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    func_0x000107c34918();
  }
  else {
    func_0x0001088f8668();
  }
  *puVar1 = &PTR_FUN_110a8d148;
  puVar1[1] = param_2;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  return;
}



/* Entry: 1088f7e44; end: 1088f7e63;  */

void FUN_1088f7e44(void)

{
  func_0x000107c348e8();
  FUN_1088f607c();
  return;
}



/* Entry: 1088f7e64; end: 1088f7e8b;  */

void FUN_1088f7e64(void)

{
  long extraout_x8;
  
  func_0x000107c34910();
  if (extraout_x8 != 0) {
    func_0x000107c348f4();
  }
  return;
}



/* Entry: 1088f7e8c; end: 1088f7eab;  */

void FUN_1088f7e8c(void)

{
  func_0x000107c348e8();
  FUN_1088f71b8();
  return;
}



/* Entry: 1088f7eac; end: 1088f7ed3;  */

void FUN_1088f7eac(void)

{
  long extraout_x8;
  
  func_0x000107c34910();
  if (extraout_x8 != 0) {
    func_0x000107c348f4();
  }
  return;
}



/* Entry: 1088f7ed4; end: 1088f7ef3;  */

void FUN_1088f7ed4(void)

{
  func_0x000107c348e8();
  FUN_1088f75c4();
  return;
}



/* Entry: 1088f7ef4; end: 1088f7f1b;  */

void FUN_1088f7ef4(void)

{
  long extraout_x8;
  
  func_0x000107c34910();
  if (extraout_x8 != 0) {
    func_0x000107c348f4();
  }
  return;
}



/* Entry: 1088f7f1c; end: 1088f7f3f;  */

void FUN_1088f7f1c(void)

{
  long *unaff_x19;
  
  func_0x000107c34940();
  FUN_1088f7ef4();
  if (*unaff_x19 != 0) {
    func_0x0001000681a0();
  }
  return;
}



/* Entry: 1088f7f40; end: 1088f7f67;  */

void FUN_1088f7f40(void)

{
  long extraout_x8;
  
  func_0x000107c34910();
  if (extraout_x8 != 0) {
    func_0x000107c348f4();
  }
  return;
}



/* Entry: 1088f7f68; end: 1088f80fb;  */

void FUN_1088f7f68(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x000107c34918();
  }
  else {
    func_0x0001088f8668();
  }
  *puVar1 = &PTR_FUN_110a8d148;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  return;
}



/* Entry: 1088f80fc; end: 1088f810f;  */

void FUN_1088f80fc(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1088f8110; end: 1088f814f;  */

undefined8 * FUN_1088f8110(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001088f857c();
  if (param_1 == 0) {
    puVar3 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar3 = unaff_x20;
    func_0x00010b4d80e0();
  }
  puVar3[1] = unaff_x20;
  *puVar3 = &PTR_FUN_110a80c00;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088b9280();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(puVar3 + 2) = uVar1;
  *(undefined4 *)((long)puVar3 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = unaff_x20;
    func_0x000107c2a26c();
  }
  puVar3[3] = puVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = unaff_x20;
    FUN_1088b9100();
  }
  puVar3[4] = puVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    unaff_x20 = (undefined8 *)0x0;
  }
  else {
    FUN_1088b9144();
  }
  puVar3[5] = unaff_x20;
  uVar4 = *(undefined8 *)(unaff_x19 + 0x30);
  *(undefined1 *)(puVar3 + 7) = *(undefined1 *)(unaff_x19 + 0x38);
  puVar3[6] = uVar4;
  return puVar3;
}



/* Entry: 1088f8150; end: 1088f81ab;  */

undefined8 * FUN_1088f8150(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x000107c34914();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000107c34918();
  }
  else {
    param_1 = unaff_x21;
    func_0x0001088f8668();
  }
  *param_1 = &PTR_FUN_110a8d1e8;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  FUN_1088f5560();
  return param_1;
}



/* Entry: 1088f81ac; end: 1088f820f;  */

undefined8 * FUN_1088f81ac(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x000107c34914();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000107c34920();
  }
  else {
    param_1 = unaff_x21;
    func_0x0001088f867c();
  }
  *param_1 = &PTR_DAT_110a8d0a8;
  param_1[1] = unaff_x21;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  func_0x0001088f557c();
  return param_1;
}



/* Entry: 1088f8210; end: 1088f82ab;  */

undefined8 * FUN_1088f8210(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001088f857c();
  if (param_1 == 0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = unaff_x20;
    func_0x00010b4d80e0();
  }
  puVar1[1] = unaff_x20;
  *puVar1 = &PTR_FUN_110a8d508;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088f84b8();
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(unaff_x19 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  lVar2 = unaff_x19 + 0x18;
  func_0x000107c2809c();
  puVar1[3] = lVar2;
  if ((*(byte *)(puVar1 + 2) & 1) == 0) {
    unaff_x20 = (undefined8 *)0x0;
  }
  else {
    func_0x0001088eea60();
  }
  puVar1[4] = unaff_x20;
  puVar1[5] = *(undefined8 *)(unaff_x19 + 0x28);
  return puVar1;
}



/* Entry: 1088f82ac; end: 1088f830b;  */

undefined8 * FUN_1088f82ac(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x000107c34914();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000107c34918();
  }
  else {
    param_1 = unaff_x21;
    func_0x0001088f8668();
  }
  *param_1 = &PTR_FUN_110a8d148;
  param_1[1] = unaff_x21;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_1088f564c();
  return param_1;
}



/* Entry: 1088f830c; end: 1088f834b;  */

long FUN_1088f830c(long param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088f857c();
  if (param_1 == 0) {
    __Znwm(0x38);
  }
  else {
    func_0x00010b4d80e0();
  }
  func_0x000107c348d8();
  func_0x000107c34930(&PTR_FUN_110a8d5a8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f84b8();
  }
  FUN_1088f7e8c(unaff_x19 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x28);
  return unaff_x19;
}



/* Entry: 1088f834c; end: 1088f87b7;  */

void FUN_1088f834c(void)

{
  return;
}



/* Entry: 1088f87b8; end: 1088f87e3;  */

undefined8 FUN_1088f87b8(undefined8 param_1)

{
  func_0x000108901ab8();
  FUN_1088f87e4(param_1);
  return param_1;
}



/* Entry: 1088f87e4; end: 1088f884b;  */

long FUN_1088f87e4(long param_1)

{
  func_0x000107c30258(param_1 + 0x48);
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x000107c2a2b4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x60) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_1088f72bc();
  }
  __ZdlPv();
  FUN_108900018(param_1 + 0x30);
  func_0x000107c296d8(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 1088f884c; end: 1088f884f;  */

undefined8 FUN_1088f884c(undefined8 param_1)

{
  func_0x000108901ab8();
  FUN_1088f87e4(param_1);
  return param_1;
}



/* Entry: 1088f8850; end: 1088f8863;  */

void FUN_1088f8850(void)

{
  FUN_1088f87b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f8864; end: 1088f886f;  */

undefined ** FUN_1088f8864(void)

{
  return &PTR_DAT_110a8ec38;
}



/* Entry: 1088f8870; end: 1088f890f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1088f8870(void)

{
  uint uVar1;
  long unaff_x19;
  ulong *puVar2;
  
  func_0x000108901c14();
  if (0 < *(int *)(unaff_x19 + 0x38)) {
    func_0x0001053936e4(unaff_x19 + 0x30);
  }
  func_0x000107c3025c(unaff_x19 + 0x48);
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(unaff_x19 + 0x50));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1088bc2e4(*(undefined8 *)(unaff_x19 + 0x58));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(unaff_x19 + 0x60));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_1088f7334(*(undefined8 *)(unaff_x19 + 0x68));
    }
  }
  puVar2 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x78) = 0;
  *(undefined8 *)(unaff_x19 + 0x70) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 1088f8910; end: 1088f8acf;  */

long * FUN_1088f8910(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long unaff_x20;
  long *unaff_x21;
  int iVar5;
  long *plVar6;
  int iVar7;
  
  plVar4 = param_3;
  func_0x000108901fd8();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x50);
    plVar4 = (long *)(ulong)*(uint *)(param_2 + 3);
    param_1 = (long *)0x1;
    func_0x000108901a90();
    unaff_x21 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x70) != 0) {
    func_0x000108901f60();
    param_2 = param_1;
    func_0x000108901bb4();
    func_0x0001089019c4();
    unaff_x21 = param_1;
  }
  iVar5 = *(int *)(unaff_x20 + 0x20);
  for (plVar6 = (long *)0x0; iVar5 != (int)plVar6; plVar6 = (long *)(ulong)((int)plVar6 + 1)) {
    func_0x000108901df0();
    param_1 = (long *)0x3;
    func_0x000108901a90();
    unaff_x21 = param_1;
  }
  func_0x000108901fa0(*(undefined8 *)(unaff_x20 + 0x48));
  if ((long)param_2 < 0) {
    if (plVar6[1] == 0) goto LAB_1088f89e0;
    plVar2 = (long *)*plVar6;
  }
  else {
    plVar2 = plVar6;
    if ((int)param_2 == 0) goto LAB_1088f89e0;
  }
  func_0x000108901ea4(plVar2);
  param_1 = param_3;
  func_0x000107c280a0(param_3,4,plVar6,unaff_x21);
  plVar4 = plVar6;
  unaff_x21 = param_1;
LAB_1088f89e0:
  if ((uVar1 >> 1 & 1) != 0) {
    plVar4 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x58) + 0x18);
    param_1 = (long *)0x5;
    func_0x000108901a90();
    unaff_x21 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x78) != 0) {
    func_0x000108901f60();
    unaff_x21 = (long *)0x30;
    func_0x000107c280a8(0x30,param_1);
    func_0x0001089019d0();
  }
  if ((uVar1 >> 2 & 1) != 0) {
    plVar4 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x60) + 0x18);
    unaff_x21 = (long *)0x7;
    func_0x000108901a90();
  }
  iVar7 = *(int *)(unaff_x20 + 0x38);
  for (iVar5 = 0; iVar7 != iVar5; iVar5 = iVar5 + 1) {
    func_0x000108901df0();
    unaff_x21 = (long *)0xa;
    func_0x000108901a90();
  }
  if ((uVar1 >> 3 & 1) != 0) {
    plVar4 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x68) + 0x54);
    unaff_x21 = (long *)0xb;
    func_0x000108901a90();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x000108901ae0();
  if ((long)plVar4 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if (*param_3 - (long)unaff_x21 < (long)(int)plVar4) {
    while( true ) {
      iVar7 = ((int)*param_3 - (int)unaff_x21) + 0x10;
      iVar5 = (int)plVar4;
      plVar4 = (long *)(ulong)(uint)(iVar5 - iVar7);
      if (iVar5 - iVar7 == 0 || iVar5 < iVar7) break;
      func_0x00010b4d5738();
      lVar3 = (long)unaff_x21 + (long)iVar7;
      unaff_x21 = param_3;
      func_0x000107c303e4(param_3,lVar3);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x21 + (long)iVar5);
  }
  _memcpy(unaff_x21,lVar3,(ulong)plVar4 & 0xffffffff);
  return (long *)((long)unaff_x21 + (long)(int)plVar4);
}



/* Entry: 1088f8ad0; end: 1088f8d0f;  */

/* WARNING: Removing unreachable block (ram,0x0001088f8b04) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1088f8ad0(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x22;
  
  func_0x0001089017b8();
  while (unaff_x22 != 0) {
    func_0x000108901e94();
    func_0x000108901cb8();
  }
  func_0x000108901968();
  uVar2 = *(ulong *)(unaff_x19 + 0x48) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x000108901b54();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000107c2a268(*(undefined8 *)(unaff_x19 + 0x50));
      func_0x000108901b54();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1088e5e54(*(undefined8 *)(unaff_x19 + 0x58));
      func_0x000108901b54();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x000107c2a268(*(undefined8 *)(unaff_x19 + 0x60));
      func_0x000108901b54();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_1088f719c(*(undefined8 *)(unaff_x19 + 0x68));
      func_0x000108901b54();
    }
  }
  if (*(long *)(unaff_x19 + 0x70) != 0) {
    func_0x000108901f0c(0xfffffff7);
  }
  if (*(int *)(unaff_x19 + 0x78) != 0) {
    func_0x000108901e78();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108901f00();
  }
  func_0x000108901c80();
  return;
}



/* Entry: 1088f8d10; end: 1088f8d6f;  */

void FUN_1088f8d10(void)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x000108901ff0();
  func_0x000108901ec4(&PTR_FUN_110a8eba8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089018b4();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    FUN_108900598();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = unaff_x21;
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x20 + 0x20);
  return;
}



/* Entry: 1088f8d70; end: 1088f8d9b;  */

undefined8 FUN_1088f8d70(undefined8 param_1)

{
  func_0x000108901ab8();
  FUN_1088f8d9c(param_1);
  return param_1;
}



/* Entry: 1088f8d9c; end: 1088f8db7;  */

void FUN_1088f8d9c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088f9078();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f8db8; end: 1088f8dbb;  */

undefined8 FUN_1088f8db8(undefined8 param_1)

{
  func_0x000108901ab8();
  FUN_1088f8d9c(param_1);
  return param_1;
}



/* Entry: 1088f8dbc; end: 1088f8dcf;  */

void FUN_1088f8dbc(void)

{
  FUN_1088f8d70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f8dd0; end: 1088f8ddb;  */

undefined ** FUN_1088f8dd0(void)

{
  return &PTR_DAT_110a8ec88;
}



/* Entry: 1088f8ddc; end: 1088f8e77;  */

void FUN_1088f8ddc(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x000108901b10();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f8e14(unaff_x19[3]);
  }
  func_0x000108901d34();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 1088f8e78; end: 1088f8ef7;  */

long * FUN_1088f8e78(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001089018e8();
  if (param_1[4] != 0) {
    func_0x0001089018c0();
    func_0x000108901cb0();
    func_0x0001089019c4();
    param_4 = param_1;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x14);
    func_0x0001089019ac();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108901ae0();
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
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 1088f8ef8; end: 1088f8f57;  */

void FUN_1088f8ef8(void)

{
  int iVar1;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x000108901b10();
  if ((extraout_x8 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x18);
    FUN_1088f921c();
    func_0x0001089017ec();
    func_0x000108901eac();
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x000108901a0c();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108901f00();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 1088f8f58; end: 1088f8fbf;  */

void FUN_1088f8f58(ulong *param_1)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010890184c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108901c50();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108901c44();
    if (extraout_x8 == (ulong *)0x0) {
      FUN_108900598();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      FUN_1088f8fc0();
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  func_0x000108901874();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089018f8();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088f8fc0; end: 1088f9077;  */

void FUN_1088f8fc0(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x000108901838();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108901bd4();
  }
  func_0x000108901f3c();
  func_0x000108901f88();
  func_0x0001088f930c();
  func_0x000108901d50();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x48);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_1088f0114();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_1088b981c();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000108902024();
      if (param_1 == (ulong *)0x0) {
        FUN_108900670();
        *(ulong **)(unaff_x21 + 0x50) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_1088f5078();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x58) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x58) = 1;
  }
  if (*(char *)(unaff_x20 + 0x59) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x59) = 1;
  }
  func_0x000108901860();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001089018f8();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088f9078; end: 1088f90a3;  */

undefined8 FUN_1088f9078(undefined8 param_1)

{
  func_0x000108901ab8();
  FUN_1088f90a4(param_1);
  return param_1;
}



/* Entry: 1088f90a4; end: 1088f90e3;  */

long FUN_1088f90a4(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_1088b93c4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x000107c2a3a8();
  }
  __ZdlPv();
  FUN_108900108(param_1 + 0x30);
  FUN_1089000b0(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 1088f90e4; end: 1088f90e7;  */

undefined8 FUN_1088f90e4(undefined8 param_1)

{
  func_0x000108901ab8();
  FUN_1088f90a4(param_1);
  return param_1;
}



/* Entry: 1088f90e8; end: 1088f90fb;  */

void FUN_1088f90e8(void)

{
  FUN_1088f9078();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f90fc; end: 1088f9107;  */

undefined ** FUN_1088f90fc(void)

{
  return &PTR_DAT_110a8ecd8;
}



/* Entry: 1088f9108; end: 1088f921b;  */

long * FUN_1088f9108(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar3;
  int iVar4;
  
  func_0x0001089018e8();
  if ((char)param_1[0xb] == '\x01') {
    func_0x0001089018c0();
    unaff_w21 = (uint)*(byte *)(unaff_x20 + 0x58);
    param_2 = param_1;
    func_0x000108901cb0();
    func_0x0001089019dc();
    param_4 = param_1;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x48);
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    func_0x0001089019ac();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x59) == '\x01') {
    func_0x0001089018c0();
    unaff_w21 = (uint)*(byte *)(unaff_x20 + 0x59);
    param_2 = param_1;
    func_0x000108901dbc();
    func_0x0001089019dc();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x50);
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    param_4 = (long *)0x4;
    func_0x000108901aa8();
  }
  func_0x000108901ce8();
  while (uVar1 != unaff_w21) {
    func_0x000108901898();
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    func_0x000108901aa8(5);
    func_0x000108901eb8();
  }
  iVar3 = *(int *)(unaff_x20 + 0x38);
  while (iVar3 != 0) {
    func_0x000108901898();
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    func_0x000108901aa8(6);
    func_0x000108901eb8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108901ae0();
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
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 1088f921c; end: 1088f92bf;  */

/* WARNING: Removing unreachable block (ram,0x0001088f924c) */

void FUN_1088f921c(void)

{
  uint uVar1;
  int iVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  long unaff_x19;
  int unaff_w20;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x0001089017b8();
  while (unaff_x22 != 0) {
    FUN_1088f34c8(*unaff_x21);
    func_0x000108901cb8();
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x000108901968();
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001088efe1c(*(undefined8 *)(unaff_x19 + 0x48));
      func_0x000108901b54();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0001088f92dc(*(undefined8 *)(unaff_x19 + 0x50));
      func_0x000108901b54();
    }
  }
  iVar2 = unaff_w20 + (uint)*(byte *)(unaff_x19 + 0x58) * 2 + (uint)*(byte *)(unaff_x19 + 0x59) * 2;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108901f00();
    lVar3 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(unaff_x19 + 0x14) = iVar2;
  return;
}



/* Entry: 1088f92c0; end: 1088f92f7;  */

long FUN_1088f92c0(long param_1)

{
  long extraout_x8;
  
  FUN_1088ff538();
  func_0x0001089017ec();
  return param_1 + extraout_x8;
}



/* Entry: 1088f92f8; end: 1088f931b;  */

void FUN_1088f92f8(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x000108901838();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108901bd4();
  }
  func_0x000108901f3c();
  func_0x000108901f88();
  func_0x0001088f930c();
  func_0x000108901d50();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x48);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_1088f0114();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_1088b981c();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000108902024();
      if (param_1 == (ulong *)0x0) {
        FUN_108900670();
        *(ulong **)(unaff_x21 + 0x50) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_1088f5078();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x58) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x58) = 1;
  }
  if (*(char *)(unaff_x20 + 0x59) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x59) = 1;
  }
  func_0x000108901860();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001089018f8();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088f931c; end: 1088f938f;  */

void FUN_1088f931c(void)

{
  uint uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x000108901b60();
  func_0x000108901ec4(&PTR_FUN_110a8eb08);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089018b4();
  }
  uVar1 = *(uint *)(unaff_x21 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x20;
    FUN_108900670();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x0001088f38e0();
  }
  *(undefined8 *)(unaff_x19 + 0x20) = unaff_x20;
  return;
}



/* Entry: 1088f9390; end: 1088f93bb;  */

undefined8 FUN_1088f9390(undefined8 param_1)

{
  func_0x000108901ab8();
  FUN_1088f93bc(param_1);
  return param_1;
}



/* Entry: 1088f93bc; end: 1088f93f3;  */

void FUN_1088f93bc(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a3a8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c2a5a4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f93f4; end: 1088f93f7;  */

undefined8 FUN_1088f93f4(undefined8 param_1)

{
  func_0x000108901ab8();
  FUN_1088f93bc(param_1);
  return param_1;
}



/* Entry: 1088f93f8; end: 1088f940b;  */

void FUN_1088f93f8(void)

{
  FUN_1088f9390();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f940c; end: 1088f9417;  */

undefined ** FUN_1088f940c(void)

{
  return &PTR_DAT_110a8ed28;
}



/* Entry: 1088f9418; end: 1088f945f;  */

void FUN_1088f9418(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x000108901b44();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x000107c2a3ac(unaff_x19[3]);
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x000107c2a5a8(unaff_x19[4]);
    }
  }
  func_0x000108901bbc();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 1088f9460; end: 1088f9547;  */

long * FUN_1088f9460(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001089018e8();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x14);
    func_0x0001089018cc();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x14);
    func_0x0001089019ac();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108901ae0();
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
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 1088f9548; end: 1088f954b;  */

void FUN_1088f9548(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x000108901838();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108901bd4();
  }
  func_0x000108901d50();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x000108901cdc();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_108900670();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_1088f5078();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000108901d5c();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088f38e0();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10891988c();
      }
    }
  }
  func_0x000108901860();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001089018f8();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088f954c; end: 1088f95d3;  */

void FUN_1088f954c(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x000108901838();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108901bd4();
  }
  func_0x000108901d50();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x000108901cdc();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_108900670();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_1088f5078();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000108901d5c();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088f38e0();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10891988c();
      }
    }
  }
  func_0x000108901860();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001089018f8();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088f95d4; end: 1088f9603;  */

void FUN_1088f95d4(ulong *param_1,ulong *param_2)

{
  undefined1 uVar1;
  ulong extraout_x8;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  uVar1 = param_2 == param_1;
  if ((bool)uVar1) {
    return;
  }
  func_0x000108901b74();
  FUN_1088f9418();
  func_0x000108901e6c();
  func_0x000108901838();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108901bd4();
  }
  func_0x000108901d50();
  if (!(bool)uVar1) {
    if ((unaff_w23 & 1) != 0) {
      func_0x000108901cdc();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_108900670();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_1088f5078();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000108901d5c();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088f38e0();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10891988c();
      }
    }
  }
  func_0x000108901860();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001089018f8();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088f9604; end: 1088f9613;  */

undefined1  [16] FUN_1088f9604(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  func_0x000108901930();
  puVar1 = param_1 + 0x10;
  puVar3 = param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    uVar2 = *param_1;
    *param_1 = *puVar3;
    *puVar3 = uVar2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 1088f9614; end: 1088f9ab7;  */

void FUN_1088f9614(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  ulong extraout_x8_09;
  ulong extraout_x8_10;
  ulong extraout_x8_11;
  ulong extraout_x8_12;
  ulong extraout_x8_13;
  ulong extraout_x8_14;
  ulong extraout_x8_15;
  ulong extraout_x8_16;
  ulong extraout_x8_17;
  ulong extraout_x8_18;
  ulong extraout_x8_19;
  ulong extraout_x8_20;
  ulong extraout_x8_21;
  ulong extraout_x8_22;
  ulong extraout_x8_23;
  ulong extraout_x8_24;
  ulong extraout_x8_25;
  ulong extraout_x8_26;
  
  switch(*(undefined4 *)(param_1 + 0x48)) {
  case 4:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_12;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fd300();
    }
    break;
  case 5:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_11;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fe738();
    }
    break;
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_17;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088febc0();
    }
    break;
  case 7:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_09;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fdf5c();
    }
    break;
  case 8:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_10;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fefe0();
    }
    break;
  default:
    goto LAB_1088f995c;
  case 10:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_19;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fd568();
    }
    break;
  case 0xb:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_07;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fd82c();
    }
    break;
  case 0xc:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_08;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fdb64();
    }
    break;
  case 0xd:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_15;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fde34();
    }
    break;
  case 0xf:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_14;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fe15c();
    }
    break;
  case 0x10:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_21;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fbd08();
    }
    break;
  case 0x11:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_108928910();
    }
    break;
  case 0x12:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fed3c();
    }
    break;
  case 0x13:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_23;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fb94c();
    }
    break;
  case 0x14:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_16;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fb7fc();
    }
    break;
  case 0x15:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_18;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fb6a0();
    }
    break;
  case 0x16:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_22;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088ff2c0();
    }
    break;
  case 0x18:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_20;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fba74();
    }
    break;
  case 0x19:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fb578();
    }
    break;
  case 0x1a:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_06;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fbc54();
    }
    break;
  case 0x1c:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_24;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fb450();
    }
    break;
  case 0x1d:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fb2e8();
    }
    break;
  case 0x1e:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_05;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fb39c();
    }
    break;
  case 0x1f:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088ff6e8();
    }
    break;
  case 0x20:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_13;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fd97c();
    }
    break;
  case 0x21:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fda5c();
    }
    break;
  case 0x22:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_26;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fbb64();
    }
    break;
  case 0x23:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_25;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fdccc();
    }
  }
  __ZdlPv();
LAB_1088f995c:
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 1088f9ab8; end: 1088f9cb3;  */

void FUN_1088f9ab8(undefined8 param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000108901b60();
  func_0x000108901ec4(&PTR_FUN_110a8ea18);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089018b4();
  }
  uVar1 = *(uint *)(unaff_x21 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  *(undefined4 *)(unaff_x19 + 0x48) = *(undefined4 *)(unaff_x21 + 0x48);
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108901b8c();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  if ((uVar1 >> 1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108901b8c();
  }
  *(undefined8 *)(unaff_x19 + 0x20) = param_1;
  uVar3 = *(undefined8 *)(unaff_x21 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x21 + 0x28);
  *(undefined1 *)(unaff_x19 + 0x38) = *(undefined1 *)(unaff_x21 + 0x38);
  *(undefined8 *)(unaff_x19 + 0x30) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x28) = uVar2;
  switch(*(undefined4 *)(unaff_x19 + 0x48)) {
  case 4:
    func_0x000108901b04();
    FUN_1089006ac();
    break;
  case 5:
    func_0x000108901b04();
    FUN_10890072c();
    break;
  case 6:
    func_0x000108901b04();
    func_0x0001089007e0();
    break;
  case 7:
    func_0x000108901b04();
    func_0x00010890085c();
    break;
  case 8:
    func_0x000108901b04();
    func_0x0001089008e8();
    break;
  default:
    goto code_r0x0001004a6814;
  case 10:
    func_0x000108901b04();
    func_0x000108900984();
    break;
  case 0xb:
    func_0x000108901b04();
    func_0x000108900a20();
    break;
  case 0xc:
    func_0x000108901b04();
    func_0x000108900a7c();
    break;
  case 0xd:
    func_0x000108901b04();
    func_0x000108900ae8();
    break;
  case 0xf:
    func_0x000108901b04();
    func_0x000108900b44();
    break;
  case 0x10:
    func_0x000108901b04();
    func_0x000108900bcc();
    break;
  case 0x11:
    func_0x000108901b04();
    FUN_108900c28();
    break;
  case 0x12:
    func_0x000108901b04();
    func_0x000108900c60();
    break;
  case 0x13:
    func_0x000108901b04();
    func_0x000108900cdc();
    break;
  case 0x14:
    func_0x000108901b04();
    func_0x000108900d38();
    break;
  case 0x15:
    func_0x000108901b04();
    func_0x000108900d94();
    break;
  case 0x16:
    func_0x000108901b04();
    FUN_108900df0();
    break;
  case 0x18:
    func_0x000108901b04();
    FUN_108900e48();
    break;
  case 0x19:
    func_0x000108901b04();
    FUN_108900ea4();
    break;
  case 0x1a:
    func_0x000108901b04();
    FUN_108900f00();
    break;
  case 0x1c:
    func_0x000108901b04();
    FUN_108900f50();
    break;
  case 0x1d:
    func_0x000108901b04();
    FUN_108900fac();
    break;
  case 0x1e:
    func_0x000108901b04();
    FUN_108900ffc();
    break;
  case 0x1f:
    func_0x000108901b04();
    FUN_10890104c();
    break;
  case 0x20:
    func_0x000108901b04();
    FUN_1089010f8();
    break;
  case 0x21:
    func_0x000108901b04();
    FUN_108901158();
    break;
  case 0x22:
    func_0x000108901b04();
    FUN_1089011b0();
    break;
  case 0x23:
    func_0x000108901b04();
    FUN_10890120c();
  }
  *(undefined8 *)(unaff_x19 + 0x40) = param_1;
code_r0x0001004a6814:
  return;
}



/* Entry: 1088f9cb4; end: 1088f9cdf;  */

undefined8 FUN_1088f9cb4(undefined8 param_1)

{
  func_0x000108901ab8();
  FUN_1088f9ce0(param_1);
  return param_1;
}



/* Entry: 1088f9ce0; end: 1088f9d2f;  */

void FUN_1088f9ce0(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  ulong extraout_x8_09;
  ulong extraout_x8_10;
  ulong extraout_x8_11;
  ulong extraout_x8_12;
  ulong extraout_x8_13;
  ulong extraout_x8_14;
  ulong extraout_x8_15;
  ulong extraout_x8_16;
  ulong extraout_x8_17;
  ulong extraout_x8_18;
  ulong extraout_x8_19;
  ulong extraout_x8_20;
  ulong extraout_x8_21;
  ulong extraout_x8_22;
  ulong extraout_x8_23;
  ulong extraout_x8_24;
  ulong extraout_x8_25;
  ulong extraout_x8_26;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x48) == 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x48)) {
  case 4:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_12;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fd300();
    }
    break;
  case 5:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_11;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fe738();
    }
    break;
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_17;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088febc0();
    }
    break;
  case 7:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_09;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fdf5c();
    }
    break;
  case 8:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_10;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fefe0();
    }
    break;
  default:
    goto LAB_1088f995c;
  case 10:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_19;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fd568();
    }
    break;
  case 0xb:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_07;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fd82c();
    }
    break;
  case 0xc:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_08;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fdb64();
    }
    break;
  case 0xd:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_15;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fde34();
    }
    break;
  case 0xf:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_14;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fe15c();
    }
    break;
  case 0x10:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_21;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fbd08();
    }
    break;
  case 0x11:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_108928910();
    }
    break;
  case 0x12:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fed3c();
    }
    break;
  case 0x13:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_23;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fb94c();
    }
    break;
  case 0x14:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_16;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fb7fc();
    }
    break;
  case 0x15:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_18;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fb6a0();
    }
    break;
  case 0x16:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_22;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088ff2c0();
    }
    break;
  case 0x18:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_20;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fba74();
    }
    break;
  case 0x19:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fb578();
    }
    break;
  case 0x1a:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_06;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fbc54();
    }
    break;
  case 0x1c:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_24;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fb450();
    }
    break;
  case 0x1d:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fb2e8();
    }
    break;
  case 0x1e:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_05;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fb39c();
    }
    break;
  case 0x1f:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088ff6e8();
    }
    break;
  case 0x20:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_13;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fd97c();
    }
    break;
  case 0x21:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fda5c();
    }
    break;
  case 0x22:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_26;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fbb64();
    }
    break;
  case 0x23:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_25;
    }
    if (uVar1 != 0) goto LAB_1088f995c;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1088fdccc();
    }
  }
  __ZdlPv();
LAB_1088f995c:
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 1088f9d30; end: 1088f9d33;  */

undefined8 FUN_1088f9d30(undefined8 param_1)

{
  func_0x000108901ab8();
  FUN_1088f9ce0(param_1);
  return param_1;
}



/* Entry: 1088f9d34; end: 1088f9d47;  */

void FUN_1088f9d34(void)

{
  FUN_1088f9cb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f9d48; end: 1088f9dbf;  */

long FUN_1088f9d48(long param_1)

{
  func_0x000108901ab8();
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088f9dc0; end: 1088f9e0f;  */

void FUN_1088f9dc0(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x000108901b44();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x000108901b24();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x000108901da4();
    }
  }
  unaff_x19[5] = 0;
  unaff_x19[6] = 0;
  *(undefined1 *)(unaff_x19 + 7) = 0;
  FUN_1088f9614();
  func_0x000108901bbc();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 1088f9e10; end: 1088fa1ab;  */

long * FUN_1088f9e10(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  long *plVar4;
  long lVar5;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar6;
  int iVar7;
  
  func_0x0001089018e8();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x0001089017a4();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x0001089018c0();
    func_0x000108901bb4();
    func_0x0001089019c4();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x0001089018c0();
    func_0x000108901dbc();
    func_0x0001089019c4();
    param_4 = param_1;
  }
  uVar2 = *(uint *)(unaff_x20 + 0x48);
  plVar4 = (long *)(ulong)uVar2;
  if (uVar2 < 0x17 && (1 << (ulong)(uVar2 & 0x1f) & 0x7fbdf0U) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x40) + 0x14);
    func_0x000108901aa8();
    param_4 = plVar4;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x18);
    param_4 = (long *)0x17;
    func_0x000108901aa8();
  }
  plVar4 = (long *)(ulong)*(uint *)(unaff_x20 + 0x48);
  uVar1 = *(uint *)(unaff_x20 + 0x48) - 0x18;
  uVar3 = uVar1 == 2;
  if (uVar1 < 3) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x40) +
                              *(long *)(&UNK_10df6f4d8 + (ulong)uVar1 * 8));
    func_0x000108901aa8();
    param_4 = plVar4;
  }
  func_0x000108901fac();
  if ((bool)uVar3) {
    func_0x0001089018c0();
    param_4 = (long *)0xd8;
    func_0x000107c280a8(0xd8,plVar4);
    func_0x0001089019dc();
  }
  plVar4 = (long *)(ulong)*(uint *)(unaff_x20 + 0x48);
  uVar1 = *(uint *)(unaff_x20 + 0x48) - 0x1c;
  if (uVar1 < 8) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x40) +
                              *(long *)(&UNK_10df6f4f0 + (ulong)uVar1 * 8));
    func_0x000108901aa8();
    param_4 = plVar4;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x000108901ae0();
  if ((long)param_3 < 0) {
    lVar5 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar5 = extraout_x8 + 8;
  }
  if ((long)(int)param_3 <= *unaff_x19 - (long)param_4) {
    _memcpy(param_4,lVar5,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  while( true ) {
    iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
    iVar6 = (int)param_3;
    uVar1 = iVar6 - iVar7;
    param_3 = (ulong)uVar1;
    if (uVar1 == 0 || iVar6 < iVar7) break;
    func_0x00010b4d5738();
    param_4 = unaff_x19;
    func_0x000107c303e4();
  }
  func_0x00010b4d5738();
  return (long *)((long)param_4 + (long)iVar6);
}



/* Entry: 1088fa1ac; end: 1088fa1e3;  */

long FUN_1088fa1ac(long param_1)

{
  long extraout_x8;
  
  FUN_1088fd49c();
  func_0x0001089017ec();
  return param_1 + extraout_x8;
}



/* Entry: 1088fa1e4; end: 1088fa1e7;  */

void FUN_1088fa1e4(ulong *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 in_ZR;
  undefined1 extraout_w8;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x000108901838();
  if ((unaff_x22 & 1) != 0) {
    func_0x000108901bd4();
  }
  func_0x000108901d50();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x000108901cdc();
      if (param_1 == (ulong *)0x0) {
        func_0x000108901b1c();
        unaff_x21[3] = (ulong)param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000108901d5c();
      if (param_1 == (ulong *)0x0) {
        func_0x000108901b1c();
        unaff_x21[4] = (ulong)param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if (*(ulong *)(unaff_x20 + 0x28) != 0) {
    unaff_x21[5] = *(ulong *)(unaff_x20 + 0x28);
  }
  if (*(ulong *)(unaff_x20 + 0x30) != 0) {
    unaff_x21[6] = *(ulong *)(unaff_x20 + 0x30);
  }
  func_0x000108901fac();
  if ((bool)in_ZR) {
    *(undefined1 *)(unaff_x21 + 7) = extraout_w8;
  }
  func_0x00010890198c();
  iVar1 = *(int *)(unaff_x20 + 0x48);
  if (iVar1 != 0) {
    iVar2 = (int)unaff_x21[9];
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_1088f9614();
      }
      *(int *)(unaff_x21 + 9) = iVar1;
    }
    switch(iVar1) {
    case 4:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fa818();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_1089006ac();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fa8d8();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_10890072c();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fa96c();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x0001089007e0();
      break;
    case 7:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fa9ec();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x00010890085c();
      break;
    case 8:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088faa88();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x0001089008e8();
      break;
    default:
      goto LAB_1088fa7fc;
    case 10:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fab34();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x000108900984();
      break;
    case 0xb:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fabf0();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x000108900a20();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fac54();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x000108900a7c();
      break;
    case 0xd:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088facb8();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x000108900ae8();
      break;
    case 0xf:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fad10();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x000108900b44();
      break;
    case 0x10:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fad9c();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x000108900bcc();
      break;
    case 0x11:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_108928c48();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_108900c28();
      break;
    case 0x12:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fae00();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x000108900c60();
      break;
    case 0x13:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fae80();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x000108900cdc();
      break;
    case 0x14:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088faed8();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x000108900d38();
      break;
    case 0x15:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088faf3c();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x000108900d94();
      break;
    case 0x16:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fafa0();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_108900df0();
      break;
    case 0x18:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fafc0();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_108900e48();
      break;
    case 0x19:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fafe4();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_108900ea4();
      break;
    case 0x1a:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x000108901f30();
        FUN_1088fb03c();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_108900f00();
      break;
    case 0x1c:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fb04c();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_108900f50();
      break;
    case 0x1d:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x000108901f30();
        func_0x0001088fb0a4();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_108900fac();
      break;
    case 0x1e:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x000108901f30();
        func_0x0001088fb0b4();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_108900ffc();
      break;
    case 0x1f:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fb0c4();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_10890104c();
      break;
    case 0x20:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fb1d8();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_1089010f8();
      break;
    case 0x21:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fb1ec();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_108901158();
      break;
    case 0x22:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fb20c();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_1089011b0();
      break;
    case 0x23:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fb230();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_10890120c();
    }
    unaff_x21[8] = (ulong)param_1;
  }
LAB_1088fa7fc:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089018f8();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088fa1e8; end: 1088faa87;  */

void FUN_1088fa1e8(ulong *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 in_ZR;
  undefined1 extraout_w8;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x000108901838();
  if ((unaff_x22 & 1) != 0) {
    func_0x000108901bd4();
  }
  func_0x000108901d50();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x000108901cdc();
      if (param_1 == (ulong *)0x0) {
        func_0x000108901b1c();
        unaff_x21[3] = (ulong)param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000108901d5c();
      if (param_1 == (ulong *)0x0) {
        func_0x000108901b1c();
        unaff_x21[4] = (ulong)param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if (*(ulong *)(unaff_x20 + 0x28) != 0) {
    unaff_x21[5] = *(ulong *)(unaff_x20 + 0x28);
  }
  if (*(ulong *)(unaff_x20 + 0x30) != 0) {
    unaff_x21[6] = *(ulong *)(unaff_x20 + 0x30);
  }
  func_0x000108901fac();
  if ((bool)in_ZR) {
    *(undefined1 *)(unaff_x21 + 7) = extraout_w8;
  }
  func_0x00010890198c();
  iVar1 = *(int *)(unaff_x20 + 0x48);
  if (iVar1 != 0) {
    iVar2 = (int)unaff_x21[9];
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_1088f9614();
      }
      *(int *)(unaff_x21 + 9) = iVar1;
    }
    switch(iVar1) {
    case 4:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fa818();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_1089006ac();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fa8d8();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_10890072c();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fa96c();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x0001089007e0();
      break;
    case 7:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fa9ec();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x00010890085c();
      break;
    case 8:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088faa88();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x0001089008e8();
      break;
    default:
      goto LAB_1088fa7fc;
    case 10:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fab34();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x000108900984();
      break;
    case 0xb:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fabf0();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x000108900a20();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fac54();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x000108900a7c();
      break;
    case 0xd:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088facb8();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x000108900ae8();
      break;
    case 0xf:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fad10();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x000108900b44();
      break;
    case 0x10:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fad9c();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x000108900bcc();
      break;
    case 0x11:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_108928c48();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_108900c28();
      break;
    case 0x12:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fae00();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x000108900c60();
      break;
    case 0x13:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fae80();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x000108900cdc();
      break;
    case 0x14:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088faed8();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x000108900d38();
      break;
    case 0x15:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088faf3c();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      func_0x000108900d94();
      break;
    case 0x16:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fafa0();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_108900df0();
      break;
    case 0x18:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fafc0();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_108900e48();
      break;
    case 0x19:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fafe4();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_108900ea4();
      break;
    case 0x1a:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x000108901f30();
        FUN_1088fb03c();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_108900f00();
      break;
    case 0x1c:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fb04c();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_108900f50();
      break;
    case 0x1d:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x000108901f30();
        func_0x0001088fb0a4();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_108900fac();
      break;
    case 0x1e:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x000108901f30();
        func_0x0001088fb0b4();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_108900ffc();
      break;
    case 0x1f:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fb0c4();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_10890104c();
      break;
    case 0x20:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fb1d8();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_1089010f8();
      break;
    case 0x21:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fb1ec();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_108901158();
      break;
    case 0x22:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        func_0x0001088fb20c();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_1089011b0();
      break;
    case 0x23:
      if (iVar2 == iVar1) {
        func_0x0001089018d8();
        FUN_1088fb230();
        goto LAB_1088fa7fc;
      }
      func_0x000108901af8();
      FUN_10890120c();
    }
    unaff_x21[8] = (ulong)param_1;
  }
LAB_1088fa7fc:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089018f8();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088faa88; end: 1088fab33;  */

void FUN_1088faa88(ulong *param_1)

{
  uint uVar1;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010890184c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108901c50();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    func_0x000108901c44();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108901bac();
    }
  }
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x20) = 1;
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  uVar1 = *(uint *)(unaff_x20 + 0x2c);
  if (uVar1 != 0) {
    if (*(uint *)(unaff_x21 + 0x2c) != uVar1) {
      *(uint *)(unaff_x21 + 0x2c) = uVar1;
    }
    if ((uVar1 & 0xfffffffc) == 4) {
      *(undefined4 *)(unaff_x21 + 0x28) = *(undefined4 *)(unaff_x20 + 0x28);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089018f8();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088fab34; end: 1088fabef;  */

void FUN_1088fab34(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x000108901838();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108901bd4();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000108901cdc();
      if (param_1 == (ulong *)0x0) {
        func_0x000108901b1c();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000108901d5c();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x00010890161c();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x0001088bc924();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        func_0x00010890161c();
        *(ulong **)(unaff_x21 + 0x28) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        func_0x0001088bc924();
      }
    }
  }
  func_0x000108901860();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001089018f8();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088fabf0; end: 1088fac53;  */

void FUN_1088fabf0(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010890184c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108901c50();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108901c44();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108901bac();
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  func_0x000108901874();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089018f8();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088fac54; end: 1088facb7;  */

void FUN_1088fac54(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x000108901838();
  if ((unaff_x22 & 1) != 0) {
    func_0x000108901bd4();
  }
  func_0x000108901bc8();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x30);
    if (param_1 == (ulong *)0x0) {
      func_0x000108901b1c();
      *(ulong **)(unaff_x21 + 0x30) = param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  func_0x000108901860();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089018f8();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088facb8; end: 1088fad0f;  */

void FUN_1088facb8(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010890184c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108901c50();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108901c44();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108901bac();
    }
  }
  func_0x000108901874();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089018f8();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088fad10; end: 1088fad9b;  */

void FUN_1088fad10(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x000108901838();
  if ((unaff_x22 & 1) != 0) {
    func_0x000108901bd4();
  }
  func_0x000108901d50();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x000108901cdc();
      if (param_1 == (ulong *)0x0) {
        func_0x000108901b1c();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000108901d5c();
      if (param_1 == (ulong *)0x0) {
        func_0x000108901b1c();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  func_0x000108901860();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001089018f8();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088fad9c; end: 1088fadff;  */

void FUN_1088fad9c(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010890184c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108901c50();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108901c44();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108901bac();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x000108901874();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089018f8();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088fae00; end: 1088fae7f;  */

void FUN_1088fae00(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x000108901838();
  if ((unaff_x22 & 1) != 0) {
    func_0x000108901bd4();
  }
  func_0x000108901d50();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x000108901cdc();
      if (param_1 == (ulong *)0x0) {
        func_0x000108901b1c();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000108901d5c();
      if (param_1 == (ulong *)0x0) {
        func_0x000108901b1c();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  func_0x000108901860();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001089018f8();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088fae80; end: 1088faf9f;  */

void FUN_1088fae80(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010890184c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108901c50();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108901c44();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108901bac();
    }
  }
  func_0x000108901874();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089018f8();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088fafa0; end: 1088fafe3;  */

void FUN_1088fafa0(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088fafe4; end: 1088fb03b;  */

void FUN_1088fafe4(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010890184c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108901c50();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108901c44();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108901bac();
    }
  }
  func_0x000108901874();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089018f8();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088fb03c; end: 1088fb04b;  */

void FUN_1088fb03c(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088fb04c; end: 1088fb0a3;  */

void FUN_1088fb04c(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010890184c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108901c50();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108901c44();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108901bac();
    }
  }
  func_0x000108901874();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089018f8();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088fb0a4; end: 1088fb0c3;  */

void FUN_1088fb0a4(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}


