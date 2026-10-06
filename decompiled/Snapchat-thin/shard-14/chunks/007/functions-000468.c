/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b5c7690; end: 10b5c76bb;  */

long FUN_10b5c7690(long param_1)

{
  func_0x00010b5c86bc();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5c76bc; end: 10b5c76bf;  */

long FUN_10b5c76bc(long param_1)

{
  func_0x00010b5c86bc();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5c76c0; end: 10b5c76d3;  */

void FUN_10b5c76c0(void)

{
  FUN_10b5c7690();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5c76d4; end: 10b5c76df;  */

undefined ** FUN_10b5c76d4(void)

{
  return &PTR_DAT_110d198e8;
}



/* Entry: 10b5c76e0; end: 10b5c770b;  */

void FUN_10b5c76e0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5c863c();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b5c770c; end: 10b5c7797;  */

long * FUN_10b5c770c(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x21;
  int iVar3;
  long unaff_x22;
  long *plVar4;
  int iVar5;
  
  plVar1 = param_2;
  plVar4 = param_3;
  func_0x00010b5c8668();
  if ((long)plVar1 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b5c7760;
  }
  else if ((int)plVar1 == 0) goto LAB_10b5c7760;
  func_0x00010b5c8650();
  param_2 = param_3;
  func_0x00010b5c86f8(param_3,1);
LAB_10b5c7760:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b5c8728();
  if ((long)plVar4 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar4) {
    while( true ) {
      iVar5 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar3 = (int)plVar4;
      plVar4 = (long *)(ulong)(uint)(iVar3 - iVar5);
      if (iVar3 - iVar5 == 0 || iVar3 < iVar5) break;
      func_0x00010b4d5738();
      lVar2 = (long)param_2 + (long)iVar5;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar3);
  }
  _memcpy(param_2,lVar2,(ulong)plVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar4);
}



/* Entry: 10b5c7798; end: 10b5c77ef;  */

void FUN_10b5c7798(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b5c85f0();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5c8754();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 10b5c77f0; end: 10b5c77f3;  */

void FUN_10b5c77f0(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5c86ec();
  func_0x00010b5c8688(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5c867c();
    }
    func_0x000107c30248(unaff_x19 + 0x10);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5c77f4; end: 10b5c7853;  */

void FUN_10b5c77f4(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5c86ec();
  func_0x00010b5c8688(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5c867c();
    }
    func_0x000107c30248(unaff_x19 + 0x10);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5c7854; end: 10b5c787f;  */

long FUN_10b5c7854(long param_1)

{
  func_0x00010b5c86bc();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5c7880; end: 10b5c7883;  */

long FUN_10b5c7880(long param_1)

{
  func_0x00010b5c86bc();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5c7884; end: 10b5c7897;  */

void FUN_10b5c7884(void)

{
  FUN_10b5c7854();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5c7898; end: 10b5c78a3;  */

undefined ** FUN_10b5c7898(void)

{
  return &PTR_DAT_110d19940;
}



/* Entry: 10b5c78a4; end: 10b5c78cf;  */

void FUN_10b5c78a4(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5c863c();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b5c78d0; end: 10b5c795b;  */

long * FUN_10b5c78d0(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x21;
  int iVar3;
  long unaff_x22;
  long *plVar4;
  int iVar5;
  
  plVar1 = param_2;
  plVar4 = param_3;
  func_0x00010b5c8668();
  if ((long)plVar1 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b5c7924;
  }
  else if ((int)plVar1 == 0) goto LAB_10b5c7924;
  func_0x00010b5c8650();
  param_2 = param_3;
  func_0x00010b5c86f8(param_3,2);
LAB_10b5c7924:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b5c8728();
  if ((long)plVar4 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar4) {
    while( true ) {
      iVar5 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar3 = (int)plVar4;
      plVar4 = (long *)(ulong)(uint)(iVar3 - iVar5);
      if (iVar3 - iVar5 == 0 || iVar3 < iVar5) break;
      func_0x00010b4d5738();
      lVar2 = (long)param_2 + (long)iVar5;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar3);
  }
  _memcpy(param_2,lVar2,(ulong)plVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar4);
}



/* Entry: 10b5c795c; end: 10b5c79b3;  */

void FUN_10b5c795c(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b5c85f0();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5c8754();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 10b5c79b4; end: 10b5c79b7;  */

void FUN_10b5c79b4(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5c86ec();
  func_0x00010b5c8688(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5c867c();
    }
    func_0x000107c30248(unaff_x19 + 0x10);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5c79b8; end: 10b5c7a97;  */

void FUN_10b5c79b8(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5c86ec();
  func_0x00010b5c8688(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5c867c();
    }
    func_0x000107c30248(unaff_x19 + 0x10);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5c7a98; end: 10b5c7ac3;  */

undefined8 FUN_10b5c7a98(undefined8 param_1)

{
  func_0x00010b5c86bc();
  FUN_10b5c7ac4(param_1);
  return param_1;
}



/* Entry: 10b5c7ac4; end: 10b5c7b03;  */

void FUN_10b5c7ac4(void)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  
  func_0x00010b5c8704();
  func_0x000107c30258(unaff_x19 + 0x18);
  func_0x000107c30258(unaff_x19 + 0x20);
  if (*(int *)(unaff_x19 + 0x34) == 0) {
    return;
  }
  if (*(int *)(unaff_x19 + 0x34) == 3) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5c8734();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10b5c7a74;
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_10b5c7854();
    }
  }
  else {
    if (*(int *)(unaff_x19 + 0x34) != 2) goto LAB_10b5c7a74;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5c8734();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10b5c7a74;
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_10b5c7690();
    }
  }
  __ZdlPv();
LAB_10b5c7a74:
  *(undefined4 *)(unaff_x19 + 0x34) = 0;
  return;
}



/* Entry: 10b5c7b04; end: 10b5c7b07;  */

undefined8 FUN_10b5c7b04(undefined8 param_1)

{
  func_0x00010b5c86bc();
  FUN_10b5c7ac4(param_1);
  return param_1;
}



/* Entry: 10b5c7b08; end: 10b5c7b1b;  */

void FUN_10b5c7b08(void)

{
  FUN_10b5c7a98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5c7b1c; end: 10b5c7b27;  */

undefined ** FUN_10b5c7b1c(void)

{
  return &PTR_DAT_110d199a0;
}



/* Entry: 10b5c7b28; end: 10b5c7b6b;  */

void FUN_10b5c7b28(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5c863c();
  func_0x000107c3025c(unaff_x19 + 0x18);
  func_0x000107c3025c(unaff_x19 + 0x20);
  func_0x00010b5c7a18();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b5c7b6c; end: 10b5c7c9f;  */

long * FUN_10b5c7b6c(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long unaff_x21;
  int iVar4;
  long unaff_x22;
  undefined8 *puVar5;
  int iVar6;
  
  plVar1 = param_2;
  plVar3 = param_3;
  func_0x00010b5c8668();
  if ((long)plVar1 < 0) {
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5c7ba4;
  }
  else if ((int)plVar1 != 0) {
LAB_10b5c7ba4:
    func_0x00010b5c8650();
    param_2 = param_3;
    func_0x00010b5c861c(param_3,1);
  }
  plVar1 = (long *)(ulong)*(uint *)(unaff_x21 + 0x34);
  if ((*(uint *)(unaff_x21 + 0x34) & 0xfffffffe) == 2) {
    plVar3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x21 + 0x28) + 0x18);
    func_0x00010b5c8710();
    param_2 = plVar1;
  }
  puVar5 = (undefined8 *)(*(ulong *)(unaff_x21 + 0x18) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar5 + 0x17) < '\0') {
    if (puVar5[1] != 0) {
      puVar5 = (undefined8 *)*puVar5;
      goto LAB_10b5c7c08;
    }
  }
  else if (*(char *)((long)puVar5 + 0x17) != '\0') {
LAB_10b5c7c08:
    func_0x00010b5c8650(puVar5);
    param_2 = param_3;
    func_0x00010b5c861c(param_3,4);
  }
  puVar5 = (undefined8 *)(*(ulong *)(unaff_x21 + 0x20) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar5 + 0x17) < '\0') {
    if (puVar5[1] == 0) goto LAB_10b5c7c68;
    puVar5 = (undefined8 *)*puVar5;
  }
  else if (*(char *)((long)puVar5 + 0x17) == '\0') goto LAB_10b5c7c68;
  func_0x00010b5c8650(puVar5);
  param_2 = param_3;
  func_0x00010b5c861c(param_3,5);
LAB_10b5c7c68:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b5c8728();
  if ((long)plVar3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar3 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar3) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar4 = (int)plVar3;
      plVar3 = (long *)(ulong)(uint)(iVar4 - iVar6);
      if (iVar4 - iVar6 == 0 || iVar4 < iVar6) break;
      func_0x00010b4d5738();
      lVar2 = (long)param_2 + (long)iVar6;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar4);
  }
  _memcpy(param_2,lVar2,(ulong)plVar3 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar3);
}



/* Entry: 10b5c7ca0; end: 10b5c7d7b;  */

long FUN_10b5c7ca0(long param_1)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b5c85f0();
  if (extraout_x8 < 0) {
    if (*(long *)(param_1 + 8) == 0) goto LAB_10b5c7ccc;
LAB_10b5c7cb8:
    func_0x000107c282a0();
    param_1 = param_1 + 1;
  }
  else {
    if (extraout_x8 != 0) goto LAB_10b5c7cb8;
LAB_10b5c7ccc:
    param_1 = 0;
  }
  uVar1 = *(ulong *)(unaff_x19 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    param_1 = param_1 + uVar1 + 1;
  }
  uVar1 = *(ulong *)(unaff_x19 + 0x20) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    param_1 = param_1 + uVar1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x34) == 3) {
    lVar2 = *(long *)(unaff_x19 + 0x28);
    FUN_10b5c795c();
  }
  else {
    if (*(int *)(unaff_x19 + 0x34) != 2) goto LAB_10b5c7d50;
    lVar2 = *(long *)(unaff_x19 + 0x28);
    FUN_10b5c7798();
  }
  func_0x00010b5c86d4();
  param_1 = param_1 + lVar2 + extraout_x8_00 + 1;
LAB_10b5c7d50:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5c8754();
    lVar2 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = lVar2 + param_1;
  }
  *(int *)(unaff_x19 + 0x30) = (int)param_1;
  return param_1;
}



/* Entry: 10b5c7d7c; end: 10b5c7d7f;  */

void FUN_10b5c7d7c(undefined8 param_1,long param_2,ulong param_3)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5c8740();
  uVar4 = param_3;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_3 & 0xfffffffffffffffe);
  }
  func_0x00010b5c8688(*(undefined8 *)(unaff_x20 + 0x10));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(param_2 + 8);
  }
  if (lVar5 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x00010b5c867c();
    }
    func_0x000107c30248(unaff_x21 + 0x10);
  }
  func_0x00010b5c8688(*(undefined8 *)(unaff_x20 + 0x18));
  lVar5 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar5 = *(long *)(param_2 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5c867c();
    }
    func_0x000107c30248(unaff_x21 + 0x18);
  }
  func_0x00010b5c8688(*(undefined8 *)(unaff_x20 + 0x20));
  lVar5 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar5 = *(long *)(param_2 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5c867c();
    }
    func_0x000107c30248(unaff_x21 + 0x20);
  }
  iVar2 = *(int *)(unaff_x20 + 0x34);
  if (iVar2 == 0) goto LAB_10b5c7ec0;
  iVar3 = *(int *)(unaff_x21 + 0x34);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      func_0x00010b5c7a18();
    }
    *(int *)(unaff_x21 + 0x34) = iVar2;
  }
  if (iVar2 == 3) {
    if (iVar3 == 3) {
      ppuVar1 = *(undefined ***)(unaff_x20 + 0x28);
      if (*(int *)(unaff_x20 + 0x34) != 3) {
        ppuVar1 = &PTR_PTR_1133b25d8;
      }
      func_0x00010b5c79b8(*(undefined8 *)(unaff_x21 + 0x28),ppuVar1);
      goto LAB_10b5c7ec0;
    }
    func_0x00010b5c84c8(uVar4,*(undefined8 *)(unaff_x20 + 0x28));
  }
  else {
    if (iVar2 != 2) goto LAB_10b5c7ec0;
    if (iVar3 == 2) {
      ppuVar1 = *(undefined ***)(unaff_x20 + 0x28);
      if (*(int *)(unaff_x20 + 0x34) != 2) {
        ppuVar1 = &PTR_PTR_1133b25b8;
      }
      FUN_10b5c77f4(*(undefined8 *)(unaff_x21 + 0x28),ppuVar1);
      goto LAB_10b5c7ec0;
    }
    FUN_10b5c846c(uVar4,*(undefined8 *)(unaff_x20 + 0x28));
  }
  *(ulong *)(unaff_x21 + 0x28) = uVar4;
