/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10451a97c; end: 10451afc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451a97c(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 uStack_130;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 uStack_90;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + _DAT_113083230)) {
  case 0:
    _objc_release();
    func_0x00010451cb5c(&lStack_120);
    goto code_r0x00010451af1c;
  case 1:
    lVar6 = ((long *)(param_2 + _DAT_113083238))[1];
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451af88);
      (*pcVar3)();
    }
    if ((char)((long *)(param_2 + _DAT_113083250))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451afa8);
      (*pcVar3)();
    }
    lVar10 = *(long *)(param_2 + _DAT_113083238);
    lVar11 = *(long *)(param_2 + _DAT_113083250);
    lVar7 = *(long *)(param_2 + _DAT_113083248);
    lVar8 = *(long *)(param_2 + _DAT_113083240);
    _swift_bridgeObjectRetain(lVar7);
    _swift_bridgeObjectRetain(lVar6);
    _swift_bridgeObjectRetain(lVar8);
    _objc_release(param_2);
    lStack_1c0 = lVar10;
    lStack_1b8 = lVar6;
    lStack_1b0 = lVar8;
    lStack_1a8 = lVar7;
    lStack_1a0 = lVar11;
    func_0x00010451cb54(&lStack_1c0);
    break;
  case 2:
    lVar6 = *(long *)(param_2 + _DAT_113083258);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451af7c);
      (*pcVar3)();
    }
    lVar7 = ((long *)(param_2 + _DAT_113083260))[1];
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451af9c);
      (*pcVar3)();
    }
    if ((char)((long *)(param_2 + _DAT_113083268))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451afbc);
      (*pcVar3)();
    }
    lVar8 = *(long *)(param_2 + _DAT_113083260);
    lVar10 = *(long *)(param_2 + _DAT_113083268);
    _swift_bridgeObjectRetain(lVar6);
    _swift_bridgeObjectRetain(lVar7);
    _objc_release(param_2);
    lStack_1c0 = lVar6;
    lStack_1b8 = lVar8;
    lStack_1b0 = lVar7;
    lStack_1a8 = lVar10;
    func_0x00010451cb48(&lStack_1c0);
    break;
  case 3:
    plVar1 = (long *)(param_2 + _DAT_113083270);
    if ((char)plVar1[2] == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451af80);
      (*pcVar3)();
    }
    if ((char)((long *)(param_2 + _DAT_113083278))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451afa0);
      (*pcVar3)();
    }
    lVar8 = *(long *)(param_2 + _DAT_113083278);
    lVar7 = plVar1[1];
    lVar6 = *plVar1;
    _objc_release();
    lStack_1c0 = lVar6;
    lStack_1b8 = lVar7;
    lStack_1b0 = lVar8;
    func_0x00010451cb3c(&lStack_1c0);
    break;
  case 4:
    plVar1 = (long *)(param_2 + _DAT_113083280);
    if ((char)plVar1[2] == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451af78);
      (*pcVar3)();
    }
    plVar2 = (long *)(param_2 + _DAT_113083288);
    if ((char)plVar2[2] == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451af98);
      (*pcVar3)();
    }
    if ((char)((long *)(param_2 + _DAT_113083290))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451afb8);
      (*pcVar3)();
    }
    lVar6 = ((long *)(param_2 + _DAT_113083298))[1];
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451afc4);
      (*pcVar3)();
    }
    lVar7 = ((long *)(param_2 + _DAT_1130832a0))[1];
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451afc8);
      (*pcVar3)();
    }
    lVar15 = *plVar1;
    lVar12 = plVar1[1];
    lVar23 = *plVar2;
    lVar16 = plVar2[1];
    lVar11 = *(long *)(param_2 + _DAT_113083290);
    lVar13 = *(long *)(param_2 + _DAT_113083298);
    lVar14 = *(long *)(param_2 + _DAT_1130832a0);
    plVar1 = (long *)(param_2 + _DAT_1130832a8);
    plVar2 = (long *)(param_2 + _DAT_1130832b0);
    lVar8 = *(long *)(param_2 + _DAT_1130832b8);
    _objc_retain(lVar8);
    _swift_bridgeObjectRetain(lVar6);
    _swift_bridgeObjectRetain(lVar7);
    lVar9 = plVar1[1];
    lVar5 = *plVar1;
    lVar4 = plVar2[1];
    lVar17 = *plVar2;
    lVar10 = plVar2[1];
    _swift_bridgeObjectRetain(plVar1[1]);
    _swift_bridgeObjectRetain(lVar10);
    _objc_release(param_2);
    lStack_1c0 = lVar15;
    lStack_1b8 = lVar12;
    lStack_1b0 = lVar23;
    lStack_1a8 = lVar16;
    lStack_1a0 = lVar11;
    lStack_198 = lVar13;
    lStack_190 = lVar6;
    lStack_188 = lVar14;
    lStack_180 = lVar7;
    lStack_178 = lVar5;
    lStack_170 = lVar9;
    lStack_168 = lVar17;
    lStack_160 = lVar4;
    lStack_158 = lVar8;
    func_0x00010451cb30(&lStack_1c0);
    break;
  case 5:
    plVar1 = (long *)(param_2 + _DAT_1130832c0);
    if ((char)plVar1[2] == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451af8c);
      (*pcVar3)();
    }
    lVar6 = ((long *)(param_2 + _DAT_1130832d8))[1];
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451afac);
      (*pcVar3)();
    }
    lVar7 = ((long *)(param_2 + _DAT_113083300))[1];
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451afc0);
      (*pcVar3)();
    }
    lVar22 = *plVar1;
    lVar21 = plVar1[1];
    plVar1 = (long *)(param_2 + _DAT_1130832c8);
    plVar2 = (long *)(param_2 + _DAT_1130832d0);
    lVar19 = plVar1[1];
    lVar23 = *plVar1;
    lVar9 = plVar1[1];
    lVar20 = plVar2[1];
    lVar18 = *plVar2;
    lVar12 = plVar2[1];
    lVar5 = *(long *)(param_2 + _DAT_1130832d8);
    lVar4 = *(long *)(param_2 + _DAT_113083300);
    lVar8 = *(long *)(param_2 + _DAT_1130832f8);
    lVar13 = ((long *)(param_2 + _DAT_1130832f8))[1];
    lVar10 = *(long *)(param_2 + _DAT_1130832f0);
    lVar14 = ((long *)(param_2 + _DAT_1130832f0))[1];
    lVar11 = *(long *)(param_2 + _DAT_1130832e8);
    lVar17 = ((long *)(param_2 + _DAT_1130832e8))[1];
    lVar15 = *(long *)(param_2 + _DAT_1130832e0);
    lVar16 = *(long *)(param_2 + _DAT_113083308);
    _objc_retain(lVar16);
    _swift_bridgeObjectRetain(lVar9);
    _swift_bridgeObjectRetain(lVar12);
    _swift_bridgeObjectRetain(lVar6);
    _objc_retain(lVar15);
    _swift_bridgeObjectRetain(lVar17);
    _swift_bridgeObjectRetain(lVar14);
    _swift_bridgeObjectRetain(lVar13);
    _swift_bridgeObjectRetain(lVar7);
    _objc_release(param_2);
    lStack_1c0 = lVar22;
    lStack_1b8 = lVar21;
    lStack_1b0 = lVar23;
    lStack_1a8 = lVar19;
    lStack_1a0 = lVar18;
    lStack_198 = lVar20;
    lStack_190 = lVar5;
    lStack_188 = lVar6;
    lStack_180 = lVar15;
    lStack_178 = lVar11;
    lStack_170 = lVar17;
    lStack_168 = lVar10;
    lStack_160 = lVar14;
    lStack_158 = lVar8;
    lStack_150 = lVar13;
    lStack_148 = lVar4;
    lStack_140 = lVar7;
    lStack_138 = lVar16;
    func_0x000102850218(&lStack_1c0);
    break;
  case 6:
    lVar6 = *(long *)(param_2 + _DAT_113083310);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451af90);
      (*pcVar3)();
    }
    if ((char)((long *)(param_2 + _DAT_113083318))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451afb0);
      (*pcVar3)();
    }
    lVar7 = *(long *)(param_2 + _DAT_113083318);
    _objc_retain();
    _objc_release(param_2);
    lStack_1c0 = lVar6;
    lStack_1b8 = lVar7;
    func_0x00010451cb24(&lStack_1c0);
    break;
  case 7:
    lVar6 = ((long *)(param_2 + _DAT_113083320))[1];
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451af84);
      (*pcVar3)();
    }
    lVar7 = ((long *)(param_2 + _DAT_113083328))[1];
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451afa4);
      (*pcVar3)();
    }
    lVar8 = *(long *)(param_2 + _DAT_113083320);
    lVar10 = *(long *)(param_2 + _DAT_113083328);
    _swift_bridgeObjectRetain(lVar6);
    _swift_bridgeObjectRetain(lVar7);
    _objc_release(param_2);
    lStack_1c0 = lVar8;
    lStack_1b8 = lVar6;
    lStack_1b0 = lVar10;
    lStack_1a8 = lVar7;
    func_0x00010451cb18(&lStack_1c0);
    break;
  case 8:
    lVar6 = ((long *)(param_2 + _DAT_113083330))[1];
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451af94);
      (*pcVar3)();
    }
    lVar7 = ((long *)(param_2 + _DAT_113083338))[1];
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451afb4);
      (*pcVar3)();
    }
    lVar8 = *(long *)(param_2 + _DAT_113083330);
    lVar10 = *(long *)(param_2 + _DAT_113083338);
    _swift_bridgeObjectRetain(lVar6);
    _swift_bridgeObjectRetain(lVar7);
    _objc_release(param_2);
    lStack_1c0 = lVar8;
    lStack_1b8 = lVar6;
    lStack_1b0 = lVar10;
    lStack_1a8 = lVar7;
    func_0x00010451cb0c(&lStack_1c0);
    break;
  case 9:
    _objc_release();
    func_0x00010451cad0(&lStack_120);
    goto code_r0x00010451af1c;
  case 10:
    _objc_release();
    func_0x00010451ca94(&lStack_120);
    goto code_r0x00010451af1c;
  }
  lStack_b8 = lStack_158;
  lStack_c0 = lStack_160;
  lStack_a8 = lStack_148;
  lStack_b0 = lStack_150;
  lStack_98 = lStack_138;
  lStack_a0 = lStack_140;
  uStack_90 = uStack_130;
  lStack_f8 = lStack_198;
  lStack_100 = lStack_1a0;
  lStack_e8 = lStack_188;
  lStack_f0 = lStack_190;
  lStack_d8 = lStack_178;
  lStack_e0 = lStack_180;
  lStack_c8 = lStack_168;
  lStack_d0 = lStack_170;
  lStack_118 = lStack_1b8;
  lStack_120 = lStack_1c0;
  lStack_108 = lStack_1a8;
  lStack_110 = lStack_1b0;
