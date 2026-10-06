/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1082f0904; end: 1082f09a7;  */

void FUN_1082f0904(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x0001082f12fc();
  func_0x0001082f1398();
                    /* WARNING: Could not recover jumptable at 0x0001082f0920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1082f09a8; end: 1082f09ab;  */

undefined8 * FUN_1082f09a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a35308;
  FUN_10828e7ac(param_1 + 1);
  return param_1;
}



/* Entry: 1082f09ac; end: 1082f09bf;  */

void FUN_1082f09ac(void)

{
  func_0x00010828e388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082f09c0; end: 1082f0a07;  */

undefined1 (*) [16] FUN_1082f09c0(int param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 uVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  ulong uVar10;
  undefined4 *puVar11;
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  long in_x5;
  undefined4 *in_x6;
  long in_x7;
  undefined8 uVar14;
  long lVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*unaff_x19) [16];
  undefined1 (*unaff_x20) [16];
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar27 [16];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 auVar21 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  uStack_30 = (undefined4)unaff_x22;
  uStack_2c = (undefined4)((ulong)unaff_x22 >> 0x20);
  uStack_28 = (undefined4)unaff_x21;
  uStack_24 = (undefined4)((ulong)unaff_x21 >> 0x20);
  uStack_20 = SUB84(unaff_x20,0);
  uStack_1c = (undefined4)((ulong)unaff_x20 >> 0x20);
  func_0x0001082f14bc();
  FUN_10828e84c();
  if (param_1 != 0) {
    func_0x0001082f1324();
    uVar14 = *(undefined8 *)(unaff_x21 + 0x44);
    *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x21 + 0x4c);
    *(undefined8 *)(unaff_x22 + 0x58) = uVar14;
  }
  puVar1 = (uint *)(unaff_x22 + 0x70);
  pauVar8 = (undefined1 (*) [16])(unaff_x21 + 0x54);
  pauVar16 = (undefined1 (*) [16])(unaff_x22 + 0x30);
  uStack_3c = (undefined4)((ulong)unaff_x24 >> 0x20);
  uStack_38 = (undefined4)unaff_x23;
  uStack_34 = (undefined4)((ulong)unaff_x23 >> 0x20);
  uVar14 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *puVar1 == 0xffffffff;
  pauVar7 = unaff_x20;
  pauVar9 = unaff_x19;
  if (!(bool)uVar6) {
    pauVar12 = pauVar8;
    pauVar13 = pauVar16;
    if (pauVar16 != (undefined1 (*) [16])0x0) {
      pauVar7 = pauVar16;
      pauVar9 = pauVar8;
      FUN_10829dddc();
      if (((ulong)pauVar7 & 1) != 0) goto LAB_10829dd84;
      uVar3 = *(undefined8 *)*pauVar8;
      uVar4 = *(undefined8 *)(unaff_x21 + 0x5c);
      uVar22 = *(undefined8 *)(unaff_x21 + 0x6c);
      uVar2 = *(undefined8 *)(unaff_x21 + 100);
      *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x21 + 0x74);
      *(undefined8 *)(unaff_x22 + 0x38) = uVar4;
      *(undefined8 *)*pauVar16 = uVar3;
      *(undefined8 *)(unaff_x22 + 0x48) = uVar22;
      *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
    }
    pauVar7 = pauVar8;
    FUN_1082878d0();
    if (((int)pauVar7 == 0) || ((unaff_x19[6][3] & 1) != 0)) {
      pauVar9 = (undefined1 (*) [16])(ulong)*puVar1;
      func_0x00010829edd0(uVar14);
      if ((bool)uVar6) {
        lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
        auVar19 = *pauVar8;
        pauVar8 = (undefined1 (*) [16])(unaff_x21 + 100);
        auVar23 = NEON_ext(*pauVar8,auVar19,4,1);
        auVar27._4_12_ = auVar23._4_12_;
        auVar27._0_4_ = auVar23._4_4_;
        auVar25._0_8_ = auVar27._0_8_;
        auVar25._8_4_ = auVar23._12_4_;
        auVar25._12_4_ = auVar23._12_4_;
        auVar24._8_8_ = auVar25._8_8_;
        auVar24._4_4_ = auVar19._4_4_;
        auVar24._0_4_ = auVar23._4_4_;
        auVar26._0_12_ = auVar24._0_12_;
        auVar26._12_4_ = auVar19._12_4_;
        auVar27 = NEON_ext(auVar26,auVar26,8,1);
        auVar19 = NEON_ext(auVar19,*pauVar8,4,1);
        auVar23._4_12_ = auVar19._4_12_;
        auVar23._0_4_ = auVar19._4_4_;
        auVar21._0_8_ = auVar23._0_8_;
        auVar21._8_4_ = auVar19._12_4_;
        auVar21._12_4_ = auVar19._12_4_;
        auVar20._8_8_ = auVar21._8_8_;
        auVar20._4_4_ = (int)((ulong)*(undefined8 *)*pauVar8 >> 0x20);
        auVar20._0_4_ = auVar19._4_4_;
        auVar19._0_12_ = auVar20._0_12_;
        auVar19._12_4_ = (int)((ulong)*(undefined8 *)(unaff_x21 + 0x6c) >> 0x20);
        auVar19 = NEON_ext(auVar19,auVar19,8,1);
        uStack_24 = auVar19._8_4_;
        uStack_20 = auVar19._12_4_;
        uStack_2c = auVar19._0_4_;
        uStack_28 = auVar19._4_4_;
        uStack_34 = auVar27._8_4_;
        uStack_30 = auVar27._12_4_;
        uStack_3c = auVar27._0_4_;
        uStack_38 = auVar27._4_4_;
        uStack_1c = *(undefined4 *)(unaff_x21 + 0x74);
        uVar10 = (ulong)pauVar9 & 0xffffffff;
        puVar11 = &uStack_3c;
        (**(code **)(*(long *)*unaff_x20 + 0x98))();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
          return unaff_x20;
        }
        ___stack_chk_fail();
        puVar17 = (undefined4 *)0x0;
        pauVar16 = (undefined1 (*) [16])0x0;
        puVar18 = (undefined4 *)(uVar10 + 0x1c);
        pauVar8 = unaff_x20;
        do {
          if (puVar11 == puVar17) {
            return pauVar8;
          }
          if (in_x6 == (undefined4 *)0x0) {
LAB_1082dc3bc:
            if (pauVar13 <= pauVar16) {
LAB_1082dc428:
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1082dc42c);
              (*pcVar5)();
            }
            pauVar7 = (undefined1 (*) [16])(*pauVar16 + 1);
            if ((uint)puVar18[-1] < 0xb) {
              pauVar8 = unaff_x20;
              (**(code **)(*(long *)*unaff_x20 +
                          *(long *)(&UNK_10df166b8 + (ulong)(uint)puVar18[-1] * 8)))
                        (unaff_x20,*(undefined4 *)(*pauVar12 + (long)pauVar16 * 4),*puVar18,
                         in_x7 + *(long *)(puVar18 + -3));
            }
          }
          else {
            if (in_x6 <= puVar17) goto LAB_1082dc428;
            pauVar7 = pauVar16;
            if ((*(byte *)(in_x5 + (long)puVar17) & 1) == 0) goto LAB_1082dc3bc;
          }
          pauVar16 = pauVar7;
          puVar17 = (undefined4 *)((long)puVar17 + 1);
          puVar18 = puVar18 + 10;
        } while( true );
      }
      goto LAB_10829ddd8;
    }
    pauVar9 = (undefined1 (*) [16])(ulong)*puVar1;
    (**(code **)(*(long *)*unaff_x20 + 0x88))();
    pauVar7 = unaff_x20;
  }
LAB_10829dd84:
  func_0x00010829edd0(uVar14);
  if ((bool)uVar6) {
    return pauVar7;
  }
LAB_10829ddd8:
  ___stack_chk_fail();
  if (pauVar7 == pauVar9) {
    return (undefined1 (*) [16])0x1;
  }
  _memcmp();
  return (undefined1 (*) [16])(ulong)((int)pauVar7 == 0);
}



/* Entry: 1082f0a08; end: 1082f0bc7;  */

void FUN_1082f0a08(long param_1,long param_2)

{
  undefined8 uVar1;
  int extraout_w9;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = *(long *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  FUN_1082dd9a4(uVar3,lVar2);
  func_0x0001082f1558(0x16);
  func_0x0001082f1414(uVar3,&UNK_10f488603,auStack_78);
  func_0x0001082f12c4();
  func_0x0001082f15a8(0x15);
  func_0x0001082f1414(uVar3,&UNK_10f48860d,auStack_90);
  func_0x0001082f12c4();
  uVar3 = *(undefined8 *)(param_2 + 8);
  func_0x0001082f135c();
  func_0x0001082f1594();
  func_0x0001082f131c();
  FUN_10829dc20(param_1,uVar3,uVar1,*(undefined8 *)(param_2 + 0x30),param_1 + 0x6c);
  func_0x0001082f1484();
  if (*(char *)(lVar2 + 0x7c) == '\x01') {
    func_0x0001082f1474();
    func_0x0001082f13ec();
    func_0x0001082f146c();
  }
  func_0x0001082f135c();
  func_0x0001082f14d4();
  func_0x0001082f131c();
  func_0x0001082f135c();
  func_0x0001082f131c();
  func_0x0001082f135c();
  func_0x0001082f131c();
  func_0x0001082f135c();
  func_0x0001082f1534();
  func_0x0001082f135c();
  if (extraout_w9 == 0) {
    func_0x0001082f131c();
    func_0x0001082f135c();
    func_0x0001082f131c();
  }
  else {
    func_0x0001082f131c();
    func_0x0001082f135c();
    func_0x0001082f1534();
    func_0x0001082f135c();
    func_0x0001082f1534();
  }
  func_0x0001082f135c();
  func_0x0001082f1580();
  func_0x0001082f131c();
  return;
}



/* Entry: 1082f0bc8; end: 1082f0be3;  */

void FUN_1082f0bc8(void)

{
  func_0x0001082f1400();
  return;
}



/* Entry: 1082f0be4; end: 1082f0bf7;  */

void FUN_1082f0be4(void)

{
  return;
}



/* Entry: 1082f0bf8; end: 1082f0c8b;  */

void FUN_1082f0bf8(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x0001082f12fc();
  func_0x0001082f1398();
                    /* WARNING: Could not recover jumptable at 0x0001082f0c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1082f0c8c; end: 1082f0c8f;  */

undefined8 * FUN_1082f0c8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a35308;
  FUN_10828e7ac(param_1 + 1);
  return param_1;
}



/* Entry: 1082f0c90; end: 1082f0ca3;  */

void FUN_1082f0c90(void)

{
  func_0x00010828e388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082f0ca4; end: 1082f0ceb;  */

undefined1 (*) [16] FUN_1082f0ca4(int param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 uVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  ulong uVar10;
  undefined4 *puVar11;
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  long in_x5;
  undefined4 *in_x6;
  long in_x7;
  undefined8 uVar14;
  long lVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*unaff_x19) [16];
  undefined1 (*unaff_x20) [16];
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar27 [16];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 auVar21 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  uStack_30 = (undefined4)unaff_x22;
  uStack_2c = (undefined4)((ulong)unaff_x22 >> 0x20);
  uStack_28 = (undefined4)unaff_x21;
  uStack_24 = (undefined4)((ulong)unaff_x21 >> 0x20);
  uStack_20 = SUB84(unaff_x20,0);
  uStack_1c = (undefined4)((ulong)unaff_x20 >> 0x20);
  func_0x0001082f14bc();
  FUN_10828e84c();
  if (param_1 != 0) {
    func_0x0001082f1324();
    uVar14 = *(undefined8 *)(unaff_x21 + 0x44);
    *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x21 + 0x4c);
    *(undefined8 *)(unaff_x22 + 0x30) = uVar14;
  }
  puVar1 = (uint *)(unaff_x22 + 0x68);
  pauVar8 = (undefined1 (*) [16])(unaff_x21 + 0x54);
  pauVar16 = (undefined1 (*) [16])(unaff_x22 + 0x40);
  uStack_3c = (undefined4)((ulong)unaff_x24 >> 0x20);
  uStack_38 = (undefined4)unaff_x23;
  uStack_34 = (undefined4)((ulong)unaff_x23 >> 0x20);
  uVar14 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *puVar1 == 0xffffffff;
  pauVar7 = unaff_x20;
  pauVar9 = unaff_x19;
  if (!(bool)uVar6) {
    pauVar12 = pauVar8;
    pauVar13 = pauVar16;
    if (pauVar16 != (undefined1 (*) [16])0x0) {
      pauVar7 = pauVar16;
      pauVar9 = pauVar8;
      FUN_10829dddc();
      if (((ulong)pauVar7 & 1) != 0) goto LAB_10829dd84;
      uVar3 = *(undefined8 *)*pauVar8;
      uVar4 = *(undefined8 *)(unaff_x21 + 0x5c);
      uVar22 = *(undefined8 *)(unaff_x21 + 0x6c);
      uVar2 = *(undefined8 *)(unaff_x21 + 100);
      *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x21 + 0x74);
      *(undefined8 *)(unaff_x22 + 0x48) = uVar4;
      *(undefined8 *)*pauVar16 = uVar3;
      *(undefined8 *)(unaff_x22 + 0x58) = uVar22;
      *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
    }
    pauVar7 = pauVar8;
    FUN_1082878d0();
    if (((int)pauVar7 == 0) || ((unaff_x19[6][3] & 1) != 0)) {
      pauVar9 = (undefined1 (*) [16])(ulong)*puVar1;
      func_0x00010829edd0(uVar14);
      if ((bool)uVar6) {
        lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
        auVar19 = *pauVar8;
        pauVar8 = (undefined1 (*) [16])(unaff_x21 + 100);
        auVar23 = NEON_ext(*pauVar8,auVar19,4,1);
        auVar27._4_12_ = auVar23._4_12_;
        auVar27._0_4_ = auVar23._4_4_;
        auVar25._0_8_ = auVar27._0_8_;
        auVar25._8_4_ = auVar23._12_4_;
        auVar25._12_4_ = auVar23._12_4_;
        auVar24._8_8_ = auVar25._8_8_;
        auVar24._4_4_ = auVar19._4_4_;
        auVar24._0_4_ = auVar23._4_4_;
        auVar26._0_12_ = auVar24._0_12_;
        auVar26._12_4_ = auVar19._12_4_;
        auVar27 = NEON_ext(auVar26,auVar26,8,1);
        auVar19 = NEON_ext(auVar19,*pauVar8,4,1);
        auVar23._4_12_ = auVar19._4_12_;
        auVar23._0_4_ = auVar19._4_4_;
        auVar21._0_8_ = auVar23._0_8_;
        auVar21._8_4_ = auVar19._12_4_;
        auVar21._12_4_ = auVar19._12_4_;
        auVar20._8_8_ = auVar21._8_8_;
        auVar20._4_4_ = (int)((ulong)*(undefined8 *)*pauVar8 >> 0x20);
        auVar20._0_4_ = auVar19._4_4_;
        auVar19._0_12_ = auVar20._0_12_;
        auVar19._12_4_ = (int)((ulong)*(undefined8 *)(unaff_x21 + 0x6c) >> 0x20);
        auVar19 = NEON_ext(auVar19,auVar19,8,1);
        uStack_24 = auVar19._8_4_;
        uStack_20 = auVar19._12_4_;
        uStack_2c = auVar19._0_4_;
        uStack_28 = auVar19._4_4_;
        uStack_34 = auVar27._8_4_;
        uStack_30 = auVar27._12_4_;
        uStack_3c = auVar27._0_4_;
        uStack_38 = auVar27._4_4_;
        uStack_1c = *(undefined4 *)(unaff_x21 + 0x74);
        uVar10 = (ulong)pauVar9 & 0xffffffff;
        puVar11 = &uStack_3c;
        (**(code **)(*(long *)*unaff_x20 + 0x98))();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
          return unaff_x20;
        }
        ___stack_chk_fail();
        puVar17 = (undefined4 *)0x0;
        pauVar16 = (undefined1 (*) [16])0x0;
        puVar18 = (undefined4 *)(uVar10 + 0x1c);
        pauVar8 = unaff_x20;
        do {
          if (puVar11 == puVar17) {
            return pauVar8;
          }
          if (in_x6 == (undefined4 *)0x0) {
LAB_1082dc3bc:
            if (pauVar13 <= pauVar16) {
LAB_1082dc428:
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1082dc42c);
              (*pcVar5)();
            }
            pauVar7 = (undefined1 (*) [16])(*pauVar16 + 1);
            if ((uint)puVar18[-1] < 0xb) {
              pauVar8 = unaff_x20;
              (**(code **)(*(long *)*unaff_x20 +
                          *(long *)(&UNK_10df166b8 + (ulong)(uint)puVar18[-1] * 8)))
                        (unaff_x20,*(undefined4 *)(*pauVar12 + (long)pauVar16 * 4),*puVar18,
                         in_x7 + *(long *)(puVar18 + -3));
            }
          }
          else {
            if (in_x6 <= puVar17) goto LAB_1082dc428;
            pauVar7 = pauVar16;
            if ((*(byte *)(in_x5 + (long)puVar17) & 1) == 0) goto LAB_1082dc3bc;
          }
          pauVar16 = pauVar7;
          puVar17 = (undefined4 *)((long)puVar17 + 1);
          puVar18 = puVar18 + 10;
        } while( true );
      }
      goto LAB_10829ddd8;
    }
    pauVar9 = (undefined1 (*) [16])(ulong)*puVar1;
    (**(code **)(*(long *)*unaff_x20 + 0x88))();
    pauVar7 = unaff_x20;
  }
LAB_10829dd84:
  func_0x00010829edd0(uVar14);
  if ((bool)uVar6) {
    return pauVar7;
  }
LAB_10829ddd8:
  ___stack_chk_fail();
  if (pauVar7 == pauVar9) {
    return (undefined1 (*) [16])0x1;
  }
  _memcmp();
  return (undefined1 (*) [16])(ulong)((int)pauVar7 == 0);
}



/* Entry: 1082f0cec; end: 1082f0f33;  */

void FUN_1082f0cec(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long extraout_x8;
  int extraout_w9;
  long lVar3;
  long lVar4;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  FUN_1082dd9a4(uVar1,lVar4);
  func_0x0001082f1558(0xf);
  func_0x0001082f1414(uVar1,&UNK_10f48875b,auStack_78);
  func_0x0001082f12c4();
  func_0x0001082f15a8(0x10);
  func_0x0001082f1414(uVar1,&UNK_10f488766,auStack_90);
  func_0x0001082f12c4();
  lVar3 = *(long *)(param_2 + 8);
  func_0x0001082f12d0();
  func_0x0001082f1594();
  func_0x0001082f12bc();
  FUN_10829dc20(param_1,lVar3,uVar2,*(undefined8 *)(param_2 + 0x30),param_1 + 0x6c);
  func_0x0001082f1484();
  if (*(char *)(lVar4 + 0x7c) == '\x01') {
    func_0x0001082f1474();
    func_0x0001082f13ec();
    func_0x0001082f146c();
  }
  func_0x0001082f12d0();
  func_0x0001082f14d4();
  func_0x0001082f12bc();
  func_0x0001082f12d0();
  func_0x0001082f12bc();
  func_0x0001082f12d0();
  if (extraout_w9 == 2) {
    FUN_10829dbfc(lVar3 + extraout_x8,&UNK_10f488884);
    func_0x0001082f12d0();
    func_0x0001082f12bc();
    func_0x0001082f12d0();
    func_0x0001082f12bc();
    func_0x0001082f12d0();
  }
  else if (extraout_w9 == 1) {
    FUN_10829dbfc(lVar3 + extraout_x8,&UNK_10f488771);
    func_0x0001082f12d0();
    func_0x0001082f12bc();
    func_0x0001082f12d0();
    func_0x0001082f12bc();
    func_0x0001082f12d0();
    func_0x0001082f12bc();
    func_0x0001082f12d0();
    func_0x0001082f12bc();
    func_0x0001082f12d0();
  }
  else {
    func_0x0001082f12bc();
    func_0x0001082f12d0();
    func_0x0001082f12bc();
    func_0x0001082f12d0();
  }
  func_0x0001082f12bc();
  func_0x0001082f12d0();
  func_0x0001082f1580();
  func_0x0001082f12bc();
  return;
}



