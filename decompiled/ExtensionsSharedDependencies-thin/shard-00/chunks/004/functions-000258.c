/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0051a22c; end: 0051a263;  */

void FUN_0051a22c(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x0051aec8();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_0051a264();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0051aeb8();
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



/* Entry: 0051a264; end: 0051a273;  */

void FUN_0051a264(long *param_1,long param_2)

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



/* Entry: 0051a274; end: 0051a29f;  */

long FUN_0051a274(long param_1)

{
  func_0x0051aea0();
  FUN_00437b14(param_1 + 0x10);
  return param_1;
}



/* Entry: 0051a2a0; end: 0051a2a3;  */

long FUN_0051a2a0(long param_1)

{
  func_0x0051aea0();
  FUN_00437b14(param_1 + 0x10);
  return param_1;
}



/* Entry: 0051a2a4; end: 0051a2b7;  */

void FUN_0051a2a4(void)

{
  FUN_0051a274();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0051a2b8; end: 0051a2c3;  */

undefined ** FUN_0051a2b8(void)

{
  return &PTR_DAT_009ff2e0;
}



/* Entry: 0051a2c4; end: 0051a2f7;  */

void FUN_0051a2c4(long param_1)

{
  ulong *puVar1;
  
  FUN_0048cfec(param_1 + 0x10);
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



/* Entry: 0051a2f8; end: 0051a457;  */

long * FUN_0051a2f8(long param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  int iVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  
  lVar11 = 8;
  plVar6 = param_3;
  for (uVar10 = (ulong)(*(uint *)(param_1 + 0x18) &
                       ((int)*(uint *)(param_1 + 0x18) >> 0x1f ^ 0xffffffffU)); uVar10 != 0;
      uVar10 = uVar10 - 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar2 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar2 = (ulong *)(uVar4 + lVar11 + -1);
    }
    plVar6 = (long *)*puVar2;
    lVar3 = (long)*(char *)((long)plVar6 + 0x17);
    plVar9 = plVar6;
    if (lVar3 < 0) {
      lVar3 = plVar6[1];
      plVar9 = (long *)*plVar6;
    }
    FUN_0054ddb8(plVar9,lVar3,1,"snapchat.common.StringArray.value");
    plVar9 = (long *)(long)*(char *)((long)plVar6 + 0x17);
    if ((((long)plVar9 < 0) && (plVar9 = (long *)plVar6[1], 0x7f < (long)plVar9)) ||
       ((*param_3 - (long)param_2) + 0xe < (long)plVar9)) {
      plVar9 = param_3;
      func_0x0054f030(param_3,1,plVar6,param_2);
    }
    else {
      *(undefined1 *)param_2 = 10;
      *(char *)((long)param_2 + 1) = (char)plVar9;
      plVar7 = plVar6;
      if (*(char *)((long)plVar6 + 0x17) < '\0') {
        plVar7 = (long *)*plVar6;
      }
      plVar6 = plVar9;
      _memcpy((undefined1 *)((long)param_2 + 2),plVar7);
      plVar9 = (long *)((undefined1 *)((long)param_2 + 2) + (long)plVar9);
    }
    lVar11 = lVar11 + 8;
    param_2 = plVar9;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x0051af14();
  if ((long)plVar6 < 0) {
    lVar11 = *(long *)(extraout_x8 + 8);
    plVar6 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar11 = extraout_x8 + 8;
  }
  if ((long)(int)plVar6 <= *param_3 - (long)param_2) {
    _memcpy(param_2,lVar11,(ulong)plVar6 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar6);
  }
  while( true ) {
    iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
    iVar5 = (int)plVar6;
    plVar6 = (long *)(ulong)(uint)(iVar5 - iVar8);
    if (iVar5 - iVar8 == 0 || iVar5 < iVar8) break;
    func_0x0054f690();
    puVar1 = (undefined1 *)((long)param_2 + (long)iVar8);
    param_2 = param_3;
    func_0x0054ed58(param_3,puVar1);
  }
  func_0x0054f690();
  return (long *)((long)param_2 + (long)iVar5);
}



/* Entry: 0051a458; end: 0051a4db;  */

ulong FUN_0051a458(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x9;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar4 = (ulong)uVar2;
  lVar6 = 8;
  for (uVar5 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar5 != 0; uVar5 = uVar5 - 1) {
    uVar3 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar3 & 1) != 0) {
      puVar1 = (ulong *)(uVar3 + lVar6 + -1);
    }
    uVar3 = *puVar1;
    FUN_0048910c();
    uVar4 = uVar3 + uVar4;
    lVar6 = lVar6 + 8;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0051aefc();
    lVar6 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar6 = *(long *)(extraout_x9 + 0x10);
    }
    uVar4 = lVar6 + uVar4;
  }
  *(int *)(param_1 + 0x28) = (int)uVar4;
  return uVar4;
}



/* Entry: 0051a4dc; end: 0051a4df;  */

void FUN_0051a4dc(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x0051aec8();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_0048cf14();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0051aeb8();
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



/* Entry: 0051a4e0; end: 0051a5eb;  */

void FUN_0051a4e0(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x0051aec8();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_0048cf14();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0051aeb8();
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



/* Entry: 0051a5ec; end: 0051a6d7;  */

void FUN_0051a5ec(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  lVar3 = param_3;
  func_0x0051aec8();
  *(undefined8 *)(param_1 + 8) = param_2;
  *unaff_x19 = &PTR_DAT_009ff220;
  if ((*(ulong *)(lVar3 + 8) & 1) != 0) {
    func_0x0051ae74();
  }
  *(undefined4 *)(unaff_x19 + 3) = 0;
  iVar1 = *(int *)(param_3 + 0x1c);
  *(int *)((long)unaff_x19 + 0x1c) = iVar1;
  if (9 < iVar1 - 1U) {
    return;
  }
  puVar2 = (undefined8 *)(param_3 + 0x10);
  switch(iVar1) {
  case 1:
    *(undefined4 *)(unaff_x19 + 2) = *(undefined4 *)puVar2;
    break;
  default:
    unaff_x19[2] = *puVar2;
    break;
  case 3:
    *(undefined4 *)(unaff_x19 + 2) = *(undefined4 *)puVar2;
    break;
  case 4:
    *(undefined1 *)(unaff_x19 + 2) = *(undefined1 *)puVar2;
    break;
  case 5:
    func_0x00487c6c();
    goto code_r0x0051a6bc;
  case 6:
    func_0x0051ad3c();
    puVar2 = unaff_x20;
    goto code_r0x0051a6bc;
  case 7:
    func_0x0051ad80();
    puVar2 = unaff_x20;
    goto code_r0x0051a6bc;
  case 9:
    unaff_x19[2] = *puVar2;
    break;
  case 10:
    FUN_0051adc0();
    puVar2 = unaff_x20;
code_r0x0051a6bc:
    unaff_x19[2] = puVar2;
  }
  return;
}



/* Entry: 0051a6d8; end: 0051a703;  */

undefined8 FUN_0051a6d8(undefined8 param_1)

{
  func_0x0051aea0();
  FUN_0051a704(param_1);
  return param_1;
}



/* Entry: 0051a704; end: 0051a717;  */

void FUN_0051a704(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 5:
    func_0x00532f74(param_1 + 0x10);
    goto LAB_0051a5b0;
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_0051a5b0;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_00652758();
    }
    break;
  case 7:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_0051a5b0;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_0051a058();
    }
    break;
  default:
    goto LAB_0051a5b0;
  case 10:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_0051a5b0;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_0051a274();
    }
  }
  __ZdlPv();
