/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004dda88; end: 004ddab3;  */

undefined8 * FUN_004dda88(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_004dbabc(param_1,param_3);
  return param_1;
}



/* Entry: 004ddab4; end: 004ddae3;  */

long * FUN_004ddab4(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0054cf94(param_1);
  }
  return param_1;
}



/* Entry: 004ddae4; end: 004ddb13;  */

long * FUN_004ddae4(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0054cf94(param_1);
  }
  return param_1;
}



/* Entry: 004ddb14; end: 004ddfbb;  */

void FUN_004ddb14(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x004de9b8();
  }
  else {
    func_0x004de900();
  }
  *puVar1 = &PTR_FUN_009f1420;
  puVar1[1] = param_1;
  func_0x004dea04();
  return;
}



/* Entry: 004ddfbc; end: 004ddfcf;  */

void FUN_004ddfbc(ulong *param_1)

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



/* Entry: 004ddfd0; end: 004de1cb;  */

void FUN_004ddfd0(long param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar2;
  
  func_0x004dea68();
  if (param_1 == 0) {
    func_0x004de9d4();
  }
  else {
    func_0x004de9dc();
    param_1 = unaff_x20;
  }
  func_0x004deb80();
  func_0x004debb0(&PTR_FUN_009f17e0);
  if ((extraout_x8 & 1) != 0) {
    func_0x004de824();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(unaff_x21 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x004dea30();
  }
  *(long *)(unaff_x21 + 0x18) = param_1;
  uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x21 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x21 + 0x20) = uVar2;
  return;
}



/* Entry: 004de1cc; end: 004de227;  */

undefined8 * FUN_004de1cc(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x004deacc();
  if (param_1 == (undefined8 *)0x0) {
    func_0x004de9f4();
  }
  else {
    param_1 = unaff_x21;
    func_0x004de9fc();
  }
  *param_1 = &PTR_FUN_009f1470;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  FUN_004dbdb8();
  return param_1;
}



/* Entry: 004de228; end: 004de2f7;  */

qword * FUN_004de228(long param_1,qword param_2,long param_3)