/* Entry: 1082f0f34; end: 1082f112b;  */

void FUN_1082f0f34(float param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,long param_8,long *param_9,undefined8 param_10,
                  int param_11)

{
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_94 [52];
  
  param_7 = param_7 * (*(float *)(param_8 + 0xc) - *(float *)(param_8 + 4));
  fVar5 = param_7 * 0.5;
  fVar2 = param_1 - param_2;
  fVar3 = -(param_7 * 0.5);
  param_2 = param_2 + param_1 + param_3;
  if (param_11 == 0) {
    fVar4 = param_6 * 0.5 + -0.5;
    func_0x0001082f1528();
    func_0x0001082f12f4(auStack_94,0);
    *(float *)*param_9 = fVar2;
    func_0x0001082f1228();
    *(float *)(extraout_x8_04 + 4) = fVar3;
    func_0x0001082f1208();
    *(float *)(extraout_x8_05 + 4) = fVar4;
    func_0x0001082f1228();
    func_0x0001082f12dc();
    func_0x0001082f12f4();
    *(float *)*param_9 = fVar2;
    func_0x0001082f1228();
    *(float *)(extraout_x8_06 + 4) = fVar5;
    func_0x0001082f1208();
    *(float *)(extraout_x8_07 + 4) = fVar4;
    func_0x0001082f1228();
    func_0x0001082f12dc();
    func_0x0001082f12f4();
    *(float *)*param_9 = param_2;
    func_0x0001082f1228();
    *(float *)(extraout_x8_08 + 4) = fVar3;
    func_0x0001082f1208();
    *(float *)(extraout_x8_09 + 4) = fVar4;
    func_0x0001082f1228();
    func_0x0001082f12dc();
    func_0x0001082f12f4();
    *(float *)*param_9 = param_2;
    func_0x0001082f1228();
    *(float *)(extraout_x8_10 + 4) = fVar5;
    func_0x0001082f1208();
    *(float *)(extraout_x8_11 + 4) = fVar4;
    func_0x0001082f1228();
    *(float *)(extraout_x8_12 + 4) = param_5 * 0.5;
    lVar1 = *param_9 + 4;
  }
  else {
    func_0x0001082f1528();
    func_0x0001082f12f4(auStack_94,0);
    *(float *)*param_9 = fVar2;
    func_0x0001082f1228();
    *(float *)(extraout_x8 + 4) = fVar3;
    func_0x0001082f1208();
    func_0x0001082f1238();
    func_0x0001082f12f4();
    *(float *)*param_9 = fVar2;
    func_0x0001082f1228();
    *(float *)(extraout_x8_00 + 4) = fVar5;
    func_0x0001082f1208();
    func_0x0001082f1238();
    func_0x0001082f12f4();
    *(float *)*param_9 = param_2;
    func_0x0001082f1228();
    *(float *)(extraout_x8_01 + 4) = fVar3;
    func_0x0001082f1208();
    func_0x0001082f1238();
    func_0x0001082f12f4();
    *(float *)*param_9 = param_2;
    func_0x0001082f1228();
    *(float *)(extraout_x8_02 + 4) = fVar5;
    func_0x0001082f1208();
    *(float *)(extraout_x8_03 + 4) = param_5 * 0.5 + 0.5;
    *(float *)(extraout_x8_03 + 8) = 0.5 - param_6 * 0.5;
    *(float *)(extraout_x8_03 + 0xc) = param_4 + param_5 * 0.5 + -0.5;
    *(float *)(extraout_x8_03 + 0x10) = param_6 * 0.5 + -0.5;
    lVar1 = *param_9 + 0x10;
  }
  *param_9 = lVar1;
  return;
}



/* Entry: 1082f112c; end: 1082f1207;  */

void FUN_1082f112c(undefined4 param_1,undefined4 param_2,long *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  
  func_0x0001082f14f8(param_4,0);
  func_0x0001082f14f8(param_4,1);
  func_0x0001082f14f8(param_4,2);
  FUN_10827a098(param_4,3);
  puVar1 = (undefined4 *)*param_3;
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *param_3 = *param_3 + 8;
  return;
}



/* Entry: 1082f1208; end: 1082f15bb;  */

void FUN_1082f1208(void)

{
  long lVar1;
  long *unaff_x19;
  undefined4 unaff_s8;
  
  lVar1 = *unaff_x19;
  *unaff_x19 = lVar1 + 4;
  *(undefined4 *)(lVar1 + 4) = unaff_s8;
  *unaff_x19 = *unaff_x19 + 4;
  return;
}



/* Entry: 1082f15bc; end: 1082f1a77;  */

undefined8 *
FUN_1082f15bc(long param_1,undefined8 param_2,int param_3,undefined *param_4,undefined8 param_5,
             ulong param_6,long param_7,uint param_8)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  undefined **ppuVar5;
  code *pcVar6;
  undefined1 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  float fVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  float fStack_d4;
  undefined8 *puStack_d0;
  byte bStack_c2;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  uint uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined *apuStack_90 [4];
  
  func_0x0001082f2dc0();
  FUN_108376ad8(&puStack_d0);
  FUN_108287e50(param_7,&puStack_d0);
  uVar20 = param_7 + 0x40;
  FUN_1082b65d4(uVar20,param_6,&fStack_d4);
  apuStack_90[0] = &UNK_10df1744c;
  if ((uVar20 & 1) != 0) {
    bVar3 = false;
    NEON_fminnm((float)(double)(long)(fStack_d4 * 255.0 + 0.5),0x4effffff);
    if (param_8 == 0) {
      apuStack_90[0] = param_4;
    }
    bVar4 = false;
    uVar17 = 1;
    goto LAB_1082f16c4;
  }
  FUN_1082f1a78();
  if ((int)param_7 != 0) {
    if (param_8 == 0) {
      apuStack_90[0] = param_4;
    }
code_r0x0001082f16b8:
    bVar3 = false;
    uVar17 = 1;
    goto code_r0x0001082f16bc;
  }
  switch(bStack_c2 & 3) {
  case 0:
    apuStack_90[0] = &UNK_10df174bc;
    if ((param_8 & 1) != 0) goto code_r0x0001082f16b8;
    apuStack_90[1] = &UNK_10df174f4;
    break;
  case 1:
    apuStack_90[0] = &UNK_10df17468;
    if ((param_8 & 1) != 0) goto code_r0x0001082f16b8;
    apuStack_90[1] = &UNK_10df174a0;
    break;
  case 2:
    apuStack_90[0] = &UNK_10df174bc;
    if ((param_8 & 1) != 0) {
code_r0x0001082f19a0:
      bVar3 = false;
      uVar17 = 1;
      bVar4 = true;
      goto LAB_1082f16c4;
    }
    apuStack_90[1] = &UNK_10df174d8;
    goto code_r0x0001082f19d4;
  case 3:
    apuStack_90[0] = &UNK_10df17468;
    if ((param_8 & 1) != 0) goto code_r0x0001082f19a0;
    apuStack_90[1] = &UNK_10df17484;
code_r0x0001082f19d4:
    uVar17 = 2;
    bVar4 = true;
    bVar3 = true;
    goto LAB_1082f16c4;
  }
  bVar3 = true;
  uVar17 = 2;
code_r0x0001082f16bc:
  bVar4 = false;
LAB_1082f16c4:
  puVar15 = puStack_d0;
  FUN_1082d8734(puStack_d0);
  uVar21 = 0x3e800000;
  FUN_1082d2908(0x3e800000,param_6,puVar15);
  uStack_e8 = 0;
  uStack_e0 = 0;
  plVar11 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar11 + 0x28))();
  lVar12 = (long)plVar11 + *(long *)(*plVar11 + -0x18);
  FUN_1082b1dfc(lVar12);
  FUN_1082b780c(&puStack_d0,lVar12,param_6,&uStack_e8);
  uVar19 = (ulong)(uVar17 - 1);
  uVar18 = (ulong)uVar17;
  for (uVar20 = 0; uVar13 = uVar18, uVar18 != uVar20; uVar20 = uVar20 + 1) {
    bVar1 = false;
    if (uVar19 == uVar20) {
      bVar1 = bVar3;
    }
    if (bVar1) {
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_b8 = uRam0000000113254e28;
      ppuStack_c0 = ppuRam0000000113254e20;
      uStack_a8 = (uint)uRam0000000113254e38;
      uStack_a4 = (undefined4)((ulong)uRam0000000113254e38 >> 0x20);
      uStack_b0 = uRam0000000113254e30;
      uStack_a0 = (undefined4)uRam0000000113254e40;
      uStack_9c = (undefined4)((ulong)uRam0000000113254e40 >> 0x20);
      if (bVar4) {
        uStack_f8 = uStack_e0;
        uStack_100 = uStack_e8;
        uStack_128 = 0;
        ppuStack_130 = (undefined **)0x3f800000;
        uStack_118 = 0;
        uStack_120 = 0x3f800000;
        uStack_110 = 0x103f800000;
        uVar13 = param_6;
        FUN_10828e338();
        if (((uVar13 & 1) == 0) &&
           (uVar13 = param_6, FUN_10818cfd0(param_6,&ppuStack_130), (int)uVar13 != 0)) {
          FUN_108189c38(&ppuStack_130,&uStack_100,1);
        }
        else {
          uVar14 = param_6;
          FUN_10818cfd0(param_6,&ppuStack_c0);
          uVar13 = uVar19;
          if ((uVar14 & 1) == 0) break;
        }
        uVar14 = param_6;
        FUN_10828e338();
        uVar13 = 0x113254e20;
        if ((int)uVar14 == 0) {
          uVar13 = param_6;
        }
      }
      else {
        puVar15 = puStack_d0;
        FUN_1082d8734();
        uStack_f8 = puVar15[1];
        uStack_100 = *puVar15;
        uVar13 = param_6;
      }
      FUN_1082b9f8c(param_1,param_5,apuStack_90[uVar19],param_2,param_3 == 2,uVar13,&uStack_100,
                    &ppuStack_c0);
    }
    else {
      if (param_8 == 0 && !bVar3) {
        func_0x0001082f2e34(&ppuStack_c0);
        FUN_1082f1ad4(uVar21);
        ppuStack_138 = ppuStack_c0;
      }
      else {
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_9c = 0x3f800000;
        uStack_98 = 0x3f800000;
        uStack_a4 = 0x3f800000;
        uStack_a0 = 0x3f800000;
        ppuStack_c0 = &PTR_PTR_110a34ca8;
        uStack_a8 = uStack_a8 & 0xffffff00;
        func_0x0001082f2e34(&ppuStack_130,&ppuStack_c0);
        FUN_1082f1ad4(uVar21);
        ppuVar5 = ppuStack_130;
        func_0x00010827ee54(&ppuStack_c0);
        ppuStack_138 = ppuVar5;
      }
      uStack_a8 = 0;
      uStack_a4 = 0;
      FUN_1082c0f08(param_1,param_5,&ppuStack_138,&ppuStack_c0);
      FUN_10827fb18(&ppuStack_c0);
      ppuVar5 = ppuStack_138;
      ppuStack_138 = (undefined **)0x0;
      if (ppuVar5 != (undefined **)0x0) {
        func_0x0001082f2e0c();
      }
    }
  }
  uVar7 = uVar13 == uVar18;
  FUN_10837ca5c();
  func_0x0001082f2ddc();
  if ((bool)uVar7) {
    return (undefined8 *)(ulong)(uVar18 <= uVar13);
  }
  ___stack_chk_fail();
  FUN_10837ca5c();
  puVar15 = puStack_d0;
  func_0x0001082f2d9c();
  if (*(char *)(puVar15 + 7) == '\x04') {
    bVar2 = *(byte *)((long)puVar15 + 0xe) >> 1;
  }
  else {
    bVar2 = *(byte *)((long)puVar15 + 0x3b);
  }
  if ((bVar2 & 1) == 0) {
    iVar8 = (int)puVar15 + 0x40;
    FUN_10828786c();
    if (iVar8 != 0) {
      puVar10 = puVar15 + 8;
      FUN_10828786c();
      puVar9 = (undefined8 *)0x1;
      switch(*(undefined1 *)(puVar15 + 7)) {
      case 0:
      case 2:
      case 3:
        break;
      case 1:
      case 6:
        puVar9 = (undefined8 *)0x0;
        break;
      case 4:
        if ((((ulong)puVar10 & 1) != 0) || (puVar9 = puVar15, FUN_108377324(), (int)puVar9 != 0)) {
          FUN_1083773cc(puVar15);
          return (undefined8 *)(ulong)((int)puVar15 == 0);
        }
        break;
      case 5:
        if (((int)puVar10 == 0) || (ABS(*(float *)((long)puVar15 + 0x14)) < 360.0)) {
          if (*(char *)(puVar15 + 3) == '\x01') {
            fVar16 = 180.0;
          }
          else {
            fVar16 = 360.0;
          }
          puVar9 = (undefined8 *)(ulong)(ABS(*(float *)((long)puVar15 + 0x14)) <= fVar16);
        }
        break;
      default:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1082d8588);
        (*pcVar6)();
      }
      return puVar9;
    }
    puVar15 = (undefined8 *)0x1;
  }
  else {
    puVar15 = (undefined8 *)0x0;
  }
  return puVar15;
}



/* Entry: 1082f1a78; end: 1082f1ad3;  */

ulong FUN_1082f1a78(ulong param_1)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  
  if (*(char *)(param_1 + 0x38) == '\x04') {
    bVar1 = *(byte *)(param_1 + 0xe) >> 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x3b);
  }
  if ((bVar1 & 1) == 0) {
    iVar3 = (int)param_1 + 0x40;
    FUN_10828786c();
    if (iVar3 != 0) {
      uVar5 = param_1 + 0x40;
      FUN_10828786c();
      uVar4 = 1;
      switch(*(undefined1 *)(param_1 + 0x38)) {
      case 0:
      case 2:
      case 3:
        break;
      case 1:
      case 6:
        uVar4 = 0;
        break;
      case 4:
        if (((uVar5 & 1) != 0) || (uVar4 = param_1, FUN_108377324(), (int)uVar4 != 0)) {
          FUN_1083773cc(param_1);
          return (ulong)((int)param_1 == 0);
        }
        break;
      case 5:
        if (((int)uVar5 == 0) || (ABS(*(float *)(param_1 + 0x14)) < 360.0)) {
          if (*(char *)(param_1 + 0x18) == '\x01') {
            fVar6 = 180.0;
          }
          else {
            fVar6 = 360.0;
          }
          uVar4 = (ulong)(ABS(*(float *)(param_1 + 0x14)) <= fVar6);
        }
        break;
      default:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1082d8588);
        (*pcVar2)();
      }
      return uVar4;
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



/* Entry: 1082f1ad4; end: 1082f1bfb;  */

void FUN_1082f1ad4(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *in_x7;
  undefined8 auStack_90 [2];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000108376b14(auStack_90,param_3);
  uStack_78 = in_x7[1];
  uStack_80 = *in_x7;
  uStack_68 = *(undefined8 *)(param_2 + 0x24);
  uStack_70 = *(undefined8 *)(param_2 + 0x1c);
  if (*(char *)(param_2 + 0x18) == '\x01') {
    lVar1 = 0xd0;
    __Znwm();
    func_0x0001082f2d88();
  }
  else {
    lVar1 = 0xf0;
    __Znwm();
    FUN_1082a3af0(lVar1 + 0xd0,param_2);
    func_0x0001082f2d88(lVar1,lVar1 + 0xd0,&uStack_70,auStack_90);
  }
  *param_1 = lVar1;
  FUN_10837ca5c(auStack_90[0]);
  return;
}



/* Entry: 1082f1bfc; end: 1082f1c1f;  */

undefined4 FUN_1082f1bfc(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_1082f1a78();
  uVar1 = 1;
  if (param_2 != 0) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 1082f1c20; end: 1082f1cf3;  */

void FUN_1082f1c20(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[4] + 0x40;
  FUN_1082b65d4(uVar1,param_2[3],0);
  uVar2 = param_2[4];
  FUN_1082f1a78();
  if (((uVar2 & 1) == 0) && ((uVar1 & 1) == 0)) {
    uVar3 = param_2[1];
    FUN_1082a8310(uVar3,*param_2);
    if ((int)uVar3 == 0) {
      return;
    }
  }
  if ((*(uint *)(param_2 + 7) & 0xfffffffd) == 0) {
    FUN_10828786c();
  }
  return;
}



/* Entry: 1082f1cf4; end: 1082f1d87;  */

void FUN_1082f1cf4(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  
  func_0x0001082f2df4();
  if ((bool)in_ZR) {
    FUN_10827b938();
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_2c = 0x3f8000003f800000;
  uStack_34 = 0x3f8000003f800000;
  ppuStack_50 = &PTR_PTR_110a34ca8;
  uStack_38 = 0;
  FUN_1082f15bc(*(undefined8 *)(unaff_x19 + 8),&ppuStack_50,(ulong)*(byte *)(unaff_x19 + 0x30) << 1,
                &UNK_10df14cb4,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0x20),
                *(undefined8 *)(unaff_x19 + 0x28),1);
  func_0x00010827ee54(&ppuStack_50);
  return;
}



/* Entry: 1082f1d88; end: 1082f1d9b;  */

void FUN_1082f1d88(void)

{
  return;
}



/* Entry: 1082f1d9c; end: 1082f1ff3;  */

void FUN_1082f1d9c(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 *param_7,int param_8,int param_9,
                  undefined8 *param_10,undefined *param_11)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  short sVar4;
  undefined8 uVar5;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 auStack_88 [2];
  undefined4 uStack_78;
  
  func_0x0001082f2dd0();
  if ((bRam000000011372a928 & 1) == 0) {
    iVar2 = 0x1372a928;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1082e6880();
      iRam000000011372a920 = iVar2;
      ___cxa_guard_release(0x11372a928);
    }
  }
  iVar2 = iRam000000011372a920;
  unaff_x19[2] = 0;
  unaff_x19[1] = 0;
  *(short *)(unaff_x19 + 3) = (short)iVar2;
  *(undefined8 *)((long)unaff_x19 + 0x24) = 0;
  *(undefined8 *)((long)unaff_x19 + 0x1c) = 0;
  *(undefined4 *)((long)unaff_x19 + 0x2c) = 0;
  *unaff_x19 = &PTR_SUB_110a39d90;
  plVar6 = unaff_x19 + 9;
  *plVar6 = (long)(unaff_x19 + 6);
  unaff_x19[10] = 0x200000000;
  unaff_x19[0xb] = unaff_x20;
  *(undefined1 *)(unaff_x19 + 0xc) = 0;
  *(byte *)((long)unaff_x19 + 0x61) = *(byte *)((long)unaff_x19 + 0x61) & 0xf0 | (byte)param_9;
  puVar1 = &UNK_10df14cb4;
  if (param_11 != (undefined *)0x0) {
    puVar1 = param_11;
  }
  unaff_x19[0xd] = puVar1;
  uVar5 = *param_4;
  unaff_x19[0xf] = param_4[1];
  unaff_x19[0xe] = uVar5;
  *(undefined1 *)(unaff_x19 + 0x10) = param_6;
  uVar8 = param_7[1];
  uVar7 = *param_7;
  uVar10 = param_7[3];
  uVar9 = param_7[2];
  uVar5 = param_7[4];
  *(undefined4 *)(unaff_x19 + 0x16) = 8;
  *(undefined8 *)((long)unaff_x19 + 0xa4) = uVar5;
  *(undefined8 *)((long)unaff_x19 + 0x9c) = uVar10;
  *(undefined8 *)((long)unaff_x19 + 0x94) = uVar9;
  *(undefined8 *)((long)unaff_x19 + 0x8c) = uVar8;
  *(undefined8 *)((long)unaff_x19 + 0x84) = uVar7;
  *(char *)((long)unaff_x19 + 0xac) = (char)param_8;
  unaff_x19[0x18] = 0;
  unaff_x19[0x19] = 0;
  unaff_x19[0x17] = 0;
  func_0x000108376b14(auStack_88,param_5);
  iVar2 = *(int *)(unaff_x19 + 10);
  lVar3 = (long)iVar2;
  uStack_78 = param_1;
  if (iVar2 < (int)(*(uint *)((long)unaff_x19 + 0x54) >> 1)) {
    FUN_1082f2708(*plVar6 + (long)iVar2 * 0x18,auStack_88);
  }
  else {
    uVar5 = 1;
    FUN_1082f272c(lVar3,1);
    FUN_1082f2708(lVar3 + (long)*(int *)(unaff_x19 + 10) * 0x18,auStack_88);
    FUN_1082f2774(plVar6,lVar3,uVar5);
  }
  *(int *)(unaff_x19 + 10) = *(int *)(unaff_x19 + 10) + 1;
  FUN_10837ca5c(auStack_88[0]);
  sVar4 = 2;
  if (param_8 == 0) {
    sVar4 = 0;
  }
  uVar5 = *param_10;
  unaff_x19[5] = param_10[1];
  unaff_x19[4] = uVar5;
  if (param_9 != 0) {
    sVar4 = sVar4 + 1;
  }
  *(short *)((long)unaff_x19 + 0x1a) = sVar4;
  return;
}



