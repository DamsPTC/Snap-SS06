/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00113e98; end: 00113edb;  */

uint FUN_00113e98(uint param_1)

{
  func_0x0011128c();
  return param_1 & 1;
}



/* Entry: 00113edc; end: 00113f33;  */

uint FUN_00113edc(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_20 = param_1[8];
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  func_0x00185774(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 00113f34; end: 00113f3f;  */

/* WARNING: Removing unreachable block (ram,0x00113fb0) */

void FUN_00113f34(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  FUN_00174228(unaff_x20[3],&uStack_90,uVar1,uVar2,unaff_x20[2],unaff_x20[3]);
  FUN_0014cc4c(&uStack_90,uVar1,uVar2);
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  param_1[8] = uStack_50;
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  return;
}



/* Entry: 00113f40; end: 00113fe7;  */

/* WARNING: Removing unreachable block (ram,0x00113fb0) */

void FUN_00113f40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  (*param_4)(unaff_x20[3],&uStack_90,uVar1,uVar2,unaff_x20[2],unaff_x20[3]);
  FUN_0014cc4c(&uStack_90,uVar1,uVar2);
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  param_1[8] = uStack_50;
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  return;
}



/* Entry: 00113fe8; end: 00114017;  */

uint FUN_00113fe8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_001118c0(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],&UNK_009b2328,0x17514c);
  return (uint)param_1 & 1;
}



/* Entry: 00114018; end: 00114023;  */

bool FUN_00114018(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *unaff_x20;
  ulong uVar15;
  undefined1 auStack_120 [40];
  long alStack_f8 [3];
  undefined8 uStack_e0;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  uVar1 = *param_1;
  uVar4 = param_1[1];
  lVar2 = param_1[2];
  uVar14 = param_1[3];
  uVar15 = *unaff_x20;
  uVar13 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  uVar5 = unaff_x20[3];
  if (uVar5 != uVar14) {
    _swift_retain(uVar5);
    _swift_retain(uVar14);
    uVar11 = uVar5;
    (*(code *)0x17514c)(uVar5,uVar14);
    _swift_release(uVar14);
    _swift_release(uVar5);
    if ((uVar11 & 1) == 0) {
      return false;
    }
  }
  FUN_00038814(uVar15,uVar13,uVar1,uVar4);
  if ((uVar15 & 1) == 0) {
    return false;
  }
  if (*(long *)(uVar3 + 0x10) != *(long *)(lVar2 + 0x10)) {
    return false;
  }
  uVar14 = 1L << ((ulong)*(byte *)(uVar3 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(uVar3 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(uVar3 + 0x40);
  uVar14 = uVar14 + 0x3f >> 6;
  _swift_bridgeObjectRetain();
  lVar12 = 0;
  lVar8 = lVar12;
  if (uVar15 == 0) goto LAB_000e2ea0;
LAB_000e2ecc:
  uVar13 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
  uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
  uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
  uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
  uVar15 = uVar15 - 1 & uVar15;
  uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar8 << 6;
  lStack_d0 = *(long *)(*(long *)(uVar3 + 0x30) + uVar13 * 8);
  FUN_000e1304(*(long *)(uVar3 + 0x38) + uVar13 * 0x28,&uStack_c8);
  lVar12 = lVar8;
  do {
    lVar8 = lStack_d0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_78 = uStack_a8;
    lStack_80 = lStack_b0;
    uStack_98 = uStack_c8;
    lStack_a0 = lStack_d0;
    bVar7 = lStack_b0 == 0;
    if (lStack_b0 == 0) {
      _swift_release(uVar3);
      return true;
    }
    uVar13 = 0;
    FUN_000e1450(&uStack_98);
    if ((*(long *)(lVar2 + 0x10) == 0) || (FUN_000e1d94(lVar8), (uVar13 & 1) == 0)) {
LAB_000e3018:
      _swift_release(uVar3);
LAB_000e3040:
      FUN_00011670(&lStack_d0);
      return bVar7;
    }
    FUN_000e1304(*(long *)(lVar2 + 0x38) + lVar8 * 0x28,auStack_120);
    FUN_000e1450(auStack_120,alStack_f8);
    plVar9 = &lStack_d0;
    FUN_0001393c(plVar9,uStack_b8);
    _swift_getDynamicType();
    plVar10 = alStack_f8;
    FUN_0001393c(plVar10,uStack_e0);
    _swift_getDynamicType();
    lVar8 = lStack_b0;
    uVar1 = uStack_b8;
    if (plVar9 != plVar10) {
      _swift_release(uVar3);
      FUN_00011670(alStack_f8);
      goto LAB_000e3040;
    }
    FUN_0001393c(&lStack_d0,uStack_b8);
    plVar9 = alStack_f8;
    (**(code **)(lVar8 + 0x20))(plVar9,uVar1,lVar8);
    FUN_00011670(alStack_f8);
    if (((ulong)plVar9 & 1) == 0) goto LAB_000e3018;
    FUN_00011670(&lStack_d0);
    lVar8 = lVar12;
    if (uVar15 != 0) goto LAB_000e2ecc;
LAB_000e2ea0:
    uVar13 = uVar14;
    if ((long)uVar14 <= lVar12 + 1) {
      uVar13 = lVar12 + 1;
    }
    while( true ) {
      lVar8 = lVar12 + 1;
      if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0xe3070);
        (*pcVar6)();
      }
      if ((long)uVar14 <= lVar8) break;
      uVar15 = ((ulong *)(uVar3 + 0x40))[lVar8];
      lVar12 = lVar12 + 1;
      if (uVar15 != 0) goto LAB_000e2ecc;
    }
    uVar15 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    lStack_b0 = 0;
    uStack_c8 = 0;
    lStack_d0 = 0;
    lVar12 = uVar13 - 1;
  } while( true );
}



/* Entry: 00114024; end: 001140eb;  */

bool FUN_00114024(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *unaff_x20;
  ulong uVar15;
  undefined1 auStack_120 [40];
  long alStack_f8 [3];
  undefined8 uStack_e0;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  uVar1 = *param_1;
  uVar4 = param_1[1];
  lVar2 = param_1[2];
  uVar14 = param_1[3];
  uVar15 = *unaff_x20;
  uVar13 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  uVar5 = unaff_x20[3];
  if (uVar5 != uVar14) {
    _swift_retain(uVar5);
    _swift_retain(uVar14);
    uVar11 = uVar5;
    (*param_4)(uVar5,uVar14);
    _swift_release(uVar14);
    _swift_release(uVar5);
    if ((uVar11 & 1) == 0) {
      return false;
    }
  }
  FUN_00038814(uVar15,uVar13,uVar1,uVar4);
  if ((uVar15 & 1) == 0) {
    return false;
  }
  if (*(long *)(uVar3 + 0x10) != *(long *)(lVar2 + 0x10)) {
    return false;
  }
  uVar14 = 1L << ((ulong)*(byte *)(uVar3 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(uVar3 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(uVar3 + 0x40);
  uVar14 = uVar14 + 0x3f >> 6;
  _swift_bridgeObjectRetain();
  lVar12 = 0;
  lVar8 = lVar12;
  if (uVar15 == 0) goto LAB_000e2ea0;
LAB_000e2ecc:
  uVar13 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
  uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
  uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
  uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
  uVar15 = uVar15 - 1 & uVar15;
  uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar8 << 6;
  lStack_d0 = *(long *)(*(long *)(uVar3 + 0x30) + uVar13 * 8);
  FUN_000e1304(*(long *)(uVar3 + 0x38) + uVar13 * 0x28,&uStack_c8);
  lVar12 = lVar8;
  do {
    lVar8 = lStack_d0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_78 = uStack_a8;
    lStack_80 = lStack_b0;
    uStack_98 = uStack_c8;
    lStack_a0 = lStack_d0;
    bVar7 = lStack_b0 == 0;
    if (lStack_b0 == 0) {
      _swift_release(uVar3);
      return true;
    }
    uVar13 = 0;
    FUN_000e1450(&uStack_98);
    if ((*(long *)(lVar2 + 0x10) == 0) || (FUN_000e1d94(lVar8), (uVar13 & 1) == 0)) {
LAB_000e3018:
      _swift_release(uVar3);
LAB_000e3040:
      FUN_00011670(&lStack_d0);
      return bVar7;
    }
    FUN_000e1304(*(long *)(lVar2 + 0x38) + lVar8 * 0x28,auStack_120);
    FUN_000e1450(auStack_120,alStack_f8);
    plVar9 = &lStack_d0;
    FUN_0001393c(plVar9,uStack_b8);
    _swift_getDynamicType();
    plVar10 = alStack_f8;
    FUN_0001393c(plVar10,uStack_e0);
    _swift_getDynamicType();
    lVar8 = lStack_b0;
    uVar1 = uStack_b8;
    if (plVar9 != plVar10) {
      _swift_release(uVar3);
      FUN_00011670(alStack_f8);
      goto LAB_000e3040;
    }
    FUN_0001393c(&lStack_d0,uStack_b8);
    plVar9 = alStack_f8;
    (**(code **)(lVar8 + 0x20))(plVar9,uVar1,lVar8);
    FUN_00011670(alStack_f8);
    if (((ulong)plVar9 & 1) == 0) goto LAB_000e3018;
    FUN_00011670(&lStack_d0);
    lVar8 = lVar12;
    if (uVar15 != 0) goto LAB_000e2ecc;
LAB_000e2ea0:
    uVar13 = uVar14;
    if ((long)uVar14 <= lVar12 + 1) {
      uVar13 = lVar12 + 1;
    }
    while( true ) {
      lVar8 = lVar12 + 1;
      if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0xe3070);
        (*pcVar6)();
      }
      if ((long)uVar14 <= lVar8) break;
      uVar15 = ((ulong *)(uVar3 + 0x40))[lVar8];
      lVar12 = lVar12 + 1;
      if (uVar15 != 0) goto LAB_000e2ecc;
    }
    uVar15 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    lStack_b0 = 0;
    uStack_c8 = 0;
    lStack_d0 = 0;
    lVar12 = uVar13 - 1;
  } while( true );
}



/* Entry: 001140ec; end: 001140f3;  */

undefined8 FUN_001140ec(void)

{
  return 1;
}



/* Entry: 001140f4; end: 001141b7;  */

void FUN_001140f4(void)

{
  func_0x0014d2f4();
  return;
}



/* Entry: 001141b8; end: 001141bf;  */

undefined8 FUN_001141b8(void)

{
  return 1;
}



/* Entry: 001141c0; end: 00114247;  */

/* WARNING: Removing unreachable block (ram,0x00114214) */

void FUN_001141c0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_50 = unaff_x20[2];
  uStack_48 = (undefined1)unaff_x20[3];
  uStack_3f = *(undefined8 *)((long)unaff_x20 + 0x21);
  uStack_47 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x19);
  uStack_40 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x19) >> 0x38);
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  FUN_00177160(&uStack_b0);
  param_1[5] = uStack_88;
  param_1[4] = uStack_90;
  param_1[7] = uStack_78;
  param_1[6] = uStack_80;
  param_1[8] = uStack_70;
  param_1[1] = uStack_a8;
  *param_1 = uStack_b0;
  param_1[3] = uStack_98;
  param_1[2] = uStack_a0;
  return;
}



/* Entry: 00114248; end: 00114283;  */

uint FUN_00114248(uint param_1)

{
  FUN_00111510();
  return param_1 & 1;
}



/* Entry: 00114284; end: 001142cb;  */

uint FUN_00114284(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_30 = param_1[2];
  uStack_28 = (undefined1)param_1[3];
  uStack_1f = *(undefined8 *)((long)param_1 + 0x21);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_1 + 0x19);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x19) >> 0x38);
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_60 = unaff_x20[2];
  uStack_58 = (undefined1)unaff_x20[3];
  uStack_4f = *(undefined8 *)((long)unaff_x20 + 0x21);
  uStack_57 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x19);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x19) >> 0x38);
  func_0x00182c8c(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 001142cc; end: 0011433f;  */

void FUN_001142cc(void)

{
  FUN_0014d820();
  return;
}



/* Entry: 00114340; end: 00114387;  */

uint FUN_00114340(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_18 = param_1[7];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  func_0x00185ce0(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 00114388; end: 00114417;  */

/* WARNING: Removing unreachable block (ram,0x001143e4) */

void FUN_00114388(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_40 = unaff_x20[8];
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_90 = param_1[8];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  FUN_00178314(&uStack_d0);
  param_1[5] = uStack_a8;
  param_1[4] = uStack_b0;
  param_1[7] = uStack_98;
  param_1[6] = uStack_a0;
  param_1[8] = uStack_90;
  param_1[1] = uStack_c8;
  *param_1 = uStack_d0;
  param_1[3] = uStack_b8;
  param_1[2] = uStack_c0;
  return;
}



/* Entry: 00114418; end: 0011445b;  */

uint FUN_00114418(uint param_1)

{
  FUN_00111a0c();
  return param_1 & 1;
}



/* Entry: 0011445c; end: 001144b3;  */

uint FUN_0011445c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_20 = param_1[8];
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  func_0x00185edc(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 001144b4; end: 00114557;  */

/* WARNING: Removing unreachable block (ram,0x00114524) */

void FUN_001144b4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_58 = unaff_x20[0xb];
  uStack_60 = unaff_x20[10];
  uStack_50 = unaff_x20[0xc];
  uStack_48 = (undefined1)unaff_x20[0xd];
  uStack_3f = *(undefined8 *)((long)unaff_x20 + 0x71);
  uStack_47 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x69);
  uStack_40 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x69) >> 0x38);
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_d8 = param_1[5];
  uStack_e0 = param_1[4];
  uStack_c8 = param_1[7];
  uStack_d0 = param_1[6];
  uStack_c0 = param_1[8];
  uStack_f8 = param_1[1];
  uStack_100 = *param_1;
  uStack_e8 = param_1[3];
  uStack_f0 = param_1[2];
  FUN_00178d84(&uStack_100);
  param_1[5] = uStack_d8;
  param_1[4] = uStack_e0;
  param_1[7] = uStack_c8;
  param_1[6] = uStack_d0;
  param_1[8] = uStack_c0;
  param_1[1] = uStack_f8;
  *param_1 = uStack_100;
  param_1[3] = uStack_e8;
  param_1[2] = uStack_f0;
  return;
}



/* Entry: 00114558; end: 001145ab;  */

uint FUN_00114558(uint param_1)

{
  FUN_00110c18();
  return param_1 & 1;
}



/* Entry: 001145ac; end: 0011462b;  */

