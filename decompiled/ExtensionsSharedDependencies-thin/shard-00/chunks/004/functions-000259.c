/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0051c78c; end: 0051c823;  */

void FUN_0051c78c(ulong *param_1,long param_2)

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



/* Entry: 0051c824; end: 0051c98b;  */

undefined8 * FUN_0051c824(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_009ff750;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x0051d888();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = param_2;
  FUN_0051d4f4(param_1 + 3,param_3 + 0x18);
  FUN_0048cf2c(param_1 + 6,param_2,param_3 + 0x30);
  FUN_0048ece4(param_1 + 9,param_2,param_3 + 0x48);
  *(undefined4 *)(param_1 + 0xb) = 0;
  lVar2 = param_3 + 0x60;
  func_0x0051d904();
  param_1[0xc] = lVar2;
  lVar2 = param_3 + 0x68;
  func_0x0051d904();
  param_1[0xd] = lVar2;
  lVar2 = param_3 + 0x70;
  func_0x0051d904();
  param_1[0xe] = lVar2;
  lVar2 = param_3 + 0x78;
  func_0x0051d904();
  param_1[0xf] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x0051bbb0(param_2,*(undefined8 *)(param_3 + 0x80));
  }
  param_1[0x10] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x0051d6b8(param_2,*(undefined8 *)(param_3 + 0x88));
  }
  param_1[0x11] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x0051d734(param_2,*(undefined8 *)(param_3 + 0x90));
  }
  param_1[0x12] = param_2;
  uVar4 = *(undefined8 *)(param_3 + 0xa0);
  uVar3 = *(undefined8 *)(param_3 + 0x98);
  uVar6 = *(undefined8 *)(param_3 + 0xb0);
  uVar5 = *(undefined8 *)(param_3 + 0xa8);
  uVar8 = *(undefined8 *)(param_3 + 0xc0);
  uVar7 = *(undefined8 *)(param_3 + 0xb8);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_3 + 200);
  param_1[0x18] = uVar8;
  param_1[0x17] = uVar7;
  param_1[0x16] = uVar6;
  param_1[0x15] = uVar5;
  param_1[0x14] = uVar4;
  param_1[0x13] = uVar3;
  return param_1;
}



/* Entry: 0051c98c; end: 0051c9b7;  */

undefined8 FUN_0051c98c(undefined8 param_1)

{
  func_0x0051d8fc();
  FUN_0051c9b8(param_1);
  return param_1;
}



/* Entry: 0051c9b8; end: 0051ca27;  */

long FUN_0051c9b8(long param_1)