/* Entry: 1082f1ff4; end: 1082f207b;  */

long FUN_1082f1ff4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x18);
    uVar2 = uVar1 + (long)*(int *)(param_1 + 0x20) * 0x18;
    do {
      FUN_10837ca38();
      uVar1 = uVar1 + 0x18;
    } while (uVar1 < uVar2);
  }
  if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
    _free(*(undefined8 *)(param_1 + 0x18));
  }
  return param_1;
}



/* Entry: 1082f207c; end: 1082f208f;  */

void FUN_1082f207c(void)

{
  func_0x0001082f2044();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082f2090; end: 1082f20b3;  */

undefined * FUN_1082f2090(void)

{
  return &UNK_10f488967;
}



/* Entry: 1082f20b4; end: 1082f225f;  */

undefined8 FUN_1082f20b4(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long unaff_x19;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  ulong uVar6;
  
  func_0x0001082f2dd0(param_1,param_2,param_4);
  param_1 = param_1 + 0x58;
  FUN_1082fcb80(param_1,param_2 + 0x58);
  if ((int)param_1 != 0) {
    uVar4 = unaff_x19 + 0x70;
    FUN_10828e84c(uVar4,unaff_x20 + 0x70);
    if (((uVar4 & 1) == 0) && (*(char *)(unaff_x19 + 0x80) == *(char *)(unaff_x20 + 0x80))) {
      lVar5 = unaff_x19 + 0x84;
      FUN_10829dddc(lVar5,unaff_x20 + 0x84);
      if (((int)lVar5 != 0) && (*(char *)(unaff_x19 + 0xac) == *(char *)(unaff_x20 + 0xac))) {
        uVar1 = *(uint *)(unaff_x20 + 0x50);
        uVar6 = (ulong)uVar1;
        lVar5 = *(long *)(unaff_x20 + 0x48);
        uVar3 = *(uint *)(unaff_x19 + 0x50);
        uVar4 = (ulong)uVar3;
        if ((int)((*(uint *)(unaff_x19 + 0x54) >> 1) - uVar3) < (int)uVar1) {
          FUN_1082f272c(uVar4,uVar6);
          FUN_1082f2774(unaff_x19 + 0x48,uVar4,uVar6);
          uVar3 = *(uint *)(unaff_x19 + 0x50);
        }
        lVar2 = *(long *)(unaff_x19 + 0x48) + (long)(int)uVar3 * 0x18;
        *(uint *)(unaff_x19 + 0x50) = uVar3 + uVar1;
        for (uVar4 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar4 != 0;
            uVar4 = uVar4 - 1) {
          func_0x000108376b14(lVar2,lVar5);
          *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(lVar5 + 0x10);
          lVar2 = lVar2 + 0x18;
          lVar5 = lVar5 + 0x18;
        }
        return 0;
      }
    }
  }
  return 2;
}



/* Entry: 1082f2260; end: 1082f228f;  */

/* WARNING: Removing unreachable block (ram,0x0001082fcb58) */

uint FUN_1082f2260(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x58;
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x0001082fbad4(lVar1);
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  return (uint)lVar1 & 0xffff;
}



/* Entry: 1082f2290; end: 1082f2377;  */

void FUN_1082f2290(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  uint auStack_90 [2];
  undefined8 uStack_88;
  undefined4 uStack_7c;
  undefined1 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_74 = 0;
  uStack_68 = *(undefined8 *)(param_1 + 0x78);
  uStack_70 = *(undefined8 *)(param_1 + 0x70);
  uStack_78 = *(undefined1 *)(param_1 + 0x80);
  uStack_7c = 1;
  auStack_90[0] = *(byte *)(param_1 + 0x61) >> 2 & 1;
  uStack_88 = 0;
  uVar1 = param_3;
  func_0x00010828dd54(param_3,&uStack_74,&uStack_7c,auStack_90,param_1 + 0x84);
  lVar2 = param_1;
  FUN_1082f27e4();
  lVar3 = param_1 + 0x58;
  FUN_1082fcbb8(lVar3,param_2,param_3,param_4,param_5,param_6,param_7,uVar1,(char)lVar2,param_8,
                param_9);
  *(long *)(param_1 + 200) = lVar3;
  return;
}



/* Entry: 1082f2378; end: 1082f2707;  */

void FUN_1082f2378(byte param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  short sVar2;
  ulong uVar3;
  undefined1 uVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 **ppuVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  undefined4 *extraout_x8;
  uint uVar12;
  uint uVar13;
  long lVar14;
  short *psVar15;
  long unaff_x19;
  undefined4 uVar16;
  float fVar17;
  byte abStack_1e0 [8];
  undefined8 auStack_1c8 [2];
  uint uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  short *psStack_190;
  short sStack_188;
  undefined8 uStack_184;
  undefined1 uStack_17c;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined2 uStack_140;
  undefined1 *puStack_138;
  undefined1 auStack_130 [136];
  int iStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  
  abStack_1e0[0] = param_1;
  func_0x0001082f2dd0();
  func_0x0001082f2dc0();
  FUN_1082f27e4();
  lStack_178 = unaff_x19 + 0xb0;
  auStack_1c8[0] = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_17c = 1;
  FUN_1082f28ec(abStack_1e0);
  lVar14 = 0;
code_r0x0001082f240c:
  uVar4 = lVar14 == *(int *)(unaff_x19 + 0x50);
  if (*(int *)(unaff_x19 + 0x50) <= lVar14) {
    FUN_1082f28b8();
    func_0x0001082f2ddc();
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
    FUN_1082647e4(&uStack_1a8);
    puVar9 = auStack_1c8;
    FUN_1082647e4();
    func_0x0001082f2d9c();
    func_0x000108376b14();
    *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(param_2 + 2);
    return;
  }
  plVar10 = (long *)(*(long *)(unaff_x19 + 0x48) + lVar14 * 0x18);
  fVar17 = *(float *)(plVar10 + 2);
  lVar11 = *plVar10;
  uStack_170 = *(undefined8 *)(lVar11 + 0x28);
  uStack_168 = *(undefined8 *)(lVar11 + 0x40);
  func_0x0001082f2da4();
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  puStack_158 = extraout_x8;
  do {
    puVar9 = &uStack_170;
    param_2 = &uStack_a0;
    FUN_108379cc8();
    switch((ulong)puVar9 & 0xffffffff) {
    case 0:
      pbVar5 = abStack_1e0;
      FUN_1082f2adc(pbVar5,1,0,0);
      if ((int)pbVar5 != 0) {
        if (1 < abStack_1e0[0] - 3) {
          sStack_188 = (short)((int)puStack_1b0 - uStack_1b8 >> 3);
          uStack_184 = uStack_a0;
        }
        *puStack_1b0 = uStack_a0;
        puStack_1b0 = puStack_1b0 + 1;
      }
      break;
    case 1:
      uVar16 = 3;
      if (abStack_1e0[0] != 0) {
        uVar16 = 0;
      }
      uVar1 = 2;
      if (abStack_1e0[0] != 3) {
        uVar1 = uVar16;
      }
      pbVar5 = abStack_1e0;
      FUN_1082f2adc(pbVar5,1,uVar1,&uStack_a0);
      if ((int)pbVar5 != 0) {
        if ((abStack_1e0[0] == 0) || (abStack_1e0[0] == 3)) {
          if (1 < abStack_1e0[0] - 3) {
            *psStack_190 = sStack_188;
            psStack_190 = psStack_190 + 1;
          }
          sVar2 = (short)((long)puStack_1b0 - (ulong)uStack_1b8 >> 3);
          *psStack_190 = sVar2 + -1;
          psStack_190[1] = sVar2;
          psStack_190 = psStack_190 + 2;
        }
        *puStack_1b0 = uStack_98;
        puStack_1b0 = puStack_1b0 + 1;
      }
      break;
    case 2:
      func_0x0001082f2e18(abStack_1e0,&uStack_a0);
      break;
    case 3:
      iStack_a8 = 0;
      ppuVar8 = &puStack_138;
      puStack_138 = auStack_130;
      FUN_1082d25dc(*puStack_158,fVar17,ppuVar8,&uStack_a0);
      for (lVar11 = 0; lVar11 < iStack_a8; lVar11 = lVar11 + 1) {
        func_0x0001082f2e18(abStack_1e0,ppuVar8);
        ppuVar8 = ppuVar8 + 2;
      }
      FUN_1082d2744(&puStack_138);
      break;
    case 4:
      uVar16 = 0xc00;
      if (abStack_1e0[0] != 0) {
        uVar16 = 0;
      }
      uVar1 = 0x800;
      if (abStack_1e0[0] != 3) {
        uVar1 = uVar16;
      }
      pbVar5 = abStack_1e0;
      FUN_1082f2adc(pbVar5,0x400,uVar1,&uStack_a0);
      puVar9 = puStack_1b0;
      if ((int)pbVar5 != 0) {
        uVar3 = (ulong)uStack_1b8;
        puVar6 = &uStack_a0;
        FUN_1082d2ba4(fVar17,puVar6);
        puVar7 = &uStack_a0;
        FUN_1082d2c48(fVar17 * fVar17,puVar7,&uStack_98,auStack_90,auStack_88,&puStack_1b0,puVar6);
        uVar12 = (uint)abStack_1e0[0];
        if ((uVar12 == 3) || (uVar12 == 0)) {
          for (uVar13 = 0; (uVar13 & 0xffff) < ((uint)puVar7 & 0xffff); uVar13 = uVar13 + 1) {
            psVar15 = psStack_190;
            if (1 < uVar12 - 3) {
              psVar15 = psStack_190 + 1;
              *psStack_190 = sStack_188;
            }
            *psVar15 = (short)((long)puVar9 - uVar3 >> 3) + -1 + (short)uVar13;
            psVar15[1] = (short)uVar13 + (short)((uint)((long)puVar9 - uVar3) >> 3);
            psStack_190 = psVar15 + 2;
          }
        }
      }
      break;
    case 6:
      goto code_r0x0001082f2688;
    }
  } while( true );
code_r0x0001082f2688:
  lVar14 = lVar14 + 1;
  goto code_r0x0001082f240c;
}



/* Entry: 1082f2708; end: 1082f272b;  */

void FUN_1082f2708(long param_1,long param_2)

{
  func_0x000108376b14();
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  return;
}



/* Entry: 1082f272c; end: 1082f2773;  */

void FUN_1082f272c(long param_1,int param_2,ulong param_3)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((int)((uint)param_1 ^ 0x7fffffff) < param_2) {
    func_0x00010bdb1a68();
    func_0x0001082f2dd0();
    if (*(int *)(param_1 + 8) != 0) {
      _memcpy();
    }
    if ((*(byte *)((long)unaff_x19 + 0xc) & 1) != 0) {
      _free(*unaff_x19);
    }
    param_3 = param_3 / 0x18;
    if (0x7ffffffe < param_3) {
      param_3 = 0x7fffffff;
    }
    *unaff_x19 = unaff_x20;
    *(uint *)((long)unaff_x19 + 0xc) = (int)param_3 << 1 | 1;
    return;
  }
  uStack_18 = 0x7fffffff;
  uStack_20 = 0x18;
  FUN_10840fe24(0x3ff8000000000000,&uStack_20,param_2 + (uint)param_1);
  return;
}



/* Entry: 1082f2774; end: 1082f27e3;  */

void FUN_1082f2774(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001082f2dd0();
  if (*(int *)(param_1 + 8) != 0) {
    _memcpy();
  }
  if ((*(byte *)((long)unaff_x19 + 0xc) & 1) != 0) {
    _free(*unaff_x19);
  }
  param_3 = param_3 / 0x18;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *unaff_x19 = unaff_x20;
  *(uint *)((long)unaff_x19 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 1082f27e4; end: 1082f28b7;  */

undefined4 FUN_1082f27e4(long param_1)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  long extraout_x8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined2 uStack_50;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  func_0x0001082f2dc0();
  lStack_28 = extraout_x8;
  if (*(char *)(param_1 + 0xac) == '\x01') {
    if (*(int *)(param_1 + 0x50) < 2) {
      if (*(int *)(param_1 + 0x50) != 1) goto LAB_1082f28b4;
      uStack_80 = *(undefined8 *)(**(long **)(param_1 + 0x48) + 0x28);
      uStack_78 = *(undefined8 *)(**(long **)(param_1 + 0x48) + 0x40);
      func_0x0001082f2da4();
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      bVar2 = true;
      do {
        iVar4 = (int)&uStack_80;
        FUN_108379cc8(&uStack_80,auStack_48);
        if (iVar4 == 6) break;
        bVar1 = bVar2 || iVar4 != 0;
        bVar2 = false;
      } while (bVar1);
      uVar5 = 3;
      if (iVar4 == 6) {
        uVar5 = 4;
      }
    }
    else {
      uVar5 = 3;
    }
  }
  else {
    uVar5 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return uVar5;
  }
  ___stack_chk_fail();
LAB_1082f28b4:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1082f28b8);
  (*pcVar3)();
}



/* Entry: 1082f28b8; end: 1082f28eb;  */

long FUN_1082f28b8(long param_1)

{
  FUN_1082f2ba0();
  FUN_1082647e4(param_1 + 0x38);
  FUN_1082647e4(param_1 + 0x18);
  return param_1;
}



/* Entry: 1082f28ec; end: 1082f29d7;  */

void FUN_1082f28ec(char *param_1)

{
  int iVar1;
  char cVar2;
  long *plVar3;
  int iVar4;
  
  plVar3 = *(long **)(param_1 + 8);
  (**(code **)(*plVar3 + 0x28))
            (plVar3,*(undefined8 *)(param_1 + 0x10),0x402,0x4000,param_1 + 0x18,param_1 + 0x20,
             param_1 + 0x24);
  *(long **)(param_1 + 0x28) = plVar3;
  if (plVar3 == (long *)0x0) {
    FUN_10841076c(&UNK_10f488975);
    param_1[0x30] = '\0';
    param_1[0x31] = '\0';
    param_1[0x32] = '\0';
    param_1[0x33] = '\0';
    param_1[0x34] = '\0';
    param_1[0x35] = '\0';
    param_1[0x36] = '\0';
    param_1[0x37] = '\0';
    param_1[100] = '\0';
    param_1[0x48] = '\0';
    param_1[0x49] = '\0';
    param_1[0x4a] = '\0';
    param_1[0x4b] = '\0';
    param_1[0x4c] = '\0';
    param_1[0x4d] = '\0';
    param_1[0x4e] = '\0';
    param_1[0x4f] = '\0';
    param_1[0x50] = '\0';
    param_1[0x51] = '\0';
    param_1[0x52] = '\0';
    param_1[0x53] = '\0';
    param_1[0x54] = '\0';
    param_1[0x55] = '\0';
    param_1[0x56] = '\0';
    param_1[0x57] = '\0';
  }
  else {
    cVar2 = *param_1;
    if (cVar2 == '\x03' || cVar2 == '\0') {
      iVar4 = 3;
      if (cVar2 != '\0') {
        iVar4 = 0;
      }
      iVar1 = 2;
      if (cVar2 != '\x03') {
        iVar1 = iVar4;
      }
      plVar3 = *(long **)(param_1 + 8);
      (**(code **)(*plVar3 + 0x30))
                (plVar3,iVar1 << 10,iVar1 << 0xe,param_1 + 0x38,param_1 + 0x40,param_1 + 0x44);
      *(long **)(param_1 + 0x48) = plVar3;
      if (plVar3 == (long *)0x0) {
        FUN_10841076c(&UNK_10f4889b9);
        plVar3 = (long *)0x0;
        param_1[0x28] = '\0';
        param_1[0x29] = '\0';
        param_1[0x2a] = '\0';
        param_1[0x2b] = '\0';
        param_1[0x2c] = '\0';
        param_1[0x2d] = '\0';
        param_1[0x2e] = '\0';
        param_1[0x2f] = '\0';
        param_1[100] = '\0';
      }
      else {
        plVar3 = *(long **)(param_1 + 0x28);
      }
    }
    *(long **)(param_1 + 0x30) = plVar3;
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x48);
  }
  param_1[0x58] = '\0';
  param_1[0x59] = '\0';
  return;
}



/* Entry: 1082f29d8; end: 1082f2adb;  */

void FUN_1082f29d8(undefined8 param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  byte *unaff_x19;
  uint unaff_w20;
  long lVar4;
  long lVar5;
  
  func_0x0001082f2dd0();
  FUN_1082f2adc();
  if (param_3 != 0) {
    lVar4 = *(long *)(unaff_x19 + 0x30);
    lVar5 = *(long *)(unaff_x19 + 0x28);
    FUN_1082d2a40(param_2);
    FUN_1082d2ac0(param_1);
    uVar1 = (uint)*unaff_x19;
    if ((uVar1 == 3) || (uVar1 == 0)) {
      for (uVar2 = 0; (uVar2 & 0xffff) < (unaff_w20 & 0xffff); uVar2 = uVar2 + 1) {
        if (uVar1 - 3 < 2) {
          psVar3 = *(short **)(unaff_x19 + 0x50);
        }
        else {
          psVar3 = *(undefined2 **)(unaff_x19 + 0x50) + 1;
          **(undefined2 **)(unaff_x19 + 0x50) = *(undefined2 *)(unaff_x19 + 0x58);
        }
        *psVar3 = (short)((ulong)(lVar4 - lVar5) >> 3) + -1 + (short)uVar2;
        *(short **)(unaff_x19 + 0x50) = psVar3 + 2;
        psVar3[1] = (short)uVar2 + (short)((uint)(lVar4 - lVar5) >> 3);
      }
    }
  }
  return;
}



/* Entry: 1082f2adc; end: 1082f2b9f;  */

undefined8 FUN_1082f2adc(byte *param_1,uint param_2,uint param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  if (param_1[100] != 1) {
    return 0;
  }
  if (((ulong)(*(long *)(param_1 + 0x28) + (long)*(int *)(param_1 + 0x24) * 8) <
       *(long *)(param_1 + 0x30) + (ulong)param_2 * 8) ||
     ((ulong)(*(long *)(param_1 + 0x48) + (long)*(int *)(param_1 + 0x44) * 2) <
      *(long *)(param_1 + 0x50) + (ulong)param_3 * 2)) {
    FUN_1082f2ba0(param_1);
    FUN_1082f28ec(param_1);
    if (param_1[100] != 1) {
      return 0;
    }
    if (param_4 != (undefined8 *)0x0) {
      if (1 < *param_1 - 3) {
        puVar1 = *(undefined8 **)(param_1 + 0x30);
        *(undefined8 **)(param_1 + 0x30) = puVar1 + 1;
        *puVar1 = *(undefined8 *)(param_1 + 0x5c);
      }
      puVar1 = *(undefined8 **)(param_1 + 0x30);
      *(undefined8 **)(param_1 + 0x30) = puVar1 + 1;
      *puVar1 = *param_4;
    }
  }
  return 1;
}



