/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004e0950; end: 004e0b2f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_004e0950(void)

{
  uint uVar1;
  long unaff_x19;
  ulong *puVar2;
  
  func_0x004e53c8();
  FUN_004e49a8();
  if (0 < *(int *)(unaff_x19 + 0x38)) {
    FUN_00437de0(unaff_x19 + 0x30);
  }
  if (0 < *(int *)(unaff_x19 + 0x50)) {
    FUN_00437de0(unaff_x19 + 0x48);
  }
  FUN_00532fa8(unaff_x19 + 0x60);
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_004d9bf4(*(undefined8 *)(unaff_x19 + 0x68));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_004d8554(*(undefined8 *)(unaff_x19 + 0x70));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_004d9bf4(*(undefined8 *)(unaff_x19 + 0x78));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x004e0ad0(*(undefined8 *)(unaff_x19 + 0x80));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_004d9440(*(undefined8 *)(unaff_x19 + 0x88));
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_004d4500(*(undefined8 *)(unaff_x19 + 0x90));
    }
    if ((uVar1 >> 6 & 1) != 0) {
      func_0x004e0b30(*(undefined8 *)(unaff_x19 + 0x98));
    }
    if ((uVar1 >> 7 & 1) != 0) {
      FUN_004d9bf4(*(undefined8 *)(unaff_x19 + 0xa0));
    }
  }
  if ((uVar1 & 0x7f00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      func_0x004e0b44(*(undefined8 *)(unaff_x19 + 0xa8));
    }
    if ((uVar1 >> 9 & 1) != 0) {
      func_0x004e0b5c(*(undefined8 *)(unaff_x19 + 0xb0));
    }
    if ((uVar1 >> 10 & 1) != 0) {
      FUN_004e0b74(*(undefined8 *)(unaff_x19 + 0xb8));
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      FUN_004d7564(*(undefined8 *)(unaff_x19 + 0xc0));
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      FUN_004d7e04(*(undefined8 *)(unaff_x19 + 200));
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      FUN_004e0bbc(*(undefined8 *)(unaff_x19 + 0xd0));
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      FUN_004e0bd0(*(undefined8 *)(unaff_x19 + 0xd8));
    }
  }
  *(undefined8 *)(unaff_x19 + 0xe8) = 0;
  *(undefined8 *)(unaff_x19 + 0xe0) = 0;
  puVar2 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x108) = 0;
  *(undefined8 *)(unaff_x19 + 0x100) = 0;
  *(undefined8 *)(unaff_x19 + 0xf8) = 0;
  *(undefined8 *)(unaff_x19 + 0xf0) = 0;
  *(undefined8 *)(unaff_x19 + 0x10f) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004e0b30; end: 004e0b73;  */

void FUN_004e0b30(long param_1)