LAB_0051a5b0:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 0051a718; end: 0051a72b;  */

void FUN_0051a718(void)

{
  FUN_0051a6d8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0051a72c; end: 0051a737;  */

undefined ** FUN_0051a72c(void)

{
  return &PTR_DAT_009ff320;
}



/* Entry: 0051a738; end: 0051a767;  */

void FUN_0051a738(long param_1)

{
  ulong *puVar1;
  
  func_0x0051a518();
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



/* Entry: 0051a768; end: 0051a93f;  */

long * FUN_0051a768(long param_1,long *param_2,long *param_3)

{
  qword *pqVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  long extraout_x8;
  long *plVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  int iVar10;
  
  plVar9 = param_3;
  plVar5 = param_2;
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 1:
    plVar5 = param_3;
    func_0x004971e4(param_3,*(undefined4 *)(param_1 + 0x10));
    plVar9 = param_2;
    break;
  case 2:
    plVar5 = param_3;
    func_0x0043645c(param_3,*(undefined8 *)(param_1 + 0x10));
    plVar9 = param_2;
    break;
  case 3:
    func_0x0051ae4c();
    func_0x0051af08();
    if (extraout_w8 == 3) {
      uVar6 = *(undefined4 *)(param_1 + 0x10);
    }
    else {
      uVar6 = 0;
    }
    puVar2 = (undefined4 *)((long)&MACH_HEADER.reserved + 1);
    func_0x00487cbc();
    plVar5 = (long *)(puVar2 + 1);
    *puVar2 = uVar6;
    break;
  case 4:
    func_0x0051ae4c();
    func_0x0051af08();
    if (extraout_w8_00 == 4) {
      plVar5 = (long *)(ulong)*(byte *)(param_1 + 0x10);
    }
    else {
      plVar5 = (long *)0x0;
    }
    uVar8 = 0x20;
    func_0x00487cbc(0x20);
    func_0x00487cbc(plVar5,uVar8);
    break;
  case 5:
    plVar9 = (long *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
    lVar4 = (long)*(char *)((long)plVar9 + 0x17);
    plVar5 = plVar9;
    if (lVar4 < 0) {
      lVar4 = plVar9[1];
      plVar5 = (long *)*plVar9;
    }
    func_0x0051aee0(plVar5,lVar4,param_3,"snapchat.common.Value.string_value");
    plVar5 = param_3;
    FUN_00435e9c(param_3,5,plVar9,param_2);
    break;
  case 6:
    plVar9 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x20);
    plVar5 = (long *)((long)&MACH_HEADER.cputype + 2);
    goto code_r0x0051a860;
  case 7:
    plVar9 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x28);
    plVar5 = (long *)((long)&MACH_HEADER.cputype + 3);
    goto code_r0x0051a860;
  case 8:
    func_0x0051ae4c();
    func_0x0051af08();
    if (extraout_w8_01 == 8) {
      uVar8 = *(undefined8 *)(param_1 + 0x10);
    }
    else {
      uVar8 = 0;
    }
    pqVar1 = &segment_command_00000020.vmsize;
    goto code_r0x0051a8d0;
  case 9:
    func_0x0051ae4c();
    func_0x0051af08();
    if (extraout_w8_02 == 9) {
      uVar8 = *(undefined8 *)(param_1 + 0x10);
    }
    else {
      uVar8 = 0;
    }
    pqVar1 = &segment_command_00000020.fileoff;
code_r0x0051a8d0:
    puVar3 = (undefined8 *)((long)pqVar1 + 1);
    func_0x00487cbc();
    plVar5 = puVar3 + 1;
    *puVar3 = uVar8;
    break;
  case 10:
    plVar9 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x28);
    plVar5 = (long *)((long)&MACH_HEADER.cpusubtype + 2);
code_r0x0051a860:
    func_0x0054dae0();
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar5;
  }
  func_0x0051af14();
  if ((long)plVar9 < 0) {
    lVar4 = *(long *)(extraout_x8 + 8);
    plVar9 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar4 = extraout_x8 + 8;
  }
  if (*param_3 - (long)plVar5 < (long)(int)plVar9) {
    while( true ) {
      iVar10 = ((int)*param_3 - (int)plVar5) + 0x10;
      iVar7 = (int)plVar9;
      plVar9 = (long *)(ulong)(uint)(iVar7 - iVar10);
      if (iVar7 - iVar10 == 0 || iVar7 < iVar10) break;
      func_0x0054f690();
      lVar4 = (long)plVar5 + (long)iVar10;
      plVar5 = param_3;
      func_0x0054ed58(param_3,lVar4);
    }
    func_0x0054f690();
    return (long *)((long)plVar5 + (long)iVar7);
  }
  _memcpy(plVar5,lVar4,(ulong)plVar9 & 0xffffffff);
  return (long *)((long)plVar5 + (long)(int)plVar9);
}



/* Entry: 0051a940; end: 0051aa17;  */

void FUN_0051a940(long param_1)

{
  uint uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x9;
  
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 1:
    lVar2 = (long)*(int *)(param_1 + 0x10);
    goto code_r0x0051a9b8;
  case 2:
    lVar2 = *(long *)(param_1 + 0x10);
code_r0x0051a9b8:
    uVar1 = (int)LZCOUNT(lVar2) * -9 + 0x2c0U >> 6;
    break;
  case 3:
    uVar1 = 5;
    break;
  case 4:
    uVar1 = 2;
    break;
  case 5:
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x10) & 0xfffffffc;
    FUN_0048910c();
    goto code_r0x0051a9e4;
  case 6:
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
    func_0x0051aa18();
    goto code_r0x0051a9e4;
  case 7:
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
    func_0x0051aa30();
    goto code_r0x0051a9e4;
  case 8:
  case 9:
    uVar1 = 9;
    break;
  case 10:
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
    func_0x0051aa48();