/* Entry: 1082f2ba0; end: 1082f2d2b;  */

void FUN_1082f2ba0(char *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if (param_1[100] != '\x01') {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x30);
  uVar7 = (ulong)(lVar2 - lVar1) >> 3;
  uVar9 = (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48)) >> 1;
  lStack_48 = 0;
  iVar8 = (int)uVar9;
  iVar6 = (int)uVar7;
  iVar3 = iVar6;
  if (*param_1 == '\x03' || *param_1 == '\0') {
    iVar3 = iVar8;
  }
  if (iVar3 == 0) {
    bVar4 = true;
  }
  else {
    lVar5 = *(long *)(param_1 + 8);
    FUN_1082e91fc();
    lStack_48 = lVar5;
    if ((*param_1 == '\0') || (*param_1 == '\x03')) {
      uStack_58 = *(undefined8 *)(param_1 + 0x38);
      param_1[0x38] = '\0';
      param_1[0x39] = '\0';
      param_1[0x3a] = '\0';
      param_1[0x3b] = '\0';
      param_1[0x3c] = '\0';
      param_1[0x3d] = '\0';
      param_1[0x3e] = '\0';
      param_1[0x3f] = '\0';
      uStack_60 = *(undefined8 *)(param_1 + 0x18);
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      FUN_1082e6d44(lVar5,&uStack_58,uVar9,*(undefined4 *)(param_1 + 0x40),0,
                    ((uint)((ulong)(lVar2 - lVar1) >> 3) & 0x1fffffff) - 1 & 0xffff,0,&uStack_60,
                    *(undefined4 *)(param_1 + 0x20));
      FUN_1082647e4(&uStack_60);
      puVar10 = &uStack_58;
    }
    else {
      uStack_50 = *(undefined8 *)(param_1 + 0x18);
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      puVar10 = &uStack_50;
      FUN_1082f2d2c(lVar5,&uStack_50,uVar7,*(undefined4 *)(param_1 + 0x20));
    }
    FUN_1082647e4(puVar10);
    bVar4 = lVar5 == 0;
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x48))
            (*(long **)(param_1 + 8),*(int *)(param_1 + 0x44) - iVar8);
  (**(code **)(**(long **)(param_1 + 8) + 0x50))
            (*(long **)(param_1 + 8),*(int *)(param_1 + 0x24) - iVar6,
             *(undefined8 *)(param_1 + 0x10));
  if (!bVar4) {
    FUN_1082eae58(*(undefined8 *)(param_1 + 0x68),&lStack_48);
  }
  return;
}



/* Entry: 1082f2d2c; end: 1082f2d7b;  */

void FUN_1082f2d2c(long *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  *param_1 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  FUN_10826c938(param_1 + 4,param_2);
  *(undefined4 *)(param_1 + 5) = param_3;
  *(undefined4 *)((long)param_1 + 0x2c) = param_4;
  return;
}



/* Entry: 1082f2d7c; end: 1082f2e47;  */

void FUN_1082f2d7c(void)

{
  return;
}



/* Entry: 1082f2e48; end: 1082f2f1f;  */

void FUN_1082f2e48(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)(param_3 + 0x24);
  uStack_70 = *(undefined8 *)(param_3 + 0x1c);
  if (*(char *)(param_3 + 0x18) == '\x01') {
    lVar1 = 0xc0;
    __Znwm();
    func_0x0001082f3a28();
  }
  else {
    lVar1 = 0xe0;
    __Znwm();
    FUN_1082a3af0(lVar1 + 0xc0,param_3);
    func_0x0001082f3a28(lVar1,lVar1 + 0xc0,&uStack_70);
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 1082f2f20; end: 1082f3333;  */

undefined8 *
FUN_1082f2f20(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             byte param_5,uint param_6,long param_7,long param_8,uint *param_9)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float *pfVar13;
  uint *puVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  undefined8 *puVar18;
  long extraout_x8;
  float fVar19;
  undefined8 *extraout_x9;
  undefined8 extraout_x9_00;
  float *extraout_x10;
  undefined8 extraout_x11;
  uint uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined8 extraout_var;
  undefined1 auVar23 [16];
  undefined8 extraout_var_00;
  undefined1 auVar24 [16];
  undefined8 extraout_var_01;
  undefined1 auVar25 [16];
  undefined8 extraout_var_02;
  undefined1 auVar26 [16];
  undefined8 extraout_var_03;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  short sVar30;
  short sVar31;
  short sVar32;
  undefined2 uVar33;
  undefined2 uVar34;
  short sVar35;
  undefined2 uVar36;
  undefined2 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [12];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  float fStack_90;
  float fStack_8c;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  undefined1 auVar27 [16];
  undefined8 extraout_var_04;
  undefined8 extraout_var_05;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam000000011372a938 & 1) == 0) {
    iVar17 = 0x1372a938;
    ___cxa_guard_acquire();
    if (iVar17 != 0) {
      FUN_1082e6880();
      iRam000000011372a930 = iVar17;
      ___cxa_guard_release(0x11372a938);
    }
  }
  iVar17 = iRam000000011372a930;
  param_1[2] = 0;
  param_1[1] = 0;
  *(short *)(param_1 + 3) = (short)iVar17;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  param_1[10] = param_1 + 6;
  *param_1 = &PTR_FUN_110a39e40;
  param_1[0xc] = param_2;
  param_1[0xb] = 0x200000000;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(byte *)((long)param_1 + 0x69) = *(byte *)((long)param_1 + 0x69) & 0xf0 | param_5 & 3;
  FUN_10810c9b4(param_1 + 0xe);
  uVar8 = *param_3;
  param_1[0x14] = param_3[1];
  param_1[0x13] = uVar8;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  uVar8 = *param_4;
  uVar10 = param_4[1];
  uVar11 = param_4[2];
  uVar12 = param_4[3];
  param_1[0x12] = param_4[4];
  param_1[0xf] = uVar10;
  param_1[0xe] = uVar8;
  param_1[0x11] = uVar12;
  param_1[0x10] = uVar11;
  FUN_1082f37f4(param_1 + 10,1);
  puVar18 = (undefined8 *)(param_1[10] + (long)*(int *)(param_1 + 0xb) * 0x20);
  *(int *)(param_1 + 0xb) = *(int *)(param_1 + 0xb) + 1;
  puVar21 = puVar18 + 2;
  *puVar21 = 0;
  puVar18[3] = 0x100000000;
  uVar8 = *param_3;
  puVar18[1] = param_3[1];
  *puVar18 = uVar8;
  bVar15 = param_9 != (uint *)0x0;
  *(bool *)((long)param_1 + 0xac) = bVar15;
  lVar2 = 0x10;
  if (bVar15) {
    lVar2 = 0x14;
  }
  lVar3 = 8;
  if (bVar15) {
    lVar3 = 0xc;
  }
  uVar20 = (int)lVar2 * 4;
  uVar16 = 0;
  if ((int)lVar2 != 0) {
    uVar16 = 0x7fffffff / uVar20;
  }
  if ((int)param_6 <= (int)uVar16) {
    *(uint *)(param_1 + 0x15) = param_6;
    iVar17 = uVar20 * param_6;
    *(undefined4 *)(puVar18 + 3) = 0;
    FUN_1082f3898(0x3ff0000000000000,puVar21,iVar17);
    *(int *)(puVar18 + 3) = iVar17;
    puVar21 = (undefined8 *)puVar18[2];
    uStack_a8 = 0xff7fffffff7fffff;
    uStack_b0 = 0x7f7fffff7f7fffff;
    uStack_98 = 0xff7fffffff7fffff;
    uStack_a0 = 0x7f7fffff7f7fffff;
    func_0x00010834362c();
    uVar20 = (uint)((ulong)puVar18 >> 0x18) & 0xff;
    pfVar13 = (float *)(param_8 + 8);
    puVar14 = param_9;
    for (uVar22 = (ulong)(param_6 & ((int)param_6 >> 0x1f ^ 0xffffffffU)); uVar22 != 0;
        uVar22 = uVar22 - 1) {
      func_0x000108386098(*pfVar13 - pfVar13[-2],pfVar13[1] - pfVar13[-1],SUB42(pfVar13[-2],0),
                          pfVar13[-1],param_7,&fStack_90);
      if (param_9 != (uint *)0x0) {
        uVar16 = *puVar14;
        uVar4 = (uVar16 >> 0x18) * uVar20 + 0x80;
        if (uVar20 != 0xff) {
          uVar16 = uVar16 & 0xffffff | (uVar4 + (uVar4 >> 8) >> 8) << 0x18;
        }
        func_0x0001083434e8();
        *(uint *)(puVar21 + 1) = uVar16;
        *(uint *)((long)puVar21 + 0x1c) = uVar16;
        *(uint *)(puVar21 + 6) = uVar16;
        *(uint *)((long)puVar21 + 0x44) = uVar16;
      }
      *puVar21 = CONCAT44(fStack_8c,fStack_90);
      *(undefined8 *)((long)puVar21 + lVar3) = *(undefined8 *)(pfVar13 + -2);
      fVar39 = (float)uStack_a8;
      fVar40 = (float)((ulong)uStack_a8 >> 0x20);
      fVar19 = (float)uStack_b0;
      fVar38 = (float)((ulong)uStack_b0 >> 0x20);
      sVar30 = -(ushort)(fVar19 < fStack_90);
      sVar31 = -(ushort)(fVar38 < fStack_8c);
      sVar32 = -(ushort)(fVar39 < fStack_90);
      sVar35 = -(ushort)(fVar40 < fStack_8c);
      uVar33 = 0;
      uVar34 = 0;
      uVar36 = 0;
      uVar37 = 0;
      auVar42 = func_0x0001082f3a18((long)puVar21 + lVar2 * 3);
      auVar26._0_8_ = auVar42._4_8_;
      auVar26._8_8_ = extraout_var_02;
      auVar9._4_4_ = fVar38;
      auVar9._0_4_ = fVar19;
      auVar9._8_4_ = fVar39;
      auVar9._12_4_ = fVar40;
      auVar41._2_2_ = sVar31;
      auVar41._0_2_ = sVar30;
      auVar41._4_2_ = sVar32;
      auVar41._6_2_ = sVar35;
      auVar41._8_2_ = uVar33;
      auVar41._10_2_ = uVar34;
      auVar41._12_2_ = uVar36;
      auVar41._14_2_ = uVar37;
      auVar26 = auVar26 ^ (auVar26 ^ auVar9) & auVar41;
      *extraout_x9 = extraout_x11;
      fVar38 = pfVar13[1];
      fVar19 = (float)((ulong)extraout_x11 >> 0x20);
      *extraout_x10 = pfVar13[-2];
      extraout_x10[1] = fVar38;
      sVar30 = -(ushort)(auVar26._0_4_ < auVar42._0_4_);
      sVar31 = -(ushort)(auVar26._4_4_ < fVar19);
      sVar32 = -(ushort)(auVar26._8_4_ < auVar42._0_4_);
      sVar35 = -(ushort)(auVar26._12_4_ < fVar19);
      uVar33 = 0;
      uVar34 = 0;
      uVar36 = 0;
      uVar37 = 0;
      auVar41 = func_0x0001082f3a18();
      auVar27._0_8_ = auVar41._8_8_;
      auVar23._0_8_ = auVar41._0_8_;
      auVar27._8_8_ = extraout_var_03;
      auVar23._8_8_ = extraout_var;
      *(undefined8 *)((long)puVar21 + lVar2 * 2) = uStack_80;
      uVar8 = NEON_rev64(*(undefined8 *)(pfVar13 + -1),4);
      *(undefined8 *)((long)puVar21 + lVar3 + lVar2 * 2) = uVar8;
      fVar38 = (float)uStack_78;
      fVar19 = (float)((ulong)uStack_80 >> 0x20);
      auVar5._2_2_ = sVar31;
      auVar5._0_2_ = sVar30;
      auVar5._4_2_ = sVar32;
      auVar5._6_2_ = sVar35;
      auVar5._8_2_ = uVar33;
      auVar5._10_2_ = uVar34;
      auVar5._12_2_ = uVar36;
      auVar5._14_2_ = uVar37;
      auVar23 = auVar23 ^ (auVar23 ^ auVar27) & auVar5;
      sVar30 = -(ushort)(auVar23._0_4_ < (float)uStack_80);
      sVar31 = -(ushort)(auVar23._4_4_ < fVar19);
      sVar32 = -(ushort)(auVar23._8_4_ < (float)uStack_80);
      sVar35 = -(ushort)(auVar23._12_4_ < fVar19);
      uVar33 = 0;
      uVar34 = 0;
      uVar36 = 0;
      uVar37 = 0;
      auVar41 = func_0x0001082f3a18();
      auVar28._0_8_ = auVar41._8_8_;
      auVar24._0_8_ = auVar41._0_8_;
      auVar28._8_8_ = extraout_var_04;
      auVar24._8_8_ = extraout_var_00;
      auVar6._2_2_ = sVar31;
      auVar6._0_2_ = sVar30;
      auVar6._4_2_ = sVar32;
      auVar6._6_2_ = sVar35;
      auVar6._8_2_ = uVar33;
      auVar6._10_2_ = uVar34;
      auVar6._12_2_ = uVar36;
      auVar6._14_2_ = uVar37;
      auVar24 = auVar24 ^ (auVar24 ^ auVar28) & ~auVar6;
      *(undefined8 *)((long)puVar21 + lVar2 * 3) = extraout_x9_00;
      *(undefined8 *)((long)puVar21 + lVar3 + lVar2 * 3) = *(undefined8 *)pfVar13;
      fVar19 = (float)((ulong)extraout_x9_00 >> 0x20);
      sVar30 = -(ushort)(auVar24._0_4_ < fVar38);
      sVar31 = -(ushort)(auVar24._4_4_ < fVar19);
      sVar32 = -(ushort)(auVar24._8_4_ < fVar38);
      sVar35 = -(ushort)(auVar24._12_4_ < fVar19);
      uVar33 = 0;
      uVar34 = 0;
      uVar36 = 0;
      uVar37 = 0;
      auVar41 = func_0x0001082f3a18();
      auVar29._0_8_ = auVar41._8_8_;
      auVar25._0_8_ = auVar41._0_8_;
      auVar29._8_8_ = extraout_var_05;
      auVar25._8_8_ = extraout_var_01;
      puVar21 = (undefined8 *)(extraout_x8 + lVar2);
      auVar7._2_2_ = sVar31;
      auVar7._0_2_ = sVar30;
      auVar7._4_2_ = sVar32;
      auVar7._6_2_ = sVar35;
      auVar7._8_2_ = uVar33;
      auVar7._10_2_ = uVar34;
      auVar7._12_2_ = uVar36;
      auVar7._14_2_ = uVar37;
      auVar25 = auVar25 ^ (auVar25 ^ auVar29) & ~auVar7;
      uStack_a8 = auVar25._8_8_;
      uStack_b0 = auVar25._0_8_;
      param_7 = param_7 + 0x10;
      puVar14 = puVar14 + 1;
      pfVar13 = pfVar13 + 4;
      uStack_a0 = uStack_b0;
      uStack_98 = uStack_a8;
    }
    FUN_108364f90(param_4,param_1 + 4,&uStack_a0,1);
    *(undefined2 *)((long)param_1 + 0x1a) = 0;
    puVar21 = param_4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    ___cxa_guard_abort(0x11372a938);
    __Unwind_Resume();
    if (*(int *)(puVar21 + 5) != 0) {
      uVar22 = puVar21[4];
      uVar1 = uVar22 + (long)*(int *)(puVar21 + 5) * 0x20;
      do {
        FUN_1082f398c(uVar22 + 0x10);
        uVar22 = uVar22 + 0x20;
      } while (uVar22 < uVar1);
    }
    if ((*(byte *)((long)puVar21 + 0x2c) & 1) != 0) {
      _free(puVar21[4]);
    }
    return puVar21;
  }
  return param_1;
}



/* Entry: 1082f3334; end: 1082f338f;  */

long FUN_1082f3334(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    uVar1 = uVar2 + (long)*(int *)(param_1 + 0x28) * 0x20;
    do {
      FUN_1082f398c(uVar2 + 0x10);
      uVar2 = uVar2 + 0x20;
    } while (uVar2 < uVar1);
  }
  if ((*(byte *)(param_1 + 0x2c) & 1) != 0) {
    _free(*(undefined8 *)(param_1 + 0x20));
  }
  return param_1;
}



/* Entry: 1082f3390; end: 1082f33bf;  */

undefined8 * FUN_1082f3390(undefined8 *param_1)

{
  FUN_1082fc320(param_1 + 0xc);
  FUN_1082f3334(param_1 + 6);
  *param_1 = &PTR_FUN_110a39358;
  func_0x0001082e723c(param_1 + 1);
  return param_1;
}



/* Entry: 1082f33c0; end: 1082f33d3;  */

void FUN_1082f33c0(void)

{
  FUN_1082f3390();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082f33d4; end: 1082f33f7;  */

undefined * FUN_1082f33d4(void)

{
  return &UNK_10f4889fc;
}



/* Entry: 1082f33f8; end: 1082f353f;  */

undefined8 FUN_1082f33f8(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  char cStack_41;
  
  lVar8 = param_1 + 0x60;
  FUN_1082fc374(lVar8,param_2 + 0x60,param_4,param_1 + 0x20,param_2 + 0x20,0);
  if ((int)lVar8 != 0) {
    lVar8 = param_1 + 0x70;
    FUN_10829dddc(lVar8,param_2 + 0x70);
    if (((int)lVar8 != 0) && (*(byte *)(param_1 + 0xac) == *(byte *)(param_2 + 0xac))) {
      if ((*(byte *)(param_1 + 0xac) & 1) == 0) {
        uVar7 = param_1 + 0x98;
        FUN_10828e84c(uVar7,param_2 + 0x98);
        if ((uVar7 & 1) != 0) {
          return 2;
        }
      }
      cStack_41 = '\x01';
      pcVar6 = &cStack_41;
      FUN_1082e91c4(pcVar6,*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_2 + 0xa8));
      if (cStack_41 == '\x01') {
        uVar3 = *(uint *)(param_2 + 0x58);
        lVar8 = *(long *)(param_2 + 0x50);
        FUN_1082f37f4(param_1 + 0x50,uVar3);
        iVar5 = *(int *)(param_1 + 0x58);
        *(uint *)(param_1 + 0x58) = iVar5 + uVar3;
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0x50) + (long)iVar5 * 0x20 + 0x10);
        puVar2 = (undefined4 *)(lVar8 + 0x18);
        for (uVar7 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)); uVar7 != 0;
            uVar7 = uVar7 - 1) {
          uVar9 = *(undefined8 *)(puVar2 + -6);
          puVar1[-1] = *(undefined8 *)(puVar2 + -4);
          puVar1[-2] = uVar9;
          lVar8 = *(long *)(puVar2 + -2);
          uVar4 = *puVar2;
          *puVar1 = 0;
          *(undefined4 *)(puVar1 + 1) = 0;
          func_0x0001082f39b8(puVar1,uVar4);
          if ((lVar8 != 0) && (*(int *)(puVar1 + 1) != 0)) {
            _memcpy(*puVar1,lVar8,(long)*(int *)(puVar1 + 1));
          }
          puVar1 = puVar1 + 4;
          puVar2 = puVar2 + 8;
        }
        *(int *)(param_1 + 0xa8) = (int)pcVar6;
        return 0;
      }
    }
  }
  return 2;
}



/* Entry: 1082f3540; end: 1082f3627;  */