code_r0x00010451af1c:
  param_1[0xd] = lStack_b8;
  param_1[0xc] = lStack_c0;
  param_1[0xf] = lStack_a8;
  param_1[0xe] = lStack_b0;
  param_1[0x11] = lStack_98;
  param_1[0x10] = lStack_a0;
  *(undefined1 *)(param_1 + 0x12) = uStack_90;
  param_1[5] = lStack_f8;
  param_1[4] = lStack_100;
  param_1[7] = lStack_e8;
  param_1[6] = lStack_f0;
  param_1[9] = lStack_d8;
  param_1[8] = lStack_e0;
  param_1[0xb] = lStack_c8;
  param_1[10] = lStack_d0;
  param_1[1] = lStack_118;
  *param_1 = lStack_120;
  param_1[3] = lStack_108;
  param_1[2] = lStack_110;
  return;
}



/* Entry: 10451afc8; end: 10451b50f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451afc8(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  lVar4 = param_1;
  FUN_10451c820();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_113083230) = 1;
  plVar1 = (long *)(lVar5 + _DAT_113083238);
  *plVar1 = param_1;
  plVar1[1] = param_2;
  *(undefined8 *)(lVar5 + _DAT_113083240) = param_3;
  *(undefined8 *)(lVar5 + _DAT_113083248) = param_4;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113083250);
  *puVar2 = param_5;
  *(undefined1 *)(puVar2 + 1) = 0;
  *(undefined8 *)(lVar5 + _DAT_113083258) = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113083260);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113083268);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113083270);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113083278);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113083280);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113083288);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113083290);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113083298);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_1130832a0);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_1130832a8);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_1130832b0);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_1130832b8) = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_1130832c0);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_1130832c8);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_1130832d0);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_1130832d8);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_1130832e0) = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_1130832e8);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_1130832f0);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_1130832f8);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113083300);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_113083308) = 0;
  *(undefined8 *)(lVar5 + _DAT_113083310) = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113083318);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113083320);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113083328);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113083330);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113083338);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRetain(param_4);
  _objc_msgSendSuper2(&lStack_50,puVar3);
  return;
}



/* Entry: 10451b510; end: 10451b797;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451b510(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  FUN_10451c820();
  lVar2 = param_4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113083230) = 3;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113083238);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar2 + _DAT_113083240) = 0;
  *(undefined8 *)(lVar2 + _DAT_113083248) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113083250);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_113083258) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113083260);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113083268);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113083270);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113083278);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113083280);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113083288);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113083290);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113083298);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130832a0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130832a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130832b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar2 + _DAT_1130832b8) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130832c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130832c8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130832d0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130832d8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar2 + _DAT_1130832e0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130832e8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130832f0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130832f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113083300);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar2 + _DAT_113083308) = 0;
  *(undefined8 *)(lVar2 + _DAT_113083310) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113083318);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113083320);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113083328);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113083330);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113083338);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_50 = lVar2;
  lStack_48 = param_4;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10451b798; end: 10451ba97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451b798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_90;
  long lStack_88;
  
  lVar4 = param_5;
  FUN_10451c820();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_113083230) = 4;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083238);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_113083240) = 0;
  *(undefined8 *)(lVar5 + _DAT_113083248) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083250);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_113083258) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083260);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083268);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083270);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083278);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083280);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083288);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined1 *)(puVar1 + 2) = 0;
  plVar2 = (long *)(lVar5 + _DAT_113083290);
  *plVar2 = param_5;
  *(undefined1 *)(plVar2 + 1) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083298);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832a0);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832a8);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832b0);
  *puVar1 = param_12;
  puVar1[1] = param_13;
  *(undefined8 *)(lVar5 + _DAT_1130832b8) = param_14;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832c8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832d0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832d8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_1130832e0) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832e8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832f0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083300);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_113083308) = 0;
  *(undefined8 *)(lVar5 + _DAT_113083310) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083318);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083320);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083328);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083330);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083338);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_90 = lVar5;
  lStack_88 = lVar4;
  _swift_bridgeObjectRetain(param_7);
  _swift_bridgeObjectRetain(param_9);
  _swift_bridgeObjectRetain(param_11);
  _swift_bridgeObjectRetain(param_13);
  _objc_retain(param_14);
  _objc_msgSendSuper2(&lStack_90,puVar3);
  return;
}



/* Entry: 10451ba98; end: 10451bdeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451ba98(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_80;
  long lStack_78;
  
  lVar4 = param_3;
  FUN_10451c820();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_113083230) = 5;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083238);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_113083240) = 0;
  *(undefined8 *)(lVar5 + _DAT_113083248) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083250);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_113083258) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083260);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083268);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083270);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083278);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083280);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083288);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083290);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083298);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832a0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_1130832b8) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832c0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(puVar1 + 2) = 0;
  plVar2 = (long *)(lVar5 + _DAT_1130832c8);
  *plVar2 = param_3;
  plVar2[1] = param_4;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832d0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832d8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined8 *)(lVar5 + _DAT_1130832e0) = param_9;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832e8);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832f0);
  *puVar1 = param_12;
  puVar1[1] = param_13;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832f8);
  *puVar1 = param_14;
  puVar1[1] = param_15;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083300);
  *puVar1 = param_16;
  puVar1[1] = param_17;
  *(undefined8 *)(lVar5 + _DAT_113083308) = param_18;
  *(undefined8 *)(lVar5 + _DAT_113083310) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083318);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083320);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083328);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083330);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083338);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_80 = lVar5;
  lStack_78 = lVar4;
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_6);
  _swift_bridgeObjectRetain(param_8);
  _objc_retain(param_9);
  _swift_bridgeObjectRetain(param_11);
  _swift_bridgeObjectRetain(param_13);
  _swift_bridgeObjectRetain(param_15);
  _swift_bridgeObjectRetain(param_17);
  _objc_retain(param_18);
  _objc_msgSendSuper2(&lStack_80,puVar3);
  return;
}



/* Entry: 10451bdec; end: 10451c073;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451bdec(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  FUN_10451c820();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113083230) = 6;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113083238);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_113083240) = 0;
  *(undefined8 *)(lVar4 + _DAT_113083248) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113083250);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113083258) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113083260);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113083268);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113083270);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113083278);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113083280);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113083288);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113083290);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113083298);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130832a0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130832a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130832b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_1130832b8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130832c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130832c8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130832d0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130832d8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_1130832e0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130832e8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130832f0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130832f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113083300);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_113083308) = 0;
  *(long *)(lVar4 + _DAT_113083310) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113083318);
  *puVar1 = param_2;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113083320);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113083328);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113083330);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113083338);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 10451c074; end: 10451c5b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451c074(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  lVar4 = param_1;
  FUN_10451c820();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_113083230) = 7;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083238);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_113083240) = 0;
  *(undefined8 *)(lVar5 + _DAT_113083248) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083250);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_113083258) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083260);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083268);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083270);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083278);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083280);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083288);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083290);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083298);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832a0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_1130832b8) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832c8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832d0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832d8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_1130832e0) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832e8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832f0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083300);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_113083308) = 0;
  *(undefined8 *)(lVar5 + _DAT_113083310) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083318);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  plVar2 = (long *)(lVar5 + _DAT_113083320);
  *plVar2 = param_1;
  plVar2[1] = param_2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083328);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083330);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083338);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  _objc_msgSendSuper2(&lStack_50,puVar3);
  return;
}



/* Entry: 10451c5b4; end: 10451c81f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451c5b4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_10451c820();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(char *)(lVar3 + _DAT_113083230) = (char)param_1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113083238);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + _DAT_113083240) = 0;
  *(undefined8 *)(lVar3 + _DAT_113083248) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113083250);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar3 + _DAT_113083258) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113083260);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113083268);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113083270);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113083278);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113083280);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113083288);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113083290);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113083298);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130832a0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130832a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130832b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + _DAT_1130832b8) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130832c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130832c8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130832d0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130832d8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + _DAT_1130832e0) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130832e8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130832f0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130832f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113083300);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + _DAT_113083308) = 0;
  *(undefined8 *)(lVar3 + _DAT_113083310) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113083318);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113083320);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113083328);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113083330);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113083338);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10451c820; end: 10451c83f;  */