code_r0x0051a9e4:
    uVar1 = uVar1 + 1;
    break;
  default:
    uVar1 = 0;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0051aefc();
    lVar2 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    uVar1 = (int)lVar2 + uVar1;
  }
  *(uint *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 0051aa18; end: 0051aa5f;  */

void FUN_0051aa18(void)

{
  FUN_00652994();
  FUN_0051ae24();
  return;
}



/* Entry: 0051aa60; end: 0051aa63;  */

void FUN_0051aa60(long param_1,long param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  iVar3 = *(int *)(param_2 + 0x1c);
  if (iVar3 == 0) goto LAB_0051abf0;
  iVar4 = *(int *)(param_1 + 0x1c);
  if (iVar4 != iVar3) {
    if (iVar4 != 0) {
      func_0x0051a518(param_1);
    }
    *(int *)(param_1 + 0x1c) = iVar3;
  }
  if (9 < iVar3 - 1U) goto LAB_0051abf0;
  puVar1 = (ulong *)(param_1 + 0x10);
  switch(iVar3) {
  case 1:
    *(undefined4 *)puVar1 = *(undefined4 *)(param_2 + 0x10);
    break;
  default:
    *puVar1 = *(ulong *)(param_2 + 0x10);
    break;
  case 3:
    *(undefined4 *)puVar1 = *(undefined4 *)(param_2 + 0x10);
    break;
  case 4:
    *(undefined1 *)puVar1 = *(undefined1 *)(param_2 + 0x10);
    break;
  case 5:
    if (iVar4 != iVar3) {
      *puVar1 = (ulong)&DAT_00b69408;
    }
    puVar2 = (undefined *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
    if (*(int *)(param_2 + 0x1c) != 5) {
      puVar2 = &DAT_00b69408;
    }
    func_0x00532e08(puVar1,puVar2,uVar5);
    break;
  case 6:
    if (iVar4 == iVar3) {
      func_0x0051aea8();
      FUN_006527e4();
      break;
    }
    func_0x0051ad3c(uVar5,*(undefined8 *)(param_2 + 0x10));
    goto code_r0x0051abec;
  case 7:
    if (iVar4 == iVar3) {
      func_0x0051aea8();
      FUN_0051a22c();
      break;
    }
    func_0x0051ad80(uVar5,*(undefined8 *)(param_2 + 0x10));
    goto code_r0x0051abec;
  case 9:
    *puVar1 = *(ulong *)(param_2 + 0x10);
    break;
  case 10:
    if (iVar4 == iVar3) {
      func_0x0051aea8();
      func_0x0051a4e0();
      break;
    }
    FUN_0051adc0(uVar5,*(undefined8 *)(param_2 + 0x10));
code_r0x0051abec:
    *puVar1 = uVar5;
  }
LAB_0051abf0:
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



/* Entry: 0051aa64; end: 0051ac2b;  */

void FUN_0051aa64(long param_1,long param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  iVar3 = *(int *)(param_2 + 0x1c);
  if (iVar3 == 0) goto LAB_0051abf0;
  iVar4 = *(int *)(param_1 + 0x1c);
  if (iVar4 != iVar3) {
    if (iVar4 != 0) {
      func_0x0051a518(param_1);
    }
    *(int *)(param_1 + 0x1c) = iVar3;
  }
  if (9 < iVar3 - 1U) goto LAB_0051abf0;
  puVar1 = (ulong *)(param_1 + 0x10);
  switch(iVar3) {
  case 1:
    *(undefined4 *)puVar1 = *(undefined4 *)(param_2 + 0x10);
    break;
  default:
    *puVar1 = *(ulong *)(param_2 + 0x10);
    break;
  case 3:
    *(undefined4 *)puVar1 = *(undefined4 *)(param_2 + 0x10);
    break;
  case 4:
    *(undefined1 *)puVar1 = *(undefined1 *)(param_2 + 0x10);
    break;
  case 5:
    if (iVar4 != iVar3) {
      *puVar1 = (ulong)&DAT_00b69408;
    }
    puVar2 = (undefined *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
    if (*(int *)(param_2 + 0x1c) != 5) {
      puVar2 = &DAT_00b69408;
    }
    func_0x00532e08(puVar1,puVar2,uVar5);
    break;
  case 6:
    if (iVar4 == iVar3) {
      func_0x0051aea8();
      FUN_006527e4();
      break;
    }
    func_0x0051ad3c(uVar5,*(undefined8 *)(param_2 + 0x10));
    goto code_r0x0051abec;
  case 7:
    if (iVar4 == iVar3) {
      func_0x0051aea8();
      FUN_0051a22c();
      break;
    }
    func_0x0051ad80(uVar5,*(undefined8 *)(param_2 + 0x10));
    goto code_r0x0051abec;
  case 9:
    *puVar1 = *(ulong *)(param_2 + 0x10);
    break;
  case 10:
    if (iVar4 == iVar3) {
      func_0x0051aea8();
      func_0x0051a4e0();
      break;
    }
    FUN_0051adc0(uVar5,*(undefined8 *)(param_2 + 0x10));
code_r0x0051abec:
    *puVar1 = uVar5;
  }
LAB_0051abf0:
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



/* Entry: 0051ac2c; end: 0051ac63;  */

void FUN_0051ac2c(long param_1,long param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_0051a738();
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  iVar3 = *(int *)(param_2 + 0x1c);
  if (iVar3 == 0) goto LAB_0051abf0;
  iVar4 = *(int *)(param_1 + 0x1c);
  if (iVar4 != iVar3) {
    if (iVar4 != 0) {
      func_0x0051a518(param_1);
    }
    *(int *)(param_1 + 0x1c) = iVar3;
  }
  if (9 < iVar3 - 1U) goto LAB_0051abf0;
  puVar1 = (ulong *)(param_1 + 0x10);
  switch(iVar3) {
  case 1:
    *(undefined4 *)puVar1 = *(undefined4 *)(param_2 + 0x10);
    break;
  default:
    *puVar1 = *(ulong *)(param_2 + 0x10);
    break;
  case 3:
    *(undefined4 *)puVar1 = *(undefined4 *)(param_2 + 0x10);
    break;
  case 4:
    *(undefined1 *)puVar1 = *(undefined1 *)(param_2 + 0x10);
    break;
  case 5:
    if (iVar4 != iVar3) {
      *puVar1 = (ulong)&DAT_00b69408;
    }
    puVar2 = (undefined *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
    if (*(int *)(param_2 + 0x1c) != 5) {
      puVar2 = &DAT_00b69408;
    }
    func_0x00532e08(puVar1,puVar2,uVar5);
    break;
  case 6:
    if (iVar4 == iVar3) {
      func_0x0051aea8();
      FUN_006527e4();
      break;
    }
    func_0x0051ad3c(uVar5,*(undefined8 *)(param_2 + 0x10));
    goto code_r0x0051abec;
  case 7:
    if (iVar4 == iVar3) {
      func_0x0051aea8();
      FUN_0051a22c();
      break;
    }
    func_0x0051ad80(uVar5,*(undefined8 *)(param_2 + 0x10));
    goto code_r0x0051abec;
  case 9:
    *puVar1 = *(ulong *)(param_2 + 0x10);
    break;
  case 10:
    if (iVar4 == iVar3) {
      func_0x0051aea8();
      func_0x0051a4e0();
      break;
    }
    FUN_0051adc0(uVar5,*(undefined8 *)(param_2 + 0x10));
code_r0x0051abec:
    *puVar1 = uVar5;
  }
LAB_0051abf0:
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



/* Entry: 0051ac64; end: 0051ac83;  */

void FUN_0051ac64(undefined8 param_1,long param_2)

{
  if (param_2 == 0) {
    func_0x0051ae90();
  }
  else {
    func_0x0051ae68();
  }
  func_0x0051af20(&PTR_FUN_009ff130);
  return;
}



/* Entry: 0051ac84; end: 0051adbf;  */

void FUN_0051ac84(long param_1)

{
  if (param_1 == 0) {
    func_0x0051ae90();
  }
  else {
    func_0x0051ae68();
  }
  func_0x0051af20(&PTR_FUN_009ff130);
  return;
}



/* Entry: 0051adc0; end: 0051ae23;  */

undefined8 * FUN_0051adc0(undefined8 *param_1)

{
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x0051aec8();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0051ae90();
  }
  else {
    func_0x0051ae68();
  }
  param_1[1] = unaff_x19;
  *param_1 = &PTR_FUN_009ff130;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0051ae74();
  }
  FUN_0048cf2c(param_1 + 2);
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



/* Entry: 0051ae24; end: 0051af67;  */

long FUN_0051ae24(long param_1)

{
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 0051af68; end: 0051af8f;  */

long FUN_0051af68(long param_1)

{
  FUN_00487580(param_1 + 8);
  return param_1;
}



/* Entry: 0051af90; end: 0051af93;  */

long FUN_0051af90(long param_1)

{
  FUN_00487580(param_1 + 8);
  return param_1;
}



/* Entry: 0051af94; end: 0051afa7;  */

void FUN_0051af94(void)

{
  FUN_0051af68();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0051afa8; end: 0051afc7;  */

undefined ** FUN_0051afa8(void)

{
  return &PTR_DAT_009ff458;
}



/* Entry: 0051afc8; end: 0051b063;  */

dword * FUN_0051afc8(dword *param_1,dword *param_2,dword *param_3)

{
  dword *pdVar1;
  dword *pdVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  pdVar2 = param_1;
  if (param_1[4] != 0) {
    pdVar1 = param_1;
    func_0x0051b910();
    pdVar2 = &MACH_HEADER.cpusubtype;
    func_0x00487cbc(8,pdVar1);
    func_0x0051b8d0();
    param_2 = pdVar2;
  }
  if (param_1[5] != 0) {
    func_0x0051b910();
    param_2 = &MACH_HEADER.ncmds;
    func_0x00487cbc(0x10,pdVar2);
    func_0x0051b8d0();
  }
  if ((*(ulong *)(param_1 + 2) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 2) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*(undefined8 *)param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x0054f690();
        lVar3 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x0054ed58(param_3,lVar3);
      }
      func_0x0054f690();
      return (dword *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (dword *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 0051b064; end: 0051b0db;  */

long FUN_0051b064(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x18) = (int)lVar1;
  return lVar1;
}



/* Entry: 0051b0dc; end: 0051b113;  */

void FUN_0051b0dc(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x0051afb4();
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
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



/* Entry: 0051b114; end: 0051b15b;  */

undefined1  [16] FUN_0051b114(long param_1,long param_2)

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
  for (puVar2 = (undefined1 *)(param_1 + 0x10); puVar2 != (undefined1 *)(param_1 + 0x18);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x18);
  return auVar6;
}



/* Entry: 0051b15c; end: 0051b207;  */

undefined8 * FUN_0051b15c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_009ff418;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_0054a3dc(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar1 = param_3 + 0x18;
  func_0x0051b8f4();
  param_1[3] = lVar1;
  lVar1 = param_3 + 0x20;
  func_0x0051b8f4();
  param_1[4] = lVar1;
  lVar1 = param_3 + 0x28;
  func_0x0051b8f4();
  param_1[5] = lVar1;
  lVar1 = param_3 + 0x30;
  func_0x0051b8f4();
  param_1[6] = lVar1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_0051b85c(param_2,*(undefined8 *)(param_3 + 0x38));
  }
  param_1[7] = param_2;
  uVar2 = *(undefined8 *)(param_3 + 0x40);
  param_1[9] = *(undefined8 *)(param_3 + 0x48);
  param_1[8] = uVar2;
  return param_1;
}



/* Entry: 0051b208; end: 0051b237;  */

long FUN_0051b208(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_0051b238(param_1);
  return param_1;
}



/* Entry: 0051b238; end: 0051b27f;  */

void FUN_0051b238(long param_1)

{
  func_0x00532f74(param_1 + 0x18);
  func_0x00532f74(param_1 + 0x20);
  func_0x00532f74(param_1 + 0x28);
  func_0x00532f74(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_0051af68();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0051b280; end: 0051b283;  */

long FUN_0051b280(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_0051b238(param_1);
  return param_1;
}



/* Entry: 0051b284; end: 0051b297;  */

void FUN_0051b284(void)

{
  FUN_0051b208();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0051b298; end: 0051b2a3;  */

undefined ** FUN_0051b298(void)

{
  return &PTR_DAT_009ff4a0;
}



/* Entry: 0051b2a4; end: 0051b30f;  */

void FUN_0051b2a4(long param_1)

{
  ulong *puVar1;
  
  FUN_00532fa8(param_1 + 0x18);
  FUN_00532fa8(param_1 + 0x20);
  FUN_00532fa8(param_1 + 0x28);
  FUN_00532fa8(param_1 + 0x30);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x0051afb4(*(undefined8 *)(param_1 + 0x38));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
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



/* Entry: 0051b310; end: 0051b4e3;  */

qword * FUN_0051b310(qword *param_1,qword *param_2,qword *param_3)

{
  undefined1 *puVar1;
  qword *pqVar2;
  qword *pqVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  puVar8 = (undefined8 *)(param_1[3] & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  pqVar2 = param_1;
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 != 0) {
      puVar8 = (undefined8 *)*puVar8;
      goto LAB_0051b354;
    }
  }
  else if (*(char *)((long)puVar8 + 0x17) != '\0') {
LAB_0051b354:
    func_0x0051b91c(puVar8,lVar4,param_3,"snapchat.content.MediaReference.url");
    param_2 = param_3;
    func_0x0051b8e8(param_3,2);
    pqVar2 = param_2;
  }
  uVar5 = param_1[4] & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar5 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar5 + 8);
  }
  if (lVar4 != 0) {
    pqVar2 = param_3;
    FUN_00435e9c(param_3,3,uVar5,param_2);
    param_2 = pqVar2;
  }
  if ((param_1[2] & 1) != 0) {
    pqVar2 = (qword *)((long)&MACH_HEADER.cputype + 1);
    func_0x0054dae0(5,param_1[7],*(undefined4 *)(param_1[7] + 0x18),param_2,param_3);
    param_2 = pqVar2;
  }
  if (param_1[8] != 0) {
    pqVar2 = param_3;
    func_0x00438520(param_3,param_1[8],param_2);
    param_2 = pqVar2;
  }
  pqVar3 = pqVar2;
  if (*(int *)(param_1 + 9) != 0) {
    func_0x0051b904();
    pqVar3 = &segment_command_00000020.vmaddr;
    func_0x00487cbc(0x38,pqVar2);
    func_0x0051b8d0();
    param_2 = pqVar3;
  }
  if (*(int *)((long)param_1 + 0x4c) != 0) {
    func_0x0051b904();
    param_2 = &segment_command_00000020.vmsize;
    func_0x00487cbc(0x40,pqVar3);
    func_0x0051b8d0();
  }
  puVar8 = (undefined8 *)(param_1[5] & 0xfffffffffffffffc);
  if (*(char *)((long)puVar8 + 0x17) < '\0') {
    if (puVar8[1] != 0) {
      puVar8 = (undefined8 *)*puVar8;
      goto LAB_0051b448;
    }
  }
  else if (*(char *)((long)puVar8 + 0x17) != '\0') {
LAB_0051b448:
    func_0x0051b91c(puVar8);
    param_2 = param_3;
    func_0x0051b8e8(param_3,9);
  }
  puVar8 = (undefined8 *)(param_1[6] & 0xfffffffffffffffc);
  if (*(char *)((long)puVar8 + 0x17) < '\0') {
    if (puVar8[1] == 0) goto LAB_0051b4a8;
    puVar8 = (undefined8 *)*puVar8;
  }
  else if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_0051b4a8;
  func_0x0051b91c(puVar8);
  param_2 = param_3;
  func_0x0051b8e8(param_3,10);
LAB_0051b4a8:
  if ((param_1[1] & 1) == 0) {
    return param_2;
  }
  uVar6 = param_1[1] & 0xfffffffffffffffe;
  uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
  if ((long)uVar5 < 0) {
    lVar4 = *(long *)(uVar6 + 8);
    uVar5 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    lVar4 = uVar6 + 8;
  }
  if ((long)(*param_3 - (long)param_2) < (long)(int)uVar5) {
    while( true ) {
      iVar9 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar7 = (int)uVar5;
      uVar5 = (ulong)(uint)(iVar7 - iVar9);
      if (iVar7 - iVar9 == 0 || iVar7 < iVar9) break;
      func_0x0054f690();
      puVar1 = (undefined1 *)((long)param_2 + (long)iVar9);
      param_2 = param_3;
      func_0x0054ed58(param_3,puVar1);
    }
    func_0x0054f690();
    return (qword *)((long)param_2 + (long)iVar7);
  }
  _memcpy(param_2,lVar4,uVar5 & 0xffffffff);
  return (qword *)((long)param_2 + (long)(int)uVar5);
}



/* Entry: 0051b4e4; end: 0051b63b;  */

long FUN_0051b4e4(long param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x0051b930(*(undefined8 *)(param_1 + 0x18));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar1 + 8);
  }
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    FUN_0048910c();
    lVar4 = lVar1 + 1;
  }
  func_0x0051b930(*(undefined8 *)(param_1 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x00487c3c();
    lVar4 = lVar4 + lVar1 + 1;
  }
  func_0x0051b930(*(undefined8 *)(param_1 + 0x28));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    FUN_0048910c();
    lVar4 = lVar4 + lVar1 + 1;
  }
  func_0x0051b930(*(undefined8 *)(param_1 + 0x30));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    FUN_0048910c();
    lVar4 = lVar4 + lVar1 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    FUN_0051b064();
    lVar4 = lVar4 + lVar1 + (ulong)((int)LZCOUNT((int)lVar1) * -9 + 0x160U >> 6) + 1;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar4 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x40)) * -9 + 0x2c0U >> 6) + lVar4;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    lVar4 = lVar4 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x48)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    lVar4 = lVar4 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x4c)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar1 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 0051b63c; end: 0051b63f;  */

void FUN_0051b63c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  lVar3 = param_2;
  func_0x0051b948(*(undefined8 *)(param_2 + 0x18));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      func_0x0051b93c();
    }
    func_0x00532e08(param_1 + 0x18);
  }
  func_0x0051b948(*(undefined8 *)(param_2 + 0x20));
  lVar5 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0051b93c();
    }
    func_0x00532e08(param_1 + 0x20);
  }
  func_0x0051b948(*(undefined8 *)(param_2 + 0x28));
  lVar5 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0051b93c();
    }
    func_0x00532e08(param_1 + 0x28);
  }
  func_0x0051b948(*(undefined8 *)(param_2 + 0x30));
  lVar5 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0051b93c();
    }
    func_0x00532e08(param_1 + 0x30);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
      FUN_0051b85c(uVar2,*(undefined8 *)(param_2 + 0x38));
      *(ulong *)(param_1 + 0x38) = uVar2;
    }
    else {
      func_0x0051af34();
    }
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x4c) != 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_2 + 0x4c);
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



