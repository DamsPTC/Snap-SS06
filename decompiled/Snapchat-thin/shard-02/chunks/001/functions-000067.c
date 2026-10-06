/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101892a84; end: 101892b8f;  */

undefined8 FUN_101892a84(long param_1,char param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long unaff_x20;
  
  lVar2 = 0;
  func_0x0001046d90b0();
  lVar2 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  puVar4 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_2 != '\x01') {
    lVar3 = 0;
    func_0x000100b91d00();
    lVar3 = *(long *)(unaff_x20 + *(int *)(lVar3 + 0x4c));
    if ((lVar3 != 0) && (param_1 < *(long *)(lVar3 + 0x10))) {
      if (param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101892b90);
        (*pcVar1)();
      }
      func_0x000101892c78(lVar3 + ((ulong)*(byte *)(lVar2 + 0x50) + 0x20 &
                                  ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff)) +
                          *(long *)(lVar2 + 0x48) * param_1,puVar4,&SUB_1046d90b0);
      func_0x0001047c6864(0);
      func_0x000107c610f8();
      func_0x0001047c2b40();
      puVar5 = puVar4;
      func_0x000107c4e8c0();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      if (puVar5 != (undefined1 *)0x0) {
        func_0x000107c61170(puVar5);
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 101892b90; end: 101892bef; -[_TtC25AdTrackParserServicesImpl21AdPlayableTrackParser parseWithTrackRequest:viewSeqNum:] */

void FUN_101892b90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_10189171c(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101892bf0; end: 101892c3b;  */

void FUN_101892bf0(void)

{
  long unaff_x20;
  
  func_0x000100400450(unaff_x20 + 0x10);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101892c3c; end: 101892cbb;  */

undefined8 FUN_101892c3c(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101892cbc; end: 101893303;  */

void FUN_101892cbc(byte *param_1,double param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  double dVar23;
  long lStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_80;
  
  lVar6 = param_4;
  uVar9 = param_5;
  FUN_101892a84();
  lVar18 = *(long *)(param_6 + 0x10);
  if (lVar18 == 0) {
    uStack_a8 = 0;
    lStack_98 = 0;
    uVar19 = 0;
    lStack_b0 = 0;
    lStack_b8 = 0;
    uVar22 = 0;
    lStack_90 = 0;
    uStack_80 = 0;
    bVar3 = true;
    bVar15 = 2;
    bVar13 = 1;
    bVar2 = true;
    bVar11 = 1;
    bVar12 = 1;
    bVar14 = 1;
    goto LAB_10189326c;
  }
  lStack_98 = 0;
  lStack_90 = 0;
  uVar19 = 0;
  lStack_b0 = 0;
  uStack_a8 = 0;
  lStack_b8 = 0;
  uVar22 = 0;
  uStack_80 = 0;
  lVar16 = 0;
  bVar13 = 1;
  bVar15 = 2;
  bVar2 = true;
  bVar11 = 1;
  bVar3 = true;
  bVar5 = true;
  bVar12 = 1;
LAB_101892dc8:
  plVar17 = (long *)(param_6 + 0x20 + lVar16 * 0x10);
  lVar7 = *plVar17;
  lVar8 = plVar17[1];
  lVar21 = lVar16 + 1;
  func_0x000107c61174();
  func_0x000107c61174();
  lVar20 = lVar7;
  func_0x000107c30afc();
  if ((((uint)param_5 & 0xff) != 1) && (lVar20 == param_4)) {
    lVar20 = lVar8;
    func_0x000107c30d18();
    if (3 < lVar20) {
      if (lVar20 < 6) {
        if (lVar20 == 4) {
LAB_101892fd0:
          func_0x000107c30b10(lVar7);
          func_0x000107c61170(lVar8);
          func_0x000107c61170(lVar7);
          if (0x7fefffffffffffff < (ulong)ABS(param_2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1018932e0);
            (*pcVar4)();
          }
          if (param_2 <= -1.0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1018932f0);
            (*pcVar4)();
          }
          if (1.8446744073709552e+19 <= param_2) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101893304);
            (*pcVar4)();
          }
          bVar3 = false;
          uStack_a8 = (ulong)param_2;
          lVar16 = lVar21;
          dVar23 = 1.8446744073709552e+19;
        }
        else {
          if (lVar20 != 5) goto LAB_101892dac;
LAB_101892e2c:
          func_0x000107c61170(lVar8);
          func_0x000107c61170(lVar7);
          uVar1 = 0;
          if (!bVar2) {
            uVar1 = uVar19;
          }
          uVar19 = uVar1 + 1;
          if (0xfffffffffffffffe < uVar1) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1018932ec);
            (*pcVar4)();
          }
          bVar2 = false;
          lVar16 = lVar21;
          dVar23 = param_2;
        }
      }
      else if (lVar20 == 6) {
LAB_101893124:
        lVar16 = lVar8;
        func_0x000107c30d1c();
        func_0x000107c61180();
        if (lVar16 == 0) {
          func_0x000107c6142c(uStack_80);
          lStack_90 = 0;
          uStack_80 = 0;
          uVar10 = uVar9;
          dVar23 = param_2;
        }
        else {
          lStack_90 = lVar16;
          func_0x000107c5faec();
          uVar10 = uVar9;
          func_0x000107c61170(lVar16);
          func_0x000107c6142c(uStack_80);
          dVar23 = param_2;
          uStack_80 = uVar9;
        }
        uVar9 = uVar10;
        lVar20 = lVar8;
        func_0x000107c30d20();
        func_0x000107c61180();
        lVar16 = lVar21;
        if (lVar20 == 0) {
          func_0x000107c61170(lVar8);
          func_0x000107c61170(lVar7);
          lStack_98 = 0;
          bVar13 = 1;
        }
        else {
          lStack_98 = lVar20;
          func_0x000107c49820();
          func_0x000107c61170(lVar8);
          func_0x000107c61170(lVar7);
          func_0x000107c61170(lVar20);
          bVar13 = 0;
        }
      }
      else {
        if (lVar20 != 7) goto LAB_101892dac;
LAB_101892f88:
        func_0x000107c61170(lVar8);
        func_0x000107c61170(lVar7);
        bVar15 = 1;
        lVar16 = lVar21;
        dVar23 = param_2;
      }
      goto LAB_101892dbc;
    }
    if (lVar20 == 1) {
LAB_101893058:
      func_0x000107c30b10(lVar7);
      func_0x000107c61170(lVar8);
      func_0x000107c61170(lVar7);
      if (0x7fefffffffffffff < (ulong)ABS(param_2)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1018932e4);
        (*pcVar4)();
      }
      if (param_2 <= -1.0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1018932f4);
        (*pcVar4)();
      }
      dVar23 = 1.8446744073709552e+19;
      if (1.8446744073709552e+19 <= param_2) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1018932fc);
        (*pcVar4)();
      }
      bVar12 = 0;
      lStack_b8 = (long)param_2;
      lVar16 = lVar21;
      goto LAB_101892dbc;
    }
    if (lVar20 == 2) {
LAB_1018930c4:
      func_0x000107c30b10(lVar7);
      func_0x000107c61170(lVar8);
      func_0x000107c61170(lVar7);
      if (0x7fefffffffffffff < (ulong)ABS(param_2)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1018932e8);
        (*pcVar4)();
      }
      if (param_2 <= -1.0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1018932f8);
        (*pcVar4)();
      }
      dVar23 = 1.8446744073709552e+19;
      if (1.8446744073709552e+19 <= param_2) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101893300);
        (*pcVar4)();
      }
      bVar11 = 0;
      lStack_b0 = (long)param_2;
      lVar16 = lVar21;
      goto LAB_101892dbc;
    }
    if (lVar20 != 3) goto LAB_101892dac;
    func_0x000107c30b10(lVar7);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar7);
    if (0x7fefffffffffffff < (ulong)ABS(param_2)) {
LAB_1018932d0:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1018932d4);
      (*pcVar4)();
    }
    if (param_2 <= -1.0) {
LAB_1018932d4:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1018932d8);
      (*pcVar4)();
    }
    if (1.8446744073709552e+19 <= param_2) {
LAB_1018932d8:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1018932dc);
      (*pcVar4)();
    }
    uVar22 = (ulong)param_2;
    if (lVar21 == lVar18) goto LAB_101893228;
    lVar21 = -2 - lVar16;
    lVar20 = (lVar18 + -1) - lVar16;
    plVar17 = (long *)(param_6 + 0x38 + lVar16 * 0x10);
    while( true ) {
      param_2 = 1.8446744073709552e+19;
      lVar7 = plVar17[-1];
      lVar8 = *plVar17;
      func_0x000107c61174();
      func_0x000107c61174();
      lVar16 = lVar7;
      func_0x000107c30afc();
      if (lVar16 != param_4) break;
      lVar16 = lVar8;
      func_0x000107c30d18();
      if (lVar16 != 3) {
        if (lVar16 < 5) {
          if (lVar16 == 1) {
            bVar5 = false;
            lVar21 = -lVar21;
            goto LAB_101893058;
          }
          if (lVar16 == 2) {
            bVar5 = false;
            lVar21 = -lVar21;
            goto LAB_1018930c4;
          }
          if (lVar16 == 4) {
            bVar5 = false;
            lVar21 = -lVar21;
            goto LAB_101892fd0;
          }
        }
        else {
          if (lVar16 == 5) {
            bVar5 = false;
            lVar21 = -lVar21;
            goto LAB_101892e2c;
          }
          if (lVar16 == 6) {
            bVar5 = false;
            lVar21 = -lVar21;
            goto LAB_101893124;
          }
          if (lVar16 == 7) {
            bVar5 = false;
            lVar21 = -lVar21;
            goto LAB_101892f88;
          }
        }
        bVar5 = false;
        lVar21 = -lVar21;
        goto LAB_101892dac;
      }
      func_0x000107c30b10(lVar7);
      func_0x000107c61170(lVar8);
      func_0x000107c61170(lVar7);
      if (0x7fefffffffffffff < (ulong)ABS(param_2)) goto LAB_1018932d0;
      if (param_2 <= -1.0) goto LAB_1018932d4;
      if (1.8446744073709552e+19 <= param_2) goto LAB_1018932d8;
      plVar17 = plVar17 + 2;
      uVar22 = (ulong)param_2;
      lVar21 = lVar21 + -1;
      lVar20 = lVar20 + -1;
      if (lVar20 == 0) goto LAB_101893228;
    }
    bVar5 = false;
    lVar21 = -lVar21;
  }
LAB_101892dac:
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  lVar16 = lVar21;
  dVar23 = param_2;
LAB_101892dbc:
  param_2 = dVar23;
  if (lVar16 == lVar18) goto LAB_1018931f0;
  goto LAB_101892dc8;
LAB_1018931f0:
  if (bVar5) {
    bVar14 = 1;
  }
  else {
LAB_101893228:
    bVar5 = uStack_a8 < uVar22;
    uVar1 = 0;
    if (!bVar5) {
      uVar1 = uStack_a8;
    }
    if (!bVar3) {
      uStack_a8 = uVar1;
    }
    bVar3 = bVar3 || bVar5;
    bVar14 = 0;
  }
LAB_10189326c:
  *param_1 = (byte)lVar6 & 1;
  *(long *)(param_1 + 8) = lStack_b8;
  param_1[0x10] = bVar12;
  *(long *)(param_1 + 0x18) = lStack_b0;
  param_1[0x20] = bVar11;
  *(ulong *)(param_1 + 0x28) = uVar22;
  param_1[0x30] = bVar14;
  *(ulong *)(param_1 + 0x38) = uStack_a8;
  param_1[0x40] = bVar3;
  *(ulong *)(param_1 + 0x48) = uVar19;
  param_1[0x50] = bVar2;
  *(long *)(param_1 + 0x58) = lStack_90;
  *(undefined8 *)(param_1 + 0x60) = uStack_80;
  *(long *)(param_1 + 0x68) = lStack_98;
  param_1[0x70] = bVar13;
  param_1[0x71] = bVar15;
  return;
}



/* Entry: 101893304; end: 10189396f;  */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_101893304(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 *extraout_x8;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_4ff0;
  undefined8 uStack_4fe8;
  undefined8 uStack_4fe0;
  undefined8 uStack_4fd8;
  undefined1 uStack_4fd0;
  undefined1 uStack_4fcc;
  undefined8 uStack_4fc8;
  undefined1 uStack_4fbc;
  undefined8 uStack_4fb8;
  undefined8 uStack_4fb0;
  undefined8 uStack_4fa8;
  undefined8 uStack_4fa0;
  undefined8 uStack_4f98;
  undefined1 auStack_4f88 [2744];
  undefined8 uStack_44d0;
  undefined8 uStack_44c8;
  undefined8 uStack_44c0;
  undefined8 uStack_44b8;
  undefined8 uStack_44b0;
  undefined8 uStack_44a8;
  undefined8 uStack_44a0;
  undefined8 uStack_4498;
  undefined8 uStack_4490;
  undefined8 uStack_4488;
  undefined8 uStack_4480;
  undefined8 uStack_4478;
  undefined1 auStack_4080 [352];
  undefined1 auStack_3f20 [1448];
  undefined1 auStack_3978 [1448];
  undefined1 auStack_33d0 [1448];
  undefined6 uStack_2e28;
  undefined2 uStack_2e22;
  undefined6 uStack_2e20;
  undefined2 uStack_2e1a;
  undefined6 uStack_2e18;
  undefined2 uStack_2e12;
  undefined6 uStack_2e10;
  undefined2 uStack_2e0a;
  undefined6 uStack_2e08;
  undefined2 uStack_2e02;
  undefined6 uStack_2e00;
  undefined2 uStack_2dfa;
  undefined6 uStack_2df8;
  undefined2 uStack_2df2;
  undefined6 uStack_2df0;
  undefined2 uStack_2dea;
  undefined6 uStack_2de8;
  undefined2 uStack_2de2;
  undefined6 uStack_2de0;
  undefined2 uStack_2dda;
  undefined6 uStack_2dd8;
  undefined2 uStack_2dd2;
  undefined6 uStack_2dd0;
  undefined2 uStack_2dca;
  undefined6 uStack_2dc8;
  undefined8 uStack_2880;
  undefined1 auStack_2878 [1448];
  undefined8 uStack_22d0;
  undefined8 uStack_22c8;
  undefined8 uStack_22c0;
  undefined8 uStack_22b8;
  undefined8 uStack_22b0;
  undefined8 uStack_22a8;
  undefined8 uStack_22a0;
  undefined8 uStack_2298;
  undefined8 uStack_2290;
  undefined8 uStack_2288;
  undefined8 uStack_2280;
  undefined1 uStack_2278;
  undefined7 uStack_2277;
  undefined1 uStack_2270;
  undefined8 uStack_226f;
  undefined1 auStack_2260 [776];
  undefined8 uStack_1f58;
  undefined8 uStack_1f50;
  undefined8 uStack_1f48;
  undefined8 uStack_1f40;
  undefined1 uStack_1f38;
  undefined1 uStack_1f37;
  undefined8 uStack_1f30;
  undefined8 uStack_1f28;
  undefined8 uStack_1f20;
  undefined8 uStack_1f18;
  undefined8 uStack_1f10;
  undefined8 uStack_1f08;
  undefined8 uStack_1f00;
  undefined8 uStack_1ef8;
  undefined8 uStack_1ef0;
  undefined8 uStack_1ee8;
  undefined8 uStack_1ee0;
  undefined8 uStack_1ed8;
  undefined8 uStack_1ed0;
  undefined8 uStack_1ec8;
  undefined8 uStack_1ec0;
  undefined8 uStack_1eb8;
  undefined8 uStack_1eb0;
  undefined8 uStack_1ea8;
  undefined8 uStack_1ea0;
  undefined8 uStack_1e98;
  undefined8 uStack_1e90;
  undefined8 uStack_1e88;
  undefined8 uStack_1e80;
  undefined8 uStack_1e78;
  undefined8 uStack_1e70;
  undefined8 uStack_1e68;
  undefined8 uStack_1e60;
  undefined8 uStack_1e58;
  undefined8 uStack_1e50;
  undefined8 uStack_1e48;
  undefined8 uStack_1e40;
  undefined8 uStack_1e38;
  undefined8 uStack_1e30;
  undefined8 uStack_1e28;
  undefined1 uStack_1e20;
  undefined8 uStack_1e1f;
  undefined8 uStack_1e10;
  undefined8 uStack_1e08;
  undefined1 uStack_1e00;
  undefined8 uStack_1df8;
  undefined8 uStack_1df0;
  undefined8 uStack_1de8;
  undefined8 uStack_1de0;
  undefined8 uStack_1dd8;
  undefined2 uStack_1dd0;
  undefined1 auStack_1dc8 [8];
  undefined1 auStack_1dc0 [2736];
  undefined1 auStack_1310 [96];
  long lStack_12b0;
  undefined1 auStack_1298 [1448];
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined1 uStack_c98;
  undefined7 uStack_c97;
  undefined1 uStack_c90;
  undefined8 uStack_c8f;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined1 uStack_bd8;
  undefined7 uStack_bd7;
  undefined1 uStack_bd0;
  undefined8 uStack_bcf;
  undefined1 auStack_bb8 [16];
  undefined8 uStack_ba8;
  undefined1 auStack_610 [1424];
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar3 = uStack_1e28;
  func_0x000107c610b4(auStack_1dc8,param_1,0xab2);
  uStack_1e28 = uVar3;
  uVar3 = uStack_1e28;
  func_0x000107c610b4(auStack_bb8,param_1 + 1,0x5a8);
  uStack_1e28 = uVar3;
  uVar3 = uStack_1e28;
  uStack_78 = param_1[2];
  uStack_80 = param_1[1];
  func_0x000107c610b4(auStack_610,param_1 + 4,0x590);
  uStack_1e28 = uVar3;
  uVar3 = uStack_1e28;
  iVar2 = (int)auStack_bb8;
  func_0x000100cbd81c();
  uStack_1e28 = uVar3;
  uVar3 = uStack_1e28;
  if (iVar2 == 1) {
    FUN_101795250(param_1,&uStack_2880);
  }
  else {
    FUN_101795250(param_1,&uStack_2880);
    uStack_1e28 = uVar3;
    uVar3 = uStack_1e28;
    func_0x0001018939c0(auStack_bb8,&uStack_2880,0x112dcbd00,&UNK_10d98e550);
    uStack_1e28 = uVar3;
    uVar3 = uStack_1e28;
    FUN_101892cbc(auStack_1310,param_2,uStack_ba8,0,param_3);
    uStack_1e28 = uVar3;
    uVar3 = uStack_1e28;
    if (lStack_12b0 != 1) {
      uStack_44c8 = uStack_78;
      uStack_44d0 = uStack_80;
      uStack_44c0 = uStack_ba8;
      func_0x000107c610b4(&uStack_44b8,auStack_610,0x590);
      uStack_1e28 = uVar3;
      uVar3 = uStack_1e28;
      func_0x000101893970(auStack_1310,auStack_4080);
      uStack_1e28 = uVar3;
      uVar3 = uStack_1e28;
      func_0x000107c610b4(auStack_3f20,&uStack_44d0,0x5a8);
      uStack_1e28 = uVar3;
      uVar3 = uStack_1e28;
      func_0x000107c610b4(auStack_3978,&uStack_44d0,0x5a8);
      uStack_1e28 = uVar3;
      uVar3 = uStack_1e28;
      func_0x00010178e49c(auStack_3978);
      uStack_1e28 = uVar3;
      uVar3 = uStack_1e28;
      func_0x000107c610b4(auStack_33d0,auStack_1dc0,0x5a8);
      uStack_1e28 = uVar3;
      uVar3 = uStack_1e28;
      func_0x00010178e37c(auStack_3f20,auStack_4f88);
      uStack_1e28 = uVar3;
      uVar3 = uStack_1e28;
      func_0x000101893a08(auStack_33d0,0x112dcbd00,&UNK_10d98e550);
      uStack_1e28 = uVar3;
      uVar3 = uStack_1e28;
      func_0x000107c610b4(auStack_1dc0,auStack_3978,0x5a8);
      uStack_1e28 = uVar3;
      uVar3 = uStack_1e28;
      func_0x000107c610b4(&uStack_2880,auStack_1dc8,0xab2);
      uStack_1e28 = uVar3;
      uVar3 = uStack_1e28;
      func_0x000107c610b4(&uStack_2e28,&uStack_44d0,0x5a8);
      uStack_1e28 = uVar3;
      uVar3 = uStack_1e28;
      FUN_101795250(&uStack_2880,auStack_4f88);
      uStack_1e28 = uVar3;
      uVar3 = uStack_1e28;
      func_0x00010178e3b8(&uStack_2e28);
      uStack_1e28 = uVar3;
      uVar3 = uStack_1e28;
      uStack_4fa8 = uStack_1df0;
      uStack_4fb0 = uStack_1df8;
      uStack_4f98 = uStack_1de0;
      uStack_4fa0 = uStack_1de8;
      uStack_4fb8 = uStack_1e08;
      uStack_4fbc = uStack_1e00;
      uStack_4fd0 = uStack_1f38;
      uStack_4fcc = uStack_1f37;
      uStack_4fe8 = uStack_1f50;
      uStack_4ff0 = uStack_1f58;
      uStack_4fd8 = uStack_1f40;
      uStack_4fe0 = uStack_1f48;
      uStack_4fc8 = uStack_1e10;
      func_0x000107c610b4(auStack_1298,auStack_2878,0x5a8);
      uStack_1e28 = uVar3;
      uVar3 = uStack_1e28;
      uStack_cb8 = uStack_2298;
      uStack_cc0 = uStack_22a0;
      uStack_ca8 = uStack_2288;
      uStack_cb0 = uStack_2290;
      uStack_c98 = uStack_2278;
      uStack_ca0 = uStack_2280;
      uStack_c8f = uStack_226f;
      uStack_c97 = uStack_2277;
      uStack_c90 = uStack_2270;
      uStack_ce8 = uStack_22c8;
      uStack_cf0 = uStack_22d0;
      uStack_cd8 = uStack_22b8;
      uStack_ce0 = uStack_22c0;
      uStack_cc8 = uStack_22a8;
      uStack_cd0 = uStack_22b0;
      func_0x000107c610b4(auStack_4f88,auStack_2260,0x301);
      uStack_1e28 = uVar3;
      uVar3 = uStack_1e28;
      uStack_44a8 = uStack_1f08;
      uStack_44b0 = uStack_1f10;
      uStack_4498 = uStack_1ef8;
      uStack_44a0 = uStack_1f00;
      uStack_4488 = uStack_1ee8;
      uStack_4490 = uStack_1ef0;
      uStack_4478 = uStack_1ed8;
      uStack_4480 = uStack_1ee0;
      uStack_44c8 = uStack_1f28;
      uStack_44d0 = uStack_1f30;
      uStack_44b8 = uStack_1f18;
      uStack_44c0 = uStack_1f20;
      uStack_c38 = uStack_1e88;
      uStack_c40 = uStack_1e90;
      uStack_c28 = uStack_1e78;
      uStack_c30 = uStack_1e80;
      uStack_c18 = uStack_1e68;
      uStack_c20 = uStack_1e70;
      uStack_c08 = uStack_1e58;
      uStack_c10 = uStack_1e60;
      uStack_c78 = uStack_1ec8;
      uStack_c80 = uStack_1ed0;
      uStack_c68 = uStack_1eb8;
      uStack_c70 = uStack_1ec0;
      uStack_c58 = uStack_1ea8;
      uStack_c60 = uStack_1eb0;
      uStack_c48 = uStack_1e98;
      uStack_c50 = uStack_1ea0;
      uStack_bcf = uStack_1e1f;
      uStack_bd0 = uStack_1e20;
      uStack_be8 = uStack_1e38;
      uStack_bf0 = uStack_1e40;
      uStack_bd8 = (undefined1)uVar3;
      uStack_bd7 = (undefined7)((ulong)uVar3 >> 8);
      uStack_be0 = uStack_1e30;
      uStack_bf8 = uStack_1e48;
      uStack_c00 = uStack_1e50;
      goto LAB_1018937bc;
    }
    func_0x000101893a08(auStack_bb8,0x112dcbd00,&UNK_10d98e550);
  }
  uVar4 = param_1[0x155];
  uVar1 = *(undefined2 *)(param_1 + 0x156);
  uStack_4fa8 = param_1[0x152];
  uStack_4fb0 = param_1[0x151];
  uStack_4f98 = param_1[0x154];
  uStack_4fa0 = param_1[0x153];
  uStack_4fc8 = param_1[0x14e];
  uStack_4fb8 = param_1[0x14f];
  uStack_4fbc = *(undefined1 *)(param_1 + 0x150);
  uStack_bf8 = param_1[0x147];
  uStack_c00 = param_1[0x146];
  uStack_be8 = param_1[0x149];
  uStack_bf0 = param_1[0x148];
  uStack_be0 = param_1[0x14a];
  uStack_bd8 = (undefined1)param_1[0x14b];
  uStack_c38 = param_1[0x13f];
  uStack_c40 = param_1[0x13e];
  uStack_c28 = param_1[0x141];
  uStack_c30 = param_1[0x140];
  uStack_c18 = param_1[0x143];
  uStack_c20 = param_1[0x142];
  uStack_c08 = param_1[0x145];
  uStack_c10 = param_1[0x144];
  uStack_c78 = param_1[0x137];
  uStack_c80 = param_1[0x136];
  uStack_c68 = param_1[0x139];
  uStack_c70 = param_1[0x138];
  uStack_c58 = param_1[0x13b];
  uStack_c60 = param_1[0x13a];
  uStack_c48 = param_1[0x13d];
  uStack_c50 = param_1[0x13c];
  uStack_bcf = *(undefined8 *)((long)param_1 + 0xa61);
  uStack_bd7 = (undefined7)*(undefined8 *)((long)param_1 + 0xa59);
  uStack_bd0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xa59) >> 0x38);
  uStack_44a8 = param_1[0x12f];
  uStack_44b0 = param_1[0x12e];
  uStack_4498 = param_1[0x131];
  uStack_44a0 = param_1[0x130];
  uStack_4488 = param_1[0x133];
  uStack_4490 = param_1[0x132];
  uStack_4478 = param_1[0x135];
  uStack_4480 = param_1[0x134];
  uStack_44c8 = param_1[299];
  uStack_44d0 = param_1[0x12a];
  uStack_44b8 = param_1[0x12d];
  uStack_44c0 = param_1[300];
  uStack_4fcc = *(undefined1 *)((long)param_1 + 0x949);
  uStack_4fd0 = *(undefined1 *)(param_1 + 0x129);
  uStack_4fe8 = param_1[0x126];
  uStack_4ff0 = param_1[0x125];
  uStack_4fd8 = param_1[0x128];
  uStack_4fe0 = param_1[0x127];
  func_0x000107c610b4(auStack_4f88,param_1 + 0xc4,0x301);
  uStack_cb8 = param_1[0xbd];
  uStack_cc0 = param_1[0xbc];
  uStack_ca8 = param_1[0xbf];
  uStack_cb0 = param_1[0xbe];
  uStack_ca0 = param_1[0xc0];
  uStack_c98 = (undefined1)param_1[0xc1];
  uStack_c8f = *(undefined8 *)((long)param_1 + 0x611);
  uStack_c97 = (undefined7)*(undefined8 *)((long)param_1 + 0x609);
  uStack_c90 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x609) >> 0x38);
  uStack_ce8 = param_1[0xb7];
  uStack_cf0 = param_1[0xb6];
  uStack_cd8 = param_1[0xb9];
  uStack_ce0 = param_1[0xb8];
  uStack_cc8 = param_1[0xbb];
  uStack_cd0 = param_1[0xba];
  func_0x000107c610b4(auStack_1298,param_1 + 1,0x5a8);
  uVar3 = *param_1;
  FUN_101795250(param_1,&uStack_2880);
  uStack_2880 = uVar3;
  uStack_1dd8 = uVar4;
  uStack_1dd0 = uVar1;