{
  func_0x00532f74(param_1 + 0x60);
  func_0x00532f74(param_1 + 0x68);
  func_0x00532f74(param_1 + 0x70);
  func_0x00532f74(param_1 + 0x78);
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_0051b990();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_0051c244();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_0051c534();
  }
  __ZdlPv();
  FUN_0048ed64(param_1 + 0x48);
  FUN_00437b14(param_1 + 0x30);
  FUN_0051d524(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 0051ca28; end: 0051ca2b;  */

undefined8 FUN_0051ca28(undefined8 param_1)

{
  func_0x0051d8fc();
  FUN_0051c9b8(param_1);
  return param_1;
}



/* Entry: 0051ca2c; end: 0051ca3f;  */

void FUN_0051ca2c(void)

{
  FUN_0051c98c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0051ca40; end: 0051ca4b;  */

undefined ** FUN_0051ca40(void)

{
  return &PTR_DAT_009ff8a0;
}



/* Entry: 0051ca4c; end: 0051cb07;  */

void FUN_0051ca4c(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    FUN_00437de0(param_1 + 0x18);
  }
  FUN_0048cfec(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x48) = 0;
  FUN_00532fa8(param_1 + 0x60);
  FUN_00532fa8(param_1 + 0x68);
  FUN_00532fa8(param_1 + 0x70);
  FUN_00532fa8(param_1 + 0x78);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0051ba28(*(undefined8 *)(param_1 + 0x80));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_0051c2bc(*(undefined8 *)(param_1 + 0x88));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_0051c5ac(*(undefined8 *)(param_1 + 0x90));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
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
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 0051cb08; end: 0051cfd3;  */

section * FUN_0051cb08(section *param_1,section *param_2,section *param_3)

{
  section *psVar1;
  int *piVar2;
  ulong *puVar3;
  qword *pqVar4;
  section *psVar5;
  section *psVar6;
  qword qVar7;
  section *psVar8;
  ulong uVar9;
  ulong uVar10;
  long extraout_x8;
  dword *pdVar11;
  dword dVar12;
  uint uVar13;
  int iVar14;
  long unaff_x22;
  undefined8 *puVar15;
  char *pcVar16;
  int *piVar17;
  int iVar18;
  section *psVar19;
  long lVar20;
  
  psVar19 = param_1;
  psVar6 = param_2;
  psVar8 = param_3;
  func_0x0051d860(*(undefined8 *)param_1[1].segname);
  if ((long)psVar6 < 0) {
    psVar6 = (section *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_0051cb58;
  }
  else if ((int)psVar6 != 0) {
LAB_0051cb58:
    func_0x0051d828();
    psVar6 = (section *)((long)&MACH_HEADER.magic + 1);
    psVar19 = param_3;
    func_0x0051d804();
    param_2 = psVar19;
  }
  func_0x0051d860(*(undefined8 *)(param_1[1].segname + 8));
  if ((long)psVar6 < 0) {
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_0051cb98;
  }
  else if ((int)psVar6 != 0) {
LAB_0051cb98:
    func_0x0051d828();
    psVar19 = param_3;
    func_0x0051d804(param_3,2);
    param_2 = psVar19;
  }
  lVar20._0_4_ = param_1[1].reserved2;
  lVar20._4_4_ = param_1[1].reserved3;
  if (lVar20 != 0) {
    psVar19 = param_3;
    FUN_00435f80();
    psVar8 = param_2;
    param_2 = psVar19;
  }
  psVar6 = *(section **)param_1[2].sectname;
  if (psVar6 != (section *)0x0) {
    psVar19 = param_3;
    FUN_004383e0();
    psVar8 = param_2;
    param_2 = psVar19;
  }
  uVar13 = *(uint *)param_1->segname;
  if ((uVar13 & 1) != 0) {
    psVar6 = *(section **)&param_1[1].offset;
    psVar8 = (section *)(ulong)(uint)psVar6->addr;
    psVar19 = (section *)((long)&MACH_HEADER.cputype + 1);
    func_0x0051d810();
    param_2 = psVar19;
  }
  psVar5 = psVar19;
  if (*(int *)(param_1[2].sectname + 8) != 0) {
    func_0x0051d7b0();
    psVar5 = (section *)(segment_command_00000020.segname + 8);
    func_0x00487cbc();
    func_0x0051d7f8();
    psVar6 = psVar19;
    param_2 = psVar5;
  }
  qVar7 = param_1->addr;
  puVar15 = (undefined8 *)0x0;
  while (dVar12 = (dword)puVar15, (dword)qVar7 != dVar12) {
    uVar9 = *(ulong *)((long)param_1->segname + 8);
    puVar3 = (ulong *)((long)param_1->segname + 8);
    if ((uVar9 & 1) != 0) {
      puVar3 = (ulong *)(uVar9 + (long)(int)dVar12 * 8 + 7);
    }
    psVar6 = (section *)*puVar3;
    psVar8 = (section *)(ulong)*(dword *)((long)&psVar6->addr + 4);
    psVar5 = (section *)((long)&MACH_HEADER.cputype + 3);
    func_0x0051d810();
    param_2 = psVar5;
    puVar15 = (undefined8 *)(ulong)(dVar12 + 1);
  }
  func_0x0051d860(param_1[1].addr);
  if ((long)psVar6 < 0) {
    psVar6 = (section *)0x0;
    if (puVar15[1] != 0) {
      puVar15 = (undefined8 *)*puVar15;
      goto LAB_0051cc90;
    }
  }
  else if ((int)psVar6 != 0) {
LAB_0051cc90:
    func_0x0051d828(puVar15);
    psVar6 = (section *)&MACH_HEADER.cpusubtype;
    psVar5 = param_3;
    func_0x0051d804();
    param_2 = psVar5;
  }
  lVar20 = 8;
  pcVar16 = "snapchat.map.mapspoiservice.PointOfInterest.snap_ids";
  for (uVar9 = (ulong)(param_1->reloff & ((int)param_1->reloff >> 0x1f ^ 0xffffffffU)); uVar9 != 0;
      uVar9 = uVar9 - 1) {
    uVar10 = *(ulong *)&param_1->offset;
    pdVar11 = &param_1->offset;
    if ((uVar10 & 1) != 0) {
      pdVar11 = (dword *)(uVar10 + lVar20 + -1);
    }
    psVar8 = *(section **)pdVar11;
    qVar7 = (qword)*(char *)((long)psVar8->segname + 7);
    psVar6 = psVar8;
    if ((long)qVar7 < 0) {
      qVar7 = *(qword *)((long)psVar8->sectname + 8);
      psVar6 = *(section **)psVar8->sectname;
    }
    FUN_0054ddb8(psVar6,qVar7,1,"snapchat.map.mapspoiservice.PointOfInterest.snap_ids");
    psVar19 = (section *)(long)*(char *)((long)psVar8->segname + 7);
    if ((((long)psVar19 < 0) &&
        (psVar19 = *(section **)((long)psVar8->sectname + 8), 0x7f < (long)psVar19)) ||
       ((long)((*(qword *)param_3->sectname - (long)param_2) + 0xe) < (long)psVar19)) {
      psVar6 = (section *)((long)&MACH_HEADER.cpusubtype + 1);
      psVar5 = param_3;
      func_0x0054f030();
      param_2 = psVar5;
    }
    else {
      param_2->sectname[0] = 0x4a;
      *(char *)((long)param_2->sectname + 1) = (char)psVar19;
      psVar6 = psVar8;
      if (*(char *)((long)psVar8->segname + 7) < '\0') {
        psVar6 = *(section **)psVar8->sectname;
      }
      psVar1 = (section *)((long)param_2->sectname + 2);
      psVar5 = psVar1;
      psVar8 = psVar19;
      _memcpy();
      param_2 = (section *)((long)psVar19->sectname + (long)psVar1->sectname);
    }
    lVar20 = lVar20 + 8;
  }
  psVar19 = psVar5;
  if (*(long *)param_1[2].segname != 0) {
    func_0x0051d7b0();
    pcVar16 = *(char **)param_1[2].segname;
    psVar19 = (section *)((long)&segment_command_00000020.filesize + 1);
    func_0x00487cbc();
    param_2 = (section *)((long)psVar19->sectname + 8);
    *(char **)psVar19->sectname = pcVar16;
    psVar6 = psVar5;
  }
  func_0x0051d860(param_1[1].size);
  if ((long)psVar6 < 0) {
    if (*(long *)(pcVar16 + 8) == 0) goto LAB_0051cde8;
    pcVar16 = *(char **)pcVar16;
  }
  else if ((int)psVar6 == 0) goto LAB_0051cde8;
  func_0x0051d828(pcVar16);
  psVar19 = param_3;
  func_0x0051d804(param_3,0xb);
  param_2 = psVar19;
LAB_0051cde8:
  psVar6 = psVar19;
  if (*(int *)(param_1[2].sectname + 0xc) != 0) {
    func_0x0051d7b0();
    psVar6 = (section *)&segment_command_00000020.nsects;
    func_0x00487cbc(0x60,psVar19);
    func_0x0051d7f8();
    param_2 = psVar6;
  }
  psVar19 = psVar6;
  if (*(char *)((long)&param_1[2].addr + 4) == '\x01') {
    func_0x0051d7b0();
    psVar19 = &section_00000068;
    func_0x00487cbc(0x68,psVar6);
    func_0x0051d940();
    param_2 = psVar19;
  }
  psVar6 = psVar19;
  if ((int)param_1[2].addr != 0) {
    func_0x0051d7b0();
    psVar6 = (section *)(section_00000068.sectname + 8);
    func_0x00487cbc(0x70,psVar19);
    func_0x0051d7f8();
    param_2 = psVar6;
  }
  if (*(long *)(param_1[2].segname + 8) != 0) {
    psVar6 = param_3;
    FUN_0051cfd4();
    psVar8 = param_2;
    param_2 = psVar6;
  }
  if ((uVar13 >> 1 & 1) != 0) {
    psVar8 = (section *)(ulong)*(uint *)(*(long *)&param_1[1].reloff + 0x28);
    psVar6 = (section *)&MACH_HEADER.ncmds;
    func_0x0051d810();
    param_2 = psVar6;
  }
  psVar19 = psVar6;
  if ((int)param_1[2].size != 0) {
    func_0x0051d7b0();
    psVar19 = (section *)&section_00000068.addr;
    func_0x00487cbc(0x88,psVar6);
    func_0x0051d7f8();
    param_2 = psVar19;
  }
  if ((uVar13 >> 2 & 1) != 0) {
    psVar8 = (section *)(ulong)*(uint *)(*(long *)&param_1[1].flags + 0x28);
    psVar19 = (section *)((long)&MACH_HEADER.ncmds + 2);
    func_0x0051d810();
    param_2 = psVar19;
  }
  uVar13 = *(uint *)(param_1[1].sectname + 8);
  if (uVar13 != 0) {
    func_0x0051d7b0();
    pdVar11 = (dword *)((long)psVar19->sectname + 3);
    *(undefined2 *)psVar19->sectname = 0x19a;
    for (; 0x7f < uVar13; uVar13 = uVar13 >> 7) {
      *(byte *)((long)pdVar11 + -1) = (byte)uVar13 | 0x80;
      pdVar11 = (dword *)((long)pdVar11 + 1);
    }
    *(byte *)((long)pdVar11 + -1) = (byte)uVar13;
    piVar17 = *(int **)param_1[1].sectname;
    piVar2 = piVar17 + (int)param_1->reserved2;
    do {
      func_0x0051d7b0();
      uVar9 = (ulong)*piVar17;
      psVar6 = psVar19;
      while( true ) {
        param_2 = (section *)((long)psVar6->sectname + 1);
        if (uVar9 < 0x80) break;
        psVar6->sectname[0] = (byte)uVar9 | 0x80;
        uVar9 = uVar9 >> 7;
        psVar6 = param_2;
      }
      piVar17 = piVar17 + 1;
      psVar6->sectname[0] = (byte)uVar9;
    } while (piVar17 < piVar2);
  }
  if (*(char *)((long)&param_1[2].addr + 5) == '\x01') {
    func_0x0051d7b0();
    param_2 = (section *)&section_00000068.reloff;
    func_0x00487cbc(0xa0,psVar19);
    func_0x0051d940();
  }
  if ((*(qword *)((long)param_1->sectname + 8) & 1) == 0) {
    return param_2;
  }
  func_0x0051d9b4();
  if ((long)psVar8 < 0) {
    lVar20 = *(long *)(extraout_x8 + 8);
    psVar8 = *(section **)(extraout_x8 + 0x10);
  }
  else {
    lVar20 = extraout_x8 + 8;
  }
  if ((long)(int)psVar8 <= (long)(*(qword *)param_3->sectname - (long)param_2)) {
    _memcpy(param_2,lVar20,(ulong)psVar8 & 0xffffffff);
    return (section *)((long)param_2->sectname + (long)(int)psVar8);
  }
  while( true ) {
    iVar18 = ((int)*(qword *)param_3->sectname - (int)param_2) + 0x10;
    iVar14 = (int)psVar8;
    psVar8 = (section *)(ulong)(uint)(iVar14 - iVar18);
    if (iVar14 - iVar18 == 0 || iVar14 < iVar18) break;
    func_0x0054f690();
    pqVar4 = (qword *)param_2->sectname;
    param_2 = param_3;
    func_0x0054ed58(param_3,(undefined1 *)((long)pqVar4 + (long)iVar18));
  }
  func_0x0054f690();
  return (section *)((long)param_2->sectname + (long)iVar14);
}



/* Entry: 0051cfd4; end: 0051d00b;  */

void FUN_0051cfd4(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  char *pcVar1;
  
  func_0x00487c24(param_1,param_3);
  pcVar1 = section_00000068.segname;
  func_0x00487cbc(0x78,param_1);
  for (; 0x7f < param_2; param_2 = param_2 >> 7) {
    *pcVar1 = (byte)param_2 | 0x80;
    pcVar1 = pcVar1 + 1;
  }
  *pcVar1 = (byte)param_2;
  return;
}



/* Entry: 0051d00c; end: 0051d2a3;  */

void FUN_0051d00c(ulong param_1)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_w8;
  undefined4 uVar4;
  int extraout_w8_00;
  int iVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  int extraout_w9;
  int extraout_w9_00;
  ulong uVar6;
  long lVar7;
  long extraout_x9;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  uVar6 = *(ulong *)(param_1 + 0x18);
  lVar9 = (long)*(int *)(param_1 + 0x20);
  puVar1 = (ulong *)(param_1 + 0x18);
  if ((uVar6 & 1) != 0) {
    puVar1 = (ulong *)(uVar6 + 7);
  }
  uVar6 = param_1;
  for (lVar11 = lVar9 << 3; lVar11 != 0; lVar11 = lVar11 + -8) {
    uVar6 = *puVar1;
    FUN_0051c144();
    lVar9 = uVar6 + lVar9 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6);
    puVar1 = puVar1 + 1;
  }
  uVar2 = *(uint *)(param_1 + 0x38);
  lVar9 = lVar9 + (ulong)uVar2;
  lVar11 = 8;
  for (uVar10 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar10 != 0;
      uVar10 = uVar10 - 1) {
    uVar6 = *(ulong *)(param_1 + 0x30);
    puVar1 = (ulong *)(param_1 + 0x30);
    if ((uVar6 & 1) != 0) {
      puVar1 = (ulong *)(uVar6 + lVar11 + -1);
    }
    uVar6 = *puVar1;
    FUN_0048910c();
    lVar9 = uVar6 + lVar9;
    lVar11 = lVar11 + 8;
  }
  lVar7 = 0;
  lVar11 = 0;
  for (lVar8 = (long)*(int *)(param_1 + 0x48); lVar8 != 0; lVar8 = lVar8 + -1) {
    lVar11 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x50) + (lVar7 >> 0x1e))) * -9
                     + 0x280U >> 6) + lVar11;
    lVar7 = lVar7 + 0x100000000;
  }
  iVar5 = (int)lVar11 + (int)lVar9;
  uVar4 = 0;
  if (lVar11 != 0) {
    func_0x0051d994();
    iVar5 = iVar5 + extraout_w9 + 2;
    uVar4 = extraout_w8;
  }
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  func_0x0051d86c(*(undefined8 *)(param_1 + 0x60));
  lVar9 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar9 = *(long *)(uVar6 + 8);
  }
  if (lVar9 != 0) {
    FUN_0048910c();
    func_0x0051d91c();
  }
  func_0x0051d86c(*(undefined8 *)(param_1 + 0x68));
  lVar9 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar9 = *(long *)(uVar6 + 8);
  }
  if (lVar9 != 0) {
    FUN_0048910c();
    func_0x0051d91c();
  }
  func_0x0051d86c(*(undefined8 *)(param_1 + 0x70));
  lVar9 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar9 = *(long *)(uVar6 + 8);
  }
  if (lVar9 != 0) {
    FUN_0048910c();
    func_0x0051d91c();
  }
  func_0x0051d86c(*(undefined8 *)(param_1 + 0x78));
  lVar9 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar9 = *(long *)(uVar6 + 8);
  }
  if (lVar9 != 0) {
    FUN_0048910c();
    func_0x0051d91c();
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 7) != 0) {
    if ((uVar2 & 1) != 0) {
      FUN_0051bb34(*(undefined8 *)(param_1 + 0x80));
      func_0x0051d91c();
    }
    if ((uVar2 >> 1 & 1) != 0) {
      FUN_0051c3fc(*(undefined8 *)(param_1 + 0x88));
      func_0x0051d8ac();
    }
    if ((uVar2 >> 2 & 1) != 0) {
      FUN_0051c6ec(*(undefined8 *)(param_1 + 0x90));
      func_0x0051d8ac();
    }
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    func_0x0051d928();
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    func_0x0051d928();
  }
  if (*(int *)(param_1 + 0xa8) != 0) {
    func_0x0051d8e0();
  }
  if (*(int *)(param_1 + 0xac) != 0) {
    func_0x0051d8e0();
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    iVar5 = iVar5 + 9;
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    iVar5 = ((int)LZCOUNT(*(long *)(param_1 + 0xb8)) * -9 + 0x2c0U >> 6) + iVar5;
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    func_0x0051d994();
    iVar5 = extraout_w8_00 + extraout_w9_00 + 1;
  }
  iVar5 = iVar5 + (uint)*(byte *)(param_1 + 0xc4) * 2;
  iVar3 = iVar5 + 3;
  if (*(char *)(param_1 + 0xc5) == '\0') {
    iVar3 = iVar5;
  }
  if (*(int *)(param_1 + 200) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 200)) * -9 + 0x280U >> 6) + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0051d988();
    lVar9 = extraout_x8_03;
    if (extraout_x8_03 < 0) {
      lVar9 = *(long *)(extraout_x9 + 0x10);
    }
    iVar3 = (int)lVar9 + iVar3;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return;
}