LAB_10b5c7ec0:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5c7d80; end: 10b5c7eef;  */

void FUN_10b5c7d80(undefined8 param_1,long param_2,ulong param_3)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5c8740();
  uVar4 = param_3;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_3 & 0xfffffffffffffffe);
  }
  func_0x00010b5c8688(*(undefined8 *)(unaff_x20 + 0x10));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(param_2 + 8);
  }
  if (lVar5 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x00010b5c867c();
    }
    func_0x000107c30248(unaff_x21 + 0x10);
  }
  func_0x00010b5c8688(*(undefined8 *)(unaff_x20 + 0x18));
  lVar5 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar5 = *(long *)(param_2 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5c867c();
    }
    func_0x000107c30248(unaff_x21 + 0x18);
  }
  func_0x00010b5c8688(*(undefined8 *)(unaff_x20 + 0x20));
  lVar5 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar5 = *(long *)(param_2 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5c867c();
    }
    func_0x000107c30248(unaff_x21 + 0x20);
  }
  iVar2 = *(int *)(unaff_x20 + 0x34);
  if (iVar2 == 0) goto LAB_10b5c7ec0;
  iVar3 = *(int *)(unaff_x21 + 0x34);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      func_0x00010b5c7a18();
    }
    *(int *)(unaff_x21 + 0x34) = iVar2;
  }
  if (iVar2 == 3) {
    if (iVar3 == 3) {
      ppuVar1 = *(undefined ***)(unaff_x20 + 0x28);
      if (*(int *)(unaff_x20 + 0x34) != 3) {
        ppuVar1 = &PTR_PTR_1133b25d8;
      }
      func_0x00010b5c79b8(*(undefined8 *)(unaff_x21 + 0x28),ppuVar1);
      goto LAB_10b5c7ec0;
    }
    func_0x00010b5c84c8(uVar4,*(undefined8 *)(unaff_x20 + 0x28));
  }
  else {
    if (iVar2 != 2) goto LAB_10b5c7ec0;
    if (iVar3 == 2) {
      ppuVar1 = *(undefined ***)(unaff_x20 + 0x28);
      if (*(int *)(unaff_x20 + 0x34) != 2) {
        ppuVar1 = &PTR_PTR_1133b25b8;
      }
      FUN_10b5c77f4(*(undefined8 *)(unaff_x21 + 0x28),ppuVar1);
      goto LAB_10b5c7ec0;
    }
    FUN_10b5c846c(uVar4,*(undefined8 *)(unaff_x20 + 0x28));
  }
  *(ulong *)(unaff_x21 + 0x28) = uVar4;
