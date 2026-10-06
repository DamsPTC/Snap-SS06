/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004dbdd4; end: 004dbe07;  */

long FUN_004dbdd4(long param_1)

{
  func_0x004de90c();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004dbe08; end: 004dbe0b;  */

long FUN_004dbe08(long param_1)

{
  func_0x004de90c();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004dbe0c; end: 004dbe1f;  */

void FUN_004dbe0c(void)

{
  FUN_004dbdd4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004dbe20; end: 004dbe2b;  */

undefined ** FUN_004dbe20(void)

{
  return &PTR_DAT_009f1ae8;
}



/* Entry: 004dbe2c; end: 004dbec7;  */

long * FUN_004dbe2c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004de78c();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    func_0x004de8a8();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x004de780();
    func_0x004de9ec();
    func_0x004de804();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x004de780();
    func_0x004dea8c();
    func_0x004de804();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004de94c();
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



/* Entry: 004dbec8; end: 004dbf43;  */

void FUN_004dbec8(int param_1)

{
  int iVar1;
  int extraout_w8;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar2;
  int extraout_w9;
  long extraout_x9;
  long unaff_x19;
  
  func_0x004dea80();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x004dea9c();
    param_1 = param_1 + 1;
  }
  iVar1 = -9;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x004debd0();
    param_1 = extraout_w9 + param_1;
    iVar1 = extraout_w8;
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    param_1 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x28)) * iVar1 + 0x2c0U >> 6) + param_1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004de9c8();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar2 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 004dbf44; end: 004dbf47;  */

void FUN_004dbf44(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004de83c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x004deb74();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004deb5c();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x004deab8();
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  func_0x004de930();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004de84c();
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



/* Entry: 004dbf48; end: 004dbfc7;  */

void FUN_004dbf48(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  if (*(int *)(param_1 + 0x1c) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004deac0();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_004dbfa4;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_004dc860();
    }
  }
  else {
    if (*(int *)(param_1 + 0x1c) != 1) goto LAB_004dbfa4;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004deac0();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_004dbfa4;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_004dc518();
    }
  }
  __ZdlPv();
LAB_004dbfa4:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 004dbfc8; end: 004dbffb;  */

long FUN_004dbfc8(long param_1)

{
  func_0x004de90c();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_004dbf48(param_1);
  }
  return param_1;
}



/* Entry: 004dbffc; end: 004dbfff;  */

long FUN_004dbffc(long param_1)

{
  func_0x004de90c();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_004dbf48(param_1);
  }
  return param_1;
}



/* Entry: 004dc000; end: 004dc013;  */

void FUN_004dc000(void)

{
  FUN_004dbfc8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004dc014; end: 004dc027;  */

long FUN_004dc014(long param_1)

{
  func_0x004de90c();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_004dcf7c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_0054cf94();
  }
  FUN_004ddae4(param_1 + 0x18);
  return param_1;
}



/* Entry: 004dc028; end: 004dc0ff;  */

long * FUN_004dc028(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x004de78c();
  plVar2 = (long *)(ulong)*(uint *)(param_1 + 0x1c);
  if (*(uint *)(param_1 + 0x1c) - 1 < 2) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x10) + 0x14);
    func_0x004de8ec();
    param_4 = plVar2;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x004de94c();
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



/* Entry: 004dc100; end: 004dc103;  */

void FUN_004dc100(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x004de810();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004deaa4();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_004dbc0c;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_004dbf48();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (iVar2 == 2) {
      param_1 = (ulong *)unaff_x21[2];
      func_0x004dc180();
      goto LAB_004dbc0c;
    }
    FUN_004de3b0();
    param_1 = unaff_x22;
  }
  else {
    if (iVar1 != 1) goto LAB_004dbc0c;
    if (iVar2 == 1) {
      param_1 = (ulong *)unaff_x21[2];
      FUN_004dc104();
      goto LAB_004dbc0c;
    }
    FUN_004de2f8();
    param_1 = unaff_x22;
  }
  unaff_x21[2] = (ulong)param_1;
LAB_004dbc0c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004de84c();
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



/* Entry: 004dc104; end: 004dc21b;  */

