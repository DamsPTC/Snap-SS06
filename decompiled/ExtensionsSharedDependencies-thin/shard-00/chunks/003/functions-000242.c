/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004f30e0; end: 004f314f;  */

void FUN_004f30e0(int param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x004f362c();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x004f3600();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    param_1 = param_1 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x20)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004f35b0();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 004f3150; end: 004f317b;  */

void FUN_004f3150(void)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004f354c();
  uVar2 = *(ulong *)(unaff_x19 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x18) == 0) {
      func_0x004d3428();
      *(ulong *)(unaff_x21 + 0x18) = uVar2;
    }
    else {
      FUN_004d9d18(*(long *)(unaff_x21 + 0x18));
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004f356c();
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 004f317c; end: 004f3243;  */

void FUN_004f317c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x004f35e8();
  }
  else {
    func_0x004f35f0();
  }
  *puVar1 = &PTR_DAT_009f5ea8;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_00b69408;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 004f3244; end: 004f347b;  */

qword * FUN_004f3244(qword *param_1,long param_2)

{
  uint uVar1;
  qword *pqVar2;
  qword *pqVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 == (qword *)0x0) {
    pqVar2 = &segment_command_00000020.vmsize;
    __Znwm();
  }
  else {
    pqVar2 = param_1;
    func_0x005510c4(param_1,0x40);
  }
  pqVar2[1] = (qword)param_1;
  *pqVar2 = (qword)&PTR_FUN_009f5f48;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x004f34e0();
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(pqVar2 + 2) = uVar1;
  *(undefined4 *)((long)pqVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    pqVar3 = (qword *)0x0;
  }
  else {
    pqVar3 = param_1;
    func_0x004d3428(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  pqVar2[3] = (qword)pqVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_1 = (qword *)0x0;
  }
  else {
    func_0x004d3428(param_1,*(undefined8 *)(param_2 + 0x20));
  }
  pqVar2[4] = (qword)param_1;
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  *(undefined1 *)(pqVar2 + 7) = *(undefined1 *)(param_2 + 0x38);
  pqVar2[6] = uVar5;
  pqVar2[5] = uVar4;
  return pqVar2;
}



/* Entry: 004f347c; end: 004f34bb;  */

undefined8 * FUN_004f347c(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x004f3588();
  if (param_1 == 0) {
    lVar2 = 0x38;
    __Znwm();
  }
  else {
    lVar2 = unaff_x20;
    func_0x005510c4();
  }
  puVar3 = unaff_x19;
  func_0x005233c8();
  *(long *)(lVar2 + 8) = unaff_x20;
  *unaff_x19 = &PTR_FUN_00a00110;
  if ((puVar3[1] & 1) != 0) {
    func_0x005231a4();
  }
  puVar3 = unaff_x19 + 2;
  func_0x0052348c();
  unaff_x19[2] = puVar3;
  puVar3 = unaff_x19 + 3;
  func_0x0052348c();
  unaff_x19[3] = puVar3;
  *(undefined4 *)(unaff_x19 + 6) = 0;
  uVar1 = *(undefined4 *)((long)unaff_x19 + 0x34);
  *(undefined4 *)((long)unaff_x19 + 0x34) = uVar1;
  *(undefined4 *)(unaff_x19 + 4) = *(undefined4 *)(unaff_x19 + 4);
  switch(uVar1) {
  case 1:
    func_0x005233b0();
    func_0x005229c0();
    break;
  case 2:
    func_0x005233b0();
    func_0x00522a3c();
    break;
  case 3:
    func_0x005233b0();
    FUN_00522ac8();
    break;
  case 4:
    func_0x005233b0();
    func_0x00522c34();
    break;
  default:
    goto LAB_0051f698;
  case 6:
    func_0x005233b0();
    func_0x00522ce8();
  }
  unaff_x19[5] = puVar3;
LAB_0051f698:
  return unaff_x19;
}



/* Entry: 004f34bc; end: 004f3673;  */

void FUN_004f34bc(void)

{
  return;
}



/* Entry: 004f3674; end: 004f374b;  */

void FUN_004f3674(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long unaff_x19;
  
  func_0x004f6044();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x004f369c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_0080c868)[extraout_x8] * 4 + 0x4f36a0))();
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 004f374c; end: 004f37eb;  */

void FUN_004f374c(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *unaff_x19;
  
  lVar3 = param_3;
  func_0x004f5dec();
  puVar2 = (undefined8 *)(param_1 + 8);
  *puVar2 = param_2;
  *unaff_x19 = &PTR_DAT_009f6408;
  if ((*(ulong *)(lVar3 + 8) & 1) != 0) {
    func_0x004f5da8();
  }
  *(undefined4 *)(unaff_x19 + 3) = 0;
  uVar1 = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)((long)unaff_x19 + 0x1c) = uVar1;
  switch(uVar1) {
  case 1:
  case 3:
  case 4:
  case 6:
    func_0x004f6014();
    FUN_004f4f08();
    break;
  case 2:
    func_0x004f6014();
    FUN_004f4f48();
    break;
  case 5:
    func_0x004f6014();
    FUN_004dfb94();
    break;
  case 7:
    func_0x004f6014();
    FUN_004f4fec();
    break;
  default:
    goto LAB_004f5d00;
  }
  unaff_x19[2] = puVar2;
LAB_004f5d00:
  return;
}



/* Entry: 004f37ec; end: 004f3817;  */

undefined8 FUN_004f37ec(undefined8 param_1)

{
  func_0x004f5ddc();
  FUN_004f3818(param_1);
  return param_1;
}



/* Entry: 004f3818; end: 004f382b;  */

void FUN_004f3818(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x004f6044();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x004f369c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_0080c868)[extraout_x8] * 4 + 0x4f36a0))();
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 004f382c; end: 004f383f;  */

void FUN_004f382c(void)

{
  FUN_004f37ec();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f3840; end: 004f3857;  */

long FUN_004f3840(long param_1)

{
  func_0x004f5ddc();
  FUN_004f4c84(param_1 + 0x10);
  return param_1;
}



/* Entry: 004f3858; end: 004f3987;  */

void FUN_004f3858(long param_1)

{
  ulong *puVar1;
  
  FUN_004f3674();
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



/* Entry: 004f3988; end: 004f39cf;  */

void FUN_004f3988(void)

{
  FUN_00689454();
  func_0x004f5ce4();
  return;
}



/* Entry: 004f39d0; end: 004f39d3;  */

void FUN_004f39d0(long param_1)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004f602c();
  puVar3 = (ulong *)(param_1 + 8);
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_004f3b3c;
  iVar2 = *(int *)(unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_004f3674();
    }
    *(int *)(unaff_x21 + 0x1c) = iVar1;
  }
  switch(iVar1) {
  case 1:
    if (iVar2 != iVar1) {
code_r0x004f3ae8:
      func_0x004f5ff4();
      FUN_004f4f08();
      goto code_r0x004f3b38;
    }
    func_0x004f5d1c();
    break;
  case 2:
    if (iVar2 == iVar1) {
      func_0x004f5d34();
      func_0x004f3b60();
      goto LAB_004f3b3c;
    }
    func_0x004f5ff4();
    FUN_004f4f48();
    goto code_r0x004f3b38;
  case 3:
    if (iVar2 != iVar1) goto code_r0x004f3ae8;
    func_0x004f5d1c();
    break;
  case 4:
    if (iVar2 != iVar1) goto code_r0x004f3ae8;
    func_0x004f5d1c();
    break;
  case 5:
    if (iVar2 == iVar1) {
      func_0x004f5d34();
      func_0x004f3ba4();
      goto LAB_004f3b3c;
    }
    func_0x004f5ff4();
    FUN_004dfb94();
    goto code_r0x004f3b38;
  case 6:
    if (iVar2 != iVar1) goto code_r0x004f3ae8;
    func_0x004f5d1c();
    break;
  case 7:
    if (iVar2 == iVar1) {
      func_0x004f5d34();
      func_0x004f3be8();
      goto LAB_004f3b3c;
    }
    func_0x004f5ff4();
    FUN_004f4fec();
code_r0x004f3b38:
    *(long *)(unaff_x21 + 0x10) = param_1;
  default:
    goto LAB_004f3b3c;
  }
  func_0x0068947c();
LAB_004f3b3c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*puVar3 & 1) == 0) {
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



/* Entry: 004f39d4; end: 004f3b5f;  */

void FUN_004f39d4(long param_1)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004f602c();
  puVar3 = (ulong *)(param_1 + 8);
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_004f3b3c;
  iVar2 = *(int *)(unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_004f3674();
    }
    *(int *)(unaff_x21 + 0x1c) = iVar1;
  }
  switch(iVar1) {
  case 1:
    if (iVar2 != iVar1) {
code_r0x004f3ae8:
      func_0x004f5ff4();
      FUN_004f4f08();
      goto code_r0x004f3b38;
    }
    func_0x004f5d1c();
    break;
  case 2:
    if (iVar2 == iVar1) {
      func_0x004f5d34();
      func_0x004f3b60();
      goto LAB_004f3b3c;
    }
    func_0x004f5ff4();
    FUN_004f4f48();
    goto code_r0x004f3b38;
  case 3:
    if (iVar2 != iVar1) goto code_r0x004f3ae8;
    func_0x004f5d1c();
    break;
  case 4:
    if (iVar2 != iVar1) goto code_r0x004f3ae8;
    func_0x004f5d1c();
    break;
  case 5:
    if (iVar2 == iVar1) {
      func_0x004f5d34();
      func_0x004f3ba4();
      goto LAB_004f3b3c;
    }
    func_0x004f5ff4();
    FUN_004dfb94();
    goto code_r0x004f3b38;
  case 6:
    if (iVar2 != iVar1) goto code_r0x004f3ae8;
    func_0x004f5d1c();
    break;
  case 7:
    if (iVar2 == iVar1) {
      func_0x004f5d34();
      func_0x004f3be8();
      goto LAB_004f3b3c;
    }
    func_0x004f5ff4();
    FUN_004f4fec();
code_r0x004f3b38:
    *(long *)(unaff_x21 + 0x10) = param_1;
  default:
    goto LAB_004f3b3c;
  }
  func_0x0068947c();
