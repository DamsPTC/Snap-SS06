/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0049a34c; end: 0049a383;  */

void FUN_0049a34c(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  FUN_0049a17c();
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



/* Entry: 0049a384; end: 0049a39f;  */

undefined1  [16] FUN_0049a384(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar5;
  puVar3 = (undefined1 *)(param_2 + 0x10);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x10); puVar2 != (undefined1 *)(param_1 + 0x20);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x20);
  return auVar6;
}



/* Entry: 0049a3a0; end: 0049a427;  */

void FUN_0049a3a0(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_0049a3fc;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_0049a860();
    }
  }
  else {
    if (*(int *)(param_1 + 0x1c) != 1) goto LAB_0049a3fc;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_0049a3fc;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_0049a7a0();
    }
  }
  __ZdlPv();
LAB_0049a3fc:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 0049a428; end: 0049a45b;  */

long FUN_0049a428(long param_1)

{
  func_0x0049ac68();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_0049a3a0(param_1);
  }
  return param_1;
}



/* Entry: 0049a45c; end: 0049a45f;  */

long FUN_0049a45c(long param_1)

{
  func_0x0049ac68();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_0049a3a0(param_1);
  }
  return param_1;
}



/* Entry: 0049a460; end: 0049a473;  */

void FUN_0049a460(void)

{
  FUN_0049a428();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0049a474; end: 0049a487;  */

undefined8 FUN_0049a474(undefined8 param_1)

{
  func_0x0049ac68();
  return param_1;
}



/* Entry: 0049a488; end: 0049a5a7;  */

void FUN_0049a488(long param_1)

{
  ulong *puVar1;
  
  FUN_0049a3a0();
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



/* Entry: 0049a5a8; end: 0049a5d7;  */

void FUN_0049a5a8(void)

{
  func_0x0049a82c();
  FUN_0049ac14();
  return;
}



/* Entry: 0049a5d8; end: 0049a6f3;  */

void FUN_0049a5d8(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  iVar2 = *(int *)(param_2 + 0x1c);
  if (iVar2 == 0) goto LAB_0049a6b8;
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_0049a3a0(param_1);
    }
    *(int *)(param_1 + 0x1c) = iVar2;
  }
  if (iVar2 == 2) {
    if (iVar3 == 2) {
      ppuVar1 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 2) {
        ppuVar1 = &PTR_PTR_00b09198;
      }
      FUN_0049a70c(*(undefined8 *)(param_1 + 0x10),ppuVar1);
      goto LAB_0049a6b8;
    }
    FUN_0049ab9c(uVar4,*(undefined8 *)(param_2 + 0x10));
  }
  else {
    if (iVar2 != 1) goto LAB_0049a6b8;
    if (iVar3 == 1) {
      ppuVar1 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 1) {
        ppuVar1 = &PTR_PTR_00b09180;
      }
      FUN_0049a6f4(*(undefined8 *)(param_1 + 0x10),ppuVar1[1]);
      goto LAB_0049a6b8;
    }
    FUN_0049ab2c(uVar4,*(undefined8 *)(param_2 + 0x10));
  }
  *(ulong *)(param_1 + 0x10) = uVar4;
LAB_0049a6b8:
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



/* Entry: 0049a6f4; end: 0049a70b;  */

void FUN_0049a6f4(long param_1,ulong param_2)

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



/* Entry: 0049a70c; end: 0049a79f;  */