LAB_10b5c7ec0:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5c7ef0; end: 10b5c7f6f;  */

void FUN_10b5c7ef0(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  if (*(int *)(param_1 + 0x24) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5c8734();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10b5c7f4c;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b5c7a98();
    }
  }
  else {
    if (*(int *)(param_1 + 0x24) != 1) goto LAB_10b5c7f4c;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5c8734();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10b5c7f4c;
    if (*(long *)(param_1 + 0x18) != 0) {
      func_0x000107c316b0();
    }
  }
  __ZdlPv();
LAB_10b5c7f4c:
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10b5c7f70; end: 10b5c7ff7;  */

void FUN_10b5c7f70(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  lVar2 = param_3;
  func_0x00010b5c86ec();
  *(undefined8 *)(param_1 + 8) = param_2;
  *unaff_x19 = &PTR_FUN_110d198a8;
  if ((*(ulong *)(lVar2 + 8) & 1) != 0) {
    func_0x00010b5c8604();
  }
  lVar2 = param_3 + 0x10;
  func_0x00010b5c86cc();
  unaff_x19[2] = lVar2;
  *(undefined4 *)(unaff_x19 + 4) = 0;
  iVar1 = *(int *)(param_3 + 0x24);
  *(int *)((long)unaff_x19 + 0x24) = iVar1;
  if (iVar1 == 2) {
    func_0x00010b5c8524();
  }
  else {
    if (iVar1 != 1) {
      return;
    }
    func_0x000107c284d4();
  }
  unaff_x19[3] = unaff_x20;
  return;
}