{
  uint uVar1;
  qword qVar2;
  qword *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x004dea68();
  if (param_1 == 0) {
    unaff_x20 = &segment_command_00000020.fileoff;
    __Znwm();
  }
  else {
    param_2 = 0x48;
    func_0x005510c4();
  }
  func_0x004deb8c();
  unaff_x20[1] = param_2;
  *unaff_x20 = (qword)&PTR_FUN_009f1110;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_0054a3dc(unaff_x20 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(unaff_x20 + 2) = uVar1;
  *(dword *)((long)unaff_x20 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    qVar2 = 0;
  }
  else {
    qVar2 = param_2;
    FUN_004d9a84(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  unaff_x20[3] = qVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_004d9a84(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  unaff_x20[4] = param_2;
  uVar4 = *(undefined8 *)(param_3 + 0x30);
  uVar3 = *(undefined8 *)(param_3 + 0x28);
  uVar5 = *(undefined8 *)(param_3 + 0x31);
  *(undefined8 *)((long)unaff_x20 + 0x39) = *(undefined8 *)(param_3 + 0x39);
  *(undefined8 *)((long)unaff_x20 + 0x31) = uVar5;
  unaff_x20[6] = uVar4;
  unaff_x20[5] = uVar3;
  return unaff_x20;
}



/* Entry: 004de2f8; end: 004de3af;  */

undefined8 * FUN_004de2f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x004deba4();
  if (param_1 == (undefined8 *)0x0) {
    func_0x004deae8();
  }
  else {
    func_0x004dea24();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_FUN_009f1830;
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x004de824();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(unaff_x21 + 0x10);
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = unaff_x20;
  FUN_004dc7a8(param_1 + 3,unaff_x21 + 0x18);
  puVar1 = param_1 + 6;
  *puVar1 = 0;
  param_1[7] = 0;
  param_1[8] = unaff_x20;
  func_0x004dc7bc(puVar1,unaff_x21 + 0x30);
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    func_0x004deb0c();
    func_0x004de43c();
  }
  param_1[9] = puVar1;
  return param_1;
}



/* Entry: 004de3b0; end: 004de533;  */

void FUN_004de3b0(long param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004dea68();
  if (param_1 == 0) {
    func_0x004de9d4();
  }
  else {
    param_1 = unaff_x20;
    func_0x004de9dc();
  }
  func_0x004deb80();
  func_0x004debb0(&PTR_DAT_009f18d0);
  if ((extraout_x8 & 1) != 0) {
    func_0x004de824();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(unaff_x21 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x004dea30();
  }
  *(long *)(unaff_x21 + 0x18) = param_1;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x004de4d0();
  }
  *(long *)(unaff_x21 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x21 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
  return;
}



/* Entry: 004de534; end: 004de597;  */

undefined8 * FUN_004de534(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x004deacc();
  if (param_1 == (undefined8 *)0x0) {
    func_0x004de9d4();
  }
  else {
    param_1 = unaff_x21;
    func_0x004de9dc();
  }
  *param_1 = &PTR_FUN_009f14c0;
  param_1[1] = unaff_x21;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  func_0x004dcde0();
  return param_1;
}



/* Entry: 004de598; end: 004de5f3;  */

undefined8 * FUN_004de598(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x004deacc();
  if (param_1 == (undefined8 *)0x0) {
    func_0x004de9b8();
  }
  else {
    param_1 = unaff_x21;
    func_0x004de9c0();
  }
  *param_1 = &PTR_FUN_009f1420;
  param_1[1] = unaff_x21;
  func_0x004dea04();
  FUN_004dd45c();
  return param_1;
}



/* Entry: 004de5f4; end: 004de64f;  */

undefined8 * FUN_004de5f4(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x004deacc();
  if (param_1 == (undefined8 *)0x0) {
    func_0x004de9f4();
  }
  else {
    param_1 = unaff_x21;
    func_0x004de9fc();
  }
  *param_1 = &PTR_DAT_009f1600;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  func_0x004dd48c();
  return param_1;
}



/* Entry: 004de650; end: 004de6ab;  */

undefined8 * FUN_004de650(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x004deacc();
  if (param_1 == (undefined8 *)0x0) {
    func_0x004de9b8();
  }
  else {
    param_1 = unaff_x21;
    func_0x004de9c0();
  }
  *param_1 = &PTR_DAT_009f1650;
  param_1[1] = unaff_x21;
  func_0x004dea04();
  func_0x004dd4a8();
  return param_1;
}



/* Entry: 004de6ac; end: 004de707;  */

undefined8 * FUN_004de6ac(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x004deacc();
  if (param_1 == (undefined8 *)0x0) {
    func_0x004de9f4();
  }
  else {
    param_1 = unaff_x21;
    func_0x004de9fc();
  }
  *param_1 = &PTR_DAT_009f15b0;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  func_0x004dd4d4();
  return param_1;
}



/* Entry: 004de708; end: 004dec07;  */

void FUN_004de708(void)

{
  return;
}



/* Entry: 004dec08; end: 004dec33;  */

undefined8 FUN_004dec08(undefined8 param_1)

{
  func_0x004df544();
  FUN_004dec34(param_1);
  return param_1;
}



/* Entry: 004dec34; end: 004dec5b;  */

/* WARNING: Possible PIC construction at 0x004dec48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004dec4c) */

void FUN_004dec34(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10) ^ 2;
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



/* Entry: 004dec5c; end: 004dec5f;  */

undefined8 FUN_004dec5c(undefined8 param_1)

{
  func_0x004df544();
  FUN_004dec34(param_1);
  return param_1;
}



/* Entry: 004dec60; end: 004dec73;  */

void FUN_004dec60(void)

{
  FUN_004dec08();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004dec74; end: 004dec7f;  */

undefined ** FUN_004dec74(void)

{
  return &PTR_DAT_009f2260;
}



/* Entry: 004dec80; end: 004dede3;  */

void FUN_004dec80(long param_1)

{
  ulong *puVar1;
  
  FUN_00532fa8(param_1 + 0x10);
  FUN_00532fa8(param_1 + 0x18);
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



/* Entry: 004dede4; end: 004dede7;  */

void FUN_004dede4(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  
  lVar1 = param_2;
  func_0x004df590(*(undefined8 *)(param_2 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x004df584();
    }
    func_0x00532e08(param_1 + 0x10);
  }
  func_0x004df590(*(undefined8 *)(param_2 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x004df584();
    }
    func_0x00532e08(param_1 + 0x18);
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



/* Entry: 004dede8; end: 004dee73;  */

void FUN_004dede8(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  
  lVar1 = param_2;
  func_0x004df590(*(undefined8 *)(param_2 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x004df584();
    }
    func_0x00532e08(param_1 + 0x10);
  }
  func_0x004df590(*(undefined8 *)(param_2 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x004df584();
    }
    func_0x00532e08(param_1 + 0x18);
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



/* Entry: 004dee74; end: 004dee9f;  */

undefined8 FUN_004dee74(undefined8 param_1)

{
  func_0x004df544();
  FUN_004deea0(param_1);
  return param_1;
}



/* Entry: 004deea0; end: 004deedf;  */

long FUN_004deea0(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_004dec08();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_004d53c0();
  }
  __ZdlPv();
  FUN_004df320(param_1 + 0x30);
  FUN_004da608(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 004deee0; end: 004deee3;  */

undefined8 FUN_004deee0(undefined8 param_1)

{
  func_0x004df544();
  FUN_004deea0(param_1);
  return param_1;
}



/* Entry: 004deee4; end: 004deef7;  */

void FUN_004deee4(void)

{
  FUN_004dee74();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004deef8; end: 004def03;  */

undefined ** FUN_004deef8(void)

{
  return &PTR_DAT_009f22b8;
}



/* Entry: 004def04; end: 004def7b;  */

void FUN_004def04(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  FUN_004da760(param_1 + 0x18);
  if (0 < *(int *)(param_1 + 0x38)) {
    FUN_00437de0(param_1 + 0x30);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_004dec80(*(undefined8 *)(param_1 + 0x48));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_004d5460(*(undefined8 *)(param_1 + 0x50));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004def7c; end: 004df0bf;  */

dword * FUN_004def7c(dword *param_1,dword *param_2,dword *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  dword *pdVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  dword *pdVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = param_1[8];
  pdVar3 = param_1;
  for (iVar9 = 0; iVar10 != iVar9; iVar9 = iVar9 + 1) {
    func_0x004df4e0();
    pdVar3 = (dword *)((long)&MACH_HEADER.magic + 1);
    func_0x004df4d8();
    param_2 = pdVar3;
  }
  pdVar8 = pdVar3;
  if (*(long *)(param_1 + 0x16) != 0) {
    func_0x004df578();
    pdVar8 = *(dword **)(param_1 + 0x16);
    uVar4 = 0x10;
    func_0x00487cbc(0x10,pdVar3);
    func_0x00487cf0(pdVar8,uVar4);
    param_2 = pdVar8;
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x004df578();
    param_2 = &MACH_HEADER.flags;
    func_0x00487cbc(0x18,pdVar8);
    func_0x004df558();
  }
  iVar10 = param_1[0xe];
  for (iVar9 = 0; iVar10 != iVar9; iVar9 = iVar9 + 1) {
    func_0x004df4e0();
    param_2 = &MACH_HEADER.cputype;
    func_0x004df4d8();
  }
  uVar2 = param_1[4];
  if ((uVar2 & 1) != 0) {
    param_2 = (dword *)((long)&segment_command_00000020.nsects + 2);
    func_0x004df4d8(0x62,*(long *)(param_1 + 0x12),*(undefined4 *)(*(long *)(param_1 + 0x12) + 0x20)
                   );
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_2 = (dword *)((long)&segment_command_00000020.nsects + 3);
    func_0x004df4d8(99,*(long *)(param_1 + 0x14),*(undefined4 *)(*(long *)(param_1 + 0x14) + 0x14));
  }
  if ((*(ulong *)(param_1 + 2) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 2) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar5 = *(long *)(uVar7 + 8);
      uVar6 = *(ulong *)(uVar7 + 0x10);
    }
    else {
      lVar5 = uVar7 + 8;
    }
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar6) {
      while( true ) {
        iVar10 = ((int)*(undefined8 *)param_3 - (int)param_2) + 0x10;
        iVar9 = (int)uVar6;
        uVar6 = (ulong)(uint)(iVar9 - iVar10);
        if (iVar9 - iVar10 == 0 || iVar9 < iVar10) break;
        func_0x0054f690();
        puVar1 = (undefined1 *)((long)param_2 + (long)iVar10);
        param_2 = param_3;
        func_0x0054ed58(param_3,puVar1);
      }
      func_0x0054f690();
      return (dword *)((long)param_2 + (long)iVar9);
    }
    _memcpy(param_2,lVar5,uVar6 & 0xffffffff);
    return (dword *)((long)param_2 + (long)(int)uVar6);
  }
  return param_2;
}



/* Entry: 004df0c0; end: 004df1cf;  */

void FUN_004df0c0(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int extraout_w8;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar5 = *(ulong *)(param_1 + 0x18);
  lVar6 = (long)*(int *)(param_1 + 0x20);
  puVar1 = (ulong *)(param_1 + 0x18);
  if ((uVar5 & 1) != 0) {
    puVar1 = (ulong *)(uVar5 + 7);
  }
  for (lVar7 = lVar6 << 3; lVar7 != 0; lVar7 = lVar7 + -8) {
    uVar5 = *puVar1;
    FUN_004d3274();
    lVar6 = uVar5 + lVar6;
    puVar1 = puVar1 + 1;
  }
  uVar5 = *(ulong *)(param_1 + 0x30);
  lVar6 = lVar6 + *(int *)(param_1 + 0x38);
  iVar4 = (int)lVar6;
  puVar1 = (ulong *)(param_1 + 0x30);
  if ((uVar5 & 1) != 0) {
    puVar1 = (ulong *)(uVar5 + 7);
  }
  for (lVar7 = (long)*(int *)(param_1 + 0x38) << 3; lVar7 != 0; lVar7 = lVar7 + -8) {
    uVar5 = *puVar1;
    FUN_004df1d0();
    lVar6 = uVar5 + lVar6;
    iVar4 = (int)lVar6;
    puVar1 = puVar1 + 1;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      iVar3 = (int)*(undefined8 *)(param_1 + 0x48);
      func_0x004ded60();
      FUN_004df4b8();
      iVar4 = iVar4 + iVar3 + extraout_w8 + 2;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      iVar3 = (int)*(undefined8 *)(param_1 + 0x50);
      func_0x004df1ec();
      iVar4 = iVar4 + iVar3 + 2;
    }
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    iVar4 = ((int)LZCOUNT(*(long *)(param_1 + 0x58)) * -9 + 0x2c0U >> 6) + iVar4;
  }
  iVar4 = iVar4 + (uint)*(byte *)(param_1 + 0x60) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)(uVar5 + 0x10);
    }
    iVar4 = (int)lVar6 + iVar4;
  }
  *(int *)(param_1 + 0x14) = iVar4;
  return;
}



/* Entry: 004df1d0; end: 004df207;  */

long FUN_004df1d0(long param_1)

{
  long extraout_x8;
  
  FUN_004e1d48();
  FUN_004df4b8();
  return param_1 + extraout_x8;
}



/* Entry: 004df208; end: 004df2e3;  */

void FUN_004df208(void)

{
  uint uVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x004df5bc();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  func_0x004da5bc(unaff_x21 + 0x18,unaff_x20 + 0x18);
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    func_0x0054d484(unaff_x21 + 0x30,unaff_x20 + 0x30);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x48) == 0) {
        uVar2 = unaff_x22;
        FUN_004df3f0(unaff_x22,*(undefined8 *)(unaff_x20 + 0x48));
        *(ulong *)(unaff_x21 + 0x48) = uVar2;
      }
      else {
        FUN_004dede8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x50) == 0) {
        FUN_004df474(unaff_x22,*(undefined8 *)(unaff_x20 + 0x50));
        *(ulong *)(unaff_x21 + 0x50) = unaff_x22;
      }
      else {
        FUN_004d5818();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    *(long *)(unaff_x21 + 0x58) = *(long *)(unaff_x20 + 0x58);
  }
  if (*(char *)(unaff_x20 + 0x60) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x60) = 1;
  }
  func_0x004df5a8();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004df2e4; end: 004df2f3;  */

void FUN_004df2e4(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  
  if (param_2 == (char *)0x0) {
    pcVar1 = segment_command_00000020.segname;
    __Znwm();
  }
  else {
    pcVar1 = param_2;
    func_0x004df56c();
  }
  *(undefined ***)pcVar1 = &PTR_FUN_009f21d0;
  *(char **)(pcVar1 + 8) = param_2;
  *(undefined **)(pcVar1 + 0x10) = &DAT_00b69408;
  *(undefined **)(pcVar1 + 0x18) = &DAT_00b69408;
  *(undefined4 *)(pcVar1 + 0x20) = 0;
  return;
}



/* Entry: 004df2f4; end: 004df31f;  */

long FUN_004df2f4(long param_1)

{
  FUN_004df320(param_1 + 0x20);
  FUN_004da608(param_1 + 8);
  return param_1;
}



/* Entry: 004df320; end: 004df34f;  */

long * FUN_004df320(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0054cf94(param_1);
  }
  return param_1;
}



/* Entry: 004df350; end: 004df3ef;  */

void FUN_004df350(char *param_1)

{
  char *pcVar1;
  
  if (param_1 == (char *)0x0) {
    pcVar1 = segment_command_00000020.segname;
    __Znwm();
  }
  else {
    pcVar1 = param_1;
    func_0x004df56c();
  }
  *(undefined ***)pcVar1 = &PTR_FUN_009f21d0;
  *(char **)(pcVar1 + 8) = param_1;
  *(undefined **)(pcVar1 + 0x10) = &DAT_00b69408;
  *(undefined **)(pcVar1 + 0x18) = &DAT_00b69408;
  *(undefined4 *)(pcVar1 + 0x20) = 0;
  return;
}



/* Entry: 004df3f0; end: 004df473;  */

char * FUN_004df3f0(char *param_1,long param_2)

{
  char *pcVar1;
  qword qVar2;
  
  if (param_1 == (char *)0x0) {
    pcVar1 = segment_command_00000020.segname;
    __Znwm();
  }
  else {
    pcVar1 = param_1;
    func_0x004df56c();
  }
  *(char **)(pcVar1 + 8) = param_1;
  *(undefined ***)pcVar1 = &PTR_FUN_009f21d0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_0054a3dc(pcVar1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  qVar2 = param_2 + 0x10;
  func_0x00487c6c(qVar2,param_1);
  *(qword *)(pcVar1 + 0x10) = qVar2;
  qVar2 = param_2 + 0x18;
  func_0x00487c6c(qVar2,param_1);
  *(qword *)(pcVar1 + 0x18) = qVar2;
  *(undefined4 *)(pcVar1 + 0x20) = 0;
  return pcVar1;
}



/* Entry: 004df474; end: 004df4b7;  */

qword * FUN_004df474(qword *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  qword *pqVar3;
  qword *pqVar4;
  
  if (param_1 == (qword *)0x0) {
    pqVar4 = &segment_command_00000020.vmsize;
    __Znwm();
  }
  else {
    pqVar4 = param_1;
    func_0x005510c4(param_1,0x40);
  }
  pqVar4[1] = (qword)param_1;
  *pqVar4 = (qword)&PTR_FUN_009f06f0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x004d6d14();
  }
  *(undefined4 *)(pqVar4 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)pqVar4 + 0x14) = 0;
  lVar2 = param_2 + 0x18;
  func_0x00487c6c(lVar2,param_1);
  pqVar4[3] = lVar2;
  uVar1 = (uint)pqVar4[2];
  if ((uVar1 & 1) == 0) {
    pqVar3 = (qword *)0x0;
  }
  else {
    pqVar3 = param_1;
    FUN_004d6904(param_1,*(undefined8 *)(param_2 + 0x20));
  }
  pqVar4[4] = (qword)pqVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    pqVar3 = (qword *)0x0;
  }
  else {
    pqVar3 = param_1;
    FUN_004d6994(param_1,*(undefined8 *)(param_2 + 0x28));
  }
  pqVar4[5] = (qword)pqVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    param_1 = (qword *)0x0;
  }
  else {
    FUN_004d69f4(param_1,*(undefined8 *)(param_2 + 0x30));
  }
  pqVar4[6] = (qword)param_1;
  pqVar4[7] = *(undefined8 *)(param_2 + 0x38);
  return pqVar4;
}



/* Entry: 004df4b8; end: 004df5cf;  */

void FUN_004df4b8(void)

{
  return;
}



/* Entry: 004df5d0; end: 004df5fb;  */

long FUN_004df5d0(long param_1)

{
  func_0x004dfc7c();
  FUN_004df83c(param_1 + 0x10);
  return param_1;
}



/* Entry: 004df5fc; end: 004df5ff;  */

long FUN_004df5fc(long param_1)

{
  func_0x004dfc7c();
  FUN_004df83c(param_1 + 0x10);
  return param_1;
}



/* Entry: 004df600; end: 004df613;  */

void FUN_004df600(void)

{
  FUN_004df5d0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004df614; end: 004df61f;  */

undefined ** FUN_004df614(void)

{
  return &PTR_DAT_009f2388;
}



/* Entry: 004df620; end: 004df653;  */

void FUN_004df620(long param_1)

{
  ulong *puVar1;
  
  func_0x004dfb64(param_1 + 0x10);
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



/* Entry: 004df654; end: 004df6c7;  */

long * FUN_004df654(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004dfc50();
  iVar3 = *(int *)(param_1 + 0x18);
  while (iVar3 != 0) {
    func_0x004dfbd8();
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    func_0x004dfc60();
    func_0x004dfcb0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004dfc8c();
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



/* Entry: 004df6c8; end: 004df727;  */

long FUN_004df6c8(long param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x9;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x004dfc04();
  while (unaff_x22 != 0) {
    FUN_004df728(*unaff_x21);
    func_0x004dfcfc();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x004dfc98();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(param_1 + 0x28) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 004df728; end: 004df743;  */

long FUN_004df728(long param_1)

{
  long extraout_x8;
  
  func_0x004f1334();
  func_0x004dfc38();
  return param_1 + extraout_x8;
}



/* Entry: 004df744; end: 004df773;  */

void FUN_004df744(ulong *param_1)

{
  long unaff_x20;
  
  func_0x004dfcbc();
  FUN_004df774();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004dfcec();
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



/* Entry: 004df774; end: 004df783;  */

void FUN_004df774(long *param_1,long param_2)

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



/* Entry: 004df784; end: 004df7eb;  */

undefined1  [16] FUN_004df784(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  iVar3 = *param_2;
  if (iVar3 != 0) {
    func_0x004dfb78(param_1,*param_1 + iVar3);
    iVar1 = *param_1;
    *param_1 = iVar1 + iVar3;
    puVar4 = (undefined8 *)(*(long *)(param_1 + 2) + (long)iVar1 * 8);
    puVar2 = *(undefined8 **)(param_2 + 2);
    puVar5 = puVar2;
    puVar6 = puVar4;
    while (0 < iVar3) {
      *puVar6 = *puVar5;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
      iVar3 = iVar3 + -1;
    }
    auVar8._8_8_ = puVar4;
    auVar8._0_8_ = puVar2;
    return auVar8;
  }
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 004df7ec; end: 004df823;  */

long FUN_004df7ec(long param_1)

{
  long extraout_x8;
  
  FUN_0050ce88();
  func_0x004dfc38();
  return param_1 + extraout_x8;
}



/* Entry: 004df824; end: 004df83b;  */

void FUN_004df824(long *param_1,long param_2)

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



/* Entry: 004df83c; end: 004df863;  */

void FUN_004df83c(void)

{
  long extraout_x8;
  
  func_0x004dfd20();
  if (extraout_x8 != 0) {
    func_0x004dfce4();
  }
  return;
}



/* Entry: 004df864; end: 004df8b7;  */

int * FUN_004df864(int *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  
  param_1[0] = 0;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 2) = param_2;
  iVar1 = *param_3;
  if (iVar1 != 0) {
    FUN_004df8b8(param_1,0,iVar1);
    *param_1 = iVar1;
    func_0x004dfa54(*(undefined8 *)(param_3 + 2),iVar1,*(undefined8 *)(param_1 + 2));
  }
  return param_1;
}



/* Entry: 004df8b8; end: 004df8bb;  */

void FUN_004df8b8(long param_1,ulong param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long **pplVar5;
  long *plVar6;
  long *plVar7;
  long **pplVar8;
  ulong uVar9;
  undefined8 *extraout_x8;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long *aplStack_58 [2];
  undefined8 uStack_48;
  
  iVar1 = *(int *)(param_1 + 4);
  plVar11 = *(long **)(param_1 + 8);
  if (iVar1 == 0) {
    if ((int)param_3 < 1) goto LAB_004df92c;
  }
  else {
    plVar11 = (long *)plVar11[-1];
    if ((int)param_3 < 1) {
LAB_004df92c:
      uVar12 = 1;
      goto LAB_004df930;
    }
    if (0x3ffffffb < iVar1) {
      uVar12 = 0x7fffffff;
      goto LAB_004df930;
    }
  }
  if ((int)param_3 < (int)(iVar1 << 1 | 1U)) {
    param_3 = iVar1 * 2 + 1;
  }
  uVar12 = (ulong)param_3;
LAB_004df930:
  plVar7 = (long *)(uVar12 * 8 + 8);
  if (plVar11 == (long *)0x0) {
    uVar12 = param_2;
    FUN_0048b180();
    uVar12 = uVar12 - 8 >> 3;
    if (0x7ffffffe < uVar12) {
      uVar12 = 0x7fffffff;
    }
  }
  else {
    uStack_48 = 0xffffffffffffffff;
    pplVar5 = aplStack_58;
    aplStack_58[0] = plVar7;
    func_0x0048b1cc(pplVar5,&uStack_48,
                    "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)");
    if (pplVar5 != (long **)0x0) {
      plVar11 = (long *)(long)*(char *)((long)pplVar5 + 0x17);
      pplVar8 = pplVar5;
      if ((long)plVar11 < 0) {
        pplVar8 = (long **)*pplVar5;
        plVar11 = pplVar5[1];
      }
      FUN_00776714(aplStack_58,
                   "bazel-out/ios_arm64-opt-ios-arm64-min15.0-ST-ac22eb7a7f3d/bin/external/protobuf+/src/google/protobuf/_virtual_includes/protobuf_lite/google/protobuf/arena.h"
                   ,0x10a,pplVar8,plVar11);
      func_0x0048b1e8(aplStack_58,"Requested size is too large to fit into size_t.");
      pplVar5 = aplStack_58;
      FUN_005558a0();
      plVar11 = pplVar5[1] + -1;
      if (*plVar11 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_0099c620)(plVar11);
        return;
      }
      uVar12 = (long)*(int *)((long)pplVar5 + 4) * 8 + 8;
      ppuVar3 = &PTR___tlv_bootstrap_00b2c348;
      (*(code *)PTR___tlv_bootstrap_00b2c348)(*plVar11);
      if (ppuVar3[1] != (undefined *)*extraout_x8) {
        return;
      }
      puVar4 = ppuVar3[2];
      uVar9 = 0x3b - LZCOUNT(uVar12);
      bVar2 = puVar4[0x50];
      if (uVar9 < bVar2) {
        lVar10 = *(long *)(puVar4 + 0x58);
        *plVar11 = *(long *)(lVar10 + uVar9 * 8);
        *(long **)(lVar10 + uVar9 * 8) = plVar11;
      }
      else {
        if (bVar2 == 0) {
          lVar10 = 0;
        }
        else {
          _memmove(plVar11,*(undefined8 *)(puVar4 + 0x58),(ulong)bVar2 << 3);
          lVar10 = (ulong)(byte)puVar4[0x50] << 3;
        }
        uVar9 = uVar12 >> 3;
        if (0 < (long)((uVar12 & 0xfffffffffffffff8) - lVar10)) {
          _bzero((long)plVar11 + lVar10);
        }
        *(long **)(puVar4 + 0x58) = plVar11;
        if (0x3f < uVar9) {
          uVar9 = 0x40;
        }
        puVar4[0x50] = (char)uVar9;
      }
      return;
    }
    plVar6 = plVar11;
    func_0x0048b21c(plVar11,plVar7,1);
    plVar7 = plVar6;
  }
  *plVar7 = (long)plVar11;
  if (0 < *(int *)(param_1 + 4)) {
    if (0 < (int)param_2) {
      _memcpy(plVar7 + 1,*(undefined8 *)(param_1 + 8),(param_2 & 0xffffffff) << 3);
    }
    FUN_004dfa2c(param_1);
  }
  *(int *)(param_1 + 4) = (int)uVar12;
  *(long **)(param_1 + 8) = plVar7 + 1;
  return;
}



/* Entry: 004df8bc; end: 004dfa2b;  */

void FUN_004df8bc(long param_1,ulong param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long **pplVar5;
  long *plVar6;
  long *plVar7;
  long **pplVar8;
  ulong uVar9;
  undefined8 *extraout_x8;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long *aplStack_58 [2];
  undefined8 uStack_48;
  
  iVar1 = *(int *)(param_1 + 4);
  plVar11 = *(long **)(param_1 + 8);
  if (iVar1 == 0) {
    if ((int)param_3 < 1) goto LAB_004df92c;
  }
  else {
    plVar11 = (long *)plVar11[-1];
    if ((int)param_3 < 1) {
LAB_004df92c:
      uVar12 = 1;
      goto LAB_004df930;
    }
    if (0x3ffffffb < iVar1) {
      uVar12 = 0x7fffffff;
      goto LAB_004df930;
    }
  }
  if ((int)param_3 < (int)(iVar1 << 1 | 1U)) {
    param_3 = iVar1 * 2 + 1;
  }
  uVar12 = (ulong)param_3;
LAB_004df930:
  plVar7 = (long *)(uVar12 * 8 + 8);
  if (plVar11 == (long *)0x0) {
    uVar12 = param_2;
    FUN_0048b180();
    uVar12 = uVar12 - 8 >> 3;
    if (0x7ffffffe < uVar12) {
      uVar12 = 0x7fffffff;
    }
  }
  else {
    uStack_48 = 0xffffffffffffffff;
    pplVar5 = aplStack_58;
    aplStack_58[0] = plVar7;
    func_0x0048b1cc(pplVar5,&uStack_48,
                    "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)");
    if (pplVar5 != (long **)0x0) {
      plVar11 = (long *)(long)*(char *)((long)pplVar5 + 0x17);
      pplVar8 = pplVar5;
      if ((long)plVar11 < 0) {
        pplVar8 = (long **)*pplVar5;
        plVar11 = pplVar5[1];
      }
      FUN_00776714(aplStack_58,
                   "bazel-out/ios_arm64-opt-ios-arm64-min15.0-ST-ac22eb7a7f3d/bin/external/protobuf+/src/google/protobuf/_virtual_includes/protobuf_lite/google/protobuf/arena.h"
                   ,0x10a,pplVar8,plVar11);
      func_0x0048b1e8(aplStack_58,"Requested size is too large to fit into size_t.");
      pplVar5 = aplStack_58;
      FUN_005558a0();
      plVar11 = pplVar5[1] + -1;
      if (*plVar11 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_0099c620)(plVar11);
        return;
      }
      uVar12 = (long)*(int *)((long)pplVar5 + 4) * 8 + 8;
      ppuVar3 = &PTR___tlv_bootstrap_00b2c348;
      (*(code *)PTR___tlv_bootstrap_00b2c348)(*plVar11);
      if (ppuVar3[1] != (undefined *)*extraout_x8) {
        return;
      }
      puVar4 = ppuVar3[2];
      uVar9 = 0x3b - LZCOUNT(uVar12);
      bVar2 = puVar4[0x50];
      if (uVar9 < bVar2) {
        lVar10 = *(long *)(puVar4 + 0x58);
        *plVar11 = *(long *)(lVar10 + uVar9 * 8);
        *(long **)(lVar10 + uVar9 * 8) = plVar11;
      }
      else {
        if (bVar2 == 0) {
          lVar10 = 0;
        }
        else {
          _memmove(plVar11,*(undefined8 *)(puVar4 + 0x58),(ulong)bVar2 << 3);
          lVar10 = (ulong)(byte)puVar4[0x50] << 3;
        }
        uVar9 = uVar12 >> 3;
        if (0 < (long)((uVar12 & 0xfffffffffffffff8) - lVar10)) {
          _bzero((long)plVar11 + lVar10);
        }
        *(long **)(puVar4 + 0x58) = plVar11;
        if (0x3f < uVar9) {
          uVar9 = 0x40;
        }
        puVar4[0x50] = (char)uVar9;
      }
      return;
    }
    plVar6 = plVar11;
    func_0x0048b21c(plVar11,plVar7,1);
    plVar7 = plVar6;
  }
  *plVar7 = (long)plVar11;
  if (0 < *(int *)(param_1 + 4)) {
    if (0 < (int)param_2) {
      _memcpy(plVar7 + 1,*(undefined8 *)(param_1 + 8),(param_2 & 0xffffffff) << 3);
    }
    FUN_004dfa2c(param_1);
  }
  *(int *)(param_1 + 4) = (int)uVar12;
  *(long **)(param_1 + 8) = plVar7 + 1;
  return;
}



/* Entry: 004dfa2c; end: 004dfa7f;  */

void FUN_004dfa2c(long param_1)

{
  byte bVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *extraout_x8;
  long lVar7;
  
  plVar4 = (long *)(*(long *)(param_1 + 8) + -8);
  if (*plVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(plVar4);
    return;
  }
  uVar5 = (long)*(int *)(param_1 + 4) * 8 + 8;
  ppuVar2 = &PTR___tlv_bootstrap_00b2c348;
  (*(code *)PTR___tlv_bootstrap_00b2c348)(*plVar4);
  if (ppuVar2[1] == (undefined *)*extraout_x8) {
    puVar3 = ppuVar2[2];
    uVar6 = 0x3b - LZCOUNT(uVar5);
    bVar1 = puVar3[0x50];
    if (uVar6 < bVar1) {
      lVar7 = *(long *)(puVar3 + 0x58);
      *plVar4 = *(long *)(lVar7 + uVar6 * 8);
      *(long **)(lVar7 + uVar6 * 8) = plVar4;
    }
    else {
      if (bVar1 == 0) {
        lVar7 = 0;
      }
      else {
        _memmove(plVar4,*(undefined8 *)(puVar3 + 0x58),(ulong)bVar1 << 3);
        lVar7 = (ulong)(byte)puVar3[0x50] << 3;
      }
      uVar6 = uVar5 >> 3;
      if (0 < (long)((uVar5 & 0xfffffffffffffff8) - lVar7)) {
        _bzero((long)plVar4 + lVar7);
      }
      *(long **)(puVar3 + 0x58) = plVar4;
      if (0x3f < uVar6) {
        uVar6 = 0x40;
      }
      puVar3[0x50] = (char)uVar6;
    }
    return;
  }
  return;
}



/* Entry: 004dfa80; end: 004dfab3;  */

long FUN_004dfa80(long param_1)

{
  if (0 < *(int *)(param_1 + 4)) {
    FUN_004dfab4(param_1);
  }
  return param_1;
}



/* Entry: 004dfab4; end: 004dfac7;  */

void FUN_004dfab4(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 8) + -8) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004dfac8; end: 004dfae7;  */

void FUN_004dfac8(void)

{
  func_0x004dfcd0();
  FUN_004df824();
  return;
}



/* Entry: 004dfae8; end: 004dfb0f;  */

void FUN_004dfae8(void)

{
  long extraout_x8;
  
  func_0x004dfd20();
  if (extraout_x8 != 0) {
    func_0x004dfce4();
  }
  return;
}



/* Entry: 004dfb10; end: 004dfb4f;  */

void FUN_004dfb10(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  if (param_1 == 0) {
    func_0x004dfd08();
  }
  else {
    func_0x004dfd10();
  }
  func_0x004dfca4(&PTR_FUN_009f2348);
  *(long *)(lVar1 + 0x20) = param_1;
  *(undefined4 *)(lVar1 + 0x28) = 0;
  return;
}



/* Entry: 004dfb50; end: 004dfb93;  */

void FUN_004dfb50(ulong *param_1)

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



/* Entry: 004dfb94; end: 004dfbd7;  */

undefined8 * FUN_004dfb94(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  if (param_1 == 0) {
    lVar1 = 0x48;
    __Znwm();
  }
  else {
    lVar1 = param_1;
    func_0x005510c4(param_1,0x48);
  }
  lVar2 = param_2;
  func_0x004f5dec();
  *(long *)(lVar1 + 8) = param_1;
  *unaff_x19 = &PTR_DAT_009f6368;
  if ((*(ulong *)(lVar2 + 8) & 1) != 0) {
    func_0x004f5da8();
  }
  FUN_004f4bbc(unaff_x19 + 2,unaff_x20,param_2 + 0x10);
  func_0x004f4bdc(unaff_x19 + 5,unaff_x20,param_2 + 0x28);
  *(undefined4 *)(unaff_x19 + 8) = 0;
  return unaff_x19;
}



/* Entry: 004dfbd8; end: 004dfd2b;  */

void FUN_004dfbd8(void)

{
  return;
}



/* Entry: 004dfd2c; end: 004dfd7f;  */

void FUN_004dfd2c(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x24) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_00504c30();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 004dfd80; end: 004dfdb3;  */

long FUN_004dfd80(long param_1)

{
  func_0x004e041c();
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_004dfd2c(param_1);
  }
  return param_1;
}



/* Entry: 004dfdb4; end: 004dfdb7;  */

long FUN_004dfdb4(long param_1)

{
  func_0x004e041c();
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_004dfd2c(param_1);
  }
  return param_1;
}



/* Entry: 004dfdb8; end: 004dfdcb;  */

void FUN_004dfdb8(void)

{
  FUN_004dfd80();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004dfdcc; end: 004dfdd7;  */

undefined ** FUN_004dfdcc(void)

{
  return &PTR_DAT_009f2498;
}



/* Entry: 004dfdd8; end: 004dfe0b;  */

void FUN_004dfdd8(long param_1)

{
  ulong *puVar1;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_004dfd2c();
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



/* Entry: 004dfe0c; end: 004dfeeb;  */

long * FUN_004dfe0c(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x19;
  long unaff_x20;
  long *plVar6;
  int iVar7;
  int iVar8;
  
  func_0x004e0404();
  plVar6 = param_1;
  if (param_1[2] != 0) {
    func_0x004e03a0();
    plVar6 = *(long **)(unaff_x20 + 0x10);
    uVar2 = 8;
    func_0x00487cbc(8,param_1);
    func_0x00487cf0(plVar6,uVar2);
    param_4 = plVar6;
  }
  if (*(int *)(unaff_x20 + 0x24) == 3) {
    func_0x004e03a0();
    if (*(int *)(unaff_x20 + 0x24) == 3) {
      param_4 = (long *)(ulong)*(uint *)(unaff_x20 + 0x18);
    }
    else {
      param_4 = (long *)0x0;
    }
    uVar2 = 0x18;
    func_0x00487cbc(0x18,plVar6);
    func_0x00487ce8(param_4,uVar2);
  }
  else if (*(int *)(unaff_x20 + 0x24) == 2) {
    param_4 = (long *)((long)&MACH_HEADER.magic + 2);
    func_0x004e03fc(2,*(long *)(unaff_x20 + 0x18),
                    *(undefined4 *)(*(long *)(unaff_x20 + 0x18) + 0x14));
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar4) {
      while( true ) {
        iVar8 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar7 = (int)uVar4;
        uVar1 = iVar7 - iVar8;
        uVar4 = (ulong)uVar1;
        if (uVar1 == 0 || iVar7 < iVar8) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar7);
    }
    _memcpy(param_4,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar4);
  }
  return param_4;
}



/* Entry: 004dfeec; end: 004dff8f;  */

ulong FUN_004dfeec(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar3 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x24) == 3) {
    uVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x280U >> 6);
  }
  else {
    if (*(int *)(param_1 + 0x24) != 2) goto LAB_004dff60;
    uVar1 = *(ulong *)(param_1 + 0x18);
    FUN_004dff90();
  }
  uVar3 = uVar3 + uVar1 + 1;
LAB_004dff60:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    uVar3 = lVar2 + uVar3;
  }
  *(int *)(param_1 + 0x20) = (int)uVar3;
  return uVar3;
}