void FUN_10451c820(void)

{
  _objc_opt_self(&PTR_PTR_1129ca698);
  return;
}



/* Entry: 10451c840; end: 10451c9a7;  */

int FUN_10451c840(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf5 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 10) {
      iVar2 = 4;
    }
    if (param_2 + 10 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10451c8bc;
        goto LAB_10451c8a0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10451c8a0:
      return ((uint)*param_1 | uVar1 << 8) - 10;
    }
  }
LAB_10451c8bc:
  iVar2 = *param_1 - 0xb;
  if (*param_1 < 0xb) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10451c9a8; end: 10451c9e7;  */

void FUN_10451c9a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113083368 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd139b8;
  _swift_getWitnessTable(&UNK_10dd139b8,&UNK_110783400);
  puRam0000000113083368 = puVar1;
  return;
}



/* Entry: 10451c9e8; end: 10451ca0f;  */

void FUN_10451c9e8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010451c9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 10451ca10; end: 10451ca77;  */

void FUN_10451ca10(void)

{
  FUN_10451a4b0();
  return;
}



/* Entry: 10451ca78; end: 10451cb8b;  */

void FUN_10451ca78(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010451ca88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1,param_2);
  return;
}



/* Entry: 10451cb8c; end: 10451cb9b; -[SCFullMapOptions useNavigationServicesButtonProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10451cb8c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113083370);
}



/* Entry: 10451cb9c; end: 10451cbab; -[SCFullMapOptions canDisplayLocationSharingUpsell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10451cb9c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113083378);
}



/* Entry: 10451cbac; end: 10451cbbb; -[SCFullMapOptions canDisplayActivityFooterCards] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10451cbac(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113083380);
}



/* Entry: 10451cbbc; end: 10451cbcb; -[SCFullMapOptions canDisplayBitmojiFriendStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10451cbbc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113083388);
}



/* Entry: 10451cbcc; end: 10451cc1f; -[SCFullMapOptions visibleUserIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451cbcc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113083390);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10451cc20; end: 10451cc2f; -[SCFullMapOptions isMainMap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10451cc20(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113083398);
}



/* Entry: 10451cc30; end: 10451cc3f; -[SCFullMapOptions isPresentedModally] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10451cc30(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130833a0);
}



/* Entry: 10451cc40; end: 10451cc4f; -[SCFullMapOptions isSwipeToOpen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10451cc40(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130833a8);
}



/* Entry: 10451cc50; end: 10451cd2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451cc50(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113083370) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_113083378) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_113083380) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_113083388) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113083390) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_113083398) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_1130833a0) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_1130833a8) = param_8;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10451cd2c; end: 10451ce27; -[SCFullMapOptions initWithUseNavigationServicesButtonProvider:canDisplayLocationSharingUpsell:canDisplayActivityFooterCards:canDisplayBitmojiFriendStories:visibleUserIds:isMainMap:isPresentedModally:isSwipeToOpen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451cd2c(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,long param_7,undefined1 param_8,
                  undefined4 param_9)

{
  long lVar1;
  long lStack_70;
  long lStack_68;
  
  lVar1 = param_1;
  _swift_getObjectType();
  if (param_7 == 0) {
    param_7 = 0;
  }
  else {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_7,PTR___sSSN_11034da80);
  }
  *(undefined1 *)(param_1 + _DAT_113083370) = param_3;
  *(undefined1 *)(param_1 + _DAT_113083378) = param_4;
  *(undefined1 *)(param_1 + _DAT_113083380) = param_5;
  *(undefined1 *)(param_1 + _DAT_113083388) = param_6;
  *(long *)(param_1 + _DAT_113083390) = param_7;
  *(undefined1 *)(param_1 + _DAT_113083398) = param_8;
  *(undefined1 *)(param_1 + _DAT_1130833a0) = (undefined1)param_9;
  *(undefined1 *)(param_1 + _DAT_1130833a8) = param_9._1_1_;
  lStack_70 = param_1;
  lStack_68 = lVar1;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10451ce28; end: 10451cef3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451ce28(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(byte *)(unaff_x20 + _DAT_113083370) = (byte)param_1 & 1;
  *(byte *)(unaff_x20 + _DAT_113083378) = (byte)((uint)param_1 >> 8) & 1;
  *(byte *)(unaff_x20 + _DAT_113083380) = (byte)((uint)param_1 >> 0x10) & 1;
  *(byte *)(unaff_x20 + _DAT_113083388) = (byte)((uint)param_1 >> 0x18) & 1;
  *(undefined8 *)(unaff_x20 + _DAT_113083390) = param_2;
  *(byte *)(unaff_x20 + _DAT_113083398) = (byte)param_3 & 1;
  *(byte *)(unaff_x20 + _DAT_1130833a0) = (byte)((ulong)param_3 >> 8) & 1;
  *(byte *)(unaff_x20 + _DAT_1130833a8) = (byte)((ulong)param_3 >> 0x10) & 1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10451cef4; end: 10451cef7; -[SCFullMapOptions copyWithZone:] */