/* Entry: 10b5c7ff8; end: 10b5c8023;  */

undefined8 FUN_10b5c7ff8(undefined8 param_1)

{
  func_0x00010b5c86bc();
  FUN_10b5c8024(param_1);
  return param_1;
}



/* Entry: 10b5c8024; end: 10b5c8053;  */

void FUN_10b5c8024(void)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  
  func_0x00010b5c8704();
  if (*(int *)(unaff_x19 + 0x24) == 0) {
    return;
  }
  if (*(int *)(unaff_x19 + 0x24) == 2) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5c8734();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10b5c7f4c;
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      FUN_10b5c7a98();
    }
  }
  else {
    if (*(int *)(unaff_x19 + 0x24) != 1) goto LAB_10b5c7f4c;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5c8734();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10b5c7f4c;
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      func_0x000107c316b0();
    }
  }
  __ZdlPv();
LAB_10b5c7f4c:
  *(undefined4 *)(unaff_x19 + 0x24) = 0;
  return;
}



/* Entry: 10b5c8054; end: 10b5c8057;  */

undefined8 FUN_10b5c8054(undefined8 param_1)

{
  func_0x00010b5c86bc();
  FUN_10b5c8024(param_1);
  return param_1;
}



/* Entry: 10b5c8058; end: 10b5c806b;  */

void FUN_10b5c8058(void)

{
  FUN_10b5c7ff8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5c806c; end: 10b5c8077;  */

undefined ** FUN_10b5c806c(void)

{
  return &PTR_DAT_110d199f0;
}



/* Entry: 10b5c8078; end: 10b5c80ab;  */

void FUN_10b5c8078(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5c863c();
  FUN_10b5c7ef0();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b5c80ac; end: 10b5c8173;  */

long * FUN_10b5c80ac(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  plVar2 = (long *)(ulong)uVar1;
  if (uVar1 == 1) {
    lVar4 = 0x10;
LAB_10b5c80e8:
    plVar3 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x18) + lVar4);
    func_0x00010b5c8710();
    param_2 = plVar2;
  }
  else {
    plVar3 = param_3;
    if (uVar1 == 2) {
      lVar4 = 0x30;
      goto LAB_10b5c80e8;
    }
  }
  puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar6 + 0x17) < '\0') {
    if (puVar6[1] == 0) goto LAB_10b5c813c;
    puVar6 = (undefined8 *)*puVar6;
  }
  else if (*(char *)((long)puVar6 + 0x17) == '\0') goto LAB_10b5c813c;
  func_0x00010b5c8650(puVar6);
  param_2 = param_3;
  func_0x00010b5c861c(param_3,3);
LAB_10b5c813c:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b5c8728();
  if ((long)plVar3 < 0) {
    lVar4 = *(long *)(extraout_x8 + 8);
    plVar3 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar4 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar3) {
    while( true ) {
      iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar5 = (int)plVar3;
      plVar3 = (long *)(ulong)(uint)(iVar5 - iVar7);
      if (iVar5 - iVar7 == 0 || iVar5 < iVar7) break;
      func_0x00010b4d5738();
      lVar4 = (long)param_2 + (long)iVar7;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar4);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar5);
  }
  _memcpy(param_2,lVar4,(ulong)plVar3 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar3);
}



/* Entry: 10b5c8174; end: 10b5c81ff;  */

long FUN_10b5c8174(long param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b5c85f0();
  if (extraout_x8 < 0) {
    if (*(long *)(param_1 + 8) == 0) goto LAB_10b5c81a0;
LAB_10b5c818c:
    func_0x000107c282a0();
    param_1 = param_1 + 1;
  }
  else {
    if (extraout_x8 != 0) goto LAB_10b5c818c;
LAB_10b5c81a0:
    param_1 = 0;
  }
  if (*(int *)(unaff_x19 + 0x24) == 2) {
    lVar1 = *(long *)(unaff_x19 + 0x18);
    FUN_10b5c8200();
  }
  else {
    if (*(int *)(unaff_x19 + 0x24) != 1) goto LAB_10b5c81d4;
    lVar1 = *(long *)(unaff_x19 + 0x18);
    func_0x00010793598c();
  }
  param_1 = param_1 + lVar1 + 1;
LAB_10b5c81d4:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5c8754();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x20) = (int)param_1;
  return param_1;
}



/* Entry: 10b5c8200; end: 10b5c821b;  */

long FUN_10b5c8200(long param_1)

{
  long extraout_x8;
  
  FUN_10b5c7ca0();
  func_0x00010b5c86d4();
  return param_1 + extraout_x8;
}



/* Entry: 10b5c821c; end: 10b5c821f;  */

void FUN_10b5c821c(undefined8 param_1,long param_2,ulong param_3)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5c8740();
  uVar4 = param_3;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_3 & 0xfffffffffffffffe);
  }
  func_0x00010b5c8688(*(undefined8 *)(unaff_x20 + 0x10));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(param_2 + 8);
  }
  if (lVar5 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x00010b5c867c();
    }
    func_0x000107c30248(unaff_x21 + 0x10);
  }
  iVar2 = *(int *)(unaff_x20 + 0x24);
  if (iVar2 == 0) goto LAB_10b5c8310;
  iVar3 = *(int *)(unaff_x21 + 0x24);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_10b5c7ef0();
    }
    *(int *)(unaff_x21 + 0x24) = iVar2;
  }
  if (iVar2 == 2) {
    if (iVar3 == 2) {
      ppuVar1 = *(undefined ***)(unaff_x20 + 0x18);
      if (*(int *)(unaff_x20 + 0x24) != 2) {
        ppuVar1 = &PTR_PTR_1133b2200;
      }
      FUN_10b5c7d80(*(undefined8 *)(unaff_x21 + 0x18),ppuVar1);
      goto LAB_10b5c8310;
    }
    func_0x00010b5c8524(uVar4,*(undefined8 *)(unaff_x20 + 0x18));
  }
  else {
    if (iVar2 != 1) goto LAB_10b5c8310;
    if (iVar3 == 1) {
      ppuVar1 = *(undefined ***)(unaff_x20 + 0x18);
      if (*(int *)(unaff_x20 + 0x24) != 1) {
        ppuVar1 = &PTR_PTR_113404470;
      }
      func_0x00010bd1b688(*(undefined8 *)(unaff_x21 + 0x18),ppuVar1);
      goto LAB_10b5c8310;
    }
    func_0x000107c284d4(uVar4,*(undefined8 *)(unaff_x20 + 0x18));
  }
  *(ulong *)(unaff_x21 + 0x18) = uVar4;