/* Entry: 0051d2a4; end: 0051d2a7;  */

void FUN_0051d2a4(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  FUN_0051d4f4(param_1 + 0x18,param_2 + 0x18);
  FUN_0048cf14(param_1 + 0x30,param_2 + 0x30);
  lVar3 = param_2 + 0x48;
  FUN_0048ebf4(param_1 + 0x48);
  func_0x0051d854(*(undefined8 *)(param_2 + 0x60));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0051d848();
    }
    func_0x00532e08(param_1 + 0x60);
  }
  func_0x0051d854(*(undefined8 *)(param_2 + 0x68));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0051d848();
    }
    func_0x00532e08(param_1 + 0x68);
  }
  func_0x0051d854(*(undefined8 *)(param_2 + 0x70));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0051d848();
    }
    func_0x00532e08(param_1 + 0x70);
  }
  func_0x0051d854(*(undefined8 *)(param_2 + 0x78));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0051d848();
    }
    func_0x00532e08(param_1 + 0x78);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar2 = uVar5;
        func_0x0051bbb0(uVar5,*(undefined8 *)(param_2 + 0x80));
        *(ulong *)(param_1 + 0x80) = uVar2;
      }
      else {
        func_0x0051b954();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x88) == 0) {
        uVar2 = uVar5;
        func_0x0051d6b8(uVar5,*(undefined8 *)(param_2 + 0x88));
        *(ulong *)(param_1 + 0x88) = uVar2;
      }
      else {
        FUN_0051c49c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x90) == 0) {
        func_0x0051d734(uVar5,*(undefined8 *)(param_2 + 0x90));
        *(ulong *)(param_1 + 0x90) = uVar5;
      }
      else {
        FUN_0051c78c();
      }
    }
  }
  if (*(long *)(param_2 + 0x98) != 0) {
    *(long *)(param_1 + 0x98) = *(long *)(param_2 + 0x98);
  }
  if (*(long *)(param_2 + 0xa0) != 0) {
    *(long *)(param_1 + 0xa0) = *(long *)(param_2 + 0xa0);
  }
  if (*(int *)(param_2 + 0xa8) != 0) {
    *(int *)(param_1 + 0xa8) = *(int *)(param_2 + 0xa8);
  }
  if (*(int *)(param_2 + 0xac) != 0) {
    *(int *)(param_1 + 0xac) = *(int *)(param_2 + 0xac);
  }
  if (*(long *)(param_2 + 0xb0) != 0) {
    *(long *)(param_1 + 0xb0) = *(long *)(param_2 + 0xb0);
  }
  if (*(long *)(param_2 + 0xb8) != 0) {
    *(long *)(param_1 + 0xb8) = *(long *)(param_2 + 0xb8);
  }
  if (*(int *)(param_2 + 0xc0) != 0) {
    *(int *)(param_1 + 0xc0) = *(int *)(param_2 + 0xc0);
  }
  if (*(char *)(param_2 + 0xc4) == '\x01') {
    *(undefined1 *)(param_1 + 0xc4) = 1;
  }
  if (*(char *)(param_2 + 0xc5) == '\x01') {
    *(undefined1 *)(param_1 + 0xc5) = 1;
  }
  if (*(int *)(param_2 + 200) != 0) {
    *(int *)(param_1 + 200) = *(int *)(param_2 + 200);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 0051d2a8; end: 0051d4f3;  */

void FUN_0051d2a8(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  FUN_0051d4f4(param_1 + 0x18,param_2 + 0x18);
  FUN_0048cf14(param_1 + 0x30,param_2 + 0x30);
  lVar3 = param_2 + 0x48;
  FUN_0048ebf4(param_1 + 0x48);
  func_0x0051d854(*(undefined8 *)(param_2 + 0x60));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0051d848();
    }
    func_0x00532e08(param_1 + 0x60);
  }
  func_0x0051d854(*(undefined8 *)(param_2 + 0x68));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0051d848();
    }
    func_0x00532e08(param_1 + 0x68);
  }
  func_0x0051d854(*(undefined8 *)(param_2 + 0x70));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0051d848();
    }
    func_0x00532e08(param_1 + 0x70);
  }
  func_0x0051d854(*(undefined8 *)(param_2 + 0x78));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0051d848();
    }
    func_0x00532e08(param_1 + 0x78);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar2 = uVar5;
        func_0x0051bbb0(uVar5,*(undefined8 *)(param_2 + 0x80));
        *(ulong *)(param_1 + 0x80) = uVar2;
      }
      else {
        func_0x0051b954();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x88) == 0) {
        uVar2 = uVar5;
        func_0x0051d6b8(uVar5,*(undefined8 *)(param_2 + 0x88));
        *(ulong *)(param_1 + 0x88) = uVar2;
      }
      else {
        FUN_0051c49c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x90) == 0) {
        func_0x0051d734(uVar5,*(undefined8 *)(param_2 + 0x90));
        *(ulong *)(param_1 + 0x90) = uVar5;
      }
      else {
        FUN_0051c78c();
      }
    }
  }
  if (*(long *)(param_2 + 0x98) != 0) {
    *(long *)(param_1 + 0x98) = *(long *)(param_2 + 0x98);
  }
  if (*(long *)(param_2 + 0xa0) != 0) {
    *(long *)(param_1 + 0xa0) = *(long *)(param_2 + 0xa0);
  }
  if (*(int *)(param_2 + 0xa8) != 0) {
    *(int *)(param_1 + 0xa8) = *(int *)(param_2 + 0xa8);
  }
  if (*(int *)(param_2 + 0xac) != 0) {
    *(int *)(param_1 + 0xac) = *(int *)(param_2 + 0xac);
  }
  if (*(long *)(param_2 + 0xb0) != 0) {
    *(long *)(param_1 + 0xb0) = *(long *)(param_2 + 0xb0);
  }
  if (*(long *)(param_2 + 0xb8) != 0) {
    *(long *)(param_1 + 0xb8) = *(long *)(param_2 + 0xb8);
  }
  if (*(int *)(param_2 + 0xc0) != 0) {
    *(int *)(param_1 + 0xc0) = *(int *)(param_2 + 0xc0);
  }
  if (*(char *)(param_2 + 0xc4) == '\x01') {
    *(undefined1 *)(param_1 + 0xc4) = 1;
  }
  if (*(char *)(param_2 + 0xc5) == '\x01') {
    *(undefined1 *)(param_1 + 0xc5) = 1;
  }
  if (*(int *)(param_2 + 200) != 0) {
    *(int *)(param_1 + 200) = *(int *)(param_2 + 200);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 0051d4f4; end: 0051d523;  */

void FUN_0051d4f4(long *param_1,long param_2)

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



/* Entry: 0051d524; end: 0051d553;  */

long * FUN_0051d524(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0054cf94(param_1);
  }
  return param_1;
}