LAB_1018937bc:
  func_0x000107c610b4((ulong)&uStack_2880 | 7,auStack_4f88,0x301);
  uStack_2dfa = (undefined2)uStack_44a8;
  uStack_2df8 = (undefined6)((ulong)uStack_44a8 >> 0x10);
  uStack_2e02 = (undefined2)uStack_44b0;
  uStack_2e00 = (undefined6)((ulong)uStack_44b0 >> 0x10);
  uStack_2dea = (undefined2)uStack_4498;
  uStack_2de8 = (undefined6)((ulong)uStack_4498 >> 0x10);
  uStack_2df2 = (undefined2)uStack_44a0;
  uStack_2df0 = (undefined6)((ulong)uStack_44a0 >> 0x10);
  uStack_2dda = (undefined2)uStack_4488;
  uStack_2dd8 = (undefined6)((ulong)uStack_4488 >> 0x10);
  uStack_2de2 = (undefined2)uStack_4490;
  uStack_2de0 = (undefined6)((ulong)uStack_4490 >> 0x10);
  uStack_2dca = (undefined2)uStack_4478;
  uStack_2dc8 = (undefined6)((ulong)uStack_4478 >> 0x10);
  uStack_2dd2 = (undefined2)uStack_4480;
  uStack_2dd0 = (undefined6)((ulong)uStack_4480 >> 0x10);
  uStack_2e1a = (undefined2)uStack_44c8;
  uStack_2e18 = (undefined6)((ulong)uStack_44c8 >> 0x10);
  uStack_2e22 = (undefined2)uStack_44d0;
  uStack_2e20 = (undefined6)((ulong)uStack_44d0 >> 0x10);
  uStack_2e0a = (undefined2)uStack_44b8;
  uStack_2e08 = (undefined6)((ulong)uStack_44b8 >> 0x10);
  uStack_2e12 = (undefined2)uStack_44c0;
  uStack_2e10 = (undefined6)((ulong)uStack_44c0 >> 0x10);
  func_0x00010179528c(auStack_1dc8);
  *extraout_x8 = uStack_2880;
  func_0x000107c610b4(extraout_x8 + 1,auStack_1298,0x5a8);
  extraout_x8[0xbd] = uStack_cb8;
  extraout_x8[0xbc] = uStack_cc0;
  extraout_x8[0xbf] = uStack_ca8;
  extraout_x8[0xbe] = uStack_cb0;
  extraout_x8[0xc1] = CONCAT71(uStack_c97,uStack_c98);
  extraout_x8[0xc0] = uStack_ca0;
  *(undefined8 *)((long)extraout_x8 + 0x611) = uStack_c8f;
  *(ulong *)((long)extraout_x8 + 0x609) = CONCAT17(uStack_c90,uStack_c97);
  extraout_x8[0xb7] = uStack_ce8;
  extraout_x8[0xb6] = uStack_cf0;
  extraout_x8[0xb9] = uStack_cd8;
  extraout_x8[0xb8] = uStack_ce0;
  extraout_x8[0xbb] = uStack_cc8;
  extraout_x8[0xba] = uStack_cd0;
  func_0x000107c610b4((long)extraout_x8 + 0x619,&uStack_2880,0x308);
  extraout_x8[0x126] = uStack_4fe8;
  extraout_x8[0x125] = uStack_4ff0;
  extraout_x8[0x128] = uStack_4fd8;
  extraout_x8[0x127] = uStack_4fe0;
  *(undefined1 *)(extraout_x8 + 0x129) = uStack_4fd0;
  *(undefined1 *)((long)extraout_x8 + 0x949) = uStack_4fcc;
  *(ulong *)((long)extraout_x8 + 0x992) = CONCAT26(uStack_2dda,uStack_2de0);
  *(ulong *)((long)extraout_x8 + 0x98a) = CONCAT26(uStack_2de2,uStack_2de8);
  *(ulong *)((long)extraout_x8 + 0x9a2) = CONCAT26(uStack_2dca,uStack_2dd0);
  *(ulong *)((long)extraout_x8 + 0x99a) = CONCAT26(uStack_2dd2,uStack_2dd8);
  extraout_x8[0x135] = CONCAT62(uStack_2dc8,uStack_2dca);
  *(ulong *)((long)extraout_x8 + 0x952) = CONCAT26(uStack_2e1a,uStack_2e20);
  *(ulong *)((long)extraout_x8 + 0x94a) = CONCAT26(uStack_2e22,uStack_2e28);
  *(ulong *)((long)extraout_x8 + 0x962) = CONCAT26(uStack_2e0a,uStack_2e10);
  *(ulong *)((long)extraout_x8 + 0x95a) = CONCAT26(uStack_2e12,uStack_2e18);
  *(ulong *)((long)extraout_x8 + 0x972) = CONCAT26(uStack_2dfa,uStack_2e00);
  *(ulong *)((long)extraout_x8 + 0x96a) = CONCAT26(uStack_2e02,uStack_2e08);
  *(ulong *)((long)extraout_x8 + 0x982) = CONCAT26(uStack_2dea,uStack_2df0);
  *(ulong *)((long)extraout_x8 + 0x97a) = CONCAT26(uStack_2df2,uStack_2df8);
  extraout_x8[0x147] = uStack_bf8;
  extraout_x8[0x146] = uStack_c00;
  extraout_x8[0x149] = uStack_be8;
  extraout_x8[0x148] = uStack_bf0;
  extraout_x8[0x14b] = CONCAT71(uStack_bd7,uStack_bd8);
  extraout_x8[0x14a] = uStack_be0;
  *(undefined8 *)((long)extraout_x8 + 0xa61) = uStack_bcf;
  *(ulong *)((long)extraout_x8 + 0xa59) = CONCAT17(uStack_bd0,uStack_bd7);
  extraout_x8[0x13f] = uStack_c38;
  extraout_x8[0x13e] = uStack_c40;
  extraout_x8[0x141] = uStack_c28;
  extraout_x8[0x140] = uStack_c30;
  extraout_x8[0x143] = uStack_c18;
  extraout_x8[0x142] = uStack_c20;
  extraout_x8[0x145] = uStack_c08;
  extraout_x8[0x144] = uStack_c10;
  extraout_x8[0x137] = uStack_c78;
  extraout_x8[0x136] = uStack_c80;
  extraout_x8[0x139] = uStack_c68;
  extraout_x8[0x138] = uStack_c70;
  extraout_x8[0x13b] = uStack_c58;
  extraout_x8[0x13a] = uStack_c60;
  extraout_x8[0x13d] = uStack_c48;
  extraout_x8[0x13c] = uStack_c50;
  extraout_x8[0x14e] = uStack_4fc8;
  extraout_x8[0x14f] = uStack_4fb8;
  *(undefined1 *)(extraout_x8 + 0x150) = uStack_4fbc;
  extraout_x8[0x152] = uStack_4fa8;
  extraout_x8[0x151] = uStack_4fb0;
  extraout_x8[0x154] = uStack_4f98;
  extraout_x8[0x153] = uStack_4fa0;
  extraout_x8[0x155] = uStack_1dd8;
  *(undefined2 *)(extraout_x8 + 0x156) = uStack_1dd0;
  return;
}



/* Entry: 101893970; end: 101893a47;  */

undefined8 FUN_101893970(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112dcd580;
  func_0x0001000285a8(0x112dcd580,&UNK_10d98ff20);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101893a48; end: 101893a87; -[_TtC25AdTrackParserServicesImpl22AdPromoCodeTrackParser adEventSymbols] */

void FUN_101893a48(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101893a88; end: 101893abf; -[_TtC25AdTrackParserServicesImpl22AdPromoCodeTrackParser setAdEventSymbols:] */

void FUN_101893a88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 101893ac0; end: 101893b67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101893ac0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uStack_40;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_40);
  uVar2 = uStack_40;
  func_0x000107c614f0();
  uVar3 = uVar2;
  func_0x000103bfc8f8();
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  else if (*(int *)(*(long *)(param_1 + _DAT_11306b528) + _DAT_113815200) == 5) {
    func_0x000103bfc95c(uVar2,uStack_38);
    uVar1 = (uint)uVar2;
  }
  else {
    uVar1 = 1;
  }
  func_0x000107c615e8(uStack_40);
  return uVar1 & 1;
}



/* Entry: 101893b68; end: 101893bbf; -[_TtC25AdTrackParserServicesImpl22AdPromoCodeTrackParser parseWithTrackRequest:viewSeqNum:] */