LAB_10b5c8310:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5c8220; end: 10b5c833f;  */

void FUN_10b5c8220(undefined8 param_1,long param_2,ulong param_3)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5c8740();
  uVar4 = param_3;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_3 & 0xfffffffffffffffe);
  }
  func_0x00010b5c8688(*(undefined8 *)(unaff_x20 + 0x10));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(param_2 + 8);
  }
  if (lVar5 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x00010b5c867c();
    }
    func_0x000107c30248(unaff_x21 + 0x10);
  }
  iVar2 = *(int *)(unaff_x20 + 0x24);
  if (iVar2 == 0) goto LAB_10b5c8310;
  iVar3 = *(int *)(unaff_x21 + 0x24);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_10b5c7ef0();
    }
    *(int *)(unaff_x21 + 0x24) = iVar2;
  }
  if (iVar2 == 2) {
    if (iVar3 == 2) {
      ppuVar1 = *(undefined ***)(unaff_x20 + 0x18);
      if (*(int *)(unaff_x20 + 0x24) != 2) {
        ppuVar1 = &PTR_PTR_1133b2200;
      }
      FUN_10b5c7d80(*(undefined8 *)(unaff_x21 + 0x18),ppuVar1);
      goto LAB_10b5c8310;
    }
    func_0x00010b5c8524(uVar4,*(undefined8 *)(unaff_x20 + 0x18));
  }
  else {
    if (iVar2 != 1) goto LAB_10b5c8310;
    if (iVar3 == 1) {
      ppuVar1 = *(undefined ***)(unaff_x20 + 0x18);
      if (*(int *)(unaff_x20 + 0x24) != 1) {
        ppuVar1 = &PTR_PTR_113404470;
      }
      func_0x00010bd1b688(*(undefined8 *)(unaff_x21 + 0x18),ppuVar1);
      goto LAB_10b5c8310;
    }
    func_0x000107c284d4(uVar4,*(undefined8 *)(unaff_x20 + 0x18));
  }
  *(ulong *)(unaff_x21 + 0x18) = uVar4;
LAB_10b5c8310:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5c8340; end: 10b5c835f;  */

void FUN_10b5c8340(undefined8 param_1,long param_2)

{
  undefined8 extraout_x8;
  
  if (param_2 == 0) {
    func_0x00010b5c86c4();
  }
  else {
    func_0x00010b5c8630();
  }
  func_0x00010b5c8658(&PTR_FUN_110d197b8);
  *(undefined8 *)(param_2 + 0x10) = extraout_x8;
  *(undefined4 *)(param_2 + 0x18) = 0;
  return;
}



/* Entry: 10b5c8360; end: 10b5c846b;  */

void FUN_10b5c8360(long param_1)

{
  undefined8 extraout_x8;
  
  if (param_1 == 0) {
    func_0x00010b5c86c4();
  }
  else {
    func_0x00010b5c8630();
  }
  func_0x00010b5c8658(&PTR_FUN_110d197b8);
  *(undefined8 *)(param_1 + 0x10) = extraout_x8;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10b5c846c; end: 10b5c85e3;  */

undefined8 * FUN_10b5c846c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b5c86ec();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5c86c4();
  }
  else {
    func_0x00010b5c8630();
  }
  puVar1 = param_1 + 1;
  *puVar1 = unaff_x19;
  *param_1 = &PTR_FUN_110d197b8;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5c8604();
  }
  func_0x00010b5c871c();
  param_1[2] = puVar1;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



/* Entry: 10b5c85e4; end: 10b5c875f;  */

void FUN_10b5c85e4(void)

{
  return;
}



/* Entry: 10b5c8760; end: 10b5c87fb;  */

undefined8 * FUN_10b5c8760(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d19aa0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar1 = param_3 + 0x18;
  func_0x000107c2809c(lVar1,param_2);
  param_1[3] = lVar1;
  lVar1 = param_3 + 0x20;
  func_0x000107c2809c(lVar1,param_2);
  param_1[4] = lVar1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x000108911c78(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = param_2;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_3 + 0x30);
  return param_1;
}



/* Entry: 10b5c87fc; end: 10b5c882b;  */

long FUN_10b5c87fc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5c882c(param_1);
  return param_1;
}



/* Entry: 10b5c882c; end: 10b5c8863;  */