/* Entry: 004dff90; end: 004dffbb;  */

long FUN_004dff90(long param_1)

{
  func_0x00505138();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 004dffbc; end: 004e008b;  */

void FUN_004dffbc(void)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x004e0444();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    *(long *)(unaff_x21 + 0x10) = *(long *)(unaff_x20 + 0x10);
  }
  iVar2 = *(int *)(unaff_x20 + 0x24);
  if (iVar2 != 0) {
    iVar3 = *(int *)(unaff_x21 + 0x24);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        FUN_004dfd2c();
      }
      *(int *)(unaff_x21 + 0x24) = iVar2;
    }
    if (iVar2 == 3) {
      *(undefined4 *)(unaff_x21 + 0x18) = *(undefined4 *)(unaff_x20 + 0x18);
    }
    else if (iVar2 == 2) {
      if (iVar3 == 2) {
        ppuVar1 = *(undefined ***)(unaff_x20 + 0x18);
        if (*(int *)(unaff_x20 + 0x24) != 2) {
          ppuVar1 = &PTR_PTR_00b16708;
        }
        FUN_005052ac(*(undefined8 *)(unaff_x21 + 0x18),ppuVar1);
      }
      else {
        func_0x004e035c(unaff_x22,*(undefined8 *)(unaff_x20 + 0x18));
        *(ulong *)(unaff_x21 + 0x18) = unaff_x22;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
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



/* Entry: 004e008c; end: 004e00b7;  */

long FUN_004e008c(long param_1)

{
  func_0x004e041c();
  FUN_004e02a4(param_1 + 0x10);
  return param_1;
}



/* Entry: 004e00b8; end: 004e00bb;  */

long FUN_004e00b8(long param_1)

{
  func_0x004e041c();
  FUN_004e02a4(param_1 + 0x10);
  return param_1;
}



/* Entry: 004e00bc; end: 004e00cf;  */

void FUN_004e00bc(void)

{
  FUN_004e008c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e00d0; end: 004e00db;  */

undefined ** FUN_004e00d0(void)

{
  return &PTR_DAT_009f2500;
}



/* Entry: 004e00dc; end: 004e011b;  */

void FUN_004e00dc(long param_1)

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



/* Entry: 004e011c; end: 004e0243;  */

long * FUN_004e011c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x19;
  long unaff_x20;
  int iVar6;
  int iVar7;
  
  func_0x004e0404();
  iVar7 = *(int *)(param_1 + 0x18);
  for (iVar6 = 0; iVar7 != iVar6; iVar6 = iVar6 + 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar6 * 8 + 7);
    }
    param_4 = (long *)((long)&MACH_HEADER.magic + 1);
    func_0x004e03fc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x20));
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar6 = (int)uVar4;
        uVar2 = iVar6 - iVar7;
        uVar4 = (ulong)uVar2;
        if (uVar2 == 0 || iVar6 < iVar7) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar6);
    }
    _memcpy(param_4,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar4);
  }
  return param_4;
}