void FUN_1082f3540(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((*(long *)(param_1 + 0xb8) != 0) && (*(long *)(param_1 + 0xb0) != 0)) {
    FUN_1082a1068(param_2);
    FUN_1082a10b4(param_2,*(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x98),0,
                  *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x88));
    puVar1 = *(undefined8 **)(param_1 + 0xb0);
    plVar2 = (long *)*puVar1;
    if (plVar2 == (long *)0x0) {
      uStack_40 = 0;
      uStack_38 = 0;
      plVar2 = (long *)puVar1[4];
      if (plVar2 != (long *)0x0) {
        func_0x0001082a2158(*(undefined8 *)(*plVar2 + 0x10));
      }
      plStack_48 = plVar2;
      FUN_1082a16e0(param_2,&uStack_38,&uStack_40,&plStack_48,0);
      func_0x0001082a20e4();
      FUN_1082647e4(&uStack_40);
      FUN_1082647e4(&uStack_38);
      func_0x0001082a1754(param_2,*(undefined4 *)(puVar1 + 5),*(undefined4 *)((long)puVar1 + 0x2c));
    }
    else {
      func_0x0001082a2158(*(undefined8 *)(*plVar2 + 0x10));
      uStack_58 = 0;
      plStack_60 = (long *)puVar1[4];
      plStack_50 = plVar2;
      if (plStack_60 != (long *)0x0) {
        func_0x0001082a2158(*(undefined8 *)(*plStack_60 + 0x10));
      }
      FUN_1082a16e0(param_2,&plStack_50,&uStack_58,&plStack_60,*(undefined1 *)((long)puVar1 + 0x1c))
      ;
      FUN_1082647e4(&plStack_60);
      func_0x0001082a2114();
      func_0x0001082a2124();
      if (*(int *)((long)puVar1 + 0xc) == 0) {
        func_0x0001082a175c(param_2,*(undefined4 *)(puVar1 + 1),*(undefined4 *)((long)puVar1 + 0x14)
                            ,*(undefined2 *)(puVar1 + 3),*(undefined2 *)((long)puVar1 + 0x1a),
                            *(undefined4 *)((long)puVar1 + 0x2c));
      }
      else {
        func_0x0001082a1764(param_2,*(undefined4 *)(puVar1 + 1),*(int *)((long)puVar1 + 0xc),
                            *(undefined4 *)(puVar1 + 2),*(undefined4 *)(puVar1 + 5),
                            *(undefined4 *)((long)puVar1 + 0x2c));
      }
    }
    return;
  }
  return;
}



/* Entry: 1082f3628; end: 1082f3637;  */

undefined8 FUN_1082f3628(long param_1)

{
  byte bVar1;
  code *pcVar2;
  
  bVar1 = *(byte *)(param_1 + 0x69) & 3;
  if (bVar1 < 2) {
    return 0;
  }
  if (bVar1 == 2) {
    return 1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1082fc374);
  (*pcVar2)();
}



/* Entry: 1082f3638; end: 1082f3717;  */

void FUN_1082f3638(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 auStack_90 [2];
  undefined8 uStack_88;
  undefined4 uStack_7c;
  undefined1 uStack_78;
  uint uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)(param_1 + 0xa0);
  uStack_70 = *(undefined8 *)(param_1 + 0x98);
  uStack_74 = (uint)(*(char *)(param_1 + 0xac) == '\x01');
  uStack_7c = 0;
  uStack_78 = 0xff;
  auStack_90[0] = 2;
  uStack_88 = 0;
  uVar1 = param_3;
  func_0x00010828dd54(param_3,&uStack_74,&uStack_7c,auStack_90,param_1 + 0x70);
  lVar2 = param_1 + 0x60;
  FUN_1082fc8bc(lVar2,param_2,param_3,param_4,param_5,param_6,param_7,uVar1,0,param_8,param_9);
  *(long *)(param_1 + 0xb8) = lVar2;
  return;
}



/* Entry: 1082f3718; end: 1082f37f3;  */

void FUN_1082f3718(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lStack_58;
  undefined8 uStack_50;
  
  lVar4 = *(long *)(param_1 + 0xb8);
  if (lVar4 == 0) {
    FUN_1082fbcfc(param_1,param_2);
    lVar4 = *(long *)(param_1 + 0xb8);
  }
  uVar2 = *(uint *)(param_1 + 0x58);
  FUN_1082fc0f8(&lStack_58,param_2,*(undefined8 *)(*(long *)(lVar4 + 0x98) + 0x20),
                *(undefined4 *)(param_1 + 0xa8));
  if (lStack_58 == 0) {
    FUN_10841076c(&UNK_10f488006);
  }
  else {
    lVar4 = 0x10;
    lVar5 = lStack_58;
    for (uVar7 = 0; (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) != uVar7; uVar7 = uVar7 + 1) {
      if ((long)*(int *)(param_1 + 0x58) <= (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1082f37f4);
        (*pcVar3)();
      }
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x50) + lVar4);
      lVar6 = (long)*(int *)(puVar1 + 1);
      _memcpy(lVar5,*puVar1,lVar6);
      lVar5 = lVar5 + lVar6;
      lVar4 = lVar4 + 0x20;
    }
    *(undefined8 *)(param_1 + 0xb0) = uStack_50;
  }
  return;
}



/* Entry: 1082f37f4; end: 1082f3897;  */

void FUN_1082f37f4(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(uint *)(param_1 + 8);
  iVar3 = (int)param_2;
  if ((int)((*(uint *)(param_1 + 0xc) >> 1) - uVar1) < iVar3) {
    if ((int)(uVar1 ^ 0x7fffffff) < iVar3) {
      func_0x00010bdb1a68();
      if ((int)((*(uint *)(param_1 + 0xc) >> 1) - *(int *)(param_1 + 8)) < (int)param_2) {
        lVar2 = param_1;
        FUN_1082f3938();
        if (*(int *)(param_1 + 8) != 0) {
          func_0x0001082f3a48(param_1,lVar2);
        }
        if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
          func_0x0001082f3a40();
        }
        if (0x7ffffffe < param_2) {
          param_2 = 0x7fffffff;
        }
        func_0x0001082f3a54(param_2);
        return;
      }
      return;
    }
    uStack_38 = 0x7fffffff;
    uStack_40 = 0x20;
    uVar4 = (ulong)(uVar1 + iVar3);
    FUN_10840fe24(0x3ff8000000000000,&uStack_40);
    if (*(int *)(param_1 + 8) != 0) {
      func_0x0001082f3a48();
    }
    if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
      func_0x0001082f3a40();
    }
    uVar4 = uVar4 >> 5;
    if (0x7ffffffe < uVar4) {
      uVar4 = 0x7fffffff;
    }
    func_0x0001082f3a54(uVar4);
  }
  return;
}



/* Entry: 1082f3898; end: 1082f38e3;  */

void FUN_1082f3898(long param_1,ulong param_2)

{
  long lVar1;
  
  if ((int)((*(uint *)(param_1 + 0xc) >> 1) - *(int *)(param_1 + 8)) < (int)param_2) {
    lVar1 = param_1;
    FUN_1082f3938();
    if (*(int *)(param_1 + 8) != 0) {
      func_0x0001082f3a48(param_1,lVar1);
    }
    if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
      func_0x0001082f3a40();
    }
    if (0x7ffffffe < param_2) {
      param_2 = 0x7fffffff;
    }
    func_0x0001082f3a54(param_2);
    return;
  }
  return;
}



/* Entry: 1082f38e4; end: 1082f3937;  */

void FUN_1082f38e4(long param_1,undefined8 param_2,ulong param_3)

{
  if (*(int *)(param_1 + 8) != 0) {
    func_0x0001082f3a48();
  }
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x0001082f3a40();
  }
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  func_0x0001082f3a54(param_3);
  return;
}



/* Entry: 1082f3938; end: 1082f398b;  */

void FUN_1082f3938(ulong param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if ((int)(*(uint *)(param_1 + 8) ^ 0x7fffffff) < param_2) {
    puVar1 = &stack0xfffffffffffffff0;
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x1082f395c;
    func_0x00010bdb1a68();
  }
  else {
    param_1 = (ulong)(*(uint *)(param_1 + 8) + param_2);
    puVar1 = (undefined1 *)register0x00000008;
  }
  *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
  *(undefined8 *)(puVar1 + -8) = unaff_x30;
  *(undefined8 *)(puVar1 + -0x18) = 0x7fffffff;
  *(undefined8 *)(puVar1 + -0x20) = 1;
  FUN_10840fe24(puVar1 + -0x20,param_1);
  return;
}



/* Entry: 1082f398c; end: 1082f39ff;  */

long FUN_1082f398c(long param_1)

{
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x0001082f3a40();
  }
  return param_1;
}



/* Entry: 1082f3a00; end: 1082f3a67;  */

uint FUN_1082f3a00(long *param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5,
                  undefined4 *param_6)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uStack_30;
  undefined4 uStack_28;
  float fStack_24;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    uVar1 = 0x22;
  }
  else {
    if ((int)param_5 == 0) {
      if (param_3 == 0) {
        param_5 = 0;
      }
      else {
        param_5 = (ulong)(*(long *)(param_3 + 0x40) != 0);
      }
    }
    FUN_1082a3cdc(lVar2,param_6,param_5,param_3,&UNK_10df14cb4,param_2,param_4,&uStack_30);
    uVar1 = (uint)lVar2;
    if ((uVar1 & 0x300) == 0x100) {
      uVar3 = 3;
      if (fStack_24 != 1.0) {
        uVar3 = 1;
      }
      *param_6 = uVar3;
      *(ulong *)(param_6 + 3) = CONCAT44(fStack_24,uStack_28);
      *(undefined8 *)(param_6 + 1) = uStack_30;
    }
  }
  *(byte *)((long)param_1 + 9) = (byte)((uVar1 & 3) << 2) | *(byte *)((long)param_1 + 9) & 0xf3;
  return uVar1 & 0xffff;
}



/* Entry: 1082f3a68; end: 1082f3b67;  */

uint FUN_1082f3a68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar2 = *(long *)(param_1 + 0x30);
  uStack_28 = *(undefined8 *)(lVar2 + 0x30);
  uStack_30 = *(undefined8 *)(lVar2 + 0x28);
  uStack_34 = 3;
  if (*(float *)(lVar2 + 0x34) != 1.0) {
    uStack_34 = 1;
  }
  lVar1 = param_1 + 0x78;
  FUN_1082a3cdc(lVar1,&uStack_34,1,param_3,&UNK_10df14cb4,param_2,param_4,lVar2 + 0x28);
  *(byte *)(param_1 + 0x50) = (byte)lVar1 & 1;
  return (uint)lVar1 & 0xffff;
}



/* Entry: 1082f3b68; end: 1082f3ef7;  */

void FUN_1082f3b68(long param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  long *plVar2;
  int extraout_w8;
  int iVar3;
  int extraout_w8_00;
  int extraout_w8_01;
  long lVar4;
  long lVar5;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined1 auStack_a0 [8];
  long lStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined2 uStack_84;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined2 uStack_70;
  undefined1 uStack_65;
  undefined4 uStack_64;
  
  auStack_a0[0] = 0;
  uStack_88 = 0;
  uStack_84 = 0x3210;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0x3210;
  uStack_90 = 0;
  lStack_98 = param_2;
  FUN_1082a35a0(&uStack_90,param_7);
  uStack_70 = *(undefined2 *)(param_4 + 0xc);
  FUN_1082f3ef8(param_3,auStack_a0,param_1 + 0x78,param_6);
  lVar8 = *(long *)(param_2 + 0x10);
  plVar2 = param_3;
  func_0x0001082f48d8(param_3,0x181);
  lVar5 = param_3[1];
  param_3[1] = (long)(plVar2 + 0x2f);
  plVar2[0x2f] = (long)FUN_1082f44dc;
  lVar4 = param_3[1];
  param_3[1] = lVar4 + 8;
  *(char *)(lVar4 + 8) = (char)plVar2 - (char)(int)lVar5;
  *param_3 = param_3[1] + 1;
  param_3[1] = param_3[1] + 1;
  uVar1 = *(undefined1 *)(param_1 + 0x50);
  plVar7 = plVar2 + 2;
  plVar2[3] = 0;
  *plVar7 = 0;
  *(undefined4 *)(plVar2 + 1) = 0x12;
  plVar2[5] = 0;
  plVar2[4] = 0;
  plVar2[7] = 0;
  plVar2[6] = 0;
  *(undefined4 *)(plVar2 + 8) = 0;
  *plVar2 = (long)&PTR_SUB_110a39f80;
  *(undefined1 *)((long)plVar2 + 0x44) = uVar1;
  lVar5 = *(long *)(param_1 + 0x40);
  plVar2[9] = param_1 + 0x40;
  FUN_10829c740(plVar2 + 10,0,0x100000000,lVar5 + 0x20,param_1 + 0x48);
  plVar2[0x2d] = (long)(plVar2 + 0x1b);
  plVar2[0x2e] = 0xc00000000;
  uVar6 = SUB84(plVar7,0);
  if ((*(byte *)(lVar8 + 0x5e) & 1) == 0) {
    FUN_10829e324(plVar7,&PTR_DAT_110a39fb0,1);
    iVar3 = (int)plVar2[0x2e];
    if ((int)(*(uint *)((long)plVar2 + 0x174) >> 1) <= iVar3) {
      func_0x0001082f4860();
      func_0x0001082f4874();
      func_0x0001082f4848();
      *(undefined4 *)(extraout_x9_00 + 0x10) = uVar6;
      func_0x0001082f488c();
      iVar3 = (int)plVar2[0x2e];
      goto LAB_1082f3d18;
    }
  }
  else {
    iVar3 = 0;
  }
  func_0x0001082f48c8(iVar3);
  func_0x0001082f4848();
  *(undefined4 *)(extraout_x9 + 0x10) = 1;
  iVar3 = extraout_w8;
LAB_1082f3d18:
  iVar3 = iVar3 + 1;
  *(int *)(plVar2 + 0x2e) = iVar3;
  if (*(char *)((long)plVar2 + 0x44) == '\x01') {
    if (iVar3 < (int)(*(uint *)((long)plVar2 + 0x174) >> 1)) {
      func_0x0001082f48c8();
      func_0x0001082f4848();
      *(undefined4 *)(extraout_x9_01 + 0x10) = 1;
      iVar3 = extraout_w8_00;
    }
    else {
      func_0x0001082f4860();
      func_0x0001082f4874();
      func_0x0001082f4848();
      *(undefined4 *)(extraout_x9_02 + 0x10) = uVar6;
      func_0x0001082f488c();
      iVar3 = (int)plVar2[0x2e];
    }
    *(int *)(plVar2 + 0x2e) = iVar3 + 1;
    uStack_64 = 1;
    uStack_65 = 0xe;
    FUN_1082eb028(plVar2 + 0x2d,"translate",&uStack_64,&uStack_65);
    iVar3 = (int)plVar2[0x2e];
  }
  if (iVar3 < (int)(*(uint *)((long)plVar2 + 0x174) >> 1)) {
    func_0x0001082f48c8();
    func_0x0001082f4898();
    *(undefined4 *)(extraout_x9_03 + 0x10) = 1;
    iVar3 = extraout_w8_01;
  }
  else {
    func_0x0001082f4860();
    func_0x0001082f4874();
    func_0x0001082f4898();
    *(undefined4 *)(extraout_x9_04 + 0x10) = uVar6;
    func_0x0001082f488c();
    iVar3 = (int)plVar2[0x2e];
  }
  *(int *)(plVar2 + 0x2e) = iVar3 + 1;
  FUN_1082eafa8(plVar2[9],plVar2 + 0x2d);
  FUN_10829e324(plVar2 + 5,plVar2[0x2d],(int)plVar2[0x2e]);
  *(undefined4 *)(plVar2 + 8) = 1;
  plVar2 = param_3;
  func_0x0001082f48d8(param_3,0xb9);
  lVar5 = param_3[1];
  param_3[1] = (long)(plVar2 + 0x16);
  plVar2[0x16] = (long)FUN_1082f4810;
  lVar4 = param_3[1];
  param_3[1] = lVar4 + 8;
  *(char *)(lVar4 + 8) = (char)plVar2 - (char)(int)lVar5;
  *param_3 = param_3[1] + 1;
  param_3[1] = param_3[1] + 1;
  FUN_1082a47e4();
  *(long **)(param_1 + 0x58) = plVar2;
  func_0x0001082f48e8();
  return;
}



/* Entry: 1082f3ef8; end: 1082f3f1f;  */

void FUN_1082f3ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x0001082f4458(param_1,&uStack_28);
  return;
}



/* Entry: 1082f3f20; end: 1082f3fdf;  */

void FUN_1082f3f20(long param_1,long *param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined4 param_7)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)*param_3;
  (**(code **)(*plVar2 + 0x28))();
  lVar1 = plVar2[1];
  uVar3 = *(undefined8 *)(param_2[2] + 0xb8);
  plVar2 = param_2 + 5;
  func_0x0001082a6e68(plVar2);
  FUN_1082f3b68(param_1,uVar3,plVar2,param_3,'\x01' < (char)lVar1,param_4,param_5,param_6,param_7);
                    /* WARNING: Could not recover jumptable at 0x0001082f3fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x48))(param_2,*(undefined8 *)(param_1 + 0x58));
  return;
}



/* Entry: 1082f3fe0; end: 1082f4237;  */

void FUN_1082f3fe0(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,long param_6)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long *aplStack_90 [9];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_5 + 0x58);
  if (lVar4 == 0) {
    uVar5 = *(undefined8 *)(*(long *)(param_6 + 0x160) + 0x10);
    uVar6 = *(undefined8 *)(*(long *)(param_6 + 0x150) + 8);
    bVar1 = *(byte *)(*(long *)(param_6 + 0x150) + 0x18);
    func_0x0001082a167c(aplStack_90,param_6);
    lVar4 = *(long *)(param_6 + 0x150);
    FUN_1082f3b68(param_5,uVar5,param_6 + 0x10,uVar6,bVar1 & 1,aplStack_90,lVar4 + 0x28,
                  *(undefined4 *)(lVar4 + 0x48),*(undefined4 *)(lVar4 + 0x4c));
    FUN_1082c3a7c(aplStack_90);
    lVar4 = *(long *)(param_5 + 0x58);
  }
  plVar3 = (long *)(param_6 + 8);
  (**(code **)(*plVar3 + 0x18))
            (plVar3,*(undefined8 *)(*(long *)(lVar4 + 0x98) + 0x38),*(undefined4 *)(param_5 + 0x54),
             param_5 + 0x60,param_5 + 0x68);
  aplStack_90[0] = plVar3;
  if (plVar3 != (long *)0x0) {
    plVar3 = (long *)(param_5 + 0x30);
    while( true ) {
      uVar7 = (undefined4)param_1;
      lVar4 = *plVar3;
      if (lVar4 == 0) break;
      FUN_10817500c(lVar4);
      *(undefined4 *)aplStack_90[0] = uVar7;
      *(undefined4 *)((long)aplStack_90[0] + 4) = param_2;
      *(undefined4 *)(aplStack_90[0] + 1) = param_3;
      *(undefined4 *)((long)aplStack_90[0] + 0xc) = param_4;
      plVar3 = aplStack_90[0] + 2;
      if (*(char *)(param_5 + 0x50) == '\x01') {
        lVar9 = *(long *)(lVar4 + 0x18);
        lVar8 = *(long *)(lVar4 + 0x10);
        aplStack_90[0][4] = *(long *)(lVar4 + 0x20);
        aplStack_90[0][3] = lVar9;
        *plVar3 = lVar8;
        plVar3 = aplStack_90[0] + 5;
      }
      param_1 = *(long *)(lVar4 + 0x28);
      aplStack_90[0] = plVar3 + 2;
      plVar3[1] = *(long *)(lVar4 + 0x30);
      *plVar3 = param_1;
      FUN_1082eb108(param_5 + 0x40,aplStack_90,lVar4 + 0x38);
      plVar3 = (long *)(lVar4 + 0x50);
    }
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_6 + 0x160) + 0x10) + 0x10) + 0x5e) & 1) != 0)
  goto LAB_1082f4194;
  if ((bRam000000011372a948 & 1) == 0) goto LAB_1082f41c8;
  while( true ) {
    aplStack_90[0] = (long *)0x11372a960;
    FUN_1082e9628(0x11372a940,FUN_1082f4238,aplStack_90);
    if ((bRam000000011372a958 & 1) == 0) {
      iVar2 = 0x1372a958;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        uRam000000011372a950 = 0x11372a960;
        ___cxa_guard_release(0x11372a958);
      }
    }
    FUN_1082aee00(aplStack_90,*(undefined8 *)(param_6 + 0x168),0,0x20,&UNK_10df17598,
                  uRam000000011372a950);
    plVar3 = aplStack_90[0];
    aplStack_90[0] = (long *)0x0;
    FUN_1082eea00(param_5 + 0x70,plVar3);
    FUN_10828f708(aplStack_90);