/* Entry: 0051b640; end: 0051b7a7;  */

void FUN_0051b640(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  lVar3 = param_2;
  func_0x0051b948(*(undefined8 *)(param_2 + 0x18));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      func_0x0051b93c();
    }
    func_0x00532e08(param_1 + 0x18);
  }
  func_0x0051b948(*(undefined8 *)(param_2 + 0x20));
  lVar5 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0051b93c();
    }
    func_0x00532e08(param_1 + 0x20);
  }
  func_0x0051b948(*(undefined8 *)(param_2 + 0x28));
  lVar5 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0051b93c();
    }
    func_0x00532e08(param_1 + 0x28);
  }
  func_0x0051b948(*(undefined8 *)(param_2 + 0x30));
  lVar5 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0051b93c();
    }
    func_0x00532e08(param_1 + 0x30);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
      FUN_0051b85c(uVar2,*(undefined8 *)(param_2 + 0x38));
      *(ulong *)(param_1 + 0x38) = uVar2;
    }
    else {
      func_0x0051af34();
    }
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x4c) != 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_2 + 0x4c);
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



/* Entry: 0051b7a8; end: 0051b7df;  */

void FUN_0051b7a8(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_0051b2a4();
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  lVar3 = param_2;
  func_0x0051b948(*(undefined8 *)(param_2 + 0x18));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      func_0x0051b93c();
    }
    func_0x00532e08(param_1 + 0x18);
  }
  func_0x0051b948(*(undefined8 *)(param_2 + 0x20));
  lVar5 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0051b93c();
    }
    func_0x00532e08(param_1 + 0x20);
  }
  func_0x0051b948(*(undefined8 *)(param_2 + 0x28));
  lVar5 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0051b93c();
    }
    func_0x00532e08(param_1 + 0x28);
  }
  func_0x0051b948(*(undefined8 *)(param_2 + 0x30));
  lVar5 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0051b93c();
    }
    func_0x00532e08(param_1 + 0x30);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
      FUN_0051b85c(uVar2,*(undefined8 *)(param_2 + 0x38));
      *(ulong *)(param_1 + 0x38) = uVar2;
    }
    else {
      func_0x0051af34();
    }
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x4c) != 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_2 + 0x4c);
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



