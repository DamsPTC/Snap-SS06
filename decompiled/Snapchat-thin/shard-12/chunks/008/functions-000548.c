/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1098d7dfc; end: 1098d7e33;  */

void FUN_1098d7dfc(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_1098d7ba8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d7e34; end: 1098d7e37;  */

long FUN_1098d7e34(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1098d7dfc(param_1);
  return param_1;
}



/* Entry: 1098d7e38; end: 1098d7e4b;  */

void FUN_1098d7e38(void)

{
  FUN_1098d7dcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d7e4c; end: 1098d7e57;  */

undefined ** FUN_1098d7e4c(void)

{
  return &PTR_DAT_110b1aaf0;
}



/* Entry: 1098d7e58; end: 1098d7eb7;  */

void FUN_1098d7e58(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_1098d7c18(*(undefined8 *)(param_1 + 0x28));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
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



/* Entry: 1098d7eb8; end: 1098d8017;  */

long * FUN_1098d7eb8(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  plVar1 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar1 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x14),param_2,param_3);
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 != 0) {
      puVar8 = (undefined8 *)*puVar8;
      goto LAB_1098d7f20;
    }
  }
  else if (*(char *)((long)puVar8 + 0x17) != '\0') {
LAB_1098d7f20:
    func_0x000107c303d4(puVar8,lVar4,1,&UNK_10f58736e);
    plVar1 = param_3;
    func_0x0001098d839c(param_3,2);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    plVar2 = param_3;
    func_0x000107c28094(param_3,plVar1);
    plVar1 = (long *)(ulong)*(uint *)(param_1 + 0x38);
    uVar3 = 0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x000107c280b8(plVar1,uVar3);
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 == 0) goto LAB_1098d7fbc;
    puVar8 = (undefined8 *)*puVar8;
  }
  else if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_1098d7fbc;
  func_0x000107c303d4(puVar8,lVar4,1,&UNK_10f5873a1);
  plVar1 = param_3;
  func_0x0001098d839c(param_3,4);
LAB_1098d7fbc:
  plVar2 = plVar1;
  if (*(long *)(param_1 + 0x30) != 0) {
    plVar2 = param_3;
    func_0x000107c282c4(param_3,*(long *)(param_1 + 0x30),plVar1);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    if (*param_3 - (long)plVar2 < (long)(int)uVar5) {
      while( true ) {
        iVar9 = ((int)*param_3 - (int)plVar2) + 0x10;
        iVar7 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar7 - iVar9);
        if (iVar7 - iVar9 == 0 || iVar7 < iVar9) break;
        func_0x00010b4d5738();
        lVar4 = (long)plVar2 + (long)iVar9;
        plVar2 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar2 + (long)iVar7);
    }
    _memcpy(plVar2,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)uVar5);
  }
  return plVar2;
}



/* Entry: 1098d8018; end: 1098d8107;  */

long FUN_1098d8018(long param_1)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_1098d8050;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_1098d8050:
    lVar3 = 0;
    goto LAB_1098d8054;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_1098d8054:
  uVar1 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    lVar3 = lVar3 + uVar1 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x0001098d7cd4();
    func_0x0001098d8384();
    lVar3 = lVar3 + lVar2 + extraout_x8 + 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar3 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x30)) * -9 + 0x2c0U >> 6) + lVar3;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x38)) * -9 + 0x280U >> 6) + 1;
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



/* Entry: 1098d8108; end: 1098d8223;  */

void FUN_1098d8108(long param_1,long param_2)

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
      FUN_1098d82f8(uVar2,*(undefined8 *)(param_2 + 0x28));
      *(ulong *)(param_1 + 0x28) = uVar2;
    }
    else {
      FUN_1098d7d38();
    }
  }
  if (*(long *)(param_2 + 0x30) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_2 + 0x38);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 1098d8224; end: 1098d8233;  */

void FUN_1098d8224(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x0001098d83b4();
  }
  *puVar1 = &PTR_FUN_110b1aa18;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 1098d8234; end: 1098d82f7;  */

void FUN_1098d8234(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x0001098d83b4();
  }
  *puVar1 = &PTR_FUN_110b1aa18;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 1098d82f8; end: 1098d837b;  */