/* Entry: 004e0244; end: 004e0293;  */

void FUN_004e0244(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x0054d484(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 004e0294; end: 004e02a3;  */

void FUN_004e0294(undefined8 param_1,char *param_2)

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
  *(undefined ***)pcVar1 = &PTR_FUN_009f2408;
  *(char **)(pcVar1 + 8) = param_2;
  *(qword *)(pcVar1 + 0x20) = 0;
  *(qword *)(pcVar1 + 0x10) = 0;
  return;
}



/* Entry: 004e02a4; end: 004e02d3;  */

long * FUN_004e02a4(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0054cf94(param_1);
  }
  return param_1;
}



/* Entry: 004e02d4; end: 004e039f;  */

void FUN_004e02d4(char *param_1)

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
  *(undefined ***)pcVar1 = &PTR_FUN_009f2408;
  *(char **)(pcVar1 + 8) = param_1;
  *(qword *)(pcVar1 + 0x20) = 0;
  *(qword *)(pcVar1 + 0x10) = 0;
  return;
}



/* Entry: 004e03a0; end: 004e0457;  */

ulong * FUN_004e03a0(void)

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



/* Entry: 004e0458; end: 004e047b;  */

undefined8 FUN_004e0458(undefined8 param_1)

{
  func_0x004e5020();
  return param_1;
}