{
  ulong *puVar1;
  
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



/* Entry: 004e0b74; end: 004e0bbb;  */

void FUN_004e0b74(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x004e53c8();
  FUN_00532fa8();
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_004d3988(*(undefined8 *)(unaff_x19 + 0x20));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
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



/* Entry: 004e0bbc; end: 004e0bcf;  */

void FUN_004e0bbc(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x10) = 0;
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



/* Entry: 004e0bd0; end: 004e0c03;  */

void FUN_004e0bd0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x004e531c();
  func_0x004e49bc();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
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



/* Entry: 004e0c04; end: 004e113f;  */

/* WARNING: Type propagation algorithm not settling */

section * FUN_004e0c04(section *param_1,section *param_2,section *param_3)

{
  dword *pdVar1;
  uint uVar2;
  dword dVar3;
  char cVar4;
  qword *pqVar5;
  section *psVar6;
  section *psVar7;
  segment_command *psVar8;
  qword qVar9;
  long lVar10;
  section *psVar11;
  long lVar12;
  ulong uVar13;
  long extraout_x8;
  dword dVar14;
  int iVar15;
  section *psVar16;
  int iVar17;
  
  uVar2 = *(uint *)param_1->segname;
  psVar7 = param_1;
  psVar11 = param_3;
  if ((uVar2 & 1) != 0) {
    psVar11 = (section *)(ulong)*(uint *)(*(long *)(param_1[1].segname + 8) + 0x18);
    psVar7 = (section *)((long)&MACH_HEADER.magic + 1);
    func_0x004e4f18();
    param_2 = psVar7;
  }
  psVar16 = (section *)(*(ulong *)param_1[1].segname & 0xfffffffffffffffc);
  cVar4 = *(char *)((long)psVar16->segname + 7);
  qVar9 = (qword)cVar4;
  if ((long)qVar9 < 0) {
    qVar9 = *(qword *)((long)psVar16->sectname + 8);
    if (qVar9 == 0) goto LAB_004e0c94;
    psVar6 = *(section **)psVar16->sectname;
  }
  else {
    psVar6 = psVar16;
    if (cVar4 == '\0') goto LAB_004e0c94;
  }
  FUN_0054ddb8(psVar6,qVar9,1,"snapchat.messaging.ConversationMetadata.conversation_title");
  psVar7 = param_3;
  FUN_00435e9c(param_3,2,psVar16,param_2);
  psVar11 = psVar16;
  param_2 = psVar7;
LAB_004e0c94:
  qVar9 = param_1->addr;
  for (dVar14 = 0; (dword)qVar9 != dVar14; dVar14 = dVar14 + 1) {
    func_0x004e51c8();
    psVar7 = (section *)((long)&MACH_HEADER.magic + 3);
    func_0x004e4f18();
    param_2 = psVar7;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    psVar11 = (section *)(ulong)*(uint *)(param_1[1].addr + 0x18);
    psVar7 = (section *)&MACH_HEADER.cputype;
    func_0x004e4f18();
    param_2 = psVar7;
  }
  lVar10._0_4_ = param_1[2].flags;
  lVar10._4_4_ = param_1[2].reserved1;
  if (lVar10 != 0) {
    func_0x004e4f44();
    func_0x004e520c();
    func_0x004e4f00();
    param_2 = psVar7;
  }
  psVar16 = psVar7;
  if (*(int *)param_1[3].sectname != 0) {
    func_0x004e4f44();
    psVar16 = (section *)(segment_command_00000020.segname + 8);
    func_0x00487cbc(0x30,psVar7);
    func_0x004e4f90();
    param_2 = psVar16;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    psVar11 = (section *)(ulong)*(uint *)(param_1[1].size + 0x18);
    psVar16 = (section *)((long)&MACH_HEADER.cputype + 3);
    func_0x004e4f18();
    param_2 = psVar16;
  }
  lVar12._0_4_ = param_1[2].reserved2;
  lVar12._4_4_ = param_1[2].reserved3;
  if (lVar12 != 0) {
    func_0x004e4f44();
    func_0x004e535c();
    func_0x004e4f00();
    param_2 = psVar16;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    psVar11 = (section *)(ulong)*(uint *)(*(long *)&param_1[1].offset + 0x14);
    psVar16 = (section *)((long)&MACH_HEADER.cpusubtype + 1);
    func_0x004e4f18();
    param_2 = psVar16;
  }
  if ((uVar2 >> 4 & 1) != 0) {
    psVar11 = (section *)(ulong)*(uint *)(*(long *)&param_1[1].reloff + 0x14);
    psVar16 = (section *)((long)&MACH_HEADER.cpusubtype + 2);
    func_0x004e4f18();
    param_2 = psVar16;
  }
  psVar7 = psVar16;
  if (*(long *)(param_1[3].sectname + 8) != 0) {
    func_0x004e4f44();
    psVar7 = (section *)&segment_command_00000020.nsects;
    func_0x00487cbc(0x60,psVar16);
    func_0x004e4f00();
    param_2 = psVar7;
  }
  psVar16 = psVar7;
  if (*(int *)(param_1[3].sectname + 4) != 0) {
    func_0x004e4f44();
    psVar16 = (section *)(section_00000068.segname + 8);
    func_0x00487cbc(0x80,psVar7);
    func_0x004e4f90();
    param_2 = psVar16;
  }
  psVar7 = psVar16;
  if (param_1[3].segname[0] == '\x01') {
    func_0x004e4f44();
    psVar7 = (section *)&section_00000068.addr;
    func_0x00487cbc(0x88,psVar16);
    func_0x004e4f0c();
    param_2 = psVar7;
  }
  if ((uVar2 >> 5 & 1) != 0) {
    psVar11 = (section *)(ulong)*(uint *)(*(long *)&param_1[1].flags + 0x14);
    psVar7 = (section *)((long)&MACH_HEADER.ncmds + 2);
    func_0x004e4f18();
    param_2 = psVar7;
  }
  psVar16 = psVar7;
  if (param_1[3].segname[1] == '\x01') {
    func_0x004e4f44();
    psVar16 = (section *)&section_00000068.offset;
    func_0x00487cbc(0x98,psVar7);
    func_0x004e4f0c();
    param_2 = psVar16;
  }
  dVar3 = param_1->reloff;
  for (dVar14 = 0; dVar3 != dVar14; dVar14 = dVar14 + 1) {
    func_0x004e51c8();
    psVar16 = (section *)&MACH_HEADER.sizeofcmds;
    func_0x004e4f18();
    param_2 = psVar16;
  }
  psVar7 = psVar16;
  if ((param_1[3].segname[2] & 1U) != 0) {
    func_0x004e4f44();
    psVar7 = (section *)&section_00000068.flags;
    func_0x00487cbc(0xa8,psVar16);
    func_0x004e4f0c();
    param_2 = psVar7;
  }
  psVar16 = psVar7;
  if (param_1[3].segname[3] == '\x01') {
    func_0x004e4f44();
    psVar16 = (section *)&section_00000068.reserved2;
    func_0x00487cbc(0xb0,psVar7);
    func_0x004e4f0c();
    param_2 = psVar16;
  }
  psVar7 = psVar16;
  if (*(int *)(param_1[3].segname + 4) != 0) {
    func_0x004e4f44();
    psVar7 = &section_000000b8;
    func_0x00487cbc(0xb8,psVar16);
    func_0x004e4f90();
    param_2 = psVar7;
  }
  psVar16 = psVar7;
  if (*(int *)(param_1[3].segname + 8) != 0) {
    func_0x004e4f44();
    psVar16 = (section *)(section_000000b8.sectname + 8);
    func_0x00487cbc(0xc0,psVar7);
    func_0x004e4f90();
    param_2 = psVar16;
  }
  if ((uVar2 >> 6 & 1) != 0) {
    psVar11 = (section *)(ulong)*(uint *)(*(long *)&param_1[1].reserved2 + 0x14);
    psVar16 = (section *)((long)&MACH_HEADER.flags + 1);
    func_0x004e4f18();
    param_2 = psVar16;
  }
  psVar7 = psVar16;
  if (*(int *)(param_1[3].segname + 0xc) != 0) {
    func_0x004e4f44();
    psVar7 = (section *)(section_000000b8.segname + 8);
    func_0x00487cbc(0xd0,psVar16);
    func_0x004e4f90();
    param_2 = psVar7;
  }
  if ((uVar2 >> 7 & 1) != 0) {
    psVar11 = (section *)(ulong)*(uint *)(*(long *)param_1[2].sectname + 0x18);
    psVar7 = (section *)((long)&MACH_HEADER.flags + 3);
    func_0x004e4f18();
    param_2 = psVar7;
  }
  psVar8 = (segment_command *)psVar7;
  if ((int)param_1[3].addr != 0) {
    func_0x004e4f44();
    psVar8 = (segment_command *)&section_000000b8.size;
    func_0x00487cbc(0xe0,psVar7);
    func_0x004e4f90();
    param_2 = (section *)psVar8;
  }
  if ((uVar2 >> 8 & 1) != 0) {
    psVar11 = (section *)(ulong)*(uint *)(*(long *)(param_1[2].sectname + 8) + 0x1c);
    psVar8 = (segment_command *)((long)&MACH_HEADER.reserved + 1);
    func_0x004e4f18();
    param_2 = (section *)psVar8;
  }
  if (*(char *)((long)&param_1[3].addr + 4) == '\x01') {
    func_0x004e4f44();
    param_2 = (section *)&section_000000b8.reloff;
    func_0x00487cbc(0xf0,psVar8);
    func_0x004e4f0c();
    psVar8 = (segment_command *)param_2;
  }
  if ((uVar2 >> 9 & 1) != 0) {
    psVar11 = (section *)(ulong)*(uint *)(*(long *)param_1[2].segname + 0x24);
    psVar8 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
    func_0x004e4f18();
    param_2 = (section *)psVar8;
  }
  if ((uVar2 >> 10 & 1) != 0) {
    psVar11 = (section *)(ulong)*(uint *)(*(long *)(param_1[2].segname + 8) + 0x14);
    psVar8 = &segment_command_00000020;
    func_0x004e4f18();
    param_2 = (section *)psVar8;
  }
  if ((uVar2 >> 0xb & 1) != 0) {
    psVar11 = (section *)(ulong)*(uint *)(param_1[2].addr + 0x14);
    psVar8 = (segment_command *)((long)&segment_command_00000020.cmd + 1);
    func_0x004e4f18();
    param_2 = (section *)psVar8;
  }
  if ((uVar2 >> 0xc & 1) != 0) {
    psVar11 = (section *)(ulong)*(uint *)(param_1[2].size + 0x14);
    psVar8 = (segment_command *)((long)&segment_command_00000020.cmd + 2);
    func_0x004e4f18();
    param_2 = (section *)psVar8;
  }
  if ((uVar2 >> 0xd & 1) != 0) {
    psVar11 = (section *)(ulong)*(uint *)(*(long *)&param_1[2].offset + 0x14);
    psVar8 = (segment_command *)((long)&segment_command_00000020.cmd + 3);
    func_0x004e4f18();
    param_2 = (section *)psVar8;
  }
  if ((uVar2 >> 0xe & 1) != 0) {
    psVar11 = (section *)(ulong)*(uint *)(*(long *)&param_1[2].reloff + 0x30);
    psVar8 = (segment_command *)&segment_command_00000020.cmdsize;
    func_0x004e4f18();
    param_2 = (section *)psVar8;
  }
  psVar7 = (section *)psVar8;
  if (*(char *)((long)&param_1[3].addr + 5) == '\x01') {
    func_0x004e4f44();
    psVar7 = (section *)&section_00000108.addr;
    func_0x00487cbc(0x128,psVar8);
    func_0x004e4f0c();
    param_2 = psVar7;
  }
  iVar17 = *(int *)param_1[1].sectname;
  for (iVar15 = 0; iVar17 != iVar15; iVar15 = iVar15 + 1) {
    uVar13 = *(ulong *)&param_1->reserved2;
    pdVar1 = &param_1->reserved2;
    if ((uVar13 & 1) != 0) {
      pdVar1 = (dword *)(uVar13 + (long)iVar15 * 8 + 7);
    }
    psVar11 = (section *)(ulong)*(uint *)(*(long *)pdVar1 + 0x18);
    psVar7 = (section *)((long)&segment_command_00000020.cmdsize + 2);
    func_0x004e4f18();
    param_2 = psVar7;
  }
  if ((param_1[3].addr & 0x1000000000000) != 0) {
    func_0x004e4f44();
    param_2 = (section *)&section_00000108.offset;
    func_0x00487cbc(0x138,psVar7);
    func_0x004e4f0c();
  }
  if ((*(qword *)((long)param_1->sectname + 8) & 1) == 0) {
    return param_2;
  }
  func_0x004e50ac();
  if ((long)psVar11 < 0) {
    lVar10 = *(long *)(extraout_x8 + 8);
    psVar11 = *(section **)(extraout_x8 + 0x10);
  }
  else {
    lVar10 = extraout_x8 + 8;
  }
  if ((long)(int)psVar11 <= (long)(*(qword *)param_3->sectname - (long)param_2)) {
    _memcpy(param_2,lVar10,(ulong)psVar11 & 0xffffffff);
    return (section *)((long)param_2->sectname + (long)(int)psVar11);
  }
  while( true ) {
    iVar17 = ((int)*(qword *)param_3->sectname - (int)param_2) + 0x10;
    iVar15 = (int)psVar11;
    psVar11 = (section *)(ulong)(uint)(iVar15 - iVar17);
    if (iVar15 - iVar17 == 0 || iVar15 < iVar17) break;
    func_0x0054f690();
    pqVar5 = (qword *)param_2->sectname;
    param_2 = param_3;
    func_0x0054ed58(param_3,(undefined1 *)((long)pqVar5 + (long)iVar17));
  }
  func_0x0054f690();
  return (section *)((long)param_2->sectname + (long)iVar15);
}



/* Entry: 004e1140; end: 004e145b;  */

/* WARNING: Removing unreachable block (ram,0x004e1188) */
/* WARNING: Removing unreachable block (ram,0x004e11b4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_004e1140(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int extraout_w8;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  int extraout_w9;
  long extraout_x9;
  int extraout_w12;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x004e4e8c();
  while (unaff_x22 != 0) {
    param_1 = *unaff_x21;
    FUN_004e145c();
    func_0x004e5240();
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x004e5074();
  func_0x004e5074();
  func_0x004e51bc(*(undefined8 *)(unaff_x19 + 0x60));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_1 + 8);
  }
  if (lVar4 != 0) {
    FUN_0048910c();
    func_0x004e50d4();
  }
  uVar2 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar2 & 0xff) != 0) {
    if ((uVar2 & 1) != 0) {
      FUN_004d2ec0(*(undefined8 *)(unaff_x19 + 0x68));
      func_0x004e50d4();
    }
    if ((uVar2 >> 1 & 1) != 0) {
      func_0x004e1478(*(undefined8 *)(unaff_x19 + 0x70));
      func_0x004e50d4();
    }
    if ((uVar2 >> 2 & 1) != 0) {
      FUN_004d2ec0(*(undefined8 *)(unaff_x19 + 0x78));
      func_0x004e50d4();
    }
    if ((uVar2 >> 3 & 1) != 0) {
      FUN_004e2dd4(*(undefined8 *)(unaff_x19 + 0x80));
      func_0x004e4e48();
    }
    if ((uVar2 >> 4 & 1) != 0) {
      func_0x004db7e0(*(undefined8 *)(unaff_x19 + 0x88));
      func_0x004e50d4();
    }
    if ((uVar2 >> 5 & 1) != 0) {
      func_0x004d46a4(*(undefined8 *)(unaff_x19 + 0x90));
      func_0x004e4e48();
      func_0x004e50f0();
    }
    if ((uVar2 >> 6 & 1) != 0) {
      FUN_004e1e7c(*(undefined8 *)(unaff_x19 + 0x98));
      func_0x004e4e48();
      func_0x004e50f0();
    }
    if ((uVar2 >> 7 & 1) != 0) {
      FUN_004d2ec0(*(undefined8 *)(unaff_x19 + 0xa0));
      func_0x004e52f8();
    }
  }
  if ((uVar2 & 0x7f00) != 0) {
    if ((uVar2 >> 8 & 1) != 0) {
      FUN_004e33cc(*(undefined8 *)(unaff_x19 + 0xa8));
      func_0x004e4e48();
      func_0x004e50f0();
    }
    if ((uVar2 >> 9 & 1) != 0) {
      FUN_004e34f4(*(undefined8 *)(unaff_x19 + 0xb0));
      func_0x004e4e48();
      func_0x004e50f0();
    }
    if ((uVar2 >> 10 & 1) != 0) {
      FUN_004df1d0(*(undefined8 *)(unaff_x19 + 0xb8));
      func_0x004e52f8();
    }
    if ((uVar2 >> 0xb & 1) != 0) {
      func_0x004db818(*(undefined8 *)(unaff_x19 + 0xc0));
      func_0x004e52f8();
    }
    if ((uVar2 >> 0xc & 1) != 0) {
      func_0x004db834(*(undefined8 *)(unaff_x19 + 200));
      func_0x004e52f8();
    }
    if ((uVar2 >> 0xd & 1) != 0) {
      FUN_004e1c14(*(undefined8 *)(unaff_x19 + 0xd0));
      func_0x004e4e48();
      func_0x004e50f0();
    }
    if ((uVar2 >> 0xe & 1) != 0) {
      func_0x004e1494(*(undefined8 *)(unaff_x19 + 0xd8));
      func_0x004e52f8();
    }
  }
  if (*(long *)(unaff_x19 + 0xe0) != 0) {
    func_0x004e4ffc(0xfffffff7);
  }
  if (*(long *)(unaff_x19 + 0xe8) != 0) {
    func_0x004e4ffc();
  }
  if (*(int *)(unaff_x19 + 0xf0) != 0) {
    func_0x004e52c8();
  }
  if (*(int *)(unaff_x19 + 0xf4) != 0) {
    func_0x004e52c8();
  }
  if (*(long *)(unaff_x19 + 0xf8) != 0) {
    func_0x004e4ffc();
  }
  func_0x004e528c();
  func_0x004e528c();
  func_0x004e528c();
  func_0x004e5044();
  func_0x004e5044();
  func_0x004e5044();
  iVar1 = extraout_w9;
  if (*(int *)(unaff_x19 + 0x110) != 0) {
    iVar1 = extraout_w9 +
            ((uint)(extraout_w12 + (int)LZCOUNT((long)*(int *)(unaff_x19 + 0x110)) * extraout_w8) >>
            6) + 2;
  }
  iVar3 = iVar1 + 3;
  if (*(char *)(unaff_x19 + 0x114) == '\0') {
    iVar3 = iVar1;
  }
  iVar1 = iVar3 + 3;
  if (*(char *)(unaff_x19 + 0x115) == '\0') {
    iVar1 = iVar3;
  }
  iVar3 = iVar1 + 3;
  if (*(char *)(unaff_x19 + 0x116) == '\0') {
    iVar3 = iVar1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004e5108();
    lVar4 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar4 = *(long *)(extraout_x9 + 0x10);
    }
    iVar3 = (int)lVar4 + iVar3;
  }
  *(int *)(unaff_x19 + 0x14) = iVar3;
  return;
}



/* Entry: 004e145c; end: 004e14af;  */

long FUN_004e145c(long param_1)

{
  long extraout_x8;
  
  FUN_004e28f8();
  FUN_004e4e48();
  return param_1 + extraout_x8;
}



/* Entry: 004e14b0; end: 004e14b3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_004e14b0(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x004e4fbc();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004e524c();
  }
  func_0x004e5310();
  FUN_004e18a8();
  func_0x004e18b8(unaff_x21 + 0x30,unaff_x20 + 0x30);
  puVar2 = (ulong *)(unaff_x21 + 0x48);
  lVar3 = unaff_x20 + 0x48;
  func_0x004e18c8();
  func_0x004e51f4(*(undefined8 *)(unaff_x20 + 0x60));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x004e51e8();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x60);
    func_0x00532e08();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x68);
      if (puVar2 == (ulong *)0x0) {
        func_0x004e511c();
        *(ulong **)(unaff_x21 + 0x68) = puVar2;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x70);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_004e49d0();
        *(ulong **)(unaff_x21 + 0x70) = puVar2;
      }
      else {
        FUN_004d8688();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x78);
      if (puVar2 == (ulong *)0x0) {
        func_0x004e511c();
        *(ulong **)(unaff_x21 + 0x78) = puVar2;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x80);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_004e4a08();
        *(ulong **)(unaff_x21 + 0x80) = puVar2;
      }
      else {
        FUN_004e18d8();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x88);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x004de228();
        *(ulong **)(unaff_x21 + 0x88) = puVar2;
      }
      else {
        FUN_004d9744();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x90);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_004e4acc();
        *(ulong **)(unaff_x21 + 0x90) = puVar2;
      }
      else {
        FUN_004d4794();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x98);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_004e4b04();
        *(ulong **)(unaff_x21 + 0x98) = puVar2;
      }
      else {
        func_0x004e19cc();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xa0);
      if (puVar2 == (ulong *)0x0) {
        func_0x004e511c();
        *(ulong **)(unaff_x21 + 0xa0) = puVar2;
      }
      else {
        FUN_004d9d18();
      }
    }
  }
  if ((uVar1 & 0x7f00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xa8);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_004e4b60();
        *(ulong **)(unaff_x21 + 0xa8) = puVar2;
      }
      else {
        func_0x004e19e8();
      }
    }
    if ((uVar1 >> 9 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xb0);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_004e4bc4();
        *(ulong **)(unaff_x21 + 0xb0) = puVar2;
      }
      else {
        func_0x004e1a14();
      }
    }
    if ((uVar1 >> 10 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xb8);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_004e4c2c();
        *(ulong **)(unaff_x21 + 0xb8) = puVar2;
      }
      else {
        FUN_004e1a4c();
      }
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xc0);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x004de294();
        *(ulong **)(unaff_x21 + 0xc0) = puVar2;
      }
      else {
        FUN_004d767c();
      }
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 200);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x004de2c8();
        *(ulong **)(unaff_x21 + 200) = puVar2;
      }
      else {
        FUN_004d81cc();
      }
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xd0);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_004e4cc0();
        *(ulong **)(unaff_x21 + 0xd0) = puVar2;
      }
      else {
        FUN_004e1af0();
      }
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xd8);
      if (puVar2 == (ulong *)0x0) {
        FUN_004e4d20();
        *(ulong **)(unaff_x21 + 0xd8) = unaff_x22;
        puVar2 = unaff_x22;
      }
      else {
        FUN_004e1b10();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0xe0) != 0) {
    *(long *)(unaff_x21 + 0xe0) = *(long *)(unaff_x20 + 0xe0);
  }
  if (*(long *)(unaff_x20 + 0xe8) != 0) {
    *(long *)(unaff_x21 + 0xe8) = *(long *)(unaff_x20 + 0xe8);
  }
  if (*(int *)(unaff_x20 + 0xf0) != 0) {
    *(int *)(unaff_x21 + 0xf0) = *(int *)(unaff_x20 + 0xf0);
  }
  if (*(int *)(unaff_x20 + 0xf4) != 0) {
    *(int *)(unaff_x21 + 0xf4) = *(int *)(unaff_x20 + 0xf4);
  }
  if (*(long *)(unaff_x20 + 0xf8) != 0) {
    *(long *)(unaff_x21 + 0xf8) = *(long *)(unaff_x20 + 0xf8);
  }
  if (*(char *)(unaff_x20 + 0x100) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x100) = 1;
  }
  if (*(char *)(unaff_x20 + 0x101) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x101) = 1;
  }
  if (*(char *)(unaff_x20 + 0x102) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x102) = 1;
  }
  if (*(char *)(unaff_x20 + 0x103) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x103) = 1;
  }
  if (*(int *)(unaff_x20 + 0x104) != 0) {
    *(int *)(unaff_x21 + 0x104) = *(int *)(unaff_x20 + 0x104);
  }
  if (*(int *)(unaff_x20 + 0x108) != 0) {
    *(int *)(unaff_x21 + 0x108) = *(int *)(unaff_x20 + 0x108);
  }
  if (*(int *)(unaff_x20 + 0x10c) != 0) {
    *(int *)(unaff_x21 + 0x10c) = *(int *)(unaff_x20 + 0x10c);
  }
  if (*(int *)(unaff_x20 + 0x110) != 0) {
    *(int *)(unaff_x21 + 0x110) = *(int *)(unaff_x20 + 0x110);
  }
  if (*(char *)(unaff_x20 + 0x114) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x114) = 1;
  }
  if (*(char *)(unaff_x20 + 0x115) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x115) = 1;
  }
  if (*(char *)(unaff_x20 + 0x116) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x116) = 1;
  }
  func_0x004e4fa8();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004e4fd0();
    if ((*puVar2 & 1) == 0) {
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



/* Entry: 004e14b4; end: 004e18a7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_004e14b4(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x004e4fbc();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004e524c();
  }
  func_0x004e5310();
  FUN_004e18a8();
  func_0x004e18b8(unaff_x21 + 0x30,unaff_x20 + 0x30);
  puVar2 = (ulong *)(unaff_x21 + 0x48);
  lVar3 = unaff_x20 + 0x48;
  func_0x004e18c8();
  func_0x004e51f4(*(undefined8 *)(unaff_x20 + 0x60));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x004e51e8();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x60);
    func_0x00532e08();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x68);
      if (puVar2 == (ulong *)0x0) {
        func_0x004e511c();
        *(ulong **)(unaff_x21 + 0x68) = puVar2;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x70);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_004e49d0();
        *(ulong **)(unaff_x21 + 0x70) = puVar2;
      }
      else {
        FUN_004d8688();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x78);
      if (puVar2 == (ulong *)0x0) {
        func_0x004e511c();
        *(ulong **)(unaff_x21 + 0x78) = puVar2;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x80);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_004e4a08();
        *(ulong **)(unaff_x21 + 0x80) = puVar2;
      }
      else {
        FUN_004e18d8();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x88);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x004de228();
        *(ulong **)(unaff_x21 + 0x88) = puVar2;
      }
      else {
        FUN_004d9744();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x90);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_004e4acc();
        *(ulong **)(unaff_x21 + 0x90) = puVar2;
      }
      else {
        FUN_004d4794();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x98);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_004e4b04();
        *(ulong **)(unaff_x21 + 0x98) = puVar2;
      }
      else {
        func_0x004e19cc();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xa0);
      if (puVar2 == (ulong *)0x0) {
        func_0x004e511c();
        *(ulong **)(unaff_x21 + 0xa0) = puVar2;
      }
      else {
        FUN_004d9d18();
      }
    }
  }
  if ((uVar1 & 0x7f00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xa8);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_004e4b60();
        *(ulong **)(unaff_x21 + 0xa8) = puVar2;
      }
      else {
        func_0x004e19e8();
      }
    }
    if ((uVar1 >> 9 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xb0);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_004e4bc4();
        *(ulong **)(unaff_x21 + 0xb0) = puVar2;
      }
      else {
        func_0x004e1a14();
      }
    }
    if ((uVar1 >> 10 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xb8);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_004e4c2c();
        *(ulong **)(unaff_x21 + 0xb8) = puVar2;
      }
      else {
        FUN_004e1a4c();
      }
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xc0);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x004de294();
        *(ulong **)(unaff_x21 + 0xc0) = puVar2;
      }
      else {
        FUN_004d767c();
      }
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 200);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x004de2c8();
        *(ulong **)(unaff_x21 + 200) = puVar2;
      }
      else {
        FUN_004d81cc();
      }
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xd0);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_004e4cc0();
        *(ulong **)(unaff_x21 + 0xd0) = puVar2;
      }
      else {
        FUN_004e1af0();
      }
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xd8);
      if (puVar2 == (ulong *)0x0) {
        FUN_004e4d20();
        *(ulong **)(unaff_x21 + 0xd8) = unaff_x22;
        puVar2 = unaff_x22;
      }
      else {
        FUN_004e1b10();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0xe0) != 0) {
    *(long *)(unaff_x21 + 0xe0) = *(long *)(unaff_x20 + 0xe0);
  }
  if (*(long *)(unaff_x20 + 0xe8) != 0) {
    *(long *)(unaff_x21 + 0xe8) = *(long *)(unaff_x20 + 0xe8);
  }
  if (*(int *)(unaff_x20 + 0xf0) != 0) {
    *(int *)(unaff_x21 + 0xf0) = *(int *)(unaff_x20 + 0xf0);
  }
  if (*(int *)(unaff_x20 + 0xf4) != 0) {
    *(int *)(unaff_x21 + 0xf4) = *(int *)(unaff_x20 + 0xf4);
  }
  if (*(long *)(unaff_x20 + 0xf8) != 0) {
    *(long *)(unaff_x21 + 0xf8) = *(long *)(unaff_x20 + 0xf8);
  }
  if (*(char *)(unaff_x20 + 0x100) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x100) = 1;
  }
  if (*(char *)(unaff_x20 + 0x101) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x101) = 1;
  }
  if (*(char *)(unaff_x20 + 0x102) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x102) = 1;
  }
  if (*(char *)(unaff_x20 + 0x103) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x103) = 1;
  }
  if (*(int *)(unaff_x20 + 0x104) != 0) {
    *(int *)(unaff_x21 + 0x104) = *(int *)(unaff_x20 + 0x104);
  }
  if (*(int *)(unaff_x20 + 0x108) != 0) {
    *(int *)(unaff_x21 + 0x108) = *(int *)(unaff_x20 + 0x108);
  }
  if (*(int *)(unaff_x20 + 0x10c) != 0) {
    *(int *)(unaff_x21 + 0x10c) = *(int *)(unaff_x20 + 0x10c);
  }
  if (*(int *)(unaff_x20 + 0x110) != 0) {
    *(int *)(unaff_x21 + 0x110) = *(int *)(unaff_x20 + 0x110);
  }
  if (*(char *)(unaff_x20 + 0x114) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x114) = 1;
  }
  if (*(char *)(unaff_x20 + 0x115) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x115) = 1;
  }
  if (*(char *)(unaff_x20 + 0x116) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x116) = 1;
  }
  func_0x004e4fa8();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004e4fd0();
    if ((*puVar2 & 1) == 0) {
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



/* Entry: 004e18a8; end: 004e18d7;  */

void FUN_004e18a8(long *param_1,long param_2)

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



/* Entry: 004e18d8; end: 004e19cb;  */

void FUN_004e18d8(void)

{
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x004e4fbc();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004e524c();
  }
  func_0x004e5310();
  FUN_004dbabc();
  puVar1 = (ulong *)(unaff_x21 + 0x30);
  FUN_004dbabc();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x48);
    if (puVar1 == (ulong *)0x0) {
      FUN_004e4d58();
      *(ulong **)(unaff_x21 + 0x48) = unaff_x22;
      puVar1 = unaff_x22;
    }
    else {
      FUN_004e2f7c();
    }
  }
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    *(int *)(unaff_x21 + 0x50) = *(int *)(unaff_x20 + 0x50);
  }
  if (*(int *)(unaff_x20 + 0x54) != 0) {
    *(int *)(unaff_x21 + 0x54) = *(int *)(unaff_x20 + 0x54);
  }
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    *(long *)(unaff_x21 + 0x58) = *(long *)(unaff_x20 + 0x58);
  }
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    *(long *)(unaff_x21 + 0x60) = *(long *)(unaff_x20 + 0x60);
  }
  if (*(long *)(unaff_x20 + 0x68) != 0) {
    *(long *)(unaff_x21 + 0x68) = *(long *)(unaff_x20 + 0x68);
  }
  if (*(int *)(unaff_x20 + 0x70) != 0) {
    *(int *)(unaff_x21 + 0x70) = *(int *)(unaff_x20 + 0x70);
  }
  if (*(int *)(unaff_x20 + 0x74) != 0) {
    *(int *)(unaff_x21 + 0x74) = *(int *)(unaff_x20 + 0x74);
  }
  if (*(char *)(unaff_x20 + 0x78) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x78) = 1;
  }
  if (*(int *)(unaff_x20 + 0x7c) != 0) {
    *(int *)(unaff_x21 + 0x7c) = *(int *)(unaff_x20 + 0x7c);
  }
  if (*(int *)(unaff_x20 + 0x80) != 0) {
    *(int *)(unaff_x21 + 0x80) = *(int *)(unaff_x20 + 0x80);
  }
  func_0x004e4fa8();
  if ((extraout_x8 & 1) != 0) {
    func_0x004e4fd0();
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



/* Entry: 004e19cc; end: 004e1a4b;  */

void FUN_004e19cc(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
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



/* Entry: 004e1a4c; end: 004e1aef;  */

void FUN_004e1a4c(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long extraout_x8;
  long lVar3;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004e4fe0();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  func_0x004e51f4(*(undefined8 *)(unaff_x20 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if (((ulong)puVar2 & 1) != 0) {
      func_0x004e51e8();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x00532e08();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x20);
    if (param_1 == (ulong *)0x0) {
      func_0x004de264();
      *(ulong **)(unaff_x21 + 0x20) = puVar1;
      param_1 = puVar1;
    }
    else {
      FUN_004d3cd4();
    }
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  func_0x004e4fa8();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004e4fd0();
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



/* Entry: 004e1af0; end: 004e1b0f;  */

void FUN_004e1af0(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
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



/* Entry: 004e1b10; end: 004e1b5f;  */

void FUN_004e1b10(ulong *param_1,long param_2)

{
  long unaff_x19;
  
  func_0x004e531c();
  FUN_004e3760();
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(unaff_x19 + 0x2c) = *(int *)(param_2 + 0x2c);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x004e529c();
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



/* Entry: 004e1b60; end: 004e1b83;  */

undefined8 FUN_004e1b60(undefined8 param_1)

{
  func_0x004e5020();
  return param_1;
}



/* Entry: 004e1b84; end: 004e1b87;  */

undefined8 FUN_004e1b84(undefined8 param_1)

{
  func_0x004e5020();
  return param_1;
}



/* Entry: 004e1b88; end: 004e1b9b;  */

void FUN_004e1b88(void)

{
  FUN_004e1b60();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e1b9c; end: 004e1ba7;  */

undefined ** FUN_004e1b9c(void)

{
  return &PTR_DAT_009f2c18;
}



/* Entry: 004e1ba8; end: 004e1c13;  */

long * FUN_004e1ba8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004e4f50();
  if ((char)param_1[2] == '\x01') {
    func_0x004e4eb0();
    func_0x004e5100();
    func_0x004e4f0c();
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



/* Entry: 004e1c14; end: 004e1c47;  */

long FUN_004e1c14(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = (ulong)*(byte *)(param_1 + 0x10) * 2;
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



/* Entry: 004e1c48; end: 004e1c83;  */

long FUN_004e1c48(long param_1)

{
  func_0x004e5020();
  func_0x00532f74(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004d38d0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004e1c84; end: 004e1c87;  */

long FUN_004e1c84(long param_1)

{
  func_0x004e5020();
  func_0x00532f74(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004d38d0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004e1c88; end: 004e1c9b;  */

void FUN_004e1c88(void)

{
  FUN_004e1c48();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e1c9c; end: 004e1ca7;  */

undefined ** FUN_004e1c9c(void)

{
  return &PTR_DAT_009f2c60;
}



/* Entry: 004e1ca8; end: 004e1d47;  */

long * FUN_004e1ca8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004e4f50();
  func_0x004e5200(param_1[3]);
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_3 + 8);
  }
  if (lVar2 != 0) {
    func_0x004e5394();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x004e4eb0();
    func_0x004e5114();
    func_0x004e4f00();
    param_4 = param_1;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x14);
    param_4 = (long *)((long)&MACH_HEADER.magic + 3);
    func_0x004e5018();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004e50ac();
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



/* Entry: 004e1d48; end: 004e1dc7;  */

void FUN_004e1d48(long param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = param_1;
  func_0x004e51bc(*(undefined8 *)(param_1 + 0x18));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x00487c3c();
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x004db7fc(*(undefined8 *)(param_1 + 0x20));
    func_0x004e50d4();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x004e5028();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x004e5108();
  }
  func_0x004e52bc();
  return;
}



/* Entry: 004e1dc8; end: 004e1dcb;  */

void FUN_004e1dc8(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long extraout_x8;
  long lVar3;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004e4fe0();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  func_0x004e51f4(*(undefined8 *)(unaff_x20 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if (((ulong)puVar2 & 1) != 0) {
      func_0x004e51e8();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x00532e08();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x20);
    if (param_1 == (ulong *)0x0) {
      func_0x004de264();
      *(ulong **)(unaff_x21 + 0x20) = puVar1;
      param_1 = puVar1;
    }
    else {
      FUN_004d3cd4();
    }
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  func_0x004e4fa8();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004e4fd0();
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



/* Entry: 004e1dcc; end: 004e1def;  */

undefined8 FUN_004e1dcc(undefined8 param_1)

{
  func_0x004e5020();
  return param_1;
}



/* Entry: 004e1df0; end: 004e1df3;  */

undefined8 FUN_004e1df0(undefined8 param_1)

{
  func_0x004e5020();
  return param_1;
}



/* Entry: 004e1df4; end: 004e1e07;  */

void FUN_004e1df4(void)

{
  FUN_004e1dcc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e1e08; end: 004e1e13;  */

undefined ** FUN_004e1e08(void)

{
  return &PTR_DAT_009f2ca8;
}



/* Entry: 004e1e14; end: 004e1e7b;  */

long * FUN_004e1e14(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004e4f50();
  if ((int)param_1[2] != 0) {
    func_0x004e4eb0();
    func_0x004e5100();
    func_0x004e4f0c();
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



/* Entry: 004e1e7c; end: 004e1ec7;  */

ulong FUN_004e1e7c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = (int)LZCOUNT(*(int *)(param_1 + 0x10)) * -9 + 0x1a0U >> 6;
  }
  uVar2 = (ulong)uVar1;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar2 = lVar3 + uVar2;
  }
  *(int *)(param_1 + 0x14) = (int)uVar2;
  return uVar2;
}



/* Entry: 004e1ec8; end: 004e1efb;  */

long FUN_004e1ec8(long param_1)

{
  func_0x004e5020();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004e1efc; end: 004e1eff;  */

long FUN_004e1efc(long param_1)

{
  func_0x004e5020();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004e1f00; end: 004e1f13;  */

void FUN_004e1f00(void)

{
  FUN_004e1ec8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e1f14; end: 004e1f1f;  */

undefined ** FUN_004e1f14(void)

{
  return &PTR_DAT_009f2cf8;
}



/* Entry: 004e1f20; end: 004e1f63;  */

void FUN_004e1f20(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x004e5274();
  if ((extraout_x8 & 1) != 0) {
    func_0x004e53a0();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
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



/* Entry: 004e1f64; end: 004e203f;  */

long * FUN_004e1f64(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004e4f50();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    func_0x004e4f80();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x004e4eb0();
    func_0x004e5114();
    func_0x004e4f00();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x004e4eb0();
    func_0x004e51b4();
    func_0x004e4f00();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x004e4eb0();
    func_0x004e5260();
    func_0x004e4f00();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    func_0x004e4eb0();
    func_0x004e520c();
    func_0x004e4f00();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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
  return param_4;
}



/* Entry: 004e2040; end: 004e20db;  */

void FUN_004e2040(int param_1)

{
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int iVar1;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar2;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  long extraout_x9;
  long unaff_x19;
  
  func_0x004e5274();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x004e53a8();
    param_1 = param_1 + 1;
  }
  iVar1 = -9;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x004e4ffc();
    param_1 = extraout_w9 + param_1;
    iVar1 = extraout_w8;
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    func_0x004e4ffc();
    param_1 = extraout_w9_00 + param_1;
    iVar1 = extraout_w8_00;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    func_0x004e4ffc();
    param_1 = extraout_w9_01 + param_1;
    iVar1 = extraout_w8_01;
  }
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    param_1 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x38)) * iVar1 + 0x2c0U >> 6) + param_1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004e5108();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar2 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 004e20dc; end: 004e21eb;  */

void FUN_004e20dc(void)

{
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004e4fe0();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x18) == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x004e537c();
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    *(long *)(unaff_x21 + 0x38) = *(long *)(unaff_x20 + 0x38);
  }
  func_0x004e5170();
  if ((extraout_x8 & 1) != 0) {
    func_0x004e4fd0();
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



/* Entry: 004e21ec; end: 004e2217;  */

undefined8 FUN_004e21ec(undefined8 param_1)

{
  func_0x004e5020();
  FUN_004e2218(param_1);
  return param_1;
}



/* Entry: 004e2218; end: 004e2257;  */

undefined8 FUN_004e2218(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_004d93b4();
  }
  __ZdlPv();
  func_0x004e5280(param_1 + 0x18);
  if (extraout_x8 != 0) {
    func_0x004e518c();
  }
  return unaff_x19;
}



/* Entry: 004e2258; end: 004e225b;  */

undefined8 FUN_004e2258(undefined8 param_1)

{
  func_0x004e5020();
  FUN_004e2218(param_1);
  return param_1;
}



/* Entry: 004e225c; end: 004e226f;  */

void FUN_004e225c(void)

{
  FUN_004e21ec();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e2270; end: 004e227b;  */

undefined ** FUN_004e2270(void)

{
  return &PTR_DAT_009f2d68;
}



/* Entry: 004e227c; end: 004e22db;  */

void FUN_004e227c(void)

{
  uint uVar1;
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar2;
  
  func_0x004e52ac();
  if (in_NG == in_OV) {
    func_0x004e5364();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_004d9bf4(*(undefined8 *)(unaff_x19 + 0x30));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_004d9440(*(undefined8 *)(unaff_x19 + 0x38));
    }
  }
  puVar2 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
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



/* Entry: 004e22dc; end: 004e2397;  */

long * FUN_004e22dc(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar3;
  int iVar4;
  
  func_0x004e4f50();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x30);
    func_0x004e4f80();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    func_0x004e4eb0();
    unaff_w21 = (uint)*(undefined8 *)(unaff_x20 + 0x40);
    param_2 = param_1;
    func_0x004e5114();
    func_0x004e4f00();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x38);
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    param_4 = (long *)((long)&MACH_HEADER.magic + 3);
    func_0x004e5018();
  }
  func_0x004e513c();
  while (uVar1 != unaff_w21) {
    func_0x004e4e60();
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    func_0x004e5018(4);
    func_0x004e51a0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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
  return param_4;
}



/* Entry: 004e2398; end: 004e241f;  */

void FUN_004e2398(void)

{
  uint uVar1;
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x004e4e8c();
  while (unaff_x22 != 0) {
    FUN_004e2420(*unaff_x21);
    func_0x004e5240();
    unaff_x21 = unaff_x21 + 1;
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_004d2ec0(*(undefined8 *)(unaff_x19 + 0x30));
      func_0x004e50d4();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_004db7e0(*(undefined8 *)(unaff_x19 + 0x38));
      func_0x004e50d4();
    }
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    func_0x004e5028();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004e5108();
  }
  func_0x004e52bc();
  return;
}



/* Entry: 004e2420; end: 004e243b;  */

long FUN_004e2420(long param_1)

{
  long extraout_x8;
  
  FUN_004e2040();
  FUN_004e4e48();
  return param_1 + extraout_x8;
}



/* Entry: 004e243c; end: 004e243f;  */

void FUN_004e243c(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x004e4fbc();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004e524c();
  }
  func_0x004e5310();
  FUN_004e24e4();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        func_0x004e511c();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        FUN_004de228();
        *(ulong **)(unaff_x21 + 0x38) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_004d9744();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    *(long *)(unaff_x21 + 0x40) = *(long *)(unaff_x20 + 0x40);
  }
  func_0x004e4fa8();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x004e4fd0();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004e2440; end: 004e24e3;  */

void FUN_004e2440(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x004e4fbc();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004e524c();
  }
  func_0x004e5310();
  FUN_004e24e4();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        func_0x004e511c();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        FUN_004de228();
        *(ulong **)(unaff_x21 + 0x38) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_004d9744();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    *(long *)(unaff_x21 + 0x40) = *(long *)(unaff_x20 + 0x40);
  }
  func_0x004e4fa8();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x004e4fd0();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004e24e4; end: 004e24f3;  */

void FUN_004e24e4(long *param_1,long param_2)

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



/* Entry: 004e24f4; end: 004e2527;  */

long FUN_004e24f4(long param_1)

{
  func_0x004e5020();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004e2528; end: 004e252b;  */

long FUN_004e2528(long param_1)

{
  func_0x004e5020();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004e252c; end: 004e253f;  */

void FUN_004e252c(void)

{
  FUN_004e24f4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e2540; end: 004e254b;  */

undefined ** FUN_004e2540(void)

{
  return &PTR_DAT_009f2dc0;
}



/* Entry: 004e254c; end: 004e2587;  */

void FUN_004e254c(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x004e5274();
  if ((extraout_x8 & 1) != 0) {
    func_0x004e53a0();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
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



/* Entry: 004e2588; end: 004e2607;  */

long * FUN_004e2588(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004e4f50();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    func_0x004e4f80();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    func_0x004e4eb0();
    func_0x004e5114();
    func_0x004e4f0c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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
  return param_4;
}



/* Entry: 004e2608; end: 004e265b;  */

void FUN_004e2608(int param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x004e5274();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x004e53a8();
    param_1 = param_1 + 1;
  }
  param_1 = param_1 + (uint)*(byte *)(unaff_x19 + 0x20) * 2;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004e5108();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 004e265c; end: 004e26cf;  */

void FUN_004e265c(void)

{
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004e4fe0();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x18) == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x004e537c();
    }
  }
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x20) = 1;
  }
  func_0x004e5170();
  if ((extraout_x8 & 1) != 0) {
    func_0x004e4fd0();
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



/* Entry: 004e26d0; end: 004e2703;  */

long FUN_004e26d0(long param_1)

{
  func_0x004e5020();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004e2704; end: 004e2707;  */

long FUN_004e2704(long param_1)

{
  func_0x004e5020();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004e2708; end: 004e271b;  */

void FUN_004e2708(void)

{
  FUN_004e26d0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e271c; end: 004e2727;  */

undefined ** FUN_004e271c(void)

{
  return &PTR_DAT_009f2e08;
}



/* Entry: 004e2728; end: 004e2773;  */

void FUN_004e2728(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x004e5274();
  if ((extraout_x8 & 1) != 0) {
    func_0x004e53a0();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x54) = 0;
  *(undefined8 *)(unaff_x19 + 0x4c) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
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



/* Entry: 004e2774; end: 004e28f7;  */

qword * FUN_004e2774(qword *param_1,undefined8 param_2,qword *param_3,qword *param_4)

{
  uint uVar1;
  qword *pqVar2;
  qword *pqVar3;
  long lVar4;
  long extraout_x8;
  qword *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x004e4f50();
  if ((param_1[2] & 1) != 0) {
    func_0x004e4f80();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x004e4eb0();
    func_0x004e5114();
    func_0x004e4f0c();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x24) == '\x01') {
    func_0x004e4eb0();
    func_0x004e51b4();
    func_0x004e4f0c();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x004e4eb0();
    func_0x004e5260();
    func_0x004e4f00();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x004e4eb0();
    func_0x004e520c();
    func_0x004e4f00();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    param_1 = unaff_x19;
    func_0x00438520();
    param_3 = param_4;
    param_4 = param_1;
  }
  pqVar2 = param_1;
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    func_0x004e4eb0();
    pqVar2 = &segment_command_00000020.vmaddr;
    func_0x00487cbc(0x38,param_1);
    func_0x004e4f00();
    param_4 = pqVar2;
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    func_0x004e4eb0();
    func_0x004e535c();
    func_0x004e4f00();
    param_4 = pqVar2;
  }
  pqVar3 = pqVar2;
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    func_0x004e4eb0();
    pqVar3 = &segment_command_00000020.fileoff;
    func_0x00487cbc(0x48,pqVar2);
    func_0x004e4f00();
    param_4 = pqVar3;
  }
  if (*(int *)(unaff_x20 + 0x58) != 0) {
    func_0x004e4eb0();
    param_4 = &segment_command_00000020.filesize;
    func_0x00487cbc(0x50,pqVar3);
    func_0x004e4f0c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004e50ac();
    if ((long)param_3 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      param_3 = *(qword **)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if ((long)(*unaff_x19 - (long)param_4) < (long)(int)param_3) {
      while( true ) {
        iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar5 = (int)param_3;
        uVar1 = iVar5 - iVar6;
        param_3 = (qword *)(ulong)uVar1;
        if (uVar1 == 0 || iVar5 < iVar6) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (qword *)((long)param_4 + (long)iVar5);
    }
    _memcpy(param_4,lVar4,(ulong)param_3 & 0xffffffff);
    return (qword *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 004e28f8; end: 004e2a33;  */

void FUN_004e28f8(int param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x004e5274();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x004e53a8();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    param_1 = param_1 + ((int)LZCOUNT(*(int *)(unaff_x19 + 0x20)) * -9 + 0x1a0U >> 6);
  }
  param_1 = param_1 + (uint)*(byte *)(unaff_x19 + 0x24) * 2;
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    param_1 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x28)) * -9 + 0x2c0U >> 6) + param_1;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    param_1 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x30)) * -9 + 0x2c0U >> 6) + param_1;
  }
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    param_1 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x38)) * -9 + 0x2c0U >> 6) + param_1;
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    param_1 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x40)) * -9 + 0x2c0U >> 6) + param_1;
  }
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    param_1 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x48)) * -9 + 0x2c0U >> 6) + param_1;
  }
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    param_1 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x50)) * -9 + 0x2c0U >> 6) + param_1;
  }
  if (*(int *)(unaff_x19 + 0x58) != 0) {
    param_1 = param_1 + ((int)LZCOUNT(*(int *)(unaff_x19 + 0x58)) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004e5108();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 004e2a34; end: 004e2b07;  */

void FUN_004e2a34(void)

{
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004e4fe0();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x18) == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x004e537c();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(char *)(unaff_x20 + 0x24) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x24) = 1;
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    *(long *)(unaff_x21 + 0x38) = *(long *)(unaff_x20 + 0x38);
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    *(long *)(unaff_x21 + 0x40) = *(long *)(unaff_x20 + 0x40);
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    *(long *)(unaff_x21 + 0x48) = *(long *)(unaff_x20 + 0x48);
  }
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    *(long *)(unaff_x21 + 0x50) = *(long *)(unaff_x20 + 0x50);
  }
  if (*(int *)(unaff_x20 + 0x58) != 0) {
    *(int *)(unaff_x21 + 0x58) = *(int *)(unaff_x20 + 0x58);
  }
  func_0x004e5170();
  if ((extraout_x8 & 1) != 0) {
    func_0x004e4fd0();
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



/* Entry: 004e2b08; end: 004e2b4b;  */

long FUN_004e2b08(long param_1)

{
  func_0x004e5020();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_004e3180();
  }
  __ZdlPv();
  FUN_004ddab4(param_1 + 0x30);
  FUN_004ddab4(param_1 + 0x18);
  return param_1;
}