undefined8 * FUN_1098d82f8(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x0001098d83b4();
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110b1aa18;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x0001098d82b4(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  puVar2[3] = param_1;
  return puVar2;
}



/* Entry: 1098d837c; end: 1098d83db;  */

void FUN_1098d837c(void)

{
  return;
}



/* Entry: 1098d83dc; end: 1098d8403;  */

undefined8 FUN_1098d83dc(undefined8 param_1)

{
  func_0x0001098d8e84();
  func_0x0001098d8e6c();
  return param_1;
}



/* Entry: 1098d8404; end: 1098d8407;  */

undefined8 FUN_1098d8404(undefined8 param_1)

{
  func_0x0001098d8e84();
  func_0x0001098d8e6c();
  return param_1;
}



/* Entry: 1098d8408; end: 1098d841b;  */

void FUN_1098d8408(void)

{
  FUN_1098d83dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d841c; end: 1098d8427;  */

undefined ** FUN_1098d841c(void)

{
  return &PTR_DAT_110b1acf8;
}



/* Entry: 1098d8428; end: 1098d8453;  */

void FUN_1098d8428(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001098d8dd0();
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



/* Entry: 1098d8454; end: 1098d84cf;  */

long * FUN_1098d8454(undefined8 param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x0001098d8df4();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1098d8498;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1098d8498;
  func_0x0001098d8e40();
  func_0x0001098d8db0();
  unaff_x19 = unaff_x22;
LAB_1098d8498:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x19;
  }
  func_0x0001098d8ed4();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x20 - (long)unaff_x19 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x20 - (int)unaff_x19) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      unaff_x19 = unaff_x20;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x19 + (long)iVar3);
  }
  _memcpy(unaff_x19,lVar2,param_3 & 0xffffffff);
  return (long *)((long)unaff_x19 + (long)(int)param_3);
}



/* Entry: 1098d84d0; end: 1098d856f;  */

void FUN_1098d84d0(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0001098d8d9c();
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
    func_0x0001098d8ec8();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 1098d8570; end: 1098d8597;  */

undefined8 FUN_1098d8570(undefined8 param_1)

{
  func_0x0001098d8e84();
  func_0x0001098d8e6c();
  return param_1;
}



/* Entry: 1098d8598; end: 1098d859b;  */

undefined8 FUN_1098d8598(undefined8 param_1)

{
  func_0x0001098d8e84();
  func_0x0001098d8e6c();
  return param_1;
}



/* Entry: 1098d859c; end: 1098d85af;  */

void FUN_1098d859c(void)

{
  FUN_1098d8570();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d85b0; end: 1098d85bb;  */

undefined ** FUN_1098d85b0(void)

{
  return &PTR_DAT_110b1ad48;
}



/* Entry: 1098d85bc; end: 1098d85eb;  */

void FUN_1098d85bc(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001098d8dd0();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
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



/* Entry: 1098d85ec; end: 1098d8687;  */

long * FUN_1098d85ec(long *param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *plVar4;
  int iVar5;
  
  func_0x0001098d8ef8();
  if (extraout_w8 != 0) {
    func_0x0001098d8ee0();
    func_0x0001098d8eac();
    func_0x0001098d8eec();
    unaff_x20 = param_1;
  }
  plVar4 = (long *)(*(ulong *)(unaff_x21 + 0x10) & 0xfffffffffffffffc);
  if (*(char *)((long)plVar4 + 0x17) < '\0') {
    if (plVar4[1] == 0) goto LAB_1098d8650;
    plVar4 = (long *)*plVar4;
  }
  else if (*(char *)((long)plVar4 + 0x17) == '\0') goto LAB_1098d8650;
  func_0x0001098d8e40();
  func_0x0001098d8e58();
  unaff_x20 = plVar4;
LAB_1098d8650:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0001098d8ed4();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)unaff_x20 < (long)(int)param_3) {
    while( true ) {
      iVar5 = ((int)*unaff_x19 - (int)unaff_x20) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar5;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar5) break;
      func_0x00010b4d5738();
      unaff_x20 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x20 + (long)iVar3);
  }
  _memcpy(unaff_x20,lVar2,param_3 & 0xffffffff);
  return (long *)((long)unaff_x20 + (long)(int)param_3);
}



/* Entry: 1098d8688; end: 1098d873f;  */

void FUN_1098d8688(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0001098d8d9c();
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
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    func_0x0001098d8e8c();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001098d8ec8();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x1c) = iVar1;
  return;
}



/* Entry: 1098d8740; end: 1098d8767;  */

undefined8 FUN_1098d8740(undefined8 param_1)

{
  func_0x0001098d8e84();
  func_0x0001098d8e6c();
  return param_1;
}



/* Entry: 1098d8768; end: 1098d876b;  */

undefined8 FUN_1098d8768(undefined8 param_1)

{
  func_0x0001098d8e84();
  func_0x0001098d8e6c();
  return param_1;
}



/* Entry: 1098d876c; end: 1098d877f;  */

void FUN_1098d876c(void)

{
  FUN_1098d8740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d8780; end: 1098d878b;  */

undefined ** FUN_1098d8780(void)

{
  return &PTR_DAT_110b1ada0;
}



/* Entry: 1098d878c; end: 1098d87b7;  */

void FUN_1098d878c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001098d8dd0();
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



/* Entry: 1098d87b8; end: 1098d8833;  */

long * FUN_1098d87b8(undefined8 param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x0001098d8df4();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1098d87fc;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1098d87fc;
  func_0x0001098d8e40();
  func_0x0001098d8db0();
  unaff_x19 = unaff_x22;
LAB_1098d87fc:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x19;
  }
  func_0x0001098d8ed4();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x20 - (long)unaff_x19 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x20 - (int)unaff_x19) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      unaff_x19 = unaff_x20;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x19 + (long)iVar3);
  }
  _memcpy(unaff_x19,lVar2,param_3 & 0xffffffff);
  return (long *)((long)unaff_x19 + (long)(int)param_3);
}



