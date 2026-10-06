/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00175b28; end: 00175b5f;  */

undefined1  [16] FUN_00175b28(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x80000000008b9380;
  auVar1._0_8_ = 0xd00000000000001c;
  return auVar1;
}



/* Entry: 00175b60; end: 00175b97;  */

void FUN_00175b60(void)

{
  func_0x001738ac();
  return;
}



/* Entry: 00175b98; end: 00175c37;  */

void FUN_00175b98(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0e50 != -1) {
    _swift_once(0xaf0e50,FUN_00173248);
  }
  uVar5 = uRam0000000000b65038;
  uVar4 = uRam0000000000b65030;
  uVar3 = uRam0000000000b65028;
  uVar2 = uRam0000000000b65020;
  uVar1 = uRam0000000000b65018;
  *param_1 = uRam0000000000b65010;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00175c38; end: 00175c57;  */

void FUN_00175c38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2230;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2230,&UNK_007dec10);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 00175c58; end: 00175d23;  */

/* WARNING: Removing unreachable block (ram,0x00175ce0) */

void FUN_00175c58(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
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
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(&uStack_90,0);
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_a0 = uStack_50;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  (*param_3)(uVar4,&uStack_e0,uVar1,uVar3,uVar2,uVar4);
  FUN_0014cc4c(&uStack_e0,uVar1,uVar3);
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_50 = uStack_a0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00175d24; end: 00175d2f;  */

/* WARNING: Removing unreachable block (ram,0x00175d7c) */

void FUN_00175d24(undefined8 *param_1)

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
  FUN_001740e4(&uStack_80,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],FUN_00174228);
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



/* Entry: 00175d30; end: 00175daf;  */

/* WARNING: Removing unreachable block (ram,0x00175d7c) */

void FUN_00175d30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_001740e4(&uStack_80,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],param_4);
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



/* Entry: 00175db0; end: 00175dbb;  */

/* WARNING: Removing unreachable block (ram,0x00175e40) */

void FUN_00175db0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
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
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(&uStack_90);
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_a0 = uStack_50;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  FUN_00174228(uVar4,&uStack_e0,uVar1,uVar3,uVar2,uVar4);
  FUN_0014cc4c(&uStack_e0,uVar1,uVar3);
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_50 = uStack_a0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00175dbc; end: 00175e83;  */

/* WARNING: Removing unreachable block (ram,0x00175e40) */

void FUN_00175dbc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *in_x3;
  undefined8 *unaff_x20;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
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
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(&uStack_90);
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_a0 = uStack_50;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  (*in_x3)(uVar4,&uStack_e0,uVar1,uVar3,uVar2,uVar4);
  FUN_0014cc4c(&uStack_e0,uVar1,uVar3);
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_50 = uStack_a0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00175e84; end: 00175e8f;  */

bool FUN_00175e84(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
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
  
  uVar15 = *param_1;
  uVar14 = param_1[1];
  uVar1 = param_1[2];
  uVar13 = param_1[3];
  uVar2 = *param_2;
  uVar4 = param_2[1];
  lVar3 = param_2[2];
  uVar5 = param_2[3];
  if (uVar13 != uVar5) {
    _swift_retain(uVar13);
    _swift_retain(uVar5);
    uVar11 = uVar13;
    (*(code *)0x17514c)(uVar13,uVar5);
    _swift_release(uVar5);
    _swift_release(uVar13);
    if ((uVar11 & 1) == 0) {
      return false;
    }
  }
  FUN_00038814(uVar15,uVar14,uVar2,uVar4);
  if ((uVar15 & 1) == 0) {
    return false;
  }
  if (*(long *)(uVar1 + 0x10) != *(long *)(lVar3 + 0x10)) {
    return false;
  }
  uVar14 = 1L << ((ulong)*(byte *)(uVar1 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(uVar1 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(uVar1 + 0x40);
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
  lStack_d0 = *(long *)(*(long *)(uVar1 + 0x30) + uVar13 * 8);
  FUN_000e1304(*(long *)(uVar1 + 0x38) + uVar13 * 0x28,&uStack_c8);
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
      _swift_release(uVar1);
      return true;
    }
    uVar13 = 0;
    FUN_000e1450(&uStack_98);
    if ((*(long *)(lVar3 + 0x10) == 0) || (FUN_000e1d94(lVar8), (uVar13 & 1) == 0)) {
LAB_000e3018:
      _swift_release(uVar1);
LAB_000e3040:
      FUN_00011670(&lStack_d0);
      return bVar7;
    }
    FUN_000e1304(*(long *)(lVar3 + 0x38) + lVar8 * 0x28,auStack_120);
    FUN_000e1450(auStack_120,alStack_f8);
    plVar9 = &lStack_d0;
    FUN_0001393c(plVar9,uStack_b8);
    _swift_getDynamicType();
    plVar10 = alStack_f8;
    FUN_0001393c(plVar10,uStack_e0);
    _swift_getDynamicType();
    lVar8 = lStack_b0;
    uVar2 = uStack_b8;
    if (plVar9 != plVar10) {
      _swift_release(uVar1);
      FUN_00011670(alStack_f8);
      goto LAB_000e3040;
    }
    FUN_0001393c(&lStack_d0,uStack_b8);
    plVar9 = alStack_f8;
    (**(code **)(lVar8 + 0x20))(plVar9,uVar2,lVar8);
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
      uVar15 = ((ulong *)(uVar1 + 0x40))[lVar8];
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



/* Entry: 00175e90; end: 00175f57;  */

bool FUN_00175e90(ulong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 code *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
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
  
  uVar15 = *param_1;
  uVar14 = param_1[1];
  uVar1 = param_1[2];
  uVar13 = param_1[3];
  uVar2 = *param_2;
  uVar4 = param_2[1];
  lVar3 = param_2[2];
  uVar5 = param_2[3];
  if (uVar13 != uVar5) {
    _swift_retain(uVar13);
    _swift_retain(uVar5);
    uVar11 = uVar13;
    (*param_5)(uVar13,uVar5);
    _swift_release(uVar5);
    _swift_release(uVar13);
    if ((uVar11 & 1) == 0) {
      return false;
    }
  }
  FUN_00038814(uVar15,uVar14,uVar2,uVar4);
  if ((uVar15 & 1) == 0) {
    return false;
  }
  if (*(long *)(uVar1 + 0x10) != *(long *)(lVar3 + 0x10)) {
    return false;
  }
  uVar14 = 1L << ((ulong)*(byte *)(uVar1 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(uVar1 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(uVar1 + 0x40);
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
  lStack_d0 = *(long *)(*(long *)(uVar1 + 0x30) + uVar13 * 8);
  FUN_000e1304(*(long *)(uVar1 + 0x38) + uVar13 * 0x28,&uStack_c8);
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
      _swift_release(uVar1);
      return true;
    }
    uVar13 = 0;
    FUN_000e1450(&uStack_98);
    if ((*(long *)(lVar3 + 0x10) == 0) || (FUN_000e1d94(lVar8), (uVar13 & 1) == 0)) {
LAB_000e3018:
      _swift_release(uVar1);
LAB_000e3040:
      FUN_00011670(&lStack_d0);
      return bVar7;
    }
    FUN_000e1304(*(long *)(lVar3 + 0x38) + lVar8 * 0x28,auStack_120);
    FUN_000e1450(auStack_120,alStack_f8);
    plVar9 = &lStack_d0;
    FUN_0001393c(plVar9,uStack_b8);
    _swift_getDynamicType();
    plVar10 = alStack_f8;
    FUN_0001393c(plVar10,uStack_e0);
    _swift_getDynamicType();
    lVar8 = lStack_b0;
    uVar2 = uStack_b8;
    if (plVar9 != plVar10) {
      _swift_release(uVar1);
      FUN_00011670(alStack_f8);
      goto LAB_000e3040;
    }
    FUN_0001393c(&lStack_d0,uStack_b8);
    plVar9 = alStack_f8;
    (**(code **)(lVar8 + 0x20))(plVar9,uVar2,lVar8);
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
      uVar15 = ((ulong *)(uVar1 + 0x40))[lVar8];
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



/* Entry: 00175f58; end: 00176017;  */

void FUN_00175f58(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007df4a0,0x1e,&uStack_48,&lStack_40);
  puRam0000000000b65048 = puStack_38;
  lRam0000000000b65040 = lStack_40;
  puRam0000000000b65058 = puStack_28;
  puRam0000000000b65050 = puStack_30;
  puRam0000000000b65068 = puStack_18;
  puRam0000000000b65060 = puStack_20;
  return;
}



/* Entry: 00176018; end: 00176157;  */

void FUN_00176018(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0e58 != -1) {
    _swift_once(0xaf0e58,FUN_00175f58);
  }
  uVar5 = uRam0000000000b65068;
  uVar4 = uRam0000000000b65060;
  uVar3 = uRam0000000000b65058;
  uVar2 = uRam0000000000b65050;
  uVar1 = uRam0000000000b65048;
  *param_1 = uRam0000000000b65040;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00176158; end: 00176217;  */

void FUN_00176158(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007df470,0x23,&uStack_48,&lStack_40);
  puRam0000000000b65078 = puStack_38;
  lRam0000000000b65070 = lStack_40;
  puRam0000000000b65088 = puStack_28;
  puRam0000000000b65080 = puStack_30;
  puRam0000000000b65098 = puStack_18;
  puRam0000000000b65090 = puStack_20;
  return;
}



/* Entry: 00176218; end: 00176357;  */

void FUN_00176218(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0e60 != -1) {
    _swift_once(0xaf0e60,FUN_00176158);
  }
  uVar5 = uRam0000000000b65098;
  uVar4 = uRam0000000000b65090;
  uVar3 = uRam0000000000b65088;
  uVar2 = uRam0000000000b65080;
  uVar1 = uRam0000000000b65078;
  *param_1 = uRam0000000000b65070;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00176358; end: 00176417;  */

void FUN_00176358(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007df430,0x3a,&uStack_48,&lStack_40);
  puRam0000000000b650a8 = puStack_38;
  lRam0000000000b650a0 = lStack_40;
  puRam0000000000b650b8 = puStack_28;
  puRam0000000000b650b0 = puStack_30;
  puRam0000000000b650c8 = puStack_18;
  puRam0000000000b650c0 = puStack_20;
  return;
}



/* Entry: 00176418; end: 00176557;  */

void FUN_00176418(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0e68 != -1) {
    _swift_once(0xaf0e68,FUN_00176358);
  }
  uVar5 = uRam0000000000b650c8;
  uVar4 = uRam0000000000b650c0;
  uVar3 = uRam0000000000b650b8;
  uVar2 = uRam0000000000b650b0;
  uVar1 = uRam0000000000b650a8;
  *param_1 = uRam0000000000b650a0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00176558; end: 00176617;  */

void FUN_00176558(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007df350,0xd4,&uStack_48,&lStack_40);
  puRam0000000000b650d8 = puStack_38;
  lRam0000000000b650d0 = lStack_40;
  puRam0000000000b650e8 = puStack_28;
  puRam0000000000b650e0 = puStack_30;
  puRam0000000000b650f8 = puStack_18;
  puRam0000000000b650f0 = puStack_20;
  return;
}



/* Entry: 00176618; end: 00176757;  */

void FUN_00176618(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0e70 != -1) {
    _swift_once(0xaf0e70,FUN_00176558);
  }
  uVar5 = uRam0000000000b650f8;
  uVar4 = uRam0000000000b650f0;
  uVar3 = uRam0000000000b650e8;
  uVar2 = uRam0000000000b650e0;
  uVar1 = uRam0000000000b650d8;
  *param_1 = uRam0000000000b650d0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00176758; end: 00176787;  */

void FUN_00176758(void)

{
  __sSS6appendyySSF(0x6e6f69746964452e,0xef746c7561666544);
  uRam0000000000b65100 = 0xd00000000000001c;
  uRam0000000000b65108 = 0x80000000008b9380;
  return;
}



/* Entry: 00176788; end: 001767c7;  */

undefined8 FUN_00176788(void)

{
  if (lRam0000000000af0e78 != -1) {
    _swift_once(0xaf0e78,FUN_00176758);
  }
  return 0xb65100;
}



/* Entry: 001767c8; end: 001767e7;  */

undefined1  [16] FUN_001767c8(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000000af0e78 != -1) {
    _swift_once(0xaf0e78,FUN_00176758);
  }
  auVar1._8_8_ = uRam0000000000b65108;
  auVar1._0_8_ = uRam0000000000b65100;
  _swift_bridgeObjectRetain(uRam0000000000b65108);
  return auVar1;
}



/* Entry: 001767e8; end: 001768a7;  */

void FUN_001767e8(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007df330,0x12,&uStack_48,&lStack_40);
  puRam0000000000b65118 = puStack_38;
  lRam0000000000b65110 = lStack_40;
  puRam0000000000b65128 = puStack_28;
  puRam0000000000b65120 = puStack_30;
  puRam0000000000b65138 = puStack_18;
  puRam0000000000b65130 = puStack_20;
  return;
}