void FUN_004dc104(void)

{
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x004de810();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004deaa4();
  }
  FUN_004dc7a8(unaff_x21 + 0x18,unaff_x20 + 0x18);
  puVar1 = (ulong *)(unaff_x21 + 0x30);
  func_0x004dc7bc();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x48);
    if (puVar1 == (ulong *)0x0) {
      func_0x004de43c();
      *(ulong **)(unaff_x21 + 0x48) = unaff_x22;
      puVar1 = unaff_x22;
    }
    else {
      FUN_004dc7cc();
    }
  }
  func_0x004de86c();
  if ((extraout_x8 & 1) != 0) {
    func_0x004de84c();
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



/* Entry: 004dc21c; end: 004dc23f;  */

undefined8 FUN_004dc21c(undefined8 param_1)

{
  func_0x004de90c();
  return param_1;
}



/* Entry: 004dc240; end: 004dc243;  */

undefined8 FUN_004dc240(undefined8 param_1)

{
  func_0x004de90c();
  return param_1;
}



/* Entry: 004dc244; end: 004dc257;  */

void FUN_004dc244(void)

{
  FUN_004dc21c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004dc258; end: 004dc277;  */

undefined ** FUN_004dc258(void)

{
  return &PTR_DAT_009f1b80;
}



/* Entry: 004dc278; end: 004dc2cb;  */

long * FUN_004dc278(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004de78c();
  if (param_1[2] != 0) {
    func_0x004dea54();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x004de94c();
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



/* Entry: 004dc2cc; end: 004dc317;  */

long FUN_004dc2cc(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x004debe4();
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



/* Entry: 004dc318; end: 004dc33b;  */

undefined8 FUN_004dc318(undefined8 param_1)

{
  func_0x004de90c();
  return param_1;
}



/* Entry: 004dc33c; end: 004dc33f;  */

undefined8 FUN_004dc33c(undefined8 param_1)

{
  func_0x004de90c();
  return param_1;
}



/* Entry: 004dc340; end: 004dc353;  */

void FUN_004dc340(void)

{
  FUN_004dc318();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004dc354; end: 004dc377;  */

undefined ** FUN_004dc354(void)

{
  return &PTR_DAT_009f1be8;
}



/* Entry: 004dc378; end: 004dc467;  */

segment_command *
FUN_004dc378(segment_command *param_1,undefined8 param_2,ulong param_3,segment_command *param_4)

{
  uint uVar1;
  segment_command *psVar2;
  long lVar3;
  undefined4 uVar4;
  long extraout_x8;
  segment_command *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x004de78c();
  if (*(qword *)(param_1->segname + 8) != 0) {
    func_0x004dea54();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x18) == '\x01') {
    func_0x004de780();
    func_0x004de9ec();
    func_0x004de7f8();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x19) == '\x01') {
    func_0x004de780();
    func_0x004dea8c();
    func_0x004de7f8();
    param_4 = param_1;
  }
  psVar2 = param_1;
  if (*(char *)(unaff_x20 + 0x1a) == '\x01') {
    func_0x004de780();
    psVar2 = &segment_command_00000020;
    func_0x00487cbc(0x20,param_1);
    func_0x004de7f8();
    param_4 = psVar2;
  }
  if (*(char *)(unaff_x20 + 0x1b) == '\x01') {
    func_0x004de780();
    param_4 = (segment_command *)segment_command_00000020.segname;
    func_0x00487cbc(0x28,psVar2);
    func_0x004de7f8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004de94c();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*(long *)unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        uVar4 = unaff_x19->cmd;
        iVar6 = (uVar4 - (int)param_4) + 0x10;
        iVar5 = (int)param_3;
        uVar1 = iVar5 - iVar6;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar5 < iVar6) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (segment_command *)(param_4->segname + (long)iVar5 + -8);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (segment_command *)(param_4->segname + (long)(int)param_3 + -8);
  }
  return param_4;
}



/* Entry: 004dc468; end: 004dc517;  */

long FUN_004dc468(long param_1)

{
  undefined4 uVar1;
  uint7 uVar2;
  long extraout_x8;
  long lVar3;
  ulong extraout_x9;
  long lVar4;
  byte bVar5;
  
  func_0x004debe4();
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  bVar5 = (byte)((uint)uVar1 >> 0x10);
  uVar2 = CONCAT52((uint5)(((uint6)(byte)((char)((uint)uVar1 >> 0x18) * '\x02') << 0x20) >> 0x10),
                   (ushort)bVar5 + (ushort)bVar5) & 0xffffffffff00ff;
  lVar3 = extraout_x8 +
          (ulong)((uint)(byte)((char)uVar1 * '\x02') +
                  (uint)(byte)((char)((uint)uVar1 >> 8) * '\x02') +
                 (uint)(ushort)uVar2 + (uint)(byte)(uVar2 >> 0x20));
  if ((extraout_x9 & 1) != 0) {
    lVar4 = (long)*(char *)((extraout_x9 & 0xfffffffffffffffe) + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)((extraout_x9 & 0xfffffffffffffffe) + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar3;
  return lVar3;
}



/* Entry: 004dc518; end: 004dc567;  */

long FUN_004dc518(long param_1)

{
  func_0x004de90c();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_004dcf7c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_0054cf94();
  }
  FUN_004ddae4(param_1 + 0x18);
  return param_1;
}



/* Entry: 004dc568; end: 004dc57b;  */

void FUN_004dc568(void)

{
  FUN_004dc518();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004dc57c; end: 004dc587;  */

undefined ** FUN_004dc57c(void)

{
  return &PTR_DAT_009f1c50;
}



/* Entry: 004dc588; end: 004dc643;  */

void FUN_004dc588(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    FUN_00437de0(param_1 + 0x18);
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    FUN_00437de0(param_1 + 0x30);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x004dc5f0(*(undefined8 *)(param_1 + 0x48));
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



/* Entry: 004dc644; end: 004dc7a7;  */

long * FUN_004dc644(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004de78c();
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0x48);
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    param_4 = (long *)((long)&MACH_HEADER.magic + 2);
    func_0x004de8ec();
  }
  iVar3 = *(int *)(unaff_x20 + 0x20);
  while (iVar3 != 0) {
    func_0x004de79c();
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    func_0x004de8ec(3);
    func_0x004deb18();
  }
  iVar3 = *(int *)(unaff_x20 + 0x38);
  while (iVar3 != 0) {
    func_0x004de79c();
    param_3 = (ulong)*(uint *)(param_2 + 0x1c);
    func_0x004de8ec(4);
    func_0x004deb18();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x004de94c();
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



/* Entry: 004dc7a8; end: 004dc7cb;  */

void FUN_004dc7a8(void)

{
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x004de810();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004deaa4();
  }
  FUN_004dc7a8(unaff_x21 + 0x18,unaff_x20 + 0x18);
  puVar1 = (ulong *)(unaff_x21 + 0x30);
  func_0x004dc7bc();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x48);
    if (puVar1 == (ulong *)0x0) {
      func_0x004de43c();
      *(ulong **)(unaff_x21 + 0x48) = unaff_x22;
      puVar1 = unaff_x22;
    }
    else {
      FUN_004dc7cc();
    }
  }
  func_0x004de86c();
  if ((extraout_x8 & 1) != 0) {
    func_0x004de84c();
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



/* Entry: 004dc7cc; end: 004dc85f;  */

void FUN_004dc7cc(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x004de810();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004deaa4();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_004de534();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x004dcde0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_004de534();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        func_0x004dcde0();
      }
    }
  }
  func_0x004de86c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x004de84c();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004dc860; end: 004dc8a3;  */

long FUN_004dc860(long param_1)

{
  func_0x004de90c();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004dcc80();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004dc8a4; end: 004dc8b7;  */

void FUN_004dc8a4(void)

{
  FUN_004dc860();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004dc8b8; end: 004dc8c3;  */

undefined ** FUN_004dc8b8(void)

{
  return &PTR_DAT_009f1ca8;
}



/* Entry: 004dc8c4; end: 004dc957;  */

void FUN_004dc8c4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x004dea94();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x004dc918(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
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



/* Entry: 004dc958; end: 004dca7f;  */

long * FUN_004dc958(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x004de78c();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x004de8a8();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x28);
    param_4 = (long *)((long)&MACH_HEADER.magic + 2);
    func_0x004de8ec();
  }
  plVar2 = param_4;
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    plVar2 = unaff_x19;
    FUN_00435f80();
    param_3 = param_4;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004de94c();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      param_3 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)plVar2 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*unaff_x19 - (int)plVar2) + 0x10;
        iVar4 = (int)param_3;
        uVar1 = iVar4 - iVar5;
        param_3 = (long *)(ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x0054f690();
        plVar2 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)plVar2 + (long)iVar4);
    }
    _memcpy(plVar2,lVar3,(ulong)param_3 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)param_3);
  }
  return plVar2;
}