/* Entry: 004e047c; end: 004e047f;  */

undefined8 FUN_004e047c(undefined8 param_1)

{
  func_0x004e5020();
  return param_1;
}



/* Entry: 004e0480; end: 004e0493;  */

void FUN_004e0480(void)

{
  FUN_004e0458();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e0494; end: 004e04b3;  */

undefined ** FUN_004e0494(void)

{
  return &PTR_DAT_009f2b78;
}



/* Entry: 004e04b4; end: 004e051b;  */

long * FUN_004e04b4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004e4f50();
  if (param_1[2] != 0) {
    func_0x004e4eb0();
    func_0x004e5100();
    func_0x004e4f00();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x004e50ac();
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



/* Entry: 004e051c; end: 004e0567;  */

long FUN_004e051c(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x004e53d4();
  lVar1 = extraout_x8;
  if ((extraout_x9 & 1) != 0) {
    lVar1 = (long)*(char *)((extraout_x9 & 0xfffffffffffffffe) + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)((extraout_x9 & 0xfffffffffffffffe) + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x18) = (int)lVar1;
  return lVar1;
}



/* Entry: 004e0568; end: 004e07d7;  */

void FUN_004e0568(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x004e5060();
  func_0x004e53b0(&PTR_FUN_009f2b38);
  if ((extraout_x8 & 1) != 0) {
    func_0x004e4ff0();
  }
  func_0x004e52e0();
  FUN_004e42e8();
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x40) = unaff_x21;
  func_0x004e18b8((undefined8 *)(unaff_x19 + 0x30),unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
  *(undefined8 *)(unaff_x19 + 0x58) = unaff_x21;
  func_0x004e18c8((undefined8 *)(unaff_x19 + 0x48),unaff_x20 + 0x48);
  lVar2 = unaff_x20 + 0x60;
  func_0x00487c6c();
  *(long *)(unaff_x19 + 0x60) = lVar2;
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    func_0x004e5258();
  }
  *(long *)(unaff_x19 + 0x68) = lVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    FUN_004e49d0();
  }
  *(undefined8 *)(unaff_x19 + 0x70) = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x004e5258();
  }
  *(undefined8 *)(unaff_x19 + 0x78) = uVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    FUN_004e4a08();
  }
  *(undefined8 *)(unaff_x19 + 0x80) = uVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x004de228();
  }
  *(undefined8 *)(unaff_x19 + 0x88) = uVar3;
  if ((uVar1 >> 5 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    FUN_004e4acc();
  }
  *(undefined8 *)(unaff_x19 + 0x90) = uVar3;
  if ((uVar1 >> 6 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    FUN_004e4b04();
  }
  *(undefined8 *)(unaff_x19 + 0x98) = uVar3;
  if ((uVar1 >> 7 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x004e5258();
  }
  *(undefined8 *)(unaff_x19 + 0xa0) = uVar3;
  if ((uVar1 >> 8 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    FUN_004e4b60();
  }
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar3;
  if ((uVar1 >> 9 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    FUN_004e4bc4();
  }
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar3;
  if ((uVar1 >> 10 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    FUN_004e4c2c();
  }
  *(undefined8 *)(unaff_x19 + 0xb8) = uVar3;
  if ((uVar1 >> 0xb & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x004de294();
  }
  *(undefined8 *)(unaff_x19 + 0xc0) = uVar3;
  if ((uVar1 >> 0xc & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x004de2c8();
  }
  *(undefined8 *)(unaff_x19 + 200) = uVar3;
  if ((uVar1 >> 0xd & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    FUN_004e4cc0();
  }
  *(undefined8 *)(unaff_x19 + 0xd0) = uVar3;
  if ((uVar1 >> 0xe & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    FUN_004e4d20();
  }
  *(undefined8 *)(unaff_x19 + 0xd8) = unaff_x21;
  uVar4 = *(undefined8 *)(unaff_x20 + 0xe8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xe0);
  uVar6 = *(undefined8 *)(unaff_x20 + 0xf8);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xf0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x108);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x100);
  *(undefined8 *)(unaff_x19 + 0x10f) = *(undefined8 *)(unaff_x20 + 0x10f);
  *(undefined8 *)(unaff_x19 + 0xf8) = uVar6;
  *(undefined8 *)(unaff_x19 + 0xf0) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x108) = uVar8;
  *(undefined8 *)(unaff_x19 + 0x100) = uVar7;
  *(undefined8 *)(unaff_x19 + 0xe8) = uVar4;
  *(undefined8 *)(unaff_x19 + 0xe0) = uVar3;
  return;
}



/* Entry: 004e07d8; end: 004e0803;  */

undefined8 FUN_004e07d8(undefined8 param_1)

{
  func_0x004e5020();
  FUN_004e0804(param_1);
  return param_1;
}



/* Entry: 004e0804; end: 004e092b;  */

undefined8 FUN_004e0804(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  func_0x00532f74(param_1 + 0x60);
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_004d84f0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_004e2b08();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_004d93b4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_004d4468();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_004e1dcc();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_004e3300();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN_004e3408();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN_004e1c48();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xc0) != 0) {
    FUN_004d74f4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 200) != 0) {
    FUN_004d7d54();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xd0) != 0) {
    FUN_004e1b60();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xd8) != 0) {
    FUN_004e35ac();
  }
  __ZdlPv();
  FUN_004e4308(param_1 + 0x48);
  FUN_004e4330(param_1 + 0x30);
  func_0x004e5280(param_1 + 0x18);
  if (extraout_x8 != 0) {
    func_0x004e518c();
  }
  return unaff_x19;
}



/* Entry: 004e092c; end: 004e092f;  */

undefined8 FUN_004e092c(undefined8 param_1)

{
  func_0x004e5020();
  FUN_004e0804(param_1);
  return param_1;
}



/* Entry: 004e0930; end: 004e0943;  */

void FUN_004e0930(void)

{
  FUN_004e07d8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e0944; end: 004e094f;  */

undefined ** FUN_004e0944(void)

{
  return &PTR_DAT_009f2bd0;
}