/* Entry: 1098d8834; end: 1098d88d3;  */

void FUN_1098d8834(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0001098d8d9c();
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
    func_0x0001098d8ec8();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 1098d88d4; end: 1098d88fb;  */

undefined8 FUN_1098d88d4(undefined8 param_1)

{
  func_0x0001098d8e84();
  func_0x0001098d8e6c();
  return param_1;
}



/* Entry: 1098d88fc; end: 1098d88ff;  */

undefined8 FUN_1098d88fc(undefined8 param_1)

{
  func_0x0001098d8e84();
  func_0x0001098d8e6c();
  return param_1;
}



/* Entry: 1098d8900; end: 1098d8913;  */

void FUN_1098d8900(void)

{
  FUN_1098d88d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d8914; end: 1098d891f;  */

undefined ** FUN_1098d8914(void)

{
  return &PTR_DAT_110b1adf0;
}



/* Entry: 1098d8920; end: 1098d894f;  */

void FUN_1098d8920(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001098d8dd0();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
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



/* Entry: 1098d8950; end: 1098d89eb;  */

long * FUN_1098d8950(long *param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *plVar4;
  int iVar5;
  
  func_0x0001098d8ef8();
  if (extraout_w8 != 0) {
    func_0x0001098d8ee0();
    func_0x0001098d8eac();
    func_0x0001098d8eec();
    unaff_x20 = param_1;
  }
  plVar4 = (long *)(*(ulong *)(unaff_x21 + 0x10) & 0xfffffffffffffffc);
  if (*(char *)((long)plVar4 + 0x17) < '\0') {
    if (plVar4[1] == 0) goto LAB_1098d89b4;
    plVar4 = (long *)*plVar4;
  }
  else if (*(char *)((long)plVar4 + 0x17) == '\0') goto LAB_1098d89b4;
  func_0x0001098d8e40();
  func_0x0001098d8e58();
  unaff_x20 = plVar4;
LAB_1098d89b4:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0001098d8ed4();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)unaff_x20 < (long)(int)param_3) {
    while( true ) {
      iVar5 = ((int)*unaff_x19 - (int)unaff_x20) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar5;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar5) break;
      func_0x00010b4d5738();
      unaff_x20 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x20 + (long)iVar3);
  }
  _memcpy(unaff_x20,lVar2,param_3 & 0xffffffff);
  return (long *)((long)unaff_x20 + (long)(int)param_3);
}



/* Entry: 1098d89ec; end: 1098d8aa3;  */

void FUN_1098d89ec(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0001098d8d9c();
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
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    func_0x0001098d8e8c();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001098d8ec8();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x1c) = iVar1;
  return;
}



/* Entry: 1098d8aa4; end: 1098d8acb;  */

undefined8 FUN_1098d8aa4(undefined8 param_1)

{
  func_0x0001098d8e84();
  func_0x0001098d8e6c();
  return param_1;
}



/* Entry: 1098d8acc; end: 1098d8acf;  */

undefined8 FUN_1098d8acc(undefined8 param_1)

{
  func_0x0001098d8e84();
  func_0x0001098d8e6c();
  return param_1;
}



/* Entry: 1098d8ad0; end: 1098d8ae3;  */

void FUN_1098d8ad0(void)

{
  FUN_1098d8aa4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d8ae4; end: 1098d8aef;  */

undefined ** FUN_1098d8ae4(void)

{
  return &PTR_DAT_110b1ae48;
}



/* Entry: 1098d8af0; end: 1098d8b1b;  */

void FUN_1098d8af0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001098d8dd0();
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



/* Entry: 1098d8b1c; end: 1098d8b97;  */

long * FUN_1098d8b1c(undefined8 param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x0001098d8df4();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1098d8b60;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1098d8b60;
  func_0x0001098d8e40();
  func_0x0001098d8db0();
  unaff_x19 = unaff_x22;
LAB_1098d8b60:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x19;
  }
  func_0x0001098d8ed4();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x20 - (long)unaff_x19 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x20 - (int)unaff_x19) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      unaff_x19 = unaff_x20;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x19 + (long)iVar3);
  }
  _memcpy(unaff_x19,lVar2,param_3 & 0xffffffff);
  return (long *)((long)unaff_x19 + (long)(int)param_3);
}



/* Entry: 1098d8b98; end: 1098d8c37;  */