void FUN_10451cef4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10451cef8; end: 10451cf1f; -[SCFullMapOptions description] */

void FUN_10451cef8(undefined8 param_1,undefined8 param_2)

{
  FUN_10451cfac();
  _swift_bridgeObjectRelease(param_2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10451cf20; end: 10451cf9b; -[SCFullMapOptions init] */

void FUN_10451cf20(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"SCFullMapScope/SCFullMapOptionsWrapper.swift"
             ,0x2c,2,0x46,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10451cf68);
  (*pcVar1)();
}



/* Entry: 10451cf9c; end: 10451cfab; -[SCFullMapOptions .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451cf9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113083390));
  return;
}



/* Entry: 10451cfac; end: 10451d087;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10451cfac(long param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  bVar1 = *(byte *)(param_1 + _DAT_113083370);
  uVar3 = 0x100;
  if (*(char *)(param_1 + _DAT_113083378) == '\0') {
    uVar3 = 0;
  }
  uVar2 = 0x10000;
  if (*(char *)(param_1 + _DAT_113083380) == '\0') {
    uVar2 = 0;
  }
  uVar4 = 0x1000000;
  if (*(char *)(param_1 + _DAT_113083388) == '\0') {
    uVar4 = 0;
  }
  _swift_bridgeObjectRetain(*(undefined8 *)(param_1 + _DAT_113083390));
  return uVar3 | bVar1 | uVar2 | uVar4;
}



/* Entry: 10451d088; end: 10451d0a7;  */

void FUN_10451d088(void)

{
  _objc_opt_self(&PTR_PTR_1129ca860);
  return;
}



/* Entry: 10451d0a8; end: 10451d0b7; -[_TtC27MapExternalPlaceUrlServices27MapExternalPlaceUrlServices externalPlaceUrlDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451d0a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130833d8));
  return;
}



/* Entry: 10451d0b8; end: 10451d0c7; -[_TtC27MapExternalPlaceUrlServices27MapExternalPlaceUrlServices externalPlaceUrlParser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451d0b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130833e0));
  return;
}



/* Entry: 10451d0c8; end: 10451d18f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451d0c8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130833d8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130833e0) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10451d190; end: 10451d1ef; -[_TtC27MapExternalPlaceUrlServices27MapExternalPlaceUrlServices init] */

void FUN_10451d190(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MapExternalPlaceUrlServices.MapExternalPlaceUrlServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10451d1bc);
  (*pcVar1)();
}