/* Entry: 001768a8; end: 00176947;  */

void FUN_001768a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0e80 != -1) {
    _swift_once(0xaf0e80,FUN_001767e8);
  }
  uVar5 = uRam0000000000b65138;
  uVar4 = uRam0000000000b65130;
  uVar3 = uRam0000000000b65128;
  uVar2 = uRam0000000000b65120;
  uVar1 = uRam0000000000b65118;
  *param_1 = uRam0000000000b65110;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00176948; end: 00176a1b;  */

/* WARNING: Removing unreachable block (ram,0x00176a18) */

void FUN_00176948(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 2) {
        (**(code **)(param_3 + 0x158))(unaff_x20 + 0x18,param_2,param_3);
      }
      else if (lVar1 == 3) {
        pcVar4 = *(code **)(param_3 + 0x188);
        FUN_00192034();
        (*pcVar4)(unaff_x20 + 0x10,&UNK_009b16f0,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 00176a1c; end: 00176ad7;  */

void FUN_00176a1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  char cStack_41;
  
  uVar1 = param_1;
  if (unaff_x20[4] != 0) {
    uVar1 = unaff_x20[3];
    (**(code **)(param_3 + 0x70))(uVar1,unaff_x20[4],2,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if (*(char *)(unaff_x20 + 2) != '\f') {
      pcVar2 = *(code **)(param_3 + 0x80);
      cStack_41 = *(char *)(unaff_x20 + 2);
      FUN_00192034();
      (*pcVar2)(&cStack_41,3,&UNK_009b16f0,uVar1,param_2,param_3);
    }
    FUN_0013ad2c(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 00176ad8; end: 00176adb;  */

ulong FUN_00176ad8(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong *unaff_x20;
  ulong uVar19;
  long lVar20;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  if ((char)param_1[2] == '\f') {
    if ((char)param_2[2] != '\f') {
      return 0;
    }
  }
  else if ((char)param_1[2] != (char)param_2[2]) {
    return 0;
  }
  lVar13 = param_1[4];
  lVar11 = param_2[4];
  if (lVar13 == 0) {
    if (lVar11 != 0) {
      return 0;
    }
  }
  else {
    if (lVar11 == 0) {
      return 0;
    }
    uVar16 = param_1[3];
    if (((uVar16 != param_2[3]) || (lVar13 != lVar11)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar16,lVar13,param_2[3],lVar11,0), (uVar16 & 1) == 0)) {
      return 0;
    }
  }
  lVar11 = *param_1;
  pbVar9 = (byte *)param_1[1];
  lVar13 = *param_2;
  uVar16 = param_2[1];
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar9 >> 0x20);
  uVar12 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar16 >> 0x20);
  uVar17 = uVar3 >> 0x1e;
  iVar5 = (int)lVar11;
  if ((ulong)pbVar9 >> 0x3e == 3) {
    uVar15 = 0;
    if (((lVar11 != 0) || (pbVar9 != (byte *)0xc000000000000000)) ||
       ((uVar16 >> 0x3e < 3 || ((uVar15 = 0, lVar13 != 0 || (uVar16 != 0xc000000000000000))))))
    goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar12 == 0) {
        uVar15 = (ulong)pbVar9 >> 0x30 & 0xff;
      }
      else {
        iVar14 = (int)((ulong)lVar11 >> 0x20);
        if (SBORROW4(iVar14,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar15 = (ulong)(iVar14 - iVar5);
      }
joined_r0x000389b8:
      if (1 < uVar3 >> 0x1e) goto LAB_00038898;
LAB_000388cc:
      if (uVar17 == 0) {
        uVar18 = uVar16 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar14 = (int)((ulong)lVar13 >> 0x20);
      if (SBORROW4(iVar14,(int)lVar13)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar15 != (long)(iVar14 - (int)lVar13)) goto LAB_0003899c;
    }
    else {
      if (uVar12 == 2) {
        uVar15 = *(long *)(lVar11 + 0x18) - *(long *)(lVar11 + 0x10);
        if (SBORROW8(*(long *)(lVar11 + 0x18),*(long *)(lVar11 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar15 = 0;
      if (uVar17 < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar17 != 2) {
        uVar16 = (ulong)(uVar15 == 0);
        goto LAB_00038af8;
      }
      uVar18 = *(long *)(lVar13 + 0x18) - *(long *)(lVar13 + 0x10);
      if (SBORROW8(*(long *)(lVar13 + 0x18),*(long *)(lVar13 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar15 != uVar18) {
LAB_0003899c:
        uVar16 = 0;
        goto LAB_00038af8;
      }
    }
    if (0 < (long)uVar15) {
      if (uVar12 < 2) {
        if (uVar12 == 0) {
          abStack_70[0] = (byte)lVar11;
          abStack_70[1] = (byte)((ulong)lVar11 >> 8);
          abStack_70[2] = (byte)((ulong)lVar11 >> 0x10);
          abStack_70[3] = (byte)((ulong)lVar11 >> 0x18);
          abStack_70[4] = (byte)((ulong)lVar11 >> 0x20);
          abStack_70[5] = (byte)((ulong)lVar11 >> 0x28);
          abStack_70[6] = (byte)((ulong)lVar11 >> 0x30);
          abStack_70[7] = (byte)((ulong)lVar11 >> 0x38);
          abStack_70[8] = (byte)pbVar9;
          abStack_70[9] = (byte)((ulong)pbVar9 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar9 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar9 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar9 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar9 >> 0x28);
          pbVar9 = abStack_70 + ((ulong)pbVar9 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar16 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar20 = (long)iVar5;
        lVar6 = (lVar11 >> 0x20) - lVar20;
        if (lVar11 >> 0x20 < lVar20) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (lVar11 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          lVar11 = 0;
        }
        else {
          lVar7 = lVar11;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar20,lVar7)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          lVar11 = (lVar20 - lVar7) + lVar11;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (lVar11 != 0) {
            if (lVar6 <= lVar7) {
              lVar7 = lVar6;
            }
            pbVar10 = (byte *)(lVar7 + lVar11);
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
        lVar20 = *(long *)(lVar11 + 0x10);
        lVar7 = *(long *)(lVar11 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar6 = lVar11;
        if (lVar11 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar20,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          lVar11 = (lVar20 - lVar6) + lVar11;
        }
        lVar1 = lVar7 - lVar20;
        if (SBORROW8(lVar7,lVar20)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (lVar11 == 0) {
          pbVar10 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar6) {
            lVar6 = lVar1;
          }
          pbVar10 = (byte *)(lVar6 + lVar11);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar9 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,lVar11,pbVar10,lVar13,uVar16);
      uVar16 = (ulong)abStack_70[0];
      pbVar9 = pbVar10;
      goto LAB_00038af8;
    }
  }
  uVar16 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar16;
  }
  ___stack_chk_fail();
  lVar11 = (long)pbVar9 - uVar16;
  if (SBORROW8((long)pbVar9,uVar16)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar19 = *unaff_x20;
  uVar18 = uVar19 & 0xffffffffffffff8;
  uVar16 = uVar18 + 0x20 + uVar16 * 8;
  uVar8 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar15 = uVar16;
  _swift_arrayDestroy(uVar16,lVar11,uVar8);
  lVar6 = lVar13 - lVar11;
  if (SBORROW8(lVar13,lVar11)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar6 != 0) {
    if (uVar19 >> 0x3e == 0) {
      uVar15 = *(ulong *)(uVar18 + 0x10);
      lVar11 = uVar15 - (long)pbVar9;
    }
    else {
      uVar15 = uVar18;
      if ((uVar19 & 0x8000000000000000) != 0) {
        uVar15 = uVar19;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar11 = uVar15 - (long)pbVar9;
    }
    if (SBORROW8(uVar15,(long)pbVar9)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar16 = uVar16 + lVar13 * 8;
    uVar15 = uVar18 + 0x20 + (long)pbVar9 * 8;
    if (uVar16 != uVar15 || uVar15 + lVar11 * 8 <= uVar16) {
      _memmove(uVar16,uVar15,lVar11 << 3);
    }
    if (uVar19 >> 0x3e == 0) {
      uVar15 = *(ulong *)(uVar18 + 0x10);
    }
    else {
      uVar15 = uVar18;
      if ((uVar19 & 0x8000000000000000) != 0) {
        uVar15 = uVar19;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar15,lVar6)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar18 + 0x10) = uVar15 + lVar6;
  }
  if (lVar13 < 1) {
    return uVar15;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
  (*pcVar4)();
}



/* Entry: 00176adc; end: 00176b17;  */

void FUN_00176adc(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  func_0x0014d2f4(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00176b18; end: 00176b53;  */

void FUN_00176b18(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0xc;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}



/* Entry: 00176b54; end: 00176b83;  */

undefined1  [16] FUN_00176b54(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00023304(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 00176b84; end: 00176bb7;  */

void FUN_00176b84(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_00023358(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 00176bb8; end: 00176bcb;  */

undefined8 FUN_00176bb8(void)

{
  return 0x176bc8;
}



/* Entry: 00176bcc; end: 00176bf3;  */

void FUN_00176bcc(void)

{
  FUN_00176948();
  return;
}



/* Entry: 00176bf4; end: 00176c93;  */

void FUN_00176bf4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0e80 != -1) {
    _swift_once(0xaf0e80,FUN_001767e8);
  }
  uVar5 = uRam0000000000b65138;
  uVar4 = uRam0000000000b65130;
  uVar3 = uRam0000000000b65128;
  uVar2 = uRam0000000000b65120;
  uVar1 = uRam0000000000b65118;
  *param_1 = uRam0000000000b65110;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00176c94; end: 00176ccf;  */

void FUN_00176c94(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2228;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2228,&UNK_007dec08);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 00176cd0; end: 00176da3;  */

void FUN_00176cd0(void)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  uStack_30 = unaff_x20[4];
  __ss6HasherV5_seedABSi_tcfC(auStack_98,0);
  func_0x0014d2f4(auStack_98);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00176da4; end: 00176deb;  */

uint FUN_00176da4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  FUN_00182be4(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 00176dec; end: 00176e1b;  */

void FUN_00176dec(void)

{
  __sSS6appendyySSF(0x657275746165462e,0xef74726f70707553);
  uRam0000000000b65140 = 0xd00000000000001c;
  uRam0000000000b65148 = 0x80000000008b9380;
  return;
}



/* Entry: 00176e1c; end: 00176e83;  */

void FUN_00176e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  __sSS6appendyySSF(param_2,param_3);
  *param_4 = 0xd00000000000001c;
  *param_5 = 0x80000000008b9380;
  return;
}



/* Entry: 00176e84; end: 00176ec3;  */

undefined8 FUN_00176e84(void)

{
  if (lRam0000000000af0e88 != -1) {
    _swift_once(0xaf0e88,FUN_00176dec);
  }
  return 0xb65140;
}



/* Entry: 00176ec4; end: 00176ee3;  */

undefined1  [16] FUN_00176ec4(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000000af0e88 != -1) {
    _swift_once(0xaf0e88,FUN_00176dec);
  }
  auVar1._8_8_ = uRam0000000000b65148;
  auVar1._0_8_ = uRam0000000000b65140;
  _swift_bridgeObjectRetain(uRam0000000000b65148);
  return auVar1;
}



/* Entry: 00176ee4; end: 00176fa3;  */

void FUN_00176ee4(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007df2e0,0x4f,&uStack_48,&lStack_40);
  puRam0000000000b65158 = puStack_38;
  lRam0000000000b65150 = lStack_40;
  puRam0000000000b65168 = puStack_28;
  puRam0000000000b65160 = puStack_30;
  puRam0000000000b65178 = puStack_18;
  puRam0000000000b65170 = puStack_20;
  return;
}



/* Entry: 00176fa4; end: 00177043;  */

void FUN_00176fa4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0e90 != -1) {
    _swift_once(0xaf0e90,FUN_00176ee4);
  }
  uVar5 = uRam0000000000b65178;
  uVar4 = uRam0000000000b65170;
  uVar3 = uRam0000000000b65168;
  uVar2 = uRam0000000000b65160;
  uVar1 = uRam0000000000b65158;
  *param_1 = uRam0000000000b65150;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00177044; end: 0017715f;  */

/* WARNING: Removing unreachable block (ram,0x0017715c) */

void FUN_00177044(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x188);
          FUN_00192034();
          lVar2 = unaff_x20 + 0x10;
        }
        else {
          if (lVar1 != 2) goto LAB_001770d0;
          pcVar4 = *(code **)(param_3 + 0x188);
          FUN_00192034();
          lVar2 = unaff_x20 + 0x11;
        }
LAB_001770b8:
        (*pcVar4)(lVar2,&UNK_009b16f0,lVar1,param_2,param_3);
      }
      else if (lVar1 == 3) {
        (**(code **)(param_3 + 0x158))(unaff_x20 + 0x18,param_2,param_3);
      }
      else if (lVar1 == 4) {
        pcVar4 = *(code **)(param_3 + 0x188);
        FUN_00192034();
        lVar2 = unaff_x20 + 0x28;
        goto LAB_001770b8;
      }
LAB_001770d0:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 00177160; end: 0017725f;  */

void FUN_00177160(undefined8 param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  bVar1 = *(byte *)(unaff_x20 + 2);
  if ((ulong)bVar1 != 0xc) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_007dfe58 + (ulong)bVar1 * 8));
  }
  bVar1 = *(byte *)((long)unaff_x20 + 0x11);
  if ((ulong)bVar1 != 0xc) {
    __ss6HasherV8_combineyySuF(2);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_007dfe58 + (ulong)bVar1 * 8));
  }
  lVar4 = unaff_x20[4];
  if (lVar4 != 0) {
    lVar5 = unaff_x20[3];
    __ss6HasherV8_combineyySuF(3);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar5,lVar4);
  }
  bVar1 = *(byte *)(unaff_x20 + 5);
  if ((ulong)bVar1 != 0xc) {
    __ss6HasherV8_combineyySuF(4);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_007dfe58 + (ulong)bVar1 * 8));
  }
  lVar4 = *unaff_x20;
  uVar2 = (uint)((ulong)unaff_x20[1] >> 0x20);
  uVar3 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar3 == 0) {
      if ((unaff_x20[1] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_00177240;
    }
    lVar5 = (long)(int)lVar4;
    lVar4 = lVar4 >> 0x20;
  }
  else {
    if (uVar3 != 2) {
      return;
    }
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar4 = *(long *)(lVar4 + 0x18);
  }
  if (lVar5 == lVar4) {
    return;
  }
LAB_00177240:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 00177260; end: 001773a7;  */

void FUN_00177260(char *param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 *unaff_x20;
  long unaff_x21;
  code *pcVar3;
  char cStack_43;
  char cStack_42;
  char cStack_41;
  
  pcVar1 = param_1;
  if (*(char *)(unaff_x20 + 2) != '\f') {
    pcVar3 = *(code **)(param_3 + 0x80);
    pcVar2 = param_1;
    cStack_43 = *(char *)(unaff_x20 + 2);
    FUN_00192034();
    pcVar1 = &cStack_43;
    (*pcVar3)(pcVar1,1,&UNK_009b16f0,pcVar2,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    pcVar2 = pcVar1;
    if (*(char *)((long)unaff_x20 + 0x11) != '\f') {
      pcVar3 = *(code **)(param_3 + 0x80);
      cStack_42 = *(char *)((long)unaff_x20 + 0x11);
      FUN_00192034();
      pcVar2 = &cStack_42;
      (*pcVar3)(pcVar2,2,&UNK_009b16f0,pcVar1,param_2,param_3);
    }
    if (unaff_x20[4] != 0) {
      pcVar2 = (char *)unaff_x20[3];
      (**(code **)(param_3 + 0x70))(pcVar2,unaff_x20[4],3,param_2,param_3);
    }
    if (*(char *)(unaff_x20 + 5) != '\f') {
      pcVar3 = *(code **)(param_3 + 0x80);
      cStack_41 = *(char *)(unaff_x20 + 5);
      FUN_00192034();
      (*pcVar3)(&cStack_41,4,&UNK_009b16f0,pcVar2,param_2,param_3);
    }
    FUN_0013ad2c(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 001773a8; end: 001773ab;  */

ulong FUN_001773a8(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong *unaff_x20;
  ulong uVar19;
  long lVar20;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  if ((char)param_1[2] == '\f') {
    if ((char)param_2[2] != '\f') {
      return 0;
    }
  }
  else if ((char)param_1[2] != (char)param_2[2]) {
    return 0;
  }
  if (*(char *)((long)param_1 + 0x11) == '\f') {
    if (*(char *)((long)param_2 + 0x11) != '\f') {
      return 0;
    }
  }
  else if (*(char *)((long)param_1 + 0x11) != *(char *)((long)param_2 + 0x11)) {
    return 0;
  }
  lVar13 = param_1[4];
  lVar11 = param_2[4];
  if (lVar13 == 0) {
    if (lVar11 != 0) {
      return 0;
    }
  }
  else {
    if (lVar11 == 0) {
      return 0;
    }
    uVar16 = param_1[3];
    if (((uVar16 != param_2[3]) || (lVar13 != lVar11)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar16,lVar13,param_2[3],lVar11,0), (uVar16 & 1) == 0)) {
      return 0;
    }
  }
  if ((char)param_1[5] == '\f') {
    if ((char)param_2[5] != '\f') {
      return 0;
    }
  }
  else if ((char)param_1[5] != (char)param_2[5]) {
    return 0;
  }
  lVar11 = *param_1;
  pbVar9 = (byte *)param_1[1];
  lVar13 = *param_2;
  uVar16 = param_2[1];
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar9 >> 0x20);
  uVar12 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar16 >> 0x20);
  uVar17 = uVar3 >> 0x1e;
  iVar5 = (int)lVar11;
  if ((ulong)pbVar9 >> 0x3e == 3) {
    uVar15 = 0;
    if (((lVar11 != 0) || (pbVar9 != (byte *)0xc000000000000000)) ||
       ((uVar16 >> 0x3e < 3 || ((uVar15 = 0, lVar13 != 0 || (uVar16 != 0xc000000000000000))))))
    goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar12 == 0) {
        uVar15 = (ulong)pbVar9 >> 0x30 & 0xff;
      }
      else {
        iVar14 = (int)((ulong)lVar11 >> 0x20);
        if (SBORROW4(iVar14,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar15 = (ulong)(iVar14 - iVar5);
      }
joined_r0x000389b8:
      if (1 < uVar3 >> 0x1e) goto LAB_00038898;
LAB_000388cc:
      if (uVar17 == 0) {
        uVar18 = uVar16 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar14 = (int)((ulong)lVar13 >> 0x20);
      if (SBORROW4(iVar14,(int)lVar13)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar15 != (long)(iVar14 - (int)lVar13)) goto LAB_0003899c;
    }
    else {
      if (uVar12 == 2) {
        uVar15 = *(long *)(lVar11 + 0x18) - *(long *)(lVar11 + 0x10);
        if (SBORROW8(*(long *)(lVar11 + 0x18),*(long *)(lVar11 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar15 = 0;
      if (uVar17 < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar17 != 2) {
        uVar16 = (ulong)(uVar15 == 0);
        goto LAB_00038af8;
      }
      uVar18 = *(long *)(lVar13 + 0x18) - *(long *)(lVar13 + 0x10);
      if (SBORROW8(*(long *)(lVar13 + 0x18),*(long *)(lVar13 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar15 != uVar18) {
LAB_0003899c:
        uVar16 = 0;
        goto LAB_00038af8;
      }
    }
    if (0 < (long)uVar15) {
      if (uVar12 < 2) {
        if (uVar12 == 0) {
          abStack_70[0] = (byte)lVar11;
          abStack_70[1] = (byte)((ulong)lVar11 >> 8);
          abStack_70[2] = (byte)((ulong)lVar11 >> 0x10);
          abStack_70[3] = (byte)((ulong)lVar11 >> 0x18);
          abStack_70[4] = (byte)((ulong)lVar11 >> 0x20);
          abStack_70[5] = (byte)((ulong)lVar11 >> 0x28);
          abStack_70[6] = (byte)((ulong)lVar11 >> 0x30);
          abStack_70[7] = (byte)((ulong)lVar11 >> 0x38);
          abStack_70[8] = (byte)pbVar9;
          abStack_70[9] = (byte)((ulong)pbVar9 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar9 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar9 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar9 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar9 >> 0x28);
          pbVar9 = abStack_70 + ((ulong)pbVar9 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar16 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar20 = (long)iVar5;
        lVar6 = (lVar11 >> 0x20) - lVar20;
        if (lVar11 >> 0x20 < lVar20) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (lVar11 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          lVar11 = 0;
        }
        else {
          lVar7 = lVar11;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar20,lVar7)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          lVar11 = (lVar20 - lVar7) + lVar11;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (lVar11 != 0) {
            if (lVar6 <= lVar7) {
              lVar7 = lVar6;
            }
            pbVar10 = (byte *)(lVar7 + lVar11);
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
        lVar20 = *(long *)(lVar11 + 0x10);
        lVar7 = *(long *)(lVar11 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar6 = lVar11;
        if (lVar11 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar20,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          lVar11 = (lVar20 - lVar6) + lVar11;
        }
        lVar1 = lVar7 - lVar20;
        if (SBORROW8(lVar7,lVar20)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (lVar11 == 0) {
          pbVar10 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar6) {
            lVar6 = lVar1;
          }
          pbVar10 = (byte *)(lVar6 + lVar11);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar9 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,lVar11,pbVar10,lVar13,uVar16);
      uVar16 = (ulong)abStack_70[0];
      pbVar9 = pbVar10;
      goto LAB_00038af8;
    }
  }
  uVar16 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar16;
  }
  ___stack_chk_fail();
  lVar11 = (long)pbVar9 - uVar16;
  if (SBORROW8((long)pbVar9,uVar16)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar19 = *unaff_x20;
  uVar18 = uVar19 & 0xffffffffffffff8;
  uVar16 = uVar18 + 0x20 + uVar16 * 8;
  uVar8 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar15 = uVar16;
  _swift_arrayDestroy(uVar16,lVar11,uVar8);
  lVar6 = lVar13 - lVar11;
  if (SBORROW8(lVar13,lVar11)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar6 != 0) {
    if (uVar19 >> 0x3e == 0) {
      uVar15 = *(ulong *)(uVar18 + 0x10);
      lVar11 = uVar15 - (long)pbVar9;
    }
    else {
      uVar15 = uVar18;
      if ((uVar19 & 0x8000000000000000) != 0) {
        uVar15 = uVar19;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar11 = uVar15 - (long)pbVar9;
    }
    if (SBORROW8(uVar15,(long)pbVar9)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar16 = uVar16 + lVar13 * 8;
    uVar15 = uVar18 + 0x20 + (long)pbVar9 * 8;
    if (uVar16 != uVar15 || uVar15 + lVar11 * 8 <= uVar16) {
      _memmove(uVar16,uVar15,lVar11 << 3);
    }
    if (uVar19 >> 0x3e == 0) {
      uVar15 = *(ulong *)(uVar18 + 0x10);
    }
    else {
      uVar15 = uVar18;
      if ((uVar19 & 0x8000000000000000) != 0) {
        uVar15 = uVar19;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar15,lVar6)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar18 + 0x10) = uVar15 + lVar6;
  }
  if (lVar13 < 1) {
    return uVar15;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
  (*pcVar4)();
}



/* Entry: 001773ac; end: 0017743b;  */

/* WARNING: Removing unreachable block (ram,0x001773fc) */

void FUN_001773ac(void)

{
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
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_80,0);
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_90 = uStack_40;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  FUN_00177160(&uStack_d0);
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_40 = uStack_90;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0017743c; end: 0017747f;  */

void FUN_0017743c(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 2) = 0xc0c;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0xc;
  return;
}



/* Entry: 00177480; end: 001774af;  */

undefined1  [16] FUN_00177480(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00023304(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 001774b0; end: 001774e3;  */

void FUN_001774b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_00023358(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 001774e4; end: 001774f7;  */

undefined8 FUN_001774e4(void)

{
  return 0x1774f4;
}



/* Entry: 001774f8; end: 0017751f;  */

void FUN_001774f8(void)

{
  FUN_00177044();
  return;
}



/* Entry: 00177520; end: 001775bf;  */

void FUN_00177520(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0e90 != -1) {
    _swift_once(0xaf0e90,FUN_00176ee4);
  }
  uVar5 = uRam0000000000b65178;
  uVar4 = uRam0000000000b65170;
  uVar3 = uRam0000000000b65168;
  uVar2 = uRam0000000000b65160;
  uVar1 = uRam0000000000b65158;
  *param_1 = uRam0000000000b65150;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 001775c0; end: 001775fb;  */

void FUN_001775c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2220;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2220,&UNK_007dec00);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 001775fc; end: 001777c7;  */

/* WARNING: Removing unreachable block (ram,0x00177660) */

void FUN_001775fc(void)

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
  __ss6HasherV5_seedABSi_tcfC(&uStack_b0,0);
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_c0 = uStack_70;
  uStack_f8 = uStack_a8;
  uStack_100 = uStack_b0;
  uStack_e8 = uStack_98;
  uStack_f0 = uStack_a0;
  FUN_00177160(&uStack_100);
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_70 = uStack_c0;
  uStack_98 = uStack_e8;
  uStack_a0 = uStack_f0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  uStack_a8 = uStack_f8;
  uStack_b0 = uStack_100;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001777c8; end: 0017780f;  */

uint FUN_001777c8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_60 = param_1[2];
  uStack_58 = (undefined1)param_1[3];
  uStack_4f = *(undefined8 *)((long)param_1 + 0x21);
  uStack_57 = (undefined7)*(undefined8 *)((long)param_1 + 0x19);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x19) >> 0x38);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  uStack_28 = (undefined1)param_2[3];
  uStack_1f = *(undefined8 *)((long)param_2 + 0x21);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_2 + 0x19);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x19) >> 0x38);
  func_0x00182c8c(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 00177810; end: 00177837;  */

undefined * FUN_00177810(void)

{
  return &UNK_009afbd0;
}



/* Entry: 00177838; end: 001778f7;  */

void FUN_00177838(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007df2b0,0x23,&uStack_48,&lStack_40);
  puRam0000000000b65188 = puStack_38;
  lRam0000000000b65180 = lStack_40;
  puRam0000000000b65198 = puStack_28;
  puRam0000000000b65190 = puStack_30;
  puRam0000000000b651a8 = puStack_18;
  puRam0000000000b651a0 = puStack_20;
  return;
}



/* Entry: 001778f8; end: 00177997;  */

void FUN_001778f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0e98 != -1) {
    _swift_once(0xaf0e98,FUN_00177838);
  }
  uVar5 = uRam0000000000b651a8;
  uVar4 = uRam0000000000b651a0;
  uVar3 = uRam0000000000b65198;
  uVar2 = uRam0000000000b65190;
  uVar1 = uRam0000000000b65188;
  *param_1 = uRam0000000000b65180;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00177998; end: 00177ac7;  */

/* WARNING: Removing unreachable block (ram,0x00177ac4) */

void FUN_00177998(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 999) {
        pcVar4 = *(code **)(param_3 + 0x1a0);
        func_0x00187210();
LAB_00177a24:
        (*pcVar4)();
      }
      else {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_00188ae8();
          goto LAB_00177a24;
        }
        if (lVar1 - 1000U < 0x1ffffc18) {
          lVar2 = lVar1;
          FUN_00187fd0();
          (**(code **)(param_3 + 0x1d0))(unaff_x20 + 0x18,&UNK_009b2708,lVar2,lVar1,param_2,param_3)
          ;
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 00177ac8; end: 00177b97;  */

void FUN_00177ac8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  plVar1 = unaff_x20;
  FUN_00177b98();
  if (unaff_x21 == 0) {
    lVar2 = *unaff_x20;
    if (*(long *)(lVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      func_0x00187210();
      (*pcVar3)(lVar2,999,&UNK_009b2a70,plVar1,param_2,param_3);
    }
    (**(code **)(param_3 + 0x1b0))(unaff_x20[3],1000,0x20000000,param_2,param_3);
    FUN_0013ad2c(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}



/* Entry: 00177b98; end: 00177c1b;  */

void FUN_00177b98(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lStack_50 = *(long *)(param_1 + 0x30);
  if (lStack_50 != 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0x38);
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_00188ae8();
    (*pcVar1)(&uStack_60,1,&UNK_009b2b90,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 00177c1c; end: 00177c1f;  */

uint FUN_00177c1c(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 auStack_c0 [32];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar5 = param_1[5];
  uVar3 = param_1[4];
  uVar9 = param_1[7];
  uVar7 = param_1[6];
  uVar6 = param_2[5];
  uVar4 = param_2[4];
  uVar10 = param_2[7];
  lVar8 = param_2[6];
  uStack_a0 = uVar4;
  uStack_98 = uVar6;
  lStack_90 = lVar8;
  uStack_88 = uVar10;
  uStack_80 = uVar3;
  uStack_78 = uVar5;
  uStack_70 = uVar7;
  uStack_68 = uVar9;
  if (uVar7 == 0) {
    if (lVar8 != 0) goto LAB_00185dc8;
    func_0x00187028(&uStack_80,auStack_c0,0xaf07c8,&UNK_007daf88);
    func_0x00187028(&uStack_a0,auStack_c0,0xaf07c8,&UNK_007daf88);
    FUN_00116294(uVar3,uVar5,0,uVar9);
LAB_00185e84:
    uVar3 = *param_1;
    func_0x00149810(uVar3,*param_2);
    if ((uVar3 & 1) != 0) {
      uVar3 = param_1[1];
      FUN_00038814(uVar3,param_1[2],param_2[1],param_2[2]);
      if ((uVar3 & 1) != 0) {
        uVar3 = param_1[3];
        FUN_000e17c0(uVar3,param_2[3]);
        uVar1 = (uint)uVar3;
        goto LAB_00185eb8;
      }
    }
  }
  else if (lVar8 == 0) {
LAB_00185dc8:
    func_0x00187028(&uStack_80,auStack_c0,0xaf07c8,&UNK_007daf88);
    func_0x00187028(&uStack_a0,auStack_c0,0xaf07c8,&UNK_007daf88);
    FUN_00116294(uVar3,uVar5,uVar7,uVar9);
    FUN_00116294(uVar4,uVar6,lVar8,uVar10);
  }
  else {
    func_0x00187028(&uStack_80,auStack_c0,0xaf07c8,&UNK_007daf88);
    func_0x00187028(&uStack_a0,auStack_c0,0xaf07c8,&UNK_007daf88);
    uVar2 = uVar3;
    FUN_00186180(uVar3,uVar5,uVar7,uVar9,uVar4,uVar6,lVar8,uVar10);
    FUN_00116294(uVar4,uVar6,lVar8,uVar10);
    FUN_00116294(uVar3,uVar5,uVar7,uVar9);
    if ((uVar2 & 1) != 0) goto LAB_00185e84;
  }
  uVar1 = 0;
LAB_00185eb8:
  return uVar1 & 1;
}



/* Entry: 00177c20; end: 00177c5b;  */

void FUN_00177c20(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_0014d820(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00177c5c; end: 00177ca7;  */

void FUN_00177c5c(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[3] = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  return;
}



/* Entry: 00177ca8; end: 00177d47;  */

uint FUN_00177ca8(void)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  
  uVar6 = *unaff_x20;
  uVar4 = unaff_x20[3];
  uVar1 = unaff_x20[4];
  uVar5 = unaff_x20[5];
  uVar2 = unaff_x20[6];
  uVar7 = unaff_x20[7];
  FUN_000e1a94();
  if ((uVar4 & 1) == 0) {
LAB_00177d30:
    uVar3 = 0;
  }
  else {
    if (uVar2 != 0) {
      func_0x00023304(uVar1,uVar5);
      uVar4 = uVar2;
      _swift_bridgeObjectRetain();
      FUN_000e1a94();
      FUN_00116294(uVar1,uVar5,uVar2,uVar7);
      if ((uVar4 & 1) == 0) goto LAB_00177d30;
    }
    func_0x0014be00(uVar6);
    uVar5 = uVar6;
    FUN_000f846c();
    _swift_bridgeObjectRelease(uVar6);
    uVar3 = (uint)uVar5 & 1;
  }
  return uVar3;
}



/* Entry: 00177d48; end: 00177d77;  */

undefined1  [16] FUN_00177d48(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                  *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 00177d78; end: 00177dab;  */

void FUN_00177d78(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 00177dac; end: 00177dbf;  */

undefined1  [16] FUN_00177dac(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x177dbc;
  return auVar1;
}



/* Entry: 00177dc0; end: 00177dd3;  */

void FUN_00177dc0(void)

{
  FUN_00177998();
  return;
}



/* Entry: 00177dd4; end: 00177e0b;  */

void FUN_00177dd4(void)

{
  FUN_00177ac8();
  return;
}



/* Entry: 00177e0c; end: 00177eab;  */

void FUN_00177e0c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0e98 != -1) {
    _swift_once(0xaf0e98,FUN_00177838);
  }
  uVar5 = uRam0000000000b651a8;
  uVar4 = uRam0000000000b651a0;
  uVar3 = uRam0000000000b65198;
  uVar2 = uRam0000000000b65190;
  uVar1 = uRam0000000000b65188;
  *param_1 = uRam0000000000b65180;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00177eac; end: 00177ee7;  */

void FUN_00177eac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2218;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2218,&UNK_007debf8);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 00177ee8; end: 00177fbb;  */

void FUN_00177ee8(void)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  uStack_28 = unaff_x20[7];
  uStack_30 = unaff_x20[6];
  __ss6HasherV5_seedABSi_tcfC(auStack_a8,0);
  FUN_0014d820(auStack_a8);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00177fbc; end: 00178003;  */

uint FUN_00177fbc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  func_0x00185ce0(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 00178004; end: 0017802b;  */

undefined * FUN_00178004(void)

{
  return &UNK_009afbe0;
}



/* Entry: 0017802c; end: 001780eb;  */

void FUN_0017802c(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007df240,0x69,&uStack_48,&lStack_40);
  puRam0000000000b651b8 = puStack_38;
  lRam0000000000b651b0 = lStack_40;
  puRam0000000000b651c8 = puStack_28;
  puRam0000000000b651c0 = puStack_30;
  puRam0000000000b651d8 = puStack_18;
  puRam0000000000b651d0 = puStack_20;
  return;
}



/* Entry: 001780ec; end: 0017818b;  */

void FUN_001780ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0ea0 != -1) {
    _swift_once(0xaf0ea0,FUN_0017802c);
  }
  uVar5 = uRam0000000000b651d8;
  uVar4 = uRam0000000000b651d0;
  uVar3 = uRam0000000000b651c8;
  uVar2 = uRam0000000000b651c0;
  uVar1 = uRam0000000000b651b8;
  *param_1 = uRam0000000000b651b0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 0017818c; end: 00178313;  */

/* WARNING: Removing unreachable block (ram,0x001782b4) */
/* WARNING: Removing unreachable block (ram,0x00178310) */

void FUN_0017818c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 6) {
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x140);
          lVar1 = unaff_x20 + 0x20;
        }
        else {
          if (lVar1 != 3) {
LAB_001782c4:
            if (lVar1 - 1000U < 0x1ffffc18) {
              lVar2 = lVar1;
              FUN_00188034();
              (**(code **)(param_3 + 0x1d0))
                        (unaff_x20 + 0x18,&UNK_009b2790,lVar2,lVar1,param_2,param_3);
            }
            goto LAB_00178214;
          }
          pcVar4 = *(code **)(param_3 + 0x140);
          lVar1 = unaff_x20 + 0x21;
        }
LAB_00178204:
        (*pcVar4)(lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 6) {
          pcVar4 = *(code **)(param_3 + 0x140);
          lVar1 = unaff_x20 + 0x22;
          goto LAB_00178204;
        }
        if (lVar1 == 7) {
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_00188ae8();
        }
        else {
          if (lVar1 != 999) goto LAB_001782c4;
          pcVar4 = *(code **)(param_3 + 0x1a0);
          func_0x00187210();
        }
        (*pcVar4)();
      }
LAB_00178214:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 00178314; end: 001784db;  */

void FUN_00178314(undefined8 *param_1)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long *unaff_x20;
  long unaff_x21;
  long lVar6;
  long lVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  bVar2 = *(byte *)(unaff_x20 + 4);
  if (bVar2 != 2) {
    __ss6HasherV8_combineyySuF(2);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  }
  bVar2 = *(byte *)((long)unaff_x20 + 0x21);
  if (bVar2 != 2) {
    __ss6HasherV8_combineyySuF(3);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  }
  bVar2 = *(byte *)((long)unaff_x20 + 0x22);
  if (bVar2 != 2) {
    __ss6HasherV8_combineyySuF(6);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  }
  lVar6 = unaff_x20[7];
  if (lVar6 != 0) {
    lVar5 = unaff_x20[5];
    lVar1 = unaff_x20[6];
    lVar7 = unaff_x20[8];
    __ss6HasherV8_combineyySuF(7);
    uStack_78 = param_1[5];
    uStack_80 = param_1[4];
    uStack_68 = param_1[7];
    uStack_70 = param_1[6];
    uStack_60 = param_1[8];
    uStack_98 = param_1[1];
    uStack_a0 = *param_1;
    uStack_88 = param_1[3];
    uStack_90 = param_1[2];
    func_0x00023304(lVar5,lVar1);
    _swift_bridgeObjectRetain(lVar6);
    FUN_0017c428(&uStack_a0,lVar5,lVar1,lVar6,lVar7);
    if (unaff_x21 != 0) {
      _swift_errorRelease();
      unaff_x21 = 0;
    }
    FUN_00116294(lVar5,lVar1,lVar6,lVar7);
    param_1[5] = uStack_78;
    param_1[4] = uStack_80;
    param_1[7] = uStack_68;
    param_1[6] = uStack_70;
    param_1[8] = uStack_60;
    param_1[1] = uStack_98;
    *param_1 = uStack_a0;
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
  }
  if ((*(long *)(*unaff_x20 + 0x10) != 0) && (FUN_0019d040(*unaff_x20,999), unaff_x21 != 0)) {
    return;
  }
  FUN_0013bd14(param_1,1000,0x20000000,unaff_x20[3]);
  if (unaff_x21 != 0) {
    return;
  }
  lVar6 = unaff_x20[1];
  uVar3 = (uint)((ulong)unaff_x20[2] >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 == 0) {
      if ((unaff_x20[2] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_001784d0;
    }
    lVar5 = (long)(int)lVar6;
    lVar6 = lVar6 >> 0x20;
  }
  else {
    if (uVar4 != 2) {
      return;
    }
    lVar5 = *(long *)(lVar6 + 0x10);
    lVar6 = *(long *)(lVar6 + 0x18);
  }
  if (lVar5 == lVar6) {
    return;
  }
LAB_001784d0:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 001784dc; end: 00178627;  */

void FUN_001784dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  if (*(byte *)(unaff_x20 + 4) != 2) {
    (**(code **)(param_3 + 0x68))(*(byte *)(unaff_x20 + 4) & 1,2,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if (*(byte *)((long)unaff_x20 + 0x21) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)((long)unaff_x20 + 0x21) & 1,3,param_2,param_3);
    }
    if (*(byte *)((long)unaff_x20 + 0x22) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)((long)unaff_x20 + 0x22) & 1,6,param_2,param_3);
    }
    plVar1 = unaff_x20;
    FUN_0017a6b4();
    lVar2 = *unaff_x20;
    if (*(long *)(lVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      func_0x00187210();
      (*pcVar3)(lVar2,999,&UNK_009b2a70,plVar1,param_2,param_3);
    }
    (**(code **)(param_3 + 0x1b0))(unaff_x20[3],1000,0x20000000,param_2,param_3);
    FUN_0013ad2c(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}



/* Entry: 00178628; end: 001786a3;  */

uint FUN_00178628(ulong *param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_c0 [32];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  bVar1 = *(byte *)(param_2 + 4);
  if ((byte)param_1[4] == 2) {
    if (bVar1 != 2) {
      return 0;
    }
  }
  else {
    if (bVar1 == 2) {
      return 0;
    }
    if ((((byte)param_1[4] ^ bVar1) & 1) != 0) {
      return 0;
    }
  }
  bVar1 = *(byte *)((long)param_2 + 0x21);
  if (*(byte *)((long)param_1 + 0x21) == 2) {
    if (bVar1 != 2) {
      return 0;
    }
  }
  else {
    if (bVar1 == 2) {
      return 0;
    }
    if (((*(byte *)((long)param_1 + 0x21) ^ bVar1) & 1) != 0) {
      return 0;
    }
  }
  bVar1 = *(byte *)((long)param_2 + 0x22);
  if (*(byte *)((long)param_1 + 0x22) == 2) {
    if (bVar1 != 2) {
      return 0;
    }
  }
  else {
    if (bVar1 == 2) {
      return 0;
    }
    if (((*(byte *)((long)param_1 + 0x22) ^ bVar1) & 1) != 0) {
      return 0;
    }
  }
  uVar6 = param_1[6];
  uVar4 = param_1[5];
  uVar10 = param_1[8];
  uVar8 = param_1[7];
  uVar7 = param_2[6];
  uVar5 = param_2[5];
  uVar11 = param_2[8];
  lVar9 = param_2[7];
  uStack_a0 = uVar5;
  uStack_98 = uVar7;
  lStack_90 = lVar9;
  uStack_88 = uVar11;
  uStack_80 = uVar4;
  uStack_78 = uVar6;
  uStack_70 = uVar8;
  uStack_68 = uVar10;
  if (uVar8 == 0) {
    if (lVar9 != 0) goto LAB_0018605c;
    func_0x00187028(&uStack_80,auStack_c0,0xaf07c8,&UNK_007daf88);
    func_0x00187028(&uStack_a0,auStack_c0,0xaf07c8,&UNK_007daf88);
    FUN_00116294(uVar4,uVar6,0,uVar10);
LAB_00186110:
    uVar4 = *param_1;
    func_0x00149810(uVar4,*param_2);
    if ((uVar4 & 1) != 0) {
      uVar4 = param_1[1];
      FUN_00038814(uVar4,param_1[2],param_2[1],param_2[2]);
      if ((uVar4 & 1) != 0) {
        uVar4 = param_1[3];
        FUN_000e17c0(uVar4,param_2[3]);
        uVar2 = (uint)uVar4;
        goto LAB_0018615c;
      }
    }
  }
  else if (lVar9 == 0) {
LAB_0018605c:
    func_0x00187028(&uStack_80,auStack_c0,0xaf07c8,&UNK_007daf88);
    func_0x00187028(&uStack_a0,auStack_c0,0xaf07c8,&UNK_007daf88);
    FUN_00116294(uVar4,uVar6,uVar8,uVar10);
    FUN_00116294(uVar5,uVar7,lVar9,uVar11);
  }
  else {
    func_0x00187028(&uStack_80,auStack_c0,0xaf07c8,&UNK_007daf88);
    func_0x00187028(&uStack_a0,auStack_c0,0xaf07c8,&UNK_007daf88);
    uVar3 = uVar4;
    FUN_00186180(uVar4,uVar6,uVar8,uVar10,uVar5,uVar7,lVar9,uVar11);
    FUN_00116294(uVar5,uVar7,lVar9,uVar11);
    FUN_00116294(uVar4,uVar6,uVar8,uVar10);
    if ((uVar3 & 1) != 0) goto LAB_00186110;
  }
  uVar2 = 0;
LAB_0018615c:
  return uVar2 & 1;
}



/* Entry: 001786a4; end: 001786d3;  */

undefined1  [16] FUN_001786a4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                  *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 001786d4; end: 00178707;  */

void FUN_001786d4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 00178708; end: 0017871b;  */

undefined1  [16] FUN_00178708(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x178718;
  return auVar1;
}



/* Entry: 0017871c; end: 0017872f;  */

void FUN_0017871c(void)

{
  FUN_0017818c();
  return;
}



/* Entry: 00178730; end: 0017876f;  */

void FUN_00178730(void)

{
  FUN_001784dc();
  return;
}



/* Entry: 00178770; end: 0017880f;  */

void FUN_00178770(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0ea0 != -1) {
    _swift_once(0xaf0ea0,FUN_0017802c);
  }
  uVar5 = uRam0000000000b651d8;
  uVar4 = uRam0000000000b651d0;
  uVar3 = uRam0000000000b651c8;
  uVar2 = uRam0000000000b651c0;
  uVar1 = uRam0000000000b651b8;
  *param_1 = uRam0000000000b651b0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00178810; end: 00178823;  */

void FUN_00178810(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2210;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2210,&UNK_007debf0);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 00178824; end: 00178a07;  */

/* WARNING: Removing unreachable block (ram,0x00178890) */

void FUN_00178824(void)

{
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
  __ss6HasherV5_seedABSi_tcfC(&uStack_d0,0);
  uStack_f8 = uStack_a8;
  uStack_100 = uStack_b0;
  uStack_e8 = uStack_98;
  uStack_f0 = uStack_a0;
  uStack_e0 = uStack_90;
  uStack_118 = uStack_c8;
  uStack_120 = uStack_d0;
  uStack_108 = uStack_b8;
  uStack_110 = uStack_c0;
  FUN_00178314(&uStack_120);
  uStack_98 = uStack_e8;
  uStack_a0 = uStack_f0;
  uStack_90 = uStack_e0;
  uStack_b8 = uStack_108;
  uStack_c0 = uStack_110;
  uStack_a8 = uStack_f8;
  uStack_b0 = uStack_100;
  uStack_c8 = uStack_118;
  uStack_d0 = uStack_120;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00178a08; end: 00178a5f;  */

uint FUN_00178a08(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  func_0x00185edc(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 00178a60; end: 00178a87;  */

undefined * FUN_00178a60(void)

{
  return &UNK_009afbf0;
}



/* Entry: 00178a88; end: 00178b47;  */

void FUN_00178a88(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007df1f0,0x4e,&uStack_48,&lStack_40);
  puRam0000000000b651e8 = puStack_38;
  lRam0000000000b651e0 = lStack_40;
  puRam0000000000b651f8 = puStack_28;
  puRam0000000000b651f0 = puStack_30;
  puRam0000000000b65208 = puStack_18;
  puRam0000000000b65200 = puStack_20;
  return;
}



/* Entry: 00178b48; end: 00178be7;  */

void FUN_00178b48(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0ea8 != -1) {
    _swift_once(0xaf0ea8,FUN_00178a88);
  }
  uVar5 = uRam0000000000b65208;
  uVar4 = uRam0000000000b65200;
  uVar3 = uRam0000000000b651f8;
  uVar2 = uRam0000000000b651f0;
  uVar1 = uRam0000000000b651e8;
  *param_1 = uRam0000000000b651e0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00178be8; end: 00178d83;  */

/* WARNING: Removing unreachable block (ram,0x00178d80) */
/* WARNING: Removing unreachable block (ram,0x00178d30) */

void FUN_00178be8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x140);
          lVar1 = unaff_x20 + 0x20;
          goto LAB_00178d20;
        }
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_00188ae8();
          goto LAB_00178c70;
        }
LAB_00178d34:
        if (lVar1 - 1000U < 0x1ffffc18) {
          lVar2 = lVar1;
          FUN_00188098();
          (**(code **)(param_3 + 0x1d0))(unaff_x20 + 0x18,&UNK_009b2828,lVar2,lVar1,param_2,param_3)
          ;
        }
      }
      else if (lVar1 == 3) {
        pcVar4 = *(code **)(param_3 + 0x140);
        lVar1 = unaff_x20 + 0x48;
LAB_00178d20:
        (*pcVar4)(lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 4) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0018a0c4();
        }
        else {
          if (lVar1 != 999) goto LAB_00178d34;
          pcVar4 = *(code **)(param_3 + 0x1a0);
          func_0x00187210();
        }
LAB_00178c70:
        (*pcVar4)();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 00178d84; end: 00179003;  */

void FUN_00178d84(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long *unaff_x20;
  long unaff_x21;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 uStack_88;
  undefined1 uStack_87;
  long lStack_80;
  long lStack_78;
  undefined1 uStack_70;
  
  bVar3 = *(byte *)(unaff_x20 + 4);
  if (bVar3 != 2) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyys5UInt8VF(bVar3 & 1);
  }
  lVar8 = unaff_x20[7];
  if (lVar8 != 0) {
    lVar7 = unaff_x20[5];
    lVar1 = unaff_x20[6];
    lVar9 = unaff_x20[8];
    __ss6HasherV8_combineyySuF(2);
    uStack_108 = param_1[5];
    uStack_110 = param_1[4];
    uStack_f8 = param_1[7];
    uStack_100 = param_1[6];
    uStack_f0 = param_1[8];
    uStack_128 = param_1[1];
    uStack_130 = *param_1;
    uStack_118 = param_1[3];
    uStack_120 = param_1[2];
    func_0x00023304(lVar7,lVar1);
    _swift_bridgeObjectRetain(lVar8);
    FUN_0017c428(&uStack_130,lVar7,lVar1,lVar8,lVar9);
    if (unaff_x21 != 0) {
      _swift_errorRelease();
      unaff_x21 = 0;
    }
    FUN_00116294(lVar7,lVar1,lVar8,lVar9);
    param_1[5] = uStack_108;
    param_1[4] = uStack_110;
    param_1[7] = uStack_f8;
    param_1[6] = uStack_100;
    param_1[8] = uStack_f0;
    param_1[1] = uStack_128;
    *param_1 = uStack_130;
    param_1[3] = uStack_118;
    param_1[2] = uStack_120;
  }
  bVar3 = *(byte *)(unaff_x20 + 9);
  if (bVar3 != 2) {
    __ss6HasherV8_combineyySuF(3);
    __ss6HasherV8_combineyys5UInt8VF(bVar3 & 1);
  }
  lVar8 = unaff_x20[0xe];
  if (lVar8 != 1) {
    lVar7 = unaff_x20[10];
    lVar9 = unaff_x20[0xb];
    lVar1 = unaff_x20[0xc];
    lVar2 = unaff_x20[0xd];
    lVar5 = unaff_x20[0xf];
    uStack_88 = (undefined1)lVar1;
    uStack_87 = (undefined1)((ulong)lVar1 >> 8);
    lStack_98 = lVar7;
    lStack_90 = lVar9;
    lStack_80 = lVar2;
    lStack_78 = lVar8;
    uStack_70 = (char)lVar5;
    __ss6HasherV8_combineyySuF(4);
    uStack_b8 = param_1[5];
    uStack_c0 = param_1[4];
    uStack_a8 = param_1[7];
    uStack_b0 = param_1[6];
    uStack_a0 = param_1[8];
    uStack_d8 = param_1[1];
    uStack_e0 = *param_1;
    uStack_c8 = param_1[3];
    uStack_d0 = param_1[2];
    func_0x00023304(lVar7,lVar9);
    _swift_bridgeObjectRetain(lVar8);
    FUN_00177160(&uStack_e0);
    if (unaff_x21 != 0) {
      _swift_errorRelease(unaff_x21);
      unaff_x21 = 0;
    }
    FUN_00116310(lVar7,lVar9,lVar1,lVar2,lVar8,(char)lVar5);
    param_1[5] = uStack_b8;
    param_1[4] = uStack_c0;
    param_1[7] = uStack_a8;
    param_1[6] = uStack_b0;
    param_1[8] = uStack_a0;
    param_1[1] = uStack_d8;
    *param_1 = uStack_e0;
    param_1[3] = uStack_c8;
    param_1[2] = uStack_d0;
  }
  if ((*(long *)(*unaff_x20 + 0x10) != 0) && (FUN_0019d040(*unaff_x20,999), unaff_x21 != 0)) {
    return;
  }
  FUN_0013bd14(param_1,1000,0x20000000,unaff_x20[3]);
  if (unaff_x21 != 0) {
    return;
  }
  lVar8 = unaff_x20[1];
  uVar4 = (uint)((ulong)unaff_x20[2] >> 0x20);
  uVar6 = uVar4 >> 0x1e;
  if (uVar4 >> 0x1e < 2) {
    if (uVar6 == 0) {
      if ((unaff_x20[2] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_00178ff0;
    }
    lVar7 = (long)(int)lVar8;
    lVar8 = lVar8 >> 0x20;
  }
  else {
    if (uVar6 != 2) {
      return;
    }
    lVar7 = *(long *)(lVar8 + 0x10);
    lVar8 = *(long *)(lVar8 + 0x18);
  }
  if (lVar7 == lVar8) {
    return;
  }
LAB_00178ff0:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 00179004; end: 0017913b;  */

void FUN_00179004(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  if (*(byte *)(unaff_x20 + 4) != 2) {
    (**(code **)(param_3 + 0x68))(*(byte *)(unaff_x20 + 4) & 1,1,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    FUN_0017913c();
    if (*(byte *)(unaff_x20 + 9) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)(unaff_x20 + 9) & 1,3,param_2,param_3);
    }
    plVar1 = unaff_x20;
    FUN_001791c0();
    lVar2 = *unaff_x20;
    if (*(long *)(lVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      func_0x00187210();
      (*pcVar3)(lVar2,999,&UNK_009b2a70,plVar1,param_2,param_3);
    }
    (**(code **)(param_3 + 0x1b0))(unaff_x20[3],1000,0x20000000,param_2,param_3);
    FUN_0013ad2c(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}



/* Entry: 0017913c; end: 001791bf;  */

void FUN_0017913c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lStack_50 = *(long *)(param_1 + 0x38);
  if (lStack_50 != 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0x40);
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_00188ae8();
    (*pcVar1)(&uStack_60,2,&UNK_009b2b90,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 001791c0; end: 0017924b;  */

void FUN_001791c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  lStack_50 = *(long *)(param_1 + 0x70);
  if (lStack_50 != 1) {
    uStack_48 = *(undefined1 *)(param_1 + 0x78);
    uStack_68 = *(undefined8 *)(param_1 + 0x58);
    uStack_70 = *(undefined8 *)(param_1 + 0x50);
    uStack_58 = *(undefined8 *)(param_1 + 0x68);
    uStack_60 = *(undefined8 *)(param_1 + 0x60);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0018a0c4();
    (*pcVar1)(&uStack_70,4,&UNK_009b2678,param_1,param_3,param_4);
  }
  return;
}