/* Entry: 0051b7e0; end: 0051b85b;  */

undefined1  [16] FUN_0051b7e0(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar6;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  puVar4 = (undefined1 *)(param_2 + 0x38);
  puVar5 = puVar4;
  for (puVar3 = (undefined1 *)(param_1 + 0x38); puVar3 != (undefined1 *)(param_1 + 0x50);
      puVar3 = puVar3 + 1) {
    uVar2 = *puVar3;
    *puVar3 = *puVar5;
    *puVar5 = uVar2;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  auVar7._8_8_ = puVar4;
  auVar7._0_8_ = (undefined1 *)(param_1 + 0x50);
  return auVar7;
}



/* Entry: 0051b85c; end: 0051b8cf;  */

segment_command * FUN_0051b85c(segment_command *param_1)

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
  *(undefined ***)psVar1 = &PTR_FUN_009ff3c8;
  *(segment_command **)psVar1->segname = param_1;
  *(undefined4 *)&psVar1->vmaddr = 0;
  psVar1->segname[8] = '\0';
  psVar1->segname[9] = '\0';
  psVar1->segname[10] = '\0';
  psVar1->segname[0xb] = '\0';
  psVar1->segname[0xc] = '\0';
  psVar1->segname[0xd] = '\0';
  psVar1->segname[0xe] = '\0';
  psVar1->segname[0xf] = '\0';
  func_0x0051af34();
  return psVar1;
}