/* Entry: 10451d1f0; end: 10451d227; -[_TtC27MapExternalPlaceUrlServices27MapExternalPlaceUrlServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451d1f0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130833d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130833e0));
  return;
}



/* Entry: 10451d228; end: 10451d23b;  */

bool FUN_10451d228(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10451d23c; end: 10451d2e7;  */

void FUN_10451d23c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10451d2e8; end: 10451d30f;  */

void FUN_10451d2e8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 10451d310; end: 10451d31b; -[_TtC27MapExternalPlaceUrlServices20MapExternalPlaceData placeName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451d310(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113083410))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113083410);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10451d31c; end: 10451d327; -[_TtC27MapExternalPlaceUrlServices20MapExternalPlaceData address] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451d31c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113083418))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113083418);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10451d328; end: 10451d37f;  */

void FUN_10451d328(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10451d380; end: 10451d38f; -[_TtC27MapExternalPlaceUrlServices20MapExternalPlaceData latitude] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451d380(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113083420));
  return;
}



/* Entry: 10451d390; end: 10451d39f; -[_TtC27MapExternalPlaceUrlServices20MapExternalPlaceData longitude] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451d390(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113083428));
  return;
}



/* Entry: 10451d3a0; end: 10451d3af; -[_TtC27MapExternalPlaceUrlServices20MapExternalPlaceData provider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10451d3a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113083430);
}



/* Entry: 10451d3b0; end: 10451d477; -[_TtC27MapExternalPlaceUrlServices20MapExternalPlaceData sourceUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451d3b0(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x000100029394(param_1 + _DAT_113813bd8,puVar4);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10451d478; end: 10451d4d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10451d478(undefined8 param_1)

{
  long unaff_x20;
  
  if ((*(long *)(unaff_x20 + _DAT_113083420) != 0) &&
     (func_0x00010bf885a0(), *(long *)(unaff_x20 + _DAT_113083428) != 0)) {
    func_0x00010bf885a0();
    return param_1;
  }
  return 0;
}



/* Entry: 10451d4d4; end: 10451d613;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10451d4d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,char param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_80 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083410);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083418);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  if (param_7 == '\x01') {
    puVar2 = (undefined *)0x0;
    *(undefined8 *)(unaff_x20 + _DAT_113083420) = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(param_5);
    *(undefined **)(unaff_x20 + _DAT_113083420) = puVar2;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(param_6);
  }
  *(undefined **)(unaff_x20 + _DAT_113083428) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_113083430) = param_8;
  func_0x000100029394(param_9,unaff_x20 + _DAT_113813bd8);
  puVar3 = auStack_80;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  func_0x0001000293e4(param_9);
  return puVar3;
}



/* Entry: 10451d614; end: 10451d71b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10451d614(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,char param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffffb0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083410);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083418);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  if (param_7 == '\x01') {
    puVar2 = (undefined *)0x0;
    *(undefined8 *)(unaff_x20 + _DAT_113083420) = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(param_5);
    *(undefined **)(unaff_x20 + _DAT_113083420) = puVar2;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(param_6);
  }
  *(undefined **)(unaff_x20 + _DAT_113083428) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_113083430) = param_8;
  func_0x000100029394(param_9,unaff_x20 + _DAT_113813bd8);
  FUN_10451d71c();
  _objc_msgSendSuper2(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  func_0x0001000293e4(param_9);
  return puVar3;
}



/* Entry: 10451d71c; end: 10451d753;  */

void FUN_10451d71c(undefined8 param_1)

{
  if (lRam0000000113083468 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e811d98);
  return;
}