void FUN_0049a70c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      FUN_0048c9b0(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_0049ae7c(*(long *)(param_1 + 0x18));
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 0049a7a0; end: 0049a7c3;  */

undefined8 FUN_0049a7a0(undefined8 param_1)

{
  func_0x0049ac68();
  return param_1;
}



/* Entry: 0049a7c4; end: 0049a7d7;  */

void FUN_0049a7c4(void)

{
  FUN_0049a7a0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0049a7d8; end: 0049a85f;  */

undefined ** FUN_0049a7d8(void)

{
  return &PTR_DAT_009eb950;
}



/* Entry: 0049a860; end: 0049a893;  */

long FUN_0049a860(long param_1)

{
  func_0x0049ac68();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0049ad04();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 0049a894; end: 0049a8a7;  */

void FUN_0049a894(void)

{
  FUN_0049a860();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0049a8a8; end: 0049a8b3;  */

undefined ** FUN_0049a8a8(void)

{
  return &PTR_DAT_009eb9a0;
}



/* Entry: 0049a8b4; end: 0049a9ab;  */

void FUN_0049a8b4(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_0049ad58(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 0049a9ac; end: 0049a9cf;  */

void FUN_0049a9ac(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      FUN_0048c9b0(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_0049ae7c(*(long *)(param_1 + 0x18));
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 0049a9d0; end: 0049a9fb;  */

undefined8 * FUN_0049a9d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_0049a33c(param_1,param_3);
  return param_1;
}



/* Entry: 0049a9fc; end: 0049aa2b;  */

long * FUN_0049a9fc(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0054cf94(param_1);
  }
  return param_1;
}



/* Entry: 0049aa2c; end: 0049ab2b;  */

void FUN_0049aa2c(dword *param_1)

{
  dword *pdVar1;
  
  if (param_1 == (dword *)0x0) {
    pdVar1 = &MACH_HEADER.flags;
    __Znwm();
  }
  else {
    pdVar1 = param_1;
    func_0x005510c4(param_1,0x18);
  }
  *(undefined ***)pdVar1 = &PTR_FUN_009eb788;
  *(dword **)(pdVar1 + 2) = param_1;
  pdVar1[4] = 0;
  return;
}



/* Entry: 0049ab2c; end: 0049ab9b;  */

dword * FUN_0049ab2c(dword *param_1)

{
  dword *pdVar1;
  
  if (param_1 == (dword *)0x0) {
    pdVar1 = &MACH_HEADER.flags;
    __Znwm();
  }
  else {
    pdVar1 = param_1;
    func_0x005510c4(param_1,0x18);
  }
  *(undefined ***)pdVar1 = &PTR_FUN_009eb788;
  *(dword **)(pdVar1 + 2) = param_1;
  pdVar1[4] = 0;
  FUN_0049a6f4();
  return pdVar1;
}



/* Entry: 0049ab9c; end: 0049ac13;  */

undefined8 * FUN_0049ab9c(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x0049ac8c();
  }
  else {
    func_0x0049ac44();
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_DAT_009eb7d8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x0049ac80();
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_0048c9b0(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  puVar2[3] = param_1;
  return puVar2;
}



/* Entry: 0049ac14; end: 0049ac9b;  */

long FUN_0049ac14(long param_1)

{
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 0049ac9c; end: 0049ad03;  */

undefined8 * FUN_0049ac9c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_009eba58;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_0054a3dc(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  param_3 = param_3 + 0x10;
  func_0x00487c6c(param_3,param_2);
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



/* Entry: 0049ad04; end: 0049ad33;  */

long FUN_0049ad04(long param_1)

{
  FUN_00487580(param_1 + 8);
  func_0x00532f74(param_1 + 0x10);
  return param_1;
}



/* Entry: 0049ad34; end: 0049ad37;  */

long FUN_0049ad34(long param_1)

{
  FUN_00487580(param_1 + 8);
  func_0x00532f74(param_1 + 0x10);
  return param_1;
}



/* Entry: 0049ad38; end: 0049ad4b;  */

void FUN_0049ad38(void)

{
  FUN_0049ad04();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0049ad4c; end: 0049ad57;  */

undefined ** FUN_0049ad4c(void)

{
  return &PTR_DAT_009eba98;
}



/* Entry: 0049ad58; end: 0049ae77;  */

void FUN_0049ad58(long param_1)

{
  ulong *puVar1;
  
  FUN_00532fa8(param_1 + 0x10);
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



/* Entry: 0049ae78; end: 0049ae7b;  */

void FUN_0049ae78(long param_1,long param_2)

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
    func_0x00532e08(param_1 + 0x10,uVar1,uVar2);
  }
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



/* Entry: 0049ae7c; end: 0049aeeb;  */

void FUN_0049ae7c(long param_1,long param_2)

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
    func_0x00532e08(param_1 + 0x10,uVar1,uVar2);
  }
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



/* Entry: 0049aeec; end: 0049aef3;  */

void FUN_0049aeec(undefined8 param_1,segment_command *param_2)

{
  segment_command *psVar1;
  
  if (param_2 == (segment_command *)0x0) {
    psVar1 = &segment_command_00000020;
    __Znwm();
  }
  else {
    psVar1 = param_2;
    func_0x005510c4(param_2,0x20);
  }
  *(undefined ***)psVar1 = &PTR_FUN_009eba58;
  *(segment_command **)psVar1->segname = param_2;
  *(undefined **)(psVar1->segname + 8) = &DAT_00b69408;
  *(undefined4 *)&psVar1->vmaddr = 0;
  return;
}



/* Entry: 0049aef4; end: 0049af43;  */

void FUN_0049aef4(segment_command *param_1)

{
  segment_command *psVar1;
  
  if (param_1 == (segment_command *)0x0) {
    psVar1 = &segment_command_00000020;
    __Znwm();
  }
  else {
    psVar1 = param_1;
    func_0x005510c4(param_1,0x20);
  }
  *(undefined ***)psVar1 = &PTR_FUN_009eba58;
  *(segment_command **)psVar1->segname = param_1;
  *(undefined **)(psVar1->segname + 8) = &DAT_00b69408;
  *(undefined4 *)&psVar1->vmaddr = 0;
  return;
}



/* Entry: 0049af44; end: 0049af4b;  */

void FUN_0049af44(void)

{
  return;
}



/* Entry: 0049af4c; end: 0049af9f; +[SCExtensionCrashManager sharedInstance] */

void FUN_0049af4c(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b60338 != -1) {
    _dispatch_once(0xb60338,&PTR___NSConcreteGlobalBlock_009ebaf0);
  }
  uVar1 = uRam0000000000b60330;
  _objc_retain(uRam0000000000b60330);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0049afa0; end: 0049afcb;  */

void FUN_0049afa0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___SCExtensionCrashManager_00ac2f10;
  _objc_alloc_init();
  uVar1 = puRam0000000000b60330;
  puRam0000000000b60330 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0049afcc; end: 0049b09b; -[SCExtensionCrashManager init] */

undefined1 * FUN_0049afcc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR__OBJC_CLASS___SCExtensionCrashManager_00ac3d60;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
    func_0x00788c00(PTR__OBJC_CLASS___NSBundle_00ac2c38);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x0078c000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_00ac2f18;
    _objc_alloc();
    func_0x007857c0();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0049b09c; end: 0049b107; -[SCExtensionCrashManager startCrashManager] */

void FUN_0049b09c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_0049b108;
  puStack_20 = &UNK_009e3fc0;
  if (lRam0000000000b60328 != -1) {
    uStack_18 = param_1;
    _dispatch_once(0xb60328,&puStack_38);
  }
  return;
}



/* Entry: 0049b108; end: 0049b113;  */

void FUN_0049b108(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00787170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),PTR_s_install_00abc960);
  return;
}



/* Entry: 0049b114; end: 0049b143; -[SCExtensionCrashManager setUserId:] */

void FUN_0049b114(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00791180(*(undefined8 *)(param_1 + 0x10),param_2,param_3,
                  &PTR____CFConstantStringClassReference_00a21440);
                    /* WARNING: Could not recover jumptable at 0x007910f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 8),PTR_s_setUserInfo__00abf148,
             *(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 0049b144; end: 0049b173; -[SCExtensionCrashManager .cxx_destruct] */

void FUN_0049b144(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0049b174; end: 0049b19b; +[KSCrashInstReportField fieldWithIndex:] */

void FUN_0049b174(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x007858c0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0049b19c; end: 0049b20b; -[KSCrashInstReportField initWithIndex:] */

long FUN_0049b19c(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  
  func_0x0049c144();
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 8) = param_3;
    puVar1 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
    func_0x00781720(PTR__OBJC_CLASS___NSMutableData_00ac2cc8,param_2,0x10);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078e040(param_1,param_2,puVar1);
    func_0x0049c12c();
  }
  return param_1;
}



/* Entry: 0049b20c; end: 0049b243; -[KSCrashInstReportField field] */

undefined8 FUN_0049b20c(undefined8 param_1)

{
  func_0x00783240();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x007896e0();
  func_0x0049c0b0();
  return param_1;
}



/* Entry: 0049b244; end: 0049b2d7; -[KSCrashInstReportField setKey:] */

void FUN_0049b244(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  FUN_0049c098();
  func_0x0049c0f4();
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19;
  _objc_release(uVar1);
  if (unaff_x19 == 0) {
    func_0x0078ea20();
  }
  else {
    func_0x00792200(PTR_PTR_00ac2f20);
    _objc_retainAutoreleasedReturnValue();
    func_0x0049c0d0();
    func_0x0078ea20();
    func_0x0049c0c0();
  }
  puVar2 = unaff_x20;
  func_0x00788060();
  _objc_retainAutoreleasedReturnValue();
  func_0x0077fde0();
  func_0x00783220();
  *unaff_x20 = puVar2;
  func_0x0049c0c0();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 0049b2d8; end: 0049b427; -[KSCrashInstReportField setValue:] */

void FUN_0049b2d8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x0049c0a8();
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar2);
    func_0x007911a0(param_1);
  }
  else {
    puVar1 = PTR_PTR_00ac2f28;
    func_0x00782680();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    if (puVar1 == (undefined *)0x0) {
      func_0x00788040();
      _objc_retainAutoreleasedReturnValue();
      FUN_004ab180("ERROR","Vendors/KSCrash/implementation/Installations/KSCrashInstallation.m",0x8d
                   ,"-[KSCrashInstReportField setValue:]",
                   &PTR____CFConstantStringClassReference_00a26a60);
    }
    else {
      func_0x0049c0f4();
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      *(long *)(param_1 + 0x18) = param_3;
      _objc_release(uVar2);
      func_0x00792180(PTR_PTR_00ac2f20);
      _objc_retainAutoreleasedReturnValue();
      func_0x007911a0(param_1);
      func_0x0049c110();
      lVar3 = param_1;
      func_0x007935c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x0077fde0();
      func_0x00783220();
      *(long *)(param_1 + 8) = lVar3;
    }
    func_0x0049c110();
    func_0x0049c0c0();
    func_0x0049c12c();
  }
  func_0x0049c0b0();
  return;
}



/* Entry: 0049b428; end: 0049b42f; -[KSCrashInstReportField index] */

undefined4 FUN_0049b428(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 0049b430; end: 0049b437; -[KSCrashInstReportField key] */

undefined8 FUN_0049b430(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0049b438; end: 0049b43f; -[KSCrashInstReportField value] */

undefined8 FUN_0049b438(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0049b440; end: 0049b447; -[KSCrashInstReportField fieldBacking] */

undefined8 FUN_0049b440(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 0049b448; end: 0049b467; -[KSCrashInstReportField setFieldBacking:] */

void FUN_0049b448(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_0049c098();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0049b468; end: 0049b46f; -[KSCrashInstReportField keyBacking] */

undefined8 FUN_0049b468(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 0049b470; end: 0049b48f; -[KSCrashInstReportField setKeyBacking:] */

void FUN_0049b470(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_0049c098();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0049b490; end: 0049b497; -[KSCrashInstReportField valueBacking] */

undefined8 FUN_0049b490(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 0049b498; end: 0049b4b7; -[KSCrashInstReportField setValueBacking:] */

void FUN_0049b498(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_0049c098();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0049b4b8; end: 0049b4fb; -[KSCrashInstReportField .cxx_destruct] */

void FUN_0049b4b8(long param_1)

{
  func_0x0049c0c8(param_1 + 0x30);
  func_0x0049c0c8(param_1 + 0x28);
  func_0x0049c0c8(param_1 + 0x20);
  func_0x0049c0c8(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 0049b4fc; end: 0049b553; -[KSCrashInstallation init] */

undefined8 FUN_0049b4fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSException_00ac2f30;
  uVar2 = *(undefined8 *)PTR__NSInternalInconsistencyException_00999c88;
  _objc_opt_class();
  func_0x0078ad40(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_00a26a80);
  func_0x0049c0b0();
  return 0;
}



/* Entry: 0049b554; end: 0049b613; -[KSCrashInstallation initWithRequiredProperties:] */

long FUN_0049b554(long param_1,undefined8 param_2)

{
  FUN_0049c098();
  func_0x0049c144();
  if (param_1 != 0) {
    func_0x00781720(PTR__OBJC_CLASS___NSMutableData_00ac2cc8,param_2,0xfb0);
    _objc_retainAutoreleasedReturnValue();
    func_0x0049c0d0();
    func_0x0078d840();
    func_0x0049c0c0();
    func_0x00781fe0(PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x0049c0d0();
    func_0x0078e080();
    func_0x0049c0c0();
    func_0x0078ff00(param_1);
    func_0x007835e0(PTR_PTR_00ac2f38,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x0049c0d0();
    func_0x0078f7a0();
    func_0x0049c0c0();
    func_0x0078da00(param_1,param_2,1);
  }
  func_0x0049c0b0();
  return param_1;
}



/* Entry: 0049b614; end: 0049b6c7; -[KSCrashInstallation dealloc] */

void FUN_0049b614(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  lVar2 = param_1;
  func_0x00784220();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  _objc_sync_enter();
  lVar1 = lRam0000000000b60340;
  func_0x0049c18c();
  if (lVar1 == lVar3) {
    lRam0000000000b60340 = 0;
    func_0x00784220(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078f560();
    func_0x0049c0c0();
  }
  _objc_sync_exit(lVar2);
  func_0x0049c12c();
  puStack_38 = PTR_PTR_00ac3d70;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0049b6c8; end: 0049b6ff; -[KSCrashInstallation crashHandlerData] */

undefined8 FUN_0049b6c8(undefined8 param_1)

{
  func_0x00780fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x007896e0();
  func_0x0049c0b0();
  return param_1;
}



/* Entry: 0049b700; end: 0049b7ef; -[KSCrashInstallation reportFieldForProperty:] */

void FUN_0049b700(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *unaff_x20;
  
  FUN_0049c098();
  puVar1 = unaff_x20;
  func_0x00783300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x0049c15c();
  puVar3 = PTR_PTR_00ac2f40;
  if (puVar1 == (undefined *)0x0) {
    func_0x0049c16c();
    func_0x007832c0(puVar3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x0049c16c();
    func_0x0078f320();
    func_0x0049c16c();
    puVar1 = unaff_x20;
    func_0x0049c17c();
    *(int *)(puVar1 + 8) = (int)unaff_x20;
    puVar1 = puVar3;
    func_0x00783220();
    puVar2 = puVar1;
    func_0x0049c17c();
    puVar4 = puVar3;
    func_0x007848a0();
    *(undefined **)(puVar2 + (long)(int)puVar4 * 8 + 0x10) = puVar1;
    func_0x00783300();
    _objc_retainAutoreleasedReturnValue();
    func_0x0078f4a0();
    func_0x0049c12c();
    puVar1 = puVar3;
  }
  func_0x0049c0b0();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 0049b7f0; end: 0049b833; -[KSCrashInstallation reportFieldForProperty:setKey:] */

void FUN_0049b7f0(void)

{
  undefined8 unaff_x21;
  
  func_0x0049c118();
  func_0x0078b640();
  _objc_retainAutoreleasedReturnValue();
  func_0x0078ea00();
  func_0x0049c0b0();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(unaff_x21);
  return;
}



/* Entry: 0049b834; end: 0049b877; -[KSCrashInstallation reportFieldForProperty:setValue:] */

void FUN_0049b834(void)

{
  undefined8 unaff_x21;
  
  func_0x0049c118();
  func_0x0078b640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00791140();
  func_0x0049c0b0();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(unaff_x21);
  return;
}



/* Entry: 0049b878; end: 0049ba5b; -[KSCrashInstallation validateProperties] */

void FUN_0049b878(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 extraout_x8;
  undefined **unaff_x20;
  undefined **ppuVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_70;
  
  func_0x0049c1a8();
  puVar1 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
  uStack_70 = extraout_x8;
  func_0x00791e20();
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  ppuVar4 = unaff_x20;
  func_0x0078b900();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &puStack_130;
  ppuVar2 = ppuVar4;
  func_0x00780ea0();
  if (ppuVar2 != (undefined **)0x0) {
    lVar5 = *plStack_120;
    do {
      ppuVar6 = (undefined **)0x0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(ppuVar4);
        }
        ppuVar3 = unaff_x20;
        func_0x00793600();
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar3 == (undefined **)0x0) {
          func_0x0049c154();
          if (ppuVar3 != (undefined **)0x0) {
            func_0x0077ef80(puVar1,param_2,&PTR____CFConstantStringClassReference_00a26ae0);
          }
          func_0x0077eec0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a26b00);
        }
        else {
          _objc_release();
        }
        ppuVar6 = (undefined **)((long)ppuVar6 + 1);
        in_ZR = ppuVar6 == ppuVar2;
      } while (ppuVar6 < ppuVar2);
      ppuVar6 = &puStack_130;
      ppuVar2 = ppuVar4;
      func_0x00780ea0();
    } while (ppuVar2 != (undefined **)0x0);
  }
  lVar5 = 0;
  func_0x0049c0c0();
  func_0x0049c154();
  ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSError_00ac2b00;
  if (lVar5 == 0) {
    ppuVar4 = (undefined **)0x0;
    ppuVar2 = (undefined **)0x0;
  }
  else {
    _objc_opt_class();
    func_0x00781e40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00782e20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar4;
    func_0x0049c15c();
    ppuVar6 = unaff_x20;
  }
  func_0x0049c0b0();
  func_0x0049c194(uStack_70);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __Unwind_Resume();
    func_0x0049c0a8();
    func_0x0049c154();
    if ((ppuVar2 == (undefined **)0x0) ||
       ((func_0x0049c154(), ppuVar2 != (undefined **)0x0 &&
        (ppuVar4 = ppuVar6, func_0x00780140(ppuVar6,param_2,0), (int)ppuVar4 == 0x2f)))) {
      func_0x0049c0f4();
      ppuVar4 = ppuVar6;
    }
    else {
      ppuVar4 = &PTR____CFConstantStringClassReference_00a26b40;
      func_0x00791ec0(&PTR____CFConstantStringClassReference_00a26b40,param_2,ppuVar6);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x0049c0b0();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(ppuVar4);
  return;
}



/* Entry: 0049ba5c; end: 0049bacf; -[KSCrashInstallation makeKeyPath:] */

void FUN_0049ba5c(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  
  func_0x0049c0a8();
  func_0x0049c154();
  if ((param_1 == 0) ||
     ((func_0x0049c154(), param_1 != 0 &&
      (ppuVar1 = param_3, func_0x00780140(param_3,param_2,0), (int)ppuVar1 == 0x2f)))) {
    func_0x0049c0f4();
    ppuVar1 = param_3;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_00a26b40;
    func_0x00791ec0(&PTR____CFConstantStringClassReference_00a26b40,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x0049c0b0();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(ppuVar1);
  return;
}



/* Entry: 0049bad0; end: 0049bbf7; -[KSCrashInstallation makeKeyPaths:] */

/* WARNING: Removing unreachable block (ram,0x0049bb68) */

undefined8 * FUN_0049bad0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 unaff_x20;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  func_0x0049c1a8();
  func_0x0049c0a8();
  puVar4 = param_3;
  func_0x00780e80();
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  if (puVar4 == (undefined8 *)0x0) {
    func_0x0049c0f4();
  }
  else {
    func_0x00780e80(param_3);
    func_0x0077f1a0(puVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x0049c0f4();
    func_0x0049c0fc();
    while (puVar4 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
      do {
        uVar2 = unaff_x20;
        func_0x00788ce0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        func_0x0077e720(puVar1,param_2,uVar2);
        func_0x0049c110();
        puVar5 = (undefined8 *)((long)puVar5 + 1);
        in_ZR = puVar5 == puVar4;
      } while (puVar5 < puVar4);
      func_0x0049c0fc();
      puVar4 = puVar3;
    }
    puVar4 = (undefined8 *)0x0;
    func_0x0049c0b0();
    param_3 = puVar1;
  }
  func_0x0049c0b0();
  func_0x0049c194(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    _objc_retain();
    func_0x0049c184();
    func_0x0049c18c();
    puVar4 = (undefined8 *)*puVar4;
    func_0x0049c0ec();
    func_0x0049c0b0();
    return puVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_3);
  return param_3;
}



/* Entry: 0049bbf8; end: 0049bc37; -[KSCrashInstallation onCrash] */

undefined8 FUN_0049bbf8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  func_0x0049c184();
  func_0x0049c18c();
  uVar1 = *param_1;
  func_0x0049c0ec();
  func_0x0049c0b0();
  return uVar1;
}



/* Entry: 0049bc38; end: 0049bc77; -[KSCrashInstallation setOnCrash:] */

void FUN_0049bc38(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  _objc_retain();
  func_0x0049c184();
  func_0x0049c18c();
  *puVar1 = param_3;
  func_0x0049c0ec();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 0049bc78; end: 0049bc7f; -[KSCrashInstallation deleteBehavior] */

undefined4 FUN_0049bc78(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 0049bc80; end: 0049bc87; -[KSCrashInstallation setDeleteBehavior:] */

void FUN_0049bc80(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 0049bc88; end: 0049bce7; -[KSCrashInstallation install] */

void FUN_0049bc88(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_00ac2f48;
  func_0x007915a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar1;
  _objc_release(uVar3);
  lVar2 = param_1;
  func_0x00784220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00787180(param_1,param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(lVar2);
  return;
}



/* Entry: 0049bce8; end: 0049bd5f; -[KSCrashInstallation installWithHandler:] */

void FUN_0049bce8(undefined8 param_1)

{
  undefined8 unaff_x19;
  
  FUN_0049c098();
  func_0x0049c0f4();
  func_0x0049c184();
  func_0x0049c17c();
  uRam0000000000b60340 = param_1;
  func_0x0078a000();
  uRam0000000000b60348 = unaff_x19;
  func_0x0078f560();
  func_0x0078da20();
  func_0x00787160();
  func_0x0049c0ec();
  func_0x0049c0b0();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 0049bd60; end: 0049bdff;  */

void FUN_0049bd60(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (pcRam0000000000b60348 != (code *)0x0) {
    (*pcRam0000000000b60348)(param_1);
  }
  puVar3 = puRam0000000000b60340;
  for (lVar4 = 0; lVar4 < *(int *)(puVar3 + 1); lVar4 = lVar4 + 1) {
    lVar1 = *(long *)puVar3[lVar4 + 2];
    if ((lVar1 != 0) && (lVar2 = ((long *)puVar3[lVar4 + 2])[1], lVar2 != 0)) {
      (**(code **)(param_1 + 0x68))(param_1,lVar1,lVar2,1);
      puVar3 = puRam0000000000b60340;
    }
  }
  if ((code *)*puVar3 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0049bdec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar3)(param_1);
    return;
  }
  return;
}



/* Entry: 0049be00; end: 0049bf53; -[KSCrashInstallation sendAllReportsWithCompletion:] */

void FUN_0049be00(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *extraout_x8;
  code *extraout_x8_00;
  
  func_0x0049c0a8();
  lVar3 = param_1;
  func_0x00793540();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar3 = param_1;
    func_0x00791880();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_00ac2f38;
    puVar1 = PTR__OBJC_CLASS___NSError_00ac2b00;
    if (lVar3 == 0) {
      _objc_opt_class(param_1);
      func_0x00781e40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00782e20(puVar1,param_2,param_1,0,&PTR____CFConstantStringClassReference_00a26b60);
      _objc_retainAutoreleasedReturnValue();
      func_0x0049c1bc();
      (*extraout_x8_00)();
      func_0x0049c0c0();
    }
    else {
      lVar3 = param_1;
      func_0x0078a8e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x007835e0(puVar2,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x0049c110();
      _objc_release(lVar3);
      func_0x00784220(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00790580();
      func_0x0049c110();
      func_0x0078c620(*(undefined8 *)(param_1 + 0x30),param_2,param_3);
    }
    func_0x0049c15c();
  }
  else if (param_3 != 0) {
    func_0x0049c1bc();
    (*extraout_x8)();
  }
  func_0x0049c12c();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0049bf54; end: 0049bf8f; -[KSCrashInstallation addPreFilter:] */

void FUN_0049bf54(void)

{
  undefined8 unaff_x20;
  
  FUN_0049c098();
  func_0x0078a8e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0077e580();
  func_0x0049c0b0();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(unaff_x20);
  return;
}



/* Entry: 0049bf90; end: 0049bf97; -[KSCrashInstallation sink] */

undefined8 FUN_0049bf90(void)

{
  return 0;
}



/* Entry: 0049bf98; end: 0049bf9f; -[KSCrashInstallation nextFieldIndex] */

undefined4 FUN_0049bf98(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 0049bfa0; end: 0049bfa7; -[KSCrashInstallation setNextFieldIndex:] */

void FUN_0049bfa0(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 0049bfa8; end: 0049bfaf; -[KSCrashInstallation crashHandlerDataBacking] */

undefined8 FUN_0049bfa8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0049bfb0; end: 0049bfcf; -[KSCrashInstallation setCrashHandlerDataBacking:] */

void FUN_0049bfb0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_0049c098();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0049bfd0; end: 0049bfd7; -[KSCrashInstallation fields] */

undefined8 FUN_0049bfd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0049bfd8; end: 0049bff7; -[KSCrashInstallation setFields:] */

void FUN_0049bfd8(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_0049c098();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0049bff8; end: 0049bfff; -[KSCrashInstallation requiredProperties] */

undefined8 FUN_0049bff8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 0049c000; end: 0049c01f; -[KSCrashInstallation setRequiredProperties:] */

void FUN_0049c000(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_0049c098();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0049c020; end: 0049c027; -[KSCrashInstallation prependedFilters] */

undefined8 FUN_0049c020(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 0049c028; end: 0049c047; -[KSCrashInstallation setPrependedFilters:] */

void FUN_0049c028(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_0049c098();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0049c048; end: 0049c053; -[KSCrashInstallation handler] */

void FUN_0049c048(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077a9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_0099ad38)(param_1,param_2,0x30,1);
  return;
}



/* Entry: 0049c054; end: 0049c097; -[KSCrashInstallation .cxx_destruct] */

void FUN_0049c054(long param_1)

{
  func_0x0049c0c8(param_1 + 0x30);
  func_0x0049c0c8(param_1 + 0x28);
  func_0x0049c0c8(param_1 + 0x20);
  func_0x0049c0c8(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 0049c098; end: 0049c1cf;  */

void FUN_0049c098(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)(param_3);
  return;
}



/* Entry: 0049c1d0; end: 0049c28b; -[KSCrashInstallationSnapAir initWithCrashReportUploadManager:crashMetricLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_0049c1d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac3d78;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithRequiredProperties__00ab6d28,0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_00ac2f50;
    _objc_alloc();
    func_0x00785160();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5098);
    *(undefined **)((long)puVar1 + (long)_DAT_00ac5098) = puVar2;
    _objc_release(uVar3);
    func_0x0078da00(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0049c28c; end: 0049c2ff; -[KSCrashInstallationSnapAir sink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049c28c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_00ac2f58;
  func_0x00783580(PTR_PTR_00ac2f58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_00ac2f38;
  func_0x007835e0(PTR_PTR_00ac2f38,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0049c300; end: 0049c30f; -[KSCrashInstallationSnapAir manager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049c300(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00788e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac5098),PTR_s_manager_00abd088);
  return;
}



/* Entry: 0049c310; end: 0049c31f; -[KSCrashInstallationSnapAir crashMetricLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049c310(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac5098),PTR_s_crashMetricLogger_00abb0f0);
  return;
}



/* Entry: 0049c320; end: 0049c333; -[KSCrashInstallationSnapAir .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049c320(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac5098,0);
  return;
}



/* Entry: 0049c334; end: 0049c41b; -[KSCrashInstallationSnapAirAppExtension initWithGroupId:reportUploadManager:crashMetricLogger:] */

undefined8
FUN_0049c334(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00781c40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00780ba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0049ca7c();
  func_0x0049ca74();
  puVar2 = puVar1;
  func_0x0077bac0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a26b80);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078a400();
  _objc_retainAutoreleasedReturnValue();
  func_0x0049ca7c();
  func_0x00784ce0(param_1,param_2,puVar2,param_4,param_5);
  func_0x0049ca6c();
  func_0x0049ca50();
  func_0x0049ca74();
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 0049c41c; end: 0049c4ab; -[KSCrashInstallationSnapAirAppExtension initWithBasePath:reportUploadManager:crashMetricLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_0049c41c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac3d80;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithCrashReportUploadManager_00abc160,param_4,param_5);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_00ac50a0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  FUN_0049ca50();
  return (undefined1 *)puVar1;
}



/* Entry: 0049c4ac; end: 0049c523; -[KSCrashInstallationSnapAirAppExtension install] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049c4ac(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR_PTR_00ac2f48;
  _objc_alloc();
  func_0x00784cc0();
  lVar3 = (long)_DAT_00ac50a4;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  puStack_28 = PTR_PTR_00ac3d80;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_installWithHandler__00abc968,*(undefined8 *)(param_1 + lVar3)
                     );
  return;
}