void FUN_101893b68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  func_0x000101895450(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101893bc0; end: 101893c0b;  */

void FUN_101893bc0(void)

{
  long unaff_x20;
  
  func_0x000100400450(unaff_x20 + 0x10);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101893c0c; end: 101893d67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101893c0c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar2 = &uStack_70;
  uVar5 = 0;
  lVar1 = *(long *)(*(long *)(param_1 + _DAT_11306b4f8) + _DAT_11306b3e0);
  if (lVar1 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    uStack_70 = 0xd000000000000013;
    uStack_68 = 0x800000010efbc8f0;
    func_0x000107c61174();
    func_0x000107c6061c(&uStack_70,PTR___sSSN_11034da80);
    lVar3 = lVar1;
    func_0x000107c3ac74();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(puVar2);
    if (lVar3 == 0) {
      uStack_68 = 0;
      uStack_70 = 0;
      lStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      func_0x000107c60234(&uStack_70,lVar3);
      func_0x000107c615e8(lVar3);
    }
    uStack_48 = uStack_68;
    uStack_50 = uStack_70;
    lStack_38 = lStack_58;
    uStack_40 = uStack_60;
    if (lStack_58 != 0) {
      uVar4 = 0;
      func_0x0001002ed07c(0);
      func_0x000107c6147c(&uStack_70,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar4,6);
      uVar4 = uStack_70;
      if ((uVar5 & 1) == 0) {
        return;
      }
      uVar6 = uStack_70;
      func_0x000107c49820(uStack_70);
      func_0x000107c61170(uVar4);
      FUN_1018aad68(uVar6);
      return;
    }
  }
  func_0x000101895cac(&uStack_50,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 101893d68; end: 101895b9b;  */

void FUN_101893d68(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 extraout_x8;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_4c20;
  undefined8 uStack_4c18;
  undefined8 uStack_4c10;
  undefined8 uStack_4c08;
  undefined8 uStack_4c00;
  undefined8 uStack_4bf8;
  undefined8 uStack_4bf0;
  undefined8 uStack_4be8;
  undefined8 uStack_4be0;
  undefined8 uStack_4bd8;
  undefined8 uStack_4bd0;
  undefined8 uStack_4bc8;
  undefined8 uStack_4bc0;
  undefined8 uStack_4bb8;
  undefined8 uStack_4bb0;
  undefined8 uStack_4ba8;
  undefined8 uStack_4ba0;
  undefined1 auStack_4168 [1304];
  undefined8 uStack_3c50;
  undefined8 uStack_3c48;
  undefined8 uStack_3c40;
  undefined8 uStack_3c38;
  undefined8 uStack_3c30;
  undefined8 uStack_3c28;
  undefined8 uStack_3c20;
  undefined8 uStack_3c18;
  undefined8 uStack_3c10;
  undefined8 uStack_3c08;
  undefined8 uStack_3c00;
  undefined8 uStack_3bf8;
  undefined8 uStack_3bf0;
  undefined8 uStack_3be8;
  undefined8 uStack_3be0;
  undefined8 uStack_3bd8;
  undefined8 uStack_3bd0;
  undefined8 uStack_3bc8;
  undefined8 uStack_3bc0;
  undefined8 uStack_3bb8;
  undefined8 uStack_3bb0;
  undefined8 uStack_3ba8;
  undefined8 uStack_3ba0;
  undefined8 uStack_3b98;
  undefined8 uStack_3b90;
  undefined8 uStack_3b88;
  undefined8 uStack_3b80;
  undefined8 uStack_3b78;
  undefined8 uStack_3b70;
  undefined8 uStack_3b68;
  undefined8 uStack_3b60;
  undefined8 uStack_3b4f;
  undefined8 uStack_3618;
  undefined8 uStack_3610;
  undefined8 uStack_3608;
  undefined8 uStack_3600;
  undefined8 uStack_35f8;
  undefined8 uStack_35f0;
  undefined8 uStack_35e8;
  undefined8 uStack_35e0;
  undefined8 uStack_35d8;
  undefined8 uStack_35d0;
  undefined8 uStack_35c8;
  undefined8 uStack_35c0;
  undefined8 uStack_35b8;
  undefined8 uStack_35a6;
  undefined8 uStack_3070;
  undefined8 uStack_3068;
  undefined8 uStack_3060;
  undefined8 uStack_3058;
  undefined8 uStack_3050;
  undefined8 uStack_3048;
  undefined8 uStack_3040;
  undefined8 uStack_3038;
  undefined8 uStack_3030;
  undefined8 uStack_3028;
  undefined8 uStack_3020;
  undefined8 uStack_3018;
  undefined8 uStack_3010;
  undefined8 uStack_3008;
  undefined8 uStack_3000;
  undefined8 uStack_2ff8;
  undefined1 uStack_2ff0;
  undefined8 uStack_2b58;
  undefined8 uStack_2b50;
  undefined8 uStack_2b48;
  undefined8 uStack_2b40;
  undefined8 uStack_2b38;
  undefined8 uStack_2b30;
  undefined8 uStack_2b28;
  undefined8 uStack_2b20;
  undefined8 uStack_2b18;
  undefined8 uStack_2b10;
  undefined8 uStack_2b08;
  undefined8 uStack_2b00;
  undefined8 uStack_2af8;
  undefined8 uStack_2af0;
  undefined8 uStack_2ae8;
  undefined8 uStack_2ae0;
  undefined8 uStack_2ad8;
  undefined8 uStack_2ad0;
  undefined1 auStack_2ac8 [2744];
  undefined8 uStack_2010;
  undefined8 uStack_2008;
  undefined8 uStack_2000;
  undefined8 uStack_1ff8;
  undefined8 uStack_1ff0;
  undefined8 uStack_1fe8;
  undefined8 uStack_1fe0;
  undefined8 uStack_1fd8;
  undefined8 uStack_1fd0;
  undefined8 uStack_1fc8;
  undefined8 uStack_1fc0;
  undefined8 uStack_1fb8;
  undefined8 uStack_1fb0;
  undefined1 auStack_1fa8 [1304];
  undefined1 auStack_1a90 [8];
  undefined1 auStack_1a88 [2736];
  undefined1 auStack_fd8 [1304];
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined1 uStack_900;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_87f;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_7fe;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined2 uStack_6a0;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined2 uStack_650;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined1 auStack_618 [1304];
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
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar6 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  func_0x000107c610b4(auStack_1a90);
  func_0x000107c610b4(auStack_618,param_2 + 8,0x5a8);
  iVar5 = (int)auStack_618;
  func_0x000100cbd840();
  if (iVar5 == 1) {
    FUN_101895cec(&uStack_4c20);
    uStack_9a8 = uStack_4bb8;
    uStack_9b0 = uStack_4bc0;
    uStack_998 = uStack_4ba8;
    uStack_9a0 = uStack_4bb0;
    uStack_990 = uStack_4ba0;
    uStack_9e8 = uStack_4bf8;
    uStack_9f0 = uStack_4c00;
    uStack_9d8 = uStack_4be8;
    uStack_9e0 = uStack_4bf0;
    uStack_9b8 = uStack_4bc8;
    uStack_9c0 = uStack_4bd0;
    uStack_9c8 = uStack_4bd8;
    uStack_9d0 = uStack_4be0;
    uStack_9f8 = uStack_4c08;
    uStack_a00 = uStack_4c10;
    uStack_a08 = uStack_4c18;
    uStack_a10 = uStack_4c20;
    func_0x000101895d08(&uStack_3070);
    uStack_918 = uStack_3008;
    uStack_920 = uStack_3010;
    uStack_908 = uStack_2ff8;
    uStack_910 = uStack_3000;
    uStack_900 = uStack_2ff0;
    uStack_958 = uStack_3048;
    uStack_960 = uStack_3050;
    uStack_948 = uStack_3038;
    uStack_950 = uStack_3040;
    uStack_928 = uStack_3018;
    uStack_930 = uStack_3020;
    uStack_938 = uStack_3028;
    uStack_940 = uStack_3030;
    uStack_968 = uStack_3058;
    uStack_970 = uStack_3060;
    uStack_978 = uStack_3068;
    uStack_980 = uStack_3070;
    func_0x0001018797b4(&uStack_3bc0);
    uStack_8a8 = uStack_3b78;
    uStack_8b0 = uStack_3b80;
    uStack_898 = uStack_3b68;
    uStack_8a0 = uStack_3b70;
    uStack_890 = uStack_3b60;
    uStack_87f = uStack_3b4f;
    uStack_8e8 = uStack_3bb8;
    uStack_8f0 = uStack_3bc0;
    uStack_8d8 = uStack_3ba8;
    uStack_8e0 = uStack_3bb0;
    uStack_8c8 = uStack_3b98;
    uStack_8d0 = uStack_3ba0;
    uStack_8b8 = uStack_3b88;
    uStack_8c0 = uStack_3b90;
    func_0x000101895d28(&uStack_3618);
    uStack_828 = uStack_35d0;
    uStack_830 = uStack_35d8;
    uStack_818 = uStack_35c0;
    uStack_820 = uStack_35c8;
    uStack_810 = uStack_35b8;
    uStack_7fe = uStack_35a6;
    uStack_868 = uStack_3610;
    uStack_870 = uStack_3618;
    uStack_858 = uStack_3600;
    uStack_860 = uStack_3608;
    uStack_848 = uStack_35f0;
    uStack_850 = uStack_35f8;
    uStack_838 = uStack_35e0;
    uStack_840 = uStack_35e8;
    uStack_7e0 = 0;
    uStack_7e8 = 0;
    uStack_7f0 = 0;
    uStack_7d8 = 1;
    uStack_7c8 = 0;
    uStack_7d0 = 0;
    uStack_7b8 = 0;
    uStack_7c0 = 0;
    uStack_7b0 = 0;
    uStack_7a8 = 2;
    uStack_798 = 0;
    uStack_7a0 = 0;
    uStack_788 = 0;
    uStack_790 = 0;
    uStack_778 = 0;
    uStack_780 = 0;
    uStack_768 = 0;
    uStack_770 = 0;
    uStack_758 = 0;
    uStack_760 = 0;
    uStack_748 = 0;
    uStack_750 = 0;
    uStack_738 = 0;
    uStack_740 = 0;
    uStack_728 = 0;
    uStack_730 = 0;
    uStack_718 = 0;
    uStack_720 = 0;
    uStack_708 = 0;
    uStack_710 = 0;
    uStack_6f8 = 0;
    uStack_700 = 0;
    uStack_6e8 = 0;
    uStack_6f0 = 0;
    uStack_6d8 = 0;
    uStack_6e0 = 0;
    uStack_6c8 = 0;
    uStack_6d0 = 0;
    uStack_6b8 = 0;
    uStack_6c0 = 0;
    uStack_6a8 = 0;
    uStack_6b0 = 1;
    uStack_6a0 = 0;
    uStack_688 = 0;
    uStack_690 = 0;
    uStack_678 = 0;
    uStack_680 = 0;
    uStack_668 = 0;
    uStack_670 = 0;
    uStack_658 = 0;
    uStack_660 = 0;
    uStack_650 = 0x100;
    uStack_638 = 0;
    uStack_640 = 0;
    uStack_628 = 0;
    uStack_630 = 0;
    uStack_620 = 0;
    FUN_101795250(param_2,auStack_2ac8);
    func_0x000104218d60(auStack_fd8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    func_0x000107c610b4(auStack_1fa8,auStack_fd8,0x518);
    uStack_1fc8 = uStack_a50;
    uStack_1fd0 = uStack_a58;
    uStack_1fb8 = uStack_a40;
    uStack_1fc0 = uStack_a48;
    uStack_1fb0 = uStack_a38;
    uStack_2008 = uStack_a90;
    uStack_2010 = uStack_a98;
    uStack_1ff8 = uStack_a80;
    uStack_2000 = uStack_a88;
    uStack_1fd8 = uStack_a60;
    uStack_1fe0 = uStack_a68;
    uStack_1fe8 = uStack_a70;
    uStack_1ff0 = uStack_a78;
    uVar7 = uStack_ac0;
    uVar8 = uStack_ab8;
    uVar9 = uStack_ab0;
    uVar10 = uStack_aa8;
    uVar11 = uStack_aa0;
  }
  else {
    func_0x000107c610b4(auStack_1fa8,auStack_618,0x518);
    uStack_1fc8 = uStack_90;
    uStack_1fd0 = uStack_98;
    uStack_1fb8 = uStack_80;
    uStack_1fc0 = uStack_88;
    uStack_1fb0 = uStack_78;
    uStack_2008 = uStack_d0;
    uStack_2010 = uStack_d8;
    uStack_1ff8 = uStack_c0;
    uStack_2000 = uStack_c8;
    uStack_1fd8 = uStack_a0;
    uStack_1fe0 = uStack_a8;
    uStack_1fe8 = uStack_b0;
    uStack_1ff0 = uStack_b8;
    FUN_101795250(param_2,auStack_2ac8);
    uVar7 = uStack_100;
    uVar8 = uStack_f8;
    uVar9 = uStack_f0;
    uVar10 = uStack_e8;
    uVar11 = uStack_e0;
  }
  uStack_a18 = param_1[1];
  uStack_a20 = *param_1;
  uStack_a28 = param_1[3];
  uStack_a30 = param_1[2];
  FUN_101895d4c(auStack_618,auStack_2ac8,0x112dcbd00,&UNK_10d98e550);
  func_0x000100402194(&uStack_a20,auStack_2ac8);
  func_0x000100402194(&uStack_a30,auStack_2ac8);
  FUN_101895b9c(uVar7,uVar8,uVar9,uVar10,uVar11);
  func_0x000107c610b4(auStack_4168,auStack_1fa8,0x518);
  uStack_3bf0 = uStack_1fd8;
  uStack_3bf8 = uStack_1fe0;
  uStack_3be0 = uStack_1fc8;
  uStack_3be8 = uStack_1fd0;
  uStack_3bd0 = uStack_1fb8;
  uStack_3bd8 = uStack_1fc0;
  uStack_3c20 = uStack_2008;
  uStack_3c28 = uStack_2010;
  uStack_3c10 = uStack_1ff8;
  uStack_3c18 = uStack_2000;
  uStack_3bc8 = uStack_1fb0;
  uStack_3c00 = uStack_1fe8;
  uStack_3c08 = uStack_1ff0;
  uStack_3c50 = uVar1;
  uStack_3c48 = uVar3;
  uStack_3c40 = uVar6;
  uStack_3c38 = uVar2;
  uStack_3c30 = uVar4;
  func_0x000107c610b4(&uStack_3bc0,auStack_4168,0x5a8);
  func_0x00010178e49c(&uStack_3bc0);
  func_0x000107c610b4(&uStack_3618,auStack_1a88,0x5a8);
  func_0x00010178e37c(auStack_4168,auStack_2ac8);
  func_0x000101895cac(&uStack_3618,0x112dcbd00,&UNK_10d98e550);
  func_0x000107c610b4(auStack_1a88,&uStack_3bc0,0x5a8);
  func_0x000107c610b4(auStack_2ac8,auStack_1a90,0xab2);
  func_0x000107c610b4(&uStack_3070,auStack_1fa8,0x518);
  uStack_2af8 = uStack_1fd8;
  uStack_2b00 = uStack_1fe0;
  uStack_2ae8 = uStack_1fc8;
  uStack_2af0 = uStack_1fd0;
  uStack_2ad8 = uStack_1fb8;
  uStack_2ae0 = uStack_1fc0;
  uStack_2b28 = uStack_2008;
  uStack_2b30 = uStack_2010;
  uStack_2b18 = uStack_1ff8;
  uStack_2b20 = uStack_2000;
  uStack_2ad0 = uStack_1fb0;
  uStack_2b08 = uStack_1fe8;
  uStack_2b10 = uStack_1ff0;
  uStack_2b58 = uVar1;
  uStack_2b50 = uVar3;
  uStack_2b48 = uVar6;
  uStack_2b40 = uVar2;
  uStack_2b38 = uVar4;
  FUN_101795250(auStack_2ac8,&uStack_4c20);
  func_0x00010178e3b8(&uStack_3070);
  func_0x00010179528c(auStack_1a90);
  func_0x000107c610b4(extraout_x8,auStack_2ac8,0xab2);
  return;
}



/* Entry: 101895b9c; end: 101895ceb;  */

/* WARNING: Possible PIC construction at 0x000101895bb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101895bb8) */

void FUN_101895b9c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 101895cec; end: 101895d4b;  */

void FUN_101895cec(undefined8 *param_1)

{
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 101895d4c; end: 101895d93;  */

undefined8 FUN_101895d4c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101895d94; end: 101895dd3; -[_TtC25AdTrackParserServicesImpl20AdTooltipTrackParser adEventSymbols] */

void FUN_101895d94(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101895dd4; end: 101895e0b; -[_TtC25AdTrackParserServicesImpl20AdTooltipTrackParser setAdEventSymbols:] */

void FUN_101895dd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 101895e0c; end: 101896daf;  */

/* WARNING: Possible PIC construction at 0x000101895ef0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101895ffc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018960ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101895fd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101896000) */
/* WARNING: Removing unreachable block (ram,0x000101896050) */
/* WARNING: Removing unreachable block (ram,0x000101896034) */
/* WARNING: Removing unreachable block (ram,0x00010189604c) */
/* WARNING: Removing unreachable block (ram,0x000101896074) */
/* WARNING: Removing unreachable block (ram,0x000101895ef4) */
/* WARNING: Removing unreachable block (ram,0x0001018960ac) */
/* WARNING: Removing unreachable block (ram,0x0001018960b4) */
/* WARNING: Removing unreachable block (ram,0x000101895f6c) */
/* WARNING: Removing unreachable block (ram,0x0001018960c4) */
/* WARNING: Removing unreachable block (ram,0x0001018960d4) */
/* WARNING: Removing unreachable block (ram,0x000101895f78) */
/* WARNING: Removing unreachable block (ram,0x000101896dac) */
/* WARNING: Removing unreachable block (ram,0x000101895fa0) */
/* WARNING: Removing unreachable block (ram,0x000101895fb4) */
/* WARNING: Removing unreachable block (ram,0x000101895fcc) */
/* WARNING: Removing unreachable block (ram,0x000101895fbc) */
/* WARNING: Removing unreachable block (ram,0x000101895fd8) */
/* WARNING: Removing unreachable block (ram,0x0001018960f0) */
/* WARNING: Removing unreachable block (ram,0x00010189613c) */
/* WARNING: Removing unreachable block (ram,0x00010189614c) */
/* WARNING: Removing unreachable block (ram,0x00010189634c) */
/* WARNING: Removing unreachable block (ram,0x0001018961e4) */
/* WARNING: Removing unreachable block (ram,0x000101896368) */
/* WARNING: Removing unreachable block (ram,0x000101896378) */
/* WARNING: Removing unreachable block (ram,0x0001018963f8) */
/* WARNING: Removing unreachable block (ram,0x000101896c10) */
/* WARNING: Removing unreachable block (ram,0x000101896444) */
/* WARNING: Removing unreachable block (ram,0x000101896c48) */
/* WARNING: Removing unreachable block (ram,0x00010189644c) */
/* WARNING: Removing unreachable block (ram,0x000101896518) */
/* WARNING: Removing unreachable block (ram,0x0001018965b0) */
/* WARNING: Removing unreachable block (ram,0x000101896828) */
/* WARNING: Removing unreachable block (ram,0x0001018965f8) */
/* WARNING: Removing unreachable block (ram,0x000101896598) */
/* WARNING: Removing unreachable block (ram,0x00010189683c) */
/* WARNING: Removing unreachable block (ram,0x000101896960) */
/* WARNING: Removing unreachable block (ram,0x000101896bc4) */
/* WARNING: Removing unreachable block (ram,0x000101896978) */
/* WARNING: Removing unreachable block (ram,0x000101896be8) */
/* WARNING: Removing unreachable block (ram,0x000101896c8c) */
/* WARNING: Removing unreachable block (ram,0x000101896c0c) */
/* WARNING: Removing unreachable block (ram,0x000101896c3c) */
/* WARNING: Removing unreachable block (ram,0x000101896d2c) */
/* WARNING: Removing unreachable block (ram,0x000101896ba8) */
/* WARNING: Removing unreachable block (ram,0x0001018963e8) */
/* WARNING: Removing unreachable block (ram,0x000101896d38) */

void FUN_101895e0c(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  undefined1 auStack_9350 [80];
  undefined1 *puStack_9300;
  undefined8 auStack_2cc8 [1421];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puStack_9300 = auStack_9350 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x00010423cab0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001000d224c(auStack_2cc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 101896db0; end: 101896e0f; -[_TtC25AdTrackParserServicesImpl20AdTooltipTrackParser parseWithTrackRequest:viewSeqNum:] */

void FUN_101896db0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_101895e0c(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101896e10; end: 101896e5b;  */

void FUN_101896e10(void)

{
  long unaff_x20;
  
  func_0x000100400450(unaff_x20 + 0x10);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101896e5c; end: 101896e97;  */

undefined8 FUN_101896e5c(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101896e98; end: 1018970c7;  */

undefined * FUN_101896e98(double param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar9 = *(long *)(param_3 + 0x10);
  if (lVar9 != 0) {
    func_0x0001018ace0c(0,lVar9,0);
    plVar11 = (long *)(param_3 + 0x28);
    do {
      lVar4 = plVar11[-1];
      lVar5 = *plVar11;
      func_0x000107c61174(lVar4);
      func_0x000107c61174();
      func_0x000107c30d28();
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1018970c0);
        (*pcVar3)();
      }
      if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1018970c4);
        (*pcVar3)();
      }
      dVar12 = 1.8446744073709552e+19;
      if (1.8446744073709552e+19 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1018970c8);
        (*pcVar3)();
      }
      lVar6 = lVar5;
      func_0x000107c30d2c();
      lVar7 = lVar5;
      func_0x000107c30d30();
      lVar8 = lVar5;
      func_0x000107c30d34();
      func_0x000107c61180();
      dVar13 = dVar12;
      dVar15 = 0.0;
      if (lVar8 != 0) {
        func_0x000107c4223c();
        dVar13 = dVar12;
        func_0x000107c61170(lVar8);
        dVar15 = dVar12;
      }
      lVar8 = lVar5;
      func_0x000107c30d38();
      func_0x000107c61180();
      dVar12 = dVar13;
      dVar14 = 0.0;
      if (lVar8 != 0) {
        func_0x000107c4223c();
        dVar12 = dVar13;
        func_0x000107c61170(lVar8);
        dVar14 = dVar13;
      }
      lVar8 = lVar5;
      func_0x000107c30d3c();
      func_0x000107c61180();
      dVar13 = dVar12;
      dVar17 = 0.0;
      if (lVar8 != 0) {
        func_0x000107c4223c();
        dVar13 = dVar12;
        func_0x000107c61170(lVar8);
        dVar17 = dVar12;
      }
      lVar8 = lVar5;
      func_0x000107c30d40();
      func_0x000107c61180();
      lVar10 = lVar4;
      dVar12 = dVar13;
      dVar16 = 0.0;
      if (lVar8 != 0) {
        func_0x000107c4223c();
        dVar12 = dVar13;
        func_0x000107c61170(lVar5);
        lVar10 = lVar8;
        lVar5 = lVar4;
        dVar16 = dVar13;
      }
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar10);
      uVar1 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        func_0x0001018ace0c(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
      }
      plVar11 = plVar11 + 2;
      *(ulong *)(puVar2 + 0x10) = uVar1 + 1;
      *(long *)(puVar2 + uVar1 * 0x38 + 0x20) = (long)param_1;
      *(long *)(puVar2 + uVar1 * 0x38 + 0x28) = lVar6;
      *(long *)(puVar2 + uVar1 * 0x38 + 0x30) = lVar7;
      *(double *)(puVar2 + uVar1 * 0x38 + 0x38) = dVar15;
      *(double *)(puVar2 + uVar1 * 0x38 + 0x40) = dVar14;
      *(double *)(puVar2 + uVar1 * 0x38 + 0x48) = dVar17;
      *(double *)(puVar2 + uVar1 * 0x38 + 0x50) = dVar16;
      lVar9 = lVar9 + -1;
      param_1 = dVar12;
    } while (lVar9 != 0);
  }
  return puVar2;
}



/* Entry: 1018970c8; end: 10189714f;  */

undefined8 FUN_1018970c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101897150; end: 10189718f; -[_TtC25AdTrackParserServicesImpl21AdTrackAdReportParser adEventSymbols] */

void FUN_101897150(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101897190; end: 1018971c7; -[_TtC25AdTrackParserServicesImpl21AdTrackAdReportParser setAdEventSymbols:] */

void FUN_101897190(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 1018971c8; end: 1018978eb;  */

/* WARNING: Possible PIC construction at 0x000101897394: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101897398) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018971c8(void)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uVar4 = *(ulong *)(unaff_x20 + 0x98);
  if (uVar4 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar5 = uVar4;
    }
    func_0x000107c60480();
  }
  if (uVar5 == 0) {
    uVar4 = *(ulong *)(unaff_x20 + 0x90);
    *(undefined **)(unaff_x20 + 0x90) = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61434(uVar4);
    func_0x000100403514(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1018973e0);
      (*pcVar2)();
    }
    uVar6 = 0;
    do {
      puVar1 = puStack_68;
      if ((uVar4 & 0xc000000000000001) == 0) {
        uVar3 = *(ulong *)(uVar4 + uVar6 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar6;
        func_0x0001018ac454(uVar6,uVar4);
      }
      uVar7 = *(undefined8 *)(uVar3 + _DAT_11308c458);
      func_0x000107c61174();
      func_0x000107c30b74();
      uVar8 = 0xe300000000000000;
      uVar9 = 0x544152;
      switch(uVar7) {
      case 0:
        break;
      case 1:
        uVar9 = 0x544148;
        break;
      case 2:
        uVar9 = 0x494153;
        break;
      case 3:
        uVar9 = 0x504152;
        break;
      case 4:
        uVar9 = 0x504148;
        break;
      case 5:
        uVar9 = 0x504941;
        break;
      case 6:
        uVar9 = 0x444152;
        break;
      case 7:
        uVar9 = 0x444148;
        break;
      case 8:
        uVar9 = 0x444941;
        break;
      default:
        uStack_70 = uVar7;
        func_0x000107c60614(&UNK_11079a400,&uStack_70,&UNK_11079a400,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101897404);
        (*pcVar2)();
      case 0xffffffffffffffff:
        uVar8 = 0xe200000000000000;
        uVar9 = 0x414e;
      }
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar3);
      uVar3 = *(ulong *)(puVar1 + 0x10);
      puStack_68 = puVar1;
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar3) {
        func_0x000100403514(1 < *(ulong *)(puVar1 + 0x18),uVar3 + 1,1);
      }
      uVar6 = uVar6 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
      *(undefined8 *)(puStack_68 + uVar3 * 0x10 + 0x20) = uVar9;
      *(undefined8 *)(puStack_68 + uVar3 * 0x10 + 0x28) = uVar8;
    } while (uVar5 != uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
  return;
}



/* Entry: 1018978ec; end: 1018979b7;  */

bool FUN_1018978ec(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    lVar1 = lStack_48;
    func_0x000107c3d430();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    uVar2 = 0;
    func_0x00010468f7d4(0);
    lVar3 = lVar1;
    func_0x000107c5fc54(lVar1,uVar2);
    func_0x000107c61170(lVar1);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x98);
    *(long *)(unaff_x20 + 0x98) = lVar3;
    func_0x000107c6142c(uVar2);
    FUN_1018971c8();
    func_0x000107c615e8(lStack_48);
  }
  return lStack_48 != 0;
}



/* Entry: 1018979b8; end: 101897b9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018979b8(ulong *param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar7 = *(ulong *)(unaff_x20 + 0x98);
  uVar10 = uVar7 & 0xffffffffffffff8;
  if (uVar7 >> 0x3e == 0) {
    uVar8 = *(ulong *)(uVar10 + 0x10);
  }
  else {
    uVar8 = uVar10;
    if (0x7fffffffffffffff < uVar7) {
      uVar8 = uVar7;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar7);
  do {
    if (uVar8 == 0) {
      func_0x000107c6142c(uVar7);
      uVar7 = 0;
      uVar10 = 0;
      uVar4 = 0;
      uVar11 = 0;
      uVar9 = 1;
      goto LAB_101897b58;
    }
    bVar2 = SBORROW8(uVar8,1);
    uVar8 = uVar8 - 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101897b84);
      (*pcVar1)();
    }
    if ((uVar7 & 0xc000000000000001) == 0) {
      if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101897b88);
        (*pcVar1)();
      }
      if (*(ulong *)(uVar10 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101897b8c);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(uVar7 + 0x20 + uVar8 * 8);
      func_0x000107c61174();
    }
    else {
      uVar4 = uVar8;
      param_3 = uVar7;
      func_0x0001018ac454();
    }
    iVar3 = (int)*(undefined8 *)(uVar4 + _DAT_11308c458);
    func_0x000107c30b74();
    func_0x000107c61170(uVar4);
  } while (iVar3 != 6);
  if ((uVar7 & 0xc000000000000001) == 0) {
    uVar8 = *(ulong *)(uVar7 + 0x20 + uVar8 * 8);
    func_0x000107c61174();
  }
  else {
    param_3 = uVar7;
    func_0x0001018ac454();
  }
  func_0x000107c6142c(uVar7);
  uVar5 = *(ulong *)(uVar8 + _DAT_11308c458);
  func_0x000107c61174();
  uVar7 = uVar5;
  func_0x000107c30b78();
  uVar4 = uVar5;
  func_0x000107c30b7c();
  func_0x000107c61180();
  if (uVar4 == 0) {
    uVar10 = 0;
    uVar9 = 0;
    uVar11 = param_3;
  }
  else {
    uVar10 = uVar4;
    func_0x000107c5faec();
    uVar11 = param_3;
    func_0x000107c61170(uVar4);
    uVar9 = param_3;
  }
  uVar6 = uVar5;
  func_0x000107c30b80();
  func_0x000107c61180();
  if (uVar6 == 0) {
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar8);
    uVar4 = 0;
    uVar11 = 0;
  }
  else {
    uVar4 = uVar6;
    func_0x000107c5faec();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar8);
  }
  uVar7 = uVar7 & 0xffffffff;
LAB_101897b58:
  *param_1 = uVar7;
  param_1[1] = uVar10;
  param_1[2] = uVar9;
  param_1[3] = uVar4;
  param_1[4] = uVar11;
  return;
}



/* Entry: 101897ba0; end: 101897cf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101897ba0(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  uVar5 = *(ulong *)(unaff_x20 + 0x98);
  uVar7 = uVar5 & 0xffffffffffffff8;
  if (uVar5 >> 0x3e == 0) {
    uVar6 = *(ulong *)(uVar7 + 0x10);
  }
  else {
    uVar6 = uVar7;
    if (0x7fffffffffffffff < uVar5) {
      uVar6 = uVar5;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar5);
  do {
    if (uVar6 == 0) {
      func_0x000107c6142c(uVar5);
      uVar7 = 0;
      uVar5 = 2;
      goto LAB_101897cb8;
    }
    bVar2 = SBORROW8(uVar6,1);
    uVar6 = uVar6 - 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101897cd8);
      (*pcVar1)();
    }
    if ((uVar5 & 0xc000000000000001) == 0) {
      if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101897cdc);
        (*pcVar1)();
      }
      if (*(ulong *)(uVar7 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101897ce0);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(uVar5 + 0x20 + uVar6 * 8);
      func_0x000107c61174();
    }
    else {
      uVar4 = uVar6;
      func_0x0001018ac454(uVar6,uVar5);
    }
    iVar3 = (int)*(undefined8 *)(uVar4 + _DAT_11308c458);
    func_0x000107c30b74();
    func_0x000107c61170(uVar4);
  } while (iVar3 != 7);
  if ((uVar5 & 0xc000000000000001) == 0) {
    uVar6 = *(ulong *)(uVar5 + 0x20 + uVar6 * 8);
    func_0x000107c61174();
  }
  else {
    func_0x0001018ac454(uVar6,uVar5);
  }
  func_0x000107c6142c(uVar5);
  uVar4 = *(ulong *)(uVar6 + _DAT_11308c458);
  func_0x000107c61174(uVar4);
  uVar5 = uVar4;
  func_0x000107c30b8c();
  uVar7 = uVar4;
  func_0x000107c30b90(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  uVar5 = uVar5 & 0xffffffff;
LAB_101897cb8:
  auVar8._8_8_ = uVar7;
  auVar8._0_8_ = uVar5;
  return auVar8;
}



/* Entry: 101897cf4; end: 101897d53; -[_TtC25AdTrackParserServicesImpl21AdTrackAdReportParser parseWithTrackRequest:viewSeqNum:] */

void FUN_101897cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  func_0x000101897404(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101897d54; end: 101897da7;  */

void FUN_101897d54(void)

{
  long unaff_x20;
  
  func_0x000100400450(unaff_x20 + 0x10);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101897da8; end: 101897e8b;  */

undefined8 FUN_101897da8(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_10422e7fc)(param_2,param_1);
  return param_2;
}



/* Entry: 101897e8c; end: 101897ecb; -[_TtC25AdTrackParserServicesImpl27AdTrackChatFeedBannerParser adEventSymbols] */

void FUN_101897e8c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101897ecc; end: 101897f03; -[_TtC25AdTrackParserServicesImpl27AdTrackChatFeedBannerParser setAdEventSymbols:] */

void FUN_101897ecc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 101897f04; end: 10189885b;  */

/* WARNING: Possible PIC construction at 0x0001018980b0: Changing call to branch */

void FUN_101897f04(void)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lStack_70;
  undefined *puStack_68;
  
  lVar7 = *(long *)(unaff_x20 + 0x98);
  lVar8 = *(long *)(lVar7 + 0x10);
  if (lVar8 == 0) {
    lVar7 = *(long *)(unaff_x20 + 0x90);
    *(undefined **)(unaff_x20 + 0x90) = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61434(lVar7);
    func_0x000100403514(0,lVar8,0);
    plVar10 = (long *)(lVar7 + 0x28);
    do {
      puVar2 = puStack_68;
      lVar4 = plVar10[-1];
      lVar5 = *plVar10;
      func_0x000107c61174(lVar4);
      func_0x000107c61174();
      lVar6 = lVar5;
      func_0x000107c30d04();
      if (lVar6 < 4) {
        if (lVar6 < 2) {
          if (lVar6 == 0) {
            uVar11 = 0xe200000000000000;
            uVar9 = 0x414e;
          }
          else {
            if (lVar6 != 1) {
LAB_1018980dc:
              lStack_70 = lVar6;
              func_0x000107c60614(&UNK_11079a698,&lStack_70,&UNK_11079a698,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101898100);
              (*pcVar3)();
            }
            uVar11 = 0xe200000000000000;
            uVar9 = 0x5642;
          }
        }
        else if (lVar6 == 2) {
          uVar11 = 0xe200000000000000;
          uVar9 = 0x5442;
        }
        else {
          if (lVar6 != 3) goto LAB_1018980dc;
          uVar11 = 0xe300000000000000;
          uVar9 = 0x504c42;
        }
      }
      else if (lVar6 < 6) {
        if (lVar6 == 4) {
          uVar9 = 0x565346;
          uVar11 = 0xe300000000000000;
        }
        else {
          if (lVar6 != 5) goto LAB_1018980dc;
          uVar9 = 0x505845;
          uVar11 = 0xe300000000000000;
        }
      }
      else if (lVar6 == 6) {
        uVar11 = 0xe300000000000000;
        uVar9 = 0x564542;
      }
      else {
        if (lVar6 != 7) goto LAB_1018980dc;
        uVar11 = 0xe300000000000000;
        uVar9 = 0x545642;
      }
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar4);
      uVar1 = *(ulong *)(puVar2 + 0x10);
      puStack_68 = puVar2;
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        func_0x000100403514(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
      }
      plVar10 = plVar10 + 2;
      *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puStack_68 + uVar1 * 0x10 + 0x20) = uVar9;
      *(undefined8 *)(puStack_68 + uVar1 * 0x10 + 0x28) = uVar11;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar7);
  return;
}



/* Entry: 10189885c; end: 1018988bb; -[_TtC25AdTrackParserServicesImpl27AdTrackChatFeedBannerParser parseWithTrackRequest:viewSeqNum:] */

void FUN_10189885c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  func_0x000101898100(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1018988bc; end: 101898bef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1018988bc(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined *puStack_68;
  
  if ((param_1 != 0xb) &&
     (func_0x0001000d224c(&puStack_68), puVar2 = puStack_68, puStack_68 != (undefined *)0x0)) {
    func_0x0001000d224c(&puStack_68);
    puVar3 = puStack_68;
    if (puStack_68 != (undefined *)0x0) {
      uVar6 = param_3;
      func_0x000107c5fadc(param_3,param_4);
      func_0x000107c42f50(puVar3);
      func_0x000107c61170(uVar6);
      func_0x000107c5fadc(param_3,param_4);
      puVar12 = puVar2;
      func_0x000107c5b820();
      func_0x000107c61180();
      func_0x000107c61170(param_3);
      uVar6 = 0;
      func_0x00010469e958(0);
      puVar7 = puVar12;
      func_0x000107c5fc54(puVar12,uVar6);
      func_0x000107c61170(puVar12);
      if ((ulong)puVar7 >> 0x3e == 0) {
        puVar12 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
        if (puVar12 == (undefined *)0x0) goto LAB_101898ac0;
LAB_1018989a8:
        puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x0001018ace5c(0,(ulong)puVar12 & ((long)puVar12 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)puVar12 < 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101898bf0);
          (*pcVar5)();
        }
        puVar13 = (undefined *)0x0;
        do {
          puVar10 = puStack_68;
          if (((ulong)puVar7 & 0xc000000000000001) == 0) {
            puVar8 = *(undefined **)(puVar7 + (long)puVar13 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            puVar8 = puVar13;
            func_0x0001018ac5f0(puVar13,puVar7);
          }
          uVar6 = *(undefined8 *)(puVar8 + _DAT_11308cae8);
          uVar15 = *(undefined8 *)(puVar8 + _DAT_11308caf0);
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61170(puVar8);
          uVar1 = *(ulong *)(puVar10 + 0x10);
          puStack_68 = puVar10;
          if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
            func_0x0001018ace5c(1 < *(ulong *)(puVar10 + 0x18),uVar1 + 1,1);
          }
          puVar10 = puStack_68;
          puVar13 = puVar13 + 1;
          *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
          *(undefined8 *)(puStack_68 + uVar1 * 0x10 + 0x20) = uVar6;
          *(undefined8 *)(puStack_68 + uVar1 * 0x10 + 0x28) = uVar15;
        } while (puVar12 != puVar13);
        func_0x000107c6142c(puVar7);
      }
      else {
        puVar12 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar7) {
          puVar12 = puVar7;
        }
        func_0x000107c60480();
        if (puVar12 != (undefined *)0x0) goto LAB_1018989a8;
LAB_101898ac0:
        func_0x000107c6142c(puVar7);
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      lVar11 = *(long *)(puVar10 + 0x10) + 1;
      lVar4 = *(long *)(puVar10 + 0x10) << 4;
      do {
        lVar14 = lVar4;
        lVar11 = lVar11 + -1;
        if (lVar11 == 0) {
          func_0x000107c615e8(puVar3);
          func_0x000107c615e8(puVar2);
          func_0x000107c6142c(puVar10);
          goto LAB_101898b68;
        }
        if (*(long *)(puVar10 + 0x10) < lVar11) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101898bec);
          (*pcVar5)();
        }
        uVar6 = *(undefined8 *)(puVar10 + lVar14 + 0x10);
        uVar15 = *(undefined8 *)(puVar10 + lVar14 + 0x18);
        func_0x000107c61174(uVar6);
        func_0x000107c61174();
        uVar9 = uVar15;
        func_0x000107c30d04();
        if ((int)uVar9 == 2) {
          func_0x000107c61170(uVar15);
          func_0x000107c61170(uVar6);
          break;
        }
        uVar9 = uVar15;
        func_0x000107c30d04();
        func_0x000107c61170(uVar15);
        func_0x000107c61170(uVar6);
        lVar4 = lVar14 + -0x10;
      } while ((int)uVar9 != 3);
      uVar6 = *(undefined8 *)(puVar10 + lVar14 + 0x10);
      uVar15 = *(undefined8 *)(puVar10 + lVar14 + 0x18);
      func_0x000107c61174(uVar6);
      func_0x000107c61174(uVar15);
      func_0x000107c615e8(puVar3);
      func_0x000107c615e8(puVar2);
      func_0x000107c6142c(puVar10);
      goto LAB_101898b70;
    }
    func_0x000107c615e8(puVar2);
  }
LAB_101898b68:
  uVar6 = 0;
  uVar15 = 0;
LAB_101898b70:
  auVar16._8_8_ = uVar15;
  auVar16._0_8_ = uVar6;
  return auVar16;
}



/* Entry: 101898bf0; end: 101898c43;  */

void FUN_101898bf0(void)

{
  long unaff_x20;
  
  func_0x000100400450(unaff_x20 + 0x10);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101898c44; end: 101898c57;  */

void FUN_101898c44(void)

{
  long in_x3;
  
  if (in_x3 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(in_x3);
  return;
}



/* Entry: 101898c58; end: 101898c83;  */

/* WARNING: Possible PIC construction at 0x000101898c6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101898c70) */

void FUN_101898c58(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 101898c84; end: 101898cc3; -[_TtC25AdTrackParserServicesImpl25AdTrackChatFeedCellParser adEventSymbols] */

void FUN_101898c84(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101898cc4; end: 101898cfb; -[_TtC25AdTrackParserServicesImpl25AdTrackChatFeedCellParser setAdEventSymbols:] */

void FUN_101898cc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 101898cfc; end: 10189934b;  */

/* WARNING: Possible PIC construction at 0x000101898ed0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101898ed4) */

void FUN_101898cfc(void)

{
  ulong uVar1;
  undefined2 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined2 *puVar13;
  long lStack_70;
  undefined *puStack_68;
  
  lVar10 = *(long *)(unaff_x20 + 0x98);
  lVar11 = *(long *)(lVar10 + 0x10);
  if (lVar11 == 0) {
    lVar10 = *(long *)(unaff_x20 + 0x90);
    *(undefined **)(unaff_x20 + 0x90) = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61434(lVar10);
    func_0x000100403514(0,lVar11,0);
    puVar13 = (undefined2 *)(lVar10 + 0x38);
    do {
      puVar3 = puStack_68;
      uVar5 = *(undefined8 *)(puVar13 + -0xc);
      lVar6 = *(long *)(puVar13 + -8);
      uVar9 = *(undefined8 *)(puVar13 + -4);
      uVar2 = *puVar13;
      func_0x000107c61174(uVar5);
      func_0x000107c61174();
      FUN_10189a58c(uVar9,uVar2);
      lVar7 = lVar6;
      func_0x000107c30ccc();
      if (lVar7 < 4) {
        if (lVar7 < 2) {
          if (lVar7 == 0) {
            uVar12 = 0xe200000000000000;
            uVar8 = 0x414e;
          }
          else {
            if (lVar7 != 1) {
LAB_101898f00:
              lStack_70 = lVar7;
              func_0x000107c60614(&UNK_11079a698,&lStack_70,&UNK_11079a698,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x101898f24);
              (*pcVar4)();
            }
            uVar8 = 0x565353;
            uVar12 = 0xe300000000000000;
          }
        }
        else if (lVar7 == 2) {
          uVar12 = 0xe300000000000000;
          uVar8 = 0x545353;
        }
        else {
          if (lVar7 != 3) goto LAB_101898f00;
          uVar12 = 0xe400000000000000;
          uVar8 = 0x504c5353;
        }
      }
      else if (lVar7 < 6) {
        if (lVar7 == 4) {
          uVar12 = 0xe300000000000000;
          uVar8 = 0x565346;
        }
        else {
          if (lVar7 != 5) goto LAB_101898f00;
          uVar12 = 0xe300000000000000;
          uVar8 = 0x505845;
        }
      }
      else if (lVar7 == 6) {
        uVar12 = 0xe400000000000000;
        uVar8 = 0x56455353;
      }
      else {
        if (lVar7 != 7) goto LAB_101898f00;
        uVar12 = 0xe400000000000000;
        uVar8 = 0x54565353;
      }
      func_0x000107c61170(lVar6);
      func_0x000107c61170(uVar5);
      func_0x00010189a59c(uVar9,uVar2);
      uVar1 = *(ulong *)(puVar3 + 0x10);
      puStack_68 = puVar3;
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
        func_0x000100403514(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
      }
      puVar13 = puVar13 + 0x10;
      *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puStack_68 + uVar1 * 0x10 + 0x20) = uVar8;
      *(undefined8 *)(puStack_68 + uVar1 * 0x10 + 0x28) = uVar12;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar10);
  return;
}



/* Entry: 10189934c; end: 101899d0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10189934c(undefined8 *param_1,undefined8 param_2,undefined *param_3,long param_4,
                  int param_5,long param_6,long param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long unaff_x20;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined1 uVar18;
  ushort uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined2 uVar23;
  undefined8 uVar24;
  long lVar25;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined1 uStack_1a8;
  long lStack_198;
  long lStack_190;
  long lStack_160;
  long lStack_148;
  undefined1 auStack_140 [64];
  undefined1 uStack_100;
  undefined7 uStack_ff;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined1 uStack_d7;
  undefined1 uStack_d6;
  undefined1 uStack_d5;
  undefined4 uStack_d4;
  long lStack_d0;
  long lStack_c8;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  ulong uStack_80;
  
  func_0x0001000d224c(&puStack_b8);
  puVar2 = puStack_b8;
  if (puStack_b8 == (undefined *)0x0) {
    lStack_c8 = 1;
    lStack_d0 = 0;
    uVar6 = 0;
    lStack_f8 = 0;
    lStack_f0 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    uVar24 = 0;
    goto LAB_101899cb0;
  }
  puVar5 = param_3;
  func_0x000107c5fadc(param_3,param_4);
  puVar21 = puVar2;
  puVar12 = puVar5;
  func_0x000107c5b848();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar6 = 0;
  func_0x00010469f074(0);
  puVar5 = puVar21;
  func_0x000107c5fc54(puVar21,uVar6);
  func_0x000107c61170(puVar21);
  if ((ulong)puVar5 >> 0x3e == 0) {
    puVar21 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar21 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar5) {
      puVar21 = puVar5;
    }
    func_0x000107c60480();
  }
  if (puVar21 == (undefined *)0x0) {
    func_0x000107c6142c(puVar5);
    puVar22 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar12 = (undefined *)0x0;
    func_0x0001018ace90(0,(ulong)puVar21 & ((long)puVar21 >> 0x3f ^ 0xffffffffffffffffU));
    if ((long)puVar21 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101899cfc);
      (*pcVar3)();
    }
    puVar20 = (undefined *)0x0;
    do {
      puVar22 = puStack_b8;
      if (((ulong)puVar5 & 0xc000000000000001) == 0) {
        puVar7 = *(undefined **)(puVar5 + (long)puVar20 * 8 + 0x20);
        puVar10 = puVar5;
        func_0x000107c61174();
        uVar19 = (ushort)puVar10;
      }
      else {
        puVar7 = puVar20;
        puVar10 = puVar5;
        func_0x0001018ac78c();
        uVar19 = (ushort)puVar10;
      }
      uVar6 = *(undefined8 *)(puVar7 + _DAT_11308cb20);
      uVar24 = *(undefined8 *)(puVar7 + _DAT_11308cb28);
      lVar13 = *(long *)(puVar7 + _DAT_11308cb30);
      if (lVar13 == 0) {
        func_0x000107c61174(uVar6);
        func_0x000107c61174(uVar24);
        func_0x000107c61170(puVar7);
        uVar19 = 0;
        lVar13 = 1;
      }
      else {
        func_0x000107c61174(uVar6);
        func_0x000107c61174(uVar24);
        func_0x000107c61174();
        func_0x00010469f8c4();
        func_0x000107c61170(puVar7);
        uVar19 = uVar19 & 0x1ff;
      }
      uVar9 = *(ulong *)(puVar22 + 0x10);
      puStack_b8 = puVar22;
      if (*(ulong *)(puVar22 + 0x18) >> 1 <= uVar9) {
        puVar12 = (undefined *)0x1;
        func_0x0001018ace90(1 < *(ulong *)(puVar22 + 0x18),uVar9 + 1);
      }
      puVar22 = puStack_b8;
      puVar20 = puVar20 + 1;
      *(ulong *)(puStack_b8 + 0x10) = uVar9 + 1;
      *(undefined8 *)(puStack_b8 + uVar9 * 0x20 + 0x20) = uVar6;
      *(undefined8 *)(puStack_b8 + uVar9 * 0x20 + 0x28) = uVar24;
      *(long *)(puStack_b8 + uVar9 * 0x20 + 0x30) = lVar13;
      *(ushort *)(puStack_b8 + uVar9 * 0x20 + 0x38) = uVar19;
    } while (puVar21 != puVar20);
    func_0x000107c6142c(puVar5);
  }
  uVar6 = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined **)(unaff_x20 + 0x98) = puVar22;
  func_0x000107c6142c(uVar6);
  FUN_101898cfc();
  puVar5 = param_3;
  lVar11 = param_4;
  FUN_101899d6c();
  lVar13 = param_7;
  if (param_5 == 0xb) {
    lStack_148 = 0;
    puVar22 = (undefined *)0x0;
    uVar23 = 0;
    puVar21 = (undefined *)0x0;
    if (puVar5 == (undefined *)0x0) goto LAB_10189980c;
LAB_1018995f4:
    lStack_a0 = CONCAT62(lStack_a0._2_6_,(short)param_7);
    uStack_90 = 0;
    lStack_88 = 0;
    uStack_98 = 0;
    uStack_80 = uStack_80 & 0xffffffffffff0000;
    puVar7 = puVar5;
    puStack_b8 = puVar5;
    lStack_b0 = lVar11;
    puStack_a8 = puVar12;
    func_0x000107c61174(puVar5);
    lVar17 = lVar11;
    func_0x000107c61174();
    FUN_10189a58c(puVar12,param_7);
    puVar20 = &UNK_10d9900b0;
    FUN_10189a5ac(&puStack_b8,0x112dcd930,&UNK_10d9900b0);
    func_0x000107c61174(puVar7);
    func_0x000107c61174();
    FUN_10189a58c(puVar12,param_7);
    func_0x000107c61170(puVar7);
    func_0x00010189a59c(puVar12,param_7);
    lStack_190 = lVar17;
    func_0x000107c30cd0();
    func_0x000107c61170(lVar17);
    if (lStack_190 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101899d00);
      (*pcVar3)();
    }
    func_0x000107c61174(puVar7);
    func_0x000107c61174();
    FUN_10189a58c(puVar12,param_7);
    func_0x000107c61170(puVar7);
    func_0x00010189a59c(puVar12,param_7);
    lStack_198 = lVar17;
    func_0x000107c30cd4();
    func_0x000107c61170(lVar17);
    if (lStack_198 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101899d04);
      (*pcVar3)();
    }
    lStack_1b0 = lVar17;
    func_0x000107c30cd8();
    func_0x000107c61180();
    if (lStack_1b0 == 0) {
      if (puVar21 == (undefined *)0x0) {
        lStack_1b0 = 0;
      }
      else {
        lStack_1b0 = lStack_148;
        func_0x000107c30cd8();
        func_0x000107c61180();
      }
    }
    func_0x000107c61174(puVar7);
    func_0x000107c61174();
    FUN_10189a58c(puVar12,param_7);
    func_0x000107c61170(puVar7);
    lStack_1c0 = param_7;
    func_0x00010189a59c(puVar12);
    lVar14 = lVar17;
    func_0x000107c30cdc();
    uStack_1a8 = (undefined1)lVar14;
    func_0x000107c61170(lVar17);
    func_0x000107c30cfc();
    func_0x000107c61180();
    if (lVar17 != 0) goto LAB_101899970;
    lVar17 = lStack_148;
    if (puVar21 != (undefined *)0x0) goto LAB_10189995c;
LAB_101899988:
    lStack_1c0 = 0;
    lStack_1b8 = 0;
  }
  else {
    lVar15 = *(long *)(unaff_x20 + 0x98);
    lVar14 = *(long *)(lVar15 + 0x10);
    func_0x000107c61434(lVar15);
    lVar17 = lVar14 + 1;
    lVar14 = lVar14 << 5;
    do {
      lVar17 = lVar17 + -1;
      if (lVar17 == 0) {
        func_0x000107c6142c(lVar15);
        puVar21 = (undefined *)0x0;
        lStack_148 = 0;
        puVar22 = (undefined *)0x0;
        uVar23 = 0;
        goto LAB_1018997fc;
      }
      if (*(long *)(lVar15 + 0x10) < lVar17) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101899ce0);
        (*pcVar3)();
      }
      lVar25 = lVar14 + -0x20;
      puVar1 = (undefined8 *)(lVar15 + lVar14);
      uVar6 = *puVar1;
      uVar24 = puVar1[1];
      uVar16 = puVar1[2];
      uVar23 = *(undefined2 *)(puVar1 + 3);
      func_0x000107c61174(uVar6);
      func_0x000107c61174();
      FUN_10189a58c(uVar16,uVar23);
      uVar8 = uVar24;
      func_0x000107c30ccc();
      func_0x000107c61170(uVar24);
      func_0x000107c61170(uVar6);
      func_0x00010189a59c(uVar16,uVar23);
      lVar14 = lVar25;
    } while ((int)uVar8 != 2);
    lVar25 = lVar15 + lVar25;
    puVar21 = *(undefined **)(lVar25 + 0x20);
    lStack_148 = *(long *)(lVar25 + 0x28);
    puVar22 = *(undefined **)(lVar25 + 0x30);
    uVar23 = *(undefined2 *)(lVar25 + 0x38);
    func_0x000107c61174();
    func_0x000107c61174();
    FUN_10189a58c(puVar22,uVar23);
    func_0x000107c6142c(lVar15);
LAB_1018997fc:
    if (puVar5 != (undefined *)0x0) goto LAB_1018995f4;
LAB_10189980c:
    if (puVar21 == (undefined *)0x0) {
      func_0x000107c615e8(puVar2);
      lStack_c8 = 1;
      lStack_d0 = 0;
      uVar6 = 0;
      lStack_f8 = 0;
      lStack_f0 = 0;
      lStack_e8 = 0;
      uStack_e0 = 0;
      uVar24 = 0;
      goto LAB_101899cb0;
    }
    lStack_b0 = lStack_148;
    lStack_a0 = CONCAT62(lStack_a0._2_6_,uVar23);
    uStack_90 = 0;
    lStack_88 = 0;
    uStack_98 = 0;
    uStack_80 = uStack_80 & 0xffffffffffff0000;
    puStack_b8 = puVar21;
    puStack_a8 = puVar22;
    func_0x000107c61174(puVar21);
    lVar17 = lStack_148;
    func_0x000107c61174();
    FUN_10189a58c(puVar22,uVar23);
    lStack_1c0 = 0x112dcd930;
    puVar20 = &UNK_10d9900b0;
    FUN_10189a5ac(&puStack_b8,0x112dcd930,&UNK_10d9900b0);
    lStack_190 = lVar17;
    func_0x000107c30cd0();
    if (lStack_190 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101899d08);
      (*pcVar3)();
    }
    lStack_198 = lVar17;
    func_0x000107c30cd4();
    if (lStack_198 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101899d0c);
      (*pcVar3)();
    }
    lStack_1b0 = lVar17;
    func_0x000107c30cd8();
    func_0x000107c61180();
    lVar14 = lVar17;
    func_0x000107c30cdc();
    uStack_1a8 = (undefined1)lVar14;
LAB_10189995c:
    func_0x000107c30cfc();
    func_0x000107c61180();
    if (lVar17 == 0) goto LAB_101899988;
LAB_101899970:
    lStack_1b8 = lVar17;
    func_0x000107c5faec();
    func_0x000107c61170(lVar17);
  }
  if (param_5 == 0xb) {
    func_0x0001000d224c(&puStack_b8);
    lVar13 = lStack_b0;
    puVar7 = puStack_b8;
    puVar20 = puStack_b8;
    func_0x000107c614f0(puStack_b8);
    uVar9 = 0xd000000000000045;
    func_0x00010403c628(0xd000000000000045,0x800000010efbc910,puVar20,lVar13);
    func_0x000107c615e8(puVar7);
    if ((uVar9 & 1) == 0) goto LAB_101899a04;
    lVar13 = 0;
    puVar20 = (undefined *)0x0;
    lStack_160 = 0;
    param_3 = (undefined *)0x0;
LAB_101899b48:
    bVar4 = false;
    lVar17 = 0;
LAB_101899b4c:
    uVar18 = 2;
    if (lStack_1b0 == 0) goto LAB_101899bd4;
LAB_101899b58:
    func_0x000107c61174();
    func_0x000107c4223c();
    func_0x000107c615e8(puVar2);
    FUN_10189a5ec(puVar21,lStack_148,puVar22,uVar23);
    func_0x000107c61170(lStack_1b0);
    FUN_10189a5ec(param_3,lStack_160,puVar20,lVar13);
    FUN_10189a5ec(puVar5,lVar11,puVar12,param_7);
    func_0x000107c61170(lStack_1b0);
    uStack_d8 = 0;
    uStack_d5 = uVar18;
  }
  else {
LAB_101899a04:
    func_0x00010189a0ec();
    lStack_160 = param_4;
    if (param_3 == (undefined *)0x0) goto LAB_101899b48;
    puVar7 = param_3;
    func_0x000107c61174(param_3);
    func_0x000107c61174();
    FUN_10189a58c(puVar20,lVar13);
    func_0x000107c61170(puVar7);
    func_0x00010189a59c(puVar20,lVar13);
    lVar17 = param_4;
    func_0x000107c30ccc();
    func_0x000107c61170(param_4);
    bVar4 = (int)lVar17 == 2;
    func_0x000107c61174(puVar7);
    func_0x000107c61174();
    FUN_10189a58c(puVar20,lVar13);
    func_0x000107c61170(puVar7);
    func_0x00010189a59c(puVar20,lVar13);
    lVar17 = param_4;
    func_0x000107c30ce0();
    func_0x000107c61170(param_4);
    if ((int)lVar17 != 5) goto LAB_101899b4c;
    func_0x000107c61174(puVar7);
    func_0x000107c61174();
    FUN_10189a58c(puVar20,lVar13);
    func_0x000107c61170(puVar7);
    func_0x00010189a59c(puVar20,lVar13);
    lVar14 = param_4;
    func_0x000107c30cf8();
    func_0x000107c61180();
    func_0x000107c61170(param_4);
    if (lVar14 == 0) {
      uVar18 = 2;
    }
    else {
      lVar15 = lVar14;
      func_0x000107c3ebcc();
      uVar18 = (undefined1)lVar15;
      func_0x000107c61170(lVar14);
    }
    if (lStack_1b0 != 0) goto LAB_101899b58;
LAB_101899bd4:
    func_0x000107c615e8(puVar2);
    FUN_10189a5ec(puVar21,lStack_148,puVar22,uVar23);
    FUN_10189a5ec(param_3,lStack_160,puVar20,lVar13);
    FUN_10189a5ec(puVar5,lVar11,puVar12,param_7);
    uStack_d8 = 1;
    param_2 = 0;
    uStack_d5 = uVar18;
  }
  uVar6 = uStack_90;
  if (param_6 == 0) {
    uStack_d6 = 0;
  }
  else {
    uStack_d6 = *(undefined1 *)(param_6 + _DAT_11308ef18);
  }
  lStack_f0 = lStack_190;
  lStack_e8 = lStack_198;
  uStack_d7 = uStack_1a8;
  lStack_d0 = lStack_1b8;
  lStack_c8 = lStack_1c0;
  puStack_b8 = (undefined *)CONCAT71(puStack_b8._1_7_,bVar4);
  puStack_a8 = (undefined *)lStack_190;
  lStack_a0 = lStack_198;
  uStack_90._4_4_ = SUB84(uVar6,4);
  uStack_90._0_4_ = CONCAT13(uStack_d5,CONCAT12(uStack_d6,CONCAT11(uStack_1a8,uStack_d8)));
  lStack_88 = lStack_1b8;
  uStack_80 = lStack_1c0;
  uStack_100 = bVar4;
  lStack_f8 = lVar17;
  uStack_e0 = param_2;
  lStack_b0 = lVar17;
  uStack_98 = param_2;
  FUN_10189a634(&uStack_100,auStack_140);
  func_0x00010189a670(&puStack_b8);
  uVar6 = CONCAT71(uStack_ff,uStack_100);
  uVar24 = CONCAT44(uStack_d4,CONCAT13(uStack_d5,CONCAT12(uStack_d6,CONCAT11(uStack_d7,uStack_d8))))
  ;
LAB_101899cb0:
  param_1[1] = lStack_f8;
  *param_1 = uVar6;
  param_1[3] = lStack_e8;
  param_1[2] = lStack_f0;
  param_1[5] = uVar24;
  param_1[4] = uStack_e0;
  param_1[7] = lStack_c8;
  param_1[6] = lStack_d0;
  return;
}



/* Entry: 101899d0c; end: 101899d6b; -[_TtC25AdTrackParserServicesImpl25AdTrackChatFeedCellParser parseWithTrackRequest:viewSeqNum:] */

void FUN_101899d0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  func_0x000101898f24(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101899d6c; end: 10189a4e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101899d6c(undefined8 param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ushort uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  undefined2 *puVar20;
  undefined *puStack_68;
  
  func_0x0001000d224c(&puStack_68);
  puVar3 = puStack_68;
  if (puStack_68 == (undefined *)0x0) {
    return 0;
  }
  func_0x0001000d224c(&puStack_68);
  puVar4 = puStack_68;
  if (puStack_68 == (undefined *)0x0) {
    func_0x000107c615e8(puVar3);
    return 0;
  }
  uVar6 = param_1;
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c42f50(puVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c5fadc(param_1,param_2);
  puVar14 = puVar3;
  func_0x000107c5b844();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  uVar6 = 0;
  func_0x00010469f074(0);
  puVar7 = puVar14;
  func_0x000107c5fc54(puVar14,uVar6);
  func_0x000107c61170(puVar14);
  if ((ulong)puVar7 >> 0x3e == 0) {
    puVar14 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar14 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar7) {
      puVar14 = puVar7;
    }
    func_0x000107c60480();
  }
  if (puVar14 == (undefined *)0x0) {
    func_0x000107c6142c(puVar7);
    uVar12 = *(ulong *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar10 = (undefined *)((ulong)puVar14 & ((long)puVar14 >> 0x3f ^ 0xffffffffffffffffU));
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001018ace90(0,puVar10,0);
    if ((long)puVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10189a0ec);
      (*pcVar5)();
    }
    puVar16 = (undefined *)0x0;
    do {
      puVar2 = puStack_68;
      if (((ulong)puVar7 & 0xc000000000000001) == 0) {
        puVar8 = *(undefined **)(puVar7 + (long)puVar16 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar8 = puVar16;
        puVar10 = puVar7;
        func_0x0001018ac78c();
      }
      uVar6 = *(undefined8 *)(puVar8 + _DAT_11308cb20);
      uVar17 = *(undefined8 *)(puVar8 + _DAT_11308cb28);
      lVar19 = *(long *)(puVar8 + _DAT_11308cb30);
      if (lVar19 == 0) {
        func_0x000107c61174(uVar6);
        func_0x000107c61174(uVar17);
        func_0x000107c61170(puVar8);
        uVar13 = 0;
        lVar19 = 1;
      }
      else {
        func_0x000107c61174(uVar6);
        func_0x000107c61174(uVar17);
        func_0x000107c61174();
        func_0x00010469f8c4();
        puVar11 = puVar10;
        func_0x000107c61170(puVar8);
        uVar13 = (ushort)puVar10 & 0x1ff;
        puVar10 = puVar11;
      }
      uVar12 = *(ulong *)(puVar2 + 0x10);
      puVar8 = (undefined *)(uVar12 + 1);
      puStack_68 = puVar2;
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar12) {
        puVar10 = puVar8;
        func_0x0001018ace90(1 < *(ulong *)(puVar2 + 0x18),puVar8,1);
      }
      puVar2 = puStack_68;
      puVar16 = puVar16 + 1;
      *(undefined **)(puStack_68 + 0x10) = puVar8;
      *(undefined8 *)(puStack_68 + uVar12 * 0x20 + 0x20) = uVar6;
      *(undefined8 *)(puStack_68 + uVar12 * 0x20 + 0x28) = uVar17;
      *(long *)(puStack_68 + uVar12 * 0x20 + 0x30) = lVar19;
      *(ushort *)(puStack_68 + uVar12 * 0x20 + 0x38) = uVar13;
    } while (puVar14 != puVar16);
    func_0x000107c6142c(puVar7);
    uVar12 = *(ulong *)(puVar2 + 0x10);
  }
  if (uVar12 != 0) {
    uVar18 = 0;
    puVar20 = (undefined2 *)(puVar2 + 0x38);
    do {
      if (*(ulong *)(puVar2 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10189a0e8);
        (*pcVar5)();
      }
      uVar6 = *(undefined8 *)(puVar20 + -0xc);
      uVar17 = *(undefined8 *)(puVar20 + -8);
      uVar15 = *(undefined8 *)(puVar20 + -4);
      uVar1 = *puVar20;
      func_0x000107c61174(uVar6);
      func_0x000107c61174();
      FUN_10189a58c(uVar15,uVar1);
      uVar9 = uVar17;
      func_0x000107c30ccc();
      if ((int)uVar9 == 1) {
        func_0x000107c615e8(puVar4);
        func_0x000107c615e8(puVar3);
        func_0x000107c6142c(puVar2);
        return uVar6;
      }
      func_0x000107c61170(uVar17);
      func_0x000107c61170(uVar6);
      uVar18 = uVar18 + 1;
      func_0x00010189a59c(uVar15,uVar1);
      puVar20 = puVar20 + 0x10;
    } while (uVar12 != uVar18);
  }
  func_0x000107c615e8(puVar4);
  func_0x000107c615e8(puVar3);
  func_0x000107c6142c(puVar2);
  return 0;
}



/* Entry: 10189a4e8; end: 10189a53b;  */

void FUN_10189a4e8(void)

{
  long unaff_x20;
  
  func_0x000100400450(unaff_x20 + 0x10);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10189a53c; end: 10189a58b;  */

undefined8 FUN_10189a53c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112dcd928;
  func_0x0001000285a8(0x112dcd928,&UNK_10d9900a0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10189a58c; end: 10189a5ab;  */

void FUN_10189a58c(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 10189a5ac; end: 10189a5eb;  */

undefined8 FUN_10189a5ac(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10189a5ec; end: 10189a633;  */

void FUN_10189a5ec(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_1 == 0) {
    return;
  }
  func_0x000107c61170();
  func_0x000107c61170(param_2);
  if (param_3 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3,param_4);
  return;
}



/* Entry: 10189a634; end: 10189a6a3;  */

undefined8 FUN_10189a634(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_10420f6c4)(param_2,param_1);
  return param_2;
}



/* Entry: 10189a6a4; end: 10189a6e3; -[_TtC25AdTrackParserServicesImpl25AdTrackIndexedStoryParser adEventSymbols] */

void FUN_10189a6a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10189a6e4; end: 10189a71b; -[_TtC25AdTrackParserServicesImpl25AdTrackIndexedStoryParser setAdEventSymbols:] */

void FUN_10189a6e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 10189a71c; end: 10189ab93;  */

/* WARNING: Possible PIC construction at 0x00010189a7f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010189a894: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010189a9ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010189aa18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010189a9b0) */
/* WARNING: Removing unreachable block (ram,0x00010189a898) */
/* WARNING: Removing unreachable block (ram,0x00010189a7f4) */
/* WARNING: Removing unreachable block (ram,0x00010189a8c4) */
/* WARNING: Removing unreachable block (ram,0x00010189a850) */
/* WARNING: Removing unreachable block (ram,0x00010189a8e0) */
/* WARNING: Removing unreachable block (ram,0x00010189a8e4) */
/* WARNING: Removing unreachable block (ram,0x00010189a85c) */
/* WARNING: Removing unreachable block (ram,0x00010189a8f0) */
/* WARNING: Removing unreachable block (ram,0x00010189a864) */
/* WARNING: Removing unreachable block (ram,0x00010189ab50) */
/* WARNING: Removing unreachable block (ram,0x00010189a90c) */
/* WARNING: Removing unreachable block (ram,0x00010189a9e4) */
/* WARNING: Removing unreachable block (ram,0x00010189a9f8) */
/* WARNING: Removing unreachable block (ram,0x00010189a9a0) */
/* WARNING: Removing unreachable block (ram,0x00010189a86c) */
/* WARNING: Removing unreachable block (ram,0x00010189ab90) */
/* WARNING: Removing unreachable block (ram,0x00010189a874) */
/* WARNING: Removing unreachable block (ram,0x00010189aa1c) */

void FUN_10189a71c(undefined8 param_1)

{
  long lVar1;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = 0;
  func_0x00010423cab0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  FUN_10189ab94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 10189ab94; end: 10189ac5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10189ab94(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_40);
  lVar1 = _DAT_113815200;
  lVar4 = *(long *)(param_1 + _DAT_11306b528);
  if (*(int *)(lVar4 + _DAT_113815200) == 0x16) {
    uVar2 = uStack_40;
    func_0x000107c614f0(uStack_40);
    uVar3 = 0xd000000000000029;
    func_0x00010403c628(0xd000000000000029,0x800000010efbbb80,uVar2,uStack_38);
    func_0x000107c615e8(uStack_40);
    if ((uVar3 & 1) != 0) {
      return;
    }
  }
  else {
    func_0x000107c615e8(uStack_40);
  }
  if (*(int *)(lVar4 + lVar1) == 0x16) {
    func_0x000107c497e4(lVar4);
  }
  return;
}



/* Entry: 10189ac60; end: 10189af6f;  */

void FUN_10189ac60(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_5b98 [2936];
  undefined8 uStack_5020;
  undefined8 uStack_5018;
  undefined8 uStack_5010;
  undefined8 uStack_5008;
  undefined8 uStack_5000;
  undefined8 uStack_4ff8;
  undefined8 uStack_4ff0;
  undefined8 uStack_4fe8;
  undefined8 uStack_4fe0;
  undefined8 uStack_4fd8;
  undefined8 uStack_4fd0;
  undefined8 uStack_4fc8;
  undefined8 uStack_4fc0;
  undefined1 auStack_4fb8 [2832];
  undefined1 auStack_44a8 [2936];
  undefined8 uStack_3930;
  undefined8 uStack_3928;
  undefined8 uStack_3920;
  undefined8 uStack_3918;
  undefined8 uStack_3910;
  undefined8 uStack_3908;
  undefined8 uStack_3900;
  undefined8 uStack_38f8;
  undefined8 uStack_38f0;
  undefined8 uStack_38e8;
  undefined8 uStack_38e0;
  undefined8 uStack_38d8;
  undefined8 uStack_38d0;
  undefined1 auStack_38c8 [2840];
  undefined1 auStack_2db0 [2832];
  undefined8 uStack_22a0;
  undefined8 uStack_2298;
  undefined8 uStack_2290;
  undefined8 uStack_2288;
  undefined8 uStack_2280;
  undefined8 uStack_2278;
  undefined8 uStack_2270;
  undefined8 uStack_2268;
  undefined8 uStack_2260;
  undefined8 uStack_2258;
  undefined8 uStack_2250;
  undefined8 uStack_2248;
  undefined8 uStack_2238;
  undefined8 uStack_2230;
  undefined8 uStack_2228;
  undefined8 uStack_2220;
  undefined8 uStack_2218;
  undefined8 uStack_2210;
  undefined8 uStack_2208;
  undefined8 uStack_2200;
  undefined8 uStack_21f8;
  undefined8 uStack_21f0;
  undefined8 uStack_21e8;
  undefined8 uStack_21e0;
  undefined8 uStack_21d8;
  undefined1 auStack_21d0 [2832];
  undefined1 auStack_16c0 [2936];
  undefined1 auStack_b48 [2744];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar2 = param_1[0xc];
  func_0x000107c610b4(auStack_16c0,param_1,0xb78);
  iVar1 = (int)auStack_16c0;
  func_0x000100cbd8b0();
  if (iVar1 == 1) {
    func_0x000101895c44(&uStack_3930);
    func_0x000107c610b4(auStack_b48,&uStack_3930,0xab2);
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_70 = 0;
    func_0x0001042687a4(&uStack_2238,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    uStack_2278 = uStack_2210;
    uStack_2280 = uStack_2218;
    uStack_2268 = uStack_2200;
    uStack_2270 = uStack_2208;
    uStack_2258 = uStack_21f0;
    uStack_2260 = uStack_21f8;
    uStack_2248 = uStack_21e0;
    uStack_2250 = uStack_21e8;
    uStack_2298 = uStack_2230;
    uStack_22a0 = uStack_2238;
    uStack_2288 = uStack_2220;
    uStack_2290 = uStack_2228;
    func_0x000107c610b4(auStack_2db0,auStack_21d0,0xb10);
    uVar2 = 0;
    uVar3 = uStack_21d8;
  }
  else {
    uStack_2278 = param_1[5];
    uStack_2280 = param_1[4];
    uStack_2268 = param_1[7];
    uStack_2270 = param_1[6];
    uStack_2258 = param_1[9];
    uStack_2260 = param_1[8];
    uStack_2248 = param_1[0xb];
    uStack_2250 = param_1[10];
    uStack_2298 = param_1[1];
    uStack_22a0 = *param_1;
    uStack_2288 = param_1[3];
    uStack_2290 = param_1[2];
    func_0x000107c610b4(auStack_2db0,param_1 + 0xd,0xb10);
    uVar3 = uVar2;
  }
  func_0x00010189b50c(param_1,&uStack_3930,0x112dcbc78,&UNK_10d98e350);
  FUN_10189afd0(uVar2,param_2,param_3);
  func_0x000107c6142c(uVar3);
  uStack_4ff8 = uStack_2278;
  uStack_5000 = uStack_2280;
  uStack_4fe8 = uStack_2268;
  uStack_4ff0 = uStack_2270;
  uStack_4fd8 = uStack_2258;
  uStack_4fe0 = uStack_2260;
  uStack_4fc8 = uStack_2248;
  uStack_4fd0 = uStack_2250;
  uStack_5018 = uStack_2298;
  uStack_5020 = uStack_22a0;
  uStack_5008 = uStack_2288;
  uStack_5010 = uStack_2290;
  uStack_4fc0 = uVar2;
  func_0x000107c610b4(auStack_4fb8,auStack_2db0,0xb10);
  func_0x000107c610b4(auStack_44a8,&uStack_5020,0xb78);
  func_0x00010178e4a8(auStack_44a8);
  uStack_3908 = uStack_2278;
  uStack_3910 = uStack_2280;
  uStack_38f8 = uStack_2268;
  uStack_3900 = uStack_2270;
  uStack_38e8 = uStack_2258;
  uStack_38f0 = uStack_2260;
  uStack_38d8 = uStack_2248;
  uStack_38e0 = uStack_2250;
  uStack_3928 = uStack_2298;
  uStack_3930 = uStack_22a0;
  uStack_3918 = uStack_2288;
  uStack_3920 = uStack_2290;
  uStack_38d0 = uVar2;
  func_0x000107c610b4(auStack_38c8,auStack_2db0,0xb10);
  FUN_10178e408(&uStack_5020,auStack_5b98);
  func_0x00010178e444(&uStack_3930);
  func_0x000107c610b4(extraout_x8,auStack_44a8,0xb78);
  return;
}



/* Entry: 10189af70; end: 10189afcf; -[_TtC25AdTrackParserServicesImpl25AdTrackIndexedStoryParser parseWithTrackRequest:viewSeqNum:] */

void FUN_10189af70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_10189a71c(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10189afd0; end: 10189b3e3;  */

undefined * FUN_10189afd0(undefined *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puStack_4be0;
  undefined *puStack_4bd8;
  long lStack_4bd0;
  long lStack_4bc8;
  undefined1 auStack_4bb0 [2744];
  undefined1 auStack_40f8 [2744];
  undefined8 uStack_3640;
  undefined1 auStack_3638 [16];
  undefined8 uStack_3628;
  undefined1 auStack_2b88 [2744];
  undefined1 auStack_20d0 [2744];
  undefined1 auStack_1618 [2744];
  undefined1 auStack_b60 [2744];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = 0x112dcbcf8;
  func_0x0001000285a8(0x112dcbcf8,&UNK_10d98e3f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_4bc8 = (long)&puStack_4be0 - extraout_x8;
  lVar11 = *(long *)(param_2 + 0x18);
  lStack_4bd0 = param_2;
  if (lVar11 < 0) {
    func_0x000107c61434(param_1);
  }
  else if (param_1 != (undefined *)0x0) {
    lVar14 = *(long *)(param_1 + 0x10);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar14 != 0) {
      puStack_4be0 = param_1 + -0xa98;
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      lVar12 = lVar14;
LAB_10189b084:
      puVar13 = puStack_4be0 + lVar12 * 0xab8;
      lVar12 = lVar12 + -1;
      puStack_4bd8 = puVar8;
      do {
        if (lVar14 <= lVar12) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10189b3b0);
          (*pcVar4)();
        }
        func_0x000107c610b4(&uStack_3640,puVar13,0xab2);
        func_0x000107c610b4(auStack_2b88,puVar13,0xab2);
        func_0x00010178e4a0(auStack_2b88);
        func_0x000107c610b4(auStack_b60,auStack_2b88,0xab2);
        uVar3 = uStack_3628;
        iVar5 = (int)auStack_3638;
        func_0x000100cbd8b0();
        lVar2 = lStack_4bd0;
        if (iVar5 == 1) {
          FUN_101795250(&uStack_3640,auStack_4bb0);
LAB_10189b2e4:
          puVar9 = auStack_2b88;
          goto LAB_10189b300;
        }
        if (lVar11 < 0) {
          FUN_101795250(&uStack_3640,auStack_4bb0);
          lVar11 = -1;
          goto LAB_10189b2e4;
        }
        uStack_98 = *(undefined8 *)(lStack_4bd0 + 0x10);
        uStack_a0 = *(undefined8 *)(lStack_4bd0 + 8);
        uStack_70 = *(undefined8 *)(lStack_4bd0 + 0x38);
        uStack_a8 = uStack_3640;
        uStack_88 = uVar3;
        uStack_78 = *(undefined8 *)(lStack_4bd0 + 0x30);
        uStack_80 = *(undefined8 *)(lStack_4bd0 + 0x28);
        uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
        lVar6 = 0;
        lStack_90 = lVar11;
        func_0x0001018a61fc();
        func_0x000107c613fc();
        *(undefined **)(lVar6 + 0x98) = PTR___swiftEmptyArrayStorage_11034f1c8;
        *(undefined8 *)(lVar6 + 0x10) = uVar10;
        func_0x000100400294(unaff_x20 + 0x18,lVar6 + 0x18);
        func_0x000107c6157c(uVar10);
        FUN_101795250(&uStack_3640,auStack_4bb0);
        func_0x00010189b50c(auStack_3638,auStack_4bb0,0x112dcbd00,&UNK_10d98e550);
        func_0x00010189b554(lVar2,auStack_4bb0);
        lVar2 = lStack_4bc8;
        func_0x000103bfc9d0(lStack_4bc8,uVar3);
        FUN_1018a56c0(auStack_20d0,auStack_b60,&uStack_a8,lVar2);
        func_0x00010189b44c(&uStack_a8);
        func_0x000107c61588(lVar6);
        func_0x000107c61574(*(undefined8 *)(lVar6 + 0x10));
        func_0x000100400450(lVar6 + 0x18);
        func_0x000107c6142c(*(undefined8 *)(lVar6 + 0x98));
        func_0x000107c6145c(lVar6,0xa0,7);
        func_0x00010189b590(auStack_3638,0x112dcbd00,&UNK_10d98e550);
        func_0x00010179528c(&uStack_3640);
        func_0x00010189b590(lVar2,0x112dcbcf8,&UNK_10d98e3f0);
        func_0x000107c610b4(auStack_1618,auStack_20d0,0xab2);
        iVar5 = (int)auStack_1618;
        func_0x00010178e478();
        if (iVar5 != 1) goto LAB_10189b2f0;
        lVar12 = lVar12 + -1;
        puVar13 = puVar13 + -0xab8;
        lVar11 = lVar11 + -1;
        puVar8 = puStack_4bd8;
        if (lVar12 == -1) break;
      } while( true );
    }
LAB_10189b3b4:
    param_1 = puVar8;
    FUN_1018a6fe4(param_1);
  }
  return param_1;
LAB_10189b2f0:
  lVar11 = lVar11 + -1;
  puVar9 = auStack_20d0;
LAB_10189b300:
  func_0x000107c610b4(auStack_40f8,puVar9,0xab2);
  puVar8 = puStack_4bd8;
  puVar13 = puStack_4bd8;
  func_0x000107c61558();
  puVar7 = puVar8;
  if (((ulong)puVar13 & 1) == 0) {
    puVar7 = (undefined *)0x0;
    FUN_101790350(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
  }
  uVar1 = *(ulong *)(puVar7 + 0x10);
  puVar8 = puVar7;
  if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
    puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
    FUN_101790350(puVar8,uVar1 + 1,1,puVar7);
  }
  func_0x000107c610b4(auStack_4bb0,auStack_40f8,0xab2);
  *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
  func_0x000107c610b4(puVar8 + uVar1 * 0xab8 + 0x20,auStack_4bb0,0xab2);
  if (lVar12 == 0) goto LAB_10189b3b4;
  goto LAB_10189b084;
}



/* Entry: 10189b3e4; end: 10189b437;  */

void FUN_10189b3e4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000100400450(unaff_x20 + 0x18);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10189b438; end: 10189b44b;  */

void FUN_10189b438(undefined8 *param_1)

{
  param_1[1] = 1;
  *param_1 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)(param_1 + 2,0xb68);
  return;
}



/* Entry: 10189b44c; end: 10189b5cf;  */

undefined8 FUN_10189b44c(undefined8 param_1)

{
  (*(code *)&DAT_103de9cec)();
  return param_1;
}



/* Entry: 10189b5d0; end: 10189b60f; -[_TtC25AdTrackParserServicesImpl24AdTrackModularLensParser adEventSymbols] */

void FUN_10189b5d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10189b610; end: 10189b647; -[_TtC25AdTrackParserServicesImpl24AdTrackModularLensParser setAdEventSymbols:] */

void FUN_10189b610(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 10189b648; end: 10189bc9f;  */

/* WARNING: Possible PIC construction at 0x00010189b6f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010189bc60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010189b6fc) */
/* WARNING: Removing unreachable block (ram,0x00010189bc1c) */
/* WARNING: Removing unreachable block (ram,0x00010189bc24) */
/* WARNING: Removing unreachable block (ram,0x00010189b7b8) */
/* WARNING: Removing unreachable block (ram,0x00010189bc34) */
/* WARNING: Removing unreachable block (ram,0x00010189b7c8) */
/* WARNING: Removing unreachable block (ram,0x00010189b7f0) */
/* WARNING: Removing unreachable block (ram,0x00010189b89c) */
/* WARNING: Removing unreachable block (ram,0x00010189b980) */
/* WARNING: Removing unreachable block (ram,0x00010189b9ec) */
/* WARNING: Removing unreachable block (ram,0x00010189b9d0) */
/* WARNING: Removing unreachable block (ram,0x00010189bbdc) */
/* WARNING: Removing unreachable block (ram,0x00010189b940) */
/* WARNING: Removing unreachable block (ram,0x00010189bbe0) */
/* WARNING: Removing unreachable block (ram,0x00010189bc64) */
/* WARNING: Removing unreachable block (ram,0x00010189bc70) */

void FUN_10189b648(undefined8 param_1)

{
  long lVar1;
  undefined8 auStack_b8 [11];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = 0;
  func_0x00010423cab0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001000d224c(auStack_b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 10189bca0; end: 10189bcff; -[_TtC25AdTrackParserServicesImpl24AdTrackModularLensParser parseWithTrackRequest:viewSeqNum:] */

void FUN_10189bca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_10189b648(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10189bd00; end: 10189bd53;  */

void FUN_10189bd00(void)

{
  long unaff_x20;
  
  func_0x000100400450(unaff_x20 + 0x10);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10189bd54; end: 10189c837;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10189bd54(ulong *param_1,double param_2,undefined8 ******param_3,undefined8 ******param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined8 *****pppppuVar4;
  undefined8 ******ppppppuVar5;
  undefined8 ******ppppppuVar6;
  undefined8 ******ppppppuVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 *****pppppuVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 ******ppppppuVar16;
  undefined8 ******ppppppuVar17;
  uint uVar18;
  undefined8 *****pppppuVar19;
  undefined8 *****pppppuVar20;
  undefined8 *****pppppuVar21;
  undefined8 ******ppppppuVar22;
  ulong uVar23;
  long lVar24;
  undefined8 ******ppppppuVar25;
  undefined8 ******ppppppuVar26;
  undefined8 ******ppppppuVar27;
  double dVar28;
  double dVar29;
  uint uStack_124;
  undefined8 *****pppppuStack_120;
  ulong uStack_118;
  undefined8 *****pppppuStack_b8;
  undefined8 *****pppppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  if ((ulong)param_3 >> 0x3e == 0) {
    ppppppuVar27 = *(undefined8 *******)(((ulong)param_3 & 0xffffffffffffff8) + 0x10);
    if (ppppppuVar27 != (undefined8 ******)0x0) goto LAB_10189bd9c;
LAB_10189bf30:
    pppppuVar19 = (undefined8 *****)0x0;
    pppppuVar4 = (undefined8 *****)0x0;
    pppppuVar20 = (undefined8 *****)0x0;
  }
  else {
    ppppppuVar27 = (undefined8 ******)((ulong)param_3 & 0xffffffffffffff8);
    if ((undefined8 ******)0x7fffffffffffffff < param_3) {
      ppppppuVar27 = param_3;
    }
    func_0x000107c60480();
    if (ppppppuVar27 == (undefined8 ******)0x0) goto LAB_10189bf30;
LAB_10189bd9c:
    uVar12 = (ulong)param_3 & 0xc000000000000001;
    pppppuVar19 = (undefined8 *****)0x0;
    uVar23 = (ulong)param_3 & 0xffffffffffffff8;
    do {
      if (uVar12 == 0) {
        if (*(undefined8 ******)(uVar23 + 0x10) <= pppppuVar19) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10189bf04);
          (*pcVar1)();
        }
        pppppuVar4 = param_3[(long)pppppuVar19 + 4];
        func_0x000107c61174();
      }
      else {
        pppppuVar4 = pppppuVar19;
        param_4 = param_3;
        func_0x0001018ac928();
      }
      ppppppuVar16 = (undefined8 ******)((long)pppppuVar19 + 1);
      if (SCARRY8((long)pppppuVar19,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10189bf00);
        (*pcVar1)();
      }
      iVar3 = (int)*(undefined8 *)((long)pppppuVar4 + _DAT_11308c278);
      func_0x000107c30d84();
      if (iVar3 == 5) goto LAB_10189be14;
      func_0x000107c61170(pppppuVar4);
      pppppuVar19 = (undefined8 *****)((long)pppppuVar19 + 1);
    } while (ppppppuVar16 != ppppppuVar27);
    pppppuVar4 = (undefined8 *****)0x0;
LAB_10189be14:
    pppppuVar20 = (undefined8 *****)0x0;
    do {
      if (uVar12 == 0) {
        if (*(undefined8 ******)(uVar23 + 0x10) <= pppppuVar20) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10189bf0c);
          (*pcVar1)();
        }
        pppppuVar19 = param_3[(long)pppppuVar20 + 4];
        func_0x000107c61174();
      }
      else {
        pppppuVar19 = pppppuVar20;
        param_4 = param_3;
        func_0x0001018ac928();
      }
      ppppppuVar16 = (undefined8 ******)((long)pppppuVar20 + 1);
      if (SCARRY8((long)pppppuVar20,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10189bf08);
        (*pcVar1)();
      }
      iVar3 = (int)*(undefined8 *)((long)pppppuVar19 + _DAT_11308c278);
      func_0x000107c30d84();
      if (iVar3 == 4) goto LAB_10189be88;
      func_0x000107c61170(pppppuVar19);
      pppppuVar20 = (undefined8 *****)((long)pppppuVar20 + 1);
    } while (ppppppuVar16 != ppppppuVar27);
    pppppuVar19 = (undefined8 *****)0x0;
LAB_10189be88:
    pppppuVar21 = (undefined8 *****)0x0;
    do {
      if (uVar12 == 0) {
        if (*(undefined8 ******)(uVar23 + 0x10) <= pppppuVar21) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10189bf14);
          (*pcVar1)();
        }
        pppppuVar20 = param_3[(long)pppppuVar21 + 4];
        func_0x000107c61174();
      }
      else {
        pppppuVar20 = pppppuVar21;
        param_4 = param_3;
        func_0x0001018ac928();
      }
      ppppppuVar16 = (undefined8 ******)((long)pppppuVar21 + 1);
      if (SCARRY8((long)pppppuVar21,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10189bf10);
        (*pcVar1)();
      }
      iVar3 = (int)*(undefined8 *)((long)pppppuVar20 + _DAT_11308c278);
      func_0x000107c30d84();
      if (iVar3 == 0) goto LAB_10189bf40;
      func_0x000107c61170(pppppuVar20);
      pppppuVar21 = (undefined8 *****)((long)pppppuVar21 + 1);
    } while (ppppppuVar16 != ppppppuVar27);
    pppppuVar20 = (undefined8 *****)0x0;
  }
LAB_10189bf40:
  uVar23 = (ulong)param_3 & 0xffffffffffffff8;
  uVar12 = (ulong)param_3 & 0xc000000000000001;
  ppppppuVar16 = (undefined8 ******)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (ppppppuVar27 != (undefined8 ******)0x0) {
    ppppppuVar22 = (undefined8 ******)0x0;
    do {
      while( true ) {
        if (uVar12 == 0) {
          if (*(undefined8 *******)(uVar23 + 0x10) <= ppppppuVar22) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10189c440);
            (*pcVar1)();
          }
          ppppppuVar5 = (undefined8 ******)param_3[(long)((long)ppppppuVar22 + 4)];
          func_0x000107c61174();
        }
        else {
          ppppppuVar5 = ppppppuVar22;
          param_4 = param_3;
          func_0x0001018ac928();
        }
        ppppppuVar6 = (undefined8 ******)((long)ppppppuVar22 + 1);
        if (SCARRY8((long)ppppppuVar22,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10189c43c);
          (*pcVar1)();
        }
        iVar3 = (int)*(undefined8 *)((long)ppppppuVar5 + _DAT_11308c278);
        func_0x000107c30d84();
        if (iVar3 == 2) break;
        func_0x000107c61170(ppppppuVar5);
        ppppppuVar22 = (undefined8 ******)((long)ppppppuVar22 + 1);
        if (ppppppuVar6 == ppppppuVar27) goto LAB_10189c048;
      }
      ppppppuVar22 = ppppppuVar16;
      func_0x000107c61558();
      pppppuStack_b0 = ppppppuVar16;
      if (((ulong)ppppppuVar22 & 1) == 0) {
        param_4 = (undefined8 ******)((long)ppppppuVar16[2] + 1);
        func_0x0001018ad04c(0,param_4,1);
      }
      pppppuVar21 = (undefined8 *****)pppppuStack_b0[2];
      ppppppuVar16 = (undefined8 ******)((long)pppppuVar21 + 1);
      if ((undefined8 *****)((ulong)pppppuStack_b0[3] >> 1) <= pppppuVar21) {
        param_4 = ppppppuVar16;
        func_0x0001018ad04c((undefined8 *****)0x1 < pppppuStack_b0[3],ppppppuVar16,1);
      }
      pppppuStack_b0[2] = ppppppuVar16;
      pppppuStack_b0[(long)pppppuVar21 + 4] = ppppppuVar5;
      ppppppuVar22 = ppppppuVar6;
      ppppppuVar16 = (undefined8 ******)pppppuStack_b0;
    } while (ppppppuVar6 != ppppppuVar27);
  }
LAB_10189c048:
  if (ppppppuVar27 == (undefined8 ******)0x0) {
    pppppuStack_b8 = (undefined8 *****)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    pppppuStack_b8 = (undefined8 *****)PTR___swiftEmptyArrayStorage_11034f1c8;
    ppppppuVar22 = (undefined8 ******)0x0;
    do {
      while( true ) {
        if (uVar12 == 0) {
          if (*(undefined8 *******)(uVar23 + 0x10) <= ppppppuVar22) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10189c448);
            (*pcVar1)();
          }
          ppppppuVar5 = (undefined8 ******)param_3[(long)((long)ppppppuVar22 + 4)];
          func_0x000107c61174();
        }
        else {
          ppppppuVar5 = ppppppuVar22;
          param_4 = param_3;
          func_0x0001018ac928();
        }
        ppppppuVar6 = (undefined8 ******)((long)ppppppuVar22 + 1);
        if (SCARRY8((long)ppppppuVar22,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10189c444);
          (*pcVar1)();
        }
        iVar3 = (int)*(undefined8 *)((long)ppppppuVar5 + _DAT_11308c278);
        func_0x000107c30d84();
        if (iVar3 != 3) break;
        ppppppuVar22 = (undefined8 ******)pppppuStack_b8;
        func_0x000107c61558();
        pppppuStack_b0 = pppppuStack_b8;
        if (((ulong)ppppppuVar22 & 1) == 0) {
          param_4 = (undefined8 ******)((long)pppppuStack_b8[2] + 1);
          func_0x0001018ad04c(0,param_4,1);
        }
        pppppuVar21 = (undefined8 *****)pppppuStack_b0[2];
        ppppppuVar22 = (undefined8 ******)((long)pppppuVar21 + 1);
        if ((undefined8 *****)((ulong)pppppuStack_b0[3] >> 1) <= pppppuVar21) {
          param_4 = ppppppuVar22;
          func_0x0001018ad04c((undefined8 *****)0x1 < pppppuStack_b0[3],ppppppuVar22,1);
        }
        pppppuStack_b0[2] = ppppppuVar22;
        pppppuStack_b0[(long)pppppuVar21 + 4] = ppppppuVar5;
        ppppppuVar22 = ppppppuVar6;
        pppppuStack_b8 = pppppuStack_b0;
        if (ppppppuVar6 == ppppppuVar27) goto LAB_10189c158;
      }
      func_0x000107c61170(ppppppuVar5);
      ppppppuVar22 = (undefined8 ******)((long)ppppppuVar22 + 1);
    } while (ppppppuVar6 != ppppppuVar27);
  }
LAB_10189c158:
  ppppppuVar22 = (undefined8 ******)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (ppppppuVar27 != (undefined8 ******)0x0) {
    ppppppuVar5 = (undefined8 ******)0x0;
    do {
      while( true ) {
        if (uVar12 == 0) {
          if (*(undefined8 *******)(uVar23 + 0x10) <= ppppppuVar5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10189c450);
            (*pcVar1)();
          }
          ppppppuVar6 = (undefined8 ******)param_3[(long)((long)ppppppuVar5 + 4)];
          func_0x000107c61174();
        }
        else {
          ppppppuVar6 = ppppppuVar5;
          param_4 = param_3;
          func_0x0001018ac928();
        }
        ppppppuVar7 = (undefined8 ******)((long)ppppppuVar5 + 1);
        if (SCARRY8((long)ppppppuVar5,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10189c44c);
          (*pcVar1)();
        }
        iVar3 = (int)*(undefined8 *)((long)ppppppuVar6 + _DAT_11308c278);
        func_0x000107c30d84();
        if (iVar3 != 1) break;
        ppppppuVar5 = ppppppuVar22;
        func_0x000107c61558();
        pppppuStack_b0 = ppppppuVar22;
        if (((ulong)ppppppuVar5 & 1) == 0) {
          param_4 = (undefined8 ******)((long)ppppppuVar22[2] + 1);
          func_0x0001018ad04c(0,param_4,1);
        }
        pppppuVar21 = (undefined8 *****)pppppuStack_b0[2];
        ppppppuVar22 = (undefined8 ******)((long)pppppuVar21 + 1);
        if ((undefined8 *****)((ulong)pppppuStack_b0[3] >> 1) <= pppppuVar21) {
          param_4 = ppppppuVar22;
          func_0x0001018ad04c((undefined8 *****)0x1 < pppppuStack_b0[3],ppppppuVar22,1);
        }
        pppppuStack_b0[2] = ppppppuVar22;
        pppppuStack_b0[(long)pppppuVar21 + 4] = ppppppuVar6;
        ppppppuVar5 = ppppppuVar7;
        ppppppuVar22 = (undefined8 ******)pppppuStack_b0;
        if (ppppppuVar7 == ppppppuVar27) goto LAB_10189c25c;
      }
      func_0x000107c61170(ppppppuVar6);
      ppppppuVar5 = (undefined8 ******)((long)ppppppuVar5 + 1);
    } while (ppppppuVar7 != ppppppuVar27);
  }
LAB_10189c25c:
  if (pppppuVar20 == (undefined8 *****)0x0) {
    uStack_124 = 0;
    pppppuStack_120 = param_4;
  }
  else {
    uStack_124 = (uint)*(undefined8 *)((long)pppppuVar20 + _DAT_11308c278);
    func_0x000107c30d94();
    pppppuStack_120 = param_4;
  }
  ppppppuVar27 = (undefined8 ******)pppppuStack_120;
  if (pppppuVar4 != (undefined8 *****)0x0) {
    uVar12 = *(ulong *)((long)pppppuVar4 + _DAT_11308c278);
    func_0x000107c30d88();
    func_0x000107c61180();
    ppppppuVar27 = (undefined8 ******)pppppuStack_120;
    if (uVar12 != 0) {
      uStack_118 = uVar12;
      func_0x000107c5faec();
      ppppppuVar27 = (undefined8 ******)pppppuStack_120;
      func_0x000107c61170(uVar12);
      goto LAB_10189c2c4;
    }
  }
  pppppuStack_120 = (undefined8 ******)0x0;
  uStack_118 = 0;
LAB_10189c2c4:
  if (((long)ppppppuVar22 < 0) || (((ulong)ppppppuVar22 >> 0x3e & 1) != 0)) {
    ppppppuVar5 = ppppppuVar22;
    func_0x000107c60480();
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    ppppppuVar5 = (undefined8 ******)ppppppuVar22[2];
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar11;
  if (ppppppuVar5 != (undefined8 ******)0x0) {
    ppppppuVar6 = (undefined8 ******)0x0;
    do {
      while( true ) {
        if (((ulong)ppppppuVar22 & 0xc000000000000001) == 0) {
          if (ppppppuVar22[2] <= ppppppuVar6) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10189c458);
            (*pcVar1)();
          }
          ppppppuVar7 = (undefined8 ******)ppppppuVar22[(long)((long)ppppppuVar6 + 4)];
          func_0x000107c61174();
          lVar24 = _DAT_11308c278;
        }
        else {
          ppppppuVar7 = ppppppuVar6;
          func_0x0001018ac928(ppppppuVar6,ppppppuVar22);
          lVar24 = _DAT_11308c278;
        }
        _DAT_11308c278 = lVar24;
        if (SCARRY8((long)ppppppuVar6,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10189c454);
          (*pcVar1)();
        }
        ppppppuVar26 = (undefined8 ******)((long)ppppppuVar6 + 1);
        ppppppuVar27 = &pppppuStack_b0;
        func_0x000107c61428((undefined *)((long)ppppppuVar7 + lVar24),ppppppuVar27,0x20,0);
        lVar24 = *(long *)((long)ppppppuVar7 + lVar24);
        func_0x000107c61174(ppppppuVar7);
        func_0x000107c30d8c();
        func_0x000107c61180();
        if (lVar24 == 0) break;
        lVar8 = lVar24;
        func_0x000107c5faec();
        ppppppuVar6 = ppppppuVar27;
        func_0x000107c614a8(&pppppuStack_b0);
        func_0x000107c61170(ppppppuVar7);
        func_0x000107c61170(ppppppuVar7);
        func_0x000107c61170(lVar24);
        puVar9 = puVar11;
        func_0x000107c61558();
        puVar10 = puVar11;
        if (((ulong)puVar9 & 1) == 0) {
          ppppppuVar6 = (undefined8 ******)(*(long *)(puVar11 + 0x10) + 1);
          puVar10 = (undefined *)0x0;
          func_0x0001000d182c(0,ppppppuVar6,1,puVar11);
        }
        uVar12 = *(ulong *)(puVar10 + 0x10);
        ppppppuVar7 = (undefined8 ******)(uVar12 + 1);
        puVar11 = puVar10;
        if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar12) {
          puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
          ppppppuVar6 = ppppppuVar7;
          func_0x0001000d182c(puVar11,ppppppuVar7,1,puVar10);
        }
        *(undefined8 *******)(puVar11 + 0x10) = ppppppuVar7;
        *(long *)(puVar11 + uVar12 * 0x10 + 0x20) = lVar8;
        *(undefined8 *******)(puVar11 + uVar12 * 0x10 + 0x28) = ppppppuVar27;
        ppppppuVar27 = ppppppuVar6;
        ppppppuVar6 = ppppppuVar26;
        if (ppppppuVar26 == ppppppuVar5) goto LAB_10189c470;
      }
      func_0x000107c614a8(&pppppuStack_b0);
      func_0x000107c61170(ppppppuVar7);
      func_0x000107c61170(ppppppuVar7);
      ppppppuVar6 = (undefined8 ******)((long)ppppppuVar6 + 1);
    } while (ppppppuVar26 != ppppppuVar5);
  }
LAB_10189c470:
  func_0x000107c61574(ppppppuVar22);
  puVar9 = puVar11;
  func_0x000100403a6c();
  func_0x000107c6142c(puVar11);
  if (((long)ppppppuVar16 < 0) || (((ulong)ppppppuVar16 >> 0x3e & 1) != 0)) {
    ppppppuVar22 = ppppppuVar16;
    func_0x000107c60480();
  }
  else {
    ppppppuVar22 = (undefined8 ******)ppppppuVar16[2];
  }
  if (ppppppuVar22 == (undefined8 ******)0x0) {
    dVar29 = 0.0;
  }
  else {
    ppppppuVar5 = (undefined8 ******)0x0;
    uVar18 = (uint)((ulong)pppppuStack_b8 >> 0x3e) & 1;
    if ((long)pppppuStack_b8 < 0) {
      uVar18 = 1;
    }
    dVar29 = 0.0;
    do {
      if (((ulong)ppppppuVar16 & 0xc000000000000001) == 0) {
        if (ppppppuVar16[2] <= ppppppuVar5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10189c820);
          (*pcVar1)();
        }
        ppppppuVar6 = (undefined8 ******)ppppppuVar16[(long)((long)ppppppuVar5 + 4)];
        func_0x000107c61174();
        dVar28 = param_2;
      }
      else {
        ppppppuVar6 = ppppppuVar5;
        ppppppuVar27 = ppppppuVar16;
        func_0x0001018ac928();
        dVar28 = param_2;
      }
      bVar2 = SCARRY8((long)ppppppuVar5,1);
      ppppppuVar5 = (undefined8 ******)((long)ppppppuVar5 + 1);
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10189c81c);
        (*pcVar1)();
      }
      uVar12 = *(ulong *)((long)ppppppuVar6 + _DAT_11308c278);
      func_0x000107c30d90();
      func_0x000107c61180();
      if (uVar12 == 0) {
        uVar23 = 0;
        ppppppuVar26 = (undefined8 ******)0x0;
        ppppppuVar7 = ppppppuVar27;
      }
      else {
        uVar23 = uVar12;
        func_0x000107c5faec();
        ppppppuVar7 = ppppppuVar27;
        func_0x000107c61170(uVar12);
        ppppppuVar26 = ppppppuVar27;
      }
      func_0x000107c30b10(*(undefined8 *)((long)ppppppuVar6 + _DAT_11308c270));
      param_2 = dVar28;
      if (uVar18 == 0) {
        ppppppuVar25 = (undefined8 ******)pppppuStack_b8[2];
        ppppppuVar27 = ppppppuVar7;
      }
      else {
        ppppppuVar25 = (undefined8 ******)pppppuStack_b8;
        func_0x000107c60480();
        ppppppuVar27 = ppppppuVar7;
      }
      if (ppppppuVar25 != (undefined8 ******)0x0) {
        pppppuVar21 = (undefined8 *****)0x0;
        do {
          if (((ulong)pppppuStack_b8 & 0xc000000000000001) == 0) {
            if (pppppuStack_b8[2] <= pppppuVar21) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10189c818);
              (*pcVar1)();
            }
            pppppuVar13 = (undefined8 *****)pppppuStack_b8[(long)pppppuVar21 + 4];
            func_0x000107c61174();
          }
          else {
            pppppuVar13 = pppppuVar21;
            ppppppuVar27 = (undefined8 ******)pppppuStack_b8;
            func_0x0001018ac928();
          }
          ppppppuVar7 = (undefined8 ******)((long)pppppuVar21 + 1);
          if (SCARRY8((long)pppppuVar21,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10189c814);
            (*pcVar1)();
          }
          uVar12 = *(ulong *)((long)pppppuVar13 + _DAT_11308c278);
          func_0x000107c30d90();
          func_0x000107c61180();
          if (uVar12 == 0) {
            if (ppppppuVar26 == (undefined8 ******)0x0) goto LAB_10189c6a4;
          }
          else {
            uVar14 = uVar12;
            func_0x000107c5faec();
            ppppppuVar17 = ppppppuVar27;
            func_0x000107c61170(uVar12);
            if (ppppppuVar26 != (undefined8 ******)0x0) {
              if (uVar14 == uVar23 && ppppppuVar26 == ppppppuVar27) {
                func_0x000107c6142c(ppppppuVar26);
                ppppppuVar26 = ppppppuVar27;
              }
              else {
                ppppppuVar17 = ppppppuVar27;
                func_0x000107c605b8(uVar14,ppppppuVar27,uVar23,ppppppuVar26,0);
                func_0x000107c6142c(ppppppuVar27);
                ppppppuVar27 = ppppppuVar17;
                if ((uVar14 & 1) == 0) goto LAB_10189c5b4;
              }
              ppppppuVar27 = ppppppuVar17;
              func_0x000107c6142c(ppppppuVar26);
LAB_10189c6a4:
              uVar15 = *(undefined8 *)((long)pppppuVar13 + _DAT_11308c270);
              func_0x000107c61174(uVar15);
              func_0x000107c30b10();
              func_0x000107c61170(uVar15);
              func_0x000107c61170(pppppuVar13);
              func_0x000107c61170(ppppppuVar6);
              param_2 = param_2 - dVar28;
              dVar29 = dVar29 + param_2;
              goto LAB_10189c504;
            }
            func_0x000107c6142c(ppppppuVar27);
            ppppppuVar27 = ppppppuVar17;
          }