/* Entry: 10451d754; end: 10451d7b3; -[_TtC27MapExternalPlaceUrlServices20MapExternalPlaceData init] */

void FUN_10451d754(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MapExternalPlaceUrlServices.MapExternalPlaceData",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10451d780);
  (*pcVar1)();
}



/* Entry: 10451d7b4; end: 10451d823; -[_TtC27MapExternalPlaceUrlServices20MapExternalPlaceData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10451d7b4(long param_1)

{
  long lVar1;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113083410 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113083418 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113083420));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113083428));
  param_1 = param_1 + _DAT_113813bd8;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10451d824; end: 10451d827;  */

void FUN_10451d824(void)

{
  undefined *puVar1;
  
  if (puRam0000000113083438 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd13aa8;
  _swift_getWitnessTable(&UNK_10dd13aa8,&UNK_110783500);
  puRam0000000113083438 = puVar1;
  return;
}



/* Entry: 10451d828; end: 10451d867;  */

void FUN_10451d828(void)

{
  undefined *puVar1;
  
  if (puRam0000000113083438 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd13aa8;
  _swift_getWitnessTable(&UNK_10dd13aa8,&UNK_110783500);
  puRam0000000113083438 = puVar1;
  return;
}



/* Entry: 10451d868; end: 10451d87f;  */

undefined1  [16] FUN_10451d868(void)

{
  return ZEXT816(0x110783500);
}



/* Entry: 10451d880; end: 10451d913;  */

void FUN_10451d880(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_50 = &UNK_10dd13b88;
  puStack_48 = &UNK_10dd13b88;
  puStack_40 = &UNK_10dd13ba0;
  puStack_38 = &UNK_10dd13ba0;
  puStack_30 = PTR___sBi64_WV_11034d670 + 0x40;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,6,&puStack_50,param_1 + 0x50);
  }
  return;
}



/* Entry: 10451d914; end: 10451d923; -[_TtC27MapExternalPlaceUrlServices21SCPlaceLinkButtonData provider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10451d914(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113083478);
}



/* Entry: 10451d924; end: 10451d92f; -[_TtC27MapExternalPlaceUrlServices21SCPlaceLinkButtonData iconUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451d924(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113083480);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113083480))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10451d930; end: 10451d93b; -[_TtC27MapExternalPlaceUrlServices21SCPlaceLinkButtonData externalLink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451d930(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113083488);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113083488))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10451d93c; end: 10451d983;  */

void FUN_10451d93c(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10451d984; end: 10451da2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451d984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113083478) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083480);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083488);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083490);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10451da30; end: 10451dabb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451da30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_113083478) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083480);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083488);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083490);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  func_0x00010451da9c();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10451dabc; end: 10451dae7;  */

void FUN_10451dabc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x00010451da9c();
  param_1[3] = param_2;
  *param_1 = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10451dae8; end: 10451daeb; -[_TtC27MapExternalPlaceUrlServices21SCPlaceLinkButtonData copyWithZone:] */

void FUN_10451dae8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10451daec; end: 10451dbf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10451daec(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113083480);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_113083480))[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083490);
  uVar6 = puVar1[1];
  uVar8 = puVar1[1];
  uVar7 = *puVar1;
  puVar3 = PTR_PTR_1126adcf8;
  _objc_allocWithZone(PTR_PTR_1126adcf8);
  _swift_retain(uVar6);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,uVar2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110783568;
  ppuVar5 = &puStack_70;
  uStack_50 = uVar7;
  uStack_48 = uVar8;
  __Block_copy(ppuVar5);
  func_0x00010c03ba40(puVar3);
  __Block_release(ppuVar5);
  _objc_release(uVar4);
  _swift_release(uStack_48);
  return puVar3;
}



/* Entry: 10451dbf4; end: 10451dc27; -[_TtC27MapExternalPlaceUrlServices21SCPlaceLinkButtonData toVenueApiPlaceLinkButtonData] */

void FUN_10451dbf4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10451daec();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10451dc28; end: 10451dc83; -[_TtC27MapExternalPlaceUrlServices21SCPlaceLinkButtonData init] */

void FUN_10451dc28(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MapExternalPlaceUrlServices.SCPlaceLinkButtonData",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10451dc54);
  (*pcVar1)();
}



/* Entry: 10451dc84; end: 10451dcd7; -[_TtC27MapExternalPlaceUrlServices21SCPlaceLinkButtonData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451dc84(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113083480 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113083488 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113083490 + 8));
  return;
}



/* Entry: 10451dcd8; end: 10451dcf3;  */