void FUN_1098d8b98(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0001098d8d9c();
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
    func_0x0001098d8ec8();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 1098d8c38; end: 1098d8c5f;  */

void FUN_1098d8c38(undefined8 param_1,long param_2)

{
  undefined8 extraout_x8;
  
  if (param_2 == 0) {
    func_0x0001098d8e7c();
  }
  else {
    func_0x0001098d8dc4();
  }
  func_0x0001098d8e20(&PTR_FUN_110b1ab78);
  *(undefined8 *)(param_2 + 0x10) = extraout_x8;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}



/* Entry: 1098d8c60; end: 1098d8d83;  */

void FUN_1098d8c60(long param_1)

{
  undefined8 extraout_x8;
  
  if (param_1 == 0) {
    func_0x0001098d8e7c();
  }
  else {
    func_0x0001098d8dc4();
  }
  func_0x0001098d8e20(&PTR_FUN_110b1ab78);
  *(undefined8 *)(param_1 + 0x10) = extraout_x8;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 1098d8d84; end: 1098d8f0b;  */

void FUN_1098d8d84(void)

{
  return;
}



/* Entry: 1098d8f0c; end: 1098d8f37;  */

long FUN_1098d8f0c(long param_1)

{
  func_0x0001098d9b80();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 1098d8f38; end: 1098d8f3b;  */

long FUN_1098d8f38(long param_1)

{
  func_0x0001098d9b80();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 1098d8f3c; end: 1098d8f4f;  */

void FUN_1098d8f3c(void)

{
  FUN_1098d8f0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d8f50; end: 1098d8f5b;  */

undefined ** FUN_1098d8f50(void)

{
  return &PTR_DAT_110b1b058;
}



/* Entry: 1098d8f5c; end: 1098d906f;  */

void FUN_1098d8f5c(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 1098d9070; end: 1098d9073;  */

void FUN_1098d9070(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
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



/* Entry: 1098d9074; end: 1098d90df;  */

void FUN_1098d9074(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
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



/* Entry: 1098d90e0; end: 1098d913b;  */

void FUN_1098d90e0(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_2 + 0x1c);
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



/* Entry: 1098d913c; end: 1098d915f;  */

undefined8 FUN_1098d913c(undefined8 param_1)

{
  func_0x0001098d9b80();
  return param_1;
}



/* Entry: 1098d9160; end: 1098d9163;  */

undefined8 FUN_1098d9160(undefined8 param_1)

{
  func_0x0001098d9b80();
  return param_1;
}



/* Entry: 1098d9164; end: 1098d9177;  */

void FUN_1098d9164(void)

{
  FUN_1098d913c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d9178; end: 1098d9197;  */

undefined ** FUN_1098d9178(void)

{
  return &PTR_DAT_110b1b098;
}



/* Entry: 1098d9198; end: 1098d9267;  */

long * FUN_1098d9198(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  int iVar3;
  long *plVar4;
  int iVar5;
  
  lVar1 = param_1;
  plVar4 = param_3;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar2 = param_1;
    func_0x0001098d9b4c();
    lVar1 = 0xd;
    func_0x000107c280a8(0xd,lVar2);
    func_0x0001098d9c0c();
  }
  lVar2 = lVar1;
  if (*(int *)(param_1 + 0x14) != 0) {
    func_0x0001098d9b4c();
    lVar2 = 0x15;
    func_0x000107c280a8(0x15,lVar1);
    func_0x0001098d9c0c();
  }
  lVar1 = lVar2;
  if (*(int *)(param_1 + 0x18) != 0) {
    func_0x0001098d9b4c();
    lVar1 = 0x1d;
    func_0x000107c280a8(0x1d,lVar2);
    func_0x0001098d9c0c();
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x0001098d9b4c();
    func_0x000107c280a8(0x25,lVar1);
    func_0x0001098d9c0c();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001098d9c00();
    if ((long)plVar4 < 0) {
      lVar1 = *(long *)(extraout_x8 + 8);
      plVar4 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar1 = extraout_x8 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)plVar4) {
      while( true ) {
        iVar5 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar3 = (int)plVar4;
        plVar4 = (long *)(ulong)(uint)(iVar3 - iVar5);
        if (iVar3 - iVar5 == 0 || iVar3 < iVar5) break;
        func_0x00010b4d5738();
        lVar1 = (long)param_2 + (long)iVar5;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar3);
    }
    _memcpy(param_2,lVar1,(ulong)plVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar4);
  }
  return param_2;
}



/* Entry: 1098d9268; end: 1098d92cf;  */

long FUN_1098d9268(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = 5;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + 5;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + 5;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    lVar1 = lVar1 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x20) = (int)lVar1;
  return lVar1;
}



/* Entry: 1098d92d0; end: 1098d92fb;  */

undefined8 FUN_1098d92d0(undefined8 param_1)

{
  func_0x0001098d9b80();
  FUN_1098d92fc(param_1);
  return param_1;
}



/* Entry: 1098d92fc; end: 1098d9323;  */

void FUN_1098d92fc(void)

{
  long unaff_x19;
  
  func_0x0001098d9bdc();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_1098d913c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d9324; end: 1098d9327;  */

undefined8 FUN_1098d9324(undefined8 param_1)

{
  func_0x0001098d9b80();
  FUN_1098d92fc(param_1);
  return param_1;
}



/* Entry: 1098d9328; end: 1098d933b;  */

void FUN_1098d9328(void)

{
  FUN_1098d92d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d933c; end: 1098d9347;  */

undefined ** FUN_1098d933c(void)

{
  return &PTR_DAT_110b1b0d8;
}



/* Entry: 1098d9348; end: 1098d9387;  */

void FUN_1098d9348(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001098d9be8();
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x0001098d9184(*(undefined8 *)(unaff_x19 + 0x20));
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



/* Entry: 1098d9388; end: 1098d943b;  */

long * FUN_1098d9388(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  
  plVar2 = param_3;
  func_0x0001098d9c2c();
  puVar4 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar1 = (long)*(char *)((long)puVar4 + 0x17);
  if (lVar1 < 0) {
    lVar1 = puVar4[1];
    if (lVar1 == 0) goto LAB_1098d93e8;
    puVar4 = (undefined8 *)*puVar4;
  }
  else if (*(char *)((long)puVar4 + 0x17) == '\0') goto LAB_1098d93e8;
  plVar2 = (long *)0x1;
  func_0x000107c303d4(puVar4,lVar1,1,&UNK_10f58750a);
  unaff_x20 = param_3;
  func_0x0001098d9bb0(param_3,1);
LAB_1098d93e8:
  if ((*(byte *)(unaff_x21 + 0x10) & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(*(long *)(unaff_x21 + 0x20) + 0x20);
    unaff_x20 = (long *)0x2;
    func_0x0001098d9b60();
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0001098d9c00();
  if ((long)plVar2 < 0) {
    lVar1 = *(long *)(extraout_x8 + 8);
    plVar2 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar1 = extraout_x8 + 8;
  }
  if (*param_3 - (long)unaff_x20 < (long)(int)plVar2) {
    while( true ) {
      iVar5 = ((int)*param_3 - (int)unaff_x20) + 0x10;
      iVar3 = (int)plVar2;
      plVar2 = (long *)(ulong)(uint)(iVar3 - iVar5);
      if (iVar3 - iVar5 == 0 || iVar3 < iVar5) break;
      func_0x00010b4d5738();
      lVar1 = (long)unaff_x20 + (long)iVar5;
      unaff_x20 = param_3;
      func_0x000107c303e4(param_3,lVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x20 + (long)iVar3);
  }
  _memcpy(unaff_x20,lVar1,(ulong)plVar2 & 0xffffffff);
  return (long *)((long)unaff_x20 + (long)(int)plVar2);
}



/* Entry: 1098d943c; end: 1098d94af;  */

long FUN_1098d943c(long param_1)

{
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  
  func_0x0001098d9c18();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c282a0();
    param_1 = param_1 + 1;
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_1098d9268(*(undefined8 *)(unaff_x19 + 0x20));
    func_0x0001098d9b1c();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    param_1 = lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = (int)param_1;
  return param_1;
}



/* Entry: 1098d94b0; end: 1098d94b3;  */

void FUN_1098d94b0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001098d9c2c();
  uVar3 = *(ulong *)(param_1 + 8);
  uVar1 = uVar3;
  if ((uVar3 & 1) != 0) {
    uVar1 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar2 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(unaff_x21 + 0x18,uVar2,uVar3);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x20) == 0) {
      FUN_1098d99b4(uVar1,*(undefined8 *)(unaff_x20 + 0x20));
      *(ulong *)(unaff_x21 + 0x20) = uVar1;
    }
    else {
      FUN_1098d90e0();
    }
  }
  func_0x0001098d9c38();
  if ((extraout_x8 & 1) != 0) {
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



/* Entry: 1098d94b4; end: 1098d955f;  */

void FUN_1098d94b4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001098d9c2c();
  uVar3 = *(ulong *)(param_1 + 8);
  uVar1 = uVar3;
  if ((uVar3 & 1) != 0) {
    uVar1 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar2 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(unaff_x21 + 0x18,uVar2,uVar3);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x20) == 0) {
      FUN_1098d99b4(uVar1,*(undefined8 *)(unaff_x20 + 0x20));
      *(ulong *)(unaff_x21 + 0x20) = uVar1;
    }
    else {
      FUN_1098d90e0();
    }
  }
  func_0x0001098d9c38();
  if ((extraout_x8 & 1) != 0) {
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



/* Entry: 1098d9560; end: 1098d958b;  */

undefined8 FUN_1098d9560(undefined8 param_1)

{
  func_0x0001098d9b80();
  FUN_1098d958c(param_1);
  return param_1;
}



/* Entry: 1098d958c; end: 1098d95c3;  */

void FUN_1098d958c(void)

{
  long unaff_x19;
  
  func_0x0001098d9bdc();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_1098d8f0c();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_1098d92d0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d95c4; end: 1098d95c7;  */

undefined8 FUN_1098d95c4(undefined8 param_1)

{
  func_0x0001098d9b80();
  FUN_1098d958c(param_1);
  return param_1;
}



/* Entry: 1098d95c8; end: 1098d95db;  */

void FUN_1098d95c8(void)

{
  FUN_1098d9560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d95dc; end: 1098d95e7;  */

undefined ** FUN_1098d95dc(void)

{
  return &PTR_DAT_110b1b120;
}



/* Entry: 1098d95e8; end: 1098d963b;  */

void FUN_1098d95e8(void)

{
  uint uVar1;
  long unaff_x19;
  ulong *puVar2;
  
  func_0x0001098d9be8();
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_1098d8f5c(*(undefined8 *)(unaff_x19 + 0x20));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1098d9348(*(undefined8 *)(unaff_x19 + 0x28));
    }
  }
  puVar2 = (ulong *)(unaff_x19 + 8);
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
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 1098d963c; end: 1098d9723;  */

long * FUN_1098d963c(long param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  
  plVar3 = param_3;
  func_0x0001098d9c2c();
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    plVar3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x21 + 0x20) + 0x18);
    unaff_x20 = (long *)0x1;
    func_0x0001098d9b60();
  }
  puVar5 = (undefined8 *)(*(ulong *)(unaff_x21 + 0x18) & 0xfffffffffffffffc);
  lVar2 = (long)*(char *)((long)puVar5 + 0x17);
  if (lVar2 < 0) {
    lVar2 = puVar5[1];
    if (lVar2 == 0) goto LAB_1098d96bc;
    puVar5 = (undefined8 *)*puVar5;
  }
  else if (*(char *)((long)puVar5 + 0x17) == '\0') goto LAB_1098d96bc;
  plVar3 = (long *)0x1;
  func_0x000107c303d4(puVar5,lVar2,1,&UNK_10f587537);
  unaff_x20 = param_3;
  func_0x0001098d9bb0(param_3,2);
LAB_1098d96bc:
  if ((uVar1 >> 1 & 1) != 0) {
    plVar3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x21 + 0x28) + 0x14);
    unaff_x20 = (long *)0x3;
    func_0x0001098d9b60();
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0001098d9c00();
  if ((long)plVar3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar3 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*param_3 - (long)unaff_x20 < (long)(int)plVar3) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)unaff_x20) + 0x10;
      iVar4 = (int)plVar3;
      plVar3 = (long *)(ulong)(uint)(iVar4 - iVar6);
      if (iVar4 - iVar6 == 0 || iVar4 < iVar6) break;
      func_0x00010b4d5738();
      lVar2 = (long)unaff_x20 + (long)iVar6;
      unaff_x20 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x20 + (long)iVar4);
  }
  _memcpy(unaff_x20,lVar2,(ulong)plVar3 & 0xffffffff);
  return (long *)((long)unaff_x20 + (long)(int)plVar3);
}



/* Entry: 1098d9724; end: 1098d97b3;  */

long FUN_1098d9724(long param_1)

{
  uint uVar1;
  long extraout_x8;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  
  func_0x0001098d9c18();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c282a0();
    param_1 = param_1 + 1;
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001098d9008(*(undefined8 *)(unaff_x19 + 0x20));
      func_0x0001098d9b1c();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1098d943c(*(undefined8 *)(unaff_x19 + 0x28));
      func_0x0001098d9b1c();
    }
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    param_1 = lVar2 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = (int)param_1;
  return param_1;
}



/* Entry: 1098d97b4; end: 1098d988f;  */

void FUN_1098d97b4(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001098d9c2c();
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(unaff_x21 + 0x18,uVar3,uVar4);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x20) == 0) {
        uVar4 = uVar2;
        func_0x0001098d9a24(uVar2,*(undefined8 *)(unaff_x20 + 0x20));
        *(ulong *)(unaff_x21 + 0x20) = uVar4;
      }
      else {
        FUN_1098d9074();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x28) == 0) {
        func_0x0001098d9a90(uVar2,*(undefined8 *)(unaff_x20 + 0x28));
        *(ulong *)(unaff_x21 + 0x28) = uVar2;
      }
      else {
        FUN_1098d94b4();
      }
    }
  }
  func_0x0001098d9c38();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1098d9890; end: 1098d98af;  */