LAB_004f3b3c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*puVar3 & 1) == 0) {
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



/* Entry: 004f3b60; end: 004f3c67;  */

void FUN_004f3b60(long param_1)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x004f5dec();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_004f5924();
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x19 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004f5dcc();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 004f3c68; end: 004f3cdf;  */

void FUN_004f3c68(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *unaff_x19;
  
  func_0x004f5dec();
  *(undefined8 *)(param_1 + 8) = param_2;
  *unaff_x19 = &PTR_DAT_009f6368;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x004f5da8();
  }
  FUN_004f4bbc(unaff_x19 + 2);
  func_0x004f4bdc(unaff_x19 + 5);
  *(undefined4 *)(unaff_x19 + 8) = 0;
  return;
}



/* Entry: 004f3ce0; end: 004f3d0b;  */

long FUN_004f3ce0(long param_1)

{
  func_0x004f5ddc();
  FUN_004f4c2c(param_1 + 0x10);
  return param_1;
}



/* Entry: 004f3d0c; end: 004f3d1f;  */

void FUN_004f3d0c(void)

{
  FUN_004f3ce0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f3d20; end: 004f3d2b;  */

undefined ** FUN_004f3d20(void)

{
  return &PTR_DAT_009f6490;
}



/* Entry: 004f3d2c; end: 004f3d73;  */

void FUN_004f3d2c(long param_1)

{
  ulong *puVar1;
  
  FUN_004f4ef4(param_1 + 0x10);
  if (0 < *(int *)(param_1 + 0x30)) {
    FUN_00437de0(param_1 + 0x28);
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



/* Entry: 004f3d74; end: 004f3e1f;  */

long * FUN_004f3d74(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004f5d84();
  iVar4 = *(int *)(param_1 + 0x18);
  for (iVar3 = 0; iVar4 != iVar3; iVar3 = iVar3 + 1) {
    func_0x004f5d4c();
    param_3 = (ulong)*(uint *)(param_2 + 0x24);
    param_4 = (long *)((long)&MACH_HEADER.magic + 1);
    func_0x004f5e6c();
  }
  iVar4 = *(int *)(unaff_x20 + 0x30);
  for (iVar3 = 0; iVar4 != iVar3; iVar3 = iVar3 + 1) {
    func_0x004f5d4c();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    param_4 = (long *)((long)&MACH_HEADER.magic + 2);
    func_0x004f5e6c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004f5e88();
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
  return param_4;
}



/* Entry: 004f3e20; end: 004f3ebb;  */

long FUN_004f3e20(long param_1)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  ulong uVar3;
  long extraout_x9;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar4;
  
  func_0x004f5eec();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar2 = *unaff_x21;
    FUN_004f3ebc();
    unaff_x20 = lVar2 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  uVar3 = *(ulong *)(param_1 + 0x28);
  lVar2 = unaff_x20 + *(int *)(param_1 + 0x30);
  puVar1 = (ulong *)(param_1 + 0x28);
  if ((uVar3 & 1) != 0) {
    puVar1 = (ulong *)(uVar3 + 7);
  }
  for (lVar4 = (long)*(int *)(param_1 + 0x30) << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    uVar3 = *puVar1;
    func_0x004f3ed4();
    lVar2 = uVar3 + lVar2;
    puVar1 = puVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x004f5e7c();
    lVar4 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar4 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar4 + lVar2;
  }
  *(int *)(param_1 + 0x40) = (int)lVar2;
  return lVar2;
}



/* Entry: 004f3ebc; end: 004f3eeb;  */

void FUN_004f3ebc(void)

{
  func_0x004f44d0();
  func_0x004f5ce4();
  return;
}



/* Entry: 004f3eec; end: 004f3f0f;  */

void FUN_004f3eec(long param_1,long param_2)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x004f5dec();
  FUN_004f3eec(param_1 + 0x10,param_2 + 0x10);
  puVar1 = (ulong *)(unaff_x19 + 0x28);
  func_0x004f3f00();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004f5dcc();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 004f3f10; end: 004f3f3f;  */

long FUN_004f3f10(long param_1)

{
  func_0x004f5ddc();
  func_0x004f5f38();
  func_0x00532f74(param_1 + 0x18);
  return param_1;
}



/* Entry: 004f3f40; end: 004f3f53;  */

void FUN_004f3f40(void)

{
  FUN_004f3f10();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f3f54; end: 004f3f5f;  */

undefined ** FUN_004f3f54(void)

{
  return &PTR_DAT_009f64e0;
}



/* Entry: 004f3f60; end: 004f3f97;  */

void FUN_004f3f60(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x004f5e18();
  FUN_00532fa8(unaff_x19 + 0x18);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
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



/* Entry: 004f3f98; end: 004f4037;  */

long * FUN_004f3f98(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004f5d84();
  func_0x004f5ee0(param_1[2]);
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_3 + 8);
  }
  if (lVar2 != 0) {
    func_0x004f5d9c();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x004f5f64();
    func_0x004f5fb4();
    func_0x004f5fbc();
    param_4 = param_1;
  }
  func_0x004f5ee0(*(undefined8 *)(unaff_x20 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_3 + 8);
  }
  if (lVar2 != 0) {
    func_0x004f5f58();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004f5e88();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8_01 + 8);
      param_3 = *(ulong *)(extraout_x8_01 + 0x10);
    }
    else {
      lVar2 = extraout_x8_01 + 8;
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
  return param_4;
}



/* Entry: 004f4038; end: 004f40c3;  */

long FUN_004f4038(long param_1)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  
  func_0x004f5e04();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00487c3c();
    param_1 = param_1 + 1;
  }
  uVar1 = *(ulong *)(unaff_x19 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x00487c3c();
    func_0x004f6020();
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x004f5f10();
    param_1 = param_1 + extraout_x8_00;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004f5e7c();
    lVar2 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = lVar2 + param_1;
  }
  *(int *)(unaff_x19 + 0x24) = (int)param_1;
  return param_1;
}



/* Entry: 004f40c4; end: 004f40c7;  */

void FUN_004f40c4(ulong *param_1,long param_2)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x004f5db4();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x004f5e94();
    }
    func_0x004f5f30();
  }
  uVar1 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x004f5e94();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x00532e08();
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004f5dcc();
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



/* Entry: 004f40c8; end: 004f410b;  */

long FUN_004f40c8(long param_1)