void FUN_10451dcd8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10451dcf4; end: 10451df7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451dcf4(undefined8 param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined *puVar18;
  long lVar19;
  long unaff_x20;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auStack_80 [16];
  
  lVar19 = unaff_x20;
  _swift_getObjectType();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113083500);
  uVar9 = ((undefined8 *)(unaff_x20 + _DAT_113083500))[1];
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113083508);
  uVar10 = ((undefined8 *)(unaff_x20 + _DAT_113083508))[1];
  uVar20 = *(undefined8 *)(unaff_x20 + _DAT_113083510);
  uVar21 = ((undefined8 *)(unaff_x20 + _DAT_113083510))[1];
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113083518);
  uVar11 = ((undefined8 *)(unaff_x20 + _DAT_113083518))[1];
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113083520);
  uVar12 = ((undefined8 *)(unaff_x20 + _DAT_113083520))[1];
  uVar16 = *(undefined1 *)(unaff_x20 + _DAT_113083538);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_113083528);
  uVar13 = ((undefined8 *)(unaff_x20 + _DAT_113083528))[1];
  uVar17 = *(undefined1 *)(unaff_x20 + _DAT_113083540);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_113083548);
  uVar14 = ((undefined8 *)(unaff_x20 + _DAT_113083548))[1];
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_113083550);
  uVar15 = ((undefined8 *)(unaff_x20 + _DAT_113083550))[1];
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(lVar19 + _DAT_113083500);
  *puVar1 = uVar2;
  puVar1[1] = uVar9;
  puVar1 = (undefined8 *)(lVar19 + _DAT_113083508);
  *puVar1 = uVar3;
  puVar1[1] = uVar10;
  puVar1 = (undefined8 *)(lVar19 + _DAT_113083510);
  *puVar1 = uVar20;
  puVar1[1] = uVar21;
  puVar1 = (undefined8 *)(lVar19 + _DAT_113083518);
  *puVar1 = uVar4;
  puVar1[1] = uVar11;
  puVar1 = (undefined8 *)(lVar19 + _DAT_113083520);
  *puVar1 = uVar5;
  puVar1[1] = uVar12;
  puVar1 = (undefined8 *)(lVar19 + _DAT_113083528);
  *puVar1 = uVar6;
  puVar1[1] = uVar13;
  *(undefined8 *)(lVar19 + _DAT_113083530) = param_1;
  *(undefined1 *)(lVar19 + _DAT_113083538) = uVar16;
  *(undefined1 *)(lVar19 + _DAT_113083540) = uVar17;
  puVar1 = (undefined8 *)(lVar19 + _DAT_113083548);
  *puVar1 = uVar7;
  puVar1[1] = uVar14;
  puVar1 = (undefined8 *)(lVar19 + _DAT_113083550);
  *puVar1 = uVar8;
  puVar1[1] = uVar15;
  *(undefined1 *)(lVar19 + _DAT_113083558) = param_2;
  puVar18 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar12);
  _swift_bridgeObjectRetain(uVar13);
  _swift_bridgeObjectRetain(uVar14);
  _swift_bridgeObjectRetain(uVar15);
  _objc_msgSendSuper2(auStack_80,puVar18);
  return;
}



/* Entry: 10451df7c; end: 10451dfcb; -[SCMapDrop withState:isSaved:] */

void FUN_10451df7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain();
  FUN_10451dcf4(param_3,param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10451dfcc; end: 10451e233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451dfcc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uVar19;
  long unaff_x20;
  undefined1 auStack_80 [16];
  
  lVar18 = unaff_x20;
  _swift_getObjectType();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113083500);
  uVar8 = ((undefined8 *)(unaff_x20 + _DAT_113083500))[1];
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113083508);
  uVar9 = ((undefined8 *)(unaff_x20 + _DAT_113083508))[1];
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113083518);
  uVar10 = ((undefined8 *)(unaff_x20 + _DAT_113083518))[1];
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113083520);
  uVar11 = ((undefined8 *)(unaff_x20 + _DAT_113083520))[1];
  uVar19 = *(undefined8 *)(unaff_x20 + _DAT_113083530);
  uVar14 = *(undefined1 *)(unaff_x20 + _DAT_113083538);
  uVar15 = *(undefined1 *)(unaff_x20 + _DAT_113083540);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_113083528);
  uVar12 = ((undefined8 *)(unaff_x20 + _DAT_113083528))[1];
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_113083550);
  uVar13 = ((undefined8 *)(unaff_x20 + _DAT_113083550))[1];
  uVar16 = *(undefined1 *)(unaff_x20 + _DAT_113083558);
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(lVar18 + _DAT_113083500);
  *puVar1 = uVar2;
  puVar1[1] = uVar8;
  puVar1 = (undefined8 *)(lVar18 + _DAT_113083508);
  *puVar1 = uVar3;
  puVar1[1] = uVar9;
  puVar1 = (undefined8 *)(lVar18 + _DAT_113083510);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar18 + _DAT_113083518);
  *puVar1 = uVar4;
  puVar1[1] = uVar10;
  puVar1 = (undefined8 *)(lVar18 + _DAT_113083520);
  *puVar1 = uVar5;
  puVar1[1] = uVar11;
  puVar1 = (undefined8 *)(lVar18 + _DAT_113083528);
  *puVar1 = uVar6;
  puVar1[1] = uVar12;
  *(undefined8 *)(lVar18 + _DAT_113083530) = uVar19;
  *(undefined1 *)(lVar18 + _DAT_113083538) = uVar14;
  *(undefined1 *)(lVar18 + _DAT_113083540) = uVar15;
  puVar1 = (undefined8 *)(lVar18 + _DAT_113083548);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar18 + _DAT_113083550);
  *puVar1 = uVar7;
  puVar1[1] = uVar13;
  *(undefined1 *)(lVar18 + _DAT_113083558) = uVar16;
  puVar17 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar12);
  _swift_bridgeObjectRetain(uVar13);
  _objc_msgSendSuper2(auStack_80,puVar17);
  return;
}



/* Entry: 10451e234; end: 10451e27f; -[SCMapDrop withCoordinate:] */

void FUN_10451e234(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_3;
  FUN_10451dfcc(param_1,param_2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10451e280; end: 10451e4f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451e280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  long unaff_x20;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auStack_80 [16];
  
  lVar16 = unaff_x20;
  _swift_getObjectType();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113083500);
  uVar7 = ((undefined8 *)(unaff_x20 + _DAT_113083500))[1];
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113083508);
  uVar8 = ((undefined8 *)(unaff_x20 + _DAT_113083508))[1];
  uVar18 = *(undefined8 *)(unaff_x20 + _DAT_113083510);
  uVar19 = ((undefined8 *)(unaff_x20 + _DAT_113083510))[1];
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113083520);
  uVar9 = ((undefined8 *)(unaff_x20 + _DAT_113083520))[1];
  uVar17 = *(undefined8 *)(unaff_x20 + _DAT_113083530);
  uVar12 = *(undefined1 *)(unaff_x20 + _DAT_113083538);
  uVar13 = *(undefined1 *)(unaff_x20 + _DAT_113083540);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113083528);
  uVar10 = ((undefined8 *)(unaff_x20 + _DAT_113083528))[1];
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_113083548);
  uVar11 = ((undefined8 *)(unaff_x20 + _DAT_113083548))[1];
  uVar14 = *(undefined1 *)(unaff_x20 + _DAT_113083558);
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(lVar16 + _DAT_113083500);
  *puVar1 = uVar2;
  puVar1[1] = uVar7;
  puVar1 = (undefined8 *)(lVar16 + _DAT_113083508);
  *puVar1 = uVar3;
  puVar1[1] = uVar8;
  puVar1 = (undefined8 *)(lVar16 + _DAT_113083510);
  *puVar1 = uVar18;
  puVar1[1] = uVar19;
  puVar1 = (undefined8 *)(lVar16 + _DAT_113083518);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar16 + _DAT_113083520);
  *puVar1 = uVar4;
  puVar1[1] = uVar9;
  puVar1 = (undefined8 *)(lVar16 + _DAT_113083528);
  *puVar1 = uVar5;
  puVar1[1] = uVar10;
  *(undefined8 *)(lVar16 + _DAT_113083530) = uVar17;
  *(undefined1 *)(lVar16 + _DAT_113083538) = uVar12;
  *(undefined1 *)(lVar16 + _DAT_113083540) = uVar13;
  puVar1 = (undefined8 *)(lVar16 + _DAT_113083548);
  *puVar1 = uVar6;
  puVar1[1] = uVar11;
  puVar1 = (undefined8 *)(lVar16 + _DAT_113083550);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined1 *)(lVar16 + _DAT_113083558) = uVar14;
  puVar15 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  _objc_msgSendSuper2(auStack_80,puVar15);
  return;
}