void FUN_1098d9890(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x0001098d9bc4();
  }
  *puVar1 = &PTR_FUN_110b1af28;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 1098d98b0; end: 1098d99b3;  */

void FUN_1098d98b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x0001098d9bc4();
  }
  *puVar1 = &PTR_FUN_110b1af28;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 1098d99b4; end: 1098d9a23;  */

undefined8 * FUN_1098d99b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001098d9ba8();
  }
  else {
    func_0x00010b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110b1af78;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_1098d90e0();
  return puVar1;
}



/* Entry: 1098d9a24; end: 1098d9b1b;  */

undefined8 * FUN_1098d9a24(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x0001098d9bc4();
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110b1af28;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x0001098d9bd0();
  }
  param_2 = param_2 + 0x10;
  func_0x000107c2809c(param_2,param_1);
  puVar1[2] = param_2;
  *(undefined4 *)(puVar1 + 3) = 0;
  return puVar1;
}



/* Entry: 1098d9b1c; end: 1098d9c5f;  */

void FUN_1098d9b1c(void)

{
  return;
}



/* Entry: 1098d9c60; end: 1098d9c8b;  */

undefined8 FUN_1098d9c60(undefined8 param_1)

{
  func_0x0001098db284();
  FUN_1098d9c8c(param_1);
  return param_1;
}