void FUN_10b5c882c(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b5b9250();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5c8864; end: 10b5c8867;  */

long FUN_10b5c8864(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5c882c(param_1);
  return param_1;
}



/* Entry: 10b5c8868; end: 10b5c887b;  */

void FUN_10b5c8868(void)

{
  FUN_10b5c87fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5c887c; end: 10b5c8887;  */

undefined ** FUN_10b5c887c(void)

{
  return &PTR_DAT_110d19ae0;
}



/* Entry: 10b5c8888; end: 10b5c88e3;  */

void FUN_10b5c8888(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b5b92e8(*(undefined8 *)(param_1 + 0x28));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b5c88e4; end: 10b5c89e3;  */

long * FUN_10b5c88e4(long param_1,long *param_2,long *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  uVar3 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar3 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar3 + 8);
  }
  if (lVar4 != 0) {
    param_2 = param_3;
    func_0x000107c280a0(param_3,1);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    plVar2 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x30);
    uVar1 = 0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x000107c280b8(param_2,uVar1);
  }
  plVar2 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar2 = (long *)0x3;
    func_0x000107c303cc(3,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x18),param_2,param_3);
  }
  uVar3 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar3 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar3 + 8);
  }
  if (lVar4 != 0) {
    plVar2 = param_3;
    func_0x000107c280a0(param_3,4);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar3 < 0) {
      lVar4 = *(long *)(uVar5 + 8);
      uVar3 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar4 = uVar5 + 8;
    }
    if (*param_3 - (long)plVar2 < (long)(int)uVar3) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)plVar2) + 0x10;
        iVar6 = (int)uVar3;
        uVar3 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar4 = (long)plVar2 + (long)iVar7;
        plVar2 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar2 + (long)iVar6);
    }
    _memcpy(plVar2,lVar4,uVar3 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)uVar3);
  }
  return plVar2;
}



/* Entry: 10b5c89e4; end: 10b5c8aaf;  */

long FUN_10b5c89e4(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b5c8a1c;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b5c8a1c:
    lVar3 = 0;
    goto LAB_10b5c8a20;
  }
  func_0x000107c28098();
  lVar3 = uVar1 + 1;
LAB_10b5c8a20:
  uVar1 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    lVar3 = lVar3 + uVar1 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010890da20();
    lVar3 = lVar3 + lVar2 + 1;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b5c8ab0; end: 10b5c8ab3;  */

void FUN_10b5c8ab0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar3,uVar4);
  }
  uVar4 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x20,uVar4,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
      func_0x000108911c78(uVar2,*(undefined8 *)(param_2 + 0x28));
      *(ulong *)(param_1 + 0x28) = uVar2;
    }
    else {
      func_0x00010b5b9228();
    }
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5c8ab4; end: 10b5c8bc3;  */

void FUN_10b5c8ab4(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar3,uVar4);
  }
  uVar4 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x20,uVar4,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
      func_0x000108911c78(uVar2,*(undefined8 *)(param_2 + 0x28));
      *(ulong *)(param_1 + 0x28) = uVar2;
    }
    else {
      func_0x00010b5b9228();
    }
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5c8bc4; end: 10b5c8bcb;  */

void FUN_10b5c8bc4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x38);
  }
  *puVar1 = &PTR_FUN_110d19aa0;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 10b5c8bcc; end: 10b5c8c1f;  */

void FUN_10b5c8bcc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x38);
  }
  *puVar1 = &PTR_FUN_110d19aa0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 10b5c8c20; end: 10b5c8c33;  */

void FUN_10b5c8c20(void)

{
  return;
}



/* Entry: 10b5c8c34; end: 10b5c8d27;  */

undefined8 * FUN_10b5c8c34(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d19b48;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar2 = param_3 + 0x18;
  func_0x00010b5c93b0();
  param_1[3] = lVar2;
  lVar2 = param_3 + 0x20;
  func_0x00010b5c93b0();
  param_1[4] = lVar2;
  lVar2 = param_3 + 0x28;
  func_0x00010b5c93b0();
  param_1[5] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x000108904da8(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x000108911c78(param_2,*(undefined8 *)(param_3 + 0x38));
  }
  param_1[7] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x000108911c78(param_2,*(undefined8 *)(param_3 + 0x40));
  }
  param_1[8] = uVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x000108904da8(param_2,*(undefined8 *)(param_3 + 0x48));
  }
  param_1[9] = param_2;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_3 + 0x50);
  return param_1;
}



/* Entry: 10b5c8d28; end: 10b5c8d5b;  */

long FUN_10b5c8d28(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5c8d5c(param_1);
  return param_1;
}



/* Entry: 10b5c8d5c; end: 10b5c8dcb;  */

void FUN_10b5c8d5c(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c30588();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b5b9250();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10b5b9250();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x000107c30588();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5c8dcc; end: 10b5c8dcf;  */

long FUN_10b5c8dcc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5c8d5c(param_1);
  return param_1;
}



/* Entry: 10b5c8dd0; end: 10b5c8de3;  */

void FUN_10b5c8dd0(void)