{
  func_0x004f5ddc();
  func_0x00532f74(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  FUN_004f4bfc(param_1 + 0x18);
  return param_1;
}



/* Entry: 004f410c; end: 004f410f;  */

long FUN_004f410c(long param_1)

{
  func_0x004f5ddc();
  func_0x00532f74(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  FUN_004f4bfc(param_1 + 0x18);
  return param_1;
}



/* Entry: 004f4110; end: 004f4123;  */

void FUN_004f4110(void)

{
  FUN_004f40c8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f4124; end: 004f412f;  */

undefined ** FUN_004f4124(void)

{
  return &PTR_DAT_009f6530;
}



/* Entry: 004f4130; end: 004f4183;  */

void FUN_004f4130(long param_1)

{
  ulong *puVar1;
  
  FUN_004f4ef4(param_1 + 0x18);
  FUN_00532fa8(param_1 + 0x30);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_004d9bf4(*(undefined8 *)(param_1 + 0x38));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
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



/* Entry: 004f4184; end: 004f4247;  */

dword * FUN_004f4184(dword *param_1,undefined8 param_2,ulong param_3,dword *param_4)

{
  uint uVar1;
  ulong uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  dword *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x004f5d84();
  func_0x004f5ee0(*(undefined8 *)(param_1 + 0xc));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_3 + 8);
  }
  if (lVar3 != 0) {
    func_0x004f5d9c();
    param_4 = param_1;
  }
  uVar2 = (ulong)*(uint *)(unaff_x20 + 0x40);
  if (*(uint *)(unaff_x20 + 0x40) != 0) {
    func_0x004f5f7c();
    param_4 = param_1;
  }
  iVar5 = *(int *)(unaff_x20 + 0x20);
  for (iVar4 = 0; iVar5 != iVar4; iVar4 = iVar4 + 1) {
    func_0x004f5d4c();
    param_3 = (ulong)*(uint *)(uVar2 + 0x24);
    param_4 = (dword *)((long)&MACH_HEADER.magic + 3);
    func_0x004f5e6c();
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x38) + 0x18);
    param_4 = &MACH_HEADER.cputype;
    func_0x004f5e6c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004f5e88();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar3 = extraout_x8_00 + 8;
    }
    if (*(long *)unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*(undefined8 *)unaff_x19 - (int)param_4) + 0x10;
        iVar4 = (int)param_3;
        uVar1 = iVar4 - iVar5;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (dword *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (dword *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 004f4248; end: 004f42eb;  */

long FUN_004f4248(long param_1)

{
  long lVar1;
  ulong uVar2;
  long extraout_x8;
  long extraout_x9;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x004f5eec();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_004f3ebc();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  uVar2 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
  lVar1 = (long)*(char *)(uVar2 + 0x17);
  if (lVar1 < 0) {
    lVar1 = *(long *)(uVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x00487c3c();
    func_0x004f6020();
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_004d2ec0(*(undefined8 *)(param_1 + 0x38));
    func_0x004f6020();
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    func_0x004f5d68();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x004f5e7c();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(param_1 + 0x14) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 004f42ec; end: 004f43b3;  */

void FUN_004f42ec(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  ulong uVar4;
  
  func_0x004f602c();
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  FUN_004f3eec(unaff_x21 + 0x18,unaff_x20 + 0x18);
  uVar2 = *(ulong *)(unaff_x20 + 0x30) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x004f5e94();
    }
    func_0x00532e08(unaff_x21 + 0x30);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x38) == 0) {
      func_0x004d3428(uVar4,*(undefined8 *)(unaff_x20 + 0x38));
      *(ulong *)(unaff_x21 + 0x38) = uVar4;
    }
    else {
      FUN_004d9d18();
    }
  }
  if (*(int *)(unaff_x20 + 0x40) != 0) {
    *(int *)(unaff_x21 + 0x40) = *(int *)(unaff_x20 + 0x40);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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



/* Entry: 004f43b4; end: 004f43e3;  */

long FUN_004f43b4(long param_1)

{
  func_0x004f5ddc();
  func_0x004f5f38();
  func_0x00532f74(param_1 + 0x18);
  return param_1;
}



/* Entry: 004f43e4; end: 004f43e7;  */

long FUN_004f43e4(long param_1)

{
  func_0x004f5ddc();
  func_0x004f5f38();
  func_0x00532f74(param_1 + 0x18);
  return param_1;
}



/* Entry: 004f43e8; end: 004f43fb;  */

void FUN_004f43e8(void)

{
  FUN_004f43b4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f43fc; end: 004f4407;  */

undefined ** FUN_004f43fc(void)

{
  return &PTR_DAT_009f6580;
}



/* Entry: 004f4408; end: 004f45d7;  */

void FUN_004f4408(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x004f5e18();
  FUN_00532fa8(unaff_x19 + 0x18);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
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



/* Entry: 004f45d8; end: 004f45ff;  */

undefined8 FUN_004f45d8(undefined8 param_1)

{
  func_0x004f5ddc();
  func_0x004f5f38();
  return param_1;
}



/* Entry: 004f4600; end: 004f4603;  */

undefined8 FUN_004f4600(undefined8 param_1)

{
  func_0x004f5ddc();
  func_0x004f5f38();
  return param_1;
}



/* Entry: 004f4604; end: 004f4617;  */

void FUN_004f4604(void)

{
  FUN_004f45d8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f4618; end: 004f4623;  */

undefined ** FUN_004f4618(void)

{
  return &PTR_DAT_009f65c8;
}



/* Entry: 004f4624; end: 004f4653;  */

void FUN_004f4624(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x004f5e18();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
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



/* Entry: 004f4654; end: 004f46d7;  */

long * FUN_004f4654(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004f5d84();
  func_0x004f5ee0(param_1[2]);
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_3 + 8);
  }
  if (lVar2 != 0) {
    func_0x004f5d9c();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    func_0x004f5f64();
    func_0x004f5fb4();
    func_0x004f5fbc();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004f5e88();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar2 = extraout_x8_00 + 8;
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
  return param_4;
}



/* Entry: 004f46d8; end: 004f473f;  */

void FUN_004f46d8(long param_1)

{
  int iVar1;
  int extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x004f5e04();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x00487c3c();
    iVar1 = (int)param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    func_0x004f5f10();
    iVar1 = iVar1 + extraout_w8;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004f5e7c();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x1c) = iVar1;
  return;
}



/* Entry: 004f4740; end: 004f4743;  */

void FUN_004f4740(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x004f5db4();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x004f5e94();
    }
    func_0x004f5f30();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004f5dcc();
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



/* Entry: 004f4744; end: 004f4797;  */

void FUN_004f4744(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x004f5db4();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x004f5e94();
    }
    func_0x004f5f30();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004f5dcc();
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



/* Entry: 004f4798; end: 004f47c3;  */

long FUN_004f4798(long param_1)

{
  func_0x004f5ddc();
  FUN_004f4c84(param_1 + 0x10);
  return param_1;
}



/* Entry: 004f47c4; end: 004f47d7;  */

void FUN_004f47c4(void)

{
  FUN_004f4798();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f47d8; end: 004f47ff;  */

undefined ** FUN_004f47d8(void)

{
  return &PTR_DAT_009f6620;
}



/* Entry: 004f4800; end: 004f4853;  */

void FUN_004f4800(long param_1)

{
  ulong *puVar1;
  
  if (*(int *)(param_1 + 0x14) != 1) {
    FUN_00547c3c(param_1 + 0x10,0x10400300010,0);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x30) = 0;
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



/* Entry: 004f4854; end: 004f49eb;  */

ulong FUN_004f4854(long param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long extraout_x8;
  ulong unaff_x20;
  long unaff_x21;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStack_70;
  long alStack_68 [3];
  
  uVar5 = param_3;
  func_0x004f602c();
  uVar1 = *(uint *)(param_1 + 0x10);
  puVar8 = (undefined8 *)(ulong)uVar1;
  if (uVar1 != 0) {
    if ((uVar1 == 1) || ((*(byte *)(param_3 + 0x3a) & 1) == 0)) {
      func_0x004f5fa8();
      while (alStack_68[0] != 0) {
        unaff_x20 = alStack_68[0] + 8;
        func_0x004f5f40(unaff_x20,alStack_68[0] + 0x10);
        func_0x0048fcb8(alStack_68);
      }
    }
    else {
      puVar7 = (undefined8 *)((long)puVar8 * 0x10);
      puVar2 = puVar7;
      __Znam();
      _bzero();
      puStack_70 = puVar2;
      func_0x004f5fa8();
      puVar6 = puVar2;
      while (alStack_68[0] != 0) {
        *puVar6 = *(undefined8 *)(alStack_68[0] + 8);
        puVar6[1] = (undefined8 *)(alStack_68[0] + 8);
        func_0x0048fcb8(alStack_68);
        puVar6 = puVar6 + 2;
      }
      uVar5 = LZCOUNT(puVar8) << 1 ^ 0x7e;
      FUN_004f5070(puVar2,puVar2 + (long)puVar8 * 2,uVar5,1);
      while (puVar8 != (undefined8 *)0x0) {
        unaff_x20 = puVar2[1];
        func_0x004f5f40(unaff_x20,unaff_x20 + 8);
        puVar2 = puVar2 + 2;
        puVar7 = puVar7 + -2;
        puVar8 = puVar7;
      }
      FUN_004f4cc8(&puStack_70);
    }
  }
  if (*(long *)(unaff_x21 + 0x30) != 0) {
    uVar3 = param_3;
    func_0x00487c24(param_3,unaff_x20);
    unaff_x20 = *(ulong *)(unaff_x21 + 0x30);
    func_0x004f5fb4();
    func_0x00487cf0(unaff_x20,uVar3);
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x004f5e88();
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    FUN_00487760(param_3,lVar4);
    unaff_x20 = param_3;
  }
  return unaff_x20;
}



/* Entry: 004f49ec; end: 004f4a9f;  */

void FUN_004f49ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *unaff_x20;
  undefined8 *unaff_x21;
  
  uVar4 = param_4;
  func_0x004f602c();
  func_0x00487c24(uVar4,param_3);
  uVar2 = 10;
  func_0x00487cbc(10,uVar4);
  uVar3 = (ulong)(*(int *)((long)unaff_x20 + 0x1c) + ((int)LZCOUNT(*unaff_x21) * -9 + 0x280U >> 6) +
                  ((int)LZCOUNT(*(int *)((long)unaff_x20 + 0x1c)) * -9 + 0x160U >> 6) + 2);
  func_0x00487cbc(uVar3,uVar2);
  func_0x004f5fc8();
  uVar2 = *unaff_x21;
  uVar4 = 8;
  func_0x00487cbc(8,uVar3);
  func_0x00487cf0(uVar2,uVar4);
  func_0x004f5fc8();
  uVar1 = *(undefined4 *)((long)unaff_x20 + 0x1c);
  func_0x00487c24(param_4,uVar2);
  uVar4 = 0x12;
  func_0x00487cbc(0x12,param_4);
  func_0x00487cbc(uVar1,uVar4);
                    /* WARNING: Could not recover jumptable at 0x0054db48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x20 + 0x38))();
  return;
}



/* Entry: 004f4aa0; end: 004f4b7f;  */

ulong FUN_004f4aa0(long param_1)

{
  long extraout_x8;
  long lVar1;
  undefined8 uVar2;
  long extraout_x9;
  ulong uVar3;
  long alStack_58 [3];
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x10);
  FUN_0048fc74(alStack_58);
  while (alStack_58[0] != 0) {
    uVar2 = *(undefined8 *)(alStack_58[0] + 8);
    lVar1 = alStack_58[0] + 0x10;
    FUN_004f46d8();
    lVar1 = lVar1 + (ulong)((int)LZCOUNT((int)lVar1) * -9 + 0x160U >> 6) +
            (ulong)(((int)LZCOUNT(uVar2) * -9 + 0x280U >> 6) + 2);
    uVar3 = lVar1 + uVar3 + (ulong)((int)LZCOUNT((int)lVar1) * -9 + 0x160U >> 6);
    func_0x0048fcb8(alStack_58);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x004f5d68();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x004f5e7c();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    uVar3 = lVar1 + uVar3;
  }
  *(int *)(param_1 + 0x38) = (int)uVar3;
  return uVar3;
}



/* Entry: 004f4b80; end: 004f4bbb;  */

void FUN_004f4b80(long param_1)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x004f5dec();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_004f5924();
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x19 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004f5dcc();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 004f4bbc; end: 004f4bfb;  */

void FUN_004f4bbc(void)

{
  func_0x004f6058();
  FUN_004f3eec();
  return;
}



/* Entry: 004f4bfc; end: 004f4c2b;  */

long * FUN_004f4bfc(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0054cf94(param_1);
  }
  return param_1;
}



/* Entry: 004f4c2c; end: 004f4c53;  */

long * FUN_004f4c2c(long *param_1)

{
  FUN_004f4c54(param_1 + 3);
  if (*param_1 != 0) {
    FUN_0054cf94(param_1);
  }
  return param_1;
}



/* Entry: 004f4c54; end: 004f4c83;  */

long * FUN_004f4c54(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0054cf94(param_1);
  }
  return param_1;
}



/* Entry: 004f4c84; end: 004f4cc7;  */

long FUN_004f4c84(long param_1)

{
  if (*(int *)(param_1 + 4) != 1) {
    FUN_00547c3c(param_1,0x400300010,0);
  }
  return param_1;
}



/* Entry: 004f4cc8; end: 004f4ef3;  */

long * FUN_004f4cc8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdaPv();
  }
  return param_1;
}



/* Entry: 004f4ef4; end: 004f4f07;  */

void FUN_004f4ef4(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if (0 < (int)param_1[1]) {
    uVar1 = (uint)param_1[1];
    puVar2 = param_1;
    if ((*param_1 & 1) != 0) {
      puVar2 = (ulong *)(*param_1 + 7);
    }
    if ((int)uVar1 < 2) {
      uVar1 = 1;
    }
    uVar3 = (ulong)uVar1;
    do {
      (**(code **)(*(long *)*puVar2 + 0x18))();
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != 0);
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  return;
}



/* Entry: 004f4f08; end: 004f4f47;  */

dword * FUN_004f4f08(long param_1)

{
  dword *pdVar1;
  long unaff_x19;
  dword *unaff_x20;
  
  func_0x004f5f04();
  if (param_1 == 0) {
    pdVar1 = &MACH_HEADER.flags;
    __Znwm();
  }
  else {
    pdVar1 = unaff_x20;
    func_0x005510c4();
  }
  *(dword **)(pdVar1 + 2) = unaff_x20;
  pdVar1[4] = 0;
  *(undefined ***)pdVar1 = &PTR_DAT_00a0d3c8;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    FUN_00698fa0(pdVar1 + 2,(*(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe) + 8);
  }
  return pdVar1;
}



/* Entry: 004f4f48; end: 004f4feb;  */

qword * FUN_004f4f48(long param_1)

{
  qword *pqVar1;
  long unaff_x19;
  qword *unaff_x20;
  
  func_0x004f5f04();
  if (param_1 == 0) {
    pqVar1 = &segment_command_00000020.vmsize;
    __Znwm();
  }
  else {
    pqVar1 = unaff_x20;
    func_0x005510c4();
  }
  pqVar1[1] = (qword)unaff_x20;
  *pqVar1 = (qword)&PTR_FUN_009f63b8;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004f5da8();
  }
  pqVar1[3] = 0x100000000;
  pqVar1[2] = 0x100000000;
  pqVar1[4] = (qword)&DAT_00810d88;
  pqVar1[5] = (qword)unaff_x20;
  FUN_004f5924(pqVar1 + 2,unaff_x19 + 0x10);
  *(undefined4 *)(pqVar1 + 7) = 0;
  pqVar1[6] = *(undefined8 *)(unaff_x19 + 0x30);
  return pqVar1;
}



/* Entry: 004f4fec; end: 004f506f;  */

undefined8 * FUN_004f4fec(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x004f5f04();
  if (param_1 == (undefined8 *)0x0) {
    func_0x004f5fa0();
  }
  else {
    param_1 = unaff_x20;
    func_0x005510c4();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_DAT_009f6228;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004f5da8();
  }
  lVar1 = unaff_x19 + 0x10;
  func_0x00487c6c();
  param_1[2] = lVar1;
  lVar1 = unaff_x19 + 0x18;
  func_0x00487c6c();
  param_1[3] = lVar1;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(unaff_x19 + 0x20);
  return param_1;
}



/* Entry: 004f5070; end: 004f55a7;  */

void FUN_004f5070(undefined8 param_1,undefined8 param_2,ulong *param_3,uint param_4)

{
  long lVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong uVar19;
  undefined8 unaff_x30;
  
  puVar5 = param_3;
  func_0x004f5dec();
LAB_004f5098:
  puVar6 = unaff_x20 + -2;
  puVar7 = unaff_x19;
LAB_004f50a8:
  unaff_x19 = puVar7;
  uVar19 = (long)unaff_x20 - (long)unaff_x19 >> 4;
  switch(uVar19) {
  case 0:
  case 1:
    goto LAB_004f5594;
  case 2:
    if (unaff_x20[-2] < *unaff_x19) {
      func_0x004f6000();
    }
    goto LAB_004f5594;
  case 3:
    puVar5 = unaff_x19 + 2;
    func_0x004f606c();
    uVar8 = *puVar5;
    uVar19 = *unaff_x19;
    uVar10 = *puVar6;
    if (uVar8 < uVar19) {
      if (uVar10 < uVar8) {
        uVar8 = unaff_x19[1];
        uVar13 = puVar6[1];
        *unaff_x19 = uVar10;
        unaff_x19[1] = uVar13;
        *puVar6 = uVar19;
        puVar6[1] = uVar8;
        return;
      }
      uVar10 = unaff_x19[1];
      uVar13 = puVar5[1];
      *unaff_x19 = uVar8;
      unaff_x19[1] = uVar13;
      *puVar5 = uVar19;
      puVar5[1] = uVar10;
      if (*puVar6 < uVar19) {
        uVar8 = puVar6[1];
        *puVar5 = *puVar6;
        puVar5[1] = uVar8;
        *puVar6 = uVar19;
        puVar6[1] = uVar10;
      }
    }
    else if (uVar10 < uVar8) {
      *puVar5 = uVar10;
      *puVar6 = uVar8;
      uVar19 = *puVar5;
      uVar8 = puVar5[1];
      puVar5[1] = puVar6[1];
      puVar6[1] = uVar8;
      uVar8 = *unaff_x19;
      if (uVar19 < uVar8) {
        uVar10 = unaff_x19[1];
        uVar13 = puVar5[1];
        *unaff_x19 = uVar19;
        unaff_x19[1] = uVar13;
        *puVar5 = uVar8;
        puVar5[1] = uVar10;
        return;
      }
    }
    return;
  case 4:
    func_0x004f5fe8();
    func_0x004f606c(unaff_x19);
    func_0x004f5f04();
    FUN_004f55a8();
    bVar2 = *puVar5 <= *puVar6;
    if (((!bVar2) && (func_0x004f5e24(), !bVar2)) && (func_0x004f5e48(), !bVar2)) {
      func_0x004f5fd4();
    }
    return;
  case 5:
    func_0x004f5fe8();
    puVar7 = unaff_x19 + 6;
    func_0x004f606c(unaff_x19);
    func_0x004f5f04();
    FUN_004f5644();
    uVar19 = *puVar7;
    if (*puVar6 < uVar19) {
      *puVar7 = *puVar6;
      *puVar6 = uVar19;
      uVar19 = *puVar7;
      uVar8 = puVar7[1];
      puVar7[1] = puVar6[1];
      puVar6[1] = uVar8;
      bVar2 = *puVar5 <= uVar19;
      if (((!bVar2) && (func_0x004f5e24(), !bVar2)) && (func_0x004f5e48(), !bVar2)) {
        func_0x004f5fd4();
      }
    }
    return;
  }
  if ((long)uVar19 < 0x18) {
    if ((param_4 & 1) == 0) {
      if (unaff_x19 != unaff_x20) {
        puVar5 = unaff_x19 + 3;
        while (unaff_x19 + 2 != unaff_x20) {
          uVar19 = unaff_x19[2];
          uVar8 = *unaff_x19;
          if (uVar19 < uVar8) {
            uVar10 = unaff_x19[3];
            puVar7 = puVar5;
            do {
              puVar6 = puVar7;
              puVar6[-1] = uVar8;
              *puVar6 = puVar6[-2];
              uVar8 = puVar6[-5];
              puVar7 = puVar6 + -2;
            } while (uVar19 < uVar8);
            puVar6[-3] = uVar19;
            puVar6[-2] = uVar10;
          }
          puVar5 = puVar5 + 2;
          unaff_x19 = unaff_x19 + 2;
        }
      }
      goto LAB_004f5594;
    }
    if (unaff_x19 == unaff_x20) goto LAB_004f5594;
    lVar11 = 0;
    puVar5 = unaff_x19;
    goto LAB_004f53a8;
  }
  if (param_3 != (ulong *)0x0) {
    puVar7 = unaff_x19 + (uVar19 & 0xfffffffffffffffe);
    if (uVar19 < 0x81) {
      func_0x004f5f28(puVar7,unaff_x19);
    }
    else {
      func_0x004f5f28(unaff_x19,puVar7);
      FUN_004f55a8(unaff_x19 + 2,puVar7 + -2,unaff_x20 + -4);
      FUN_004f55a8(unaff_x19 + 4,puVar7 + 2,unaff_x20 + -6);
      puVar5 = puVar7 + 2;
      FUN_004f55a8(puVar7 + -2,puVar7);
      uVar19 = *unaff_x19;
      uVar8 = unaff_x19[1];
      uVar10 = puVar7[1];
      *unaff_x19 = *puVar7;
      unaff_x19[1] = uVar10;
      *puVar7 = uVar19;
      puVar7[1] = uVar8;
    }
    param_3 = (ulong *)((long)param_3 + -1);
    uVar19 = *unaff_x19;
    if (((param_4 & 1) != 0) || (unaff_x19[-2] < uVar19)) {
      lVar11 = 0;
      uVar8 = unaff_x19[1];
      do {
        uVar10 = *(ulong *)((long)unaff_x19 + lVar11 + 0x10);
        lVar11 = lVar11 + 0x10;
      } while (uVar10 < uVar19);
      puVar3 = (ulong *)((long)unaff_x19 + lVar11);
      puVar9 = unaff_x20;
      puVar7 = puVar3;
      if (lVar11 == 0x10) {
        do {
          puVar4 = puVar9;
          if (puVar9 <= puVar3) break;
          puVar9 = puVar9 + -2;
          puVar4 = puVar9;
        } while (uVar19 <= *puVar9);
      }
      else {
        do {
          puVar9 = puVar9 + -2;
          puVar4 = puVar9;
        } while (uVar19 <= *puVar9);
      }
      while (puVar7 < puVar9) {
        uVar14 = puVar7[1];
        uVar13 = puVar9[1];
        *puVar7 = *puVar9;
        puVar7[1] = uVar13;
        *puVar9 = uVar10;
        puVar9[1] = uVar14;
        do {
          puVar7 = puVar7 + 2;
          uVar10 = *puVar7;
        } while (uVar10 < uVar19);
        do {
          puVar9 = puVar9 + -2;
        } while (uVar19 <= *puVar9);
      }
      puVar9 = puVar7 + -2;
      if (unaff_x19 != puVar9) {
        uVar10 = puVar7[-1];
        *unaff_x19 = puVar7[-2];
        unaff_x19[1] = uVar10;
      }
      puVar7[-2] = uVar19;
      puVar7[-1] = uVar8;
      if (puVar4 <= puVar3) {
        puVar3 = unaff_x19;
        FUN_004f5708(unaff_x19,puVar9);
        puVar4 = puVar7;
        FUN_004f5708(puVar7,unaff_x20);
        if ((int)puVar4 != 0) goto LAB_004f52f4;
        if (((ulong)puVar3 & 1) != 0) goto LAB_004f50a8;
      }
      puVar5 = param_3;
      FUN_004f5070(unaff_x19,puVar9,param_3,param_4 & 1);
      param_4 = 0;
      goto LAB_004f50a8;
    }
    puVar7 = unaff_x19;
    if (uVar19 < *puVar6) {
      do {
        puVar7 = puVar7 + 2;
      } while (*puVar7 <= uVar19);
    }
    else {
      do {
        puVar7 = puVar7 + 2;
        if (unaff_x20 <= puVar7) break;
      } while (*puVar7 <= uVar19);
    }
    puVar3 = unaff_x20;
    if (puVar7 < unaff_x20) {
      do {
        puVar3 = puVar3 + -2;
      } while (uVar19 < *puVar3);
    }
    uVar8 = unaff_x19[1];
    while (puVar7 < puVar3) {
      uVar10 = *puVar7;
      uVar13 = puVar7[1];
      uVar14 = puVar3[1];
      *puVar7 = *puVar3;
      puVar7[1] = uVar14;
      *puVar3 = uVar10;
      puVar3[1] = uVar13;
      do {
        puVar7 = puVar7 + 2;
      } while (*puVar7 <= uVar19);
      do {
        puVar3 = puVar3 + -2;
      } while (uVar19 < *puVar3);
    }
    if (unaff_x19 != puVar7 + -2) {
      uVar10 = puVar7[-1];
      *unaff_x19 = puVar7[-2];
      unaff_x19[1] = uVar10;
    }
    param_4 = 0;
    puVar7[-2] = uVar19;
    puVar7[-1] = uVar8;
    goto LAB_004f50a8;
  }
  if (unaff_x19 == unaff_x20) goto LAB_004f5594;
  uVar8 = uVar19 - 2 >> 1;
  puVar5 = unaff_x19 + uVar8 * 2;
  do {
    FUN_004f5854(unaff_x19,uVar19,puVar5);
    uVar8 = uVar8 - 1;
    puVar5 = puVar5 + -2;
  } while (-1 < (long)uVar8);
  do {
    if ((long)uVar19 < 2) goto LAB_004f5594;
    uVar13 = 0;
    uVar8 = *unaff_x19;
    uVar10 = unaff_x19[1];
    puVar5 = unaff_x19;
    do {
      puVar7 = puVar5 + uVar13 * 2 + 2;
      uVar15 = uVar13 << 1 | 1;
      uVar14 = uVar13 * 2 + 2;
      if ((long)uVar14 < (long)uVar19) {
        uVar16 = puVar5[uVar13 * 2 + 4];
        uVar18 = puVar5[uVar13 * 2 + 2];
        uVar17 = uVar18;
        if (uVar18 <= uVar16) {
          uVar17 = uVar16;
        }
        puVar6 = puVar5 + uVar13 * 2 + 4;
        uVar13 = uVar14;
        if (uVar16 <= uVar18) {
          puVar6 = puVar7;
          uVar13 = uVar15;
        }
      }
      else {
        uVar17 = *puVar7;
        puVar6 = puVar7;
        uVar13 = uVar15;
      }
      uVar14 = puVar6[1];
      *puVar5 = uVar17;
      puVar5[1] = uVar14;
      puVar5 = puVar6;
    } while ((long)uVar13 <= (long)(uVar19 - 2 >> 1));
    if (puVar6 == unaff_x20 + -2) {
      *puVar6 = uVar8;
      puVar6[1] = uVar10;
    }
    else {
      uVar13 = unaff_x20[-1];
      *puVar6 = unaff_x20[-2];
      puVar6[1] = uVar13;
      unaff_x20[-2] = uVar8;
      unaff_x20[-1] = uVar10;
      lVar11 = (long)puVar6 + (0x10 - (long)unaff_x19) >> 4;
      if (1 < lVar11) {
        uVar8 = lVar11 - 2U >> 1;
        uVar13 = unaff_x19[uVar8 * 2];
        uVar10 = *puVar6;
        if (uVar13 < uVar10) {
          uVar14 = puVar6[1];
          puVar5 = unaff_x19 + uVar8 * 2;
          do {
            puVar7 = puVar5;
            uVar15 = puVar7[1];
            *puVar6 = uVar13;
            puVar6[1] = uVar15;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1 >> 1;
            uVar13 = unaff_x19[uVar8 * 2];
            puVar6 = puVar7;
            puVar5 = unaff_x19 + uVar8 * 2;
          } while (uVar13 < uVar10);
          *puVar7 = uVar10;
          puVar7[1] = uVar14;
        }
      }
    }
    uVar19 = uVar19 - 1;
    unaff_x20 = unaff_x20 + -2;
  } while( true );
LAB_004f53a8:
  if (puVar5 + 2 == unaff_x20) {
LAB_004f5594:
    func_0x004f606c(unaff_x30);
    return;
  }
  uVar19 = puVar5[2];
  uVar8 = *puVar5;
  if (uVar19 < uVar8) {
    uVar10 = puVar5[3];
    lVar1 = lVar11;
    do {
      lVar12 = lVar1;
      *(ulong *)((long)unaff_x19 + lVar12 + 0x10) = uVar8;
      *(undefined8 *)((long)unaff_x19 + lVar12 + 0x18) =
           *(undefined8 *)((long)unaff_x19 + lVar12 + 8);
      puVar7 = unaff_x19;
      if (lVar12 == 0) goto LAB_004f53fc;
      uVar8 = *(ulong *)((long)unaff_x19 + lVar12 + -0x10);
      lVar1 = lVar12 + -0x10;
    } while (uVar19 < uVar8);
    puVar7 = (ulong *)((long)unaff_x19 + lVar12);
LAB_004f53fc:
    *puVar7 = uVar19;
    puVar7[1] = uVar10;
  }
  lVar11 = lVar11 + 0x10;
  puVar5 = puVar5 + 2;
  goto LAB_004f53a8;
LAB_004f52f4:
  unaff_x20 = puVar9;
  if (((ulong)puVar3 & 1) != 0) goto LAB_004f5594;
  goto LAB_004f5098;
}



/* Entry: 004f55a8; end: 004f5643;  */

void FUN_004f55a8(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = *param_2;
  uVar1 = *param_1;
  uVar3 = *param_3;
  if (uVar2 < uVar1) {
    if (uVar3 < uVar2) {
      uVar2 = param_1[1];
      uVar4 = param_3[1];
      *param_1 = uVar3;
      param_1[1] = uVar4;
      *param_3 = uVar1;
      param_3[1] = uVar2;
      return;
    }
    uVar3 = param_1[1];
    uVar4 = param_2[1];
    *param_1 = uVar2;
    param_1[1] = uVar4;
    *param_2 = uVar1;
    param_2[1] = uVar3;
    if (*param_3 < uVar1) {
      uVar2 = param_3[1];
      *param_2 = *param_3;
      param_2[1] = uVar2;
      *param_3 = uVar1;
      param_3[1] = uVar3;
    }
  }
  else if (uVar3 < uVar2) {
    *param_2 = uVar3;
    *param_3 = uVar2;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    param_2[1] = param_3[1];
    param_3[1] = uVar2;
    uVar2 = *param_1;
    if (uVar1 < uVar2) {
      uVar3 = param_1[1];
      uVar4 = param_2[1];
      *param_1 = uVar1;
      param_1[1] = uVar4;
      *param_2 = uVar2;
      param_2[1] = uVar3;
      return;
    }
  }
  return;
}



/* Entry: 004f5644; end: 004f568f;  */

void FUN_004f5644(undefined8 param_1,undefined8 param_2,ulong *param_3,ulong *param_4)

{
  bool bVar1;
  
  func_0x004f5f04();
  FUN_004f55a8();
  bVar1 = *param_3 <= *param_4;
  if (((!bVar1) && (func_0x004f5e24(), !bVar1)) && (func_0x004f5e48(), !bVar1)) {
    func_0x004f5fd4();
  }
  return;
}



/* Entry: 004f5690; end: 004f5707;  */

void FUN_004f5690(undefined8 param_1,undefined8 param_2,ulong *param_3,ulong *param_4,ulong *param_5
                 )

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  
  func_0x004f5f04();
  FUN_004f5644();
  uVar3 = *param_4;
  if (*param_5 < uVar3) {
    *param_4 = *param_5;
    *param_5 = uVar3;
    uVar3 = *param_4;
    uVar1 = param_4[1];
    param_4[1] = param_5[1];
    param_5[1] = uVar1;
    bVar2 = *param_3 <= uVar3;
    if (((!bVar2) && (func_0x004f5e24(), !bVar2)) && (func_0x004f5e48(), !bVar2)) {
      func_0x004f5fd4();
    }
  }
  return;
}



/* Entry: 004f5708; end: 004f5853;  */

void FUN_004f5708(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong *puVar10;
  
  func_0x004f5dec();
  switch(param_2 - param_1 >> 4) {
  case 0:
  case 1:
    break;
  case 2:
    if (unaff_x20[-2] < *unaff_x19) {
      func_0x004f6000();
    }
    break;
  case 3:
    FUN_004f55a8();
    break;
  case 4:
    func_0x004f5fe8(1);
    FUN_004f5644();
    break;
  case 5:
    func_0x004f5fe8(1);
    FUN_004f5690();
    break;
  default:
    func_0x004f5f28();
    lVar2 = 0;
    iVar3 = 0;
    puVar8 = unaff_x19 + 6;
    puVar10 = unaff_x19 + 4;
    while (puVar4 = puVar8, puVar4 != unaff_x20) {
      uVar5 = *puVar4;
      uVar7 = *puVar10;
      if (uVar5 < uVar7) {
        uVar6 = puVar4[1];
        lVar1 = lVar2;
        do {
          lVar9 = lVar1;
          *(ulong *)((long)unaff_x19 + lVar9 + 0x30) = uVar7;
          *(undefined8 *)((long)unaff_x19 + lVar9 + 0x38) =
               *(undefined8 *)((long)unaff_x19 + lVar9 + 0x28);
          puVar8 = unaff_x19;
          if (lVar9 == -0x20) goto LAB_004f5800;
          uVar7 = *(ulong *)((long)unaff_x19 + lVar9 + 0x10);
          lVar1 = lVar9 + -0x10;
        } while (uVar5 < uVar7);
        puVar8 = (ulong *)((long)unaff_x19 + lVar9 + 0x20);
LAB_004f5800:
        *puVar8 = uVar5;
        puVar8[1] = uVar6;
        iVar3 = iVar3 + 1;
        if (iVar3 == 8) {
          return;
        }
      }
      lVar2 = lVar2 + 0x10;
      puVar10 = puVar4;
      puVar8 = puVar4 + 2;
    }
  }
  return;
}



/* Entry: 004f5854; end: 004f5923;  */

void FUN_004f5854(long param_1,long param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (1 < param_2) {
    uVar2 = param_2 - 2U >> 1;
    if ((long)param_3 - param_1 >> 4 <= (long)uVar2) {
      lVar6 = (long)param_3 - param_1 >> 3;
      uVar7 = lVar6 + 1;
      puVar3 = (ulong *)(param_1 + uVar7 * 0x10);
      uVar5 = lVar6 + 2;
      if ((long)uVar5 < param_2) {
        uVar8 = *puVar3;
        uVar9 = puVar3[2];
        uVar11 = uVar8;
        if (uVar8 <= uVar9) {
          uVar11 = uVar9;
        }
        puVar4 = puVar3 + 2;
        if (uVar9 <= uVar8) {
          puVar4 = puVar3;
          uVar5 = uVar7;
        }
      }
      else {
        uVar11 = *puVar3;
        puVar4 = puVar3;
        uVar5 = uVar7;
      }
      uVar7 = *param_3;
      if (uVar7 <= uVar11) {
        uVar8 = param_3[1];
        do {
          puVar3 = puVar4;
          uVar9 = puVar3[1];
          *param_3 = uVar11;
          param_3[1] = uVar9;
          if ((long)uVar2 < (long)uVar5) break;
          uVar9 = uVar5 << 1 | 1;
          puVar1 = (ulong *)(param_1 + uVar9 * 0x10);
          uVar5 = uVar5 * 2 + 2;
          if ((long)uVar5 < param_2) {
            uVar10 = *puVar1;
            uVar12 = puVar1[2];
            uVar11 = uVar10;
            if (uVar10 <= uVar12) {
              uVar11 = uVar12;
            }
            puVar4 = puVar1 + 2;
            if (uVar12 <= uVar10) {
              puVar4 = puVar1;
              uVar5 = uVar9;
            }
          }
          else {
            uVar11 = *puVar1;
            puVar4 = puVar1;
            uVar5 = uVar9;
          }
          param_3 = puVar3;
        } while (uVar7 <= uVar11);
        *puVar3 = uVar7;
        puVar3[1] = uVar8;
      }
    }
  }
  return;
}



/* Entry: 004f5924; end: 004f5a0f;  */

void FUN_004f5924(int ****param_1,int ****param_2)

{
  int ***pppiVar1;
  int ****ppppiVar2;
  int ****ppppiVar3;
  int ***pppiVar4;
  int ***apppiStack_58 [3];
  
  ppppiVar2 = apppiStack_58;
  FUN_0048fc74();
  while (pppiVar1 = apppiStack_58[0], (int ****)apppiStack_58[0] != (int ****)0x0) {
    func_0x004f5ea0();
    if (ppppiVar2 == (int ****)0x0) {
      ppppiVar3 = (int ****)(ulong)(*(int *)param_1 + 1);
      ppppiVar2 = param_1;
      FUN_004f5a9c(param_1,ppppiVar3);
      if ((int)ppppiVar2 != 0) {
        func_0x004f5ea0();
        param_2 = ppppiVar3;
      }
      ppppiVar2 = param_1;
      func_0x0048ffb4(param_1,0x30);
      pppiVar4 = param_1[3];
      ppppiVar2[1] = (int ***)pppiVar1[1];
      ppppiVar2[2] = (int ***)&PTR_FUN_009f62c8;
      ppppiVar2[3] = pppiVar4;
      ppppiVar2[4] = (int ***)&DAT_00b69408;
      ppppiVar2[5] = (int ***)0x0;
      FUN_004f5b2c(param_1,param_2,ppppiVar2);
      *(int *)param_1 = *(int *)param_1 + 1;
    }
    if ((int ****)pppiVar1 != ppppiVar2) {
      FUN_004f4624(ppppiVar2 + 2);
      param_2 = (int ****)(pppiVar1 + 2);
      FUN_004f4744(ppppiVar2 + 2);
    }
    ppppiVar2 = apppiStack_58;
    func_0x0048fcb8();
  }
  return;
}



/* Entry: 004f5a10; end: 004f5a9b;  */

void FUN_004f5a10(ulong param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong *puVar2;
  
  uVar1 = param_1;
  FUN_00490120();
  puVar2 = *(ulong **)(*(long *)(param_1 + 0x10) + (uVar1 & 0xffffffff) * 8);
  if ((puVar2 == (ulong *)0x0) || (((ulong)puVar2 & 1) != 0)) {
    if (((ulong)puVar2 & 1) != 0) {
      FUN_00547ec0(param_1,uVar1 & 0xffffffff,0,param_2,param_3);
    }
  }
  else {
    do {
      if (puVar2[1] == param_2) {
        return;
      }
      puVar2 = (ulong *)*puVar2;
    } while (puVar2 != (ulong *)0x0);
  }
  return;
}



/* Entry: 004f5a9c; end: 004f5b2b;  */

undefined8 FUN_004f5a9c(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar3 = ((ulong)uVar1 & 0xfffffffe) - ((ulong)(uVar1 >> 2) & 0x3ffffffc);
  if (uVar3 < param_2) {
    if (-1 < (int)uVar1) {
      uVar2 = uVar1 << 1;
LAB_004f5b14:
      FUN_004f5bc0(param_1,uVar2);
      return 1;
    }
  }
  else if (2 < uVar1 && param_2 <= uVar3 >> 2) {
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
    } while ((param_2 * 5 >> 2) + 1 << (uVar4 & 0x3f) < uVar3);
    uVar2 = uVar1 >> (ulong)((uint)uVar4 & 0x1f);
    if (uVar2 < 3) {
      uVar2 = 2;
    }
    if (uVar2 != uVar1) goto LAB_004f5b14;
  }
  return 0;
}



/* Entry: 004f5b2c; end: 004f5bbf;  */

void FUN_004f5b2c(ulong param_1,ulong param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lStack_60;
  ulong uStack_58;
  undefined8 *puStack_48;
  
  lVar2 = *(long *)(param_1 + 0x10);
  uVar4 = *(ulong *)(lVar2 + (param_2 & 0xffffffff) * 8);
  if (uVar4 == 0) {
    *param_3 = 0;
    *(undefined8 **)(lVar2 + (param_2 & 0xffffffff) * 8) = param_3;
    uVar1 = (uint)param_2;
    if (*(uint *)(param_1 + 0xc) <= (uint)param_2) {
      uVar1 = *(uint *)(param_1 + 0xc);
    }
    *(uint *)(param_1 + 0xc) = uVar1;
  }
  else {
    if (((uVar4 & 1) != 0) || (uVar4 = param_1, func_0x004906e8(param_1,param_2), (uVar4 & 1) != 0))
    {
      uVar5 = *(ulong *)(*(long *)(param_1 + 0x10) + (param_2 & 0xffffffff) * 8);
      uVar4 = uVar5;
      puStack_48 = param_3;
      if ((uVar5 != 0) && ((uVar5 & 1) == 0)) {
        uVar4 = param_1;
        FUN_00547a54(param_1,uVar5,FUN_004f5cd8);
        *(ulong *)(*(long *)(param_1 + 0x10) + (param_2 & 0xffffffff) * 8) = uVar4;
      }
      FUN_004f5cd8();
      func_0x005497cc(&lStack_60);
      if (lStack_60 != **(long **)(uVar4 - 1) || (uStack_58 & 0xffffffff) != 0) {
        FUN_005478bc(lStack_60,uStack_58);
        func_0x00549700();
        **(undefined8 **)(extraout_x8 + 0x20) = puStack_48;
      }
      FUN_00547b48(lStack_60,uStack_58,1);
      if (*(long *)(uVar4 + 0xf) == lStack_60 &&
          (uint)uStack_58 == (uint)*(byte *)(*(long *)(uVar4 + 0xf) + 10)) {
        uVar3 = 0;
      }
      else {
        func_0x00549700();
        uVar3 = *(undefined8 *)(extraout_x8_00 + 0x20);
      }
      *puStack_48 = uVar3;
      return;
    }
    lVar2 = *(long *)(param_1 + 0x10);
    *param_3 = *(undefined8 *)(lVar2 + (param_2 & 0xffffffff) * 8);
    *(undefined8 **)(lVar2 + (param_2 & 0xffffffff) * 8) = param_3;
  }
  return;
}



/* Entry: 004f5bc0; end: 004f5c97;  */

void FUN_004f5bc0(long param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 *extraout_x8;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 == 1) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 4) = 2;
    lVar7 = param_1;
    FUN_004903c4(param_1,2);
    *(long *)(param_1 + 0x10) = lVar7;
    lVar7 = param_1;
    func_0x0049040c();
    *(int *)(param_1 + 8) = (int)lVar7;
    return;
  }
  puVar8 = *(undefined8 **)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 4) = param_2;
  lVar7 = param_1;
  FUN_004903c4();
  *(long *)(param_1 + 0x10) = lVar7;
  uVar2 = *(uint *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 4);
  for (uVar9 = (ulong)uVar2; uVar9 < uVar1; uVar9 = uVar9 + 1) {
    uVar6 = puVar8[uVar9];
    if ((uVar6 == 0) || ((uVar6 & 1) != 0)) {
      if ((uVar6 & 1) != 0) {
        FUN_00547b74(param_1,uVar6 - 1,FUN_004f5cd8);
      }
    }
    else {
      FUN_004f5c98(param_1);
    }
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar9 = (ulong)uVar1 << 3;
    ppuVar4 = &PTR___tlv_bootstrap_00b2c348;
    (*(code *)PTR___tlv_bootstrap_00b2c348)(*(long *)(param_1 + 0x18));
    if (ppuVar4[1] == (undefined *)*extraout_x8) {
      puVar5 = ppuVar4[2];
      uVar6 = 0x3b - LZCOUNT(uVar9);
      bVar3 = puVar5[0x50];
      if (uVar6 < bVar3) {
        lVar7 = *(long *)(puVar5 + 0x58);
        *puVar8 = *(undefined8 *)(lVar7 + uVar6 * 8);
        *(undefined8 **)(lVar7 + uVar6 * 8) = puVar8;
      }
      else {
        if (bVar3 == 0) {
          lVar7 = 0;
        }
        else {
          _memmove(puVar8,*(undefined8 *)(puVar5 + 0x58),(ulong)bVar3 << 3);
          lVar7 = (ulong)(byte)puVar5[0x50] << 3;
        }
        uVar6 = uVar9 >> 3;
        if (0 < (long)((uVar9 & 0xfffffffffffffff8) - lVar7)) {
          _bzero((long)puVar8 + lVar7);
        }
        *(undefined8 **)(puVar5 + 0x58) = puVar8;
        if (0x3f < uVar6) {
          uVar6 = 0x40;
        }
        puVar5[0x50] = (char)uVar6;
      }
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(puVar8);
  return;
}



/* Entry: 004f5c98; end: 004f5cd7;  */

void FUN_004f5c98(void)

{
  long *unaff_x20;
  
  func_0x004f5dec();
  do {
    unaff_x20 = (long *)*unaff_x20;
    FUN_00490120();
    FUN_004f5b2c();
  } while (unaff_x20 != (long *)0x0);
  return;
}



/* Entry: 004f5cd8; end: 004f6083;  */

undefined1  [16] FUN_004f5cd8(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *(ulong *)(param_1 + 8);
  return auVar1 << 0x40;
}



/* Entry: 004f6084; end: 004f60b7;  */

long FUN_004f6084(long param_1)

{
  func_0x004fe3d0();
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_004f60d0(param_1);
  }
  return param_1;
}