/* Entry: 004e2b4c; end: 004e2b4f;  */

long FUN_004e2b4c(long param_1)

{
  func_0x004e5020();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_004e3180();
  }
  __ZdlPv();
  FUN_004ddab4(param_1 + 0x30);
  FUN_004ddab4(param_1 + 0x18);
  return param_1;
}



/* Entry: 004e2b50; end: 004e2b63;  */

void FUN_004e2b50(void)

{
  FUN_004e2b08();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e2b64; end: 004e2b6f;  */

undefined ** FUN_004e2b64(void)

{
  return &PTR_DAT_009f2e48;
}



/* Entry: 004e2b70; end: 004e2bc3;  */

void FUN_004e2b70(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x004e3080(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x004e3080(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
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



/* Entry: 004e2bc4; end: 004e2dd3;  */

qword * FUN_004e2bc4(qword *param_1,qword *param_2,ulong param_3,qword *param_4)

{
  uint uVar1;
  qword *pqVar2;
  qword *pqVar3;
  long lVar4;
  long extraout_x8;
  qword *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar5;
  int iVar6;
  
  func_0x004e4f50();
  if (*(int *)(param_1 + 10) != 0) {
    func_0x004e4eb0();
    unaff_w21 = *(int *)(unaff_x20 + 0x50);
    param_2 = param_1;
    func_0x004e5100();
    func_0x004e4f90();
    param_4 = param_1;
  }
  func_0x004e513c();
  while (unaff_w22 != unaff_w21) {
    func_0x004e4e60();
    param_3 = (ulong)(uint)param_2[3];
    param_1 = (qword *)((long)&MACH_HEADER.magic + 2);
    func_0x004e5018();
    func_0x004e51a0();
  }
  if (*(int *)(unaff_x20 + 0x54) != 0) {
    func_0x004e4eb0();
    param_2 = param_1;
    func_0x004e51b4();
    func_0x004e4f90();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    func_0x004e4eb0();
    param_2 = param_1;
    func_0x004e5260();
    func_0x004e4f00();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    func_0x004e4eb0();
    param_2 = param_1;
    func_0x004e520c();
    func_0x004e4f00();
    param_4 = param_1;
  }
  pqVar2 = param_1;
  if (*(int *)(unaff_x20 + 0x70) != 0) {
    func_0x004e4eb0();
    pqVar2 = (qword *)(segment_command_00000020.segname + 8);
    func_0x00487cbc();
    func_0x004e4f90();
    param_2 = param_1;
    param_4 = pqVar2;
  }
  pqVar3 = pqVar2;
  if (*(long *)(unaff_x20 + 0x68) != 0) {
    func_0x004e4eb0();
    pqVar3 = &segment_command_00000020.vmaddr;
    func_0x00487cbc();
    func_0x004e4f00();
    param_2 = pqVar2;
    param_4 = pqVar3;
  }
  if (*(int *)(unaff_x20 + 0x74) != 0) {
    func_0x004e4eb0();
    param_2 = pqVar3;
    func_0x004e535c();
    func_0x004e4f0c();
    param_4 = pqVar3;
  }
  pqVar2 = pqVar3;
  if (*(char *)(unaff_x20 + 0x78) == '\x01') {
    func_0x004e4eb0();
    pqVar2 = &segment_command_00000020.fileoff;
    func_0x00487cbc();
    func_0x004e4f0c();
    param_2 = pqVar3;
    param_4 = pqVar2;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_2 = *(qword **)(unaff_x20 + 0x48);
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    pqVar2 = (qword *)((long)&MACH_HEADER.cpusubtype + 2);
    func_0x004e5018();
    param_4 = pqVar2;
  }
  pqVar3 = pqVar2;
  if (*(int *)(unaff_x20 + 0x7c) != 0) {
    func_0x004e4eb0();
    pqVar3 = (qword *)&segment_command_00000020.maxprot;
    func_0x00487cbc();
    func_0x004e4f0c();
    param_2 = pqVar2;
    param_4 = pqVar3;
  }
  if (*(int *)(unaff_x20 + 0x80) != 0) {
    func_0x004e4eb0();
    param_4 = (qword *)&segment_command_00000020.nsects;
    func_0x00487cbc();
    func_0x004e4f90();
    param_2 = pqVar3;
  }
  iVar5 = *(int *)(unaff_x20 + 0x38);
  while (iVar5 != 0) {
    func_0x004e4e60();
    param_3 = (ulong)(uint)param_2[3];
    func_0x004e5018(0xd);
    func_0x004e51a0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004e50ac();
    if ((long)param_3 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if ((long)(*unaff_x19 - (long)param_4) < (long)(int)param_3) {
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
      return (qword *)((long)param_4 + (long)iVar5);
    }
    _memcpy(param_4,lVar4,param_3 & 0xffffffff);
    return (qword *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 004e2dd4; end: 004e2f77;  */

/* WARNING: Removing unreachable block (ram,0x004e2e10) */

void FUN_004e2dd4(void)

{
  int iVar1;
  int iVar2;
  int extraout_w8;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  long unaff_x19;
  int unaff_w20;
  long unaff_x22;
  
  func_0x004e4e8c();
  while (unaff_x22 != 0) {
    func_0x004e5384();
    func_0x004e5240();
  }
  iVar2 = unaff_w20 + *(int *)(unaff_x19 + 0x38);
  func_0x004e5074();
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x48);
    func_0x004e3264();
    func_0x004e4e48();
    iVar2 = iVar2 + iVar1 + extraout_w8 + 1;
  }
  if (*(int *)(unaff_x19 + 0x50) != 0) {
    iVar2 = iVar2 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x50)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(unaff_x19 + 0x54) != 0) {
    iVar2 = iVar2 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x54)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(long *)(unaff_x19 + 0x58) != 0) {
    iVar2 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x58)) * -9 + 0x2c0U >> 6) + iVar2;
  }
  if (*(long *)(unaff_x19 + 0x60) != 0) {
    iVar2 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x60)) * -9 + 0x2c0U >> 6) + iVar2;
  }
  if (*(long *)(unaff_x19 + 0x68) != 0) {
    iVar2 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x68)) * -9 + 0x2c0U >> 6) + iVar2;
  }
  if (*(int *)(unaff_x19 + 0x70) != 0) {
    iVar2 = iVar2 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x70)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(unaff_x19 + 0x74) != 0) {
    iVar2 = iVar2 + ((int)LZCOUNT(*(int *)(unaff_x19 + 0x74)) * -9 + 0x1a0U >> 6);
  }
  iVar2 = iVar2 + (uint)*(byte *)(unaff_x19 + 0x78) * 2;
  if (*(int *)(unaff_x19 + 0x7c) != 0) {
    iVar2 = iVar2 + ((int)LZCOUNT(*(int *)(unaff_x19 + 0x7c)) * -9 + 0x1a0U >> 6);
  }
  if (*(int *)(unaff_x19 + 0x80) != 0) {
    iVar2 = iVar2 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x80)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004e5108();
    lVar3 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(unaff_x19 + 0x14) = iVar2;
  return;
}