/* Entry: 1098d9c8c; end: 1098d9cb3;  */

undefined8 FUN_1098d9c8c(long param_1)

{
  undefined1 in_ZR;
  undefined8 unaff_x19;
  
  func_0x000107c30258(param_1 + 0x30);
  func_0x00010006804c(param_1 + 0x10);
  if (!(bool)in_ZR) {
    func_0x000105992fbc(unaff_x19,0x300380020);
  }
  return unaff_x19;
}



/* Entry: 1098d9cb4; end: 1098d9cb7;  */

undefined8 FUN_1098d9cb4(undefined8 param_1)

{
  func_0x0001098db284();
  FUN_1098d9c8c(param_1);
  return param_1;
}



/* Entry: 1098d9cb8; end: 1098d9ccb;  */

void FUN_1098d9cb8(void)

{
  FUN_1098d9c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098d9ccc; end: 1098d9cd7;  */

undefined ** FUN_1098d9ccc(void)

{
  return &PTR_DAT_110b1b300;
}



/* Entry: 1098d9cd8; end: 1098d9d0f;  */

void FUN_1098d9cd8(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001098db3ac();
  func_0x000107c3025c(unaff_x19 + 0x30);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
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



/* Entry: 1098d9d10; end: 1098d9ee3;  */

long * FUN_1098d9d10(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long extraout_x8;
  long lStack_68;
  long *plStack_60;
  
  uVar4 = param_1[6] & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  plVar2 = param_1;
  if (lVar5 != 0) {
    plVar2 = param_3;
    func_0x000107c280a0(param_3,1,uVar4,param_2);
    param_2 = plVar2;
  }
  if ((int)param_1[2] != 0) {
    if (((int)param_1[2] == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      func_0x0001098db28c();
      plVar1 = plVar2;
      while (plVar2 = plVar1, lStack_68 != 0) {
        uVar4 = lStack_68 + 0x20;
        func_0x0001098db2e0();
        plVar1 = plVar2;
        func_0x0001098db1a8();
        func_0x0001098db294();
        param_2 = plVar2;
      }
    }
    else {
      plVar1 = &lStack_68;
      func_0x000105991b98(plVar1);
      for (lStack_68 = lStack_68 << 3; plVar2 = plVar1, lStack_68 != 0; lStack_68 = lStack_68 + -8)
      {
        uVar4 = *plStack_60 + 0x18;
        func_0x0001098db2e0();
        plVar1 = plVar2;
        func_0x0001098db1a8();
        plStack_60 = plStack_60 + 1;
        param_2 = plVar2;
      }
      func_0x0001098db2fc();
    }
  }
  plVar1 = plVar2;
  if ((char)param_1[7] == '\x01') {
    func_0x0001098db278();
    plVar1 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x0001098db1ec();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x39) == '\x01') {
    func_0x0001098db278();
    plVar2 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar1);
    func_0x0001098db1ec();
    param_2 = plVar2;
  }
  if (*(int *)((long)param_1 + 0x3c) != 0) {
    func_0x0001098db278();
    param_2 = (long *)(ulong)*(uint *)((long)param_1 + 0x3c);
    uVar3 = 0x28;
    func_0x000107c280a8(0x28,plVar2);
    func_0x000107c280b8(param_2,uVar3);
  }
  if ((param_1[1] & 1U) != 0) {
    func_0x0001098db31c();
    if ((long)uVar4 < 0) {
      lVar5 = *(long *)(extraout_x8 + 8);
    }
    else {
      lVar5 = extraout_x8 + 8;
    }
    func_0x0001053930c4(param_3,lVar5);
    param_2 = param_3;
  }
  return param_2;
}



/* Entry: 1098d9ee4; end: 1098d9f57;  */

long FUN_1098d9ee4(int param_1,undefined8 param_2,long *param_3,undefined8 param_4,long *param_5)

{
  long *plVar1;
  byte bVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  undefined8 extraout_x8_00;
  uint extraout_w10;
  uint uVar4;
  uint extraout_w10_00;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  
  plVar1 = param_5;
  func_0x0001098db390(param_5);
  func_0x000107c280a8(param_1 << 3 | 2,plVar1);
  func_0x0001098daf20(param_2,param_3);
  func_0x000107c280a8();
  func_0x0001098db2cc();
  plVar1 = (long *)0x2;
  func_0x0001098db370(2,param_3,param_2);
  lVar5 = (long)*(char *)((long)param_3 + 0x17);
  if ((-1 < lVar5) || (lVar5 = param_3[1], lVar5 < 0x80)) {
    lVar8 = *param_5;
    iVar6 = 0x10;
    func_0x000107c280a4();
    if (lVar5 <= lVar8 + ~((long)plVar1 + (long)iVar6) + 0x10) {
      lVar8 = (long)plVar1 + 2;
      bVar2 = 0x12;
      while (0x7f < bVar2) {
        *(byte *)(lVar8 + -2) = bVar2 | 0x80;
        lVar8 = lVar8 + 1;
        bVar2 = 0;
      }
      *(byte *)(lVar8 + -2) = bVar2;
      *(char *)(lVar8 + -1) = (char)lVar5;
      plVar1 = (long *)*param_3;
      if (-1 < *(char *)((long)param_3 + 0x17)) {
        plVar1 = param_3;
      }
      _memcpy(lVar8,plVar1,lVar5);
      return lVar8 + lVar5;
    }
  }
  func_0x00010b4d564c(param_5,2);
  func_0x00010b4d56cc();
  uVar4 = extraout_w10;
  while (0x7f < uVar4) {
    func_0x00010b4d576c();
    uVar4 = extraout_w10_00;
  }
  func_0x00010b4d56b4();
  uVar3 = extraout_x8;
  while (0x7f < (uint)uVar3) {
    func_0x00010b4d5758();
    uVar3 = extraout_x8_00;
  }
  func_0x00010b4d5660();
  if (*param_5 - (long)plVar1 < (long)(int)param_3) {
    while( true ) {
      iVar7 = ((int)*param_5 - (int)plVar1) + 0x10;
      iVar6 = (int)param_3;
      param_3 = (long *)(ulong)(uint)(iVar6 - iVar7);
      if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
      func_0x00010b4d5738();
      lVar5 = (long)plVar1 + (long)iVar7;
      plVar1 = param_5;
      func_0x000107c303e4(param_5,lVar5);
    }
    func_0x00010b4d5738();
    return (long)plVar1 + (long)iVar6;
  }
  _memcpy(plVar1);
  return (long)plVar1 + (long)(int)param_3;
}



/* Entry: 1098d9f58; end: 1098da037;  */

void FUN_1098d9f58(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x0001098db1d0();
  while (uStack_38 != 0) {
    param_1 = uStack_38 + 8;
    func_0x0001098da004(param_1,uStack_38 + 0x20);
    unaff_x20 = param_1 + unaff_x20;
    func_0x0001098db294();
  }
  func_0x0001098db338(*(undefined8 *)(unaff_x19 + 0x30));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    func_0x0001098db3c4();
  }
  iVar1 = (int)unaff_x20 + (uint)*(byte *)(unaff_x19 + 0x38) * 2 +
          (uint)*(byte *)(unaff_x19 + 0x39) * 2;
  if (*(int *)(unaff_x19 + 0x3c) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x3c)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001098db410();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x40) = iVar1;
  return;
}