/* Entry: 0051b8d0; end: 0051b98f;  */

void FUN_0051b8d0(byte *param_1)

{
  ulong uVar1;
  int unaff_w21;
  
  for (uVar1 = (ulong)unaff_w21; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *param_1 = (byte)uVar1 | 0x80;
    param_1 = param_1 + 1;
  }
  *param_1 = (byte)uVar1;
  return;
}



/* Entry: 0051b990; end: 0051b9b7;  */

long FUN_0051b990(long param_1)

{
  FUN_00487580(param_1 + 8);
  return param_1;
}



/* Entry: 0051b9b8; end: 0051ba03;  */

undefined8 * FUN_0051b9b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_009ff520;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x0051b954(param_1,param_3);
  return param_1;
}



/* Entry: 0051ba04; end: 0051ba07;  */

long FUN_0051ba04(long param_1)

{
  FUN_00487580(param_1 + 8);
  return param_1;
}



/* Entry: 0051ba08; end: 0051ba1b;  */

void FUN_0051ba08(void)

{
  FUN_0051b990();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0051ba1c; end: 0051ba3b;  */

undefined ** FUN_0051ba1c(void)

{
  return &PTR_DAT_009ff560;
}



/* Entry: 0051ba3c; end: 0051bae7;  */

long * FUN_0051ba3c(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  
  puVar3 = param_1;
  if (param_1[2] != 0) {
    puVar2 = param_1;
    FUN_0051bbf4();
    uVar7 = param_1[2];
    puVar3 = (undefined8 *)((long)&MACH_HEADER.cpusubtype + 1);
    func_0x00487cbc(9,puVar2);
    param_2 = puVar3 + 1;
    *puVar3 = uVar7;
  }
  if (param_1[3] != 0) {
    FUN_0051bbf4();
    uVar7 = param_1[3];
    puVar2 = (undefined8 *)((long)&MACH_HEADER.ncmds + 1);
    func_0x00487cbc(0x11,puVar3);
    param_2 = puVar2 + 1;
    *puVar2 = uVar7;
  }
  if ((param_1[1] & 1) != 0) {
    uVar6 = param_1[1] & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      while( true ) {
        iVar9 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar8 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar8 - iVar9);
        if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
        func_0x0054f690();
        puVar1 = (undefined1 *)((long)param_2 + (long)iVar9);
        param_2 = param_3;
        func_0x0054ed58(param_3,puVar1);
      }
      func_0x0054f690();
      return (long *)((long)param_2 + (long)iVar8);
    }
    _memcpy(param_2,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar5);
  }
  return param_2;
}



/* Entry: 0051bae8; end: 0051bb33;  */

long FUN_0051bae8(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = 9;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + 9;
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



/* Entry: 0051bb34; end: 0051bb5f;  */

long FUN_0051bb34(long param_1)

{
  FUN_0051bae8();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 0051bb60; end: 0051bb67;  */

void FUN_0051bb60(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  
  if (param_2 == (char *)0x0) {
    pcVar1 = segment_command_00000020.segname;
    __Znwm();
  }
  else {
    pcVar1 = param_2;
    func_0x005510c4(param_2,0x28);
  }
  *(undefined ***)pcVar1 = &PTR_FUN_009ff520;
  *(char **)(pcVar1 + 8) = param_2;
  *(qword *)(pcVar1 + 0x10) = 0;
  *(qword *)(pcVar1 + 0x18) = 0;
  *(undefined4 *)(pcVar1 + 0x20) = 0;
  return;
}



/* Entry: 0051bb68; end: 0051bbf3;  */

void FUN_0051bb68(char *param_1)

{
  char *pcVar1;
  
  if (param_1 == (char *)0x0) {
    pcVar1 = segment_command_00000020.segname;
    __Znwm();
  }
  else {
    pcVar1 = param_1;
    func_0x005510c4(param_1,0x28);
  }
  *(undefined ***)pcVar1 = &PTR_FUN_009ff520;
  *(char **)(pcVar1 + 8) = param_1;
  *(qword *)(pcVar1 + 0x10) = 0;
  *(qword *)(pcVar1 + 0x18) = 0;
  *(undefined4 *)(pcVar1 + 0x20) = 0;
  return;
}



/* Entry: 0051bbf4; end: 0051bc07;  */

ulong * FUN_0051bbf4(void)

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
    FUN_0054ec3c();
    in_x3 = (ulong *)((long)puVar2 + (long)((int)in_x3 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= in_x3);
  return in_x3;
}



/* Entry: 0051bc08; end: 0051bc37;  */

long FUN_0051bc08(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_0051bc38(param_1);
  return param_1;
}



/* Entry: 0051bc38; end: 0051bc5f;  */

long * FUN_0051bc38(long param_1)

{
  long *plVar1;
  
  func_0x00532f74(param_1 + 0x28);
  plVar1 = (long *)(param_1 + 0x10);
  if (*plVar1 != 0) {
    FUN_0054cf94(plVar1);
  }
  return plVar1;
}



/* Entry: 0051bc60; end: 0051bc63;  */

long FUN_0051bc60(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_0051bc38(param_1);
  return param_1;
}



/* Entry: 0051bc64; end: 0051bc77;  */

void FUN_0051bc64(void)

{
  FUN_0051bc08();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0051bc78; end: 0051bc83;  */

undefined ** FUN_0051bc78(void)

{
  return &PTR_DAT_009ff600;
}



/* Entry: 0051bc84; end: 0051bcd7;  */

void FUN_0051bc84(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    FUN_00437de0(param_1 + 0x10);
  }
  FUN_00532fa8(param_1 + 0x28);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x30) = 0;
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



/* Entry: 0051bcd8; end: 0051bdff;  */

long * FUN_0051bcd8(long param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  
  plVar3 = param_2;
  if (*(int *)(param_1 + 0x30) != 0) {
    plVar3 = param_3;
    func_0x004971e4(param_3,*(int *)(param_1 + 0x30),param_2);
  }
  puVar10 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
  lVar6 = (long)*(char *)((long)puVar10 + 0x17);
  if (lVar6 < 0) {
    lVar6 = puVar10[1];
    if (lVar6 == 0) goto LAB_0051bd60;
    puVar4 = (undefined8 *)*puVar10;
  }
  else {
    puVar4 = puVar10;
    if (*(char *)((long)puVar10 + 0x17) == '\0') goto LAB_0051bd60;
  }
  FUN_0054ddb8(puVar4,lVar6,1,"google.rpc.Status.message");
  plVar5 = param_3;
  FUN_00435e9c(param_3,2,puVar10,plVar3);
  plVar3 = plVar5;
LAB_0051bd60:
  iVar11 = *(int *)(param_1 + 0x18);
  for (iVar9 = 0; iVar11 != iVar9; iVar9 = iVar9 + 1) {
    uVar7 = *(ulong *)(param_1 + 0x10);
    puVar2 = (ulong *)(param_1 + 0x10);
    if ((uVar7 & 1) != 0) {
      puVar2 = (ulong *)(uVar7 + (long)iVar9 * 8 + 7);
    }
    plVar5 = (long *)((long)&MACH_HEADER.magic + 3);
    func_0x0054dae0(3,*puVar2,*(undefined4 *)(*puVar2 + 0x20),plVar3,param_3);
    plVar3 = plVar5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar8 + 0x1f);
    if ((long)uVar7 < 0) {
      lVar6 = *(long *)(uVar8 + 8);
      uVar7 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      lVar6 = uVar8 + 8;
    }
    if (*param_3 - (long)plVar3 < (long)(int)uVar7) {
      while( true ) {
        iVar11 = ((int)*param_3 - (int)plVar3) + 0x10;
        iVar9 = (int)uVar7;
        uVar7 = (ulong)(uint)(iVar9 - iVar11);
        if (iVar9 - iVar11 == 0 || iVar9 < iVar11) break;
        func_0x0054f690();
        puVar1 = (undefined1 *)((long)plVar3 + (long)iVar11);
        plVar3 = param_3;
        func_0x0054ed58(param_3,puVar1);
      }
      func_0x0054f690();
      return (long *)((long)plVar3 + (long)iVar9);
    }
    _memcpy(plVar3,lVar6,uVar7 & 0xffffffff);
    return (long *)((long)plVar3 + (long)(int)uVar7);
  }
  return plVar3;
}



/* Entry: 0051be00; end: 0051bec3;  */

long FUN_0051be00(long param_1)

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
    FUN_0051aa18();
    lVar3 = uVar2 + lVar3;
    puVar1 = puVar1 + 1;
  }
  uVar2 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    FUN_0048910c();
    lVar3 = lVar3 + uVar2 + 1;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * -9 + 0x2c0U >> 6) + lVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x34) = (int)lVar3;
  return lVar3;
}