/* Entry: 004e2f78; end: 004e2f7b;  */

void FUN_004e2f78(void)

{
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x004e4fbc();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004e524c();
  }
  func_0x004e5310();
  FUN_004dbabc();
  puVar1 = (ulong *)(unaff_x21 + 0x30);
  FUN_004dbabc();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x48);
    if (puVar1 == (ulong *)0x0) {
      FUN_004e4d58();
      *(ulong **)(unaff_x21 + 0x48) = unaff_x22;
      puVar1 = unaff_x22;
    }
    else {
      FUN_004e2f7c();
    }
  }
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    *(int *)(unaff_x21 + 0x50) = *(int *)(unaff_x20 + 0x50);
  }
  if (*(int *)(unaff_x20 + 0x54) != 0) {
    *(int *)(unaff_x21 + 0x54) = *(int *)(unaff_x20 + 0x54);
  }
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    *(long *)(unaff_x21 + 0x58) = *(long *)(unaff_x20 + 0x58);
  }
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    *(long *)(unaff_x21 + 0x60) = *(long *)(unaff_x20 + 0x60);
  }
  if (*(long *)(unaff_x20 + 0x68) != 0) {
    *(long *)(unaff_x21 + 0x68) = *(long *)(unaff_x20 + 0x68);
  }
  if (*(int *)(unaff_x20 + 0x70) != 0) {
    *(int *)(unaff_x21 + 0x70) = *(int *)(unaff_x20 + 0x70);
  }
  if (*(int *)(unaff_x20 + 0x74) != 0) {
    *(int *)(unaff_x21 + 0x74) = *(int *)(unaff_x20 + 0x74);
  }
  if (*(char *)(unaff_x20 + 0x78) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x78) = 1;
  }
  if (*(int *)(unaff_x20 + 0x7c) != 0) {
    *(int *)(unaff_x21 + 0x7c) = *(int *)(unaff_x20 + 0x7c);
  }
  if (*(int *)(unaff_x20 + 0x80) != 0) {
    *(int *)(unaff_x21 + 0x80) = *(int *)(unaff_x20 + 0x80);
  }
  func_0x004e4fa8();
  if ((extraout_x8 & 1) != 0) {
    func_0x004e4fd0();
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



/* Entry: 004e2f7c; end: 004e300f;  */

void FUN_004e2f7c(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x004e4fbc();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004e524c();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_004e4dec();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_004e3010();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_004e4dec();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_004e3010();
      }
    }
  }
  func_0x004e4fa8();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x004e4fd0();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004e3010; end: 004e3037;  */