/* Entry: 0051d554; end: 0051d6b7;  */

long FUN_0051d554(long param_1)

{
  FUN_0048ed64(param_1 + 0x38);
  FUN_00437b14(param_1 + 0x20);
  FUN_0051d524(param_1 + 8);
  return param_1;
}



/* Entry: 0051d6b8; end: 0051d7af;  */

undefined8 * FUN_0051d6b8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x0051d8d0();
  }
  else {
    func_0x0051d81c();
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_009ff660;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x0051d888();
  }
  lVar2 = param_2 + 0x10;
  func_0x0051d880();
  puVar1[2] = lVar2;
  lVar2 = param_2 + 0x18;
  func_0x0051d880();
  puVar1[3] = lVar2;
  param_2 = param_2 + 0x20;
  func_0x0051d880();
  puVar1[4] = param_2;
  *(undefined4 *)(puVar1 + 5) = 0;
  return puVar1;
}



/* Entry: 0051d7b0; end: 0051da37;  */

ulong * FUN_0051d7b0(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *unaff_x19;
  ulong *unaff_x21;
  
  if (unaff_x21 < (ulong *)*unaff_x19) {
    return unaff_x21;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    FUN_0054ec3c();
    unaff_x21 = (ulong *)((long)puVar2 + (long)((int)unaff_x21 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= unaff_x21);
  return unaff_x21;
}



/* Entry: 0051da38; end: 0051da5f;  */

long FUN_0051da38(long param_1)

{
  FUN_00487580(param_1 + 8);
  return param_1;
}



/* Entry: 0051da60; end: 0051daaf;  */

undefined8 * FUN_0051da60(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_009ff960;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  func_0x0051d9c0(param_1,param_3);
  return param_1;
}



/* Entry: 0051dab0; end: 0051dab3;  */

long FUN_0051dab0(long param_1)

{
  FUN_00487580(param_1 + 8);
  return param_1;
}



/* Entry: 0051dab4; end: 0051dac7;  */

void FUN_0051dab4(void)

{
  FUN_0051da38();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0051dac8; end: 0051daeb;  */

undefined ** FUN_0051dac8(void)

{
  return &PTR_DAT_009ff9a0;
}



/* Entry: 0051daec; end: 0051dc2b;  */

long * FUN_0051daec(long *param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  
  plVar7 = param_1;
  if ((int)param_1[2] != 0) {
    plVar2 = param_1;
    FUN_0051dd14();
    plVar7 = (long *)((long)&MACH_HEADER.filetype + 1);
    func_0x00487cbc(0xd,plVar2);
    func_0x0051dd28();
  }
  plVar2 = plVar7;
  if (*(int *)((long)param_1 + 0x14) != 0) {
    FUN_0051dd14();
    plVar2 = (long *)((long)&MACH_HEADER.sizeofcmds + 1);
    func_0x00487cbc(0x15,plVar7);
    func_0x0051dd28();
  }
  plVar7 = plVar2;
  if ((int)param_1[3] != 0) {
    FUN_0051dd14();
    plVar7 = (long *)((long)&MACH_HEADER.reserved + 1);
    func_0x00487cbc(0x1d,plVar2);
    func_0x0051dd28();
  }
  plVar2 = plVar7;
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    FUN_0051dd14();
    plVar2 = (long *)((long)&segment_command_00000020.cmdsize + 1);
    func_0x00487cbc(0x25,plVar7);
    func_0x0051dd28();
  }
  plVar7 = plVar2;
  if ((char)param_1[4] == '\x01') {
    FUN_0051dd14();
    plVar7 = (long *)(ulong)*(byte *)(param_1 + 4);
    uVar3 = 0x28;
    func_0x00487cbc(0x28,plVar2);
    func_0x00487cbc(plVar7,uVar3);
    param_2 = plVar7;
  }
  if (*(int *)((long)param_1 + 0x24) != 0) {
    FUN_0051dd14();
    param_2 = (long *)(ulong)*(uint *)((long)param_1 + 0x24);
    uVar3 = 0x38;
    func_0x00487cbc(0x38,plVar7);
    func_0x00487ce8(param_2,uVar3);
  }
  if ((param_1[1] & 1U) != 0) {
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



/* Entry: 0051dc2c; end: 0051dcc7;  */

long FUN_0051dc2c(long param_1)

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
  lVar1 = lVar1 + (ulong)*(byte *)(param_1 + 0x20) * 2;
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x28) = (int)lVar1;
  return lVar1;
}



/* Entry: 0051dcc8; end: 0051dd13;  */

void FUN_0051dcc8(char *param_1)

{
  char *pcVar1;
  
  if (param_1 == (char *)0x0) {
    pcVar1 = segment_command_00000020.segname + 8;
    __Znwm();
  }
  else {
    pcVar1 = param_1;
    func_0x005510c4(param_1,0x30);
  }
  *(undefined ***)pcVar1 = &PTR_FUN_009ff960;
  *(char **)(pcVar1 + 8) = param_1;
  *(qword *)(pcVar1 + 0x18) = 0;
  *(qword *)(pcVar1 + 0x20) = 0;
  *(qword *)(pcVar1 + 0x10) = 0;
  *(dword *)(pcVar1 + 0x28) = 0;
  return;
}



/* Entry: 0051dd14; end: 0051dd33;  */

ulong * FUN_0051dd14(void)

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



/* Entry: 0051dd34; end: 0051dda3;  */

undefined8 * FUN_0051dd34(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_009ffa08;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_0054a3dc(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar2 = param_3 + 0x10;
  func_0x00487c6c(lVar2,param_2);
  param_1[2] = lVar2;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  uVar1 = *(undefined4 *)(param_3 + 0x20);
  param_1[3] = *(undefined8 *)(param_3 + 0x18);
  *(undefined4 *)(param_1 + 4) = uVar1;
  return param_1;
}



/* Entry: 0051dda4; end: 0051ddd3;  */

long FUN_0051dda4(long param_1)

{
  FUN_00487580(param_1 + 8);
  func_0x00532f74(param_1 + 0x10);
  return param_1;
}



/* Entry: 0051ddd4; end: 0051ddd7;  */

long FUN_0051ddd4(long param_1)

{
  FUN_00487580(param_1 + 8);
  func_0x00532f74(param_1 + 0x10);
  return param_1;
}



/* Entry: 0051ddd8; end: 0051ddeb;  */

void FUN_0051ddd8(void)

{
  FUN_0051dda4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0051ddec; end: 0051ddf7;  */

undefined ** FUN_0051ddec(void)

{
  return &PTR_DAT_009ffa48;
}



/* Entry: 0051ddf8; end: 0051de3b;  */

void FUN_0051ddf8(long param_1)

{
  ulong *puVar1;
  
  FUN_00532fa8(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
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



/* Entry: 0051de3c; end: 0051df37;  */

long * FUN_0051de3c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    plVar1 = param_3;
    func_0x00487c24(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x20);
    uVar2 = 8;
    func_0x00487cbc(8,plVar1);
    func_0x00487ce8(param_2,uVar2);
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 == 0) goto LAB_0051dedc;
    puVar3 = (undefined8 *)*puVar8;
  }
  else {
    puVar3 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_0051dedc;
  }
  FUN_0054ddb8(puVar3,lVar4,1,"ranking.core.CompositeStoryId.id");
  plVar1 = param_3;
  FUN_00435e9c(param_3,2,puVar8,param_2);
  param_2 = plVar1;
LAB_0051dedc:
  plVar1 = param_2;
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar1 = param_3;
    FUN_00435f80(param_3,*(long *)(param_1 + 0x18),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar1;
  }
  uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
  if ((long)uVar5 < 0) {
    lVar4 = *(long *)(uVar6 + 8);
    uVar5 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    lVar4 = uVar6 + 8;
  }
  if (*param_3 - (long)plVar1 < (long)(int)uVar5) {
    while( true ) {
      iVar9 = ((int)*param_3 - (int)plVar1) + 0x10;
      iVar7 = (int)uVar5;
      uVar5 = (ulong)(uint)(iVar7 - iVar9);
      if (iVar7 - iVar9 == 0 || iVar7 < iVar9) break;
      func_0x0054f690();
      lVar4 = (long)plVar1 + (long)iVar9;
      plVar1 = param_3;
      func_0x0054ed58(param_3,lVar4);
    }
    func_0x0054f690();
    return (long *)((long)plVar1 + (long)iVar7);
  }
  _memcpy(plVar1,lVar4,uVar5 & 0xffffffff);
  return (long *)((long)plVar1 + (long)(int)uVar5);
}



/* Entry: 0051df38; end: 0051dfdf;  */

void FUN_0051df38(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_0051df70;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_0051df70:
    iVar1 = 0;
    goto LAB_0051df74;
  }
  FUN_0048910c();
  iVar1 = (int)uVar2 + 1;
LAB_0051df74:
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x24) = iVar1;
  return;
}



/* Entry: 0051dfe0; end: 0051dfe3;  */

void FUN_0051dfe0(long param_1,long param_2)

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
  if (*(long *)(param_2 + 0x18) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
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



/* Entry: 0051dfe4; end: 0051e06b;  */

void FUN_0051dfe4(long param_1,long param_2)

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
  if (*(long *)(param_2 + 0x18) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
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



/* Entry: 0051e06c; end: 0051e073;  */

void FUN_0051e06c(undefined8 param_1,char *param_2)

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
  *(undefined ***)pcVar1 = &PTR_FUN_009ffa08;
  *(char **)(pcVar1 + 8) = param_2;
  *(qword *)(pcVar1 + 0x18) = 0;
  *(qword *)(pcVar1 + 0x20) = 0;
  *(undefined **)(pcVar1 + 0x10) = &DAT_00b69408;
  return;
}



/* Entry: 0051e074; end: 0051e0c3;  */

void FUN_0051e074(char *param_1)

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
  *(undefined ***)pcVar1 = &PTR_FUN_009ffa08;
  *(char **)(pcVar1 + 8) = param_1;
  *(qword *)(pcVar1 + 0x18) = 0;
  *(qword *)(pcVar1 + 0x20) = 0;
  *(undefined **)(pcVar1 + 0x10) = &DAT_00b69408;
  return;
}



/* Entry: 0051e0c4; end: 0051e153;  */

void FUN_0051e0c4(void)

{
  return;
}



/* Entry: 0051e154; end: 0051e17b;  */

long FUN_0051e154(long param_1)

{
  FUN_00487580(param_1 + 8);
  return param_1;
}



/* Entry: 0051e17c; end: 0051e1c3;  */

undefined8 * FUN_0051e17c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_009ffab0;
  param_1[1] = param_2;
  func_0x0051e9c8();
  func_0x0051e0d8();
  return param_1;
}