/* Entry: 0051bec4; end: 0051bf5b;  */

void FUN_0051bec4(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    FUN_0054d3f8(param_1 + 0x10,param_2 + 0x10,0x51ad3c);
  }
  uVar1 = *(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x28,uVar1,uVar2);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
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



/* Entry: 0051bf5c; end: 0051bf63;  */

void FUN_0051bf5c(undefined8 param_1,qword *param_2)

{
  qword *pqVar1;
  
  if (param_2 == (qword *)0x0) {
    pqVar1 = &segment_command_00000020.vmaddr;
    __Znwm();
  }
  else {
    pqVar1 = param_2;
    func_0x005510c4(param_2,0x38);
  }
  *pqVar1 = (qword)&PTR_FUN_009ff5c0;
  pqVar1[1] = (qword)param_2;
  pqVar1[2] = 0;
  pqVar1[3] = 0;
  pqVar1[4] = (qword)param_2;
  pqVar1[5] = (qword)&DAT_00b69408;
  pqVar1[6] = 0;
  return;
}



/* Entry: 0051bf64; end: 0051bf93;  */

long * FUN_0051bf64(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0054cf94(param_1);
  }
  return param_1;
}



/* Entry: 0051bf94; end: 0051bfe7;  */

void FUN_0051bf94(qword *param_1)

{
  qword *pqVar1;
  
  if (param_1 == (qword *)0x0) {
    pqVar1 = &segment_command_00000020.vmaddr;
    __Znwm();
  }
  else {
    pqVar1 = param_1;
    func_0x005510c4(param_1,0x38);
  }
  *pqVar1 = (qword)&PTR_FUN_009ff5c0;
  pqVar1[1] = (qword)param_1;
  pqVar1[2] = 0;
  pqVar1[3] = 0;
  pqVar1[4] = (qword)param_1;
  pqVar1[5] = (qword)&DAT_00b69408;
  pqVar1[6] = 0;
  return;
}



/* Entry: 0051bfe8; end: 0051bfef;  */

void FUN_0051bfe8(void)

{
  return;
}



/* Entry: 0051bff0; end: 0051c01b;  */

long FUN_0051bff0(long param_1)

{
  func_0x0051d8fc();
  func_0x00532f74(param_1 + 0x10);
  return param_1;
}



/* Entry: 0051c01c; end: 0051c01f;  */

long FUN_0051c01c(long param_1)

{
  func_0x0051d8fc();
  func_0x00532f74(param_1 + 0x10);
  return param_1;
}



/* Entry: 0051c020; end: 0051c033;  */

void FUN_0051c020(void)

{
  FUN_0051bff0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0051c034; end: 0051c03f;  */

undefined ** FUN_0051c034(void)

{
  return &PTR_DAT_009ff790;
}



/* Entry: 0051c040; end: 0051c073;  */

void FUN_0051c040(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0051d8a0();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
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



/* Entry: 0051c074; end: 0051c143;  */

long * FUN_0051c074(undefined8 param_1,long param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar5;
  long unaff_x22;
  int iVar6;
  
  func_0x0051d7d4();
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_0051c0c0;
  }
  else if ((int)param_2 == 0) goto LAB_0051c0c0;
  func_0x0051d828();
  unaff_x20 = unaff_x19;
  func_0x0051d7bc();
LAB_0051c0c0:
  if (*(int *)(unaff_x21 + 0x20) != 0) {
    plVar2 = unaff_x19;
    func_0x00487c24();
    unaff_x20 = (long *)(ulong)*(uint *)(unaff_x21 + 0x20);
    uVar3 = 0x10;
    func_0x00487cbc(0x10,plVar2);
    func_0x00487ce8(unaff_x20,uVar3);
  }
  plVar2 = unaff_x20;
  if (*(long *)(unaff_x21 + 0x18) != 0) {
    plVar2 = unaff_x19;
    FUN_00435f80();
    param_3 = unaff_x20;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x0051d9b4();
    if ((long)param_3 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      param_3 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)plVar2 < (long)(int)param_3) {
      while( true ) {
        iVar6 = ((int)*unaff_x19 - (int)plVar2) + 0x10;
        iVar5 = (int)param_3;
        uVar1 = iVar5 - iVar6;
        param_3 = (long *)(ulong)uVar1;
        if (uVar1 == 0 || iVar5 < iVar6) break;
        func_0x0054f690();
        plVar2 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)plVar2 + (long)iVar5);
    }
    _memcpy(plVar2,lVar4,(ulong)param_3 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)param_3);
  }
  return plVar2;
}



/* Entry: 0051c144; end: 0051c243;  */