LAB_1082f4194:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) break;
    ___stack_chk_fail();
LAB_1082f41c8:
    iVar2 = 0x1372a948;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      ___cxa_guard_release(0x11372a948);
    }
  }
  return;
}



/* Entry: 1082f4238; end: 1082f4283;  */

void FUN_1082f4238(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [8];
  
  lVar1 = param_1;
  FUN_10827a1fc();
  func_0x000108320d60();
  FUN_10827a280(auStack_28,param_1,lVar1,0);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_10827a320(auStack_28);
  return;
}



/* Entry: 1082f4284; end: 1082f4387;  */

void FUN_1082f4284(long param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((*(int *)(*(long *)(*(long *)(param_1 + 0x58) + 0x98) + 0x1c) == 0) ||
     (*(long *)(param_1 + 0x70) != 0)) {
    FUN_1082a1068(param_2,*(long *)(param_1 + 0x58),param_1 + 0x20);
    FUN_1082f4388(param_2,*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x98),
                  *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x88))
    ;
    uStack_30 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    uStack_28 = 0;
    lVar4 = *(long *)(param_1 + 0x70);
    if (lVar4 != 0) {
      piVar1 = (int *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lStack_38 = 0;
    if (lVar4 != 0) {
      lStack_38 = lVar4 + 0xb0;
    }
    FUN_1082a16e0(param_2,&uStack_28,&uStack_30,&lStack_38,0);
    FUN_1082647e4(&lStack_38);
    FUN_1082647e4(&uStack_30);
    FUN_1082647e4(&uStack_28);
    FUN_1082f43ac(param_2,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x68),4,0);
  }
  return;
}



/* Entry: 1082f4388; end: 1082f43ab;  */

void FUN_1082f4388(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  FUN_1082a10b4(param_1,param_2,&uStack_18);
  return;
}



/* Entry: 1082f43ac; end: 1082f43b7;  */

void FUN_1082f43ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x178);
  plVar1 = plVar2;
  FUN_1082a23bc();
  if ((int)plVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001082a24f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



/* Entry: 1082f43b8; end: 1082f43cb;  */

void FUN_1082f43b8(void)

{
  FUN_1082f4418();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082f43cc; end: 1082f43d7;  */

undefined * FUN_1082f43cc(void)

{
  return &UNK_10f488a08;
}



/* Entry: 1082f43d8; end: 1082f440f;  */

void FUN_1082f43d8(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  long lVar3;
  long unaff_x20;
  long *plVar4;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  FUN_108298768(param_2,*(undefined8 *)(param_1 + 0x40),0);
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_108296038(*(long *)(param_1 + 0x78),param_2);
  }
  if (*(long *)(param_1 + 0x80) == 0) {
    return;
  }
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR_FUN_110a35a10;
  pppuStack_30 = &ppuStack_48;
  uStack_40 = param_2;
  FUN_1082960a8(*(long *)(param_1 + 0x80),&ppuStack_48);
  pppuVar1 = &ppuStack_48;
  FUN_10826e20c();
  func_0x000108298c3c(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pppuVar2 = &ppuStack_48;
    FUN_10826e20c();
    func_0x000108298a0c();
    func_0x000108298c90();
    if ((pppuVar2 != (undefined ***)0x0) && (*(int *)(unaff_x20 + 8) == 0x2d)) {
      func_0x0001082987ac(pppuVar1,unaff_x20);
    }
    plVar4 = *(long **)(unaff_x20 + 0x18);
    for (lVar3 = (long)*(int *)(unaff_x20 + 0x20) << 3; lVar3 != 0; lVar3 = lVar3 + -8) {
      if (*plVar4 != 0) {
        FUN_1082960a8(*plVar4,pppuVar1);
      }
      plVar4 = plVar4 + 1;
    }
    return;
  }
  return;
}



/* Entry: 1082f4410; end: 1082f4417;  */

undefined8 FUN_1082f4410(void)

{
  return 0;
}



/* Entry: 1082f4418; end: 1082f44bf;  */

undefined8 * FUN_1082f4418(undefined8 *param_1)

{
  FUN_1082a3b78(param_1 + 0xf);
  FUN_10828f708(param_1 + 0xe);
  FUN_1082647e4(param_1 + 0xc);
  FUN_1082764bc(param_1 + 8);
  *param_1 = &PTR_FUN_110a39358;
  func_0x0001082e723c(param_1 + 1);
  return param_1;
}



/* Entry: 1082f44c0; end: 1082f44db;  */

long FUN_1082f44c0(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined1 auStack_38 [8];
  
  uVar2 = *param_1;
  plVar3 = (long *)param_1[1];
  lVar6 = param_1[2];
  FUN_1082a3060(auStack_38,plVar3);
  FUN_1082a2fc4(param_2,uVar2,auStack_38,lVar6);
  FUN_1082a36c0(auStack_38);
  lVar8 = *plVar3;
  lVar5 = plVar3[1];
  uVar7 = (uint)(lVar8 != 0);
  *(uint *)(param_2 + 0x80) = uVar7;
  if (lVar5 != 0) {
    uVar7 = (lVar8 != 0) + 1;
  }
  if (*(long *)(lVar6 + 0x40) != 0) {
    uVar7 = uVar7 + 1;
  }
  FUN_1082a309c(param_2 + 0x50,uVar7);
  lVar8 = *plVar3;
  uVar7 = 0;
  if (lVar8 != 0) {
    *plVar3 = 0;
    if (*(int *)(param_2 + 0x78) < 1) goto LAB_1082a329c;
    lVar5 = **(long **)(param_2 + 0x50);
    **(long **)(param_2 + 0x50) = lVar8;
    if (lVar5 != 0) {
      func_0x0001082a3760();
    }
    uVar7 = 1;
  }
  lVar8 = plVar3[1];
  if (lVar8 != 0) {
    plVar3[1] = 0;
    if (*(int *)(param_2 + 0x78) <= (int)uVar7) goto LAB_1082a329c;
    uVar1 = uVar7 + 1;
    lVar5 = *(long *)(*(long *)(param_2 + 0x50) + (ulong)uVar7 * 8);
    *(long *)(*(long *)(param_2 + 0x50) + (ulong)uVar7 * 8) = lVar8;
    uVar7 = uVar1;
    if (lVar5 != 0) {
      func_0x0001082a3760();
    }
  }
  lVar8 = *(long *)(lVar6 + 0x40);
  if (lVar8 != 0) {
    *(undefined8 *)(lVar6 + 0x40) = 0;
    if (*(int *)(param_2 + 0x78) <= (int)uVar7) {
LAB_1082a329c:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1082a32a0);
      (*pcVar4)();
    }
    lVar5 = *(long *)(*(long *)(param_2 + 0x50) + (ulong)uVar7 * 8);
    *(long *)(*(long *)(param_2 + 0x50) + (ulong)uVar7 * 8) = lVar8;
    if (lVar5 != 0) {
      func_0x0001082a3760();
    }
  }
  return param_2;
}



/* Entry: 1082f44dc; end: 1082f4553;  */

undefined8 * FUN_1082f44dc(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + -0x181);
  (**(code **)*puVar1)(puVar1);
  return puVar1;
}



/* Entry: 1082f4554; end: 1082f4567;  */

void FUN_1082f4554(void)

{
  undefined1 *unaff_x19;
  
  func_0x0001082f4508();
  FUN_1082a397c();
  FUN_1082a37e8();
  FUN_108276af4();
  *unaff_x19 = 0;
  return;
}



/* Entry: 1082f4568; end: 1082f4573;  */

undefined * FUN_1082f4568(void)

{
  return &UNK_10f488a3a;
}



/* Entry: 1082f4574; end: 1082f462f;  */

void FUN_1082f4574(long param_1,undefined8 param_2,long *param_3)

{
  (**(code **)(*param_3 + 0x10))(param_3,1,*(undefined1 *)(param_1 + 0x44),&UNK_10f488a4e,0xb);
                    /* WARNING: Could not recover jumptable at 0x0001082f45d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x10))
            (param_3,2,*(undefined4 *)(*(long *)(param_1 + 0x48) + 0xc),&UNK_10f488194,10);
  return;
}



/* Entry: 1082f4630; end: 1082f4637;  */

long FUN_1082f4630(long param_1)

{
  return param_1 + 0x50;
}



/* Entry: 1082f4638; end: 1082f4663;  */

undefined8 * FUN_1082f4638(undefined8 *param_1)

{
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  return param_1;
}



/* Entry: 1082f4664; end: 1082f4667;  */

undefined8 * FUN_1082f4664(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a35308;
  FUN_10828e7ac(param_1 + 1);
  return param_1;
}



/* Entry: 1082f4668; end: 1082f467b;  */

void FUN_1082f4668(void)

{
  func_0x00010828e388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082f467c; end: 1082f468b;  */

void FUN_1082f467c(long param_1,long *param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = **(undefined8 **)(param_4 + 0x48);
  FUN_1082b1dfc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001082eb3ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x40))
            (1.0 / (float)(int)uVar1,1.0 / (float)(int)((ulong)uVar1 >> 0x20),param_2,
             *(undefined4 *)(param_1 + 0x30));
  return;
}



/* Entry: 1082f468c; end: 1082f480f;  */

void FUN_1082f468c(long param_1,undefined8 *param_2,undefined1 *param_3)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  
  lVar3 = param_2[5];
  FUN_1082dd9a4(param_2[2],lVar3);
  if (*(char *)(param_2[4] + 0x5e) == '\x01') {
    FUN_10828bae8(*param_2,&UNK_10f488a5a);
  }
  FUN_10828bae8(*param_2,&UNK_10f488a98);
  *param_3 = 0xe;
  func_0x0001083a3534(param_3 + 0x10,&UNK_10f488ad8);
  if (*(char *)(lVar3 + 0x44) == '\x01') {
    FUN_10828bae8(*param_2,&UNK_10f488ae1);
    param_3[0x28] = 0xe;
    func_0x0001083a3534(param_3 + 0x38,&UNK_10f488b52);
  }
  FUN_10828bae8((long)param_2[1] + *(long *)(*(long *)param_2[1] + -0x18),&UNK_10f488b5d);
  FUN_1082eb1b0(*(undefined8 *)(lVar3 + 0x48),param_2,param_3,param_1 + 0x30);
  FUN_10828bae8((long)param_2[1] + *(long *)(*(long *)param_2[1] + -0x18),&UNK_10f481e19);
  uVar2 = 3;
  if (*(char *)(lVar3 + 0x44) == '\0') {
    uVar2 = 1;
  }
  if ((int)uVar2 < *(int *)(lVar3 + 0x170)) {
    uVar4 = param_2[2];
    func_0x00010828e8b0(auStack_68,*(long *)(lVar3 + 0x168) + (ulong)uVar2 * 0x18);
    FUN_1082dd7c8(uVar4,auStack_68,param_2[6],1);
    func_0x00010827024c(auStack_68);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082f4800);
  (*pcVar1)();
}



/* Entry: 1082f4810; end: 1082f4847;  */

long FUN_1082f4810(long param_1)

{
  if (*(char *)(param_1 + -0x59) == '\x01') {
    func_0x0001082f48e0(*(undefined8 *)(param_1 + -0xa9));
  }
  *(undefined1 *)(param_1 + -0x59) = 0;
  return param_1 + -0xb9;
}



/* Entry: 1082f4848; end: 1082f48f3;  */

void FUN_1082f4848(void)

{
  undefined8 *in_x9;
  undefined8 in_x10;
  
  *in_x9 = in_x10;
  *(undefined4 *)(in_x9 + 1) = 3;
  *(undefined1 *)((long)in_x9 + 0xc) = 0x10;
  return;
}



/* Entry: 1082f48f4; end: 1082f49cf;  */

void FUN_1082f48f4(void)

{
  undefined1 in_ZR;
  undefined8 *in_x6;
  undefined8 *unaff_x19;
  undefined8 unaff_x23;
  undefined8 auStack_68 [3];
  
  func_0x0001082f8fcc();
  if ((bool)in_ZR) {
    unaff_x23 = 0x108;
    __Znwm();
    func_0x0001082f90d0();
    auStack_68[0] = *in_x6;
    *in_x6 = 0;
    func_0x0001082f9178();
    func_0x0001082f8ec8();
  }
  else {
    func_0x0001082f90c4();
    func_0x0001082f8ee0();
    func_0x0001082f90d0();
    auStack_68[0] = *in_x6;
    *in_x6 = 0;
    func_0x0001082f9178();
    func_0x0001082f8ec8();
  }
  *unaff_x19 = unaff_x23;
  FUN_10827f5a4(auStack_68);
  func_0x0001082f90dc();
  return;
}



/* Entry: 1082f49d0; end: 1082f4aa3;  */

void FUN_1082f49d0(void)

{
  undefined1 in_ZR;
  undefined8 *unaff_x19;
  undefined8 unaff_x23;
  
  func_0x0001082f8fcc();
  if ((bool)in_ZR) {
    unaff_x23 = 0x108;
    __Znwm();
    func_0x0001082f8f84();
    func_0x0001082f8e9c();
  }
  else {
    func_0x0001082f90c4();
    func_0x0001082f8ee0();
    func_0x0001082f8f84();
    func_0x0001082f8e9c();
  }
  *unaff_x19 = unaff_x23;
  func_0x0001082f905c();
  func_0x0001082f9054();
  return;
}



/* Entry: 1082f4aa4; end: 1082f4e17;  */

undefined8 *
FUN_1082f4aa4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 *param_7,long *param_8,
             undefined8 *param_9,byte param_10,undefined8 param_11,long param_12)

{
  undefined4 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 uVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar8;
  int extraout_w9;
  long lVar9;
  int extraout_w10;
  undefined8 *puVar10;
  long *plVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 in_register_00005028;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  uVar13 = (undefined4)((ulong)param_2 >> 0x20);
  uVar12 = (undefined4)param_2;
  puVar10 = param_5;
  FUN_1082f4e18();
  uVar7 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  *(short *)(param_5 + 3) = (short)puVar10;
  *(undefined4 *)((long)param_5 + 0x2c) = 0;
  *(undefined8 *)((long)param_5 + 0x24) = 0;
  *(undefined8 *)((long)param_5 + 0x1c) = 0;
  *param_5 = &PTR_FUN_110a3a038;
  param_5[6] = param_6;
  *(undefined1 *)(param_5 + 7) = 0;
  *(byte *)((long)param_5 + 0x39) = *(byte *)((long)param_5 + 0x39) & 0xf0 | param_10 & 3;
  param_5[8] = 0;
  *(undefined1 *)(param_5 + 9) = 0;
  if ((int)param_8[0xc] != 0) {
    if ((int)param_8[0xc] != 1) goto LAB_1082f4da8;
    uVar7 = 1;
  }
  *(undefined1 *)((long)param_5 + 0x49) = uVar7;
  plVar11 = param_5 + 0x11;
  *plVar11 = (long)(param_5 + 10);
  func_0x0001082f8f48(0x200000000);
  uVar5 = param_7[1];
  uVar8 = *param_7;
  func_0x0001082f8f30();
  *(undefined8 *)(param_12 + -8) = extraout_x8;
  *(undefined8 *)(param_12 + -0x10) = in_register_00005028;
  *(ulong *)(param_12 + -0x18) = CONCAT44(uVar13,uVar12);
  *(undefined8 *)(param_12 + -0x20) = uVar5;
  *(undefined8 *)(param_12 + -0x28) = uVar8;
  puVar10 = (undefined8 *)(param_12 + 0x20);
  *puVar10 = 0;
  *(undefined8 *)(param_12 + 0x10) = 0;
  *(undefined8 *)(param_12 + 0x18) = 0;
  *(undefined8 *)(param_12 + 0x28) = 0x100000000;
  if (*(uint *)(param_12 + -0x44) < 2) {
    lVar3 = 0;
    uVar5 = 1;
    FUN_1082f62fc(0,1);
    FUN_1082f5e18(lVar3 + (long)*(int *)(param_5 + 0x12) * 0x38,param_8);
    FUN_1082f6340(plVar11,lVar3,uVar5);
  }
  else {
    FUN_1082f5e18();
  }
  *(int *)(param_5 + 0x12) = *(int *)(param_5 + 0x12) + 1;
  if (*param_8 != 0) {
    do {
      func_0x0001082f8d8c();
    } while (extraout_w9 != 0);
  }
  func_0x0001082f8e08();
  uVar13 = (undefined4)uVar8;
  uStack_68 = 0;
  if (param_8[3] != 0) {
    do {
      func_0x0001082f8f08();
      uVar13 = (undefined4)uVar8;
      uStack_68 = extraout_x8_00;
    } while (extraout_w10 != 0);
  }
  FUN_10839325c(&uStack_78);
  FUN_1082f63fc(param_12,CONCAT44(uStack_74,uStack_78));
  func_0x0001082f640c(0);
  func_0x0001082f640c(uStack_68);
  if (puVar10 != param_9) {
    FUN_10827f504(puVar10);
    *(undefined4 *)(param_5 + 0x20) = 0;
    if ((*(byte *)((long)param_9 + 0xc) & 1) == 0) {
      uVar6 = (ulong)*(uint *)(param_9 + 1);
      if ((int)(*(uint *)((long)param_5 + 0x104) >> 1) < (int)*(uint *)(param_9 + 1)) {
        uVar13 = 0;
        puVar4 = puVar10;
        FUN_10827f408(puVar10);
        FUN_10827f42c(puVar10,puVar4,uVar6);
        uVar6 = (ulong)*(uint *)(param_9 + 1);
      }
      *(int *)(param_5 + 0x20) = (int)uVar6;
      if ((int)uVar6 != 0) {
        _memcpy(*puVar10,*param_9,-(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar6 << 3);
      }
    }
    else {
      if ((*(byte *)((long)param_5 + 0x104) & 1) != 0) {
        _free(*puVar10);
      }
      uVar8 = *param_9;
      *param_9 = 0;
      param_5[0x1f] = uVar8;
      *(uint *)((long)param_5 + 0x104) =
           *(uint *)((long)param_9 + 0xc) & 0xfffffffe | *(uint *)((long)param_5 + 0x104) & 1;
      *(uint *)((long)param_9 + 0xc) = *(uint *)((long)param_9 + 0xc) & 1;
      *(uint *)((long)param_5 + 0x104) = *(uint *)((long)param_5 + 0x104) | 1;
      *(undefined4 *)(param_5 + 0x20) = *(undefined4 *)(param_9 + 1);
    }
    *(undefined4 *)(param_9 + 1) = 0;
  }
  if (*(int *)(param_5 + 0x12) != 0) {
    lVar3 = *plVar11 + (long)*(int *)(param_5 + 0x12) * 0x38;
    lVar9 = *(long *)(lVar3 + -0x38);
    if (lVar9 == 0) {
      *(int *)(param_5 + 0x1c) = (int)*(undefined8 *)(lVar3 + -0x20);
      uVar1 = *(undefined4 *)(lVar3 + -0x18);
    }
    else {
      *(undefined4 *)(param_5 + 0x1c) = *(undefined4 *)(lVar9 + 0x38);
      uVar1 = *(undefined4 *)(lVar9 + 0x3c);
    }
    *(undefined4 *)((long)param_5 + 0xe4) = uVar1;
    FUN_1082f4e84(param_8);
    uStack_78 = uVar13;
    uStack_74 = uVar12;
    uStack_70 = param_3;
    uStack_6c = param_4;
    FUN_108364f90(param_12 + -0x28,param_5 + 4,&uStack_78,1);
    *(undefined2 *)((long)param_5 + 0x1a) = 0;
    return param_5;
  }
LAB_1082f4da8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1082f4dac);
  (*pcVar2)();
}



/* Entry: 1082f4e18; end: 1082f4e83;  */

int FUN_1082f4e18(void)

{
  int iVar1;
  
  if ((bRam000000011372a9a0 & 1) == 0) {
    iVar1 = 0x1372a9a0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1082e6880();
      iRam000000011372a998 = iVar1;
      ___cxa_guard_release(0x11372a9a0);
    }
  }
  return iRam000000011372a998;
}