/* Entry: 0051e1c4; end: 0051e1c7;  */

long FUN_0051e1c4(long param_1)

{
  FUN_00487580(param_1 + 8);
  return param_1;
}



/* Entry: 0051e1c8; end: 0051e1db;  */

void FUN_0051e1c8(void)

{
  FUN_0051e154();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0051e1dc; end: 0051e207;  */

undefined ** FUN_0051e1dc(void)

{
  return &PTR_DAT_009ffb40;
}



/* Entry: 0051e208; end: 0051e31b;  */

long * FUN_0051e208(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  lVar1 = param_1;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar2 = param_1;
    FUN_0051e944();
    lVar1 = 9;
    func_0x00487cbc(9,lVar2);
    func_0x0051e980();
  }
  lVar2 = lVar1;
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0051e944();
    lVar2 = 0x11;
    func_0x00487cbc(0x11,lVar1);
    func_0x0051e980();
  }
  lVar1 = lVar2;
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_0051e944();
    lVar1 = 0x19;
    func_0x00487cbc(0x19,lVar2);
    func_0x0051e980();
  }
  lVar2 = lVar1;
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_0051e944();
    lVar2 = 0x21;
    func_0x00487cbc(0x21,lVar1);
    func_0x0051e980();
  }
  lVar1 = lVar2;
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_0051e944();
    lVar1 = 0x29;
    func_0x00487cbc(0x29,lVar2);
    func_0x0051e980();
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_0051e944();
    func_0x00487cbc(0x31,lVar1);
    func_0x0051e980();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar3 < 0) {
      lVar1 = *(long *)(uVar4 + 8);
      uVar3 = *(ulong *)(uVar4 + 0x10);
    }
    else {
      lVar1 = uVar4 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      while( true ) {
        iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar5 = (int)uVar3;
        uVar3 = (ulong)(uint)(iVar5 - iVar6);
        if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
        func_0x0054f690();
        lVar1 = (long)param_2 + (long)iVar6;
        param_2 = param_3;
        func_0x0054ed58(param_3,lVar1);
      }
      func_0x0054f690();
      return (long *)((long)param_2 + (long)iVar5);
    }
    _memcpy(param_2,lVar1,uVar3 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar3);
  }
  return param_2;
}



/* Entry: 0051e31c; end: 0051e39f;  */

long FUN_0051e31c(long param_1)

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
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = lVar1 + 9;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar1 = lVar1 + 9;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar1 = lVar1 + 9;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
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
  *(int *)(param_1 + 0x40) = (int)lVar1;
  return lVar1;
}



/* Entry: 0051e3a0; end: 0051e42b;  */

undefined8 * FUN_0051e3a0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_009ffb00;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_0054a3dc(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar1 = param_3 + 0x10;
  func_0x0051e970();
  param_1[2] = lVar1;
  lVar1 = param_3 + 0x18;
  func_0x0051e970();
  param_1[3] = lVar1;
  lVar1 = param_3 + 0x20;
  func_0x0051e970();
  param_1[4] = lVar1;
  lVar1 = param_3 + 0x28;
  func_0x0051e970();
  param_1[5] = lVar1;
  param_3 = param_3 + 0x30;
  func_0x0051e970();
  param_1[6] = param_3;
  *(undefined4 *)(param_1 + 7) = 0;
  return param_1;
}



/* Entry: 0051e42c; end: 0051e45b;  */

long FUN_0051e42c(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_0051e45c(param_1);
  return param_1;
}



/* Entry: 0051e45c; end: 0051e49b;  */

/* WARNING: Possible PIC construction at 0x0051e470: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0051e480: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0051e474) */
/* WARNING: Removing unreachable block (ram,0x0051e484) */

void FUN_0051e45c(long param_1)

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



/* Entry: 0051e49c; end: 0051e49f;  */

long FUN_0051e49c(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_0051e45c(param_1);
  return param_1;
}



/* Entry: 0051e4a0; end: 0051e4b3;  */

void FUN_0051e4a0(void)