/* Entry: 004dca80; end: 004dca83;  */

void FUN_004dca80(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x004de810();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004deaa4();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        func_0x004deab0();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x004de4d0();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_004dca84();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  func_0x004de86c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x004de84c();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004dca84; end: 004dcacb;  */

void FUN_004dca84(long param_1,long param_2)

{
  FUN_004dcdcc(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 004dcacc; end: 004dcaff;  */

long FUN_004dcacc(long param_1)

{
  func_0x004de90c();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004dcb00; end: 004dcb03;  */

long FUN_004dcb00(long param_1)

{
  func_0x004de90c();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004dcb04; end: 004dcb17;  */

void FUN_004dcb04(void)

{
  FUN_004dcacc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004dcb18; end: 004dcb23;  */

undefined ** FUN_004dcb18(void)

{
  return &PTR_DAT_009f1cf8;
}



/* Entry: 004dcb24; end: 004dcc17;  */

void FUN_004dcb24(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x004dea80();
  if ((extraout_x8 & 1) != 0) {
    func_0x004dea94();
  }
  func_0x004deafc();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004dcc18; end: 004dcc7f;  */

void FUN_004dcc18(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004de83c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x004deb74();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004deb5c();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x004deab8();
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  func_0x004de930();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004de84c();
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



/* Entry: 004dcc80; end: 004dccb7;  */

long FUN_004dcc80(long param_1)

{
  func_0x004de90c();
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_0054cf94();
  }
  return param_1;
}



/* Entry: 004dccb8; end: 004dccbb;  */

long FUN_004dccb8(long param_1)

{
  func_0x004de90c();
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_0054cf94();
  }
  return param_1;
}



/* Entry: 004dccbc; end: 004dcccf;  */

void FUN_004dccbc(void)

{
  FUN_004dcc80();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004dccd0; end: 004dccdb;  */

undefined ** FUN_004dccd0(void)

{
  return &PTR_DAT_009f1d58;
}



/* Entry: 004dccdc; end: 004dcdcb;  */

long * FUN_004dccdc(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004de78c();
  iVar3 = *(int *)(param_1 + 0x18);
  while (iVar3 != 0) {
    func_0x004de79c();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x004de8ec(3);
    func_0x004deb18();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004de94c();
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



/* Entry: 004dcdcc; end: 004dce13;  */

void FUN_004dcdcc(long param_1,long param_2)

{
  FUN_004dcdcc(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 004dce14; end: 004dce37;  */

undefined8 FUN_004dce14(undefined8 param_1)

{
  func_0x004de90c();
  return param_1;
}



/* Entry: 004dce38; end: 004dce3b;  */

undefined8 FUN_004dce38(undefined8 param_1)

{
  func_0x004de90c();
  return param_1;
}



/* Entry: 004dce3c; end: 004dce4f;  */

void FUN_004dce3c(void)

{
  FUN_004dce14();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004dce50; end: 004dce73;  */

undefined ** FUN_004dce50(void)

{
  return &PTR_DAT_009f1da8;
}



/* Entry: 004dce74; end: 004dcefb;  */

long * FUN_004dce74(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004de78c();
  if (param_1[2] != 0) {
    func_0x004dea54();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x004deb38();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x004de780();
    func_0x004dea8c();
    func_0x004de804();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004de94c();
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



/* Entry: 004dcefc; end: 004dcf7b;  */

ulong FUN_004dcefc(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x28) = (int)uVar1;
  return uVar1;
}



/* Entry: 004dcf7c; end: 004dcfbf;  */

long FUN_004dcf7c(long param_1)

{
  func_0x004de90c();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004dce14();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004dce14();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004dcfc0; end: 004dcfc3;  */

long FUN_004dcfc0(long param_1)

{
  func_0x004de90c();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004dce14();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004dce14();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004dcfc4; end: 004dcfd7;  */

void FUN_004dcfc4(void)

{
  FUN_004dcf7c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004dcfd8; end: 004dcfe3;  */

undefined ** FUN_004dcfd8(void)

{
  return &PTR_DAT_009f1e08;
}



/* Entry: 004dcfe4; end: 004dd0d7;  */

long * FUN_004dcfe4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004de78c();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x28);
    func_0x004de8b8();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x28);
    param_4 = (long *)((long)&MACH_HEADER.magic + 2);
    func_0x004de8ec();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004de94c();
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



/* Entry: 004dd0d8; end: 004dd0f3;  */

long FUN_004dd0d8(long param_1)

{
  long extraout_x8;
  
  FUN_004dcefc();
  func_0x004de72c();
  return param_1 + extraout_x8;
}



/* Entry: 004dd0f4; end: 004dd0f7;  */

void FUN_004dd0f4(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x004de810();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004deaa4();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_004de534();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x004dcde0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_004de534();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        func_0x004dcde0();
      }
    }
  }
  func_0x004de86c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x004de84c();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004dd0f8; end: 004dd1db;  */

void FUN_004dd0f8(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  
  switch(*(undefined4 *)(param_1 + 0x50)) {
  case 10:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004deac0();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_004dd1a0;
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_004dd700();
    }
    break;
  case 0xb:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004deac0();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_004dd1a0;
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_004dd820();
    }
    break;
  case 0xc:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004deac0();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_004dd1a0;
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_004dd5e0();
    }
    break;
  case 0xd:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004deac0();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_004dd1a0;
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_004dd4f0();
    }
    break;
  default:
    goto LAB_004dd1a0;
  }
  __ZdlPv();
LAB_004dd1a0:
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 004dd1dc; end: 004dd227;  */

long FUN_004dd1dc(long param_1)

{
  func_0x004de90c();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_004dd0f8(param_1);
  }
  FUN_004ddab4(param_1 + 0x18);
  return param_1;
}



/* Entry: 004dd228; end: 004dd22b;  */

long FUN_004dd228(long param_1)

{
  func_0x004de90c();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_004dd0f8(param_1);
  }
  FUN_004ddab4(param_1 + 0x18);
  return param_1;
}



/* Entry: 004dd22c; end: 004dd23f;  */

void FUN_004dd22c(void)

{
  FUN_004dd1dc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004dd240; end: 004dd25b;  */

undefined8 FUN_004dd240(undefined8 param_1)

{
  func_0x004de90c();
  return param_1;
}



/* Entry: 004dd25c; end: 004dd35f;  */

dword * FUN_004dd25c(dword *param_1,dword *param_2,ulong param_3,dword *param_4)

{
  uint uVar1;
  dword *pdVar2;
  long lVar3;
  long extraout_x8;
  dword *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x004de78c();
  if (*(long *)(param_1 + 0xe) != 0) {
    func_0x004de780();
    param_2 = param_1;
    func_0x004de9ec();
    func_0x004de804();
    param_4 = param_1;
  }
  iVar4 = *(int *)(unaff_x20 + 0x20);
  while (iVar4 != 0) {
    func_0x004de79c();
    param_3 = (ulong)param_2[6];
    func_0x004de8ec(3);
    func_0x004deb18();
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x18);
    param_4 = &MACH_HEADER.cputype;
    func_0x004de8ec();
  }
  pdVar2 = (dword *)(ulong)*(uint *)(unaff_x20 + 0x50);
  uVar1 = *(uint *)(unaff_x20 + 0x50) - 10;
  if (uVar1 < 4) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x48) +
                              *(long *)(&UNK_0080b6c8 + (ulong)uVar1 * 8));
    func_0x004de8ec();
    param_4 = pdVar2;
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    func_0x004de780();
    param_4 = (dword *)(section_00000068.sectname + 8);
    func_0x00487cbc(0x70,pdVar2);
    func_0x004de804();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004de94c();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
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



/* Entry: 004dd360; end: 004dd45b;  */

void FUN_004dd360(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x004de7b8();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    FUN_004d2ec0(*unaff_x21);
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_004d2ec0(*(undefined8 *)(unaff_x19 + 0x30));
    func_0x004dea74();
  }
  switch(*(undefined4 *)(unaff_x19 + 0x50)) {
  case 10:
    FUN_004dd7e0(*(undefined8 *)(unaff_x19 + 0x48));
    break;
  case 0xb:
    FUN_004dd8d8(*(undefined8 *)(unaff_x19 + 0x48));
    break;
  case 0xc:
    FUN_004dd6c0(*(undefined8 *)(unaff_x19 + 0x48));
    break;
  case 0xd:
    FUN_004dd5a8(*(undefined8 *)(unaff_x19 + 0x48));
    break;
  default:
    goto LAB_004dd434;
  }
  func_0x004de708();
LAB_004dd434:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004de9c8();
  }
  func_0x004deb98();
  return;
}



/* Entry: 004dd45c; end: 004dd4ef;  */

void FUN_004dd45c(ulong *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x004de810();
  if ((unaff_x22 & 1) != 0) {
    func_0x004deaa4();
  }
  func_0x004deb24();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_1 = (ulong *)unaff_x21[6];
    if (param_1 == (ulong *)0x0) {
      func_0x004deab0();
      unaff_x21[6] = (ulong)param_1;
    }
    else {
      FUN_004d9d18();
    }
  }
  if (*(ulong *)(unaff_x20 + 0x38) != 0) {
    unaff_x21[7] = *(ulong *)(unaff_x20 + 0x38);
  }
  if (*(ulong *)(unaff_x20 + 0x40) != 0) {
    unaff_x21[8] = *(ulong *)(unaff_x20 + 0x40);
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x50);
  if (iVar2 != 0) {
    iVar3 = (int)unaff_x21[10];
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        param_1 = unaff_x21;
        FUN_004dd0f8();
      }
      *(int *)(unaff_x21 + 10) = iVar2;
    }
    switch(iVar2) {
    case 10:
      if (iVar3 == iVar2) {
        func_0x004dea3c();
        func_0x004dd460();
        goto LAB_004dbd9c;
      }
      func_0x004deb68();
      FUN_004de598();
      break;
    case 0xb:
      if (iVar3 == iVar2) {
        func_0x004dea3c();
        func_0x004dd48c();
        goto LAB_004dbd9c;
      }
      func_0x004deb68();
      FUN_004de5f4();
      break;
    case 0xc:
      if (iVar3 == iVar2) {
        func_0x004dea3c();
        func_0x004dd4a8();
        goto LAB_004dbd9c;
      }
      func_0x004deb68();
      FUN_004de650();
      break;
    case 0xd:
      if (iVar3 == iVar2) {
        func_0x004dea3c();
        func_0x004dd4d4();
        goto LAB_004dbd9c;
      }
      func_0x004deb68();
      FUN_004de6ac();
      break;
    default:
      goto LAB_004dbd9c;
    }
    unaff_x21[9] = (ulong)param_1;
  }
LAB_004dbd9c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004de84c();
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



/* Entry: 004dd4f0; end: 004dd513;  */

undefined8 FUN_004dd4f0(undefined8 param_1)

{
  func_0x004de90c();
  return param_1;
}



/* Entry: 004dd514; end: 004dd527;  */

void FUN_004dd514(void)

{
  FUN_004dd4f0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004dd528; end: 004dd547;  */

undefined ** FUN_004dd528(void)

{
  return &PTR_DAT_009f1ea8;
}



/* Entry: 004dd548; end: 004dd5a7;  */

long * FUN_004dd548(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004de78c();
  if ((int)param_1[2] != 0) {
    func_0x004de780();
    func_0x004de85c();
    func_0x004de880();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x004de94c();
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



/* Entry: 004dd5a8; end: 004dd5df;  */

long FUN_004dd5a8(long param_1)

{
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  
  func_0x004de994();
  lVar1 = extraout_x8;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 004dd5e0; end: 004dd603;  */

undefined8 FUN_004dd5e0(undefined8 param_1)

{
  func_0x004de90c();
  return param_1;
}



/* Entry: 004dd604; end: 004dd617;  */

void FUN_004dd604(void)

{
  FUN_004dd5e0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004dd618; end: 004dd63b;  */

undefined ** FUN_004dd618(void)

{
  return &PTR_DAT_009f1ef0;
}



/* Entry: 004dd63c; end: 004dd6bf;  */

long * FUN_004dd63c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004de78c();
  if ((int)param_1[2] != 0) {
    func_0x004de780();
    func_0x004de85c();
    func_0x004de880();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x14) == '\x01') {
    func_0x004de780();
    func_0x004de9ec();
    func_0x004de7f8();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004de94c();
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



/* Entry: 004dd6c0; end: 004dd6ff;  */

long FUN_004dd6c0(long param_1)

{
  long extraout_x8;
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  func_0x004de994();
  lVar1 = extraout_x8 + (ulong)*(byte *)(param_1 + 0x14) * 2;
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



/* Entry: 004dd700; end: 004dd723;  */

undefined8 FUN_004dd700(undefined8 param_1)

{
  func_0x004de90c();
  return param_1;
}



/* Entry: 004dd724; end: 004dd737;  */

void FUN_004dd724(void)

{
  FUN_004dd700();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004dd738; end: 004dd75b;  */

undefined ** FUN_004dd738(void)

{
  return &PTR_DAT_009f1f30;
}



/* Entry: 004dd75c; end: 004dd7df;  */

long * FUN_004dd75c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004de78c();
  if ((int)param_1[2] != 0) {
    func_0x004de780();
    func_0x004de85c();
    func_0x004de880();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x14) == '\x01') {
    func_0x004de780();
    func_0x004de9ec();
    func_0x004de7f8();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004de94c();
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



/* Entry: 004dd7e0; end: 004dd81f;  */

long FUN_004dd7e0(long param_1)

{
  long extraout_x8;
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  func_0x004de994();
  lVar1 = extraout_x8 + (ulong)*(byte *)(param_1 + 0x14) * 2;
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



/* Entry: 004dd820; end: 004dd843;  */

undefined8 FUN_004dd820(undefined8 param_1)

{
  func_0x004de90c();
  return param_1;
}



/* Entry: 004dd844; end: 004dd857;  */

void FUN_004dd844(void)

{
  FUN_004dd820();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004dd858; end: 004dd877;  */

undefined ** FUN_004dd858(void)

{
  return &PTR_DAT_009f1f70;
}



/* Entry: 004dd878; end: 004dd8d7;  */

long * FUN_004dd878(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004de78c();
  if ((int)param_1[2] != 0) {
    func_0x004de780();
    func_0x004de85c();
    func_0x004de880();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x004de94c();
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



/* Entry: 004dd8d8; end: 004dd90f;  */

long FUN_004dd8d8(long param_1)

{
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  
  func_0x004de994();
  lVar1 = extraout_x8;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 004dd910; end: 004dd933;  */

undefined8 FUN_004dd910(undefined8 param_1)

{
  func_0x004de90c();
  return param_1;
}



/* Entry: 004dd934; end: 004dd937;  */

undefined8 FUN_004dd934(undefined8 param_1)

{
  func_0x004de90c();
  return param_1;
}



/* Entry: 004dd938; end: 004dd94b;  */

void FUN_004dd938(void)

{
  FUN_004dd910();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004dd94c; end: 004dd957;  */

undefined ** FUN_004dd94c(void)

{
  return &PTR_DAT_009f1fb0;
}



/* Entry: 004dd958; end: 004dd9b7;  */

long * FUN_004dd958(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004de78c();
  if ((int)param_1[2] != 0) {
    func_0x004de780();
    func_0x004de85c();
    func_0x004de880();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x004de94c();
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



/* Entry: 004dd9b8; end: 004dda87;  */

long FUN_004dd9b8(long param_1)

{
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  
  func_0x004de994();
  lVar1 = extraout_x8;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}