LAB_10189c5b4:
          func_0x000107c61170(pppppuVar13);
          pppppuVar21 = (undefined8 *****)((long)pppppuVar21 + 1);
        } while (ppppppuVar7 != ppppppuVar25);
      }
      func_0x000107c61170(ppppppuVar6);
      func_0x000107c6142c(ppppppuVar26);
LAB_10189c504:
    } while (ppppppuVar5 != ppppppuVar22);
  }
  func_0x000107c61574();
  func_0x000107c61574(pppppuStack_b8);
  ppppppuVar27 = *(undefined8 *******)(puVar9 + 0x10);
  if (ppppppuVar27 == (undefined8 ******)0x0) {
    func_0x000107c6142c(puVar9);
    func_0x000107c61170(pppppuVar20);
    func_0x000107c61170(pppppuVar4);
    func_0x000107c61170(pppppuVar19);
    ppppppuVar16 = (undefined8 ******)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    ppppppuVar16 = ppppppuVar27;
    func_0x00010109b448(ppppppuVar27,0);
    ppppppuVar22 = &pppppuStack_b0;
    func_0x00010109b930(ppppppuVar22,ppppppuVar16 + 4,ppppppuVar27,puVar9);
    func_0x00010109bac0(pppppuStack_b0,uStack_a8,uStack_a0,uStack_98,uStack_90);
    if (ppppppuVar22 != ppppppuVar27) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10189c838);
      (*pcVar1)();
    }
    func_0x000107c61170(pppppuVar20);
    func_0x000107c61170(pppppuVar4);
    func_0x000107c61170(pppppuVar19);
  }
  *param_1 = (ulong)uStack_124;
  param_1[1] = (ulong)dVar29;
  param_1[2] = uStack_118;
  param_1[3] = (ulong)pppppuStack_120;
  param_1[4] = (ulong)(pppppuVar19 != (undefined8 *****)0x0 & uStack_124);
  param_1[5] = (ulong)ppppppuVar16;
  return;
}