/* Entry: 10451e4f4; end: 10451e593; -[SCMapDrop withTitle:icon:] */

void FUN_10451e4f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  if (param_4 == 0) {
    param_4 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  }
  _objc_retain(param_1);
  FUN_10451e280(param_3,param_2,param_4,uVar1);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10451e594; end: 10451e98b;  */

long FUN_10451e594(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10451e98c; end: 10451e99f;  */

bool FUN_10451e98c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10451e9a0; end: 10451ea77;  */

void FUN_10451e9a0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10451ea78; end: 10451ea97;  */

void FUN_10451ea78(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10451ea98; end: 10451ead7;  */

void FUN_10451ea98(void)

{
  undefined *puVar1;
  
  if (puRam00000001130834c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd13c10;
  _swift_getWitnessTable(&UNK_10dd13c10,&UNK_1107836d0);
  puRam00000001130834c0 = puVar1;
  return;
}



/* Entry: 10451ead8; end: 10451eaff;  */

undefined1  [16] FUN_10451ead8(void)

{
  return ZEXT816(0x1107836d0);
}



/* Entry: 10451eb00; end: 10451eb3f;  */

void FUN_10451eb00(void)

{
  undefined *puVar1;
  
  if (puRam00000001130834c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd13cd0;
  _swift_getWitnessTable(&UNK_10dd13cd0,&UNK_110783748);
  puRam00000001130834c8 = puVar1;
  return;
}



/* Entry: 10451eb40; end: 10451ebeb;  */

void FUN_10451eb40(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10451ebec; end: 10451ec27;  */

void FUN_10451ebec(long *param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = *param_2 - 4U < 0xfffffffffffffffd;
  lVar1 = 0;
  if (!bVar2) {
    lVar1 = *param_2;
  }
  *param_1 = lVar1;
  *(bool *)(param_1 + 1) = bVar2;
  return;
}



/* Entry: 10451ec28; end: 10451ec73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451ec28(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130834d0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10451ec74; end: 10451eccb; -[_TtC28SCMapDropsAnnotationServices28SCMapDropsAnnotationServices initWithManagerFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451ec74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130834d0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _swift_unknownObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 10451eccc; end: 10451ecf3; -[_TtC28SCMapDropsAnnotationServices28SCMapDropsAnnotationServices makeAnnotationManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451eccc(long param_1)

{
  func_0x00010c0b6f20(*(undefined8 *)(param_1 + _DAT_1130834d0));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10451ecf4; end: 10451ed53; -[_TtC28SCMapDropsAnnotationServices28SCMapDropsAnnotationServices init] */

void FUN_10451ecf4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCMapDropsAnnotationServices.SCMapDropsAnnotationServices",0x39,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10451ed20);
  (*pcVar1)();
}



/* Entry: 10451ed54; end: 10451ed63; -[_TtC28SCMapDropsAnnotationServices28SCMapDropsAnnotationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451ed54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_1130834d0));
  return;
}



/* Entry: 10451ed64; end: 10451ed83;  */

void FUN_10451ed64(void)

{
  _objc_opt_self(&PTR_PTR_1129cac08);
  return;
}



/* Entry: 10451ed84; end: 10451ef1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451ed84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined1 param_20)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_88 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083500);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083508);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083510);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083518);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083520);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083528);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_113083530) = param_13;
  *(undefined1 *)(unaff_x20 + _DAT_113083538) = (undefined1)param_14;
  *(undefined1 *)(unaff_x20 + _DAT_113083540) = param_14._1_1_;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083548);
  *puVar1 = param_16;
  puVar1[1] = param_17;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083550);
  *puVar1 = param_18;
  puVar1[1] = param_19;
  *(undefined1 *)(unaff_x20 + _DAT_113083558) = param_20;
  _objc_msgSendSuper2(auStack_88,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10451ef1c; end: 10451ef27; -[SCMapDrop dropIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451ef1c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113083500);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113083500))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10451ef28; end: 10451ef33; -[SCMapDrop creatorIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451ef28(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113083508);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113083508))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10451ef34; end: 10451ef47; -[SCMapDrop coordinate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10451ef34(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_113083510);
}



/* Entry: 10451ef48; end: 10451ef53; -[SCMapDrop name] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451ef48(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113083518);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113083518))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10451ef54; end: 10451ef9b;  */

void FUN_10451ef54(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10451ef9c; end: 10451efa7; -[SCMapDrop bitmojiID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451ef9c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113083520))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113083520);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10451efa8; end: 10451efb3; -[SCMapDrop selfieID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451efa8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113083528))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113083528);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10451efb4; end: 10451efc3; -[SCMapDrop state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10451efb4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113083530);
}



/* Entry: 10451efc4; end: 10451efd3; -[SCMapDrop isCreator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10451efc4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113083538);
}