{
  FUN_10b5c8d28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5c8de4; end: 10b5c8def;  */

undefined ** FUN_10b5c8de4(void)

{
  return &PTR_DAT_110d19b88;
}



/* Entry: 10b5c8df0; end: 10b5c8e8f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5c8df0(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  func_0x000107c3025c(param_1 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b51f4e4(*(undefined8 *)(param_1 + 0x30));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b5b92e8(*(undefined8 *)(param_1 + 0x38));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010b5b92e8(*(undefined8 *)(param_1 + 0x40));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_10b51f4e4(*(undefined8 *)(param_1 + 0x48));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b5c8e90; end: 10b5c9147;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10b5c8e90(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar9[1];
    if (lVar5 == 0) goto LAB_10b5c8ef8;
    puVar2 = (undefined8 *)*puVar9;
  }
  else {
    puVar2 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_10b5c8ef8;
  }
  func_0x000107c303d4(puVar2,lVar5,1,&UNK_10f77ef7d);
  param_2 = param_3;
  func_0x00010b5c93b8(param_3,1,puVar9);
LAB_10b5c8ef8:
  uVar6 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar6 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar6 + 8);
  }
  if (lVar5 != 0) {
    param_2 = param_3;
    func_0x00010b5c93b8(param_3,2);
  }
  uVar6 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar6 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar6 + 8);
  }
  if (lVar5 != 0) {
    param_2 = param_3;
    func_0x00010b5c93b8(param_3,3);
  }
  if (*(char *)(param_1 + 0x50) == '\x01') {
    plVar3 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(byte *)(param_1 + 0x50);
    uVar4 = 0x20;
    func_0x000107c280a8(0x20,plVar3);
    func_0x000107c280a8(param_2,uVar4);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = (long *)0x5;
    func_0x00010b5c938c(5,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x14));
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = (long *)0x6;
    func_0x00010b5c938c(6,*(long *)(param_1 + 0x38),
                        *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x18));
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_2 = (long *)0x7;
    func_0x00010b5c938c(7,*(long *)(param_1 + 0x40),
                        *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x18));
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_2 = (long *)0x8;
    func_0x00010b5c938c(8,*(long *)(param_1 + 0x48),
                        *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x14));
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar5 = *(long *)(uVar7 + 8);
      uVar6 = *(ulong *)(uVar7 + 0x10);
    }
    else {
      lVar5 = uVar7 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar6) {
      while( true ) {
        iVar10 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar8 = (int)uVar6;
        uVar6 = (ulong)(uint)(iVar8 - iVar10);
        if (iVar8 - iVar10 == 0 || iVar8 < iVar10) break;
        func_0x00010b4d5738();
        lVar5 = (long)param_2 + (long)iVar10;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar5);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar8);
    }
    _memcpy(param_2,lVar5,uVar6 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar6);
  }
  return param_2;
}



/* Entry: 10b5c9148; end: 10b5c914b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5c9148(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar3,uVar4);
  }
  uVar4 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x20,uVar4,uVar3);
  }
  uVar4 = *(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x28,uVar4,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar4 = uVar2;
        func_0x000108904da8(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar4;
      }
      else {
        func_0x000107c3058c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar4 = uVar2;
        func_0x000108911c78(uVar2,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar4;
      }
      else {
        func_0x00010b5b9228();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar4 = uVar2;
        func_0x000108911c78(uVar2,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar4;
      }
      else {
        func_0x00010b5b9228();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        func_0x000108904da8(uVar2,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar2;
      }
      else {
        func_0x000107c3058c();
      }
    }
  }
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5c914c; end: 10b5c931f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5c914c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar3,uVar4);
  }
  uVar4 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x20,uVar4,uVar3);
  }
  uVar4 = *(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x28,uVar4,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar4 = uVar2;
        func_0x000108904da8(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar4;
      }
      else {
        func_0x000107c3058c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar4 = uVar2;
        func_0x000108911c78(uVar2,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar4;
      }
      else {
        func_0x00010b5b9228();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar4 = uVar2;
        func_0x000108911c78(uVar2,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar4;
      }
      else {
        func_0x00010b5b9228();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        func_0x000108904da8(uVar2,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar2;
      }
      else {
        func_0x000107c3058c();
      }
    }
  }
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5c9320; end: 10b5c9327;  */

void FUN_10b5c9320(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x58;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x58);
  }
  *puVar1 = &PTR_FUN_110d19b48;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = &DAT_11383d918;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  *(undefined1 *)(puVar1 + 10) = 0;
  return;
}



/* Entry: 10b5c9328; end: 10b5c938b;  */

void FUN_10b5c9328(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x58;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x58);
  }
  *puVar1 = &PTR_FUN_110d19b48;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = &DAT_11383d918;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  *(undefined1 *)(puVar1 + 10) = 0;
  return;
}



/* Entry: 10b5c938c; end: 10b5c93e7;  */

void FUN_10b5c938c(int param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 unaff_x19;
  
  func_0x0001001a597c();
  uVar1 = (ulong)(param_1 << 3 | 2);
  func_0x0001001a59d0(uVar1,unaff_x19);
  func_0x0001001a59d0(param_3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001006018cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,param_3);
  return;
}



/* Entry: 10b5c93e8; end: 10b5c940f;  */

long FUN_10b5c93e8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5c9410; end: 10b5c945b;  */

undefined8 * FUN_10b5c9410(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d19bf0;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  func_0x00010b5c93c0(param_1,param_3);
  return param_1;
}



/* Entry: 10b5c945c; end: 10b5c945f;  */

long FUN_10b5c945c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5c9460; end: 10b5c9473;  */

void FUN_10b5c9460(void)

{
  FUN_10b5c93e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5c9474; end: 10b5c9493;  */

undefined ** FUN_10b5c9474(void)

{
  return &PTR_DAT_110d19c30;
}



/* Entry: 10b5c9494; end: 10b5c94ff;  */

long * FUN_10b5c9494(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  plVar1 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x10),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar1;
  }
  uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
  if ((long)uVar3 < 0) {
    lVar2 = *(long *)(uVar4 + 8);
    uVar3 = *(ulong *)(uVar4 + 0x10);
  }
  else {
    lVar2 = uVar4 + 8;
  }
  if (*param_3 - (long)plVar1 < (long)(int)uVar3) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)plVar1) + 0x10;
      iVar5 = (int)uVar3;
      uVar3 = (ulong)(uint)(iVar5 - iVar6);
      if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
      func_0x00010b4d5738();
      lVar2 = (long)plVar1 + (long)iVar6;
      plVar1 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar1 + (long)iVar5);
  }
  _memcpy(plVar1,lVar2,uVar3 & 0xffffffff);
  return (long *)((long)plVar1 + (long)(int)uVar3);
}



/* Entry: 10b5c9500; end: 10b5c9553;  */