void FUN_004e3010(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
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



/* Entry: 004e3038; end: 004e305b;  */

undefined8 FUN_004e3038(undefined8 param_1)

{
  func_0x004e5020();
  return param_1;
}



/* Entry: 004e305c; end: 004e305f;  */

undefined8 FUN_004e305c(undefined8 param_1)

{
  func_0x004e5020();
  return param_1;
}



/* Entry: 004e3060; end: 004e3073;  */

void FUN_004e3060(void)

{
  FUN_004e3038();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e3074; end: 004e3097;  */

undefined ** FUN_004e3074(void)

{
  return &PTR_DAT_009f2e90;
}



/* Entry: 004e3098; end: 004e3117;  */

long * FUN_004e3098(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004e4f50();
  if ((int)param_1[3] != 0) {
    func_0x004e4eb0();
    func_0x004e5100();
    func_0x004e4f90();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x004e4eb0();
    func_0x004e50b8();
    func_0x004e4f00();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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
  return param_4;
}



/* Entry: 004e3118; end: 004e317f;  */

ulong FUN_004e3118(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)uVar1;
  return uVar1;
}



/* Entry: 004e3180; end: 004e31c3;  */

long FUN_004e3180(long param_1)

{
  func_0x004e5020();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004e3038();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004e3038();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004e31c4; end: 004e31c7;  */

long FUN_004e31c4(long param_1)

{
  func_0x004e5020();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004e3038();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004e3038();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004e31c8; end: 004e31db;  */

void FUN_004e31c8(void)

{
  FUN_004e3180();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e31dc; end: 004e31e7;  */

undefined ** FUN_004e31dc(void)

{
  return &PTR_DAT_009f2ee8;
}



/* Entry: 004e31e8; end: 004e32df;  */

long * FUN_004e31e8(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004e4f50();
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x1c);
    param_4 = (long *)((long)&MACH_HEADER.magic + 1);
    func_0x004e5018();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x1c);
    param_4 = (long *)((long)&MACH_HEADER.magic + 2);
    func_0x004e5018();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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
  return param_4;
}



/* Entry: 004e32e0; end: 004e32fb;  */

long FUN_004e32e0(long param_1)

{
  long extraout_x8;
  
  FUN_004e3118();
  FUN_004e4e48();
  return param_1 + extraout_x8;
}



/* Entry: 004e32fc; end: 004e32ff;  */

void FUN_004e32fc(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x004e4fbc();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004e524c();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_004e4dec();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_004e3010();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_004e4dec();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_004e3010();
      }
    }
  }
  func_0x004e4fa8();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x004e4fd0();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004e3300; end: 004e3323;  */

undefined8 FUN_004e3300(undefined8 param_1)

{
  func_0x004e5020();
  return param_1;
}



/* Entry: 004e3324; end: 004e3327;  */

undefined8 FUN_004e3324(undefined8 param_1)

{
  func_0x004e5020();
  return param_1;
}



/* Entry: 004e3328; end: 004e333b;  */

void FUN_004e3328(void)

{
  FUN_004e3300();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e333c; end: 004e3347;  */

undefined ** FUN_004e333c(void)

{
  return &PTR_DAT_009f2f48;
}



/* Entry: 004e3348; end: 004e33cb;  */

long * FUN_004e3348(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004e4f50();
  if ((char)param_1[3] == '\x01') {
    func_0x004e4eb0();
    func_0x004e5100();
    func_0x004e4f0c();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x004e4eb0();
    func_0x004e50b8();
    func_0x004e4f00();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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
  return param_4;
}



/* Entry: 004e33cc; end: 004e3407;  */

long FUN_004e33cc(long param_1)

{
  long extraout_x8;
  long lVar1;
  ulong extraout_x9;
  long lVar2;
  
  func_0x004e53d4();
  lVar1 = extraout_x8 + (ulong)*(byte *)(param_1 + 0x18) * 2;
  if ((extraout_x9 & 1) != 0) {
    lVar2 = (long)*(char *)((extraout_x9 & 0xfffffffffffffffe) + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)((extraout_x9 & 0xfffffffffffffffe) + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar1;
  return lVar1;
}