/* Entry: 004f60b8; end: 004f60bb;  */

long FUN_004f60b8(long param_1)

{
  func_0x004fe3d0();
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_004f60d0(param_1);
  }
  return param_1;
}



/* Entry: 004f60bc; end: 004f60cf;  */

void FUN_004f60bc(void)

{
  FUN_004f6084();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f60d0; end: 004f610f;  */

void FUN_004f60d0(long param_1)

{
  if (*(uint *)(param_1 + 0x24) < 6 && (1 << (ulong)(*(uint *)(param_1 + 0x24) & 0x1f) & 0x26U) != 0
     ) {
    func_0x004fe5c4();
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 004f6110; end: 004f611b;  */

undefined ** FUN_004f6110(void)

{
  return &PTR_DAT_009f75c8;
}



/* Entry: 004f611c; end: 004f6153;  */

void FUN_004f611c(long param_1)

{
  ulong *puVar1;
  
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_004f60d0();
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



/* Entry: 004f6154; end: 004f62a7;  */

segment_command * FUN_004f6154(segment_command *param_1,undefined8 param_2,segment_command *param_3)

{
  char *pcVar1;
  segment_command *psVar2;
  undefined8 uVar3;
  long lVar4;
  segment_command *psVar5;
  undefined4 uVar6;
  long extraout_x8;
  long unaff_x20;
  segment_command *unaff_x21;
  int iVar7;
  int iVar8;
  
  psVar5 = param_3;
  func_0x004fe7d0();
  iVar7 = *(int *)((long)&param_1->vmsize + 4);
  if (iVar7 == 2) {
    psVar5 = (segment_command *)(*(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc);
    lVar4 = (long)psVar5->segname[0xf];
    psVar2 = psVar5;
    if (lVar4 < 0) {
      lVar4 = *(long *)psVar5->segname;
      psVar2 = *(segment_command **)psVar5;
    }
    FUN_0054ddb8(psVar2,lVar4,1,"snapchat.messaging.ContentEnvelope.RemoteMediaInfo.legacy_media_id"
                );
    uVar3 = 2;
  }
  else {
    if (iVar7 != 1) goto LAB_004f61d8;
    psVar5 = (segment_command *)(*(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc);
    uVar3 = 1;
  }
  param_1 = param_3;
  FUN_00435e9c(param_3,uVar3);
  unaff_x21 = param_1;
LAB_004f61d8:
  if (*(int *)(unaff_x20 + 0x10) != 0) {
    func_0x004fe870();
    func_0x004fe830();
    func_0x004fe214();
    unaff_x21 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x14) == '\x01') {
    func_0x004fe870();
    unaff_x21 = &segment_command_00000020;
    func_0x00487cbc(0x20,param_1);
    func_0x004fe280();
  }
  psVar2 = unaff_x21;
  if (*(int *)(unaff_x20 + 0x24) == 5) {
    psVar5 = (segment_command *)(*(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc);
    lVar4 = (long)psVar5->segname[0xf];
    psVar2 = psVar5;
    if (lVar4 < 0) {
      lVar4 = *(long *)psVar5->segname;
      psVar2 = *(segment_command **)psVar5;
    }
    FUN_0054ddb8(psVar2,lVar4,1,"snapchat.messaging.ContentEnvelope.RemoteMediaInfo.content_url");
    psVar2 = param_3;
    FUN_00435e9c(param_3,5,psVar5,unaff_x21);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe404();
    if ((long)psVar5 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      psVar5 = *(segment_command **)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if (*(long *)param_3 - (long)psVar2 < (long)(int)psVar5) {
      while( true ) {
        uVar6 = param_3->cmd;
        iVar8 = (uVar6 - (int)psVar2) + 0x10;
        iVar7 = (int)psVar5;
        psVar5 = (segment_command *)(ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x0054f690();
        pcVar1 = psVar2->segname;
        psVar2 = param_3;
        func_0x0054ed58(param_3,pcVar1 + (long)iVar8 + -8);
      }
      func_0x0054f690();
      return (segment_command *)(psVar2->segname + (long)iVar7 + -8);
    }
    _memcpy(psVar2,lVar4,(ulong)psVar5 & 0xffffffff);
    return (segment_command *)(psVar2->segname + (long)(int)psVar5 + -8);
  }
  return psVar2;
}



/* Entry: 004f62a8; end: 004f6327;  */

void FUN_004f62a8(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x004fe43c();
  iVar1 = *(int *)(lVar2 + 0x24);
  if ((iVar1 == 5) || (iVar1 == 2)) {
    FUN_0048910c(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  }
  else {
    if (iVar1 != 1) goto LAB_004f6300;
    func_0x00487c3c(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  }
  func_0x004fe52c();
LAB_004f6300:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x004fe918();
  }
  func_0x004fe8d0();
  return;
}



/* Entry: 004f6328; end: 004f63ef;  */

void FUN_004f6328(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x004fe220();
  if ((unaff_x22 & 1) != 0) {
    func_0x004fe644();
  }
  if (*(int *)(unaff_x20 + 0x10) != 0) {
    *(int *)(unaff_x21 + 2) = *(int *)(unaff_x20 + 0x10);
  }
  if (*(char *)(unaff_x20 + 0x14) == '\x01') {
    *(undefined1 *)((long)unaff_x21 + 0x14) = 1;
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x24);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_004f60d0();
      }
      *(int *)((long)unaff_x21 + 0x24) = iVar1;
    }
    if (((iVar1 == 5) || (iVar1 == 2)) || (iVar1 == 1)) {
      if (iVar2 != iVar1) {
        unaff_x21[3] = (ulong)&DAT_00b69408;
      }
      param_1 = unaff_x21 + 3;
      func_0x00532e08();
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe260();
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



/* Entry: 004f63f0; end: 004f641b;  */

long FUN_004f63f0(long param_1)

{
  func_0x004fe3d0();
  FUN_004ef378(param_1 + 0x10);
  return param_1;
}



/* Entry: 004f641c; end: 004f641f;  */

long FUN_004f641c(long param_1)

{
  func_0x004fe3d0();
  FUN_004ef378(param_1 + 0x10);
  return param_1;
}



/* Entry: 004f6420; end: 004f6433;  */

void FUN_004f6420(void)

{
  FUN_004f63f0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f6434; end: 004f643f;  */

undefined ** FUN_004f6434(void)

{
  return &PTR_DAT_009f7620;
}



/* Entry: 004f6440; end: 004f6473;  */

void FUN_004f6440(long param_1)

{
  ulong *puVar1;
  
  FUN_004efb98(param_1 + 0x10);
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