{
  FUN_0051e42c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0051e4b4; end: 0051e4bf;  */

undefined ** FUN_0051e4b4(void)

{
  return &PTR_DAT_009ffb80;
}



/* Entry: 0051e4c0; end: 0051e51b;  */

void FUN_0051e4c0(long param_1)

{
  ulong *puVar1;
  
  FUN_00532fa8(param_1 + 0x10);
  FUN_00532fa8(param_1 + 0x18);
  FUN_00532fa8(param_1 + 0x20);
  FUN_00532fa8(param_1 + 0x28);
  FUN_00532fa8(param_1 + 0x30);
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



/* Entry: 0051e51c; end: 0051e6b3;  */

long * FUN_0051e51c(long param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  long unaff_x22;
  int iVar7;
  
  plVar2 = param_2;
  func_0x0051e998(*(undefined8 *)(param_1 + 0x10));
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_0051e55c;
  }
  else if ((int)plVar2 != 0) {
LAB_0051e55c:
    func_0x0051e978();
    plVar2 = (long *)((long)&MACH_HEADER.magic + 1);
    param_2 = param_3;
    func_0x0051e950();
  }
  func_0x0051e998(*(undefined8 *)(param_1 + 0x18));
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_0051e59c;
  }
  else if ((int)plVar2 != 0) {
LAB_0051e59c:
    func_0x0051e978();
    plVar2 = (long *)((long)&MACH_HEADER.magic + 2);
    param_2 = param_3;
    func_0x0051e950();
  }
  func_0x0051e998(*(undefined8 *)(param_1 + 0x20));
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_0051e5dc;
  }
  else if ((int)plVar2 != 0) {
LAB_0051e5dc:
    func_0x0051e978();
    plVar2 = (long *)((long)&MACH_HEADER.magic + 3);
    param_2 = param_3;
    func_0x0051e950();
  }
  func_0x0051e998(*(undefined8 *)(param_1 + 0x28));
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_0051e61c;
  }
  else if ((int)plVar2 != 0) {
LAB_0051e61c:
    func_0x0051e978();
    plVar2 = (long *)((long)&MACH_HEADER.cputype + 2);
    param_2 = param_3;
    func_0x0051e950();
  }
  func_0x0051e998(*(undefined8 *)(param_1 + 0x30));
  if ((long)plVar2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_0051e678;
  }
  else if ((int)plVar2 == 0) goto LAB_0051e678;
  func_0x0051e978();
  param_2 = param_3;
  func_0x0051e950(param_3,10);
LAB_0051e678:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
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
      func_0x0054f690();
      puVar1 = (undefined1 *)((long)param_2 + (long)iVar7);
      param_2 = param_3;
      func_0x0054ed58(param_3,puVar1);
    }
    func_0x0054f690();
    return (long *)((long)param_2 + (long)iVar6);
  }
  _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar4);
}



/* Entry: 0051e6b4; end: 0051e78b;  */

long FUN_0051e6b4(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = param_1;
  func_0x0051e98c(*(undefined8 *)(param_1 + 0x10));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar2 + 8);
  }
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    FUN_0048910c();
    lVar4 = lVar2 + 1;
  }
  func_0x0051e98c(*(undefined8 *)(param_1 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    FUN_0048910c();
    func_0x0051e9dc();
  }
  func_0x0051e98c(*(undefined8 *)(param_1 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    FUN_0048910c();
    func_0x0051e9dc();
  }
  func_0x0051e98c(*(undefined8 *)(param_1 + 0x28));
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    FUN_0048910c();
    func_0x0051e9dc();
  }
  func_0x0051e98c(*(undefined8 *)(param_1 + 0x30));
  lVar1 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    FUN_0048910c();
    func_0x0051e9dc();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x38) = (int)lVar4;
  return lVar4;
}



/* Entry: 0051e78c; end: 0051e78f;  */

void FUN_0051e78c(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  
  lVar1 = param_2;
  func_0x0051e9b0(*(undefined8 *)(param_2 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0051e9a4();
    }
    func_0x00532e08(param_1 + 0x10);
  }
  func_0x0051e9b0(*(undefined8 *)(param_2 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0051e9a4();
    }
    func_0x00532e08(param_1 + 0x18);
  }
  func_0x0051e9b0(*(undefined8 *)(param_2 + 0x20));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0051e9a4();
    }
    func_0x00532e08(param_1 + 0x20);
  }
  func_0x0051e9b0(*(undefined8 *)(param_2 + 0x28));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0051e9a4();
    }
    func_0x00532e08(param_1 + 0x28);
  }
  func_0x0051e9b0(*(undefined8 *)(param_2 + 0x30));
  lVar2 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0051e9a4();
    }
    func_0x00532e08(param_1 + 0x30);
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



/* Entry: 0051e790; end: 0051e897;  */

void FUN_0051e790(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  
  lVar1 = param_2;
  func_0x0051e9b0(*(undefined8 *)(param_2 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0051e9a4();
    }
    func_0x00532e08(param_1 + 0x10);
  }
  func_0x0051e9b0(*(undefined8 *)(param_2 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0051e9a4();
    }
    func_0x00532e08(param_1 + 0x18);
  }
  func_0x0051e9b0(*(undefined8 *)(param_2 + 0x20));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0051e9a4();
    }
    func_0x00532e08(param_1 + 0x20);
  }
  func_0x0051e9b0(*(undefined8 *)(param_2 + 0x28));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0051e9a4();
    }
    func_0x00532e08(param_1 + 0x28);
  }
  func_0x0051e9b0(*(undefined8 *)(param_2 + 0x30));
  lVar2 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0051e9a4();
    }
    func_0x00532e08(param_1 + 0x30);
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



/* Entry: 0051e898; end: 0051e8a7;  */

void FUN_0051e898(undefined8 param_1,qword *param_2)

{
  qword *pqVar1;
  
  if (param_2 == (qword *)0x0) {
    pqVar1 = &segment_command_00000020.fileoff;
    __Znwm();
  }
  else {
    pqVar1 = param_2;
    func_0x005510c4(param_2,0x48);
  }
  *pqVar1 = (qword)&PTR_FUN_009ffab0;
  pqVar1[1] = (qword)param_2;
  func_0x0051e9c8();
  return;
}



/* Entry: 0051e8a8; end: 0051e943;  */

void FUN_0051e8a8(qword *param_1)

{
  qword *pqVar1;
  
  if (param_1 == (qword *)0x0) {
    pqVar1 = &segment_command_00000020.fileoff;
    __Znwm();
  }
  else {
    pqVar1 = param_1;
    func_0x005510c4(param_1,0x48);
  }
  *pqVar1 = (qword)&PTR_FUN_009ffab0;
  pqVar1[1] = (qword)param_1;
  func_0x0051e9c8();
  return;
}



/* Entry: 0051e944; end: 0051e9e7;  */

ulong * FUN_0051e944(void)

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



/* Entry: 0051e9e8; end: 0051ea27;  */

long FUN_0051e9e8(long param_1)

{
  FUN_00487580(param_1 + 8);
  func_0x00532f74(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_00523568();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 0051ea28; end: 0051ea2b;  */

long FUN_0051ea28(long param_1)

{
  FUN_00487580(param_1 + 8);
  func_0x00532f74(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_00523568();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 0051ea2c; end: 0051ea3f;  */

void FUN_0051ea2c(void)

{
  FUN_0051e9e8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0051ea40; end: 0051ea4b;  */

undefined ** FUN_0051ea40(void)

{
  return &PTR_DAT_009ffc38;
}



/* Entry: 0051ea4c; end: 0051ea9f;  */

void FUN_0051ea4c(long param_1)

{
  ulong *puVar1;
  
  FUN_00532fa8(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00523600(*(undefined8 *)(param_1 + 0x20));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
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



/* Entry: 0051eaa0; end: 0051ebd7;  */

long * FUN_0051eaa0(long *param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  
  plVar2 = param_1;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    plVar2 = (long *)((long)&MACH_HEADER.magic + 1);
    func_0x0054dae0(1,param_1[4],*(undefined4 *)(param_1[4] + 0x20),param_2,param_3);
    param_2 = plVar2;
  }
  puVar10 = (undefined8 *)(param_1[3] & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar10 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar10[1];
    if (lVar5 == 0) goto LAB_0051eb30;
    puVar3 = (undefined8 *)*puVar10;
  }
  else {
    puVar3 = puVar10;
    if (*(char *)((long)puVar10 + 0x17) == '\0') goto LAB_0051eb30;
  }
  FUN_0054ddb8(puVar3,lVar5,1,"ranking.indexing.Hashtag.title");
  plVar2 = param_3;
  FUN_00435e9c(param_3,2,puVar10,param_2);
  param_2 = plVar2;
LAB_0051eb30:
  plVar8 = plVar2;
  if ((char)param_1[5] == '\x01') {
    func_0x0051ee48();
    plVar8 = (long *)(ulong)*(byte *)(param_1 + 5);
    uVar4 = 0x18;
    func_0x00487cbc(0x18,plVar2);
    func_0x00487cbc(plVar8,uVar4);
    param_2 = plVar8;
  }
  if (*(int *)((long)param_1 + 0x2c) != 0) {
    func_0x0051ee48();
    param_2 = (long *)(ulong)*(uint *)((long)param_1 + 0x2c);
    uVar4 = 0x20;
    func_0x00487cbc(0x20,plVar8);
    func_0x00487ce8(param_2,uVar4);
  }
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  uVar7 = param_1[1] & 0xfffffffffffffffe;
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
      iVar11 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar9 = (int)uVar6;
      uVar6 = (ulong)(uint)(iVar9 - iVar11);
      if (iVar9 - iVar11 == 0 || iVar9 < iVar11) break;
      func_0x0054f690();
      puVar1 = (undefined1 *)((long)param_2 + (long)iVar11);
      param_2 = param_3;
      func_0x0054ed58(param_3,puVar1);
    }
    func_0x0054f690();
    return (long *)((long)param_2 + (long)iVar9);
  }
  _memcpy(param_2,lVar5,uVar6 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar6);
}



/* Entry: 0051ebd8; end: 0051ec83;  */

void FUN_0051ebd8(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar3 + 0x17) < '\0') {
    if (*(long *)(uVar3 + 8) == 0) goto LAB_0051ec10;
  }
  else if (*(char *)(uVar3 + 0x17) == '\0') {
LAB_0051ec10:
    iVar2 = 0;
    goto LAB_0051ec14;
  }
  FUN_0048910c();
  iVar2 = (int)uVar3 + 1;
LAB_0051ec14:
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    FUN_0051ec84();
    iVar2 = iVar2 + iVar1 + 1;
  }
  iVar2 = iVar2 + (uint)*(byte *)(param_1 + 0x28) * 2;
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar2 = iVar2 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x2c)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar3 + 0x10);
    }
    iVar2 = (int)lVar4 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 0051ec84; end: 0051ecaf;  */