ulong FUN_10b5c9500(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x18) = (int)uVar1;
  return uVar1;
}



/* Entry: 10b5c9554; end: 10b5c959b;  */

void FUN_10b5c9554(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110d19bf0;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b5c959c; end: 10b5c9613;  */

void FUN_10b5c959c(void)

{
  return;
}



/* Entry: 10b5c9614; end: 10b5c963b;  */

long FUN_10b5c9614(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5c963c; end: 10b5c968b;  */

undefined8 * FUN_10b5c963c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d19c98;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  func_0x00010b5c95a4(param_1,param_3);
  return param_1;
}



/* Entry: 10b5c968c; end: 10b5c968f;  */

long FUN_10b5c968c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5c9690; end: 10b5c96a3;  */

void FUN_10b5c9690(void)

{
  FUN_10b5c9614();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5c96a4; end: 10b5c96cf;  */

undefined ** FUN_10b5c96a4(void)

{
  return &PTR_DAT_110d19cd8;
}



/* Entry: 10b5c96d0; end: 10b5c982f;  */

long * FUN_10b5c96d0(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar1 = param_1;
  if ((int)param_1[2] != 0) {
    plVar2 = param_1;
    FUN_10b5c997c();
    plVar1 = (long *)0x8;
    func_0x000107c280a8(8,plVar2);
    func_0x00010b5c9994();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(int *)((long)param_1 + 0x14) != 0) {
    FUN_10b5c997c();
    plVar2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar1);
    func_0x00010b5c9994();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if ((int)param_1[7] != 0) {
    FUN_10b5c997c();
    plVar1 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x00010b5c9994();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (param_1[3] != 0) {
    FUN_10b5c997c();
    plVar2 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar1);
    func_0x00010b5c9988();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (param_1[4] != 0) {
    FUN_10b5c997c();
    plVar1 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar2);
    func_0x00010b5c9988();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (param_1[5] != 0) {
    FUN_10b5c997c();
    plVar2 = (long *)0x30;
    func_0x000107c280a8(0x30,plVar1);
    func_0x00010b5c9988();
    param_2 = plVar2;
  }
  if (param_1[6] != 0) {
    FUN_10b5c997c();
    param_2 = (long *)0x38;
    func_0x000107c280a8(0x38,plVar2);
    func_0x00010b5c9988();
  }
  if ((param_1[1] & 1U) != 0) {
    uVar5 = param_1[1] & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 10b5c9830; end: 10b5c992f;  */

ulong FUN_10b5c9830(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = (int)LZCOUNT(*(int *)(param_1 + 0x10)) * -9 + 0x1a0U >> 6;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT(*(int *)(param_1 + 0x14)) * -9 + 0x1a0U >> 6);
  }
  uVar2 = (ulong)uVar1;
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar2 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + (ulong)uVar1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar2 = ((int)LZCOUNT(*(long *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + uVar2;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar2 = ((int)LZCOUNT(*(long *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + uVar2;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar2 = ((int)LZCOUNT(*(long *)(param_1 + 0x30)) * -9 + 0x2c0U >> 6) + uVar2;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar2 = uVar2 + ((int)LZCOUNT(*(int *)(param_1 + 0x38)) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar2 = lVar3 + uVar2;
  }
  *(int *)(param_1 + 0x3c) = (int)uVar2;
  return uVar2;
}



/* Entry: 10b5c9930; end: 10b5c997b;  */

void FUN_10b5c9930(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x40);
  }
  *puVar1 = &PTR_FUN_110d19c98;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  return;
}



/* Entry: 10b5c997c; end: 10b5c99a7;  */

ulong * FUN_10b5c997c(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *in_x3;
  ulong *unaff_x19;
  
  if (in_x3 < (ulong *)*unaff_x19) {
    return in_x3;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    func_0x0001006b07dc();
    in_x3 = (ulong *)((long)puVar2 + (long)((int)in_x3 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= in_x3);
  return in_x3;
}



/* Entry: 10b5c99a8; end: 10b5c9a33;  */

undefined8 * FUN_10b5c99a8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d19d38;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar1 = param_3 + 0x18;
  func_0x000107c2809c(lVar1,param_2);
  param_1[3] = lVar1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b580b9c(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = param_2;
  return param_1;
}



/* Entry: 10b5c9a34; end: 10b5c9a63;  */

long FUN_10b5c9a34(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5c9a64(param_1);
  return param_1;
}



/* Entry: 10b5c9a64; end: 10b5c9a93;  */

void FUN_10b5c9a64(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b5cbe18();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5c9a94; end: 10b5c9a97;  */

long FUN_10b5c9a94(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5c9a64(param_1);
  return param_1;
}



/* Entry: 10b5c9a98; end: 10b5c9aab;  */

void FUN_10b5c9a98(void)

{
  FUN_10b5c9a34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5c9aac; end: 10b5c9ab7;  */

undefined ** FUN_10b5c9aac(void)

{
  return &PTR_DAT_110d19d78;
}



/* Entry: 10b5c9ab8; end: 10b5c9c27;  */

void FUN_10b5c9ab8(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b5cbe98(*(undefined8 *)(param_1 + 0x20));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b5c9c28; end: 10b5c9c2b;  */

void FUN_10b5c9c28(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar3,uVar4);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x00010b580b9c(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      FUN_10b5cc1f4();
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5c9c2c; end: 10b5c9cff;  */

void FUN_10b5c9c2c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar3,uVar4);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x00010b580b9c(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      FUN_10b5cc1f4();
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5c9d00; end: 10b5c9d07;  */

void FUN_10b5c9d00(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x28);
  }
  *puVar1 = &PTR_FUN_110d19d38;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  return;
}