/* Entry: 1098da038; end: 1098da03b;  */

void FUN_1098da038(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001098db258();
  func_0x0001059929d4();
  func_0x0001098db350(*(undefined8 *)(unaff_x20 + 0x30));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001098db344();
    }
    param_1 = (ulong *)(unaff_x19 + 0x30);
    func_0x000107c30248();
  }
  if (*(char *)(unaff_x20 + 0x38) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x38) = 1;
  }
  if (*(char *)(unaff_x20 + 0x39) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x39) = 1;
  }
  if (*(int *)(unaff_x20 + 0x3c) != 0) {
    *(int *)(unaff_x19 + 0x3c) = *(int *)(unaff_x20 + 0x3c);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098db328();
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



/* Entry: 1098da03c; end: 1098da0bf;  */

void FUN_1098da03c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001098db258();
  func_0x0001059929d4();
  func_0x0001098db350(*(undefined8 *)(unaff_x20 + 0x30));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001098db344();
    }
    param_1 = (ulong *)(unaff_x19 + 0x30);
    func_0x000107c30248();
  }
  if (*(char *)(unaff_x20 + 0x38) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x38) = 1;
  }
  if (*(char *)(unaff_x20 + 0x39) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x39) = 1;
  }
  if (*(int *)(unaff_x20 + 0x3c) != 0) {
    *(int *)(unaff_x19 + 0x3c) = *(int *)(unaff_x20 + 0x3c);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098db328();
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



/* Entry: 1098da0c0; end: 1098da0f7;  */

void FUN_1098da0c0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110b1b1d0;
  param_1[1] = param_2;
  param_1[3] = 0x100000000;
  param_1[2] = 0x100000000;
  param_1[4] = &DAT_10e5b4a18;
  param_1[5] = param_2;
  param_1[6] = &DAT_11383d918;
  *(undefined4 *)(param_1 + 7) = 0;
  return;
}