/* Entry: 1082f4e84; end: 1082f4e8f;  */

undefined4 FUN_1082f4e84(long param_1)

{
  return *(undefined4 *)(param_1 + 100);
}



/* Entry: 1082f4e90; end: 1082f4f07;  */

long FUN_1082f4e90(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    plVar1 = *(long **)(param_1 + 0x38);
    plVar2 = plVar1 + (long)*(int *)(param_1 + 0x40) * 7;
    do {
      if (*plVar1 == 0) {
        func_0x0001082f6118(plVar1[2]);
        FUN_1082f608c(plVar1[1]);
      }
      func_0x00010827f564(plVar1);
      plVar1 = plVar1 + 7;
    } while (plVar1 < plVar2);
  }
  if ((*(byte *)(param_1 + 0x44) & 1) != 0) {
    _free(*(undefined8 *)(param_1 + 0x38));
  }
  return param_1;
}



/* Entry: 1082f4f08; end: 1082f4f57;  */

undefined8 * FUN_1082f4f08(undefined8 *param_1)

{
  FUN_10827f4d4(param_1 + 0x1f);
  FUN_108154c48(param_1 + 0x1b);
  FUN_10827f5a4(param_1 + 0x13);
  FUN_1082f4e90(param_1 + 10);
  FUN_1082f63dc(param_1 + 8);
  FUN_1082fc320(param_1 + 6);
  *param_1 = &PTR_FUN_110a39358;
  func_0x0001082e723c(param_1 + 1);
  return param_1;
}



/* Entry: 1082f4f58; end: 1082f4f6b;  */

void FUN_1082f4f58(void)

{
  FUN_1082f4f08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082f4f6c; end: 1082f4f77;  */

undefined * FUN_1082f4f6c(void)

{
  return &UNK_10f488b72;
}



/* Entry: 1082f4f78; end: 1082f5033;  */

long FUN_1082f4f78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 in_ZR;
  char cVar8;
  char cVar9;
  undefined1 uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  undefined8 extraout_x8;
  long *plVar14;
  long unaff_x19;
  long unaff_x20;
  long *plVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined ***pppuVar23;
  undefined **ppuVar24;
  undefined **ppuStack_68;
  
  func_0x0001082f8e5c();
  func_0x0001082f8d9c();
  plVar15 = *(long **)(param_1 + 0xf8);
  pppuVar23 = &ppuStack_68;
  for (lVar17 = (long)*(int *)(param_1 + 0x100) << 3; lVar17 != 0; lVar17 = lVar17 + -8) {
    if (*plVar15 != 0) {
      ppuStack_68 = &PTR_DAT_110a3a0e8;
      FUN_1082960a8(*plVar15,&ppuStack_68);
      FUN_10826e20c(&ppuStack_68);
    }
    plVar15 = plVar15 + 1;
  }
  lVar13 = *(long *)(unaff_x20 + 0xf0);
  if (lVar13 == 0) {
    lVar13 = unaff_x20 + 0x30;
    func_0x0001082e69b8();
  }
  else {
    func_0x0001082e69b0();
  }
  func_0x0001082f8d24(extraout_x8);
  if ((bool)in_ZR) {
    return lVar13;
  }
  ___stack_chk_fail();
  func_0x0001082f8d60();
  ppuVar24 = &PTR_DAT_110a3a0e8;
  if (*(int *)(lVar13 + 0x90) < 1) {
LAB_1082f52c8:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1082f52cc);
    (*pcVar7)();
  }
  if (**(long **)(lVar13 + 0x88) != 0) {
    if (*(int *)(unaff_x19 + 0x90) < 1) goto LAB_1082f52c8;
    if (((**(long **)(unaff_x19 + 0x88) != 0) &&
        (bVar3 = *(byte *)(lVar13 + 0x49), bVar3 < 4 && bVar3 != 1)) &&
       (bVar3 == *(byte *)(unaff_x19 + 0x49))) {
      if (*(int *)(lVar13 + 0xe0) <= (int)(*(uint *)(unaff_x19 + 0xe0) ^ 0x7fffffff)) {
        iVar11 = *(int *)(lVar13 + 0xe4);
        if (((iVar11 != 0) == (*(uint *)(unaff_x19 + 0xe4) != 0)) &&
           ((iVar11 == 0 ||
            (iVar11 <= (int)(*(uint *)(unaff_x19 + 0xe4) ^ 0x7fffffff) &&
             *(int *)(lVar13 + 0xe0) <= (int)(0xffff - *(uint *)(unaff_x19 + 0xe0)))))) {
          iVar11 = *(int *)(*(long *)(lVar13 + 0x40) + 0x80);
          iVar1 = *(int *)(*(long *)(unaff_x19 + 0x40) + 0x80);
          cVar8 = SBORROW4(iVar11,iVar1);
          cVar9 = iVar11 - iVar1 < 0;
          uVar10 = iVar11 == iVar1;
          if ((bool)uVar10) {
            if (*(int *)(*(long *)(lVar13 + 0x40) + 0x8c) == 0) {
              uVar19 = lVar13 + 0xa0;
              FUN_10828e84c(uVar19,unaff_x19 + 0xa0);
              if ((uVar19 & 1) != 0) {
                return 2;
              }
            }
            lVar20 = lVar13 + 0x30;
            FUN_1082fc374(lVar20,unaff_x19 + 0x30,param_4,lVar13 + 0x20,unaff_x19 + 0x20,0,param_7,
                          param_8,pppuVar23,ppuVar24,lVar17,plVar15);
            if ((int)lVar20 != 0) {
              lVar17 = lVar13 + 0xb0;
              func_0x0001081421c8(lVar17,unaff_x19 + 0xb0);
              if ((int)lVar17 != 0) {
                if ((*(byte *)(lVar13 + 0x39) >> 2 & 1) != 0) {
                  func_0x0001082f9154();
                  if ((bool)uVar10 || cVar9 != cVar8) goto LAB_1082f52c8;
                  if (*(long *)(**(long **)(lVar13 + 0x88) + 0x18) == 0) {
                    return 2;
                  }
                }
                iVar11 = (int)lVar13 + 0xb0;
                FUN_1082c36d0();
                if (iVar11 != 0) {
                  uVar19 = lVar13 + 0xb0;
                  FUN_10828e338();
                  if ((uVar19 & 1) != 0) {
                    return 2;
                  }
                }
                iVar11 = (int)unaff_x19 + 0xb0;
                FUN_1082c36d0();
                if (iVar11 != 0) {
                  uVar19 = unaff_x19 + 0xb0;
                  FUN_10828e338();
                  if ((uVar19 & 1) != 0) {
                    return 2;
                  }
                }
                uVar6 = uRam0000000113254e60;
                uVar5 = uRam0000000113254e58;
                uVar4 = uRam0000000113254e48;
                *(undefined8 *)(lVar13 + 0xb8) = uRam0000000113254e50;
                *(undefined8 *)(lVar13 + 0xb0) = uVar4;
                *(undefined8 *)(lVar13 + 200) = uVar6;
                *(undefined8 *)(lVar13 + 0xc0) = uVar5;
                *(undefined8 *)(lVar13 + 0xd0) = uRam0000000113254e68;
              }
              uVar2 = *(uint *)(unaff_x19 + 0x90);
              uVar18 = (ulong)uVar2;
              lVar17 = *(long *)(unaff_x19 + 0x88);
              uVar12 = *(uint *)(lVar13 + 0x90);
              uVar19 = (ulong)uVar12;
              if ((int)((*(uint *)(lVar13 + 0x94) >> 1) - uVar12) < (int)uVar2) {
                FUN_1082f62fc(uVar19,uVar18);
                FUN_1082f6340(lVar13 + 0x88,uVar19,uVar18);
                uVar12 = *(uint *)(lVar13 + 0x90);
              }
              plVar16 = (long *)(*(long *)(lVar13 + 0x88) + (long)(int)uVar12 * 0x38);
              *(uint *)(lVar13 + 0x90) = uVar12 + uVar2;
              plVar15 = (long *)(lVar17 + 0x10);
              for (uVar19 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar19 != 0;
                  uVar19 = uVar19 - 1) {
                *plVar16 = 0;
                lVar17 = plVar15[-2];
                plVar15[-2] = 0;
                func_0x0001082f64d0(plVar16,lVar17);
                plVar14 = plVar15 + -1;
                if (*plVar16 == 0) {
                  lVar17 = *plVar14;
                  *plVar14 = 0;
                  func_0x0001082f60b0(plVar16 + 1,lVar17);
                  lVar17 = *plVar15;
                  *plVar15 = 0;
                  FUN_1082f6108(plVar16 + 2,lVar17);
                  lVar20 = plVar15[2];
                  lVar17 = plVar15[1];
                  lVar21 = plVar15[3];
                  plVar16[6] = plVar15[4];
                  plVar16[5] = lVar21;
                  plVar16[4] = lVar20;
                  plVar16[3] = lVar17;
                }
                else {
                  lVar20 = *plVar15;
                  lVar17 = *plVar14;
                  lVar22 = plVar15[2];
                  lVar21 = plVar15[1];
                  plVar16[5] = plVar15[3];
                  plVar16[2] = lVar20;
                  plVar16[1] = lVar17;
                  plVar16[4] = lVar22;
                  plVar16[3] = lVar21;
                  plVar15[2] = 0;
                  plVar15[1] = 0;
                  plVar15[4] = 0;
                  plVar15[3] = 0;
                  *plVar15 = 0;
                  *plVar14 = 0;
                }
                plVar16 = plVar16 + 7;
                plVar15 = plVar15 + 7;
              }
              *(ulong *)(lVar13 + 0xe0) =
                   CONCAT44((int)((ulong)*(undefined8 *)(lVar13 + 0xe0) >> 0x20) +
                            (int)((ulong)*(undefined8 *)(unaff_x19 + 0xe0) >> 0x20),
                            (int)*(undefined8 *)(lVar13 + 0xe0) +
                            (int)*(undefined8 *)(unaff_x19 + 0xe0));
              return 0;
            }
          }
        }
      }
    }
  }
  return 2;
}



/* Entry: 1082f5034; end: 1082f52db;  */

undefined8 FUN_1082f5034(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  char cVar9;
  char cVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  
  if (*(int *)(param_1 + 0x90) < 1) {
LAB_1082f52c8:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1082f52cc);
    (*pcVar8)();
  }
  if (**(long **)(param_1 + 0x88) != 0) {
    if (*(int *)(param_2 + 0x90) < 1) goto LAB_1082f52c8;
    if (((**(long **)(param_2 + 0x88) != 0) &&
        (bVar4 = *(byte *)(param_1 + 0x49), bVar4 < 4 && bVar4 != 1)) &&
       (bVar4 == *(byte *)(param_2 + 0x49))) {
      if (*(int *)(param_1 + 0xe0) <= (int)(*(uint *)(param_2 + 0xe0) ^ 0x7fffffff)) {
        iVar12 = *(int *)(param_1 + 0xe4);
        if (((iVar12 != 0) == (*(uint *)(param_2 + 0xe4) != 0)) &&
           ((iVar12 == 0 ||
            (iVar12 <= (int)(*(uint *)(param_2 + 0xe4) ^ 0x7fffffff) &&
             *(int *)(param_1 + 0xe0) <= (int)(0xffff - *(uint *)(param_2 + 0xe0)))))) {
          iVar12 = *(int *)(*(long *)(param_1 + 0x40) + 0x80);
          iVar2 = *(int *)(*(long *)(param_2 + 0x40) + 0x80);
          cVar9 = SBORROW4(iVar12,iVar2);
          cVar10 = iVar12 - iVar2 < 0;
          uVar11 = iVar12 == iVar2;
          if ((bool)uVar11) {
            if (*(int *)(*(long *)(param_1 + 0x40) + 0x8c) == 0) {
              uVar17 = param_1 + 0xa0;
              FUN_10828e84c(uVar17,param_2 + 0xa0);
              if ((uVar17 & 1) != 0) {
                return 2;
              }
            }
            lVar18 = param_1 + 0x30;
            FUN_1082fc374(lVar18,param_2 + 0x30,param_4,param_1 + 0x20,param_2 + 0x20,0);
            if ((int)lVar18 != 0) {
              lVar18 = param_1 + 0xb0;
              func_0x0001081421c8(lVar18,param_2 + 0xb0);
              if ((int)lVar18 != 0) {
                if ((*(byte *)(param_1 + 0x39) >> 2 & 1) != 0) {
                  func_0x0001082f9154();
                  if ((bool)uVar11 || cVar10 != cVar9) goto LAB_1082f52c8;
                  if (*(long *)(**(long **)(param_1 + 0x88) + 0x18) == 0) {
                    return 2;
                  }
                }
                iVar12 = (int)param_1 + 0xb0;
                FUN_1082c36d0();
                if (iVar12 != 0) {
                  uVar17 = param_1 + 0xb0;
                  FUN_10828e338();
                  if ((uVar17 & 1) != 0) {
                    return 2;
                  }
                }
                iVar12 = (int)param_2 + 0xb0;
                FUN_1082c36d0();
                if (iVar12 != 0) {
                  uVar17 = param_2 + 0xb0;
                  FUN_10828e338();
                  if ((uVar17 & 1) != 0) {
                    return 2;
                  }
                }
                uVar7 = uRam0000000113254e60;
                uVar6 = uRam0000000113254e58;
                uVar5 = uRam0000000113254e48;
                *(undefined8 *)(param_1 + 0xb8) = uRam0000000113254e50;
                *(undefined8 *)(param_1 + 0xb0) = uVar5;
                *(undefined8 *)(param_1 + 200) = uVar7;
                *(undefined8 *)(param_1 + 0xc0) = uVar6;
                *(undefined8 *)(param_1 + 0xd0) = uRam0000000113254e68;
              }
              uVar3 = *(uint *)(param_2 + 0x90);
              uVar16 = (ulong)uVar3;
              lVar18 = *(long *)(param_2 + 0x88);
              uVar13 = *(uint *)(param_1 + 0x90);
              uVar17 = (ulong)uVar13;
              if ((int)((*(uint *)(param_1 + 0x94) >> 1) - uVar13) < (int)uVar3) {
                FUN_1082f62fc(uVar17,uVar16);
                FUN_1082f6340(param_1 + 0x88,uVar17,uVar16);
                uVar13 = *(uint *)(param_1 + 0x90);
              }
              plVar15 = (long *)(*(long *)(param_1 + 0x88) + (long)(int)uVar13 * 0x38);
              *(uint *)(param_1 + 0x90) = uVar13 + uVar3;
              plVar1 = (long *)(lVar18 + 0x10);
              for (uVar17 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)); uVar17 != 0;
                  uVar17 = uVar17 - 1) {
                *plVar15 = 0;
                lVar18 = plVar1[-2];
                plVar1[-2] = 0;
                func_0x0001082f64d0(plVar15,lVar18);
                plVar14 = plVar1 + -1;
                if (*plVar15 == 0) {
                  lVar18 = *plVar14;
                  *plVar14 = 0;
                  func_0x0001082f60b0(plVar15 + 1,lVar18);
                  lVar18 = *plVar1;
                  *plVar1 = 0;
                  FUN_1082f6108(plVar15 + 2,lVar18);
                  lVar19 = plVar1[2];
                  lVar18 = plVar1[1];
                  lVar20 = plVar1[3];
                  plVar15[6] = plVar1[4];
                  plVar15[5] = lVar20;
                  plVar15[4] = lVar19;
                  plVar15[3] = lVar18;
                }
                else {
                  lVar19 = *plVar1;
                  lVar18 = *plVar14;
                  lVar21 = plVar1[2];
                  lVar20 = plVar1[1];
                  plVar15[5] = plVar1[3];
                  plVar15[2] = lVar19;
                  plVar15[1] = lVar18;
                  plVar15[4] = lVar21;
                  plVar15[3] = lVar20;
                  plVar1[2] = 0;
                  plVar1[1] = 0;
                  plVar1[4] = 0;
                  plVar1[3] = 0;
                  *plVar1 = 0;
                  *plVar14 = 0;
                }
                plVar15 = plVar15 + 7;
                plVar1 = plVar1 + 7;
              }
              *(ulong *)(param_1 + 0xe0) =
                   CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0xe0) >> 0x20) +
                            (int)((ulong)*(undefined8 *)(param_2 + 0xe0) >> 0x20),
                            (int)*(undefined8 *)(param_1 + 0xe0) +
                            (int)*(undefined8 *)(param_2 + 0xe0));
              return 0;
            }
          }
        }
      }
    }
  }
  return 2;
}



/* Entry: 1082f52dc; end: 1082f5417;  */

/* WARNING: Removing unreachable block (ram,0x0001082f544c) */

undefined8 * FUN_1082f52dc(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *plVar2;
  long lVar3;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined8 *puStack_70;
  undefined ***pppuStack_60;
  undefined8 uStack_58;
  
  func_0x0001082f8e5c();
  func_0x0001082f8d9c();
  uStack_58 = extraout_x8;
  if (param_1[0x1e] == 0) {
    in_ZR = unaff_x19 == 0;
    param_1 = unaff_x20;
    FUN_1082fbcfc();
    if (unaff_x20[0x1e] == 0) goto LAB_1082f53cc;
  }
  if (unaff_x20[0x1d] != 0) {
    uStack_88 = 0;
    uStack_80 = 0x100000000;
    plVar2 = (long *)unaff_x20[0x1f];
    for (lVar3 = (long)*(int *)(unaff_x20 + 0x20) << 3; lVar3 != 0; lVar3 = lVar3 + -8) {
      if (*plVar2 != 0) {
        ppuStack_78 = &PTR_DAT_110a3a168;
        puStack_70 = &uStack_88;
        pppuStack_60 = &ppuStack_78;
        FUN_1082960a8(*plVar2,&ppuStack_78);
        FUN_10826e20c(&ppuStack_78);
      }
      plVar2 = plVar2 + 1;
    }
    FUN_1082a1068();
    FUN_1082a10b4();
    FUN_1082a10bc();
    param_1 = &uStack_88;
    FUN_1082f6590();
  }
LAB_1082f53cc:
  func_0x0001082f8d24(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar1 = &uStack_88;
    FUN_1082f6590();
    func_0x0001082f8d60();
    puVar1 = puVar1 + 6;
    FUN_1082f3a00(puVar1);
    return (undefined8 *)(ulong)((uint)puVar1 & 0xffff);
  }
  return param_1;
}



/* Entry: 1082f5418; end: 1082f546f;  */

/* WARNING: Removing unreachable block (ram,0x0001082f544c) */

uint FUN_1082f5418(long param_1)

{
  param_1 = param_1 + 0x30;
  FUN_1082f3a00(param_1);
  return (uint)param_1 & 0xffff;
}



/* Entry: 1082f5470; end: 1082f547f;  */

undefined8 FUN_1082f5470(long param_1)

{
  byte bVar1;
  code *pcVar2;
  
  bVar1 = *(byte *)(param_1 + 0x39) & 3;
  if (bVar1 < 2) {
    return 0;
  }
  if (bVar1 == 2) {
    return 1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1082fc374);
  (*pcVar2)();
}



/* Entry: 1082f5480; end: 1082f5937;  */