long FUN_0051ec84(long param_1)

{
  FUN_005236c0();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 0051ecb0; end: 0051ed9f;  */

void FUN_0051ecb0(long param_1,long param_2)

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
    func_0x00532e08(param_1 + 0x18,uVar3,uVar4);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x0051edfc(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      func_0x00523534();
    }
  }
  if (*(char *)(param_2 + 0x28) == '\x01') {
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
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



/* Entry: 0051eda0; end: 0051eda7;  */

void FUN_0051eda0(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  
  if (param_2 == (char *)0x0) {
    pcVar1 = segment_command_00000020.segname + 8;
    __Znwm();
  }
  else {
    pcVar1 = param_2;
    func_0x005510c4(param_2,0x30);
  }
  *(undefined ***)pcVar1 = &PTR_FUN_009ffbf8;
  *(char **)(pcVar1 + 8) = param_2;
  *(qword *)(pcVar1 + 0x10) = 0;
  *(qword *)(pcVar1 + 0x20) = 0;
  *(undefined8 *)(pcVar1 + 0x28) = 0;
  *(undefined **)(pcVar1 + 0x18) = &DAT_00b69408;
  return;
}



/* Entry: 0051eda8; end: 0051ee3f;  */

void FUN_0051eda8(char *param_1)

{
  char *pcVar1;
  
  if (param_1 == (char *)0x0) {
    pcVar1 = segment_command_00000020.segname + 8;
    __Znwm();
  }
  else {
    pcVar1 = param_1;
    func_0x005510c4(param_1,0x30);
  }
  *(undefined ***)pcVar1 = &PTR_FUN_009ffbf8;
  *(char **)(pcVar1 + 8) = param_1;
  *(qword *)(pcVar1 + 0x10) = 0;
  *(qword *)(pcVar1 + 0x20) = 0;
  *(undefined8 *)(pcVar1 + 0x28) = 0;
  *(undefined **)(pcVar1 + 0x18) = &DAT_00b69408;
  return;
}



/* Entry: 0051ee40; end: 0051ee53;  */

void FUN_0051ee40(void)

{
  return;
}



/* Entry: 0051ee54; end: 0051eec7;  */

undefined8 * FUN_0051ee54(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_009ffca0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_0054a3dc(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_004eb2b4(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  uVar2 = *(undefined8 *)(param_3 + 0x30);
  uVar1 = *(undefined8 *)(param_3 + 0x28);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_3 + 0x38);
  param_1[6] = uVar2;
  param_1[5] = uVar1;
  return param_1;
}



/* Entry: 0051eec8; end: 0051eef7;  */

long FUN_0051eec8(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_004eb4cc(param_1 + 0x10);
  return param_1;
}



/* Entry: 0051eef8; end: 0051eefb;  */

long FUN_0051eef8(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_004eb4cc(param_1 + 0x10);
  return param_1;
}



/* Entry: 0051eefc; end: 0051ef0f;  */

void FUN_0051eefc(void)

{
  FUN_0051eec8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0051ef10; end: 0051ef37;  */

undefined ** FUN_0051ef10(void)

{
  return &PTR_DAT_009ffce0;
}



/* Entry: 0051ef38; end: 0051f0cb;  */

segment_command *
FUN_0051ef38(segment_command *param_1,segment_command *param_2,segment_command *param_3)

{
  uint *puVar1;
  dword *pdVar2;
  segment_command *psVar3;
  segment_command *psVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  ulong uVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  
  psVar3 = param_1;
  if (param_1->fileoff != 0) {
    psVar3 = param_3;
    FUN_004363bc(param_3,param_1->fileoff,param_2);
    param_2 = psVar3;
  }
  psVar4 = psVar3;
  if ((char)param_1->filesize == '\x01') {
    FUN_0051f294();
    psVar4 = (segment_command *)&MACH_HEADER.ncmds;
    func_0x00487cbc(0x10,psVar3);
    func_0x0051f2a0();
    param_2 = psVar4;
  }
  psVar3 = psVar4;
  if (*(char *)((long)&param_1->filesize + 1) == '\x01') {
    FUN_0051f294();
    psVar3 = (segment_command *)&MACH_HEADER.flags;
    func_0x00487cbc(0x18,psVar4);
    func_0x0051f2a0();
    param_2 = psVar3;
  }
  psVar4 = psVar3;
  if (*(int *)((long)&param_1->filesize + 4) != 0) {
    FUN_0051f294();
    psVar4 = &segment_command_00000020;
    func_0x00487cbc(0x20,psVar3);
    func_0x0051f2a0();
    param_2 = psVar4;
  }
  uVar11 = (uint)param_1->vmsize;
  if (0 < (int)uVar11) {
    FUN_0051f294();
    puVar8 = (undefined1 *)((long)&psVar4->cmd + 2);
    *(undefined1 *)&psVar4->cmd = 0x2a;
    for (; 0x7f < uVar11; uVar11 = uVar11 >> 7) {
      puVar8[-1] = (byte)uVar11 | 0x80;
      puVar8 = puVar8 + 1;
    }
    puVar8[-1] = (byte)uVar11;
    puVar12 = (uint *)param_1->vmaddr;
    puVar1 = puVar12 + *(int *)((long)param_1->segname + 8);
    do {
      FUN_0051f294();
      uVar11 = *puVar12;
      psVar3 = psVar4;
      while( true ) {
        param_2 = (segment_command *)((long)&psVar3->cmd + 1);
        if (uVar11 < 0x80) break;
        *(byte *)&psVar3->cmd = (byte)uVar11 | 0x80;
        uVar11 = uVar11 >> 7;
        psVar3 = param_2;
      }
      puVar12 = puVar12 + 1;
      *(byte *)&psVar3->cmd = (byte)uVar11;
    } while (puVar12 < puVar1);
  }
  if (param_1->maxprot != 0) {
    FUN_0051f294();
    param_2 = (segment_command *)(ulong)param_1->maxprot;
    uVar5 = 0x30;
    func_0x00487cbc(0x30,psVar4);
    func_0x00487ce8(param_2,uVar5);
  }
  if ((*(ulong *)param_1->segname & 1) != 0) {
    uVar10 = *(ulong *)param_1->segname & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar10 + 0x1f);
    if ((long)uVar7 < 0) {
      lVar6 = *(long *)(uVar10 + 8);
      uVar7 = *(ulong *)(uVar10 + 0x10);
    }
    else {
      lVar6 = uVar10 + 8;
    }
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar7) {
      while( true ) {
        uVar9 = param_3->cmd;
        iVar14 = (uVar9 - (int)param_2) + 0x10;
        iVar13 = (int)uVar7;
        uVar7 = (ulong)(uint)(iVar13 - iVar14);
        if (iVar13 - iVar14 == 0 || iVar13 < iVar14) break;
        func_0x0054f690();
        pdVar2 = (dword *)param_2->segname;
        param_2 = param_3;
        func_0x0054ed58(param_3,(undefined1 *)((long)pdVar2 + (long)iVar14 + -8));
      }
      func_0x0054f690();
      return (segment_command *)((long)param_2->segname + (long)iVar13 + -8);
    }
    _memcpy(param_2,lVar6,uVar7 & 0xffffffff);
    return (segment_command *)((long)param_2->segname + (long)(int)uVar7 + -8);
  }
  return param_2;
}



/* Entry: 0051f0cc; end: 0051f1a7;  */

void FUN_0051f0cc(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = param_1 + 0x10;
  func_0x0054de60();
  iVar2 = (int)lVar4;
  *(int *)(param_1 + 0x20) = iVar2;
  iVar3 = 0;
  if (lVar4 != 0) {
    iVar3 = ((int)LZCOUNT((long)iVar2) * -9 + 0x280U >> 6) + 1;
  }
  iVar1 = iVar3 + iVar2;
  if (*(long *)(param_1 + 0x28) != 0) {
    iVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + iVar3 + iVar2;
  }
  iVar3 = iVar1 + (uint)*(byte *)(param_1 + 0x30) * 2 + (uint)*(byte *)(param_1 + 0x31) * 2;
  if (*(int *)(param_1 + 0x34) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT(*(int *)(param_1 + 0x34)) * -9 + 0x1a0U >> 6);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x38)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    iVar3 = (int)lVar4 + iVar3;
  }
  *(int *)(param_1 + 0x3c) = iVar3;
  return;
}