/* Entry: 10189c838; end: 10189c85b;  */

int FUN_10189c838(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10189c85c; end: 10189c917;  */

undefined8 FUN_10189c85c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10189c918; end: 10189c97f; -[_TtC25AdTrackParserServicesImpl13AdTrackParser adEventSymbols] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10189c918(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dcdaa8;
  func_0x000107c61428(param_1 + _DAT_112dcdaa8,auStack_38,0,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  uVar2 = uVar3;
  func_0x000107c61434(uVar3);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10189c980; end: 10189c9e7; -[_TtC25AdTrackParserServicesImpl13AdTrackParser setAdEventSymbols:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10189c980(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  lVar1 = _DAT_112dcdaa8;
  func_0x000107c61428(param_1 + _DAT_112dcdaa8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 10189c9e8; end: 10189cd33;  */

/* WARNING: Possible PIC construction at 0x00010189cb20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010189cb24) */
/* WARNING: Removing unreachable block (ram,0x00010189cb60) */
/* WARNING: Removing unreachable block (ram,0x00010189cb7c) */
/* WARNING: Removing unreachable block (ram,0x00010189cb68) */
/* WARNING: Removing unreachable block (ram,0x00010189cb8c) */
/* WARNING: Removing unreachable block (ram,0x00010189cb34) */
/* WARNING: Removing unreachable block (ram,0x00010189cc10) */
/* WARNING: Removing unreachable block (ram,0x00010189cca4) */
/* WARNING: Removing unreachable block (ram,0x00010189cc64) */
/* WARNING: Removing unreachable block (ram,0x00010189cb44) */
/* WARNING: Removing unreachable block (ram,0x00010189ccc8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10189c9e8(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  long unaff_x20;
  long lVar7;
  undefined1 auStack_78 [24];
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112dcdab0);
  *(undefined8 *)(unaff_x20 + _DAT_112dcdab0) = 0;
  func_0x000107c6142c(uVar4);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001018ad080(0,0x10,0);
  lVar7 = 0;
  do {
    uVar5 = (ulong)*(byte *)(lVar7 + 0x112dcdb08);
    FUN_10189cebc();
    uVar1 = *(ulong *)(puVar2 + 0x10);
    puVar6 = (undefined *)(uVar1 + 1);
    if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
      func_0x0001018ad080(1 < *(ulong *)(puVar2 + 0x18),puVar6,1);
    }
    lVar7 = lVar7 + 1;
    *(undefined **)(puVar2 + 0x10) = puVar6;
    *(ulong *)(puVar2 + uVar1 * 8 + 0x20) = uVar5;
  } while (lVar7 != 0x10);
  if ((((long)puVar2 < 0) || (((ulong)puVar2 >> 0x3e & 1) != 0)) &&
     (puVar6 = puVar2, func_0x000107c60480(), puVar6 == (undefined *)0x0)) {
    func_0x000107c61574(puVar2);
  }
  else {
    lVar7 = _DAT_112dcdaa8;
    func_0x000107c61428(unaff_x20 + _DAT_112dcdaa8,auStack_78,1,0);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar7);
    *(undefined **)(unaff_x20 + lVar7) = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c6142c(uVar4);
    if ((long)puVar6 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10189cd34);
      (*pcVar3)();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 10189cd34; end: 10189cd97; -[_TtC25AdTrackParserServicesImpl13AdTrackParser parseWithTrackRequest:viewSeqNum:] */

void FUN_10189cd34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10189c9e8(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10189cd98; end: 10189cdf7; -[_TtC25AdTrackParserServicesImpl13AdTrackParser init] */

void FUN_10189cd98(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdTrackParserServicesImpl.AdTrackParser",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10189cdc4);
  (*pcVar1)();
}



/* Entry: 10189cdf8; end: 10189ce3f; -[_TtC25AdTrackParserServicesImpl13AdTrackParser .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010189ce24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010189ce28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10189cdf8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dcdaa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112dcdaa8));
  return;
}



/* Entry: 10189ce40; end: 10189ce5f;  */

void FUN_10189ce40(void)

{
  func_0x000107c61168(&PTR_PTR_1127e9d80);
  return;
}



/* Entry: 10189ce60; end: 10189ce73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10189ce60(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(*unaff_x20 + _DAT_112dcdab0));
  return;
}



/* Entry: 10189ce74; end: 10189cebb;  */

undefined8 FUN_10189ce74(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112dcbb68;
  func_0x0001000285a8(0x112dcbb68,&UNK_10d98e1a0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10189cebc; end: 10189d077;  */

undefined8 * FUN_10189cebc(undefined8 *param_1)

{
  undefined *puVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *unaff_x20;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined **ppuVar9;
  
  puVar2 = param_1;
  func_0x00010189d2d8();
  func_0x000107c613fc();
  puVar3 = unaff_x20 + 2;
  func_0x000100400294(puVar3,puVar2 + 2);
  puVar7 = (undefined8 *)((ulong)param_1 & 0xff);
  puVar4 = puVar3;
  puVar8 = (undefined8 *)&UNK_10d990190;
  puVar5 = unaff_x20;
  switch(puVar7) {
  default:
    puVar3 = (undefined8 *)0x0;
    func_0x0001018a61fc();
  case (undefined8 *)0x5b:
  case (undefined8 *)0x6b:
code_r0x00010189cfb0:
    func_0x000107c613fc();
    puVar3[0x13] = PTR___swiftEmptyArrayStorage_11034f1c8;
    param_1 = puVar3;
code_r0x00010189cfcc:
    puVar3[2] = puVar2;
    goto code_r0x00010189cfd0;
  case (undefined8 *)0x1:
  case (undefined8 *)0x84:
    puVar3 = (undefined8 *)0x0;
  case (undefined8 *)0xa8:
    func_0x0001018a910c();
    goto code_r0x00010189cfb0;
  case (undefined8 *)0x2:
    puVar3 = (undefined8 *)0x0;
    func_0x00010189b418();
    goto code_r0x00010189cfb0;
  case (undefined8 *)0x3:
  case (undefined8 *)0x98:
    param_1 = (undefined8 *)0x0;
    func_0x0001018aa7e0();
    func_0x000107c613fc();
    func_0x000107c61574(puVar2);
  case (undefined8 *)0xa0:
    param_1[0x12] = PTR___swiftEmptyArrayStorage_11034f1c8;
    param_1[0x13] = 0;
    goto code_r0x00010189d058;
  case (undefined8 *)0x4:
    param_1 = (undefined8 *)0x0;
    func_0x00010189a51c();
    goto code_r0x00010189cff8;
  case (undefined8 *)0x5:
    param_1 = (undefined8 *)0x0;
    func_0x000101898c24();
    goto code_r0x00010189cff8;
  case (undefined8 *)0x6:
    param_1 = (undefined8 *)0x0;
    func_0x000101897d88();
    goto code_r0x00010189cff8;
  case (undefined8 *)0x7:
  case (undefined8 *)0x5c:
    puVar3 = (undefined8 *)0x0;
    func_0x0001018a3718();
    break;
  case (undefined8 *)0x8:
    puVar3 = (undefined8 *)0x0;
  case (undefined8 *)0x81:
    func_0x0001018a1cb0();
    break;
  case (undefined8 *)0x9:
    puVar3 = (undefined8 *)0x0;
  case (undefined8 *)0x10:
  case (undefined8 *)0x38:
  case (undefined8 *)0x90:
    func_0x000101892c1c();
    break;
  case (undefined8 *)0xa:
    puVar3 = (undefined8 *)0x0;
  case (undefined8 *)0x2d:
  case (undefined8 *)0x4f:
    func_0x000101896e3c();
    break;
  case (undefined8 *)0xb:
    puVar3 = (undefined8 *)0x0;
    func_0x00010188f788();
    break;
  case (undefined8 *)0xc:
    param_1 = (undefined8 *)0x0;
    func_0x00010189bd34();
code_r0x00010189cff8:
    func_0x000107c613fc();
    func_0x000107c61574(puVar2);
code_r0x00010189d010:
    puVar7 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
code_r0x00010189d018:
    param_1[0x12] = puVar7;
    param_1[0x13] = puVar7;
code_r0x00010189d01c:
    goto code_r0x00010189d058;
  case (undefined8 *)0xd:
    puVar3 = (undefined8 *)0x0;
    func_0x00010188dc3c();
    break;
  case (undefined8 *)0xe:
    puVar3 = (undefined8 *)0x0;
    func_0x000101893bec();
  case (undefined8 *)0x63:
  case (undefined8 *)0x73:
    break;
  case (undefined8 *)0xf:
    puVar3 = (undefined8 *)0x0;
    func_0x0001018913d0();
    break;
  case (undefined8 *)0x20:
  case (undefined8 *)0x58:
  case (undefined8 *)0xc0:
  case (undefined8 *)0xe0:
    goto code_r0x00010189d010;
  case (undefined8 *)0x21:
  case (undefined8 *)0xc1:
  case (undefined8 *)0xd9:
  case (undefined8 *)0xe1:
  case (undefined8 *)0xf2:
    goto code_r0x00010189d09c;
  case (undefined8 *)0x22:
  case (undefined8 *)0x44:
  case (undefined8 *)0xc2:
  case (undefined8 *)0xe2:
    goto code_r0x00010189d05c;
  case (undefined8 *)0x23:
  case (undefined8 *)0x29:
  case (undefined8 *)0x2c:
  case (undefined8 *)0x32:
  case (undefined8 *)0x45:
  case (undefined8 *)0x4b:
  case (undefined8 *)0x4e:
  case (undefined8 *)0x54:
  case (undefined8 *)0xc3:
  case (undefined8 *)0xc9:
  case (undefined8 *)0xcc:
  case (undefined8 *)0xcf:
  case (undefined8 *)0xd5:
  case (undefined8 *)0xdb:
  case (undefined8 *)0xe3:
  case (undefined8 *)0xe9:
  case (undefined8 *)0xec:
    goto code_r0x00010189d0d4;
  case (undefined8 *)0x24:
  case (undefined8 *)0x28:
  case (undefined8 *)0x2e:
  case (undefined8 *)0x42:
  case (undefined8 *)0x46:
  case (undefined8 *)0x4a:
  case (undefined8 *)0x50:
  case (undefined8 *)0xc4:
  case (undefined8 *)0xc8:
  case (undefined8 *)0xe4:
  case (undefined8 *)0xe8:
    FUN_10189cebc();
    *puVar2 = puVar3;
  case (undefined8 *)0x25:
  case (undefined8 *)0x2f:
  case (undefined8 *)0x47:
  case (undefined8 *)0x51:
  case (undefined8 *)0xc5:
  case (undefined8 *)0xd2:
  case (undefined8 *)0xe5:
  case (undefined8 *)0xf5:
code_r0x00010189d09c:
code_r0x00010189d0a0:
    return puVar3;
  case (undefined8 *)0x26:
  case (undefined8 *)0x48:
  case (undefined8 *)0xc6:
  case (undefined8 *)0xe6:
    goto code_r0x00010189d0b8;
  case (undefined8 *)0x27:
  case (undefined8 *)0x49:
  case (undefined8 *)0xc7:
  case (undefined8 *)0xd4:
  case (undefined8 *)0xe7:
    goto code_r0x00010189d04c;
  case (undefined8 *)0x2a:
  case (undefined8 *)0x4c:
  case (undefined8 *)0xca:
  case (undefined8 *)0xea:
  case (undefined8 *)0xf8:
    goto code_r0x00010189d0d8;
  case (undefined8 *)0x2b:
  case (undefined8 *)0x4d:
  case (undefined8 *)0xcb:
  case (undefined8 *)0xce:
  case (undefined8 *)0xd3:
  case (undefined8 *)0xda:
  case (undefined8 *)0xeb:
  case (undefined8 *)0xee:
  case (undefined8 *)0xf0:
  case (undefined8 *)0xf3:
  case (undefined8 *)0xf7:
    goto code_r0x00010189d0a0;
  case (undefined8 *)0x30:
  case (undefined8 *)0x52:
    goto code_r0x00010189d0dc;
  case (undefined8 *)0x31:
  case (undefined8 *)0x53:
  case (undefined8 *)0xd6:
    goto code_r0x00010189d0c8;
  case (undefined8 *)0x33:
  case (undefined8 *)0x55:
    goto code_r0x00010189d0f0;
  case (undefined8 *)0x40:
  case (undefined8 *)0xcd:
    goto code_r0x00010189d058;
  case (undefined8 *)0x41:
  case (undefined8 *)0xf1:
  case (undefined8 *)0xf4:
    goto code_r0x00010189d0c4;
  case (undefined8 *)0x43:
  case (undefined8 *)0xef:
    goto code_r0x00010189d0cc;
  case (undefined8 *)0x59:
  case (undefined8 *)0x69:
    goto code_r0x00010189d1d4;
  case (undefined8 *)0x5a:
  case (undefined8 *)0x6a:
    goto code_r0x00010189d1a8;
  case (undefined8 *)0x5d:
    goto code_r0x00010189d064;
  case (undefined8 *)0x5e:
  case (undefined8 *)0x6e:
    goto code_r0x00010189d23c;
  case (undefined8 *)0x60:
  case (undefined8 *)0xd1:
  case (undefined8 *)0xd8:
  case (undefined8 *)0xf6:
code_r0x00010189d0b8:
    puVar5 = unaff_x20 + 2;
    puVar4 = (undefined8 *)*unaff_x20;
    puVar8 = puVar3;
    puVar2 = puVar7;
code_r0x00010189d0c4:
    puVar7 = (undefined8 *)(ulong)((uint)puVar8 & 0xff);
code_r0x00010189d0c8:
    iVar6 = (int)puVar7;
    in_OV = SBORROW4(iVar6,2);
    in_NG = iVar6 + -2 < 0;
    in_ZR = iVar6 == 2;
code_r0x00010189d0cc:
    iVar6 = (int)puVar7;
    if ((bool)in_ZR || in_NG != in_OV) {
      if (iVar6 == 0) {
        param_1 = (undefined8 *)0x0;
        func_0x0001018b7178();
        puVar3 = param_1;
        func_0x000107c613fc();
        unaff_x22 = puVar3;
code_r0x00010189d1a8:
        puVar3[0x12] = 0;
        puVar3[0x13] = 0;
        puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar3[0x14] = 0;
        puVar3[0x15] = puVar1;
        puVar3[0x16] = puVar1;
        puVar4 = puVar3 + 2;
        ppuVar9 = &PTR_DAT_11040b688;
      }
      else {
code_r0x00010189d0d4:
        in_ZR = (int)puVar7 == 1;
code_r0x00010189d0d8:
        if ((bool)in_ZR) {
code_r0x00010189d0dc:
          puVar3 = (undefined8 *)0x0;
          func_0x0001018bab54();
code_r0x00010189d0e4:
          param_1 = puVar3;
code_r0x00010189d0ec:
code_r0x00010189d0f0:
          func_0x000107c613fc();
          puVar3[0x12] = PTR___swiftEmptyArrayStorage_11034f1c8;
          puVar4 = puVar3 + 2;
          puVar3[0x14] = 0;
          puVar3[0x13] = 0;
          puVar3[0x16] = 0;
          puVar3[0x15] = 0;
          puVar3[0x17] = 0;
          ppuVar9 = &PTR_DAT_11040b7d0;
          unaff_x22 = puVar3;
        }
        else {
          func_0x000107c613fc();
          func_0x000100400294(puVar5,puVar4 + 2);
          param_1 = (undefined8 *)0x0;
          func_0x0001018b8d60();
          puVar3 = param_1;
          func_0x000107c613fc();
          unaff_x22 = puVar3;
          unaff_x23 = puVar4;
code_r0x00010189d23c:
          puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
          puVar3[0x13] = PTR___swiftEmptyArrayStorage_11034f1c8;
          puVar3[0x14] = puVar1;
          puVar3[2] = unaff_x23;
          puVar4 = puVar3 + 3;
          ppuVar9 = &PTR_DAT_11040b6d0;
        }
      }
    }
    else if (iVar6 == 3) {
      puVar3 = (undefined8 *)0x0;
      func_0x0001018abab8();
code_r0x00010189d1d4:
      unaff_x22 = puVar3;
      func_0x000107c613fc();
      puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
      unaff_x22[0x12] = PTR___swiftEmptyArrayStorage_11034f1c8;
      unaff_x22[0x13] = puVar1;
      puVar4 = unaff_x22 + 2;
      ppuVar9 = &PTR_DAT_11040b5b8;
      param_1 = puVar3;
    }
    else if (iVar6 == 4) {
      func_0x000107c613fc();
      func_0x000100400294(puVar5,puVar4 + 2);
      param_1 = (undefined8 *)0x0;
      func_0x0001018b0b40();
      puVar3 = param_1;
      func_0x000107c613fc();
      puVar7 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
      unaff_x22 = puVar3;
      unaff_x23 = puVar4;
code_r0x00010189d174:
      puVar3[0x13] = puVar7;
      puVar3[0x14] = puVar7;
      puVar3[2] = unaff_x23;
      puVar4 = puVar3 + 3;
      ppuVar9 = &PTR_DAT_11040b668;
    }
    else {
      puVar3 = (undefined8 *)0x0;
      func_0x0001018b9bcc();
      param_1 = puVar3;
code_r0x00010189d26c:
      func_0x000107c613fc();
code_r0x00010189d274:
      puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar3[0x12] = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar3[0x13] = puVar1;
      puVar4 = puVar3 + 2;
      ppuVar9 = &PTR_DAT_11040b6f0;
      unaff_x22 = puVar3;
    }
    func_0x000100400294(puVar5,puVar4);
    puVar2[3] = param_1;
    puVar2[4] = ppuVar9;
    *puVar2 = unaff_x22;
    return puVar5;
  case (undefined8 *)0x61:
  case (undefined8 *)0x71:
    goto code_r0x00010189d274;
  case (undefined8 *)0x62:
  case (undefined8 *)0x72:
    goto code_r0x00010189d018;
  case (undefined8 *)0x68:
    goto code_r0x00010189cfd0;
  case (undefined8 *)0x6c:
    goto code_r0x00010189d26c;
  case (undefined8 *)0x6d:
    goto code_r0x00010189d060;
  case (undefined8 *)0x70:
    goto code_r0x00010189d0ec;
  case (undefined8 *)0x80:
    goto code_r0x00010189d174;
  case (undefined8 *)0x82:
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_deallocClassInstance_11034f290)();
    return unaff_x20;
  case (undefined8 *)0xb0:
    goto code_r0x00010189cfcc;
  case (undefined8 *)0xd0:
  case (undefined8 *)0xd7:
    goto code_r0x00010189d0e4;
  case (undefined8 *)0xed:
    goto code_r0x00010189d01c;
  }
  func_0x000107c613fc();
  func_0x000107c61574(puVar2);
  param_1 = puVar3;
code_r0x00010189d04c:
  param_1[0x12] = PTR___swiftEmptyArrayStorage_11034f1c8;
code_r0x00010189d058:
code_r0x00010189d05c:
code_r0x00010189d060:
  func_0x000100400294();
code_r0x00010189d064:
  return param_1;
code_r0x00010189cfd0:
  goto code_r0x00010189d05c;
}



/* Entry: 10189d078; end: 10189d0a3;  */

void FUN_10189d078(ulong *param_1,byte *param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*param_2;
  FUN_10189cebc();
  *param_1 = uVar1;
  return;
}



/* Entry: 10189d0a4; end: 10189d2b3;  */

void FUN_10189d0a4(long *param_1,byte param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  long *plVar5;
  undefined **ppuVar6;
  
  plVar5 = unaff_x20 + 2;
  lVar2 = *unaff_x20;
  if (param_2 < 3) {
    if (param_2 == 0) {
      lVar3 = 0;
      func_0x0001018b7178();
      lVar4 = lVar3;
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x90) = 0;
      *(undefined8 *)(lVar4 + 0x98) = 0;
      puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
      *(undefined8 *)(lVar4 + 0xa0) = 0;
      *(undefined **)(lVar4 + 0xa8) = puVar1;
      *(undefined **)(lVar4 + 0xb0) = puVar1;
      lVar2 = lVar4 + 0x10;
      ppuVar6 = &PTR_DAT_11040b688;
    }
    else if (param_2 == 1) {
      lVar3 = 0;
      func_0x0001018bab54();
      lVar4 = lVar3;
      func_0x000107c613fc();
      *(undefined **)(lVar4 + 0x90) = PTR___swiftEmptyArrayStorage_11034f1c8;
      lVar2 = lVar4 + 0x10;
      *(undefined8 *)(lVar4 + 0xa0) = 0;
      *(undefined8 *)(lVar4 + 0x98) = 0;
      *(undefined8 *)(lVar4 + 0xb0) = 0;
      *(undefined8 *)(lVar4 + 0xa8) = 0;
      *(undefined8 *)(lVar4 + 0xb8) = 0;
      ppuVar6 = &PTR_DAT_11040b7d0;
    }
    else {
      func_0x000107c613fc(lVar2,0x90,7);
      func_0x000100400294(plVar5,lVar2 + 0x10);
      lVar3 = 0;
      func_0x0001018b8d60();
      lVar4 = lVar3;
      func_0x000107c613fc();
      puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
      *(undefined **)(lVar4 + 0x98) = PTR___swiftEmptyArrayStorage_11034f1c8;
      *(undefined **)(lVar4 + 0xa0) = puVar1;
      *(long *)(lVar4 + 0x10) = lVar2;
      lVar2 = lVar4 + 0x18;
      ppuVar6 = &PTR_DAT_11040b6d0;
    }
  }
  else if (param_2 == 3) {
    lVar3 = 0;
    func_0x0001018abab8();
    lVar4 = lVar3;
    func_0x000107c613fc();
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined **)(lVar4 + 0x90) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined **)(lVar4 + 0x98) = puVar1;
    lVar2 = lVar4 + 0x10;
    ppuVar6 = &PTR_DAT_11040b5b8;
  }
  else if (param_2 == 4) {
    func_0x000107c613fc(lVar2,0x90,7);
    func_0x000100400294(plVar5,lVar2 + 0x10);
    lVar3 = 0;
    func_0x0001018b0b40();
    lVar4 = lVar3;
    func_0x000107c613fc();
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined **)(lVar4 + 0x98) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined **)(lVar4 + 0xa0) = puVar1;
    *(long *)(lVar4 + 0x10) = lVar2;
    lVar2 = lVar4 + 0x18;
    ppuVar6 = &PTR_DAT_11040b668;
  }
  else {
    lVar3 = 0;
    func_0x0001018b9bcc();
    lVar4 = lVar3;
    func_0x000107c613fc();
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined **)(lVar4 + 0x90) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined **)(lVar4 + 0x98) = puVar1;
    lVar2 = lVar4 + 0x10;
    ppuVar6 = &PTR_DAT_11040b6f0;
  }
  func_0x000100400294(plVar5,lVar2);
  param_1[3] = lVar3;
  param_1[4] = (long)ppuVar6;
  *param_1 = lVar4;
  return;
}



/* Entry: 10189d2b4; end: 10189d2f7;  */

void FUN_10189d2b4(void)

{
  long unaff_x20;
  
  func_0x000100400450(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10189d2f8; end: 10189d31b;  */

void FUN_10189d2f8(undefined1 *param_1)

{
  FUN_10189d0a4(*param_1);
  return;
}



/* Entry: 10189d31c; end: 10189d31f;  */

void FUN_10189d31c(void)

{
  long unaff_x20;
  
  func_0x000100400450(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10189d320; end: 10189d3ef;  */

bool FUN_10189d320(ulong *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar2 = *param_1;
  uVar4 = uVar2 & 0xffffffff;
  if (uVar4 == 10) {
    uVar5 = (uint)((int)param_1[5] == 5);
  }
  else {
    uVar5 = 0;
  }
  if (param_2 == 0) {
    uVar1 = 0;
    uVar3 = param_1[5];
  }
  else {
    uVar3 = param_1[5];
    func_0x000107c42564(param_2,param_2,uVar2,uVar3);
    uVar1 = (uint)param_2;
  }
  func_0x000107c614f0(param_3);
  FUN_1018ad758(uVar2,uVar3,param_3,param_4);
  uVar5 = uVar5 | uVar1 | (uint)uVar2;
  if (uVar4 == 10) {
    if ((uVar5 & 1) == 0) {
      return (int)uVar3 == 4;
    }
  }
  else if ((uVar5 & 1) == 0) {
    return false;
  }
  return true;
}



/* Entry: 10189d3f0; end: 10189d72f;  */

void FUN_10189d3f0(ulong *param_1,ulong param_2,long param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar4 = *(undefined8 *)(param_3 + 8);
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar3 = uVar4;
  func_0x000107c5fadc(uVar4,uVar1);
  if (-1 < *(long *)(param_3 + 0x20)) {
    uVar10 = param_2;
    func_0x000107c5e28c();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    uVar3 = 0;
    func_0x0001046a938c(0);
    uVar6 = uVar10;
    func_0x000107c5fc54(uVar10,uVar3);
    func_0x000107c61170(uVar10);
    uVar3 = uVar4;
    func_0x000107c5fadc(uVar4,uVar1);
    uVar10 = param_2;
    func_0x000107c5e290();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    uVar3 = 0;
    func_0x0001046a97cc(0);
    uVar7 = uVar10;
    func_0x000107c5fc54(uVar10,uVar3);
    func_0x000107c61170(uVar10);
    uVar3 = uVar4;
    func_0x000107c5fadc(uVar4,uVar1);
    uVar10 = param_2;
    func_0x000107c5e294();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    uVar3 = 0;
    func_0x0001046a9c0c(0);
    uVar8 = uVar10;
    func_0x000107c5fc54(uVar10,uVar3);
    func_0x000107c61170(uVar10);
    uVar3 = uVar4;
    func_0x000107c5fadc(uVar4,uVar1);
    uVar10 = param_2;
    func_0x000107c497e8();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    uVar3 = 0;
    func_0x00010468314c(0);
    uVar9 = uVar10;
    func_0x000107c5fc54(uVar10,uVar3);
    func_0x000107c61170(uVar10);
    func_0x000107c5fadc(uVar4,uVar1);
    func_0x000107c5e298();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    uVar4 = 0;
    func_0x0001046a9fe4(0);
    uVar10 = param_2;
    func_0x000107c5fc54(param_2,uVar4);
    func_0x000107c61170(param_2);
    if (uVar6 >> 0x3e == 0) {
      uVar5 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = uVar6 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar6) {
        uVar5 = uVar6;
      }
      func_0x000107c60480();
    }
    if (uVar5 == 0) {
      if (uVar7 >> 0x3e == 0) {
        uVar5 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar5 = uVar7 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar7) {
          uVar5 = uVar7;
        }
        func_0x000107c60480();
      }
      if (uVar5 == 0) {
        if (uVar8 >> 0x3e == 0) {
          uVar5 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar5 = uVar8 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar8) {
            uVar5 = uVar8;
          }
          func_0x000107c60480();
        }
        if (uVar5 == 0) {
          if (uVar9 >> 0x3e == 0) {
            uVar5 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar5 = uVar9 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar9) {
              uVar5 = uVar9;
            }
            func_0x000107c60480();
          }
          if (uVar5 == 0) {
            if (uVar10 >> 0x3e == 0) {
              uVar5 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
            }
            else {
              uVar5 = uVar10 & 0xffffffffffffff8;
              if (0x7fffffffffffffff < uVar10) {
                uVar5 = uVar10;
              }
              func_0x000107c60480();
            }
            if (uVar5 == 0) {
              func_0x000107c6142c(uVar6);
              func_0x000107c6142c(uVar7);
              func_0x000107c6142c(uVar8);
              func_0x000107c6142c(uVar9);
              func_0x000107c6142c(uVar10);
              uVar6 = 0;
              uVar7 = 0;
              uVar8 = 0;
              uVar9 = 0;
              uVar10 = 0;
            }
          }
        }
      }
    }
    *param_1 = uVar6;
    param_1[1] = uVar7;
    param_1[2] = uVar8;
    param_1[3] = uVar9;
    param_1[4] = uVar10;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10189d6bc);
  (*pcVar2)();
}



/* Entry: 10189d730; end: 10189f5af;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10189d730(double param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *puVar18;
  bool bVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  
  if (param_3 != 0) {
    uVar10 = param_3 & 0xffffffffffffff8;
    if (param_3 >> 0x3e == 0) {
      uVar13 = *(ulong *)(uVar10 + 0x10);
    }
    else {
      uVar13 = param_3;
      if (-1 < (long)param_3) {
        uVar13 = uVar10;
      }
      func_0x000107c60480();
    }
    uVar14 = 0;
    while (uVar13 != uVar14) {
      if ((param_3 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar10 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10189e108);
          (*pcVar3)();
        }
        uVar5 = *(ulong *)(param_3 + uVar14 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar14;
        func_0x000101887ce8(uVar14,param_3);
      }
      lVar2 = _DAT_11308bea8;
      if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10189e104);
        (*pcVar3)();
      }
      iVar4 = (int)*(undefined8 *)(uVar5 + _DAT_11308bea8);
      func_0x000107c30b48();
      if (iVar4 == 2) {
        func_0x000107c61170(uVar5);
        return 0.0;
      }
      iVar4 = (int)*(undefined8 *)(uVar5 + lVar2);
      func_0x000107c30b48();
      func_0x000107c61170(uVar5);
      uVar14 = uVar14 + 1;
      if (iVar4 == 4) {
        return 0.0;
      }
    }
  }
  if (param_4 != 0) {
    uVar10 = param_4 & 0xffffffffffffff8;
    if (param_4 >> 0x3e == 0) {
      uVar13 = *(ulong *)(uVar10 + 0x10);
    }
    else {
      uVar13 = param_4;
      if (-1 < (long)param_4) {
        uVar13 = uVar10;
      }
      func_0x000107c60480();
    }
    uVar14 = 0;
    while (uVar13 != uVar14) {
      if ((param_4 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar10 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10189e10c);
          (*pcVar3)();
        }
        uVar5 = *(ulong *)(param_4 + uVar14 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar14;
        func_0x000101887e84(uVar14,param_4);
      }
      if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10189d8a0);
        (*pcVar3)();
      }
      iVar4 = (int)*(undefined8 *)(uVar5 + _DAT_11308cf08);
      func_0x000107c30c30();
      func_0x000107c61170(uVar5);
      uVar14 = uVar14 + 1;
      if (iVar4 == 10) {
        return 0.0;
      }
    }
  }
  if (param_2 >> 0x3e == 0) {
    uVar10 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
    if (uVar10 == 0) goto LAB_10189e13c;
LAB_10189d8c0:
    if ((long)uVar10 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10189e24c);
      (*pcVar3)();
    }
    if ((param_2 & 0xc000000000000001) == 0) {
      uStack_b8 = 0;
      uStack_b0 = 0;
      uVar13 = 0;
      uVar14 = 0;
      uVar5 = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      uVar15 = 0;
      uStack_a8 = 0;
      dVar22 = 0.0;
      puVar18 = (ulong *)(param_2 + 0x20);
      dVar20 = param_1;
      do {
        lVar2 = _DAT_11308c0c8;
        uVar11 = *puVar18;
        iVar4 = (int)*(undefined8 *)(uVar11 + _DAT_11308c0c8);
        uVar7 = uVar11;
        func_0x000107c61174();
        func_0x000107c30b1c();
        uVar16 = uVar15;
        uVar17 = uVar15;
        uVar12 = uStack_b8;
        uVar8 = uStack_a8;
        if (iVar4 < 7) {
          uVar8 = uVar7;
          uVar1 = uStack_a8;
          if ((iVar4 != 3) && (uVar8 = uStack_a8, uVar16 = uVar7, uVar1 = uVar15, iVar4 != 4)) {
            if (iVar4 != 6) goto LAB_10189dd98;
            func_0x000107c61170(uStack_a0);
            uVar16 = uVar15;
            uStack_a0 = uVar7;
            goto LAB_10189ddc0;
          }
joined_r0x00010189dd60:
          if (uVar1 == 0) {
LAB_10189ddc0:
            uStack_a8 = uVar8;
            uStack_b8 = uVar12;
            func_0x000107c61174(uVar7);
            uVar17 = uVar16;
          }
LAB_10189ddc8:
          uVar15 = uVar5;
          if ((uVar5 != 0) || (uVar5 = 0, uVar15 = uVar13, uVar13 != 0)) goto LAB_10189dde0;
          bVar19 = true;
          dVar21 = 0.0;
          uVar15 = uVar14;
          param_1 = dVar20;
          if (uVar14 != 0) goto LAB_10189de24;
LAB_10189de4c:
          uVar15 = uVar17;
          uVar12 = uVar15;
          if (uVar15 == 0) {
            if (uStack_a8 != 0) {
              uVar12 = uStack_a8;
              func_0x000107c61174();
              goto LAB_10189de68;
            }
            func_0x000107c61170(uVar7);
            uVar14 = 0;
            uVar15 = 0;
            uStack_a8 = 0;
          }
          else {
LAB_10189de68:
            if (uStack_98 != 0 || uStack_a0 != 0) {
              puVar9 = (undefined8 *)(uVar12 + _DAT_11308c0c0);
              uVar17 = uVar15;
              dVar20 = param_1;
              goto LAB_10189de88;
            }
            func_0x000107c61174(uVar15);
            func_0x000107c61170(uVar12);
            func_0x000107c61170(uVar7);
            uVar14 = 0;
            uStack_a0 = 0;
            uStack_98 = 0;
          }
        }
        else {
          if (8 < iVar4) {
            if (iVar4 == 9) {
              iVar4 = (int)*(undefined8 *)(uVar11 + lVar2);
              func_0x000107c30b28();
              if (iVar4 == 0) goto LAB_10189dd98;
              func_0x000107c61170(uVar14);
              uVar14 = uVar7;
            }
            else if (iVar4 == 10) {
              func_0x000107c61170(uVar13);
              uVar13 = uVar7;
            }
            else {
LAB_10189dd98:
              iVar4 = (int)*(undefined8 *)(uVar11 + lVar2);
              func_0x000107c30b24();
              if (iVar4 != 4) {
                iVar4 = (int)*(undefined8 *)(uVar11 + lVar2);
                func_0x000107c30b24();
                if (iVar4 == 5) {
                  uVar12 = uVar7;
                  uVar8 = uStack_a8;
                  uVar16 = uVar15;
                  uVar1 = uStack_b8;
                  if (uStack_98 != 0 || uStack_a0 != 0) goto joined_r0x00010189dd60;
                  uStack_a0 = 0;
                  uStack_98 = 0;
                }
                goto LAB_10189ddc8;
              }
              func_0x000107c61170(uStack_b0);
              uVar16 = uVar15;
              uStack_b0 = uVar7;
              uVar8 = uStack_a8;
            }
            goto LAB_10189ddc0;
          }
          if (iVar4 == 7) {
            func_0x000107c61170(uStack_98);
            uStack_98 = uVar7;
            goto LAB_10189ddc0;
          }
          if (iVar4 != 8) goto LAB_10189dd98;
          func_0x000107c61170(uVar5);
          uVar15 = uVar7;
          func_0x000107c61174();
          uVar5 = uVar7;
LAB_10189dde0:
          func_0x000107c61174();
          uVar6 = *(undefined8 *)(uVar15 + _DAT_11308c0c0);
          func_0x000107c61174(uVar6);
          func_0x000107c61170(uVar15);
          func_0x000107c30b10(uVar6);
          param_1 = dVar20;
          func_0x000107c61170(uVar6);
          bVar19 = false;
          uVar15 = uVar14;
          dVar21 = dVar20;
          if (uVar14 == 0) goto LAB_10189de4c;
LAB_10189de24:
          puVar9 = (undefined8 *)(uVar15 + _DAT_11308c0c0);
          uVar12 = uVar15;
          uVar14 = uVar15;
          dVar20 = param_1;
LAB_10189de88:
          uVar6 = *puVar9;
          func_0x000107c61174(uVar15);
          func_0x000107c61174(uVar6);
          func_0x000107c30b10();
          param_1 = dVar20;
          func_0x000107c61170(uVar6);
          func_0x000107c61170(uVar12);
          func_0x000107c61170(uVar7);
          uVar15 = uVar17;
          if (!bVar19) {
            func_0x000107c61170(uVar5);
            func_0x000107c61170(uVar13);
            func_0x000107c61170(uVar14);
            func_0x000107c61170(uVar17);
            func_0x000107c61170(uStack_a8);
            func_0x000107c61170(uStack_98);
            func_0x000107c61170(uStack_a0);
            func_0x000107c61170(uStack_b8);
            func_0x000107c61170(uStack_b0);
            uStack_b8 = 0;
            uStack_b0 = 0;
            uVar13 = 0;
            uVar14 = 0;
            uVar5 = 0;
            uStack_a0 = 0;
            uStack_98 = 0;
            uVar15 = 0;
            uStack_a8 = 0;
            param_1 = 0.0;
            if (0.0 < dVar21 - dVar20) {
              param_1 = dVar21 - dVar20;
            }
            dVar22 = dVar22 + param_1;
          }
        }
        uVar10 = uVar10 - 1;
        puVar18 = puVar18 + 1;
        dVar20 = param_1;
      } while (uVar10 != 0);
    }
    else {
      uStack_b8 = 0;
      uStack_b0 = 0;
      uVar13 = 0;
      uVar14 = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_a8 = 0;
      uVar12 = 0;
      dVar22 = 0.0;
      uVar16 = 0;
      uVar8 = 0;
      do {
        uVar7 = uVar12;
        func_0x000101887b4c(uVar12,param_2);
        lVar2 = _DAT_11308c0c8;
        iVar4 = (int)*(undefined8 *)(uVar7 + _DAT_11308c0c8);
        func_0x000107c30b1c();
        if (iVar4 < 7) {
          if (iVar4 == 3) {
            if (uStack_a8 == 0) {
              func_0x000107c61174(uVar7);
              uStack_a8 = uVar7;
            }
          }
          else if (iVar4 == 4) {
            if (uVar16 == 0) {
              func_0x000107c61174(uVar7);
              uVar16 = uVar7;
            }
          }
          else {
            if (iVar4 != 6) goto LAB_10189da38;
            func_0x000107c61170(uStack_a0);
            func_0x000107c615f0(uVar7);
            uStack_a0 = uVar7;
          }
LAB_10189daac:
          uVar5 = uVar8;
          if ((uVar8 != 0) || (uVar8 = 0, uVar5 = uVar13, uVar13 != 0)) goto LAB_10189dac4;
          bVar19 = true;
          dVar21 = 0.0;
          uVar5 = 0;
          uVar13 = uVar8;
          uVar15 = uVar14;
          dVar20 = param_1;
          if (uVar14 != 0) goto LAB_10189db18;
LAB_10189db44:
          param_1 = dVar20;
          uVar15 = uVar16;
          uVar8 = uVar15;
          if (uVar15 == 0) {
            if (uStack_a8 != 0) {
              uVar8 = uStack_a8;
              func_0x000107c61174();
              goto LAB_10189db60;
            }
            func_0x000107c615e8(uVar7);
            uVar14 = 0;
            uVar15 = 0;
            uStack_a8 = 0;
          }
          else {
LAB_10189db60:
            if (uStack_98 != 0 || uStack_a0 != 0) {
              puVar9 = (undefined8 *)(uVar8 + _DAT_11308c0c0);
              uVar16 = uVar15;
              dVar20 = param_1;
              goto LAB_10189db80;
            }
            func_0x000107c61174(uVar15);
            func_0x000107c61170(uVar8);
            func_0x000107c615e8(uVar7);
            uVar14 = 0;
            uStack_a0 = 0;
            uStack_98 = 0;
          }
        }
        else {
          if (8 < iVar4) {
            if (iVar4 == 9) {
              iVar4 = (int)*(undefined8 *)(uVar7 + lVar2);
              func_0x000107c30b28();
              if (iVar4 == 0) goto LAB_10189da38;
              func_0x000107c61170(uVar14);
              func_0x000107c615f0(uVar7);
              uVar14 = uVar7;
            }
            else if (iVar4 == 10) {
              func_0x000107c61170(uVar13);
              func_0x000107c615f0(uVar7);
              uVar13 = uVar7;
            }
            else {
LAB_10189da38:
              iVar4 = (int)*(undefined8 *)(uVar7 + lVar2);
              func_0x000107c30b24();
              if (iVar4 == 4) {
                func_0x000107c61170(uStack_b0);
                func_0x000107c615f0(uVar7);
                uStack_b0 = uVar7;
              }
              else {
                iVar4 = (int)*(undefined8 *)(uVar7 + lVar2);
                func_0x000107c30b24();
                if (iVar4 == 5) {
                  if (uStack_98 == 0 && uStack_a0 == 0) {
                    uStack_a0 = 0;
                    uStack_98 = 0;
                  }
                  else if (uStack_b8 == 0) {
                    func_0x000107c61174(uVar7);
                    uStack_b8 = uVar7;
                  }
                }
              }
            }
            goto LAB_10189daac;
          }
          if (iVar4 == 7) {
            func_0x000107c61170(uStack_98);
            func_0x000107c615f0(uVar7);
            uStack_98 = uVar7;
            goto LAB_10189daac;
          }
          if (iVar4 != 8) goto LAB_10189da38;
          func_0x000107c61170(uVar8);
          func_0x000107c615f0(uVar7);
          uVar8 = uVar7;
          uVar5 = uVar7;
LAB_10189dac4:
          func_0x000107c61174();
          uVar6 = *(undefined8 *)(uVar5 + _DAT_11308c0c0);
          func_0x000107c61174(uVar6);
          func_0x000107c61170(uVar5);
          func_0x000107c30b10(uVar6);
          dVar20 = param_1;
          func_0x000107c61170(uVar6);
          bVar19 = false;
          uVar15 = uVar14;
          uVar5 = uVar8;
          dVar21 = param_1;
          if (uVar14 == 0) goto LAB_10189db44;
LAB_10189db18:
          puVar9 = (undefined8 *)(uVar15 + _DAT_11308c0c0);
          uVar8 = uVar15;
          uVar14 = uVar15;
LAB_10189db80:
          uVar6 = *puVar9;
          func_0x000107c61174(uVar15);
          func_0x000107c61174(uVar6);
          func_0x000107c30b10();
          param_1 = dVar20;
          func_0x000107c61170(uVar6);
          func_0x000107c61170(uVar8);
          func_0x000107c615e8(uVar7);
          uVar15 = uVar16;
          if (!bVar19) {
            func_0x000107c61170(uVar5);
            func_0x000107c61170(uVar13);
            func_0x000107c61170(uVar14);
            func_0x000107c61170(uVar16);
            func_0x000107c61170(uStack_a8);
            func_0x000107c61170(uStack_98);
            func_0x000107c61170(uStack_a0);
            func_0x000107c61170(uStack_b8);
            func_0x000107c61170(uStack_b0);
            uStack_b8 = 0;
            uStack_b0 = 0;
            uVar13 = 0;
            uVar14 = 0;
            uVar5 = 0;
            uStack_a0 = 0;
            uStack_98 = 0;
            uVar15 = 0;
            uStack_a8 = 0;
            param_1 = 0.0;
            if (0.0 < dVar21 - dVar20) {
              param_1 = dVar21 - dVar20;
            }
            dVar22 = dVar22 + param_1;
          }
        }
        uVar12 = uVar12 + 1;
        uVar16 = uVar15;
        uVar8 = uVar5;
      } while (uVar10 != uVar12);
    }
    if (dVar22 == 0.0) {
      uVar10 = uVar15;
      dVar20 = param_1;
      if (uVar15 == 0) {
        if (uStack_a8 == 0) {
          uStack_a8 = 0;
          uVar15 = 0;
          goto LAB_10189e09c;
        }
        uVar10 = uStack_a8;
        func_0x000107c61174();
        dVar20 = param_1;
      }
      uVar12 = uStack_b0;
      if (uStack_b0 == 0) {
        if (uStack_b8 != 0) {
          uVar12 = uStack_b8;
          func_0x000107c61174();
          goto LAB_10189dfd8;
        }
        func_0x000107c61174(uVar15);
        uStack_b0 = 0;
      }
      else {
LAB_10189dfd8:
        if (uStack_98 != 0 || uStack_a0 != 0) {
          uVar6 = *(undefined8 *)(uVar12 + _DAT_11308c0c0);
          func_0x000107c61174(uStack_b0);
          func_0x000107c61174(uVar15);
          func_0x000107c30b10(uVar6);
          uVar6 = *(undefined8 *)(uVar10 + _DAT_11308c0c0);
          dVar22 = dVar20;
          func_0x000107c61174(uVar6);
          func_0x000107c30b10();
          param_1 = dVar22;
          func_0x000107c61170(uVar6);
          func_0x000107c61170(uVar12);
          func_0x000107c61170(uVar10);
          dVar22 = dVar20 - dVar22;
          dVar20 = 0.0;
          if (dVar22 <= 0.0) goto joined_r0x00010189e15c;
          goto LAB_10189e09c;
        }
        func_0x000107c61174(uStack_b0);
        func_0x000107c61174(uVar15);
        func_0x000107c61170(uVar10);
        uStack_a0 = 0;
        uStack_98 = 0;
        uVar10 = uVar12;
      }
      func_0x000107c61170(uVar10);
      param_1 = dVar20;
    }
LAB_10189e09c:
    dVar20 = dVar22;
    if (dVar22 != 0.0) {
      func_0x000107c61170(uStack_a0);
      func_0x000107c61170(uStack_98);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar13);
      func_0x000107c61170(uVar14);
      func_0x000107c61170(uStack_b0);
      func_0x000107c61170(uVar15);
      func_0x000107c61170(uStack_a8);
      func_0x000107c61170(uStack_b8);
      goto LAB_10189e360;
    }
  }
  else {
    uVar10 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar10 = param_2;
    }
    func_0x000107c60480();
    if (uVar10 != 0) goto LAB_10189d8c0;
LAB_10189e13c:
    uStack_b0 = 0;
    uStack_b8 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar5 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uVar15 = 0;
    uStack_a8 = 0;
    dVar20 = 0.0;
  }
joined_r0x00010189e15c:
  dVar22 = dVar20;
  if (param_5 == 0) {
LAB_10189e25c:
    func_0x000107c61170(uStack_a0);
    func_0x000107c61170(uStack_98);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uStack_b0);
    func_0x000107c61170(uVar15);
    uStack_b0 = uStack_a8;
  }
  else {
    uVar10 = param_5 & 0xffffffffffffff8;
    if (param_5 >> 0x3e != 0) {
      uVar12 = param_5;
      if (-1 < (long)param_5) {
        uVar12 = uVar10;
      }
      func_0x000107c60480();
      if (uVar12 != 0) goto LAB_10189e174;
      goto LAB_10189e25c;
    }
    uVar12 = *(ulong *)(uVar10 + 0x10);
    if (uVar12 == 0) goto LAB_10189e25c;
LAB_10189e174:
    uVar8 = uVar12 - 1;
    if (SBORROW8(uVar12,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10189e2ac);
      (*pcVar3)();
    }
    if ((param_5 & 0xc000000000000001) == 0) {
      if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10189e3d0);
        (*pcVar3)();
      }
      if (*(ulong *)(uVar10 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10189e3d4);
        (*pcVar3)();
      }
      uVar8 = *(ulong *)(param_5 + uVar8 * 8 + 0x20);
      func_0x000107c61174();
      if (uVar15 == 0) goto LAB_10189e2b8;
LAB_10189e1a4:
      func_0x000107c30b10(*(undefined8 *)(uVar8 + _DAT_11308bf78));
      uVar6 = *(undefined8 *)(uVar15 + _DAT_11308c0c0);
      dVar22 = param_1;
      func_0x000107c61174(uVar6);
      func_0x000107c30b10();
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar15);
      func_0x000107c61170(uStack_a0);
      func_0x000107c61170(uStack_98);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar13);
      func_0x000107c61170(uVar14);
      func_0x000107c61170(uStack_b0);
      uStack_b0 = uStack_a8;
LAB_10189e344:
      func_0x000107c61170(uStack_b0);
      func_0x000107c61170(uStack_b8);
      dVar22 = param_1 - dVar22;
      if (dVar22 <= 0.0) {
        dVar22 = 0.0;
      }
      goto LAB_10189e360;
    }
    func_0x000101888020(uVar8,param_5);
    if (uVar15 != 0) goto LAB_10189e1a4;
LAB_10189e2b8:
    if (uStack_a8 != 0) {
      func_0x000107c30b10(*(undefined8 *)(uVar8 + _DAT_11308bf78));
      uVar6 = *(undefined8 *)(uStack_a8 + _DAT_11308c0c0);
      dVar22 = param_1;
      func_0x000107c61174(uVar6);
      func_0x000107c30b10();
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uStack_a8);
      func_0x000107c61170(uStack_a0);
      func_0x000107c61170(uStack_98);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar13);
      func_0x000107c61170(uVar14);
      goto LAB_10189e344;
    }
    func_0x000107c61170();
    func_0x000107c61170(uStack_a0);
    func_0x000107c61170(uStack_98);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar14);
  }
  func_0x000107c61170(uStack_b0);
  func_0x000107c61170(uStack_b8);
LAB_10189e360:
  if (0.0 < dVar22) {
    return dVar22;
  }
  return 0.0;
}



/* Entry: 10189f5b0; end: 10189f9f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10189f5b0(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puStack_78;
  undefined *puStack_70;
  
  if (param_1 == 0) {
    puStack_78 = (undefined *)0x0;
    puStack_70 = (undefined *)0x0;
    puVar7 = (undefined *)0x0;
  }
  else {
    uVar10 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar10 + 0x10);
    }
    else {
      uVar8 = uVar10;
      if ((param_1 & 0x8000000000000000) != 0) {
        uVar8 = param_1;
      }
      func_0x000107c60480();
    }
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar11 = param_1 & 0xc000000000000001;
    if (uVar8 != 0) {
      uVar9 = 0;
      do {
        while( true ) {
          if (uVar11 == 0) {
            if (*(ulong *)(uVar10 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10189f810);
              (*pcVar3)();
            }
            uVar5 = *(ulong *)(param_1 + uVar9 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar5 = uVar9;
            func_0x000101887ce8(uVar9,param_1);
          }
          uVar1 = uVar9 + 1;
          if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10189f80c);
            (*pcVar3)();
          }
          iVar4 = (int)*(undefined8 *)(uVar5 + _DAT_11308bea8);
          func_0x000107c30b48();
          if (iVar4 == 1) break;
          func_0x000107c61170(uVar5);
          uVar9 = uVar9 + 1;
          if (uVar1 == uVar8) goto LAB_10189f6fc;
        }
        puVar6 = puVar7;
        func_0x000107c61558();
        if (((ulong)puVar6 & 1) == 0) {
          func_0x0001018aceac(0,*(long *)(puVar7 + 0x10) + 1,1);
        }
        uVar9 = *(ulong *)(puVar7 + 0x10);
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar9) {
          func_0x0001018aceac(1 < *(ulong *)(puVar7 + 0x18),uVar9 + 1,1);
        }
        *(ulong *)(puVar7 + 0x10) = uVar9 + 1;
        *(ulong *)(puVar7 + uVar9 * 8 + 0x20) = uVar5;
        uVar9 = uVar1;
      } while (uVar1 != uVar8);
    }
LAB_10189f6fc:
    if (((long)puVar7 < 0) || (((ulong)puVar7 >> 0x3e & 1) != 0)) {
      puStack_70 = puVar7;
      func_0x000107c60480();
    }
    else {
      puStack_70 = *(undefined **)(puVar7 + 0x10);
    }
    func_0x000107c61574(puVar7);
    if (param_1 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar10 + 0x10);
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar8 = uVar10;
      if ((param_1 & 0x8000000000000000) != 0) {
        uVar8 = param_1;
      }
      func_0x000107c60480();
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar7;
    if (uVar8 != 0) {
      uVar9 = 0;
      do {
        while( true ) {
          if (uVar11 == 0) {
            if (*(ulong *)(uVar10 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10189f818);
              (*pcVar3)();
            }
            uVar5 = *(ulong *)(param_1 + uVar9 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar5 = uVar9;
            func_0x000101887ce8(uVar9,param_1);
          }
          uVar1 = uVar9 + 1;
          if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10189f814);
            (*pcVar3)();
          }
          iVar4 = (int)*(undefined8 *)(uVar5 + _DAT_11308bea8);
          func_0x000107c30b48();
          if (iVar4 == 2) break;
          func_0x000107c61170(uVar5);
          uVar9 = uVar9 + 1;
          if (uVar1 == uVar8) goto LAB_10189f848;
        }
        puVar6 = puVar7;
        func_0x000107c61558();
        if (((ulong)puVar6 & 1) == 0) {
          func_0x0001018aceac(0,*(long *)(puVar7 + 0x10) + 1,1);
        }
        uVar9 = *(ulong *)(puVar7 + 0x10);
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar9) {
          func_0x0001018aceac(1 < *(ulong *)(puVar7 + 0x18),uVar9 + 1,1);
        }
        *(ulong *)(puVar7 + 0x10) = uVar9 + 1;
        *(ulong *)(puVar7 + uVar9 * 8 + 0x20) = uVar5;
        uVar9 = uVar1;
      } while (uVar1 != uVar8);
    }
LAB_10189f848:
    if (((long)puVar7 < 0) || (((ulong)puVar7 >> 0x3e & 1) != 0)) {
      puStack_78 = puVar7;
      func_0x000107c60480();
    }
    else {
      puStack_78 = *(undefined **)(puVar7 + 0x10);
    }
    func_0x000107c61574(puVar7);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar8 != 0) {
      uVar9 = 0;
      do {
        while( true ) {
          if (uVar11 == 0) {
            if (*(ulong *)(uVar10 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10189f9c4);
              (*pcVar3)();
            }
            uVar5 = *(ulong *)(param_1 + uVar9 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar5 = uVar9;
            func_0x000101887ce8(uVar9,param_1);
          }
          lVar2 = _DAT_11308bea8;
          uVar1 = uVar9 + 1;
          if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10189f9c0);
            (*pcVar3)();
          }
          iVar4 = (int)*(undefined8 *)(uVar5 + _DAT_11308bea8);
          func_0x000107c30b48();
          if (iVar4 != 3) break;
LAB_10189f8f8:
          puVar7 = puVar6;
          func_0x000107c61558();
          if (((ulong)puVar7 & 1) == 0) {
            func_0x0001018aceac(0,*(long *)(puVar6 + 0x10) + 1,1);
          }
          uVar9 = *(ulong *)(puVar6 + 0x10);
          if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar9) {
            func_0x0001018aceac(1 < *(ulong *)(puVar6 + 0x18),uVar9 + 1,1);
          }
          *(ulong *)(puVar6 + 0x10) = uVar9 + 1;
          *(ulong *)(puVar6 + uVar9 * 8 + 0x20) = uVar5;
          uVar9 = uVar1;
          if (uVar1 == uVar8) goto LAB_10189f974;
        }
        iVar4 = (int)*(undefined8 *)(uVar5 + lVar2);
        func_0x000107c30b48();
        if (iVar4 == 4) goto LAB_10189f8f8;
        iVar4 = (int)*(undefined8 *)(uVar5 + lVar2);
        func_0x000107c30b48();
        if (iVar4 == 5) goto LAB_10189f8f8;
        func_0x000107c61170(uVar5);
        uVar9 = uVar9 + 1;
      } while (uVar1 != uVar8);
    }
LAB_10189f974:
    if (((long)puVar6 < 0) || (((ulong)puVar6 >> 0x3e & 1) != 0)) {
      puVar7 = puVar6;
      func_0x000107c60480();
    }
    else {
      puVar7 = *(undefined **)(puVar6 + 0x10);
    }
    func_0x000107c61574(puVar6);
  }
  if ((long)puStack_78 <= (long)puStack_70) {
    puStack_78 = puStack_70;
  }
  if ((long)puVar7 <= (long)puStack_78) {
    puVar7 = puStack_78;
  }
  return puVar7;
}



/* Entry: 10189f9f4; end: 10189fbff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10189f9f4(double param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  double dVar10;
  
  if (param_2 >> 0x3e == 0) {
    uVar8 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar8 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar8 != 0) {
    uVar9 = 0;
    do {
      if ((param_2 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10189fbb0);
          (*pcVar3)();
        }
        uVar5 = *(ulong *)(param_2 + uVar9 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar9;
        FUN_101887b4c(uVar9,param_2);
      }
      lVar2 = _DAT_11308c0c8;
      uVar6 = uVar9 + 1;
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10189fbac);
        (*pcVar3)();
      }
      iVar4 = (int)*(undefined8 *)(uVar5 + _DAT_11308c0c8);
      func_0x000107c30b1c();
      if (iVar4 == 4) goto LAB_10189fab8;
      iVar4 = (int)*(undefined8 *)(uVar5 + lVar2);
      func_0x000107c30b1c();
      if (iVar4 == 3) goto LAB_10189fab8;
      func_0x000107c61170(uVar5);
      uVar9 = uVar9 + 1;
    } while (uVar6 != uVar8);
    uVar5 = 0;
LAB_10189fab8:
    uVar9 = 0;
    do {
      if ((param_2 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10189fbb8);
          (*pcVar3)();
        }
        uVar6 = *(ulong *)(param_2 + uVar9 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar9;
        FUN_101887b4c(uVar9,param_2);
      }
      lVar2 = _DAT_11308c0c8;
      uVar1 = uVar9 + 1;
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10189fbb4);
        (*pcVar3)();
      }
      iVar4 = (int)*(undefined8 *)(uVar6 + _DAT_11308c0c8);
      func_0x000107c30b1c();
      if (iVar4 == 10) {
LAB_10189fb30:
        if (uVar5 != 0) {
          func_0x000107c30b10(*(undefined8 *)(uVar6 + _DAT_11308c0c0));
          uVar7 = *(undefined8 *)(uVar5 + _DAT_11308c0c0);
          dVar10 = param_1;
          func_0x000107c61174(uVar7);
          func_0x000107c30b10();
          func_0x000107c61170(uVar7);
          func_0x000107c61170(uVar6);
          func_0x000107c61170(uVar5);
          if (param_1 - dVar10 <= 0.0) {
            return false;
          }
          return param_1 - dVar10 < 400.0;
        }
        goto LAB_10189fbd8;
      }
      iVar4 = (int)*(undefined8 *)(uVar6 + lVar2);
      func_0x000107c30b24();
      if (iVar4 == 4) goto LAB_10189fb30;
      func_0x000107c61170(uVar6);
      uVar9 = uVar9 + 1;
    } while (uVar1 != uVar8);
    uVar6 = uVar5;
    if (uVar5 != 0) goto LAB_10189fbd8;
  }
  uVar6 = 0;
LAB_10189fbd8:
  func_0x000107c61170(uVar6);
  return false;
}



/* Entry: 10189fc00; end: 1018a03f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10189fc00(undefined *param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  
  if (param_2 != 0) {
    if (param_2 == 0) {
      puStack_78 = (undefined *)0x0;
      puStack_70 = (undefined *)0x0;
      puVar8 = (undefined *)0x0;
    }
    else {
      uVar16 = param_2 & 0xffffffffffffff8;
      if (param_2 >> 0x3e == 0) {
        uVar12 = *(ulong *)(uVar16 + 0x10);
      }
      else {
        uVar12 = uVar16;
        if ((param_2 & 0x8000000000000000) != 0) {
          uVar12 = param_2;
        }
        func_0x000107c60480();
      }
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar18 = param_2 & 0xc000000000000001;
      if (uVar12 != 0) {
        uVar13 = 0;
        do {
          while( true ) {
            if (uVar18 == 0) {
              if (*(ulong *)(uVar16 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10189f810);
                (*pcVar3)();
              }
              uVar6 = *(ulong *)(param_2 + uVar13 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar6 = uVar13;
              func_0x000101887ce8(uVar13,param_2);
            }
            uVar7 = uVar13 + 1;
            if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10189f80c);
              (*pcVar3)();
            }
            iVar5 = (int)*(undefined8 *)(uVar6 + _DAT_11308bea8);
            func_0x000107c30b48();
            if (iVar5 == 1) break;
            func_0x000107c61170(uVar6);
            uVar13 = uVar13 + 1;
            if (uVar7 == uVar12) goto LAB_10189f6fc;
          }
          puVar14 = puVar8;
          func_0x000107c61558();
          if (((ulong)puVar14 & 1) == 0) {
            func_0x0001018aceac(0,*(long *)(puVar8 + 0x10) + 1,1);
          }
          uVar13 = *(ulong *)(puVar8 + 0x10);
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar13) {
            func_0x0001018aceac(1 < *(ulong *)(puVar8 + 0x18),uVar13 + 1,1);
          }
          *(ulong *)(puVar8 + 0x10) = uVar13 + 1;
          *(ulong *)(puVar8 + uVar13 * 8 + 0x20) = uVar6;
          uVar13 = uVar7;
        } while (uVar7 != uVar12);
      }
LAB_10189f6fc:
      if (((long)puVar8 < 0) || (((ulong)puVar8 >> 0x3e & 1) != 0)) {
        puStack_70 = puVar8;
        func_0x000107c60480();
      }
      else {
        puStack_70 = *(undefined **)(puVar8 + 0x10);
      }
      func_0x000107c61574(puVar8);
      if (param_2 >> 0x3e == 0) {
        uVar12 = *(ulong *)(uVar16 + 0x10);
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        uVar12 = uVar16;
        if ((param_2 & 0x8000000000000000) != 0) {
          uVar12 = param_2;
        }
        func_0x000107c60480();
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      PTR___swiftEmptyArrayStorage_11034f1c8 = puVar8;
      if (uVar12 != 0) {
        uVar13 = 0;
        do {
          while( true ) {
            if (uVar18 == 0) {
              if (*(ulong *)(uVar16 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10189f818);
                (*pcVar3)();
              }
              uVar6 = *(ulong *)(param_2 + uVar13 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar6 = uVar13;
              func_0x000101887ce8(uVar13,param_2);
            }
            uVar7 = uVar13 + 1;
            if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10189f814);
              (*pcVar3)();
            }
            iVar5 = (int)*(undefined8 *)(uVar6 + _DAT_11308bea8);
            func_0x000107c30b48();
            if (iVar5 == 2) break;
            func_0x000107c61170(uVar6);
            uVar13 = uVar13 + 1;
            if (uVar7 == uVar12) goto LAB_10189f848;
          }
          puVar14 = puVar8;
          func_0x000107c61558();
          if (((ulong)puVar14 & 1) == 0) {
            func_0x0001018aceac(0,*(long *)(puVar8 + 0x10) + 1,1);
          }
          uVar13 = *(ulong *)(puVar8 + 0x10);
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar13) {
            func_0x0001018aceac(1 < *(ulong *)(puVar8 + 0x18),uVar13 + 1,1);
          }
          *(ulong *)(puVar8 + 0x10) = uVar13 + 1;
          *(ulong *)(puVar8 + uVar13 * 8 + 0x20) = uVar6;
          uVar13 = uVar7;
        } while (uVar7 != uVar12);
      }
LAB_10189f848:
      if (((long)puVar8 < 0) || (((ulong)puVar8 >> 0x3e & 1) != 0)) {
        puStack_78 = puVar8;
        func_0x000107c60480();
      }
      else {
        puStack_78 = *(undefined **)(puVar8 + 0x10);
      }
      func_0x000107c61574(puVar8);
      puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar12 != 0) {
        uVar13 = 0;
        do {
          while( true ) {
            if (uVar18 == 0) {
              if (*(ulong *)(uVar16 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10189f9c4);
                (*pcVar3)();
              }
              uVar6 = *(ulong *)(param_2 + uVar13 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar6 = uVar13;
              func_0x000101887ce8(uVar13,param_2);
            }
            lVar2 = _DAT_11308bea8;
            uVar7 = uVar13 + 1;
            if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10189f9c0);
              (*pcVar3)();
            }
            iVar5 = (int)*(undefined8 *)(uVar6 + _DAT_11308bea8);
            func_0x000107c30b48();
            if (iVar5 != 3) break;
LAB_10189f8f8:
            puVar8 = puVar14;
            func_0x000107c61558();
            if (((ulong)puVar8 & 1) == 0) {
              func_0x0001018aceac(0,*(long *)(puVar14 + 0x10) + 1,1);
            }
            uVar13 = *(ulong *)(puVar14 + 0x10);
            if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar13) {
              func_0x0001018aceac(1 < *(ulong *)(puVar14 + 0x18),uVar13 + 1,1);
            }
            *(ulong *)(puVar14 + 0x10) = uVar13 + 1;
            *(ulong *)(puVar14 + uVar13 * 8 + 0x20) = uVar6;
            uVar13 = uVar7;
            if (uVar7 == uVar12) goto LAB_10189f974;
          }
          iVar5 = (int)*(undefined8 *)(uVar6 + lVar2);
          func_0x000107c30b48();
          if (iVar5 == 4) goto LAB_10189f8f8;
          iVar5 = (int)*(undefined8 *)(uVar6 + lVar2);
          func_0x000107c30b48();
          if (iVar5 == 5) goto LAB_10189f8f8;
          func_0x000107c61170(uVar6);
          uVar13 = uVar13 + 1;
        } while (uVar7 != uVar12);
      }
LAB_10189f974:
      if (((long)puVar14 < 0) || (((ulong)puVar14 >> 0x3e & 1) != 0)) {
        puVar8 = puVar14;
        func_0x000107c60480();
      }
      else {
        puVar8 = *(undefined **)(puVar14 + 0x10);
      }
      func_0x000107c61574(puVar14);
    }
    if ((long)puStack_78 <= (long)puStack_70) {
      puStack_78 = puStack_70;
    }
    if ((long)puVar8 <= (long)puStack_78) {
      puVar8 = puStack_78;
    }
    return puVar8;
  }
  if (param_3 == 0) {
    uVar13 = 0;
    uVar7 = 0;
    uStack_68 = 0;
  }
  else {
    uVar16 = param_3 >> 0x3e;
    uVar12 = param_3 & 0xffffffffffffff8;
    if (uVar16 == 0) {
      uVar18 = *(ulong *)(uVar12 + 0x10);
    }
    else {
      uVar18 = uVar12;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar18 = param_3;
      }
      func_0x000107c60480();
    }
    uVar13 = 0;
    uVar6 = param_3 & 0xc000000000000001;
    while (uVar18 != uVar13) {
      if (uVar6 == 0) {
        if (*(ulong *)(uVar12 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1018a0220);
          (*pcVar3)();
        }
        uVar7 = *(ulong *)(param_3 + uVar13 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar7 = uVar13;
        func_0x000101887e84(uVar13,param_3);
      }
      lVar2 = _DAT_11308cf08;
      if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1018a021c);
        (*pcVar3)();
      }
      iVar5 = (int)*(undefined8 *)(uVar7 + _DAT_11308cf08);
      func_0x000107c30c30();
      if (iVar5 == 10) {
        func_0x000107c61170(uVar7);
        return (undefined *)0x1;
      }
      iVar5 = (int)*(undefined8 *)(uVar7 + lVar2);
      func_0x000107c30c30();
      func_0x000107c61170(uVar7);
      uVar13 = uVar13 + 1;
      if (iVar5 == 9) {
        return (undefined *)0x1;
      }
    }
    if (uVar16 == 0) {
      uVar18 = *(ulong *)(uVar12 + 0x10);
    }
    else {
      uVar18 = uVar12;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar18 = param_3;
      }
      func_0x000107c60480();
    }
    if (uVar18 != 0) {
      uVar13 = 0;
      do {
        if (uVar6 == 0) {
          if (*(ulong *)(uVar12 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1018a0230);
            (*pcVar3)();
          }
          uVar7 = *(ulong *)(param_3 + uVar13 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar7 = uVar13;
          func_0x000101887e84(uVar13,param_3);
        }
        uVar1 = uVar13 + 1;
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1018a022c);
          (*pcVar3)();
        }
        iVar5 = (int)*(undefined8 *)(uVar7 + _DAT_11308cf08);
        func_0x000107c30c30();
        if (iVar5 == 1) goto LAB_1018a0264;
        func_0x000107c61170(uVar7);
        uVar13 = uVar13 + 1;
      } while (uVar1 != uVar18);
    }
    uVar7 = 0;
LAB_1018a0264:
    if (uVar16 == 0) {
      uStack_68 = *(ulong *)(uVar12 + 0x10);
    }
    else {
      uStack_68 = uVar12;
      if ((param_3 & 0x8000000000000000) != 0) {
        uStack_68 = param_3;
      }
      func_0x000107c60480();
    }
    do {
      if (uStack_68 == 0) {
        uStack_68 = 0;
        goto joined_r0x0001018a02f4;
      }
      bVar4 = SBORROW8(uStack_68,1);
      uStack_68 = uStack_68 - 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1018a03e4);
        (*pcVar3)();
      }
      if (uVar6 == 0) {
        if ((long)uStack_68 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1018a03e8);
          (*pcVar3)();
        }
        if (*(ulong *)(uVar12 + 0x10) <= uStack_68) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1018a03ec);
          (*pcVar3)();
        }
        uVar18 = *(ulong *)(param_3 + 0x20 + uStack_68 * 8);
        func_0x000107c61174();
      }
      else {
        uVar18 = uStack_68;
        func_0x000101887e84(uStack_68,param_3);
      }
      iVar5 = (int)*(undefined8 *)(uVar18 + _DAT_11308cf08);
      func_0x000107c30c30();
      func_0x000107c61170(uVar18);
    } while (iVar5 != 7);
    if (uVar6 == 0) {
      uStack_68 = *(ulong *)(param_3 + 0x20 + uStack_68 * 8);
      func_0x000107c61174();
    }
    else {
      func_0x000101887e84(uStack_68,param_3);
    }
joined_r0x0001018a02f4:
    if (uVar16 == 0) {
      uVar16 = *(ulong *)(uVar12 + 0x10);
    }
    else {
      uVar16 = uVar12;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar16 = param_3;
      }
      func_0x000107c60480();
    }
    if (uVar16 != 0) {
      uVar18 = 0;
      do {
        if (uVar6 == 0) {
          if (*(ulong *)(uVar12 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1018a03f4);
            (*pcVar3)();
          }
          uVar13 = *(ulong *)(param_3 + uVar18 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar13 = uVar18;
          func_0x000101887e84(uVar18,param_3);
        }
        uVar1 = uVar18 + 1;
        if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1018a03f0);
          (*pcVar3)();
        }
        iVar5 = (int)*(undefined8 *)(uVar13 + _DAT_11308cf08);
        func_0x000107c30c30();
        if (iVar5 == 2) goto joined_r0x00010189fd10;
        func_0x000107c61170(uVar13);
        uVar18 = uVar18 + 1;
      } while (uVar1 != uVar16);
    }
    uVar13 = 0;
  }
joined_r0x00010189fd10:
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar8 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar8 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar8 = param_1;
    }
    func_0x000107c60480();
  }
  if (puVar8 == (undefined *)0x0) {
    puVar17 = (undefined *)0x0;
    puVar15 = (undefined *)0x0;
    bVar4 = true;
    puVar14 = (undefined *)0x0;
  }
  else {
    if ((long)puVar8 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1018a0248);
      (*pcVar3)();
    }
    if (((ulong)param_1 & 0xc000000000000001) == 0) {
      puVar14 = (undefined *)0x0;
      puVar15 = (undefined *)0x0;
      puVar17 = (undefined *)0x0;
      puVar9 = (ulong *)(param_1 + 0x20);
      do {
        while( true ) {
          lVar2 = _DAT_11308c0c8;
          puVar11 = (undefined *)*puVar9;
          iVar5 = (int)*(undefined8 *)(puVar11 + _DAT_11308c0c8);
          puVar19 = puVar11;
          func_0x000107c61174();
          func_0x000107c30b1c();
          if (iVar5 == 3) break;
          iVar5 = (int)*(undefined8 *)(puVar11 + lVar2);
          func_0x000107c30b1c();
          if (iVar5 != 4) goto LAB_1018a0014;
          if (puVar15 == (undefined *)0x0) {
            func_0x000107c61174(puVar19);
            puVar15 = puVar19;
          }
LAB_1018a0018:
          iVar5 = (int)*(undefined8 *)(puVar11 + lVar2);
          func_0x000107c30b1c();
          puVar10 = puVar15;
          puVar20 = puVar17;
          if (iVar5 != 7) {
            iVar5 = (int)*(undefined8 *)(puVar11 + lVar2);
            func_0x000107c30b1c();
            if (iVar5 != 6) {
              iVar5 = (int)*(undefined8 *)(puVar11 + lVar2);
              func_0x000107c30b1c();
              if (iVar5 != 8) {
                iVar5 = (int)*(undefined8 *)(puVar11 + lVar2);
                func_0x000107c30b1c();
                if (iVar5 == 10) {
                  iVar5 = (int)*(undefined8 *)(puVar11 + lVar2);
                  func_0x000107c30b28();
                  if (iVar5 == 0) goto LAB_1018a0078;
                  puVar11 = (undefined *)0x0;
                }
                else {
LAB_1018a0078:
                  iVar5 = (int)*(undefined8 *)(puVar11 + lVar2);
                  func_0x000107c30b24();
                  if (iVar5 != 5) {
                    func_0x000107c61170(puVar19);
                    puVar19 = (undefined *)0x0;
                  }
                  puVar11 = puVar19;
                  puVar19 = (undefined *)0x0;
                }
                if ((uStack_68 == 0) && (uVar13 == 0)) {
                  puVar20 = puVar15;
                  if (puVar19 == (undefined *)0x0) {
                    puVar10 = puVar11;
                    puVar19 = puVar17;
                    if (puVar11 == (undefined *)0x0) goto LAB_10189ff9c;
                  }
                  else {
                    func_0x000107c61170(puVar17);
                    puVar10 = puVar19;
                    puVar19 = puVar11;
                  }
                }
                else {
                  func_0x000107c61170(puVar17);
                  puVar20 = puVar19;
                  puVar19 = puVar11;
                }
              }
            }
          }
          func_0x000107c61170(puVar19);
          func_0x000107c61170(puVar20);
          func_0x000107c61170(puVar10);
          bVar4 = SCARRY8((long)puVar14,1);
          puVar14 = puVar14 + 1;
          if (bVar4) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1018a0228);
            (*pcVar3)();
          }
          puVar15 = (undefined *)0x0;
          puVar17 = (undefined *)0x0;
          puVar8 = puVar8 + -1;
          puVar9 = puVar9 + 1;
          if (puVar8 == (undefined *)0x0) goto LAB_1018a0134;
        }
        if (puVar17 == (undefined *)0x0) {
          func_0x000107c61174(puVar19);
          puVar17 = puVar19;
        }
LAB_1018a0014:
        if (puVar15 != (undefined *)0x0) goto LAB_1018a0018;
        func_0x000107c61170(puVar19);
LAB_10189ff9c:
        puVar8 = puVar8 + -1;
        puVar9 = puVar9 + 1;
      } while (puVar8 != (undefined *)0x0);
    }
    else {
      puVar14 = (undefined *)0x0;
      puVar15 = (undefined *)0x0;
      puVar17 = (undefined *)0x0;
      puVar19 = (undefined *)0x0;
      do {
        puVar11 = puVar19;
        func_0x000101887b4c(puVar19,param_1);
        lVar2 = _DAT_11308c0c8;
        iVar5 = (int)*(undefined8 *)(puVar11 + _DAT_11308c0c8);
        func_0x000107c30b1c();
        if (iVar5 == 3) {
          if (puVar17 == (undefined *)0x0) {
            func_0x000107c61174(puVar11);
            puVar17 = puVar11;
          }
LAB_10189fdc4:
          if (puVar15 != (undefined *)0x0) goto LAB_10189fdc8;
          func_0x000107c615e8(puVar11);
        }
        else {
          iVar5 = (int)*(undefined8 *)(puVar11 + lVar2);
          func_0x000107c30b1c();
          if (iVar5 != 4) goto LAB_10189fdc4;
          if (puVar15 == (undefined *)0x0) {
            func_0x000107c61174(puVar11);
            puVar15 = puVar11;
          }
LAB_10189fdc8:
          iVar5 = (int)*(undefined8 *)(puVar11 + lVar2);
          func_0x000107c30b1c();
          if (iVar5 == 7) {
LAB_10189fdf8:
            func_0x000107c615e8(puVar11);
            puVar10 = puVar15;
            puVar15 = puVar17;
          }
          else {
            iVar5 = (int)*(undefined8 *)(puVar11 + lVar2);
            func_0x000107c30b1c();
            if (iVar5 == 6) goto LAB_10189fdf8;
            iVar5 = (int)*(undefined8 *)(puVar11 + lVar2);
            func_0x000107c30b1c();
            if (iVar5 == 8) goto LAB_10189fdf8;
            iVar5 = (int)*(undefined8 *)(puVar11 + lVar2);
            func_0x000107c30b1c();
            if (iVar5 == 10) {
              iVar5 = (int)*(undefined8 *)(puVar11 + lVar2);
              func_0x000107c30b28();
              if (iVar5 == 0) goto LAB_10189fe50;
              puVar10 = (undefined *)0x0;
              puVar20 = puVar11;
              if (uStack_68 == 0) goto LAB_10189fe80;
LAB_10189fe88:
              func_0x000107c61170(puVar17);
              func_0x000107c61170(puVar10);
              puVar10 = puVar15;
              puVar15 = puVar20;
            }
            else {
LAB_10189fe50:
              iVar5 = (int)*(undefined8 *)(puVar11 + lVar2);
              func_0x000107c30b24();
              if (iVar5 != 5) {
                func_0x000107c615e8(puVar11);
                puVar11 = (undefined *)0x0;
              }
              puVar20 = (undefined *)0x0;
              puVar10 = puVar11;
              puVar11 = puVar20;
              if (uStack_68 != 0) goto LAB_10189fe88;
LAB_10189fe80:
              puVar20 = puVar11;
              if (uVar13 != 0) goto LAB_10189fe88;
              if (puVar11 == (undefined *)0x0) {
                if (puVar10 == (undefined *)0x0) goto LAB_10189fd5c;
                func_0x000107c61170(puVar17);
              }
              else {
                func_0x000107c61170(puVar17);
                func_0x000107c61170(puVar10);
                puVar10 = puVar11;
              }
            }
          }
          func_0x000107c61170(puVar15);
          func_0x000107c61170(puVar10);
          bVar4 = SCARRY8((long)puVar14,1);
          puVar14 = puVar14 + 1;
          if (bVar4) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1018a0224);
            (*pcVar3)();
          }
          puVar15 = (undefined *)0x0;
          puVar17 = (undefined *)0x0;
        }
LAB_10189fd5c:
        puVar19 = puVar19 + 1;
      } while (puVar8 != puVar19);
    }
LAB_1018a0134:
    puVar8 = puVar14;
    if (puVar17 != (undefined *)0x0) {
      puVar8 = (undefined *)(ulong)((uVar7 != 0 || uStack_68 != 0) || uVar13 != 0);
    }
    bVar4 = puVar17 == (undefined *)0x0;
    if (puVar14 == (undefined *)0x0) {
      puVar14 = puVar8;
    }
  }
  if (!(bool)(puVar14 != (undefined *)0x0 | bVar4 | param_4 == 0)) {
    puVar14 = (undefined *)0x1;
  }
  if (puVar14 == (undefined *)0x0) {
    FUN_10189f9f4(param_1);
    func_0x000107c61170(puVar15);
    func_0x000107c61170(puVar17);
    func_0x000107c61170(uStack_68);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar7);
    puVar14 = param_1;
  }
  else {
    func_0x000107c61170(puVar15);
    func_0x000107c61170(puVar17);
    func_0x000107c61170(uStack_68);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar7);
  }
  return puVar14;
}



/* Entry: 1018a03f4; end: 1018a06e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1018a03f4(double param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong *puVar9;
  double dVar10;
  double dVar11;
  
  if (param_2 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar4 == 0) {
    dVar11 = 0.0;
  }
  else {
    if ((long)uVar4 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1018a06e8);
      (*pcVar2)();
    }
    if ((param_2 & 0xc000000000000001) == 0) {
      dVar11 = 0.0;
      uVar6 = 0;
      puVar9 = (ulong *)(param_2 + 0x20);
      do {
        lVar1 = _DAT_11308c0c8;
        uVar7 = *puVar9;
        iVar3 = (int)*(undefined8 *)(uVar7 + _DAT_11308c0c8);
        uVar5 = uVar7;
        func_0x000107c61174();
        func_0x000107c30b1c();
        if (iVar3 == 1) {
          func_0x000107c61170(uVar6);
        }
        else {
          iVar3 = (int)*(undefined8 *)(uVar7 + lVar1);
          func_0x000107c30b1c();
          if (iVar3 == 4 && uVar6 != 0) {
            uVar8 = *(undefined8 *)(uVar5 + _DAT_11308c0c0);
            uVar7 = uVar5;
            func_0x000107c61174(uVar5);
            func_0x000107c30b10(uVar8);
            uVar8 = *(undefined8 *)(uVar6 + _DAT_11308c0c0);
            dVar10 = param_1;
            func_0x000107c61174(uVar8);
            func_0x000107c30b10();
            func_0x000107c61170(uVar8);
            func_0x000107c61170(uVar7);
            func_0x000107c61170(uVar6);
            param_1 = param_1 - dVar10;
            dVar11 = dVar11 + param_1;
LAB_1018a0674:
            func_0x000107c61170(uVar5);
            uVar5 = 0;
          }
          else {
            iVar3 = (int)*(undefined8 *)(uVar7 + lVar1);
            func_0x000107c30b1c();
            if (iVar3 == 2) {
              if (uVar6 != 0) {
                uVar8 = *(undefined8 *)(uVar5 + _DAT_11308c0c0);
                func_0x000107c61174(uVar5);
                func_0x000107c30b10(uVar8);
                uVar8 = *(undefined8 *)(uVar6 + _DAT_11308c0c0);
                dVar10 = param_1;
                func_0x000107c61174(uVar8);
                func_0x000107c30b10();
                func_0x000107c61170(uVar8);
                func_0x000107c61170(uVar5);
                func_0x000107c61170(uVar5);
                func_0x000107c61170(uVar6);
                param_1 = param_1 - dVar10;
                dVar11 = dVar11 + param_1;
                uVar5 = 0;
                goto LAB_1018a055c;
              }
            }
            else if (uVar6 == 0) goto LAB_1018a0674;
            func_0x000107c61170(uVar5);
            uVar5 = uVar6;
          }
        }
LAB_1018a055c:
        uVar4 = uVar4 - 1;
        uVar6 = uVar5;
        puVar9 = puVar9 + 1;
      } while (uVar4 != 0);
    }
    else {
      uVar6 = 0;
      dVar11 = 0.0;
      uVar7 = 0;
      do {
        uVar5 = uVar6;
        FUN_101887b4c(uVar6,param_2);
        lVar1 = _DAT_11308c0c8;
        iVar3 = (int)*(undefined8 *)(uVar5 + _DAT_11308c0c8);
        func_0x000107c30b1c();
        if (iVar3 == 1) {
          func_0x000107c61170(uVar7);
        }
        else {
          iVar3 = (int)*(undefined8 *)(uVar5 + lVar1);
          func_0x000107c30b1c();
          if (iVar3 != 4 || uVar7 == 0) {
            iVar3 = (int)*(undefined8 *)(uVar5 + lVar1);
            func_0x000107c30b1c();
            if ((iVar3 != 2) || (uVar7 == 0)) {
              func_0x000107c615e8(uVar5);
              uVar5 = uVar7;
              goto LAB_1018a046c;
            }
          }
          uVar8 = *(undefined8 *)(uVar5 + _DAT_11308c0c0);
          func_0x000107c615f0(uVar5);
          func_0x000107c30b10(uVar8);
          uVar8 = *(undefined8 *)(uVar7 + _DAT_11308c0c0);
          dVar10 = param_1;
          func_0x000107c61174(uVar8);
          func_0x000107c30b10();
          func_0x000107c61170(uVar8);
          func_0x000107c615ec(uVar5,2);
          func_0x000107c61170(uVar7);
          uVar5 = 0;
          param_1 = param_1 - dVar10;
          dVar11 = dVar11 + param_1;
        }
LAB_1018a046c:
        uVar6 = uVar6 + 1;
        uVar7 = uVar5;
      } while (uVar4 != uVar6);
    }
    func_0x000107c61170(uVar5);
  }
  return dVar11;
}



/* Entry: 1018a06e8; end: 1018a0743;  */

void FUN_1018a06e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  return;
}



/* Entry: 1018a0744; end: 1018a07cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018a0744(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = 0;
  FUN_10189ce40();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined **)(lVar3 + _DAT_112dcdaa8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(lVar3 + _DAT_112dcdab0) = 0;
  *(undefined8 *)(lVar3 + _DAT_112dcdaa0) = param_1;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c6157c(param_1);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1018a07cc; end: 1018a07d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018a07cc(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 unaff_x20;
  long lStack_30;
  long lStack_28;
  
  lVar2 = 0;
  FUN_10189ce40();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined **)(lVar3 + _DAT_112dcdaa8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(lVar3 + _DAT_112dcdab0) = 0;
  *(undefined8 *)(lVar3 + _DAT_112dcdaa0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1018a07d4; end: 1018a080b;  */

void FUN_1018a07d4(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1018a080c; end: 1018a0813;  */

void FUN_1018a080c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1018a0814; end: 1018a0847;  */

/* WARNING: Possible PIC construction at 0x0001018a0820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018a0830: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018a0824) */
/* WARNING: Removing unreachable block (ram,0x0001018a0834) */

void FUN_1018a0814(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}