void FUN_0051c144(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long lVar3;
  long extraout_x9;
  
  lVar3 = param_1;
  func_0x0051d86c(*(undefined8 *)(param_1 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_0048910c();
    iVar1 = (int)lVar3 + 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0051d988();
    lVar3 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x24) = iVar1;
  return;
}



/* Entry: 0051c244; end: 0051c26f;  */

undefined8 FUN_0051c244(undefined8 param_1)

{
  func_0x0051d8fc();
  FUN_0051c270(param_1);
  return param_1;
}



/* Entry: 0051c270; end: 0051c297;  */

/* WARNING: Possible PIC construction at 0x0051c284: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0051c288) */

void FUN_0051c270(void)

{
  ulong uVar1;
  long unaff_x19;
  
  func_0x0051d95c();
  uVar1 = *(ulong *)(unaff_x19 + 0x18) ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(uVar1);
  return;
}



/* Entry: 0051c298; end: 0051c29b;  */

undefined8 FUN_0051c298(undefined8 param_1)

{
  func_0x0051d8fc();
  FUN_0051c270(param_1);
  return param_1;
}



/* Entry: 0051c29c; end: 0051c2af;  */

void FUN_0051c29c(void)

{
  FUN_0051c244();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0051c2b0; end: 0051c2bb;  */

undefined ** FUN_0051c2b0(void)

{
  return &PTR_DAT_009ff7e8;
}



/* Entry: 0051c2bc; end: 0051c2f7;  */

void FUN_0051c2bc(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0051d8a0();
  FUN_00532fa8(unaff_x19 + 0x18);
  FUN_00532fa8(unaff_x19 + 0x20);
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



/* Entry: 0051c2f8; end: 0051c3fb;  */

long * FUN_0051c2f8(undefined8 param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long unaff_x22;
  int iVar4;
  
  func_0x0051d7d4();
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_0051c328;
  }
  else if ((int)param_2 != 0) {
LAB_0051c328:
    func_0x0051d828();
    param_2 = 1;
    unaff_x20 = unaff_x19;
    func_0x0051d7bc();
  }
  func_0x0051d860(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_0051c368;
  }
  else if ((int)param_2 != 0) {
LAB_0051c368:
    func_0x0051d828();
    param_2 = 2;
    unaff_x20 = unaff_x19;
    func_0x0051d7bc();
  }
  func_0x0051d860(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_0051c3c4;
  }
  else if ((int)param_2 == 0) goto LAB_0051c3c4;
  func_0x0051d828();
  unaff_x20 = unaff_x19;
  func_0x0051d7bc();
LAB_0051c3c4:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0051d9b4();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)unaff_x20 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)unaff_x20) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x0054f690();
      unaff_x20 = unaff_x19;
      func_0x0054ed58();
    }
    func_0x0054f690();
    return (long *)((long)unaff_x20 + (long)iVar3);
  }
  _memcpy(unaff_x20,lVar2,param_3 & 0xffffffff);
  return (long *)((long)unaff_x20 + (long)(int)param_3);
}



/* Entry: 0051c3fc; end: 0051c497;  */

long FUN_0051c3fc(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar2;
  long extraout_x9;
  long lVar3;
  
  lVar2 = param_1;
  func_0x0051d86c(*(undefined8 *)(param_1 + 0x10));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    FUN_0048910c();
    lVar3 = lVar2 + 1;
  }
  func_0x0051d86c(*(undefined8 *)(param_1 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    FUN_0048910c();
    func_0x0051d9a8();
  }
  func_0x0051d86c(*(undefined8 *)(param_1 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    FUN_0048910c();
    func_0x0051d9a8();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0051d988();
    lVar2 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 0051c498; end: 0051c49b;  */

void FUN_0051c498(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0051d830();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0051d848();
    }
    func_0x0051d954();
  }
  func_0x0051d854(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0051d848();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x00532e08();
  }
  func_0x0051d854(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0051d848();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x00532e08();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0051d90c();
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



/* Entry: 0051c49c; end: 0051c533;  */

void FUN_0051c49c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0051d830();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0051d848();
    }
    func_0x0051d954();
  }
  func_0x0051d854(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0051d848();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x00532e08();
  }
  func_0x0051d854(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0051d848();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x00532e08();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0051d90c();
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



/* Entry: 0051c534; end: 0051c55f;  */

undefined8 FUN_0051c534(undefined8 param_1)

{
  func_0x0051d8fc();
  FUN_0051c560(param_1);
  return param_1;
}



/* Entry: 0051c560; end: 0051c587;  */

/* WARNING: Possible PIC construction at 0x0051c574: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0051c578) */

void FUN_0051c560(void)

{
  ulong uVar1;
  long unaff_x19;
  
  func_0x0051d95c();
  uVar1 = *(ulong *)(unaff_x19 + 0x18) ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(uVar1);
  return;
}



/* Entry: 0051c588; end: 0051c58b;  */

undefined8 FUN_0051c588(undefined8 param_1)

{
  func_0x0051d8fc();
  FUN_0051c560(param_1);
  return param_1;
}



/* Entry: 0051c58c; end: 0051c59f;  */

void FUN_0051c58c(void)

{
  FUN_0051c534();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0051c5a0; end: 0051c5ab;  */

undefined ** FUN_0051c5a0(void)

{
  return &PTR_DAT_009ff848;
}



/* Entry: 0051c5ac; end: 0051c5e7;  */

void FUN_0051c5ac(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0051d8a0();
  FUN_00532fa8(unaff_x19 + 0x18);
  FUN_00532fa8(unaff_x19 + 0x20);
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



/* Entry: 0051c5e8; end: 0051c6eb;  */

long * FUN_0051c5e8(undefined8 param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long unaff_x22;
  int iVar4;
  
  func_0x0051d7d4();
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_0051c618;
  }
  else if ((int)param_2 != 0) {
LAB_0051c618:
    func_0x0051d828();
    param_2 = 1;
    unaff_x20 = unaff_x19;
    func_0x0051d7bc();
  }
  func_0x0051d860(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_0051c658;
  }
  else if ((int)param_2 != 0) {
LAB_0051c658:
    func_0x0051d828();
    param_2 = 2;
    unaff_x20 = unaff_x19;
    func_0x0051d7bc();
  }
  func_0x0051d860(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_0051c6b4;
  }
  else if ((int)param_2 == 0) goto LAB_0051c6b4;
  func_0x0051d828();
  unaff_x20 = unaff_x19;
  func_0x0051d7bc();
LAB_0051c6b4:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0051d9b4();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)unaff_x20 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)unaff_x20) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x0054f690();
      unaff_x20 = unaff_x19;
      func_0x0054ed58();
    }
    func_0x0054f690();
    return (long *)((long)unaff_x20 + (long)iVar3);
  }
  _memcpy(unaff_x20,lVar2,param_3 & 0xffffffff);
  return (long *)((long)unaff_x20 + (long)(int)param_3);
}



/* Entry: 0051c6ec; end: 0051c787;  */

long FUN_0051c6ec(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar2;
  long extraout_x9;
  long lVar3;
  
  lVar2 = param_1;
  func_0x0051d86c(*(undefined8 *)(param_1 + 0x10));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    FUN_0048910c();
    lVar3 = lVar2 + 1;
  }
  func_0x0051d86c(*(undefined8 *)(param_1 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    FUN_0048910c();
    func_0x0051d9a8();
  }
  func_0x0051d86c(*(undefined8 *)(param_1 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    FUN_0048910c();
    func_0x0051d9a8();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0051d988();
    lVar2 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 0051c788; end: 0051c78b;  */

void FUN_0051c788(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0051d830();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0051d848();
    }
    func_0x0051d954();
  }
  func_0x0051d854(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0051d848();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x00532e08();
  }
  func_0x0051d854(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0051d848();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x00532e08();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0051d90c();
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