uint FUN_001145ac(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined8 uStack_af;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  uVar1 = 0;
  uStack_58 = param_1[9];
  uStack_60 = param_1[8];
  uStack_48 = param_1[0xb];
  uStack_50 = param_1[10];
  uStack_40 = param_1[0xc];
  uStack_38 = (undefined1)param_1[0xd];
  uStack_2f = *(undefined8 *)((long)param_1 + 0x71);
  uStack_37 = (undefined7)*(undefined8 *)((long)param_1 + 0x69);
  uStack_30 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x69) >> 0x38);
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  uStack_118 = unaff_x20[1];
  uStack_120 = *unaff_x20;
  uStack_108 = unaff_x20[3];
  uStack_110 = unaff_x20[2];
  uStack_f8 = unaff_x20[5];
  uStack_100 = unaff_x20[4];
  uStack_e8 = unaff_x20[7];
  uStack_f0 = unaff_x20[6];
  uStack_d8 = unaff_x20[9];
  uStack_e0 = unaff_x20[8];
  uStack_c8 = unaff_x20[0xb];
  uStack_d0 = unaff_x20[10];
  uStack_c0 = unaff_x20[0xc];
  uStack_af = *(undefined8 *)((long)unaff_x20 + 0x71);
  uStack_b0 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x69) >> 0x38);
  uStack_b8 = (undefined1)unaff_x20[0xd];
  uStack_b7 = (undefined7)((ulong)unaff_x20[0xd] >> 8);
  func_0x00184624(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 0011462c; end: 001146af;  */

void FUN_0011462c(void)

{
  FUN_0014d3f8();
  return;
}



/* Entry: 001146b0; end: 00114707;  */

uint FUN_001146b0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_20 = *(undefined1 *)(param_1 + 8);
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = *(undefined1 *)(unaff_x20 + 8);
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  FUN_0018554c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 00114708; end: 00114797;  */

/* WARNING: Removing unreachable block (ram,0x00114764) */

void FUN_00114708(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_40 = unaff_x20[8];
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_90 = param_1[8];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  FUN_0017a3c8(&uStack_d0);
  param_1[5] = uStack_a8;
  param_1[4] = uStack_b0;
  param_1[7] = uStack_98;
  param_1[6] = uStack_a0;
  param_1[8] = uStack_90;
  param_1[1] = uStack_c8;
  *param_1 = uStack_d0;
  param_1[3] = uStack_b8;
  param_1[2] = uStack_c0;
  return;
}



/* Entry: 00114798; end: 001147db;  */

uint FUN_00114798(uint param_1)

{
  func_0x00111368();
  return param_1 & 1;
}



/* Entry: 001147dc; end: 00114833;  */

uint FUN_001147dc(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_20 = param_1[8];
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  func_0x00185a78(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 00114834; end: 001148d7;  */

/* WARNING: Removing unreachable block (ram,0x001148a4) */

void FUN_00114834(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_58 = unaff_x20[0xb];
  uStack_60 = unaff_x20[10];
  uStack_48 = unaff_x20[0xd];
  uStack_50 = unaff_x20[0xc];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_40 = unaff_x20[0xe];
  uStack_d8 = param_1[5];
  uStack_e0 = param_1[4];
  uStack_c8 = param_1[7];
  uStack_d0 = param_1[6];
  uStack_c0 = param_1[8];
  uStack_f8 = param_1[1];
  uStack_100 = *param_1;
  uStack_e8 = param_1[3];
  uStack_f0 = param_1[2];
  FUN_0017b0c0(&uStack_100);
  param_1[5] = uStack_d8;
  param_1[4] = uStack_e0;
  param_1[7] = uStack_c8;
  param_1[6] = uStack_d0;
  param_1[8] = uStack_c0;
  param_1[1] = uStack_f8;
  *param_1 = uStack_100;
  param_1[3] = uStack_e8;
  param_1[2] = uStack_f0;
  return;
}



/* Entry: 001148d8; end: 0011492b;  */

uint FUN_001148d8(uint param_1)

{
  func_0x00110500();
  return param_1 & 1;
}



/* Entry: 0011492c; end: 001149ab;  */

uint FUN_0011492c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_58 = param_1[9];
  uStack_60 = param_1[8];
  uStack_48 = param_1[0xb];
  uStack_50 = param_1[10];
  uStack_38 = param_1[0xd];
  uStack_40 = param_1[0xc];
  uStack_30 = param_1[0xe];
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  uStack_118 = unaff_x20[1];
  uStack_120 = *unaff_x20;
  uStack_108 = unaff_x20[3];
  uStack_110 = unaff_x20[2];
  uStack_f8 = unaff_x20[5];
  uStack_100 = unaff_x20[4];
  uStack_e8 = unaff_x20[7];
  uStack_f0 = unaff_x20[6];
  uStack_d8 = unaff_x20[9];
  uStack_e0 = unaff_x20[8];
  uStack_c8 = unaff_x20[0xb];
  uStack_d0 = unaff_x20[10];
  uStack_b8 = unaff_x20[0xd];
  uStack_c0 = unaff_x20[0xc];
  uStack_b0 = unaff_x20[0xe];
  FUN_00182920(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 001149ac; end: 00114a6f;  */

void FUN_001149ac(void)

{
  FUN_0014d1f8();
  return;
}



/* Entry: 00114a70; end: 00114abb;  */

/* WARNING: Removing unreachable block (ram,0x00115f3c) */

void FUN_00114a70(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  FUN_0017c428(&uStack_80,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 00114abc; end: 00114ae7;  */

uint FUN_00114abc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_00111f9c(param_1,*unaff_x20,unaff_x20[1],&UNK_009b3020,0x11655c);
  return (uint)param_1 & 1;
}



/* Entry: 00114ae8; end: 00114af3;  */

void FUN_00114ae8(long *param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *unaff_x20;
  long lVar18;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  lVar11 = *param_1;
  uVar17 = param_1[1];
  uVar7 = *unaff_x20;
  pbVar9 = (byte *)unaff_x20[1];
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar3 = (uint)((ulong)pbVar9 >> 0x20);
  uVar12 = uVar3 >> 0x1e;
  uVar4 = (uint)(uVar17 >> 0x20);
  uVar15 = uVar4 >> 0x1e;
  iVar6 = (int)uVar7;
  if ((ulong)pbVar9 >> 0x3e == 3) {
    uVar14 = 0;
    if ((((uVar7 != 0) || (pbVar9 != (byte *)0xc000000000000000)) || (uVar17 >> 0x3e < 3)) ||
       ((uVar14 = 0, lVar11 != 0 || (uVar17 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar3 >> 0x1e < 2) {
      if (uVar12 == 0) {
        uVar14 = (ulong)pbVar9 >> 0x30 & 0xff;
      }
      else {
        iVar13 = (int)(uVar7 >> 0x20);
        if (SBORROW4(iVar13,iVar6)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar5)();
        }
        uVar14 = (ulong)(iVar13 - iVar6);
      }
joined_r0x000389b8:
      if (uVar4 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar15 != 2) {
        uVar7 = (ulong)(uVar14 == 0);
        goto LAB_00038af8;
      }
      uVar16 = *(long *)(lVar11 + 0x18) - *(long *)(lVar11 + 0x10);
      if (SBORROW8(*(long *)(lVar11 + 0x18),*(long *)(lVar11 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar5)();
      }
LAB_000388d4:
      if (uVar14 != uVar16) {
LAB_0003899c:
        uVar7 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar12 == 2) {
        uVar14 = *(long *)(uVar7 + 0x18) - *(long *)(uVar7 + 0x10);
        if (SBORROW8(*(long *)(uVar7 + 0x18),*(long *)(uVar7 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar5)();
        }
        goto joined_r0x000389b8;
      }
      uVar14 = 0;
      if (1 < uVar15) goto LAB_00038898;
LAB_000388cc:
      if (uVar15 == 0) {
        uVar16 = uVar17 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar13 = (int)((ulong)lVar11 >> 0x20);
      if (SBORROW4(iVar13,(int)lVar11)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar5)();
      }
      if (uVar14 != (long)(iVar13 - (int)lVar11)) goto LAB_0003899c;
    }
    if (0 < (long)uVar14) {
      if (uVar12 < 2) {
        if (uVar12 == 0) {
          abStack_70[0] = (byte)uVar7;
          abStack_70[1] = (byte)(uVar7 >> 8);
          abStack_70[2] = (byte)(uVar7 >> 0x10);
          abStack_70[3] = (byte)(uVar7 >> 0x18);
          abStack_70[4] = (byte)(uVar7 >> 0x20);
          abStack_70[5] = (byte)(uVar7 >> 0x28);
          abStack_70[6] = (byte)(uVar7 >> 0x30);
          abStack_70[7] = (byte)(uVar7 >> 0x38);
          abStack_70[8] = (byte)pbVar9;
          abStack_70[9] = (byte)((ulong)pbVar9 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar9 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar9 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar9 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar9 >> 0x28);
          pbVar9 = abStack_70 + ((ulong)pbVar9 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar7 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar18 = (long)iVar6;
        uVar14 = ((long)uVar7 >> 0x20) - lVar18;
        if ((long)uVar7 >> 0x20 < lVar18) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar5)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar7 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar7 = 0;
        }
        else {
          uVar16 = uVar7;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar18,uVar16)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar5)();
          }
          uVar7 = (lVar18 - uVar16) + uVar7;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar7 != 0) {
            if ((long)uVar14 <= (long)uVar16) {
              uVar16 = uVar14;
            }
            pbVar10 = (byte *)(uVar16 + uVar7);
            goto LAB_00038aec;
          }
        }
        pbVar10 = (byte *)0x0;
      }
      else {
        if (uVar12 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar9 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar18 = *(long *)(uVar7 + 0x10);
        lVar1 = *(long *)(uVar7 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar14 = uVar7;
        if (uVar7 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar18,uVar14)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar5)();
          }
          uVar7 = (lVar18 - uVar14) + uVar7;
        }
        uVar16 = lVar1 - lVar18;
        if (SBORROW8(lVar1,lVar18)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar5)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar7 == 0) {
          pbVar10 = (byte *)0x0;
        }
        else {
          if ((long)uVar16 <= (long)uVar14) {
            uVar14 = uVar16;
          }
          pbVar10 = (byte *)(uVar14 + uVar7);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar9 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar7,pbVar10,lVar11,uVar17);
      uVar7 = (ulong)abStack_70[0];
      pbVar9 = pbVar10;
      goto LAB_00038af8;
    }
  }
  uVar7 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar18 = (long)pbVar9 - uVar7;
  if (SBORROW8((long)pbVar9,uVar7)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar5)();
  }
  uVar14 = *unaff_x20;
  uVar17 = uVar14 & 0xffffffffffffff8;
  lVar1 = uVar17 + 0x20 + uVar7 * 8;
  uVar8 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  _swift_arrayDestroy(lVar1,lVar18,uVar8);
  lVar2 = lVar11 - lVar18;
  if (SBORROW8(lVar11,lVar18)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar5)();
  }
  if (lVar2 != 0) {
    if (uVar14 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar17 + 0x10);
      lVar18 = uVar7 - (long)pbVar9;
    }
    else {
      uVar7 = uVar17;
      if ((uVar14 & 0x8000000000000000) != 0) {
        uVar7 = uVar14;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar18 = uVar7 - (long)pbVar9;
    }
    if (SBORROW8(uVar7,(long)pbVar9)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar5)();
    }
    uVar7 = lVar1 + lVar11 * 8;
    uVar16 = uVar17 + 0x20 + (long)pbVar9 * 8;
    if (uVar7 != uVar16 || uVar16 + lVar18 * 8 <= uVar7) {
      _memmove(uVar7,uVar16,lVar18 << 3);
    }
    if (uVar14 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar17 + 0x10);
    }
    else {
      uVar7 = uVar17;
      if ((uVar14 & 0x8000000000000000) != 0) {
        uVar7 = uVar14;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar7,lVar2)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar5)();
    }
    *(ulong *)(uVar17 + 0x10) = uVar7 + lVar2;
  }
  if (0 < lVar11) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar5)();
  }
  return;
}



/* Entry: 00114af4; end: 00114b73;  */

/* WARNING: Removing unreachable block (ram,0x00114b40) */

void FUN_00114af4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  FUN_0017e510(&uStack_80,*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined2 *)(unaff_x20 + 3));
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 00114b74; end: 00114baf;  */

uint FUN_00114b74(undefined8 param_1)

{
  undefined8 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 *unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 uStack_80;
  undefined1 auStack_78 [40];
  
  uVar5 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar6 = unaff_x20[2];
  uVar2 = *(undefined2 *)(unaff_x20 + 3);
  FUN_000ea51c(param_1,auStack_78);
  uVar3 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  puVar4 = &uStack_98;
  _swift_dynamicCast(puVar4,auStack_78,uVar3,&UNK_009b3130,6);
  if ((int)puVar4 == 0) {
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    func_0x0011624c(0,0,0,0);
    uVar7 = 0;
  }
  else {
    FUN_0017e744(uVar5,uVar1,uVar6,uVar2,uStack_98,uStack_90,uStack_88,uStack_80);
    uVar7 = (uint)uVar5;
    func_0x0011624c(uStack_98,uStack_90,uStack_88,uStack_80);
  }
  return uVar7 & 1;
}



/* Entry: 00114bb0; end: 00114c47;  */

/* WARNING: Removing unreachable block (ram,0x00114c10) */

void FUN_00114bb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  (*param_4)(unaff_x20[2],&uStack_90);
  FUN_0014cc4c(&uStack_90,uVar1,uVar2);
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  param_1[8] = uStack_50;
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  return;
}



/* Entry: 00114c48; end: 00114c77;  */

uint FUN_00114c48(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_001108e8(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],&UNK_009b31b8,FUN_0017fab0);
  return (uint)param_1 & 1;
}



/* Entry: 00114c78; end: 00114c83;  */