/* Entry: 0051f1a8; end: 0051f1ab;  */

void FUN_0051f1a8(long param_1,long param_2)

{
  FUN_004ead8c(param_1 + 0x10,param_2 + 0x10);
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  if (*(char *)(param_2 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  if (*(char *)(param_2 + 0x31) == '\x01') {
    *(undefined1 *)(param_1 + 0x31) = 1;
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_2 + 0x34);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_2 + 0x38);
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



/* Entry: 0051f1ac; end: 0051f23b;  */

void FUN_0051f1ac(long param_1,long param_2)

{
  FUN_004ead8c(param_1 + 0x10,param_2 + 0x10);
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  if (*(char *)(param_2 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  if (*(char *)(param_2 + 0x31) == '\x01') {
    *(undefined1 *)(param_1 + 0x31) = 1;
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_2 + 0x34);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_2 + 0x38);
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



/* Entry: 0051f23c; end: 0051f243;  */

void FUN_0051f23c(undefined8 param_1,qword *param_2)

{
  qword *pqVar1;
  
  if (param_2 == (qword *)0x0) {
    pqVar1 = &segment_command_00000020.vmsize;
    __Znwm();
  }
  else {
    pqVar1 = param_2;
    func_0x005510c4(param_2,0x40);
  }
  *pqVar1 = (qword)&PTR_FUN_009ffca0;
  pqVar1[1] = (qword)param_2;
  pqVar1[2] = 0;
  pqVar1[3] = (qword)param_2;
  *(dword *)(pqVar1 + 4) = 0;
  pqVar1[6] = 0;
  pqVar1[7] = 0;
  pqVar1[5] = 0;
  return;
}



/* Entry: 0051f244; end: 0051f293;  */

void FUN_0051f244(qword *param_1)

{
  qword *pqVar1;
  
  if (param_1 == (qword *)0x0) {
    pqVar1 = &segment_command_00000020.vmsize;
    __Znwm();
  }
  else {
    pqVar1 = param_1;
    func_0x005510c4(param_1,0x40);
  }
  *pqVar1 = (qword)&PTR_FUN_009ffca0;
  pqVar1[1] = (qword)param_1;
  pqVar1[2] = 0;
  pqVar1[3] = (qword)param_1;
  *(dword *)(pqVar1 + 4) = 0;
  pqVar1[6] = 0;
  pqVar1[7] = 0;
  pqVar1[5] = 0;
  return;
}



/* Entry: 0051f294; end: 0051f2e7;  */

ulong * FUN_0051f294(void)

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



/* Entry: 0051f2e8; end: 0051f30f;  */

long FUN_0051f2e8(long param_1)

{
  FUN_00487580(param_1 + 8);
  return param_1;
}



/* Entry: 0051f310; end: 0051f357;  */

undefined8 * FUN_0051f310(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_009ffd48;
  param_1[1] = param_2;
  param_1[2] = 0;
  func_0x0051f2c0(param_1,param_3);
  return param_1;
}



/* Entry: 0051f358; end: 0051f35b;  */

long FUN_0051f358(long param_1)

{
  FUN_00487580(param_1 + 8);
  return param_1;
}



/* Entry: 0051f35c; end: 0051f36f;  */

void FUN_0051f35c(void)

{
  FUN_0051f2e8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0051f370; end: 0051f38f;  */

undefined ** FUN_0051f370(void)

{
  return &PTR_DAT_009ffd88;
}



/* Entry: 0051f390; end: 0051f427;  */

long * FUN_0051f390(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x00487c24(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x10);
    uVar2 = 8;
    func_0x00487cbc(8,plVar1);
    func_0x00487ce8(param_2,uVar2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
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
      func_0x0054f690();
      lVar3 = (long)param_2 + (long)iVar7;
      param_2 = param_3;
      func_0x0054ed58(param_3,lVar3);
    }
    func_0x0054f690();
    return (long *)((long)param_2 + (long)iVar6);
  }
  _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar4);
}



/* Entry: 0051f428; end: 0051f47f;  */

long FUN_0051f428(long param_1)

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



/* Entry: 0051f480; end: 0051f4c3;  */

void FUN_0051f480(dword *param_1)

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
  *(undefined ***)pdVar1 = &PTR_FUN_009ffd48;
  *(dword **)(pdVar1 + 2) = param_1;
  *(undefined8 *)(pdVar1 + 4) = 0;
  return;
}



/* Entry: 0051f4c4; end: 0051f4cb;  */

void FUN_0051f4c4(void)

{
  return;
}



/* Entry: 0051f4cc; end: 0051f5d7;  */

void FUN_0051f4cc(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  
  switch(*(undefined4 *)(param_1 + 0x34)) {
  case 1:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00523404();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_0051f590;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_0051ffdc();
    }
    break;
  case 2:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00523404();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_0051f590;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_00520184();
    }
    break;
  case 3:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00523404();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_0051f590;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_00520338();
    }
    break;
  case 4:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00523404();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_0051f590;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_00520b00();
    }
    break;
  default:
    goto LAB_0051f590;
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00523404();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_0051f590;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_00520d70();
    }
  }
  __ZdlPv();
LAB_0051f590:
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}



/* Entry: 0051f5d8; end: 0051f6a3;  */

void FUN_0051f5d8(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *unaff_x19;
  
  lVar2 = param_3;
  func_0x005233c8();
  *(undefined8 *)(param_1 + 8) = param_2;
  *unaff_x19 = &PTR_FUN_00a00110;
  if ((*(ulong *)(lVar2 + 8) & 1) != 0) {
    func_0x005231a4();
  }
  lVar2 = param_3 + 0x10;
  func_0x0052348c();
  unaff_x19[2] = lVar2;
  lVar2 = param_3 + 0x18;
  func_0x0052348c();
  unaff_x19[3] = lVar2;
  *(undefined4 *)(unaff_x19 + 6) = 0;
  uVar1 = *(undefined4 *)(param_3 + 0x34);
  *(undefined4 *)((long)unaff_x19 + 0x34) = uVar1;
  *(undefined4 *)(unaff_x19 + 4) = *(undefined4 *)(param_3 + 0x20);
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
    goto LAB_00523174;
  case 6:
    func_0x005233b0();
    func_0x00522ce8();
  }
  unaff_x19[5] = lVar2;
LAB_00523174:
  return;
}



/* Entry: 0051f6a4; end: 0051f6cf;  */

undefined8 FUN_0051f6a4(undefined8 param_1)

{
  func_0x0052325c();
  FUN_0051f6d0(param_1);
  return param_1;
}



/* Entry: 0051f6d0; end: 0051f70b;  */

void FUN_0051f6d0(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  
  func_0x00532f74(param_1 + 0x10);
  func_0x00523438();
  if (*(int *)(param_1 + 0x34) == 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x34)) {
  case 1:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00523404();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_0051f590;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_0051ffdc();
    }
    break;
  case 2:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00523404();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_0051f590;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_00520184();
    }
    break;
  case 3:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00523404();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_0051f590;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_00520338();
    }
    break;
  case 4:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00523404();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_0051f590;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_00520b00();
    }
    break;
  default:
    goto LAB_0051f590;
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00523404();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_0051f590;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_00520d70();
    }
  }
  __ZdlPv();
LAB_0051f590:
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}



/* Entry: 0051f70c; end: 0051f70f;  */

undefined8 FUN_0051f70c(undefined8 param_1)

{
  func_0x0052325c();
  FUN_0051f6d0(param_1);
  return param_1;
}



/* Entry: 0051f710; end: 0051f723;  */

void FUN_0051f710(void)

{
  FUN_0051f6a4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}