void FUN_1082f5480(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  ulong uVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  long lVar7;
  undefined1 auVar8 [16];
  long lVar9;
  code *pcVar10;
  char cVar11;
  char cVar12;
  undefined1 uVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong uVar18;
  ulong extraout_x8_01;
  code *extraout_x8_02;
  int iVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long extraout_x10;
  ulong uVar23;
  long extraout_x10_00;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  uint *extraout_x11;
  uint *extraout_x11_00;
  uint *puVar24;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong extraout_x13;
  ulong extraout_x13_00;
  long extraout_x14;
  long extraout_x14_00;
  undefined8 *puVar25;
  int *piVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  int iVar29;
  long lVar30;
  int iVar31;
  uint *puVar32;
  long *plVar33;
  int *piVar34;
  ushort uVar35;
  long lVar36;
  long *unaff_x28;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  int iStack_1d4;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  int iStack_1b4;
  long lStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long lStack_190;
  int *piStack_188;
  long *plStack_180;
  long lStack_178;
  undefined ***pppuStack_170;
  undefined **ppuStack_168;
  undefined8 *puStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined1 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined4 uStack_104;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  long *plStack_88;
  undefined ***pppuStack_78;
  undefined8 uStack_70;
  
  lVar36 = param_1;
  uStack_f8 = param_2;
  uStack_ec = param_8;
  uStack_e8 = param_4;
  uStack_dc = param_5;
  uStack_d8 = param_6;
  uStack_d0 = param_7;
  func_0x0001082f8d9c();
  piVar34 = *(int **)(lVar36 + 0x40);
  if (((*(byte *)(lVar36 + 0x48) & 1) == 0) && (piVar34[0x23] != 0)) {
    lVar36 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    uStack_c0 = *(undefined8 *)(param_1 + 0xa0);
    uStack_b8 = *(undefined8 *)(param_1 + 0xa8);
    lVar36 = 1;
  }
  plVar33 = (long *)(param_1 + 0xb0);
  plVar14 = plVar33;
  uStack_70 = extraout_x8;
  func_0x000108363bec(plVar33,0x113254e48);
  plVar16 = (long *)0x113254e20;
  if ((int)plVar14 == 0) {
    plVar16 = plVar33;
  }
  if (piVar34 != (int *)0x0) {
    do {
      cVar12 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar34,0x10);
      if (bVar5) {
        *piVar34 = *piVar34 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
  }
  lStack_a0 = 0;
  if (*(long *)(param_1 + 0x98) != 0) {
    do {
      func_0x0001082f9108();
      lStack_a0 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  bVar3 = *(byte *)(param_1 + 0x39);
  piVar26 = *(int **)(param_1 + 0xd8);
  if (piVar26 != (int *)0x0) {
    do {
      cVar12 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar26,0x10);
      if (bVar5) {
        *piVar26 = *piVar26 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
  }
  lVar30 = *(long *)(param_1 + 0xf8);
  iVar31 = *(int *)(param_1 + 0x100);
  plVar14 = param_3;
  lStack_c8 = param_1;
  FUN_10840f8d0(param_3,0xe1,8);
  lVar9 = lStack_a0;
  plVar33 = (long *)0x0;
  uStack_104 = param_9;
  lVar15 = param_3[1];
  param_3[1] = (long)(plVar14 + 0x1b);
  plVar14[0x1b] = 0x1082f65b8;
  lVar20 = param_3[1];
  param_3[1] = lVar20 + 8;
  *(char *)(lVar20 + 8) = (char)plVar14 - (char)(int)lVar15;
  *param_3 = param_3[1] + 1;
  param_3[1] = param_3[1] + 1;
  lStack_a0 = 0;
  *(undefined4 *)(plVar14 + 1) = 0x45;
  plVar14[3] = 0;
  plVar14[2] = 0;
  plVar14[5] = 0;
  plVar14[4] = 0;
  plVar14[7] = 0;
  plVar14[6] = 0;
  *(undefined4 *)(plVar14 + 8) = 0;
  *plVar14 = (long)&PTR_SUB_110a3a1e8;
  plStack_110 = plVar14 + 9;
  *plStack_110 = (long)piVar34;
  plStack_118 = plVar14 + 10;
  *plStack_118 = (long)piVar26;
  plStack_120 = plVar14 + 0xd;
  *plStack_120 = 0;
  plVar14[0xb] = lVar30;
  plVar14[0xc] = (long)iVar31;
  plStack_a8 = plVar14 + 0xf;
  *plStack_a8 = 0;
  plVar14[0xe] = 0x100000000;
  plVar14[0x10] = 0;
  plVar14[0x11] = 0;
  lVar21 = plVar16[4];
  lVar20 = plVar16[1];
  lVar15 = *plVar16;
  lVar30 = plVar16[2];
  lVar7 = plVar16[3];
  plStack_128 = plVar14 + 0x19;
  *plStack_128 = lVar9;
  plVar14[0x13] = lVar20;
  plVar14[0x12] = lVar15;
  plVar14[0x15] = lVar7;
  plVar14[0x14] = lVar30;
  plVar14[0x16] = lVar21;
  uStack_98 = 0;
  *(byte *)(plVar14 + 0x1a) = bVar3 >> 2 & 1;
  uVar35 = (ushort)lVar36;
  auVar37._0_4_ = -(uint)((int)((uint)uVar35 << 0x1f) < 0);
  auVar37._4_4_ = -(uint)((int)((uint)uVar35 << 0x1f) < 0);
  auVar37._8_4_ = -(uint)((int)((uint)uVar35 << 0x1f) < 0);
  auVar37._12_4_ = -(uint)((int)((uint)uVar35 << 0x1f) < 0);
  auVar8._8_8_ = uStack_b8;
  auVar8._0_8_ = uStack_c0;
  auVar6._8_4_ = 0xff800000;
  auVar6._0_8_ = 0xff800000ff800000;
  auVar6._12_4_ = 0xff800000;
  auVar38._8_4_ = 0xff800000;
  auVar38._0_8_ = 0xff800000ff800000;
  auVar38._12_4_ = 0xff800000;
  auVar38 = auVar38 ^ (auVar6 ^ auVar8) & auVar37;
  plVar14[0x18] = auVar38._8_8_;
  plVar14[0x17] = auVar38._0_8_;
  puVar32 = *(uint **)(piVar34 + 2);
  plStack_100 = param_3;
  func_0x0001082f9140();
  lVar15 = extraout_x10;
  puVar24 = extraout_x11;
  uVar18 = extraout_x12;
  uVar22 = extraout_x13;
  lVar20 = extraout_x14;
  for (; lVar30 = lStack_c8, uVar13 = puVar32 == puVar24, !(bool)uVar13; puVar32 = puVar32 + 6) {
    uVar1 = *puVar32;
    if (4 < uVar1) {
LAB_1082f58b4:
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1082f58b8);
      (*pcVar10)();
    }
    unaff_x28 = *(long **)(puVar32 + 2);
    lVar30 = *(long *)(puVar32 + 4);
    uVar2 = *(undefined4 *)(lVar15 + (ulong)uVar1 * 4);
    uVar13 = (undefined1)(uVar22 >> ((ulong)(uVar1 << 3) & 0x3f));
    if (plVar33 < (long *)plVar14[0x11]) {
      *plVar33 = lVar30 + 8;
      *(undefined4 *)(plVar33 + 1) = uVar2;
      *(undefined1 *)((long)plVar33 + 0xc) = uVar13;
      *(int *)(plVar33 + 2) = (int)unaff_x28;
      plVar33 = plVar33 + 3;
    }
    else {
      piVar34 = (int *)*plStack_a8;
      lVar36 = (long)plVar33 - (long)piVar34;
      lVar15 = 0;
      if (lVar20 != 0) {
        lVar15 = lVar36 / lVar20;
      }
      uVar22 = lVar15 + 1;
      if (uVar18 < uVar22) {
        FUN_1082f681c();
        goto LAB_1082f58b4;
      }
      uVar4 = 0;
      if (lVar20 != 0) {
        uVar4 = (plVar14[0x11] - (long)piVar34) / lVar20;
      }
      uVar23 = uVar4 * 2;
      if (uVar23 < uVar22 || uVar23 - uVar22 == 0) {
        uVar23 = uVar22;
      }
      if (0x555555555555554 < uVar4) {
        uVar23 = uVar18;
      }
      if (uVar23 == 0) {
        lVar15 = 0;
      }
      else {
        if (uVar18 < uVar23) {
          func_0x000104bd35f4();
          goto LAB_1082f58b4;
        }
        lVar15 = uVar23 * 0x18;
        __Znwm();
      }
      plVar16 = (long *)(lVar15 + lVar36);
      *plVar16 = lVar30 + 8;
      *(undefined4 *)(plVar16 + 1) = uVar2;
      *(undefined1 *)((long)plVar16 + 0xc) = uVar13;
      *(int *)(plVar16 + 2) = (int)unaff_x28;
      plVar33 = plVar16 + 3;
      unaff_x28 = plVar16 + (lVar36 / -0x18) * 3;
      _memcpy(unaff_x28,piVar34,lVar36);
      plVar14[0xf] = (long)unaff_x28;
      plVar14[0x10] = (long)plVar33;
      plVar14[0x11] = lVar15 + uVar23 * 0x18;
      if (piVar34 != (int *)0x0) {
        __ZdlPv(piVar34);
      }
      func_0x0001082f9140();
      lVar15 = extraout_x10_00;
      puVar24 = extraout_x11_00;
      uVar18 = extraout_x12_00;
      uVar22 = extraout_x13_00;
      lVar20 = extraout_x14_00;
    }
    plVar14[0x10] = (long)plVar33;
  }
  uVar2 = (undefined4)(((long)plVar33 - plVar14[0xf]) / 0x18);
  lVar15 = *(long *)(plVar14[9] + 0x78);
  plVar14[2] = plVar14[0xf];
  *(undefined4 *)(plVar14 + 3) = uVar2;
  *(undefined4 *)((long)plVar14 + 0x1c) = uVar2;
  plVar14[4] = lVar15;
  plVar16 = (long *)plVar14[0xb];
  for (puVar25 = (undefined8 *)(plVar14[0xc] << 3); puVar25 != (undefined8 *)0x0;
      puVar25 = puVar25 + -1) {
    if (*plVar16 != 0) {
      ppuStack_90 = &PTR_FUN_110a3a240;
      plStack_88 = plVar14;
      pppuStack_78 = &ppuStack_90;
      FUN_1082960a8(*plVar16,&ppuStack_90);
      FUN_10826e20c(&ppuStack_90);
    }
    plVar16 = plVar16 + 1;
  }
  *(int *)(plVar14 + 8) = (int)plVar14[0xe];
  FUN_10827f5a4(&uStack_98);
  FUN_10827f5a4(&lStack_a0);
  uStack_140 = *(undefined1 *)(lVar30 + 0x49);
  uStack_13c = uStack_ec;
  uStack_138 = uStack_104;
  lVar15 = lVar30 + 0x30;
  FUN_1082fc8bc(lVar15,uStack_f8,plStack_100,uStack_e8,uStack_dc,uStack_d8,uStack_d0,plVar14);
  *(long *)(lVar30 + 0xf0) = lVar15;
  func_0x0001082f8d24(uStack_70);
  if ((bool)uVar13) {
    return;
  }
  ___stack_chk_fail();
  lVar20 = lVar15;
  func_0x0001082f8d60();
  lStack_178 = lVar30;
  ppuStack_168 = &PTR_FUN_110a3a240;
  pcStack_148 = FUN_1082f5938;
  uVar27 = *(undefined8 *)(*(long *)(lVar20 + 0x40) + 0x78);
  lStack_1b0 = 0;
  iVar31 = *(int *)(lVar20 + 0x90);
  cVar12 = iVar31 < 0;
  uVar13 = iVar31 == 0;
  cVar11 = '\0';
  plStack_1a0 = unaff_x28;
  plStack_198 = plVar14;
  lStack_190 = lVar36;
  piStack_188 = piVar34;
  plStack_180 = plVar33;
  pppuStack_170 = &ppuStack_90;
  puStack_160 = puVar25;
  lStack_158 = lVar15;
  puStack_150 = &stack0xfffffffffffffff0;
  if (iVar31 < 1) goto LAB_1082f5da0;
  func_0x0001082f9160();
  plVar33 = *(long **)(lVar20 + 0x88);
  if (*plVar33 == 0) {
    plVar16 = (long *)plVar33[1];
    (**(code **)(*plVar16 + 0x18))();
    if ((((ulong)plVar16 & 1) == 0) || (plVar33[1] == 0)) goto LAB_1082f59c0;
    if (*(long *)(plVar33[1] + 0x18) != 0) {
      do {
        func_0x0001082f9108();
      } while (extraout_w11_00 != 0);
    }
    uStack_1a8 = 0;
    func_0x0001082f9064();
  }
  else {
LAB_1082f59c0:
    uStack_1c8 = 0;
    uStack_1c0 = 0;
  }
  func_0x0001082f7d4c(&lStack_1b0,&iStack_1b4,&uStack_1c8);
  func_0x0001082f8e94();
  if (lStack_1b0 == 0) {
    puVar17 = puVar25;
    (**(code **)(lRam0000000000000000 + 0x18))
              (0,uVar27,*(undefined4 *)(lVar15 + 0xe0),&lStack_1b0,&iStack_1b4);
    if (puVar17 == (undefined8 *)0x0) {
      FUN_10841076c(&UNK_10f488d96);
      goto LAB_1082f5c98;
    }
    lVar36 = lVar15 + 0xb0;
    func_0x000108363bec(lVar36,0x113254e48);
    plVar33 = *(long **)(lVar15 + 0x88);
    plVar16 = plVar33 + (long)*(int *)(lVar15 + 0x90) * 7;
    while( true ) {
      cVar11 = SBORROW8((long)plVar33,(long)plVar16);
      cVar12 = (long)plVar33 - (long)plVar16 < 0;
      uVar13 = 1;
      if (plVar33 == plVar16) break;
      lVar20 = *(long *)(lVar15 + 0x40);
      if (*plVar33 == 0) {
        lVar30 = plVar33[1];
        func_0x0001082f8e68();
        (*extraout_x8_02)();
        if (lVar30 != 0) {
          iVar31 = *(int *)(lVar20 + 0x78) * (int)plVar33[3];
          _memcpy(puVar17,lVar30 + plVar33[5],(long)iVar31);
          puVar17 = (undefined8 *)((long)puVar17 + (long)iVar31);
        }
      }
      else {
        uVar1 = *(uint *)(*plVar33 + 0x38);
        for (uVar18 = 0; (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != uVar18; uVar18 = uVar18 + 1
            ) {
          uStack_1c8 = *(undefined8 *)(*(long *)(*plVar33 + 8) + uVar18 * 8);
          if ((int)lVar36 != 0) {
            func_0x00010827a0cc(plVar33 + 1,&uStack_1c8,1);
          }
          puVar28 = puVar17 + 1;
          *puVar17 = uStack_1c8;
          if (*(int *)(lVar20 + 0x8c) != 0) {
            *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(*(long *)(*plVar33 + 0x20) + uVar18 * 4);
            puVar28 = (undefined8 *)((long)puVar17 + 0xc);
          }
          puVar17 = puVar28;
          if (*(long *)(*plVar33 + 0x18) != 0) {
            puVar17 = puVar28 + 1;
            *puVar28 = *(undefined8 *)(*(long *)(*plVar33 + 0x18) + uVar18 * 8);
          }
        }
      }
      plVar33 = plVar33 + 7;
    }
  }
  else {
    uVar18 = *(ulong *)(*(long *)(lVar15 + 0x40) + 0x78);
    uVar22 = (ulong)iStack_1b4;
    iStack_1b4 = 0;
    if (uVar18 != 0) {
      iStack_1b4 = (int)(uVar22 / uVar18);
    }
  }
  lStack_1d0 = 0;
  iStack_1d4 = 0;
  func_0x0001082f9154();
  if ((bool)uVar13 || cVar12 != cVar11) goto LAB_1082f5da0;
  plVar33 = *(long **)(lVar15 + 0x88);
  if ((((*plVar33 == 0) && (plVar16 = (long *)plVar33[2], plVar16 != (long *)0x0)) &&
      ((**(code **)(*plVar16 + 0x18))(), ((ulong)plVar16 & 1) != 0)) && (plVar33[2] != 0)) {
    if (*(long *)(plVar33[2] + 0x18) != 0) {
      do {
        func_0x0001082f9108();
      } while (extraout_w11_01 != 0);
    }
    uStack_1a8 = 0;
    func_0x0001082f9064();
  }
  else {
    uStack_1c8 = 0;
    uStack_1c0 = 0;
  }
  func_0x0001082f7d4c(&lStack_1d0,&iStack_1d4,&uStack_1c8);
  func_0x0001082f8e94();
  if (*(int *)(lVar15 + 0xe4) == 0) {
    if (lStack_1d0 != 0) goto LAB_1082f5bf4;
LAB_1082f5c00:
    FUN_1082e91fc();
    lVar20 = lStack_1b0;
    lVar36 = lStack_1d0;
    *(undefined8 **)(lVar15 + 0xe8) = puVar25;
    if (lStack_1d0 == 0) {
      lStack_1b0 = 0;
      lStack_1f0 = lVar20;
      plVar33 = &lStack_1f0;
      FUN_1082f2d2c();
    }
    else {
      lStack_1d0 = 0;
      lStack_1e0 = lVar36;
      lStack_1b0 = 0;
      lStack_1e8 = lVar20;
      FUN_1082e6d44();
      FUN_1082647e4(&lStack_1e8);
      plVar33 = &lStack_1e0;
    }
    FUN_1082647e4(plVar33);
  }
  else {
    if (lStack_1d0 != 0) {
LAB_1082f5bf4:
      iStack_1d4 = iStack_1d4 >> 1;
      goto LAB_1082f5c00;
    }
    puVar17 = puVar25;
    (**(code **)(lRam0000000000000000 + 0x20))(0,*(int *)(lVar15 + 0xe4),&lStack_1d0,&iStack_1d4);
    if (puVar17 != (undefined8 *)0x0) {
      func_0x0001082f9154();
      if (!(bool)uVar13 && cVar12 == cVar11) {
        func_0x0001082f7d08(*(undefined8 *)(lVar15 + 0x88));
        func_0x0001082f9154();
        if (!(bool)uVar13 && cVar12 == cVar11) {
          plVar33 = *(long **)(lVar15 + 0x88);
          lVar36 = *plVar33;
          if (lVar36 == 0) {
            iVar31 = (int)plVar33[4];
          }
          else {
            iVar31 = *(int *)(lVar36 + 0x3c);
          }
          uVar18 = extraout_x8_01;
          if (iVar31 != 0) {
            _memmove(puVar17);
            uVar18 = (ulong)*(uint *)(lVar15 + 0x90);
            if ((int)*(uint *)(lVar15 + 0x90) < 1) goto LAB_1082f5da0;
            plVar33 = *(long **)(lVar15 + 0x88);
            lVar36 = *plVar33;
          }
          if (lVar36 == 0) {
            iVar29 = (int)plVar33[3];
            iVar31 = (int)plVar33[4];
          }
          else {
            iVar29 = *(int *)(lVar36 + 0x38);
            iVar31 = *(int *)(lVar36 + 0x3c);
          }
          lVar36 = 1;
LAB_1082f5d24:
          if (lVar36 < (int)uVar18) {
            lVar20 = 0;
            do {
              if ((int)uVar18 <= lVar36) goto LAB_1082f5da0;
              plVar33 = (long *)(*(long *)(lVar15 + 0x88) + lVar36 * 0x38);
              lVar30 = *plVar33;
              if (lVar30 == 0) {
                if ((int)plVar33[4] <= lVar20) {
                  iVar19 = (int)plVar33[3];
                  goto LAB_1082f5d90;
                }
              }
              else if (*(int *)(lVar30 + 0x3c) <= lVar20) goto LAB_1082f5d84;
              func_0x0001082f7d08();
              *(short *)((long)puVar17 + lVar20 * 2 + (long)iVar31 * 2) =
                   *(short *)((long)plVar33 + lVar20 * 2) + (short)iVar29;
              lVar20 = lVar20 + 1;
              uVar18 = (ulong)*(uint *)(lVar15 + 0x90);
            } while( true );
          }
          goto LAB_1082f5c00;
        }
      }
LAB_1082f5da0:
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1082f5da4);
      (*pcVar10)();
    }
    FUN_10841076c(&UNK_10f488db4);
  }
  FUN_1082647e4(&lStack_1d0);
LAB_1082f5c98:
  FUN_1082647e4(&lStack_1b0);
  return;
LAB_1082f5d84:
  iVar19 = *(int *)(lVar30 + 0x38);
LAB_1082f5d90:
  iVar31 = iVar31 + (int)lVar20;
  iVar29 = iVar19 + iVar29;
  lVar36 = lVar36 + 1;
  goto LAB_1082f5d24;
}