ulong FUN_00114c78(long *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ulong *unaff_x20;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  lVar12 = *param_1;
  uVar8 = param_1[1];
  uVar18 = param_1[2];
  uVar6 = *unaff_x20;
  pbVar10 = (byte *)unaff_x20[1];
  uVar16 = unaff_x20[2];
  if (uVar16 != uVar18) {
    _swift_retain(uVar16);
    _swift_retain(uVar18);
    uVar9 = uVar16;
    FUN_0017fab0(uVar16,uVar18);
    _swift_release(uVar18);
    _swift_release(uVar16);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar10 >> 0x20);
  uVar13 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar8 >> 0x20);
  uVar15 = uVar3 >> 0x1e;
  iVar5 = (int)uVar6;
  if ((ulong)pbVar10 >> 0x3e == 3) {
    uVar16 = 0;
    if ((((uVar6 != 0) || (pbVar10 != (byte *)0xc000000000000000)) || (uVar8 >> 0x3e < 3)) ||
       ((uVar16 = 0, lVar12 != 0 || (uVar8 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar13 == 0) {
        uVar16 = (ulong)pbVar10 >> 0x30 & 0xff;
      }
      else {
        iVar14 = (int)(uVar6 >> 0x20);
        if (SBORROW4(iVar14,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar16 = (ulong)(iVar14 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar15 != 2) {
        uVar6 = (ulong)(uVar16 == 0);
        goto LAB_00038af8;
      }
      uVar18 = *(long *)(lVar12 + 0x18) - *(long *)(lVar12 + 0x10);
      if (SBORROW8(*(long *)(lVar12 + 0x18),*(long *)(lVar12 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar16 != uVar18) {
LAB_0003899c:
        uVar6 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar13 == 2) {
        uVar16 = *(long *)(uVar6 + 0x18) - *(long *)(uVar6 + 0x10);
        if (SBORROW8(*(long *)(uVar6 + 0x18),*(long *)(uVar6 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar16 = 0;
      if (1 < uVar15) goto LAB_00038898;
LAB_000388cc:
      if (uVar15 == 0) {
        uVar18 = uVar8 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar14 = (int)((ulong)lVar12 >> 0x20);
      if (SBORROW4(iVar14,(int)lVar12)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar16 != (long)(iVar14 - (int)lVar12)) goto LAB_0003899c;
    }
    if (0 < (long)uVar16) {
      if (uVar13 < 2) {
        if (uVar13 == 0) {
          abStack_70[0] = (byte)uVar6;
          abStack_70[1] = (byte)(uVar6 >> 8);
          abStack_70[2] = (byte)(uVar6 >> 0x10);
          abStack_70[3] = (byte)(uVar6 >> 0x18);
          abStack_70[4] = (byte)(uVar6 >> 0x20);
          abStack_70[5] = (byte)(uVar6 >> 0x28);
          abStack_70[6] = (byte)(uVar6 >> 0x30);
          abStack_70[7] = (byte)(uVar6 >> 0x38);
          abStack_70[8] = (byte)pbVar10;
          abStack_70[9] = (byte)((ulong)pbVar10 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar10 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar10 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar10 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar10 >> 0x28);
          pbVar10 = abStack_70 + ((ulong)pbVar10 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar6 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        uVar16 = ((long)uVar6 >> 0x20) - lVar17;
        if ((long)uVar6 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar6 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar6 = 0;
        }
        else {
          uVar18 = uVar6;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar18)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar18) + uVar6;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar6 != 0) {
            if ((long)uVar16 <= (long)uVar18) {
              uVar18 = uVar16;
            }
            pbVar11 = (byte *)(uVar18 + uVar6);
            goto LAB_00038aec;
          }
        }
        pbVar11 = (byte *)0x0;
      }
      else {
        if (uVar13 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar10 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(uVar6 + 0x10);
        lVar1 = *(long *)(uVar6 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar16 = uVar6;
        if (uVar6 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar16)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar16) + uVar6;
        }
        uVar18 = lVar1 - lVar17;
        if (SBORROW8(lVar1,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar6 == 0) {
          pbVar11 = (byte *)0x0;
        }
        else {
          if ((long)uVar18 <= (long)uVar16) {
            uVar16 = uVar18;
          }
          pbVar11 = (byte *)(uVar16 + uVar6);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar10 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar6,pbVar11,lVar12,uVar8);
      uVar6 = (ulong)abStack_70[0];
      pbVar10 = pbVar11;
      goto LAB_00038af8;
    }
  }
  uVar6 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar6;
  }
  ___stack_chk_fail();
  lVar17 = (long)pbVar10 - uVar6;
  if (SBORROW8((long)pbVar10,uVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar18 = *unaff_x20;
  uVar16 = uVar18 & 0xffffffffffffff8;
  uVar6 = uVar16 + 0x20 + uVar6 * 8;
  uVar7 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar8 = uVar6;
  _swift_arrayDestroy(uVar6,lVar17,uVar7);
  lVar1 = lVar12 - lVar17;
  if (SBORROW8(lVar12,lVar17)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar1 != 0) {
    if (uVar18 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar16 + 0x10);
      lVar17 = uVar8 - (long)pbVar10;
    }
    else {
      uVar8 = uVar16;
      if ((uVar18 & 0x8000000000000000) != 0) {
        uVar8 = uVar18;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar17 = uVar8 - (long)pbVar10;
    }
    if (SBORROW8(uVar8,(long)pbVar10)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar6 = uVar6 + lVar12 * 8;
    uVar8 = uVar16 + 0x20 + (long)pbVar10 * 8;
    if (uVar6 != uVar8 || uVar8 + lVar17 * 8 <= uVar6) {
      _memmove(uVar6,uVar8,lVar17 << 3);
    }
    if (uVar18 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar16 + 0x10);
    }
    else {
      uVar8 = uVar16;
      if ((uVar18 & 0x8000000000000000) != 0) {
        uVar8 = uVar18;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar8,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar16 + 0x10) = uVar8 + lVar1;
  }
  if (0 < lVar12) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar8;
}



/* Entry: 00114c84; end: 00114d2f;  */

ulong FUN_00114c84(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ulong *unaff_x20;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  lVar12 = *param_1;
  uVar8 = param_1[1];
  uVar18 = param_1[2];
  uVar6 = *unaff_x20;
  pbVar10 = (byte *)unaff_x20[1];
  uVar16 = unaff_x20[2];
  if (uVar16 != uVar18) {
    _swift_retain(uVar16);
    _swift_retain(uVar18);
    uVar9 = uVar16;
    (*param_4)(uVar16,uVar18);
    _swift_release(uVar18);
    _swift_release(uVar16);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar10 >> 0x20);
  uVar13 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar8 >> 0x20);
  uVar15 = uVar3 >> 0x1e;
  iVar5 = (int)uVar6;
  if ((ulong)pbVar10 >> 0x3e == 3) {
    uVar16 = 0;
    if ((((uVar6 != 0) || (pbVar10 != (byte *)0xc000000000000000)) || (uVar8 >> 0x3e < 3)) ||
       ((uVar16 = 0, lVar12 != 0 || (uVar8 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar13 == 0) {
        uVar16 = (ulong)pbVar10 >> 0x30 & 0xff;
      }
      else {
        iVar14 = (int)(uVar6 >> 0x20);
        if (SBORROW4(iVar14,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar16 = (ulong)(iVar14 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar15 != 2) {
        uVar6 = (ulong)(uVar16 == 0);
        goto LAB_00038af8;
      }
      uVar18 = *(long *)(lVar12 + 0x18) - *(long *)(lVar12 + 0x10);
      if (SBORROW8(*(long *)(lVar12 + 0x18),*(long *)(lVar12 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar16 != uVar18) {
LAB_0003899c:
        uVar6 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar13 == 2) {
        uVar16 = *(long *)(uVar6 + 0x18) - *(long *)(uVar6 + 0x10);
        if (SBORROW8(*(long *)(uVar6 + 0x18),*(long *)(uVar6 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar16 = 0;
      if (1 < uVar15) goto LAB_00038898;
LAB_000388cc:
      if (uVar15 == 0) {
        uVar18 = uVar8 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar14 = (int)((ulong)lVar12 >> 0x20);
      if (SBORROW4(iVar14,(int)lVar12)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar16 != (long)(iVar14 - (int)lVar12)) goto LAB_0003899c;
    }
    if (0 < (long)uVar16) {
      if (uVar13 < 2) {
        if (uVar13 == 0) {
          abStack_70[0] = (byte)uVar6;
          abStack_70[1] = (byte)(uVar6 >> 8);
          abStack_70[2] = (byte)(uVar6 >> 0x10);
          abStack_70[3] = (byte)(uVar6 >> 0x18);
          abStack_70[4] = (byte)(uVar6 >> 0x20);
          abStack_70[5] = (byte)(uVar6 >> 0x28);
          abStack_70[6] = (byte)(uVar6 >> 0x30);
          abStack_70[7] = (byte)(uVar6 >> 0x38);
          abStack_70[8] = (byte)pbVar10;
          abStack_70[9] = (byte)((ulong)pbVar10 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar10 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar10 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar10 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar10 >> 0x28);
          pbVar10 = abStack_70 + ((ulong)pbVar10 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar6 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        uVar16 = ((long)uVar6 >> 0x20) - lVar17;
        if ((long)uVar6 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar6 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar6 = 0;
        }
        else {
          uVar18 = uVar6;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar18)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar18) + uVar6;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar6 != 0) {
            if ((long)uVar16 <= (long)uVar18) {
              uVar18 = uVar16;
            }
            pbVar11 = (byte *)(uVar18 + uVar6);
            goto LAB_00038aec;
          }
        }
        pbVar11 = (byte *)0x0;
      }
      else {
        if (uVar13 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar10 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(uVar6 + 0x10);
        lVar1 = *(long *)(uVar6 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar16 = uVar6;
        if (uVar6 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar16)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar16) + uVar6;
        }
        uVar18 = lVar1 - lVar17;
        if (SBORROW8(lVar1,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar6 == 0) {
          pbVar11 = (byte *)0x0;
        }
        else {
          if ((long)uVar18 <= (long)uVar16) {
            uVar16 = uVar18;
          }
          pbVar11 = (byte *)(uVar16 + uVar6);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar10 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar6,pbVar11,lVar12,uVar8);
      uVar6 = (ulong)abStack_70[0];
      pbVar10 = pbVar11;
      goto LAB_00038af8;
    }
  }
  uVar6 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar6;
  }
  ___stack_chk_fail();
  lVar17 = (long)pbVar10 - uVar6;
  if (SBORROW8((long)pbVar10,uVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar18 = *unaff_x20;
  uVar16 = uVar18 & 0xffffffffffffff8;
  uVar6 = uVar16 + 0x20 + uVar6 * 8;
  uVar7 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar8 = uVar6;
  _swift_arrayDestroy(uVar6,lVar17,uVar7);
  lVar1 = lVar12 - lVar17;
  if (SBORROW8(lVar12,lVar17)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar1 != 0) {
    if (uVar18 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar16 + 0x10);
      lVar17 = uVar8 - (long)pbVar10;
    }
    else {
      uVar8 = uVar16;
      if ((uVar18 & 0x8000000000000000) != 0) {
        uVar8 = uVar18;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar17 = uVar8 - (long)pbVar10;
    }
    if (SBORROW8(uVar8,(long)pbVar10)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar6 = uVar6 + lVar12 * 8;
    uVar8 = uVar16 + 0x20 + (long)pbVar10 * 8;
    if (uVar6 != uVar8 || uVar8 + lVar17 * 8 <= uVar6) {
      _memmove(uVar6,uVar8,lVar17 << 3);
    }
    if (uVar18 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar16 + 0x10);
    }
    else {
      uVar8 = uVar16;
      if ((uVar18 & 0x8000000000000000) != 0) {
        uVar8 = uVar18;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar8,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar16 + 0x10) = uVar8 + lVar1;
  }
  if (0 < lVar12) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar8;
}



/* Entry: 00114d30; end: 00114d3b;  */

/* WARNING: Removing unreachable block (ram,0x0014d168) */

void FUN_00114d30(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *unaff_x20;
  undefined4 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_1e8 [72];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  ulong uStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar8 = *unaff_x20;
  lVar3 = unaff_x20[1];
  uVar1 = unaff_x20[2];
  lVar10 = unaff_x20[3];
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  lVar14 = *(long *)(lVar8 + 0x10);
  if (lVar14 != 0) {
    __ss6HasherV8_combineyySuF(1);
    lVar15 = 0;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    uStack_c0 = uStack_70;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    do {
      plVar7 = (long *)(lVar8 + 0x20 + lVar15 * 0x48);
      lStack_110 = plVar7[8];
      lStack_128 = plVar7[5];
      uStack_130 = plVar7[4];
      lStack_118 = plVar7[7];
      lStack_120 = plVar7[6];
      lStack_148 = plVar7[1];
      lVar9 = *plVar7;
      lStack_138 = plVar7[3];
      lStack_140 = plVar7[2];
      uStack_178 = uStack_d8;
      uStack_180 = uStack_e0;
      uStack_168 = uStack_c8;
      uStack_170 = uStack_d0;
      uStack_160 = uStack_c0;
      uStack_198 = uStack_f8;
      uStack_1a0 = uStack_100;
      uStack_188 = uStack_e8;
      uStack_190 = uStack_f0;
      lVar13 = *(long *)(lVar9 + 0x10);
      lStack_150 = lVar9;
      if (lVar13 != 0) {
        __ss6HasherV8_combineyySuF(1);
        __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar9 + 0x10));
        puVar11 = (undefined4 *)(lVar9 + 0x20);
        do {
          __ss6HasherV8_combineyys6UInt32VF(*puVar11);
          lVar13 = lVar13 + -1;
          puVar11 = puVar11 + 1;
        } while (lVar13 != 0);
      }
      lVar9 = lStack_148;
      lVar13 = *(long *)(lStack_148 + 0x10);
      if (lVar13 != 0) {
        __ss6HasherV8_combineyySuF(2);
        __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar9 + 0x10));
        puVar11 = (undefined4 *)(lVar9 + 0x20);
        do {
          __ss6HasherV8_combineyys6UInt32VF(*puVar11);
          lVar13 = lVar13 + -1;
          puVar11 = puVar11 + 1;
        } while (lVar13 != 0);
      }
      lVar9 = lStack_120;
      lVar13 = lStack_128;
      if (lStack_120 == 0) {
        func_0x00191f94(&lStack_150,auStack_1e8);
        lVar13 = lStack_118;
        lVar9 = lStack_110;
      }
      else {
        __ss6HasherV8_combineyySuF(3);
        func_0x00191f94(&lStack_150,auStack_1e8);
        __sSS4hash4intoys6HasherVz_tF(&uStack_1a0,lVar13,lVar9);
        lVar13 = lStack_118;
        lVar9 = lStack_110;
      }
      lStack_118 = lVar13;
      lStack_110 = lVar9;
      if (lVar9 != 0) {
        __ss6HasherV8_combineyySuF(4);
        __sSS4hash4intoys6HasherVz_tF(&uStack_1a0,lVar13,lVar9);
      }
      lVar9 = lStack_140;
      lVar13 = *(long *)(lStack_140 + 0x10);
      if (lVar13 != 0) {
        __ss6HasherV8_combineyySuF(6);
        __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar9 + 0x10));
        puVar12 = (undefined8 *)(lVar9 + 0x28);
        do {
          uVar2 = puVar12[-1];
          uVar4 = *puVar12;
          _swift_bridgeObjectRetain(uVar4);
          __sSS4hash4intoys6HasherVz_tF(&uStack_1a0,uVar2,uVar4);
          _swift_bridgeObjectRelease(uVar4);
          puVar12 = puVar12 + 2;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      uVar5 = (uint)(uStack_130 >> 0x20);
      uVar6 = uVar5 >> 0x1e;
      if (uVar5 >> 0x1e < 2) {
        if (uVar6 == 0) {
          if ((uStack_130 & 0xff000000000000) == 0) goto LAB_0014d0f4;
        }
        else {
          lVar13 = (long)(int)lStack_138;
          lVar9 = lStack_138 >> 0x20;
LAB_0014d0e4:
          if (lVar13 == lVar9) goto LAB_0014d0f4;
        }
        __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_1a0);
      }
      else if (uVar6 == 2) {
        lVar13 = *(long *)(lStack_138 + 0x10);
        lVar9 = *(long *)(lStack_138 + 0x18);
        goto LAB_0014d0e4;
      }
LAB_0014d0f4:
      lVar15 = lVar15 + 1;
      func_0x00191fc8(&lStack_150);
      if (lVar15 == lVar14) goto LAB_0014d124;
      uStack_d8 = uStack_178;
      uStack_e0 = uStack_180;
      uStack_c8 = uStack_168;
      uStack_d0 = uStack_170;
      uStack_c0 = uStack_160;
      uStack_f8 = uStack_198;
      uStack_100 = uStack_1a0;
      uStack_e8 = uStack_188;
      uStack_f0 = uStack_190;
    } while( true );
  }
LAB_0014d140:
  FUN_0013bd14(&uStack_b0,536000000,0x1ff2b601,lVar10);
  uVar5 = (uint)(uVar1 >> 0x20);
  uVar6 = uVar5 >> 0x1e;
  if (uVar5 >> 0x1e < 2) {
    if (uVar6 != 0) {
      lVar8 = (long)(int)lVar3;
      lVar10 = lVar3 >> 0x20;
      goto LAB_0014d1dc;
    }
    if ((uVar1 & 0xff000000000000) == 0) goto LAB_0014d170;
  }
  else {
    if (uVar6 != 2) goto LAB_0014d170;
    lVar8 = *(long *)(lVar3 + 0x10);
    lVar10 = *(long *)(lVar3 + 0x18);
LAB_0014d1dc:
    if (lVar8 == lVar10) goto LAB_0014d170;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_b0,lVar3,uVar1);
LAB_0014d170:
  param_1[5] = uStack_88;
  param_1[4] = uStack_90;
  param_1[7] = uStack_78;
  param_1[6] = uStack_80;
  param_1[8] = uStack_70;
  param_1[1] = uStack_a8;
  *param_1 = uStack_b0;
  param_1[3] = uStack_98;
  param_1[2] = uStack_a0;
  return;
LAB_0014d124:
  uStack_88 = uStack_178;
  uStack_90 = uStack_180;
  uStack_78 = uStack_168;
  uStack_80 = uStack_170;
  uStack_70 = uStack_160;
  uStack_a8 = uStack_198;
  uStack_b0 = uStack_1a0;
  uStack_98 = uStack_188;
  uStack_a0 = uStack_190;
  goto LAB_0014d140;
}



/* Entry: 00114d3c; end: 00114d6b;  */

uint FUN_00114d3c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_00110fb4(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],&UNK_009b3238,FUN_00149b3c)
  ;
  return (uint)param_1 & 1;
}



/* Entry: 00114d6c; end: 00114de3;  */

bool FUN_00114d6c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *unaff_x20;
  ulong uVar13;
  undefined1 auStack_120 [40];
  long alStack_f8 [3];
  undefined8 uStack_e0;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  lVar3 = param_1[3];
  uVar13 = *unaff_x20;
  uVar11 = unaff_x20[1];
  uVar12 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  FUN_00149b3c(uVar13,*param_1);
  if (((uVar13 & 1) == 0) || (FUN_00038814(uVar11,uVar12,uVar2,uVar1), (uVar11 & 1) == 0)) {
    return false;
  }
  if (*(long *)(uVar4 + 0x10) != *(long *)(lVar3 + 0x10)) {
    return false;
  }
  uVar12 = 1L << ((ulong)*(byte *)(uVar4 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(uVar4 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(uVar4 + 0x40);
  uVar12 = uVar12 + 0x3f >> 6;
  _swift_bridgeObjectRetain();
  lVar10 = 0;
  lVar7 = lVar10;
  if (uVar13 == 0) goto LAB_000e2ea0;
LAB_000e2ecc:
  uVar11 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
  uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
  uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
  uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
  uVar13 = uVar13 - 1 & uVar13;
  uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar7 << 6;
  lStack_d0 = *(long *)(*(long *)(uVar4 + 0x30) + uVar11 * 8);
  FUN_000e1304(*(long *)(uVar4 + 0x38) + uVar11 * 0x28,&uStack_c8);
  lVar10 = lVar7;
  do {
    lVar7 = lStack_d0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_78 = uStack_a8;
    lStack_80 = lStack_b0;
    uStack_98 = uStack_c8;
    lStack_a0 = lStack_d0;
    bVar6 = lStack_b0 == 0;
    if (lStack_b0 == 0) {
      _swift_release(uVar4);
      return true;
    }
    uVar11 = 0;
    FUN_000e1450(&uStack_98);
    if ((*(long *)(lVar3 + 0x10) == 0) || (FUN_000e1d94(lVar7), (uVar11 & 1) == 0)) {
LAB_000e3018:
      _swift_release(uVar4);
LAB_000e3040:
      FUN_00011670(&lStack_d0);
      return bVar6;
    }
    FUN_000e1304(*(long *)(lVar3 + 0x38) + lVar7 * 0x28,auStack_120);
    FUN_000e1450(auStack_120,alStack_f8);
    plVar8 = &lStack_d0;
    FUN_0001393c(plVar8,uStack_b8);
    _swift_getDynamicType();
    plVar9 = alStack_f8;
    FUN_0001393c(plVar9,uStack_e0);
    _swift_getDynamicType();
    lVar7 = lStack_b0;
    uVar1 = uStack_b8;
    if (plVar8 != plVar9) {
      _swift_release(uVar4);
      FUN_00011670(alStack_f8);
      goto LAB_000e3040;
    }
    FUN_0001393c(&lStack_d0,uStack_b8);
    plVar8 = alStack_f8;
    (**(code **)(lVar7 + 0x20))(plVar8,uVar1,lVar7);
    FUN_00011670(alStack_f8);
    if (((ulong)plVar8 & 1) == 0) goto LAB_000e3018;
    FUN_00011670(&lStack_d0);
    lVar7 = lVar10;
    if (uVar13 != 0) goto LAB_000e2ecc;
LAB_000e2ea0:
    uVar11 = uVar12;
    if ((long)uVar12 <= lVar10 + 1) {
      uVar11 = lVar10 + 1;
    }
    while( true ) {
      lVar7 = lVar10 + 1;
      if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0xe3070);
        (*pcVar5)();
      }
      if ((long)uVar12 <= lVar7) break;
      uVar13 = ((ulong *)(uVar4 + 0x40))[lVar7];
      lVar10 = lVar10 + 1;
      if (uVar13 != 0) goto LAB_000e2ecc;
    }
    uVar13 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    lStack_b0 = 0;
    uStack_c8 = 0;
    lStack_d0 = 0;
    lVar10 = uVar11 - 1;
  } while( true );
}



/* Entry: 00114de4; end: 00114deb;  */

undefined8 FUN_00114de4(void)

{
  return 1;
}



/* Entry: 00114dec; end: 00114e7b;  */

/* WARNING: Removing unreachable block (ram,0x00114e48) */

void FUN_00114dec(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_40 = unaff_x20[8];
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_90 = param_1[8];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  FUN_00180de0(&uStack_d0);
  param_1[5] = uStack_a8;
  param_1[4] = uStack_b0;
  param_1[7] = uStack_98;
  param_1[6] = uStack_a0;
  param_1[8] = uStack_90;
  param_1[1] = uStack_c8;
  *param_1 = uStack_d0;
  param_1[3] = uStack_b8;
  param_1[2] = uStack_c0;
  return;
}



/* Entry: 00114e7c; end: 00114ebf;  */

uint FUN_00114e7c(uint param_1)

{
  FUN_001110d4();
  return param_1 & 1;
}



/* Entry: 00114ec0; end: 00114f17;  */

uint FUN_00114ec0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_20 = param_1[8];
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  func_0x00182d7c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 00114f18; end: 00114f2b;  */

undefined8 FUN_00114f18(void)

{
  return 1;
}



/* Entry: 00114f2c; end: 00114f5b;  */

uint FUN_00114f2c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x0011236c(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],&UNK_009b3350,FUN_00183060);
  return (uint)param_1 & 1;
}



/* Entry: 00114f5c; end: 00114f6f;  */

void FUN_00114f5c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  FUN_00183060(*unaff_x20,unaff_x20[1],unaff_x20[2],*param_1,param_1[1],param_1[2]);
  return;
}



/* Entry: 00114f70; end: 00114fff;  */

/* WARNING: Removing unreachable block (ram,0x00114fcc) */

void FUN_00114f70(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined6 uStack_48;
  undefined2 uStack_42;
  undefined6 uStack_40;
  
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_50 = unaff_x20[4];
  uStack_48 = (undefined6)unaff_x20[5];
  uStack_42 = (undefined2)*(undefined8 *)((long)unaff_x20 + 0x2e);
  uStack_40 = (undefined6)((ulong)*(undefined8 *)((long)unaff_x20 + 0x2e) >> 0x10);
  uStack_98 = param_1[5];
  uStack_a0 = param_1[4];
  uStack_88 = param_1[7];
  uStack_90 = param_1[6];
  uStack_80 = param_1[8];
  uStack_b8 = param_1[1];
  uStack_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  FUN_00182018(&uStack_c0);
  param_1[5] = uStack_98;
  param_1[4] = uStack_a0;
  param_1[7] = uStack_88;
  param_1[6] = uStack_90;
  param_1[8] = uStack_80;
  param_1[1] = uStack_b8;
  *param_1 = uStack_c0;
  param_1[3] = uStack_a8;
  param_1[2] = uStack_b0;
  return;
}



/* Entry: 00115000; end: 00115043;  */

uint FUN_00115000(uint param_1)

{
  FUN_00110b04();
  return param_1 & 1;
}



/* Entry: 00115044; end: 0011509b;  */

uint FUN_00115044(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined6 uStack_68;
  undefined2 uStack_62;
  undefined6 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined6 uStack_28;
  undefined2 uStack_22;
  undefined6 uStack_20;
  
  uVar1 = 0;
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_30 = param_1[4];
  uStack_28 = (undefined6)param_1[5];
  uStack_22 = (undefined2)*(undefined8 *)((long)param_1 + 0x2e);
  uStack_20 = (undefined6)((ulong)*(undefined8 *)((long)param_1 + 0x2e) >> 0x10);
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_70 = unaff_x20[4];
  uStack_68 = (undefined6)unaff_x20[5];
  uStack_62 = (undefined2)*(undefined8 *)((long)unaff_x20 + 0x2e);
  uStack_60 = (undefined6)((ulong)*(undefined8 *)((long)unaff_x20 + 0x2e) >> 0x10);
  func_0x00182f04(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 0011509c; end: 001150b3;  */

undefined8 FUN_0011509c(void)

{
  return 1;
}



/* Entry: 001150b4; end: 001150e7;  */

uint FUN_001150b4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_00112178(param_1,*unaff_x20,*(undefined4 *)(unaff_x20 + 1),unaff_x20[2],unaff_x20[3],
               &UNK_009b3780,0x116578);
  return (uint)param_1 & 1;
}



/* Entry: 001150e8; end: 001150f7;  */

undefined8 FUN_001150e8(void)

{
  return 1;
}



/* Entry: 001150f8; end: 00115123;  */

uint FUN_001150f8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_00111f9c(param_1,*unaff_x20,unaff_x20[1],&UNK_009b3908,0x116558);
  return (uint)param_1 & 1;
}



/* Entry: 00115124; end: 00115137;  */

undefined8 FUN_00115124(void)

{
  return 1;
}



/* Entry: 00115138; end: 00115167;  */

uint FUN_00115138(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x0011236c(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],&UNK_009b3a88,FUN_00194dbc);
  return (uint)param_1 & 1;
}



/* Entry: 00115168; end: 0011519f;  */

void FUN_00115168(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  FUN_00194dbc(*unaff_x20,unaff_x20[1],unaff_x20[2],*param_1,param_1[1],param_1[2]);
  return;
}



/* Entry: 001151a0; end: 001151c7;  */

uint FUN_001151a0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_001117a4(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],&UNK_009b3c08);
  return (uint)param_1 & 1;
}



/* Entry: 001151c8; end: 001151db;  */

undefined8 FUN_001151c8(void)

{
  return 1;
}



/* Entry: 001151dc; end: 0011520b;  */

uint FUN_001151dc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_00112274(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],&UNK_009b3f98,FUN_00199188);
  return (uint)param_1 & 1;
}



/* Entry: 0011520c; end: 0011521f;  */

ulong FUN_0011520c(undefined8 *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong *unaff_x20;
  byte *pbVar15;
  ulong uVar16;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  lVar9 = param_1[1];
  uVar16 = param_1[2];
  uVar12 = *unaff_x20;
  uVar6 = unaff_x20[1];
  pbVar15 = (byte *)unaff_x20[2];
  FUN_00199188(uVar12,*param_1);
  if ((uVar12 & 1) == 0) {
    return 0;
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar15 >> 0x20);
  uVar10 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar16 >> 0x20);
  uVar13 = uVar3 >> 0x1e;
  iVar5 = (int)uVar6;
  if ((ulong)pbVar15 >> 0x3e == 3) {
    uVar12 = 0;
    if ((((uVar6 != 0) || (pbVar15 != (byte *)0xc000000000000000)) || (uVar16 >> 0x3e < 3)) ||
       ((uVar12 = 0, lVar9 != 0 || (uVar16 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar10 == 0) {
        uVar12 = (ulong)pbVar15 >> 0x30 & 0xff;
      }
      else {
        iVar11 = (int)(uVar6 >> 0x20);
        if (SBORROW4(iVar11,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar12 = (ulong)(iVar11 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar13 != 2) {
        uVar6 = (ulong)(uVar12 == 0);
        goto LAB_00038af8;
      }
      uVar14 = *(long *)(lVar9 + 0x18) - *(long *)(lVar9 + 0x10);
      if (SBORROW8(*(long *)(lVar9 + 0x18),*(long *)(lVar9 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar12 != uVar14) {
LAB_0003899c:
        uVar6 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar10 == 2) {
        uVar12 = *(long *)(uVar6 + 0x18) - *(long *)(uVar6 + 0x10);
        if (SBORROW8(*(long *)(uVar6 + 0x18),*(long *)(uVar6 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar12 = 0;
      if (1 < uVar13) goto LAB_00038898;
LAB_000388cc:
      if (uVar13 == 0) {
        uVar14 = uVar16 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar11 = (int)((ulong)lVar9 >> 0x20);
      if (SBORROW4(iVar11,(int)lVar9)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar12 != (long)(iVar11 - (int)lVar9)) goto LAB_0003899c;
    }
    if (0 < (long)uVar12) {
      if (uVar10 < 2) {
        if (uVar10 == 0) {
          abStack_70[0] = (byte)uVar6;
          abStack_70[1] = (byte)(uVar6 >> 8);
          abStack_70[2] = (byte)(uVar6 >> 0x10);
          abStack_70[3] = (byte)(uVar6 >> 0x18);
          abStack_70[4] = (byte)(uVar6 >> 0x20);
          abStack_70[5] = (byte)(uVar6 >> 0x28);
          abStack_70[6] = (byte)(uVar6 >> 0x30);
          abStack_70[7] = (byte)(uVar6 >> 0x38);
          abStack_70[8] = (byte)pbVar15;
          abStack_70[9] = (byte)((ulong)pbVar15 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar15 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar15 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar15 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar15 >> 0x28);
          pbVar15 = abStack_70 + ((ulong)pbVar15 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar6 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        uVar12 = ((long)uVar6 >> 0x20) - lVar17;
        if ((long)uVar6 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar6 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar6 = 0;
        }
        else {
          uVar14 = uVar6;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar14)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar14) + uVar6;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar6 != 0) {
            if ((long)uVar12 <= (long)uVar14) {
              uVar14 = uVar12;
            }
            pbVar8 = (byte *)(uVar14 + uVar6);
            goto LAB_00038aec;
          }
        }
        pbVar8 = (byte *)0x0;
      }
      else {
        if (uVar10 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar15 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(uVar6 + 0x10);
        lVar1 = *(long *)(uVar6 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar12 = uVar6;
        if (uVar6 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar12) + uVar6;
        }
        uVar14 = lVar1 - lVar17;
        if (SBORROW8(lVar1,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar6 == 0) {
          pbVar8 = (byte *)0x0;
        }
        else {
          if ((long)uVar14 <= (long)uVar12) {
            uVar12 = uVar14;
          }
          pbVar8 = (byte *)(uVar12 + uVar6);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar15 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar6,pbVar8,lVar9,uVar16);
      uVar6 = (ulong)abStack_70[0];
      pbVar15 = pbVar8;
      goto LAB_00038af8;
    }
  }
  uVar6 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar6;
  }
  ___stack_chk_fail();
  lVar17 = (long)pbVar15 - uVar6;
  if (SBORROW8((long)pbVar15,uVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar14 = *unaff_x20;
  uVar16 = uVar14 & 0xffffffffffffff8;
  uVar6 = uVar16 + 0x20 + uVar6 * 8;
  uVar7 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar12 = uVar6;
  _swift_arrayDestroy(uVar6,lVar17,uVar7);
  lVar1 = lVar9 - lVar17;
  if (SBORROW8(lVar9,lVar17)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar1 != 0) {
    if (uVar14 >> 0x3e == 0) {
      uVar12 = *(ulong *)(uVar16 + 0x10);
      lVar17 = uVar12 - (long)pbVar15;
    }
    else {
      uVar12 = uVar16;
      if ((uVar14 & 0x8000000000000000) != 0) {
        uVar12 = uVar14;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar17 = uVar12 - (long)pbVar15;
    }
    if (SBORROW8(uVar12,(long)pbVar15)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar6 = uVar6 + lVar9 * 8;
    uVar12 = uVar16 + 0x20 + (long)pbVar15 * 8;
    if (uVar6 != uVar12 || uVar12 + lVar17 * 8 <= uVar6) {
      _memmove(uVar6,uVar12,lVar17 << 3);
    }
    if (uVar14 >> 0x3e == 0) {
      uVar12 = *(ulong *)(uVar16 + 0x10);
    }
    else {
      uVar12 = uVar16;
      if ((uVar14 & 0x8000000000000000) != 0) {
        uVar12 = uVar14;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar12,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar16 + 0x10) = uVar12 + lVar1;
  }
  if (0 < lVar9) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar12;
}



/* Entry: 00115220; end: 001152a7;  */

/* WARNING: Removing unreachable block (ram,0x00115274) */

void FUN_00115220(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  FUN_00197e9c(&uStack_b0);
  param_1[5] = uStack_88;
  param_1[4] = uStack_90;
  param_1[7] = uStack_78;
  param_1[6] = uStack_80;
  param_1[8] = uStack_70;
  param_1[1] = uStack_a8;
  *param_1 = uStack_b0;
  param_1[3] = uStack_98;
  param_1[2] = uStack_a0;
  return;
}



/* Entry: 001152a8; end: 0011532f;  */

uint FUN_001152a8(uint param_1)

{
  FUN_0010f784();
  return param_1 & 1;
}



/* Entry: 00115330; end: 00115343;  */

undefined8 FUN_00115330(void)

{
  return 1;
}



/* Entry: 00115344; end: 001153c3;  */

/* WARNING: Removing unreachable block (ram,0x00115390) */

void FUN_00115344(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 *unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*param_4)(&uStack_80,*unaff_x20,unaff_x20[1],unaff_x20[2]);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 001153c4; end: 001153f3;  */

uint FUN_001153c4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_00112274(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],&UNK_009b4128,FUN_00146270);
  return (uint)param_1 & 1;
}



/* Entry: 001153f4; end: 001153ff;  */

ulong FUN_001153f4(undefined8 *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong *unaff_x20;
  byte *pbVar15;
  ulong uVar16;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  lVar9 = param_1[1];
  uVar16 = param_1[2];
  uVar12 = *unaff_x20;
  uVar6 = unaff_x20[1];
  pbVar15 = (byte *)unaff_x20[2];
  FUN_00146270(uVar12,*param_1);
  if ((uVar12 & 1) == 0) {
    return 0;
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar15 >> 0x20);
  uVar10 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar16 >> 0x20);
  uVar13 = uVar3 >> 0x1e;
  iVar5 = (int)uVar6;
  if ((ulong)pbVar15 >> 0x3e == 3) {
    uVar12 = 0;
    if ((((uVar6 != 0) || (pbVar15 != (byte *)0xc000000000000000)) || (uVar16 >> 0x3e < 3)) ||
       ((uVar12 = 0, lVar9 != 0 || (uVar16 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar10 == 0) {
        uVar12 = (ulong)pbVar15 >> 0x30 & 0xff;
      }
      else {
        iVar11 = (int)(uVar6 >> 0x20);
        if (SBORROW4(iVar11,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar12 = (ulong)(iVar11 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar13 != 2) {
        uVar6 = (ulong)(uVar12 == 0);
        goto LAB_00038af8;
      }
      uVar14 = *(long *)(lVar9 + 0x18) - *(long *)(lVar9 + 0x10);
      if (SBORROW8(*(long *)(lVar9 + 0x18),*(long *)(lVar9 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar12 != uVar14) {
LAB_0003899c:
        uVar6 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar10 == 2) {
        uVar12 = *(long *)(uVar6 + 0x18) - *(long *)(uVar6 + 0x10);
        if (SBORROW8(*(long *)(uVar6 + 0x18),*(long *)(uVar6 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar12 = 0;
      if (1 < uVar13) goto LAB_00038898;
LAB_000388cc:
      if (uVar13 == 0) {
        uVar14 = uVar16 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar11 = (int)((ulong)lVar9 >> 0x20);
      if (SBORROW4(iVar11,(int)lVar9)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar12 != (long)(iVar11 - (int)lVar9)) goto LAB_0003899c;
    }
    if (0 < (long)uVar12) {
      if (uVar10 < 2) {
        if (uVar10 == 0) {
          abStack_70[0] = (byte)uVar6;
          abStack_70[1] = (byte)(uVar6 >> 8);
          abStack_70[2] = (byte)(uVar6 >> 0x10);
          abStack_70[3] = (byte)(uVar6 >> 0x18);
          abStack_70[4] = (byte)(uVar6 >> 0x20);
          abStack_70[5] = (byte)(uVar6 >> 0x28);
          abStack_70[6] = (byte)(uVar6 >> 0x30);
          abStack_70[7] = (byte)(uVar6 >> 0x38);
          abStack_70[8] = (byte)pbVar15;
          abStack_70[9] = (byte)((ulong)pbVar15 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar15 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar15 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar15 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar15 >> 0x28);
          pbVar15 = abStack_70 + ((ulong)pbVar15 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar6 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        uVar12 = ((long)uVar6 >> 0x20) - lVar17;
        if ((long)uVar6 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar6 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar6 = 0;
        }
        else {
          uVar14 = uVar6;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar14)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar14) + uVar6;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar6 != 0) {
            if ((long)uVar12 <= (long)uVar14) {
              uVar14 = uVar12;
            }
            pbVar8 = (byte *)(uVar14 + uVar6);
            goto LAB_00038aec;
          }
        }
        pbVar8 = (byte *)0x0;
      }
      else {
        if (uVar10 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar15 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(uVar6 + 0x10);
        lVar1 = *(long *)(uVar6 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar12 = uVar6;
        if (uVar6 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar12) + uVar6;
        }
        uVar14 = lVar1 - lVar17;
        if (SBORROW8(lVar1,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar6 == 0) {
          pbVar8 = (byte *)0x0;
        }
        else {
          if ((long)uVar14 <= (long)uVar12) {
            uVar12 = uVar14;
          }
          pbVar8 = (byte *)(uVar12 + uVar6);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar15 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar6,pbVar8,lVar9,uVar16);
      uVar6 = (ulong)abStack_70[0];
      pbVar15 = pbVar8;
      goto LAB_00038af8;
    }
  }
  uVar6 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar6;
  }
  ___stack_chk_fail();
  lVar17 = (long)pbVar15 - uVar6;
  if (SBORROW8((long)pbVar15,uVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar14 = *unaff_x20;
  uVar16 = uVar14 & 0xffffffffffffff8;
  uVar6 = uVar16 + 0x20 + uVar6 * 8;
  uVar7 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar12 = uVar6;
  _swift_arrayDestroy(uVar6,lVar17,uVar7);
  lVar1 = lVar9 - lVar17;
  if (SBORROW8(lVar9,lVar17)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar1 != 0) {
    if (uVar14 >> 0x3e == 0) {
      uVar12 = *(ulong *)(uVar16 + 0x10);
      lVar17 = uVar12 - (long)pbVar15;
    }
    else {
      uVar12 = uVar16;
      if ((uVar14 & 0x8000000000000000) != 0) {
        uVar12 = uVar14;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar17 = uVar12 - (long)pbVar15;
    }
    if (SBORROW8(uVar12,(long)pbVar15)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar6 = uVar6 + lVar9 * 8;
    uVar12 = uVar16 + 0x20 + (long)pbVar15 * 8;
    if (uVar6 != uVar12 || uVar12 + lVar17 * 8 <= uVar6) {
      _memmove(uVar6,uVar12,lVar17 << 3);
    }
    if (uVar14 >> 0x3e == 0) {
      uVar12 = *(ulong *)(uVar16 + 0x10);
    }
    else {
      uVar12 = uVar16;
      if ((uVar14 & 0x8000000000000000) != 0) {
        uVar12 = uVar14;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar12,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar16 + 0x10) = uVar12 + lVar1;
  }
  if (0 < lVar9) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar12;
}



/* Entry: 00115400; end: 00115467;  */

ulong FUN_00115400(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong *unaff_x20;
  byte *pbVar15;
  ulong uVar16;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  lVar9 = param_1[1];
  uVar16 = param_1[2];
  uVar12 = *unaff_x20;
  uVar6 = unaff_x20[1];
  pbVar15 = (byte *)unaff_x20[2];
  (*param_4)(uVar12,*param_1);
  if ((uVar12 & 1) == 0) {
    return 0;
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar15 >> 0x20);
  uVar10 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar16 >> 0x20);
  uVar13 = uVar3 >> 0x1e;
  iVar5 = (int)uVar6;
  if ((ulong)pbVar15 >> 0x3e == 3) {
    uVar12 = 0;
    if ((((uVar6 != 0) || (pbVar15 != (byte *)0xc000000000000000)) || (uVar16 >> 0x3e < 3)) ||
       ((uVar12 = 0, lVar9 != 0 || (uVar16 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar10 == 0) {
        uVar12 = (ulong)pbVar15 >> 0x30 & 0xff;
      }
      else {
        iVar11 = (int)(uVar6 >> 0x20);
        if (SBORROW4(iVar11,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar12 = (ulong)(iVar11 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar13 != 2) {
        uVar6 = (ulong)(uVar12 == 0);
        goto LAB_00038af8;
      }
      uVar14 = *(long *)(lVar9 + 0x18) - *(long *)(lVar9 + 0x10);
      if (SBORROW8(*(long *)(lVar9 + 0x18),*(long *)(lVar9 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar12 != uVar14) {
LAB_0003899c:
        uVar6 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar10 == 2) {
        uVar12 = *(long *)(uVar6 + 0x18) - *(long *)(uVar6 + 0x10);
        if (SBORROW8(*(long *)(uVar6 + 0x18),*(long *)(uVar6 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar12 = 0;
      if (1 < uVar13) goto LAB_00038898;
LAB_000388cc:
      if (uVar13 == 0) {
        uVar14 = uVar16 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar11 = (int)((ulong)lVar9 >> 0x20);
      if (SBORROW4(iVar11,(int)lVar9)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar12 != (long)(iVar11 - (int)lVar9)) goto LAB_0003899c;
    }
    if (0 < (long)uVar12) {
      if (uVar10 < 2) {
        if (uVar10 == 0) {
          abStack_70[0] = (byte)uVar6;
          abStack_70[1] = (byte)(uVar6 >> 8);
          abStack_70[2] = (byte)(uVar6 >> 0x10);
          abStack_70[3] = (byte)(uVar6 >> 0x18);
          abStack_70[4] = (byte)(uVar6 >> 0x20);
          abStack_70[5] = (byte)(uVar6 >> 0x28);
          abStack_70[6] = (byte)(uVar6 >> 0x30);
          abStack_70[7] = (byte)(uVar6 >> 0x38);
          abStack_70[8] = (byte)pbVar15;
          abStack_70[9] = (byte)((ulong)pbVar15 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar15 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar15 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar15 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar15 >> 0x28);
          pbVar15 = abStack_70 + ((ulong)pbVar15 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar6 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        uVar12 = ((long)uVar6 >> 0x20) - lVar17;
        if ((long)uVar6 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar6 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar6 = 0;
        }
        else {
          uVar14 = uVar6;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar14)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar14) + uVar6;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar6 != 0) {
            if ((long)uVar12 <= (long)uVar14) {
              uVar14 = uVar12;
            }
            pbVar8 = (byte *)(uVar14 + uVar6);
            goto LAB_00038aec;
          }
        }
        pbVar8 = (byte *)0x0;
      }
      else {
        if (uVar10 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar15 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(uVar6 + 0x10);
        lVar1 = *(long *)(uVar6 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar12 = uVar6;
        if (uVar6 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar12) + uVar6;
        }
        uVar14 = lVar1 - lVar17;
        if (SBORROW8(lVar1,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar6 == 0) {
          pbVar8 = (byte *)0x0;
        }
        else {
          if ((long)uVar14 <= (long)uVar12) {
            uVar12 = uVar14;
          }
          pbVar8 = (byte *)(uVar12 + uVar6);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar15 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar6,pbVar8,lVar9,uVar16);
      uVar6 = (ulong)abStack_70[0];
      pbVar15 = pbVar8;
      goto LAB_00038af8;
    }
  }
  uVar6 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar6;
  }
  ___stack_chk_fail();
  lVar17 = (long)pbVar15 - uVar6;
  if (SBORROW8((long)pbVar15,uVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar14 = *unaff_x20;
  uVar16 = uVar14 & 0xffffffffffffff8;
  uVar6 = uVar16 + 0x20 + uVar6 * 8;
  uVar7 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar12 = uVar6;
  _swift_arrayDestroy(uVar6,lVar17,uVar7);
  lVar1 = lVar9 - lVar17;
  if (SBORROW8(lVar9,lVar17)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar1 != 0) {
    if (uVar14 >> 0x3e == 0) {
      uVar12 = *(ulong *)(uVar16 + 0x10);
      lVar17 = uVar12 - (long)pbVar15;
    }
    else {
      uVar12 = uVar16;
      if ((uVar14 & 0x8000000000000000) != 0) {
        uVar12 = uVar14;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar17 = uVar12 - (long)pbVar15;
    }
    if (SBORROW8(uVar12,(long)pbVar15)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar6 = uVar6 + lVar9 * 8;
    uVar12 = uVar16 + 0x20 + (long)pbVar15 * 8;
    if (uVar6 != uVar12 || uVar12 + lVar17 * 8 <= uVar6) {
      _memmove(uVar6,uVar12,lVar17 << 3);
    }
    if (uVar14 >> 0x3e == 0) {
      uVar12 = *(ulong *)(uVar16 + 0x10);
    }
    else {
      uVar12 = uVar16;
      if ((uVar14 & 0x8000000000000000) != 0) {
        uVar12 = uVar14;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar12,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar16 + 0x10) = uVar12 + lVar1;
  }
  if (0 < lVar9) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar12;
}



/* Entry: 00115468; end: 0011547f;  */

undefined8 FUN_00115468(void)

{
  return 1;
}



/* Entry: 00115480; end: 001154b3;  */

uint FUN_00115480(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_00112178(param_1,*unaff_x20,*(undefined4 *)(unaff_x20 + 1),unaff_x20[2],unaff_x20[3],
               &UNK_009b42f0,0x11657c);
  return (uint)param_1 & 1;
}



/* Entry: 001154b4; end: 001154f3;  */

ulong FUN_001154b4(ulong *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong *unaff_x20;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  if (*unaff_x20 != *param_1 || (int)unaff_x20[1] != (int)param_1[1]) {
    return 0;
  }
  uVar6 = unaff_x20[2];
  pbVar9 = (byte *)unaff_x20[3];
  uVar11 = param_1[2];
  uVar8 = param_1[3];
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar9 >> 0x20);
  uVar12 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar8 >> 0x20);
  uVar15 = uVar3 >> 0x1e;
  iVar5 = (int)uVar6;
  if ((ulong)pbVar9 >> 0x3e == 3) {
    uVar14 = 0;
    if ((((uVar6 != 0) || (pbVar9 != (byte *)0xc000000000000000)) || (uVar8 >> 0x3e < 3)) ||
       ((uVar14 = 0, uVar11 != 0 || (uVar8 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar12 == 0) {
        uVar14 = (ulong)pbVar9 >> 0x30 & 0xff;
      }
      else {
        iVar13 = (int)(uVar6 >> 0x20);
        if (SBORROW4(iVar13,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar14 = (ulong)(iVar13 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar15 != 2) {
        uVar6 = (ulong)(uVar14 == 0);
        goto LAB_00038af8;
      }
      uVar16 = *(long *)(uVar11 + 0x18) - *(long *)(uVar11 + 0x10);
      if (SBORROW8(*(long *)(uVar11 + 0x18),*(long *)(uVar11 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar14 != uVar16) {
LAB_0003899c:
        uVar6 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar12 == 2) {
        uVar14 = *(long *)(uVar6 + 0x18) - *(long *)(uVar6 + 0x10);
        if (SBORROW8(*(long *)(uVar6 + 0x18),*(long *)(uVar6 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar14 = 0;
      if (1 < uVar15) goto LAB_00038898;
LAB_000388cc:
      if (uVar15 == 0) {
        uVar16 = uVar8 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar13 = (int)(uVar11 >> 0x20);
      if (SBORROW4(iVar13,(int)uVar11)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar14 != (long)(iVar13 - (int)uVar11)) goto LAB_0003899c;
    }
    if (0 < (long)uVar14) {
      if (uVar12 < 2) {
        if (uVar12 == 0) {
          abStack_70[0] = (byte)uVar6;
          abStack_70[1] = (byte)(uVar6 >> 8);
          abStack_70[2] = (byte)(uVar6 >> 0x10);
          abStack_70[3] = (byte)(uVar6 >> 0x18);
          abStack_70[4] = (byte)(uVar6 >> 0x20);
          abStack_70[5] = (byte)(uVar6 >> 0x28);
          abStack_70[6] = (byte)(uVar6 >> 0x30);
          abStack_70[7] = (byte)(uVar6 >> 0x38);
          abStack_70[8] = (byte)pbVar9;
          abStack_70[9] = (byte)((ulong)pbVar9 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar9 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar9 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar9 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar9 >> 0x28);
          pbVar9 = abStack_70 + ((ulong)pbVar9 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar6 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        uVar14 = ((long)uVar6 >> 0x20) - lVar17;
        if ((long)uVar6 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar6 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar6 = 0;
        }
        else {
          uVar16 = uVar6;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar16)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar16) + uVar6;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar6 != 0) {
            if ((long)uVar14 <= (long)uVar16) {
              uVar16 = uVar14;
            }
            pbVar10 = (byte *)(uVar16 + uVar6);
            goto LAB_00038aec;
          }
        }
        pbVar10 = (byte *)0x0;
      }
      else {
        if (uVar12 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar9 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(uVar6 + 0x10);
        lVar1 = *(long *)(uVar6 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar14 = uVar6;
        if (uVar6 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar14)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar14) + uVar6;
        }
        uVar16 = lVar1 - lVar17;
        if (SBORROW8(lVar1,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar6 == 0) {
          pbVar10 = (byte *)0x0;
        }
        else {
          if ((long)uVar16 <= (long)uVar14) {
            uVar14 = uVar16;
          }
          pbVar10 = (byte *)(uVar14 + uVar6);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar9 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar6,pbVar10,uVar11,uVar8);
      uVar6 = (ulong)abStack_70[0];
      pbVar9 = pbVar10;
      goto LAB_00038af8;
    }
  }
  uVar6 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar6;
  }
  ___stack_chk_fail();
  lVar17 = (long)pbVar9 - uVar6;
  if (SBORROW8((long)pbVar9,uVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar16 = *unaff_x20;
  uVar14 = uVar16 & 0xffffffffffffff8;
  uVar6 = uVar14 + 0x20 + uVar6 * 8;
  uVar7 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar8 = uVar6;
  _swift_arrayDestroy(uVar6,lVar17,uVar7);
  lVar1 = uVar11 - lVar17;
  if (SBORROW8(uVar11,lVar17)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar1 != 0) {
    if (uVar16 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar14 + 0x10);
      lVar17 = uVar8 - (long)pbVar9;
    }
    else {
      uVar8 = uVar14;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar8 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar17 = uVar8 - (long)pbVar9;
    }
    if (SBORROW8(uVar8,(long)pbVar9)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar6 = uVar6 + uVar11 * 8;
    uVar8 = uVar14 + 0x20 + (long)pbVar9 * 8;
    if (uVar6 != uVar8 || uVar8 + lVar17 * 8 <= uVar6) {
      _memmove(uVar6,uVar8,lVar17 << 3);
    }
    if (uVar16 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar14 + 0x10);
    }
    else {
      uVar8 = uVar14;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar8 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar8,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar14 + 0x10) = uVar8 + lVar1;
  }
  if (0 < (long)uVar11) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar8;
}



/* Entry: 001154f4; end: 00115597;  */

/* WARNING: Removing unreachable block (ram,0x00115564) */

void FUN_001154f4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_58 = unaff_x20[0xb];
  uStack_60 = unaff_x20[10];
  uStack_48 = unaff_x20[0xd];
  uStack_50 = unaff_x20[0xc];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_40 = unaff_x20[0xe];
  uStack_d8 = param_1[5];
  uStack_e0 = param_1[4];
  uStack_c8 = param_1[7];
  uStack_d0 = param_1[6];
  uStack_c0 = param_1[8];
  uStack_f8 = param_1[1];
  uStack_100 = *param_1;
  uStack_e8 = param_1[3];
  uStack_f0 = param_1[2];
  FUN_001a3d24(&uStack_100);
  param_1[5] = uStack_d8;
  param_1[4] = uStack_e0;
  param_1[7] = uStack_c8;
  param_1[6] = uStack_d0;
  param_1[8] = uStack_c0;
  param_1[1] = uStack_f8;
  *param_1 = uStack_100;
  param_1[3] = uStack_e8;
  param_1[2] = uStack_f0;
  return;
}



/* Entry: 00115598; end: 001155eb;  */

uint FUN_00115598(uint param_1)

{
  func_0x0010fad0();
  return param_1 & 1;
}



/* Entry: 001155ec; end: 0011566b;  */

uint FUN_001155ec(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_58 = param_1[9];
  uStack_60 = param_1[8];
  uStack_48 = param_1[0xb];
  uStack_50 = param_1[10];
  uStack_38 = param_1[0xd];
  uStack_40 = param_1[0xc];
  uStack_30 = param_1[0xe];
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  uStack_118 = unaff_x20[1];
  uStack_120 = *unaff_x20;
  uStack_108 = unaff_x20[3];
  uStack_110 = unaff_x20[2];
  uStack_f8 = unaff_x20[5];
  uStack_100 = unaff_x20[4];
  uStack_e8 = unaff_x20[7];
  uStack_f0 = unaff_x20[6];
  uStack_d8 = unaff_x20[9];
  uStack_e0 = unaff_x20[8];
  uStack_c8 = unaff_x20[0xb];
  uStack_d0 = unaff_x20[10];
  uStack_b8 = unaff_x20[0xd];
  uStack_c0 = unaff_x20[0xc];
  uStack_b0 = unaff_x20[0xe];
  FUN_001a7b70(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 0011566c; end: 00115673;  */

undefined8 FUN_0011566c(void)

{
  return 1;
}



/* Entry: 00115674; end: 00115713;  */

/* WARNING: Removing unreachable block (ram,0x001156e0) */

void FUN_00115674(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_58 = unaff_x20[0xb];
  uStack_60 = unaff_x20[10];
  uStack_48 = unaff_x20[0xd];
  uStack_50 = unaff_x20[0xc];
  uStack_38 = unaff_x20[0xf];
  uStack_40 = unaff_x20[0xe];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_d8 = param_1[5];
  uStack_e0 = param_1[4];
  uStack_c8 = param_1[7];
  uStack_d0 = param_1[6];
  uStack_c0 = param_1[8];
  uStack_f8 = param_1[1];
  uStack_100 = *param_1;
  uStack_e8 = param_1[3];
  uStack_f0 = param_1[2];
  FUN_001a49bc(&uStack_100);
  param_1[5] = uStack_d8;
  param_1[4] = uStack_e0;
  param_1[7] = uStack_c8;
  param_1[6] = uStack_d0;
  param_1[8] = uStack_c0;
  param_1[1] = uStack_f8;
  *param_1 = uStack_100;
  param_1[3] = uStack_e8;
  param_1[2] = uStack_f0;
  return;
}



/* Entry: 00115714; end: 0011575f;  */

uint FUN_00115714(uint param_1)

{
  FUN_0010f9c8();
  return param_1 & 1;
}



/* Entry: 00115760; end: 001157cf;  */

uint FUN_00115760(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_58 = param_1[9];
  uStack_60 = param_1[8];
  uStack_48 = param_1[0xb];
  uStack_50 = param_1[10];
  uStack_38 = param_1[0xd];
  uStack_40 = param_1[0xc];
  uStack_28 = param_1[0xf];
  uStack_30 = param_1[0xe];
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  uStack_118 = unaff_x20[1];
  uStack_120 = *unaff_x20;
  uStack_108 = unaff_x20[3];
  uStack_110 = unaff_x20[2];
  uStack_f8 = unaff_x20[5];
  uStack_100 = unaff_x20[4];
  uStack_e8 = unaff_x20[7];
  uStack_f0 = unaff_x20[6];
  uStack_d8 = unaff_x20[9];
  uStack_e0 = unaff_x20[8];
  uStack_c8 = unaff_x20[0xb];
  uStack_d0 = unaff_x20[10];
  uStack_b8 = unaff_x20[0xd];
  uStack_c0 = unaff_x20[0xc];
  uStack_a8 = unaff_x20[0xf];
  uStack_b0 = unaff_x20[0xe];
  FUN_001a79f8(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 001157d0; end: 001157d7;  */

undefined8 FUN_001157d0(void)

{
  return 1;
}



/* Entry: 001157d8; end: 00115873;  */

/* WARNING: Removing unreachable block (ram,0x00115840) */

void FUN_001157d8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_48 = unaff_x20[0xb];
  uStack_50 = unaff_x20[10];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  uStack_38 = unaff_x20[0xd];
  uStack_40 = unaff_x20[0xc];
  uStack_98 = unaff_x20[1];
  uStack_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_b0 = param_1[8];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  FUN_001a59e0(&uStack_f0);
  param_1[5] = uStack_c8;
  param_1[4] = uStack_d0;
  param_1[7] = uStack_b8;
  param_1[6] = uStack_c0;
  param_1[8] = uStack_b0;
  param_1[1] = uStack_e8;
  *param_1 = uStack_f0;
  param_1[3] = uStack_d8;
  param_1[2] = uStack_e0;
  return;
}



/* Entry: 00115874; end: 001158bf;  */

uint FUN_00115874(uint param_1)

{
  func_0x0010fbcc();
  return param_1 & 1;
}



/* Entry: 001158c0; end: 00115927;  */

uint FUN_001158c0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_38 = param_1[9];
  uStack_40 = param_1[8];
  uStack_28 = param_1[0xb];
  uStack_30 = param_1[10];
  uStack_18 = param_1[0xd];
  uStack_20 = param_1[0xc];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  uStack_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_88 = unaff_x20[0xd];
  uStack_90 = unaff_x20[0xc];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  func_0x001a7e84(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 00115928; end: 0011592f;  */

undefined8 FUN_00115928(void)

{
  return 1;
}



/* Entry: 00115930; end: 001159b7;  */

/* WARNING: Removing unreachable block (ram,0x00115984) */

void FUN_00115930(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  FUN_001a653c(&uStack_b0);
  param_1[5] = uStack_88;
  param_1[4] = uStack_90;
  param_1[7] = uStack_78;
  param_1[6] = uStack_80;
  param_1[8] = uStack_70;
  param_1[1] = uStack_a8;
  *param_1 = uStack_b0;
  param_1[3] = uStack_98;
  param_1[2] = uStack_a0;
  return;
}



/* Entry: 001159b8; end: 001159f3;  */

uint FUN_001159b8(uint param_1)

{
  func_0x0011244c();
  return param_1 & 1;
}



/* Entry: 001159f4; end: 00115aaf;  */

ulong FUN_001159f4(ulong *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  byte *pbVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  ulong *unaff_x20;
  byte *pbVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  byte bStack_71;
  byte abStack_70 [16];
  
  uVar4 = param_1[2];
  uVar15 = param_1[3];
  uVar11 = param_1[4];
  uVar21 = param_1[5];
  uVar17 = *unaff_x20;
  uVar5 = unaff_x20[2];
  uVar19 = unaff_x20[3];
  uVar8 = unaff_x20[4];
  pbVar18 = (byte *)unaff_x20[5];
  if ((((uVar17 != *param_1) || (unaff_x20[1] != param_1[1])) &&
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar17 & 1) == 0)) ||
     (((int)uVar5 != (int)uVar4 || (FUN_001455e0(uVar19,uVar15), (uVar19 & 1) == 0)))) {
    return 0;
  }
  lVar13 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar18 >> 0x20);
  uVar12 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar21 >> 0x20);
  uVar16 = uVar3 >> 0x1e;
  iVar7 = (int)uVar8;
  if ((ulong)pbVar18 >> 0x3e == 3) {
    uVar15 = 0;
    if (((uVar8 != 0) || (pbVar18 != (byte *)0xc000000000000000)) ||
       ((uVar21 >> 0x3e < 3 || ((uVar15 = 0, uVar11 != 0 || (uVar21 != 0xc000000000000000))))))
    goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar12 == 0) {
        uVar15 = (ulong)pbVar18 >> 0x30 & 0xff;
      }
      else {
        iVar14 = (int)(uVar8 >> 0x20);
        if (SBORROW4(iVar14,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar6)();
        }
        uVar15 = (ulong)(iVar14 - iVar7);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar16 != 2) {
        uVar8 = (ulong)(uVar15 == 0);
        goto LAB_00038af8;
      }
      uVar17 = *(long *)(uVar11 + 0x18) - *(long *)(uVar11 + 0x10);
      if (SBORROW8(*(long *)(uVar11 + 0x18),*(long *)(uVar11 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar6)();
      }
LAB_000388d4:
      if (uVar15 != uVar17) {
LAB_0003899c:
        uVar8 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar12 == 2) {
        uVar15 = *(long *)(uVar8 + 0x18) - *(long *)(uVar8 + 0x10);
        if (SBORROW8(*(long *)(uVar8 + 0x18),*(long *)(uVar8 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar6)();
        }
        goto joined_r0x000389b8;
      }
      uVar15 = 0;
      if (1 < uVar16) goto LAB_00038898;
LAB_000388cc:
      if (uVar16 == 0) {
        uVar17 = uVar21 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar14 = (int)(uVar11 >> 0x20);
      if (SBORROW4(iVar14,(int)uVar11)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar6)();
      }
      if (uVar15 != (long)(iVar14 - (int)uVar11)) goto LAB_0003899c;
    }
    if (0 < (long)uVar15) {
      if (uVar12 < 2) {
        if (uVar12 == 0) {
          abStack_70[0] = (byte)uVar8;
          abStack_70[1] = (byte)(uVar8 >> 8);
          abStack_70[2] = (byte)(uVar8 >> 0x10);
          abStack_70[3] = (byte)(uVar8 >> 0x18);
          abStack_70[4] = (byte)(uVar8 >> 0x20);
          abStack_70[5] = (byte)(uVar8 >> 0x28);
          abStack_70[6] = (byte)(uVar8 >> 0x30);
          abStack_70[7] = (byte)(uVar8 >> 0x38);
          abStack_70[8] = (byte)pbVar18;
          abStack_70[9] = (byte)((ulong)pbVar18 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar18 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar18 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar18 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar18 >> 0x28);
          pbVar18 = abStack_70 + ((ulong)pbVar18 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar8 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar20 = (long)iVar7;
        uVar15 = ((long)uVar8 >> 0x20) - lVar20;
        if ((long)uVar8 >> 0x20 < lVar20) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar6)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar8 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar8 = 0;
        }
        else {
          uVar17 = uVar8;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar20,uVar17)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar6)();
          }
          uVar8 = (lVar20 - uVar17) + uVar8;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar8 != 0) {
            if ((long)uVar15 <= (long)uVar17) {
              uVar17 = uVar15;
            }
            pbVar10 = (byte *)(uVar17 + uVar8);
            goto LAB_00038aec;
          }
        }
        pbVar10 = (byte *)0x0;
      }
      else {
        if (uVar12 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar18 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar20 = *(long *)(uVar8 + 0x10);
        lVar1 = *(long *)(uVar8 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar15 = uVar8;
        if (uVar8 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar20,uVar15)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar6)();
          }
          uVar8 = (lVar20 - uVar15) + uVar8;
        }
        uVar17 = lVar1 - lVar20;
        if (SBORROW8(lVar1,lVar20)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar6)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar8 == 0) {
          pbVar10 = (byte *)0x0;
        }
        else {
          if ((long)uVar17 <= (long)uVar15) {
            uVar15 = uVar17;
          }
          pbVar10 = (byte *)(uVar15 + uVar8);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar18 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar8,pbVar10,uVar11,uVar21);
      uVar8 = (ulong)abStack_70[0];
      pbVar18 = pbVar10;
      goto LAB_00038af8;
    }
  }
  uVar8 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar13) {
    return uVar8;
  }
  ___stack_chk_fail();
  lVar13 = (long)pbVar18 - uVar8;
  if (SBORROW8((long)pbVar18,uVar8)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar6)();
  }
  uVar19 = *unaff_x20;
  uVar17 = uVar19 & 0xffffffffffffff8;
  uVar8 = uVar17 + 0x20 + uVar8 * 8;
  uVar9 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar15 = uVar8;
  _swift_arrayDestroy(uVar8,lVar13,uVar9);
  lVar20 = uVar11 - lVar13;
  if (SBORROW8(uVar11,lVar13)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar6)();
  }
  if (lVar20 != 0) {
    if (uVar19 >> 0x3e == 0) {
      uVar15 = *(ulong *)(uVar17 + 0x10);
      lVar13 = uVar15 - (long)pbVar18;
    }
    else {
      uVar15 = uVar17;
      if ((uVar19 & 0x8000000000000000) != 0) {
        uVar15 = uVar19;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar13 = uVar15 - (long)pbVar18;
    }
    if (SBORROW8(uVar15,(long)pbVar18)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar6)();
    }
    uVar8 = uVar8 + uVar11 * 8;
    uVar15 = uVar17 + 0x20 + (long)pbVar18 * 8;
    if (uVar8 != uVar15 || uVar15 + lVar13 * 8 <= uVar8) {
      _memmove(uVar8,uVar15,lVar13 << 3);
    }
    if (uVar19 >> 0x3e == 0) {
      uVar15 = *(ulong *)(uVar17 + 0x10);
    }
    else {
      uVar15 = uVar17;
      if ((uVar19 & 0x8000000000000000) != 0) {
        uVar15 = uVar19;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar15,lVar20)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar6)();
    }
    *(ulong *)(uVar17 + 0x10) = uVar15 + lVar20;
  }
  if (0 < (long)uVar11) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar6)();
  }
  return uVar15;
}



/* Entry: 00115ab0; end: 00115ab7;  */

undefined8 FUN_00115ab0(void)

{
  return 1;
}



/* Entry: 00115ab8; end: 00115b47;  */

/* WARNING: Removing unreachable block (ram,0x00115b14) */

void FUN_00115ab8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  uStack_40 = unaff_x20[6];
  uStack_98 = param_1[5];
  uStack_a0 = param_1[4];
  uStack_88 = param_1[7];
  uStack_90 = param_1[6];
  uStack_80 = param_1[8];
  uStack_b8 = param_1[1];
  uStack_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  FUN_001a6eb8(&uStack_c0);
  param_1[5] = uStack_98;
  param_1[4] = uStack_a0;
  param_1[7] = uStack_88;
  param_1[6] = uStack_90;
  param_1[8] = uStack_80;
  param_1[1] = uStack_b8;
  *param_1 = uStack_c0;
  param_1[3] = uStack_a8;
  param_1[2] = uStack_b0;
  return;
}



/* Entry: 00115b48; end: 00115b8b;  */

uint FUN_00115b48(uint param_1)

{
  FUN_0010f580();
  return param_1 & 1;
}



/* Entry: 00115b8c; end: 00115be3;  */

uint FUN_00115b8c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_60 = unaff_x20[6];
  func_0x001a77d8(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 00115be4; end: 00115c87;  */

undefined8 FUN_00115be4(void)

{
  return 1;
}



/* Entry: 00115c88; end: 00115cb7;  */

uint FUN_00115c88(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_00111bdc(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],&UNK_009b5398,0x116574);
  return (uint)param_1 & 1;
}



/* Entry: 00115cb8; end: 00115ccf;  */

ulong FUN_00115cb8(ulong *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong *unaff_x20;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  if (*unaff_x20 != *param_1) {
    return 0;
  }
  uVar6 = unaff_x20[1];
  pbVar9 = (byte *)unaff_x20[2];
  uVar11 = param_1[1];
  uVar8 = param_1[2];
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar9 >> 0x20);
  uVar12 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar8 >> 0x20);
  uVar15 = uVar3 >> 0x1e;
  iVar5 = (int)uVar6;
  if ((ulong)pbVar9 >> 0x3e == 3) {
    uVar14 = 0;
    if ((((uVar6 != 0) || (pbVar9 != (byte *)0xc000000000000000)) || (uVar8 >> 0x3e < 3)) ||
       ((uVar14 = 0, uVar11 != 0 || (uVar8 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar12 == 0) {
        uVar14 = (ulong)pbVar9 >> 0x30 & 0xff;
      }
      else {
        iVar13 = (int)(uVar6 >> 0x20);
        if (SBORROW4(iVar13,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar14 = (ulong)(iVar13 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar15 != 2) {
        uVar6 = (ulong)(uVar14 == 0);
        goto LAB_00038af8;
      }
      uVar16 = *(long *)(uVar11 + 0x18) - *(long *)(uVar11 + 0x10);
      if (SBORROW8(*(long *)(uVar11 + 0x18),*(long *)(uVar11 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar14 != uVar16) {
LAB_0003899c:
        uVar6 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar12 == 2) {
        uVar14 = *(long *)(uVar6 + 0x18) - *(long *)(uVar6 + 0x10);
        if (SBORROW8(*(long *)(uVar6 + 0x18),*(long *)(uVar6 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar14 = 0;
      if (1 < uVar15) goto LAB_00038898;
LAB_000388cc:
      if (uVar15 == 0) {
        uVar16 = uVar8 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar13 = (int)(uVar11 >> 0x20);
      if (SBORROW4(iVar13,(int)uVar11)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar14 != (long)(iVar13 - (int)uVar11)) goto LAB_0003899c;
    }
    if (0 < (long)uVar14) {
      if (uVar12 < 2) {
        if (uVar12 == 0) {
          abStack_70[0] = (byte)uVar6;
          abStack_70[1] = (byte)(uVar6 >> 8);
          abStack_70[2] = (byte)(uVar6 >> 0x10);
          abStack_70[3] = (byte)(uVar6 >> 0x18);
          abStack_70[4] = (byte)(uVar6 >> 0x20);
          abStack_70[5] = (byte)(uVar6 >> 0x28);
          abStack_70[6] = (byte)(uVar6 >> 0x30);
          abStack_70[7] = (byte)(uVar6 >> 0x38);
          abStack_70[8] = (byte)pbVar9;
          abStack_70[9] = (byte)((ulong)pbVar9 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar9 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar9 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar9 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar9 >> 0x28);
          pbVar9 = abStack_70 + ((ulong)pbVar9 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar6 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        uVar14 = ((long)uVar6 >> 0x20) - lVar17;
        if ((long)uVar6 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar6 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar6 = 0;
        }
        else {
          uVar16 = uVar6;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar16)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar16) + uVar6;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar6 != 0) {
            if ((long)uVar14 <= (long)uVar16) {
              uVar16 = uVar14;
            }
            pbVar10 = (byte *)(uVar16 + uVar6);
            goto LAB_00038aec;
          }
        }
        pbVar10 = (byte *)0x0;
      }
      else {
        if (uVar12 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar9 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(uVar6 + 0x10);
        lVar1 = *(long *)(uVar6 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar14 = uVar6;
        if (uVar6 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar14)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar14) + uVar6;
        }
        uVar16 = lVar1 - lVar17;
        if (SBORROW8(lVar1,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar6 == 0) {
          pbVar10 = (byte *)0x0;
        }
        else {
          if ((long)uVar16 <= (long)uVar14) {
            uVar14 = uVar16;
          }
          pbVar10 = (byte *)(uVar14 + uVar6);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar9 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar6,pbVar10,uVar11,uVar8);
      uVar6 = (ulong)abStack_70[0];
      pbVar9 = pbVar10;
      goto LAB_00038af8;
    }
  }
  uVar6 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar6;
  }
  ___stack_chk_fail();
  lVar17 = (long)pbVar9 - uVar6;
  if (SBORROW8((long)pbVar9,uVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar16 = *unaff_x20;
  uVar14 = uVar16 & 0xffffffffffffff8;
  uVar6 = uVar14 + 0x20 + uVar6 * 8;
  uVar7 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar8 = uVar6;
  _swift_arrayDestroy(uVar6,lVar17,uVar7);
  lVar1 = uVar11 - lVar17;
  if (SBORROW8(uVar11,lVar17)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar1 != 0) {
    if (uVar16 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar14 + 0x10);
      lVar17 = uVar8 - (long)pbVar9;
    }
    else {
      uVar8 = uVar14;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar8 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar17 = uVar8 - (long)pbVar9;
    }
    if (SBORROW8(uVar8,(long)pbVar9)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar6 = uVar6 + uVar11 * 8;
    uVar8 = uVar14 + 0x20 + (long)pbVar9 * 8;
    if (uVar6 != uVar8 || uVar8 + lVar17 * 8 <= uVar6) {
      _memmove(uVar6,uVar8,lVar17 << 3);
    }
    if (uVar16 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar14 + 0x10);
    }
    else {
      uVar8 = uVar14;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar8 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar8,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar14 + 0x10) = uVar8 + lVar1;
  }
  if (0 < (long)uVar11) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar8;
}



/* Entry: 00115cd0; end: 00115cff;  */

uint FUN_00115cd0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_00111bdc(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],&UNK_009b5418,0x116570);
  return (uint)param_1 & 1;
}



/* Entry: 00115d00; end: 00115d3b;  */

ulong FUN_00115d00(ulong *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong *unaff_x20;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  if (*unaff_x20 != *param_1) {
    return 0;
  }
  uVar6 = unaff_x20[1];
  pbVar9 = (byte *)unaff_x20[2];
  uVar11 = param_1[1];
  uVar8 = param_1[2];
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar9 >> 0x20);
  uVar12 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar8 >> 0x20);
  uVar15 = uVar3 >> 0x1e;
  iVar5 = (int)uVar6;
  if ((ulong)pbVar9 >> 0x3e == 3) {
    uVar14 = 0;
    if ((((uVar6 != 0) || (pbVar9 != (byte *)0xc000000000000000)) || (uVar8 >> 0x3e < 3)) ||
       ((uVar14 = 0, uVar11 != 0 || (uVar8 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar12 == 0) {
        uVar14 = (ulong)pbVar9 >> 0x30 & 0xff;
      }
      else {
        iVar13 = (int)(uVar6 >> 0x20);
        if (SBORROW4(iVar13,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar14 = (ulong)(iVar13 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar15 != 2) {
        uVar6 = (ulong)(uVar14 == 0);
        goto LAB_00038af8;
      }
      uVar16 = *(long *)(uVar11 + 0x18) - *(long *)(uVar11 + 0x10);
      if (SBORROW8(*(long *)(uVar11 + 0x18),*(long *)(uVar11 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar14 != uVar16) {
LAB_0003899c:
        uVar6 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar12 == 2) {
        uVar14 = *(long *)(uVar6 + 0x18) - *(long *)(uVar6 + 0x10);
        if (SBORROW8(*(long *)(uVar6 + 0x18),*(long *)(uVar6 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar14 = 0;
      if (1 < uVar15) goto LAB_00038898;
LAB_000388cc:
      if (uVar15 == 0) {
        uVar16 = uVar8 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar13 = (int)(uVar11 >> 0x20);
      if (SBORROW4(iVar13,(int)uVar11)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar14 != (long)(iVar13 - (int)uVar11)) goto LAB_0003899c;
    }
    if (0 < (long)uVar14) {
      if (uVar12 < 2) {
        if (uVar12 == 0) {
          abStack_70[0] = (byte)uVar6;
          abStack_70[1] = (byte)(uVar6 >> 8);
          abStack_70[2] = (byte)(uVar6 >> 0x10);
          abStack_70[3] = (byte)(uVar6 >> 0x18);
          abStack_70[4] = (byte)(uVar6 >> 0x20);
          abStack_70[5] = (byte)(uVar6 >> 0x28);
          abStack_70[6] = (byte)(uVar6 >> 0x30);
          abStack_70[7] = (byte)(uVar6 >> 0x38);
          abStack_70[8] = (byte)pbVar9;
          abStack_70[9] = (byte)((ulong)pbVar9 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar9 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar9 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar9 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar9 >> 0x28);
          pbVar9 = abStack_70 + ((ulong)pbVar9 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar6 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        uVar14 = ((long)uVar6 >> 0x20) - lVar17;
        if ((long)uVar6 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar6 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar6 = 0;
        }
        else {
          uVar16 = uVar6;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar16)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar16) + uVar6;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar6 != 0) {
            if ((long)uVar14 <= (long)uVar16) {
              uVar16 = uVar14;
            }
            pbVar10 = (byte *)(uVar16 + uVar6);
            goto LAB_00038aec;
          }
        }
        pbVar10 = (byte *)0x0;
      }
      else {
        if (uVar12 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar9 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(uVar6 + 0x10);
        lVar1 = *(long *)(uVar6 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar14 = uVar6;
        if (uVar6 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar14)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar14) + uVar6;
        }
        uVar16 = lVar1 - lVar17;
        if (SBORROW8(lVar1,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar6 == 0) {
          pbVar10 = (byte *)0x0;
        }
        else {
          if ((long)uVar16 <= (long)uVar14) {
            uVar14 = uVar16;
          }
          pbVar10 = (byte *)(uVar14 + uVar6);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar9 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar6,pbVar10,uVar11,uVar8);
      uVar6 = (ulong)abStack_70[0];
      pbVar9 = pbVar10;
      goto LAB_00038af8;
    }
  }
  uVar6 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar6;
  }
  ___stack_chk_fail();
  lVar17 = (long)pbVar9 - uVar6;
  if (SBORROW8((long)pbVar9,uVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar16 = *unaff_x20;
  uVar14 = uVar16 & 0xffffffffffffff8;
  uVar6 = uVar14 + 0x20 + uVar6 * 8;
  uVar7 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar8 = uVar6;
  _swift_arrayDestroy(uVar6,lVar17,uVar7);
  lVar1 = uVar11 - lVar17;
  if (SBORROW8(uVar11,lVar17)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar1 != 0) {
    if (uVar16 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar14 + 0x10);
      lVar17 = uVar8 - (long)pbVar9;
    }
    else {
      uVar8 = uVar14;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar8 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar17 = uVar8 - (long)pbVar9;
    }
    if (SBORROW8(uVar8,(long)pbVar9)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar6 = uVar6 + uVar11 * 8;
    uVar8 = uVar14 + 0x20 + (long)pbVar9 * 8;
    if (uVar6 != uVar8 || uVar8 + lVar17 * 8 <= uVar6) {
      _memmove(uVar6,uVar8,lVar17 << 3);
    }
    if (uVar16 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar14 + 0x10);
    }
    else {
      uVar8 = uVar14;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar8 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar8,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar14 + 0x10) = uVar8 + lVar1;
  }
  if (0 < (long)uVar11) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar8;
}



/* Entry: 00115d3c; end: 00115d6b;  */

uint FUN_00115d3c(undefined8 param_1)

{
  undefined4 *unaff_x20;
  
  FUN_00111cc4(param_1,*unaff_x20,*(undefined8 *)(unaff_x20 + 2),*(undefined8 *)(unaff_x20 + 4),
               &UNK_009b5498,0x11656c);
  return (uint)param_1 & 1;
}



/* Entry: 00115d6c; end: 00115d83;  */

ulong FUN_00115d6c(int *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong *unaff_x20;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  if ((int)*unaff_x20 != *param_1) {
    return 0;
  }
  uVar6 = unaff_x20[1];
  pbVar9 = (byte *)unaff_x20[2];
  lVar11 = *(long *)(param_1 + 2);
  uVar8 = *(ulong *)(param_1 + 4);
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar9 >> 0x20);
  uVar12 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar8 >> 0x20);
  uVar15 = uVar3 >> 0x1e;
  iVar5 = (int)uVar6;
  if ((ulong)pbVar9 >> 0x3e == 3) {
    uVar14 = 0;
    if ((((uVar6 != 0) || (pbVar9 != (byte *)0xc000000000000000)) || (uVar8 >> 0x3e < 3)) ||
       ((uVar14 = 0, lVar11 != 0 || (uVar8 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar12 == 0) {
        uVar14 = (ulong)pbVar9 >> 0x30 & 0xff;
      }
      else {
        iVar13 = (int)(uVar6 >> 0x20);
        if (SBORROW4(iVar13,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar14 = (ulong)(iVar13 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar15 != 2) {
        uVar6 = (ulong)(uVar14 == 0);
        goto LAB_00038af8;
      }
      uVar16 = *(long *)(lVar11 + 0x18) - *(long *)(lVar11 + 0x10);
      if (SBORROW8(*(long *)(lVar11 + 0x18),*(long *)(lVar11 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar14 != uVar16) {
LAB_0003899c:
        uVar6 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar12 == 2) {
        uVar14 = *(long *)(uVar6 + 0x18) - *(long *)(uVar6 + 0x10);
        if (SBORROW8(*(long *)(uVar6 + 0x18),*(long *)(uVar6 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar14 = 0;
      if (1 < uVar15) goto LAB_00038898;
LAB_000388cc:
      if (uVar15 == 0) {
        uVar16 = uVar8 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar13 = (int)((ulong)lVar11 >> 0x20);
      if (SBORROW4(iVar13,(int)lVar11)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar14 != (long)(iVar13 - (int)lVar11)) goto LAB_0003899c;
    }
    if (0 < (long)uVar14) {
      if (uVar12 < 2) {
        if (uVar12 == 0) {
          abStack_70[0] = (byte)uVar6;
          abStack_70[1] = (byte)(uVar6 >> 8);
          abStack_70[2] = (byte)(uVar6 >> 0x10);
          abStack_70[3] = (byte)(uVar6 >> 0x18);
          abStack_70[4] = (byte)(uVar6 >> 0x20);
          abStack_70[5] = (byte)(uVar6 >> 0x28);
          abStack_70[6] = (byte)(uVar6 >> 0x30);
          abStack_70[7] = (byte)(uVar6 >> 0x38);
          abStack_70[8] = (byte)pbVar9;
          abStack_70[9] = (byte)((ulong)pbVar9 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar9 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar9 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar9 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar9 >> 0x28);
          pbVar9 = abStack_70 + ((ulong)pbVar9 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar6 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        uVar14 = ((long)uVar6 >> 0x20) - lVar17;
        if ((long)uVar6 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar6 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar6 = 0;
        }
        else {
          uVar16 = uVar6;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar16)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar16) + uVar6;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar6 != 0) {
            if ((long)uVar14 <= (long)uVar16) {
              uVar16 = uVar14;
            }
            pbVar10 = (byte *)(uVar16 + uVar6);
            goto LAB_00038aec;
          }
        }
        pbVar10 = (byte *)0x0;
      }
      else {
        if (uVar12 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar9 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(uVar6 + 0x10);
        lVar1 = *(long *)(uVar6 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar14 = uVar6;
        if (uVar6 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar14)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar14) + uVar6;
        }
        uVar16 = lVar1 - lVar17;
        if (SBORROW8(lVar1,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar6 == 0) {
          pbVar10 = (byte *)0x0;
        }
        else {
          if ((long)uVar16 <= (long)uVar14) {
            uVar14 = uVar16;
          }
          pbVar10 = (byte *)(uVar14 + uVar6);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar9 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar6,pbVar10,lVar11,uVar8);
      uVar6 = (ulong)abStack_70[0];
      pbVar9 = pbVar10;
      goto LAB_00038af8;
    }
  }
  uVar6 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar6;
  }
  ___stack_chk_fail();
  lVar17 = (long)pbVar9 - uVar6;
  if (SBORROW8((long)pbVar9,uVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar16 = *unaff_x20;
  uVar14 = uVar16 & 0xffffffffffffff8;
  uVar6 = uVar14 + 0x20 + uVar6 * 8;
  uVar7 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar8 = uVar6;
  _swift_arrayDestroy(uVar6,lVar17,uVar7);
  lVar1 = lVar11 - lVar17;
  if (SBORROW8(lVar11,lVar17)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar1 != 0) {
    if (uVar16 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar14 + 0x10);
      lVar17 = uVar8 - (long)pbVar9;
    }
    else {
      uVar8 = uVar14;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar8 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar17 = uVar8 - (long)pbVar9;
    }
    if (SBORROW8(uVar8,(long)pbVar9)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar6 = uVar6 + lVar11 * 8;
    uVar8 = uVar14 + 0x20 + (long)pbVar9 * 8;
    if (uVar6 != uVar8 || uVar8 + lVar17 * 8 <= uVar6) {
      _memmove(uVar6,uVar8,lVar17 << 3);
    }
    if (uVar16 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar14 + 0x10);
    }
    else {
      uVar8 = uVar14;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar8 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar8,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar14 + 0x10) = uVar8 + lVar1;
  }
  if (0 < lVar11) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar8;
}



/* Entry: 00115d84; end: 00115db3;  */

uint FUN_00115d84(undefined8 param_1)

{
  undefined4 *unaff_x20;
  
  FUN_00111cc4(param_1,*unaff_x20,*(undefined8 *)(unaff_x20 + 2),*(undefined8 *)(unaff_x20 + 4),
               &UNK_009b5518,0x116568);
  return (uint)param_1 & 1;
}


